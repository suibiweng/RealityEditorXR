using UnityEngine;

namespace SculptingPro.Geometry
{
    /// <summary>
    /// Simple procedural geometry. Call 'GetPrimitive' to return the specific geometry mesh data.
    /// Written by Matej Vanco 2023.
    /// https://matejvanco.com
    /// </summary>
    public static class SculptingProGeometry_Torus
    {
        /// <summary>
        /// Returns a completely generated geometry
        /// </summary>
        public static Mesh GetPrimitive(int segments = 24, int stack = 24, float radius = 1.0f, float thickness = 0.3f, string meshName = "Torus")
        {
            Mesh m = new Mesh();
            m.name = meshName;

            segments = Mathf.Max(3, Mathf.Min(segments, 200));
            stack = Mathf.Max(3, Mathf.Min(stack, 200));

            Vector3[] vertices = new Vector3[(segments + 1) * (stack + 1)];
            float _2pi = Mathf.PI * 2f;
            for (int seg = 0; seg <= segments; seg++)
            {
                int currSeg = seg == segments ? 0 : seg;

                float t1 = (float)currSeg / segments * _2pi;
                Vector3 r1 = new Vector3(Mathf.Cos(t1) * radius, 0f, Mathf.Sin(t1) * radius);

                for (int side = 0; side <= stack; side++)
                {
                    int currSide = side == stack ? 0 : side;

                    float t2 = (float)currSide / stack * _2pi;
                    Vector3 r2 = Quaternion.AngleAxis(-t1 * Mathf.Rad2Deg, Vector3.up) * new Vector3(Mathf.Sin(t2) * thickness, Mathf.Cos(t2) * thickness);

                    vertices[side + seg * (stack + 1)] = r1 + r2;
                }
            }

            Vector3[] normals = new Vector3[vertices.Length];
            for (int seg = 0; seg <= segments; seg++)
            {
                int currSeg = seg == segments ? 0 : seg;

                float t1 = (float)currSeg / segments * _2pi;
                Vector3 r1 = new Vector3(Mathf.Cos(t1) * radius, 0f, Mathf.Sin(t1) * radius);

                for (int side = 0; side <= stack; side++)
                    normals[side + seg * (stack + 1)] = (vertices[side + seg * (stack + 1)] - r1).normalized;
            }

            Vector2[] uvs = new Vector2[vertices.Length];
            for (int seg = 0; seg <= segments; seg++)
                for (int side = 0; side <= stack; side++)
                    uvs[side + seg * (stack + 1)] = new Vector2((float)seg / segments, (float)side / stack);

            int nbFaces = vertices.Length;
            int nbTriangles = nbFaces * 2;
            int nbIndexes = nbTriangles * 3;
            int[] triangles = new int[nbIndexes];

            int i = 0;
            for (int seg = 0; seg <= segments; seg++)
            {
                for (int side = 0; side <= stack - 1; side++)
                {
                    int current = side + seg * (stack + 1);
                    int next = side + (seg < (segments) ? (seg + 1) * (stack + 1) : 0);

                    if (i < triangles.Length - 6)
                    {
                        triangles[i++] = current;
                        triangles[i++] = next;
                        triangles[i++] = next + 1;

                        triangles[i++] = current;
                        triangles[i++] = next + 1;
                        triangles[i++] = current + 1;
                    }
                }
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