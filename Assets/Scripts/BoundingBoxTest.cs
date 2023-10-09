using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoundingBoxTest : MonoBehaviour
{

    Bounds bounds;
    // Start is called before the first frame update
  void Start()
    {
        Mesh mesh = GetComponent<MeshFilter>().mesh;
        Vector3[] vertices = mesh.vertices;
        Vector2[] uvs = new Vector2[vertices.Length];
         bounds= mesh.bounds;
        int i = 0;
        while (i < uvs.Length)
        {
            uvs[i] = new Vector2(vertices[i].x / bounds.size.x, vertices[i].z / bounds.size.x);
            i++;
        }
        mesh.uv = uvs;


        MeshRenderer meshRenderer= GetComponent<MeshRenderer>();
    
       
    }



    void OnDrawGizmos()
{
	 Gizmos.matrix = Matrix4x4.identity;
        Gizmos.color = Color.blue;
        Gizmos.DrawWireCube(bounds.center, bounds.extents * 2);
}



   
    // Update is called once per frame
    void Update()
    {
        //Selected();
    }
}
