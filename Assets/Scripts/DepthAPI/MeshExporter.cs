using System.Collections;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;

public class MeshExporter : MonoBehaviour
{
    public GameObject objectToExport;
    public string filePath = "Assets/ExportedMesh.obj";
    public string serverUrl = "http://your-laptop-ip:port/upload";

    void Start()
    {

    }

    public void ExportMesh(GameObject obj, string filePath)
    {
        MeshFilter meshFilter = obj.GetComponent<MeshFilter>();
        if (meshFilter == null)
        {
            Debug.LogError("The selected object does not have a MeshFilter component.");
            return;
        }

        Mesh mesh = meshFilter.mesh;

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

        Mesh mesh = meshFilter.mesh;
        string meshString = MeshToString(mesh, obj.transform);
        byte[] meshData = System.Text.Encoding.UTF8.GetBytes(meshString);

        UploadMesh(meshData);
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

        for (int i = 0; i < triangles.Length; i += 3)
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
