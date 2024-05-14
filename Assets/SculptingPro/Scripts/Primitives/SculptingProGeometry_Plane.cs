using UnityEngine;

namespace SculptingPro.Geometry
{
    /// <summary>
    /// Simple procedural geometry. Call 'GetPrimitive' to return the specific geometry mesh data.
    /// Written by Matej Vanco 2023.
    /// https://matejvanco.com
    /// </summary>
    public static class SculptingProGeometry_Plane
    {
        /// <summary>
        /// Returns a completely generated geometry
        /// </summary>
        public static Mesh GetPrimitive(int resolution = 24, float length = 1.0f, float width = 1.0f, string meshName = "Plane")
        {
            Mesh m = new Mesh();
            m.name = meshName;

            resolution = Mathf.Max(2, Mathf.Min(resolution, 200));

            Vector3[] vertices = new Vector3[resolution * resolution];
            int[] triangles = new int[((resolution - 1) * (resolution - 1)) * 6];
            Vector2[] uvs = new Vector2[vertices.Length];

            int v = 0;
            int t = 0;

            for (int z = 0; z < resolution; z++)
            {
                float zPos = ((float)z / (resolution - 1) - .5f) * length;
                int vvv = v + (z * resolution);
                for (int x = 0; x < resolution; x++)
                {
                    float xPos = ((float)x / (resolution - 1) - .5f) * width;
                    vertices[vvv + x] = new Vector3(xPos, 0f, zPos);
                    uvs[vvv + x] = new Vector2((float)x / (resolution - 1), (float)z / (resolution - 1));
                }
            }

            for (int face = 0; face < (resolution - 1) * (resolution - 1); face++)
            {
                int i = face % (resolution - 1) + (face / (resolution - 1) * resolution);
                triangles[t++] = i + resolution;
                triangles[t++] = i + 1;
                triangles[t++] = i;

                triangles[t++] = i + resolution;
                triangles[t++] = i + resolution + 1;
                triangles[t++] = i + 1;
            }

            m.vertices = vertices;
            m.triangles = triangles;
            m.uv = uvs;
            m.RecalculateNormals();
            m.RecalculateBounds();

            return m;
        }
    }
}