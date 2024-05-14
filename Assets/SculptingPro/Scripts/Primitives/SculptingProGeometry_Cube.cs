using System.Collections.Generic;
using UnityEngine;

namespace SculptingPro.Geometry
{
    /// <summary>
    /// Simple procedural geometry. Call 'GetPrimitive' to return the specific geometry mesh data.
    /// Written by Matej Vanco 2023.
    /// https://matejvanco.com
    /// </summary>
    public static class SculptingProGeometry_Cube
    {
        /// <summary>
        /// Returns a completely generated geometry
        /// </summary>
        public static Mesh GetPrimitive(int resolution = 12, float length = 1.0f, float width = 1.0f, float height = 1.0f, string meshName = "Cube")
        {
            Mesh m = new Mesh();
            m.name = meshName;

            resolution = Mathf.Max(2, Mathf.Min(resolution, 200));

            List<Vector3> verts = new List<Vector3>();
            List<int> tris = new List<int>();
            List<Vector3> norms = new List<Vector3>();
            List<Vector2> uvs = new List<Vector2>();

            ReturnProceduralQuad(out Vector3[] verts_back, out int[] tris_back, out Vector3[] norm_back, out Vector2[] uvs_back, 0, resolution, 0, length, width, height);
            verts.AddRange(verts_back);
            tris.AddRange(tris_back);
            norms.AddRange(norm_back);
            uvs.AddRange(uvs_back);
            ReturnProceduralQuad(out Vector3[] verts_right, out int[] tris_right, out Vector3[] norm_right, out Vector2[] uvs_right, 1, resolution, resolution * resolution, length, width, height);
            verts.AddRange(verts_right);
            tris.AddRange(tris_right);
            norms.AddRange(norm_right);
            uvs.AddRange(uvs_right);
            ReturnProceduralQuad(out Vector3[] verts_front, out int[] tris_front, out Vector3[] norm_front, out Vector2[] uvs_front, 2, resolution, (resolution * resolution) * 2, length, width, height);
            verts.AddRange(verts_front);
            tris.AddRange(tris_front);
            norms.AddRange(norm_front);
            uvs.AddRange(uvs_front);
            ReturnProceduralQuad(out Vector3[] verts_left, out int[] tris_left, out Vector3[] norm_left, out Vector2[] uvs_left, 3, resolution, (resolution * resolution) * 3, length, width, height);
            verts.AddRange(verts_left);
            tris.AddRange(tris_left);
            norms.AddRange(norm_left);
            uvs.AddRange(uvs_left);
            ReturnProceduralQuad(out Vector3[] verts_up, out int[] tris_up, out Vector3[] norm_up, out Vector2[] uvs_up, 4, resolution, (resolution * resolution) * 4, length, width, height);
            verts.AddRange(verts_up);
            tris.AddRange(tris_up);
            norms.AddRange(norm_up);
            uvs.AddRange(uvs_up);
            ReturnProceduralQuad(out Vector3[] verts_d, out int[] tris_d, out Vector3[] norm_d, out Vector2[] uvs_d, 5, resolution, (resolution * resolution) * 5, length, width, height);
            verts.AddRange(verts_d);
            tris.AddRange(tris_d);
            norms.AddRange(norm_d);
            uvs.AddRange(uvs_d);

            m.vertices = verts.ToArray();
            m.triangles = tris.ToArray();
            m.uv = uvs.ToArray();
            m.RecalculateNormals();
            m.RecalculateBounds();

            return m;
        }

        private static void ReturnProceduralQuad(out Vector3[] vertices, out int[] triangles, out Vector3[] normals, out Vector2[] uvs, int side, int resolution, int off, float length = 1, float width = 1, float height = 1)
        {
            vertices = new Vector3[resolution * resolution];

            for (int y = 0; y < resolution; y++)
            {
                for (int x = 0; x < resolution; x++)
                {
                    float pA = (float)y / (resolution - 1) - 0.5f;
                    float pB = (float)x / (resolution - 1) - 0.5f;
                    switch (side)
                    {
                        //Back
                        case 0: vertices[(x + (y * resolution))] = new Vector3(pB * width, pA * height, -length * 0.5f); break;
                        //Right
                        case 1: vertices[(x + (y * resolution))] = new Vector3(width * 0.5f, pA * height, pB * length); break;
                        //Front
                        case 2: vertices[(x + (y * resolution))] = new Vector3(pB * width, pA * height, length * 0.5f); break;
                        //Left
                        case 3: vertices[(x + (y * resolution))] = new Vector3(-width * 0.5f, pA * height, pB * length); break;
                        //Top
                        case 4: vertices[(x + (y * resolution))] = new Vector3(pB * width, height * 0.5f, pA * length); break;
                        //Bot
                        case 5: vertices[(x + (y * resolution))] = new Vector3(pB * width, -height * 0.5f, pA * length); break;
                        //Mid
                        case 6: vertices[(x + (y * resolution))] = new Vector3(pB * width, 0.0f, pA * length); break;
                    }
                }
            }

            int faces = ((int)Mathf.Pow(resolution - 1, 2));
            triangles = new int[faces * 6];
            int t = 0;
            for (int f = 0; f < faces; f++)
            {
                int i = (f % (resolution - 1) + ((f / (resolution - 1)) * resolution)) + off;
                triangles[t] = side == 2 || side == 3 || side == 5 ? i + resolution : i + 1;
                triangles[t + 1] = i;
                triangles[t + 2] = side == 2 || side == 3 || side == 5 ? i + 1 : i + resolution;

                triangles[t + 3] = side == 2 || side == 3 || side == 5 ? i + 1 : i + resolution;
                triangles[t + 4] = i + resolution + 1;
                triangles[t + 5] = side == 2 || side == 3 || side == 5 ? i + resolution : i + 1;
                t += 6;
            }

            normals = new Vector3[vertices.Length];
            for (int n = 0; n < normals.Length; n++)
            {
                switch (side)
                {
                    //Back
                    case 0: normals[n] = Vector3.back; break;
                    //Right
                    case 1: normals[n] = Vector3.right; break;
                    //Front
                    case 2: normals[n] = Vector3.forward; break;
                    //Left
                    case 3: normals[n] = Vector3.left; break;
                    //Top
                    case 4: normals[n] = Vector3.up; break;
                    //Bot
                    case 5: normals[n] = Vector3.down; break;

                    default: normals[n] = Vector3.up; break;
                }
            }

            uvs = new Vector2[vertices.Length];
            for (int v = 0; v < resolution; v++)
            {
                for (int u = 0; u < resolution; u++)
                    uvs[u + v * resolution] = new Vector2((float)u / (resolution - 1), (float)v / (resolution - 1));
            }
        }
    }
}