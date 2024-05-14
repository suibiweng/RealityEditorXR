using System.Collections.Generic;
using UnityEngine;

namespace SculptingPro.Geometry
{
    /// <summary>
    /// Simple procedural geometry. Call 'GetPrimitive' to return the specific geometry mesh data.
    /// Written by Matej Vanco 2023.
    /// https://matejvanco.com
    /// </summary>
    public static class SculptingProGeometry_Sphere
    {
        /// <summary>
        /// Returns a completely generated geometry
        /// </summary>
        public static Mesh GetPrimitive(int segments = 32, int stack = 32, float radius = 1.0f, float slicesMax = 360.0f, float verticalMax = 180.0f, string meshName = "Sphere")
        {
            Mesh m = new Mesh();
            m.name = meshName;

            segments = Mathf.Max(3, Mathf.Min(segments, 200));
            stack = Mathf.Max(3, Mathf.Min(stack, 200));

            int vertexCapacity = (segments + 1) * (stack + 1);

            List<Vector3> verts = new List<Vector3>(vertexCapacity);
            List<int> tris = new List<int>(segments * stack * 6);
            List<Vector3> normals = new List<Vector3>(vertexCapacity);
            List<Vector2> uvs = new List<Vector2>(vertexCapacity);

            float stacksAngle = verticalMax * Mathf.Deg2Rad;
            float slicesAngle = slicesMax * Mathf.Deg2Rad;
            float phiStep = stacksAngle / stack;
            float thetaStep = slicesAngle / segments;

            for (int i = 0; i <= stack; ++i)
            {
                float phi = i * phiStep;

                for (int j = 0; j <= segments; ++j)
                {
                    float theta = j * thetaStep;

                    Vector3 position = new Vector3(radius * Mathf.Sin(phi) * Mathf.Cos(theta), radius * Mathf.Cos(phi), radius * Mathf.Sin(phi) * Mathf.Sin(theta));
                    verts.Add(position);
                    normals.Add(position.normalized);
                    uvs.Add(new Vector2(theta / slicesAngle, 1f - phi / stacksAngle));
                }
            }

            int ringVertexCount = segments + 1;
            for (int i = 0; i < stack; ++i)
            {
                for (int j = 0; j < segments; ++j)
                {
                    tris.Add(i * ringVertexCount + j);
                    tris.Add(i * ringVertexCount + j + 1);
                    tris.Add((i + 1) * ringVertexCount + j);

                    tris.Add((i + 1) * ringVertexCount + j);
                    tris.Add(i * ringVertexCount + j + 1);
                    tris.Add((i + 1) * ringVertexCount + j + 1);
                }
            }

            m.vertices = verts.ToArray();
            m.triangles = tris.ToArray();
            m.uv = uvs.ToArray();
            m.RecalculateNormals();
            m.RecalculateBounds();

            return m;
        }
    }
}