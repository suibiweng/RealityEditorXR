using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.IO;

public class MeshExporter : MonoBehaviour
{
    public GameObject objectToExport;
    public string filePath = "Assets/ExportedMesh.obj";
    public string serverUrl = "http://your-laptop-ip:port/upload";
    public GameObject box;

    void Start()
    {
        // Uncomment the following lines to use the desired functionality
        // ExportMesh(objectToExport, filePath);
        // UploadMeshDirectly(objectToExport);
        // CropAndUploadMesh(box);
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            CropAndUploadMesh(box);
        }
    }

    public void ExportMesh(GameObject obj, string filePath)
    {
        MeshFilter meshFilter = obj.GetComponent<MeshFilter>();
        if (meshFilter == null)
        {
            Debug.LogError("The selected object does not have a MeshFilter component.");
            return;
        }

        Mesh mesh = CreateReadableMesh(meshFilter.mesh);

        using (StreamWriter sw = new StreamWriter(filePath))
        {
            sw.Write(MeshToString(mesh, obj.transform));
        }

        Debug.Log("Mesh exported to " + filePath);
    }

    public void UploadMeshDirectly(GameObject obj)
    {
        MeshFilter meshFilter = obj.GetComponent<MeshFilter>();
        if (meshFilter == null)
        {
            Debug.LogError("The selected object does not have a MeshFilter component.");
            return;
        }

        Mesh mesh = CreateReadableMesh(meshFilter.mesh);
        string meshString = MeshToString(mesh, obj.transform);
        byte[] meshData = System.Text.Encoding.UTF8.GetBytes(meshString);

        UploadMesh(meshData);
    }

    public void CropMeshWithBoundingBox(GameObject boundingBox)
    {
        MeshFilter meshFilter = objectToExport.GetComponent<MeshFilter>();
        if (meshFilter == null)
        {
            Debug.LogError("The object to export does not have a MeshFilter component.");
            return;
        }

        Mesh originalMesh = CreateReadableMesh(meshFilter.mesh);
        Mesh croppedMesh = CropMesh(originalMesh, boundingBox.transform);

        // Update the mesh filter with the cropped mesh
        meshFilter.mesh = croppedMesh;
    }

    public void CropAndUploadMesh(GameObject boundingBox)
    {
        MeshFilter meshFilter = objectToExport.GetComponent<MeshFilter>();
        if (meshFilter == null)
        {
            Debug.LogError("The object to export does not have a MeshFilter component.");
            return;
        }

        Mesh originalMesh = CreateReadableMesh(meshFilter.mesh);
        Mesh croppedMesh = CropMesh(originalMesh, boundingBox.transform);

        string meshString = MeshToString(croppedMesh, objectToExport.transform);
        byte[] meshData = System.Text.Encoding.UTF8.GetBytes(meshString);

        UploadMesh(meshData);
    }

    private Mesh CreateReadableMesh(Mesh originalMesh)
    {
        // Create a new mesh
        Mesh newMesh = new Mesh();

        // Copy vertices
        newMesh.vertices = originalMesh.vertices;
        
        // Copy normals
        if (originalMesh.normals != null && originalMesh.normals.Length > 0)
        {
            newMesh.normals = originalMesh.normals;
        }

        // Copy UVs
        if (originalMesh.uv != null && originalMesh.uv.Length > 0)
        {
            newMesh.uv = originalMesh.uv;
        }

        // Copy tangents
        if (originalMesh.tangents != null && originalMesh.tangents.Length > 0)
        {
            newMesh.tangents = originalMesh.tangents;
        }

        // Copy colors
        if (originalMesh.colors != null && originalMesh.colors.Length > 0)
        {
            newMesh.colors = originalMesh.colors;
        }

        // Copy triangles
        newMesh.triangles = originalMesh.triangles;

        return newMesh;
    }

    private Mesh CropMesh(Mesh mesh, Transform boundingBoxTransform)
    {
        Vector3[] originalVertices = mesh.vertices;
        int[] originalTriangles = mesh.triangles;

        List<Vector3> newVertices = new List<Vector3>();
        List<int> newTriangles = new List<int>();

        Dictionary<int, int> vertexMap = new Dictionary<int, int>();

        // Define the bounds of the bounding box in local space
        Vector3 localCenter = boundingBoxTransform.localPosition;
        Vector3 localExtents = boundingBoxTransform.localScale / 2;
        Quaternion localRotation = boundingBoxTransform.localRotation;

        // Find vertices within the bounding box
        for (int i = 0; i < originalVertices.Length; i++)
        {
            Vector3 localVertex = originalVertices[i];
            Vector3 rotatedVertex = Quaternion.Inverse(localRotation) * (localVertex - localCenter);

            if (Mathf.Abs(rotatedVertex.x) <= localExtents.x &&
                Mathf.Abs(rotatedVertex.y) <= localExtents.y &&
                Mathf.Abs(rotatedVertex.z) <= localExtents.z)
            {
                vertexMap[i] = newVertices.Count;
                newVertices.Add(originalVertices[i]);
            }
        }

        // Create new triangles using the vertices within the bounding box
        for (int i = 0; i < originalTriangles.Length; i += 3)
        {
            int v0 = originalTriangles[i];
            int v1 = originalTriangles[i + 1];
            int v2 = originalTriangles[i + 2];

            if (vertexMap.ContainsKey(v0) && vertexMap.ContainsKey(v1) && vertexMap.ContainsKey(v2))
            {
                newTriangles.Add(vertexMap[v0]);
                newTriangles.Add(vertexMap[v1]);
                newTriangles.Add(vertexMap[v2]);
            }
        }

        // Create new mesh
        Mesh newMesh = new Mesh();
        newMesh.vertices = newVertices.ToArray();
        newMesh.triangles = newTriangles.ToArray();
        newMesh.RecalculateNormals();

        return newMesh;
    }

    private string MeshToString(Mesh mesh, Transform transform)
    {
        Vector3[] vertices = mesh.vertices;
        Vector3[] normals = mesh.normals;
        Vector2[] uv = mesh.uv;
        int[] triangles = mesh.triangles;

        System.Text.StringBuilder sb = new System.Text.StringBuilder();

        sb.AppendLine("o " + transform.name);

        foreach (Vector3 v in vertices)
        {
            Vector3 vertex = transform.TransformPoint(v);
            sb.AppendLine(string.Format("v {0} {1} {2}", vertex.x, vertex.y, vertex.z));
        }
        sb.AppendLine();

        foreach (Vector3 n in normals)
        {
            Vector3 normal = transform.TransformDirection(n);
            sb.AppendLine(string.Format("vn {0} {1} {2}", normal.x, normal.y, normal.z));
        }
        sb.AppendLine();

        foreach (Vector2 uvCoord in uv)
        {
            sb.AppendLine(string.Format("vt {0} {1}", uvCoord.x, uvCoord.y));
        }
        sb.AppendLine();

        for (int i = 0; triangles != null && i < triangles.Length; i += 3)
        {
            sb.AppendLine(string.Format("f {0}/{0}/{0} {1}/{1}/{1} {2}/{2}/{2}",
                triangles[i] + 1, triangles[i + 1] + 1, triangles[i + 2] + 1));
        }

        return sb.ToString();
    }

    private void UploadMesh(byte[] meshData)
    {
        StartCoroutine(Upload(meshData));
    }

    private IEnumerator Upload(byte[] meshData)
    {
        WWWForm form = new WWWForm();
        form.AddBinaryData("file", meshData, "exportedMesh.obj", "application/octet-stream");

        using (UnityWebRequest www = UnityWebRequest.Post(serverUrl, form))
        {
            yield return www.SendWebRequest();

            if (www.result == UnityWebRequest.Result.Success)
            {
                Debug.Log("File upload complete.");
            }
            else
            {
                Debug.LogError("File upload failed: " + www.error);
            }
        }
    }
}
