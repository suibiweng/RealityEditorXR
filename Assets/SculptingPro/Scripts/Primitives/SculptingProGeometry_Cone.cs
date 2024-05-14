using UnityEngine;

namespace SculptingPro.Geometry
{
    /// <summary>
    /// Simple procedural geometry. Call 'GetPrimitive' to return the specific geometry mesh data.
    /// Written by Matej Vanco 2023.
    /// https://matejvanco.com
    /// </summary>
    public static class SculptingProGeometry_Cone
    {
        /// <summary>
        /// Returns a completely generated geometry
        /// </summary>
        public static Mesh GetPrimitive(int resolution = 18, float height = 1.0f, float topRadius = 0.1f, float botRadius = 0.7f, string meshName = "Cone")
        {
            Mesh m = new Mesh();
            m.name = meshName;

            resolution = Mathf.Max(3, Mathf.Min(resolution, 200));

            Vector3 offset = new Vector3(0, height / 2.0f, 0);

            int nbVerticesCap = resolution + 1;
            Vector3[] vertices = new Vector3[nbVerticesCap + nbVerticesCap + resolution * 2 + 2];
            int nbTriangles = resolution + resolution + resolution * 2;
            int[] triangles = new int[nbTriangles * 3 + 3];
            Vector2[] uvs = new Vector2[vertices.Length];

            int vert = 0;
            float _2pi = Mathf.PI * 2f;

            vertices[vert++] = new Vector3(0f, 0f, 0f) - offset;
            while (vert <= resolution)
            {
                float rad = (float)vert / resolution * _2pi;
                vertices[vert++] = new Vector3(Mathf.Cos(rad) * botRadius, 0f, Mathf.Sin(rad) * botRadius) - offset;
            }

            vertices[vert++] = new Vector3(0f, height, 0f) - offset;
            while (vert <= resolution * 2 + 1)
            {
                float rad = (float)(vert - resolution - 1) / resolution * _2pi;
                vertices[vert++] = new Vector3(Mathf.Cos(rad) * topRadius, height, Mathf.Sin(rad) * topRadius) - offset;
            }

            int v = 0;
            while (vert <= vertices.Length - 4)
            {
                float rad = (float)v / resolution * _2pi;
                vertices[vert] = new Vector3(Mathf.Cos(rad) * topRadius, height, Mathf.Sin(rad) * topRadius) - offset;
                vertices[vert+1] = new Vector3(Mathf.Cos(rad) * botRadius, 0, Mathf.Sin(rad) * botRadius) - offset;
                vert += 2;
                v++;
            }
            vertices[vert] = vertices[resolution * 2 + 2];
            vertices[vert + 1] = vertices[resolution * 2 + 3];

            // Bottom cap
            int u = 0;
            uvs[u++] = new Vector2(0.5f, 0.5f);
            while (u <= resolution)
            {
                float rad = (float)u / resolution * _2pi;
                uvs[u++] = new Vector2(Mathf.Cos(rad) * .5f + .5f, Mathf.Sin(rad) * .5f + .5f);
            }

            // Top cap
            uvs[u++] = new Vector2(0.5f, 0.5f);
            while (u <= resolution * 2 + 1)
            {
                float rad = (float)u / resolution * _2pi;
                uvs[u++] = new Vector2(Mathf.Cos(rad) * .5f + .5f, Mathf.Sin(rad) * .5f + .5f);
            }

            // Sides
            int u_sides = 0;
            while (u <= uvs.Length - 4)
            {
                float t = (float)u_sides / resolution;
                uvs[u] = new Vector3(t, 1f);
                uvs[u+1] = new Vector3(t, 0f);
                u += 2;
                u_sides++;
            }
            uvs[u] = new Vector2(1f, 1f);
            uvs[u+1] = new Vector2(1f, 0f);

            // Bottom cap
            int tri = 0;
            int i = 0;
            while (tri < resolution - 1)
            {
                triangles[i] = 0;
                triangles[i + 1] = tri + 1;
                triangles[i + 2] = tri + 2;
                tri++;
                i += 3;
            }
            triangles[i] = 0;
            triangles[i + 1] = tri + 1;
            triangles[i + 2] = 1;
            tri++;
            i += 3;

            // Top cap
            //tri++;
            while (tri < resolution * 2)
            {
                triangles[i] = tri + 2;
                triangles[i + 1] = tri + 1;
                triangles[i + 2] = nbVerticesCap;
                tri++;
                i += 3;
            }
            triangles[i] = nbVerticesCap + 1;
            triangles[i + 1] = tri + 1;
            triangles[i + 2] = nbVerticesCap;
            tri++;
            i += 3;
            tri++;

            // Sides
            while (tri <= nbTriangles)
            {
                triangles[i] = tri + 2;
                triangles[i + 1] = tri + 1;
                triangles[i + 2] = tri;
                tri++;
                i += 3;
                triangles[i] = tri + 1;
                triangles[i + 1] = tri + 2;
                triangles[i + 2] = tri;
                tri++;
                i += 3;
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