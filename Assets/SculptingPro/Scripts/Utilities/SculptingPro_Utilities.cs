using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace SculptingPro.Utilities
{
    /// <summary>
    /// Global SculptingPro utility library (3d math, geometry and mesh).
    /// Written by Matej Vanco 2021.
    /// https://matejvanco.com
    /// </summary>
    public static class SculptingPro_Utilities
    {
        /// <summary>
        /// Essential sculpting attributes
        /// </summary>
        public struct SculptingAttributes
        {
            // Brush related params
            public Vector3 worldPoint;
            public float radius;

            // Target mesh related params
            public Vector3 transPos;
            public Quaternion transRot;
            public Vector3 transScale;

            // Additional param
            public bool includeWholeMesh;
        }

        /// <summary>
        /// Essential model data - essential component in SculptingPro_Model
        /// </summary>
        [Serializable]
        public sealed class ModelData
        {
            // Essential model data
            public bool m_set;
            public string m_name;
            public Vector3[] m_vertices;
            public Vector2Int[] m_seams;
            public int[] m_triangles;
            public Vector3[] m_normals;
            public Vector2[] m_uvs;
            public Vector2[] m_uvs2;
            public Vector2[] m_uvs3;
            //Max 3 uv sets

            /// <summary>
            /// Copy current model to another
            /// </summary>
            public ModelData Copy(ModelData copy)
            {
                ModelData md = new ModelData();
                md.m_name = copy.m_name;
                md.m_vertices = new Vector3[copy.m_vertices.Length];
                md.m_triangles = new int[copy.m_triangles.Length];
                md.m_normals = new Vector3[copy.m_normals.Length];
                md.m_uvs = new Vector2[copy.m_uvs.Length];
                if (copy.m_uvs2 != null)
                    md.m_uvs2 = new Vector2[copy.m_uvs2.Length];
                if (copy.m_uvs3 != null)
                    md.m_uvs3 = new Vector2[copy.m_uvs3.Length];
                md.m_set = copy.m_set;

                Array.Copy(copy.m_vertices, md.m_vertices, copy.m_vertices.Length);
                md.CopySeams(copy.m_seams);
                Array.Copy(copy.m_triangles, md.m_triangles, copy.m_triangles.Length);
                Array.Copy(copy.m_normals, md.m_normals, copy.m_normals.Length);
                if (copy.m_uvs == null || copy.m_uvs.Length == 0)
                    SculptingPro_Debug.Debug(null, "UVs could not be initialized, because the mesh doesn't have any!", SculptingPro_Debug.DebugType.Information);
                else
                    Array.Copy(copy.m_uvs, md.m_uvs, copy.m_uvs.Length);
                if (copy.m_uvs2 != null)
                    Array.Copy(copy.m_uvs2, md.m_uvs2, copy.m_uvs2.Length);
                if (copy.m_uvs3 != null)
                    Array.Copy(copy.m_uvs3, md.m_uvs3, copy.m_uvs3.Length);
                return md;
            }

            /// <summary>
            /// External copy method for seams (called from model separately)
            /// </summary>
            public void CopySeams(Vector2Int[] seams)
            {
                if(seams == null)
                {
                    m_seams = null;
                    return;
                }
                m_seams = new Vector2Int[seams.Length];
                Array.Copy(seams, m_seams, seams.Length);
            }
        }

        /// <summary>
        /// Essential heightmap attributes - all attributes are required
        /// </summary>
        [Serializable]
        public sealed class HeightmapAttributes
        {
            // Target mesh related params
            public Vector3[] vertices;
            public int[] triangles;

            public Vector3 transPos;
            public Quaternion transRot;
            public Vector3 transSca;

            // Brush related params
            public Vector3 brushPos;
            public Vector3 brushDir;
            public Vector3 brushWorldEulerAngles;
            public float brushSize;
            public float brushIntens;

            // Final smoothness params
            public bool applySmoothing = true;
            public int smoothnessLevel = 7;
        }

        /// <summary>
        /// Essential heightmap pixel data attributes - each heightmap brush requires list of heightmap pixel data
        /// </summary>
        [Serializable]
        public struct HeightmapPixelData
        {
            public float lightness;
            public Vector3 pos;
        }
        
        /// <summary>
        /// Essential smoothing filter algorithms - Laplacian Filter & Humphrey's Filter
        /// </summary>
        public static class SmoothingFilters
        {
            /// <summary>
            /// Laplacian filter algorithm of mesh smoothing
            /// </summary>
            public static class LaplacianFilterSmoothing
            {
                /// <summary>
                /// Returns smooth calculation of Laplacian method
                /// </summary>
                /// <param name="vertices">Input vertices</param>
                /// <param name="triangles">Input triangles</param>
                /// <param name="intensity">Smoothing multiplier</param>
                /// <returns>Returns list of calculated vertices</returns>
                public static Vector3[] LaplacianFilter(Vector3[] vertices, int[] triangles, float intensity)
                {
                    return LaplacianFilter(VertConnections.ReturnConnections(triangles), vertices, intensity, new SculptingAttributes() { includeWholeMesh = true });
                }

                /// <summary>
                /// Returns smooth calculation of Laplacian method, specifically built for sculpting attributes
                /// </summary>
                /// <param name="vertices">Input vertices</param>
                /// <param name="triangles">Input triangles</param>
                /// <param name="intensity">Smoothing multiplier</param>
                /// <param name="atr">Input sculpting attributes</param>
                /// <returns>Returns array of calculated vertices</returns>
                public static Vector3[] LaplacianFilter(Vector3[] vertices, int[] triangles, float intensity, SculptingAttributes atr)
                {
                    return LaplacianFilter(VertConnections.ReturnConnections(triangles), vertices, intensity, atr);
                }

                private static Vector3[] LaplacianFilter(Dictionary<int, VertConnections> network, Vector3[] origin, float intensity, SculptingAttributes atr)
                {
                    SculptingPro_Thread.threadProgress = 0.0f;

                    intensity = Mathf.Clamp01(intensity);
                    Vector3[] vertices = new Vector3[origin.Length];
                    for (int i = 0, n = origin.Length; i < n; i++)
                    {
                        if (!atr.includeWholeMesh)
                        {
                            if (Vector3.Distance(Transformations.TransformPoint(atr.transPos, atr.transRot, atr.transScale, origin[i]), atr.worldPoint) > atr.radius)
                            {
                                vertices[i] = origin[i];
                                continue;
                            }
                        }

                        HashSet<int> connection = network[i].Connection;
                        Vector3 v = vertices[i];
                        foreach (int adj in connection) v += origin[adj];
                        vertices[i] = Vector3.Lerp(origin[i], (v / connection.Count), intensity * 0.15f);
                        if(vertices.Length >= 20000)
                            SculptingPro_Thread.threadProgress = (float)i / origin.Length;
                    }
                    SculptingPro_Thread.threadProgress = 0.0f;
                    return vertices;
                }

                public sealed class VertConnections
                {
                    public HashSet<int> Connection { get; }
                    public VertConnections()
                    {
                        this.Connection = new HashSet<int>();
                    }

                    public void Connect(int to)
                    {
                        Connection.Add(to);
                    }
                    public static Dictionary<int, VertConnections> ReturnConnections(int[] triangles)
                    {
                        var table = new Dictionary<int, VertConnections>();
                        for (int i = 0, n = triangles.Length; i < n; i += 3) //n+3 (tris=3)
                        {
                            int a = triangles[i], b = triangles[i + 1], c = triangles[i + 2];
                            if (!table.ContainsKey(a)) table.Add(a, new VertConnections());
                            if (!table.ContainsKey(b)) table.Add(b, new VertConnections());
                            if (!table.ContainsKey(c)) table.Add(c, new VertConnections());
                            table[a].Connect(b); table[a].Connect(c);
                            table[b].Connect(a); table[b].Connect(c);
                            table[c].Connect(a); table[c].Connect(b);
                        }
                        return table;
                    }
                }
            }

            /// <summary>
            /// Humphrey's [HC] filter algorithm of mesh smoothing
            /// </summary>
            public static class HCFilterSmoothing
            {
                /// <summary>
                /// Returns smooth calculation of HC Filter method, specifically built for sculpting attributes
                /// </summary>
                /// <returns>Returns calculated vertices</returns>
                public static Vector3[] HCFilter(Vector3[] inVerts, int[] inTris, SculptingAttributes atr, float intensity = 1)
                {
                    Vector3[] originalVerts = new Vector3[inVerts.Length];
                    Vector3[] workingVerts = GetWeightedVertices(inVerts, inTris, atr);
                    float alpha = 0.8f;
                    float beta = 0.94f;
                    SculptingPro_Thread.threadProgress = 0.0f;

                    for (int i = 0; i < workingVerts.Length; i++)
                    {
                        originalVerts[i].x = workingVerts[i].x - (alpha * inVerts[i].x + (1 - alpha) * inVerts[i].x);
                        originalVerts[i].y = workingVerts[i].y - (alpha * inVerts[i].y + (1 - alpha) * inVerts[i].y);
                        originalVerts[i].z = workingVerts[i].z - (alpha * inVerts[i].z + (1 - alpha) * inVerts[i].z);
                        if (originalVerts.Length >= 20000)
                            SculptingPro_Thread.threadProgress = (float)i / (float)workingVerts.Length;
                    }

                    float dx;
                    float dy;
                    float dz;

                    for (int j = 0; j < originalVerts.Length; j++)
                    {
                        Vector3 v0 = Transformations.TransformPoint(atr.transPos, atr.transRot, atr.transScale, originalVerts[j]);
                        Vector3 v1 = atr.worldPoint;
                        if (Vector3.Distance(v0, v1) > atr.radius)
                            continue;

                        List<int> AdjIndex = FindAdjTris(inVerts, inTris, inVerts[j], atr);

                        dx = 0.0f;
                        dy = 0.0f;
                        dz = 0.0f;

                        for (int k = 0; k < AdjIndex.Count; k++)
                        {
                            dx += originalVerts[AdjIndex[k]].x;
                            dy += originalVerts[AdjIndex[k]].y;
                            dz += originalVerts[AdjIndex[k]].z;
                        }

                        Vector3 vvert = workingVerts[j];
                        vvert.x -= beta * originalVerts[j].x + ((1 - beta) / AdjIndex.Count) * dx;
                        vvert.y -= beta * originalVerts[j].y + ((1 - beta) / AdjIndex.Count) * dy;
                        vvert.z -= beta * originalVerts[j].z + ((1 - beta) / AdjIndex.Count) * dz;
                        workingVerts[j] = Vector3.Lerp(workingVerts[j], vvert, Mathf.Clamp01(intensity));
                    }
                    SculptingPro_Thread.threadProgress = 0.0f;
                    return workingVerts;
                }

                /// <summary>
                /// Returns smooth calculation of HC Filter method
                /// </summary>
                /// <returns>Returns calculated vertices</returns>
                public static Vector3[] HCFilter(Vector3[] inVerts, int[] inTris, float intensity = 1)
                {
                    Vector3[] originalVerts = new Vector3[inVerts.Length];
                    Vector3[] workingVerts = GetWeightedVertices(inVerts, inTris, new SculptingAttributes() { includeWholeMesh = true });
                    float alpha = 0.8f;
                    float beta = 0.94f;
                    SculptingPro_Thread.threadProgress = 0.0f;

                    for (int i = 0; i < workingVerts.Length; i++)
                    {
                        originalVerts[i].x = workingVerts[i].x - (alpha * inVerts[i].x + (1 - alpha) * inVerts[i].x);
                        originalVerts[i].y = workingVerts[i].y - (alpha * inVerts[i].y + (1 - alpha) * inVerts[i].y);
                        originalVerts[i].z = workingVerts[i].z - (alpha * inVerts[i].z + (1 - alpha) * inVerts[i].z);
                    }

                    float dx;
                    float dy;
                    float dz;

                    for (int j = 0; j < originalVerts.Length; j++)
                    {
                        List<int> AdjIndex = FindAdjTris(inVerts, inTris, inVerts[j], new SculptingAttributes() { includeWholeMesh = true });

                        dx = 0.0f;
                        dy = 0.0f;
                        dz = 0.0f;

                        for (int k = 0; k < AdjIndex.Count; k++)
                        {
                            dx += originalVerts[AdjIndex[k]].x;
                            dy += originalVerts[AdjIndex[k]].y;
                            dz += originalVerts[AdjIndex[k]].z;
                        }

                        Vector3 vvert = workingVerts[j];
                        vvert.x -= beta * originalVerts[j].x + ((1 - beta) / AdjIndex.Count) * dx;
                        vvert.y -= beta * originalVerts[j].y + ((1 - beta) / AdjIndex.Count) * dy;
                        vvert.z -= beta * originalVerts[j].z + ((1 - beta) / AdjIndex.Count) * dz;
                        workingVerts[j] = Vector3.Lerp(workingVerts[j], vvert, Mathf.Clamp01(intensity));

                        if(originalVerts.Length >= 20000)
                            SculptingPro_Thread.threadProgress = (float)j / (float)originalVerts.Length;
                    }
                    SculptingPro_Thread.threadProgress = 0.0f;
                    return workingVerts;
                }

                private static Vector3[] GetWeightedVertices(Vector3[] sv, int[] t, SculptingAttributes atr)
                {
                    Vector3[] verts = new Vector3[sv.Length];

                    float dx;
                    float dy;
                    float dz;

                    for (int vi = 0; vi < sv.Length; vi++)
                    {
                        if (!atr.includeWholeMesh)
                        {
                            Vector3 v0 = Transformations.TransformPoint(atr.transPos, atr.transRot, atr.transScale, sv[vi]);
                            Vector3 v1 = atr.worldPoint;
                            if (Vector3.Distance(v0, v1) > atr.radius)
                            { verts[vi] = sv[vi]; continue; }
                        }

                        List<Vector3> adjVerts = FindAdjVerts(sv, t, sv[vi], atr);

                        if (adjVerts.Count == 0) continue;

                        dx = 0.0f;
                        dy = 0.0f;
                        dz = 0.0f;

                        for (int j = 0; j < adjVerts.Count; j++)
                        {
                            dx += adjVerts[j].x;
                            dy += adjVerts[j].y;
                            dz += adjVerts[j].z;
                        }

                        verts[vi].x = dx / adjVerts.Count;
                        verts[vi].y = dy / adjVerts.Count;
                        verts[vi].z = dz / adjVerts.Count;
                    }

                    return verts;
                }

                private static List<Vector3> FindAdjVerts(Vector3[] v, int[] t, Vector3 vertex, SculptingAttributes atr)
                {
                    List<Vector3> Vertex = new List<Vector3>();
                    HashSet<int> FaceCreator = new HashSet<int>();
                    int FaceLength = 0;

                    for (int i = 0; i < v.Length; i++)
                    {
                        if (!atr.includeWholeMesh)
                        {
                            Vector3 v0 = Transformations.TransformPoint(atr.transPos, atr.transRot, atr.transScale, v[i]);
                            Vector3 v1 = atr.worldPoint;
                            if (Vector3.Distance(v0, v1) > atr.radius)
                            { continue; }
                        }

                        if (Mathf.Approximately(vertex.x, v[i].x) &&
                            Mathf.Approximately(vertex.y, v[i].y) &&
                            Mathf.Approximately(vertex.z, v[i].z))
                        {
                            int v1;
                            int v2;
                            bool marker;

                            for (int k = 0; k < t.Length; k = k + 3)
                            {
                                if (FaceCreator.Contains(k) == false)
                                {
                                    v1 = 0;
                                    v2 = 0;
                                    marker = false;

                                    if (i == t[k])
                                    {
                                        v1 = t[k + 1];
                                        v2 = t[k + 2];
                                        marker = true;
                                    }

                                    if (i == t[k + 1])
                                    {
                                        v1 = t[k];
                                        v2 = t[k + 2];
                                        marker = true;
                                    }

                                    if (i == t[k + 2])
                                    {
                                        v1 = t[k];
                                        v2 = t[k + 1];
                                        marker = true;
                                    }

                                    FaceLength++;
                                    if (marker)
                                    {
                                        FaceCreator.Add(k);
                                        if (DVertExist(Vertex, v[v1]) == false) Vertex.Add(v[v1]);
                                        if (DVertExist(Vertex, v[v2]) == false) Vertex.Add(v[v2]);
                                    }
                                }
                            }
                        }
                    }

                    return Vertex;
                }

                private static List<int> FindAdjTris(Vector3[] v, int[] t, Vector3 vertex, SculptingAttributes atr)
                {
                    List<int> AdjIndex = new List<int>();
                    List<Vector3> AdjVertex = new List<Vector3>();
                    HashSet<int> AdjFace = new HashSet<int>();
                    int FaceLength = 0;

                    for (int i = 0; i < v.Length; i++)
                    {
                        if (!atr.includeWholeMesh)
                        {
                            Vector3 v0 = Transformations.TransformPoint(atr.transPos, atr.transRot, atr.transScale, v[i]);
                            Vector3 v1 = atr.worldPoint;
                            if (Vector3.Distance(v0, v1) > atr.radius)
                            { continue; }
                        }

                        if (Mathf.Approximately(vertex.x, v[i].x) &&
                            Mathf.Approximately(vertex.y, v[i].y) &&
                            Mathf.Approximately(vertex.z, v[i].z))
                        {
                            int v1;
                            int v2;
                            bool marker;

                            for (int k = 0; k < t.Length; k = k + 3)
                                if (AdjFace.Contains(k) == false)
                                {
                                    v1 = 0;
                                    v2 = 0;
                                    marker = false;

                                    if (i == t[k])
                                    {
                                        v1 = t[k + 1];
                                        v2 = t[k + 2];
                                        marker = true;
                                    }

                                    if (i == t[k + 1])
                                    {
                                        v1 = t[k];
                                        v2 = t[k + 2];
                                        marker = true;
                                    }

                                    if (i == t[k + 2])
                                    {
                                        v1 = t[k];
                                        v2 = t[k + 1];
                                        marker = true;
                                    }

                                    FaceLength++;
                                    if (marker)
                                    {
                                        AdjFace.Add(k);

                                        if (DVertExist(AdjVertex, v[v1]) == false)
                                        {
                                            AdjVertex.Add(v[v1]);
                                            AdjIndex.Add(v1);
                                        }

                                        if (DVertExist(AdjVertex, v[v2]) == false)
                                        {
                                            AdjVertex.Add(v[v2]);
                                            AdjIndex.Add(v2);
                                        }
                                    }
                                }
                        }
                    }

                    return AdjIndex;
                }

                private static bool DVertExist(List<Vector3> adjVert, Vector3 v)
                {
                    for (int i = 0; i < adjVert.Count; i++)
                    {
                        if (Mathf.Approximately(adjVert[i].x, v.x) && Mathf.Approximately(adjVert[i].y, v.y) && Mathf.Approximately(adjVert[i].z, v.z)) return true;
                    }
                    return false;
                }
            }
        }

        /// <summary>
        /// Essential geometry algorithms - subdivision, vertex flip, seam closing & heightmap calculation
        /// </summary>
        public static class GeometryModification
        {
            /// <summary>
            /// Geometry subdivision class
            /// </summary>
            public static class VertexSubdivision
            {
                private static List<Vector3> vertices;
                private static List<Vector3> normals;
                private static List<Color> colors;
                private static List<Vector2> uv;
                private static List<Vector2> uv2;
                private static List<Vector2> uv3;

                private static List<int> indices;
                private static Dictionary<uint, int> newVerts;

                /// <summary>
                /// Main subdivision method - increases count of vertices on the mesh
                /// </summary>
                public static void Subdivide(Mesh mesh)
                {
                    newVerts = new Dictionary<uint, int>();

                    vertices = new List<Vector3>(mesh.vertices);
                    normals = new List<Vector3>(mesh.normals);
                    colors = new List<Color>(mesh.colors);
                    uv = new List<Vector2>(mesh.uv);
                    uv2 = new List<Vector2>(mesh.uv2);
                    uv3 = new List<Vector2>(mesh.uv3);
                    indices = new List<int>();

                    int[] triangles = mesh.triangles;
                    for (int i = 0; i < triangles.Length; i += 3)
                    {
                        int i1 = triangles[i + 0];
                        int i2 = triangles[i + 1];
                        int i3 = triangles[i + 2];

                        int a = GetNewVertex4(i1, i2);
                        int b = GetNewVertex4(i2, i3);
                        int c = GetNewVertex4(i3, i1);
                        indices.Add(i1); indices.Add(a); indices.Add(c);
                        indices.Add(i2); indices.Add(b); indices.Add(a);
                        indices.Add(i3); indices.Add(c); indices.Add(b);
                        indices.Add(a); indices.Add(b); indices.Add(c); // center triangle
                    }
                    if (vertices.Count > 90000)
                    {
                        SculptingPro_Debug.Debug(null, "The Subdivision couldn't be proceeded due to Unity mesh limitations. The mesh [" + vertices.Count + "] would have more than 90k vertices");
                        return;
                    }

                    mesh.vertices = vertices.ToArray();
                    if (normals.Count > 0)
                        mesh.normals = normals.ToArray();
                    if (colors.Count > 0)
                        mesh.colors = colors.ToArray();
                    if (uv.Count > 0)
                        mesh.uv = uv.ToArray();
                    if (uv2.Count > 0)
                        mesh.uv2 = uv2.ToArray();
                    if (uv3.Count > 0)
                        mesh.uv3 = uv3.ToArray();

                    mesh.triangles = indices.ToArray();
                    mesh.RecalculateNormals();
                    mesh.RecalculateBounds();
                    mesh.RecalculateTangents();

                    vertices = null;
                    normals = null;
                    colors = null;
                    uv = null;
                    uv2 = null;
                    uv3 = null;
                    indices = null;
                }

                private static int GetNewVertex4(int i1, int i2)
                {
                    int newIndex = vertices.Count;
                    uint t1 = ((uint)i1 << 16) | (uint)i2;
                    uint t2 = ((uint)i2 << 16) | (uint)i1;
                    if (newVerts.ContainsKey(t2))
                        return newVerts[t2];
                    if (newVerts.ContainsKey(t1))
                        return newVerts[t1];

                    newVerts.Add(t1, newIndex);

                    vertices.Add((vertices[i1] + vertices[i2]) * 0.5f);
                    if (normals.Count > 0)
                        normals.Add((normals[i1] + normals[i2]).normalized);
                    if (colors.Count > 0)
                        colors.Add((colors[i1] + colors[i2]) * 0.5f);
                    if (uv.Count > 0)
                        uv.Add((uv[i1] + uv[i2]) * 0.5f);
                    if (uv2.Count > 0)
                        uv2.Add((uv2[i1] + uv2[i2]) * 0.5f);
                    if (uv3.Count > 0)
                        uv3.Add((uv3[i1] + uv3[i2]) * 0.5f);

                    return newIndex;
                }
            }

            /// <summary>
            /// Mesh flip method by reversing triangles
            /// </summary>
            /// <returns>Returns complete reversed triangles</returns>
            public static int[] FlipMesh(int[] tris)
            {
                return tris.Reverse().ToArray();
            }

            /// <summary>
            /// Try to close open seams by specific vertices & distance
            /// </summary>
            /// <returns>Returns try-closed seams of the vertices</returns>
            public static Vector3[] TryCloseSeams(Vector3[] vertices, float lookingDistance = 0.01f, bool viaThread = false)
            {
                if(vertices.Length > 7500 && !viaThread)
                {
                    SculptingPro_Debug.Debug(null, "The input vertice count is higher than maximum recommended (7k). The 'TryCloseSeams' method will be terminated");
                    return vertices;
                }
                Vector3[] verts = new Vector3[vertices.Length];
                Array.Copy(vertices, verts, verts.Length);

                for (int i = 0; i < verts.Length; i++)
                {
                    for (int x = 0; x < vertices.Length; x++)
                    {
                        if (verts[i] == vertices[x]) continue;
                        if ((verts[i] - vertices[x]).magnitude < lookingDistance)
                            verts[i] = vertices[x];
                    }
                }
                return verts;
            }

            /// <summary>
            /// Combine roots mesh with its children - creates single object with all its submeshes
            /// </summary>
            /// <param name="entry">Entry root mesh filter</param>
            /// <param name="model">Target sculpting model - not necessary</param>
            /// <returns>Returns true/false - depends if the process is successful</returns>
            public static bool CombineChildren(MeshFilter entry, SculptingPro_Model model = null)
            {
                if (entry == null || (entry && entry.sharedMesh == null))
                {
                    SculptingPro_Debug.Debug(null, "The object doesn't contain Mesh Filter or shared mesh is empty", SculptingPro_Debug.DebugType.Error);
                    return false;
                }

                if(entry.transform.childCount == 0)
                {
                    SculptingPro_Debug.Debug(null, "The object doesn't contain any children to combine", SculptingPro_Debug.DebugType.Error);
                    return false;
                }

                Transform p = entry.transform.parent;
                entry.transform.parent = null;
                string n = entry.sharedMesh.name;

                Vector3 lastPos = entry.transform.position;
                entry.transform.position = Vector3.zero;

                MeshFilter[] subMeshes = entry.GetComponentsInChildren<MeshFilter>();
                CombineInstance[] combines = new CombineInstance[subMeshes.Length];

                for (int i = 0; i < subMeshes.Length; i++)
                {
                    if (subMeshes[i] == null || subMeshes[i].sharedMesh == null)
                    {
                        SculptingPro_Debug.Debug(null, "One of the children has 'null' mesh in MeshFilter component. Attach method has been terminated", SculptingPro_Debug.DebugType.Error);
                        return false;
                    }

                    combines[i].mesh = subMeshes[i].sharedMesh;
                    combines[i].transform = subMeshes[i].transform.localToWorldMatrix;
                    if (subMeshes[i] != entry)
                        UnityEngine.Object.DestroyImmediate(subMeshes[i].gameObject);
                }

                Mesh newMesh = new Mesh();
                newMesh.CombineMeshes(combines);

                entry.sharedMesh = newMesh;
                entry.sharedMesh.name = n;

                entry.transform.position = lastPos;
                entry.transform.parent = p == null ? null : p;

                if (model)
                    model.RegisterModel(true);

                return true;
            }

            /// <summary>
            /// Stamp any heightmap texture onto specific mesh (HeightmapPixelData list required) [Thread-safe]
            /// </summary>
            /// <param name="ha">Essential heightmap attributes</param>
            /// <param name="hpd">Essential heightmap pixel data list</param>
            /// <returns>Returns calculated vertices of the whole mesh</returns>
            public static Vector3[] StampHeightmap(HeightmapAttributes ha, List<HeightmapPixelData> hpd)
            {
                // Conditions
                if (ha == null)
                {
                    SculptingPro_Debug.Debug(null, "Sculpting Pro stamp heightmap - the heightmap attributes are null", SculptingPro_Debug.DebugType.Error);
                    return null;
                }
                if (hpd == null)
                {
                    SculptingPro_Debug.Debug(null, "Sculpting Pro stamp heightmap - the heightmap pixel data list is null", SculptingPro_Debug.DebugType.Error);
                    return ha.vertices != null ? ha.vertices : null;
                }
                if(hpd.Count == 0)
                {
                    SculptingPro_Debug.Debug(null, "Sculpting Pro stamp heightmap - the heightmap pixel data list is empty", SculptingPro_Debug.DebugType.Error);
                    return ha.vertices != null ? ha.vertices : null;
                }

                SculptingPro_Thread.threadProgress = 0.0f;

                // Declaring all the essentials
                Vector3 p = ha.brushPos;
                List<int> chosenTris = new List<int>();
                List<Vector3> chosenVerts = new List<Vector3>();
                Vector3[] finalVerts = new Vector3[ha.vertices.Length];
                Array.Copy(ha.vertices, finalVerts, finalVerts.Length);

                // Choose vertices inside the bounding circle (inside the brush)
                for (int i = 0; i < finalVerts.Length; i++)
                {
                    Vector3 v = Transformations.TransformPoint(ha.transPos, ha.transRot, ha.transSca, finalVerts[i]);

                    if (Vector3.Distance(v, p) < (ha.brushSize / 2.0f))
                    {
                        chosenTris.Add(i);
                        chosenVerts.Add(Transformations.TransformPointInverse(ha.transPos, ha.transRot, ha.transSca, v));
                    }
                    SculptingPro_Thread.threadProgress = (float)i / (float)finalVerts.Length;
                }

                // Get brush euler rotation
                Vector3 rot = ha.brushWorldEulerAngles;
                rot.x = (rot.x > 180 ? rot.x - 360 : rot.x) - 90;
                rot.y = rot.y > 180 ? rot.y - 360 : rot.y;
                rot.z = rot.z > 180 ? rot.z - 360 : rot.z;

                // Calculate chosen vertices
                for (int i = 0; i < chosenTris.Count; i++)
                {
                    float d = Mathf.Infinity;
                    int ch = 0;
                    Vector3 v = Transformations.TransformPoint(ha.transPos, ha.transRot, ha.transSca, finalVerts[chosenTris[i]]);

                    for (int x = 0; x < hpd.Count; x++)
                    {
                        // Calculate rotated vector
                        Vector3 pPos = hpd[x].pos;
                        Vector3 pDir = Quaternion.Euler(rot) * pPos;
                        pPos = p + (pDir * ha.brushSize);
                        float cd = Vector3.Distance(v, pPos);
                        if (cd < d)
                        {
                            ch = x;
                            d = cd;
                        }
                    }
                    // Relocate vertice
                    v = Transformations.TransformPointInverse(ha.transPos, ha.transRot, ha.transSca, v);
                    v += (-ha.brushDir * hpd[ch].lightness) * ha.brushIntens;
                    finalVerts[chosenTris[i]] = v;
                    SculptingPro_Thread.threadProgress = (float)i / (float)chosenTris.Count;
                }

                SculptingPro_Thread.threadProgress = 0.0f;
                return finalVerts;
            }

            /// <summary>
            /// Heightmap pixel data calculation - generate vertex lightness for each pixel of the selected heightmap texture (Main-thread only)
            /// </summary>
            /// <param name="heightmapTexture">Target heightmap texture (max 256, recommended 128)</param>
            /// <param name="inverseHeightmap">Inverse heightmap texture? Turn black to white or vice-versa</param>
            /// <returns>Returns calculated pixel data for specific heightmap texture</returns>
            public static List<HeightmapPixelData> CalculateHeightmapPixelData(Texture2D heightmapTexture, bool inverseHeightmap = false)
            {
                // Conditions
                if (heightmapTexture == null)
                {
                    SculptingPro_Debug.Debug(null, "Sculpting Pro heightmap pixel data - the 2D heightmap texture is null", SculptingPro_Debug.DebugType.Error);
                    return null;
                }
                if (heightmapTexture.isReadable == false)
                {
                    SculptingPro_Debug.Debug(null, "Sculpting Pro heightmap pixel data - the 2D heightmap texture '" + heightmapTexture.name + "' is not set to read/write. Select the texture and enable the read/write field", SculptingPro_Debug.DebugType.Error);
                    return null;
                }
                if (heightmapTexture.width != heightmapTexture.height)
                {
                    SculptingPro_Debug.Debug(null, "Sculpting Pro heightmap pixel data - the 2D heightmap texture '" + heightmapTexture.name + "' is not in the 1:1 ratio. Please provide a heightmap texture with equal dimensions (128x128 recommended)", SculptingPro_Debug.DebugType.Error);
                    return null;
                }

                List<HeightmapPixelData> hpd = new List<HeightmapPixelData>();

                // Register heightmap bounds & abstract points
                float step = 0.5f / heightmapTexture.height;
                float max = 0.0f;

                for (int x = 0; x < heightmapTexture.width; x++)
                {
                    for (int y = 0; y < heightmapTexture.height; y++)
                    {
                        // Create a position on a square
                        Vector3 p = Vector3.zero;
                        p.x = x * (step * 2.0f) + (step) - 0.5f;
                        p.z = y * (step * 2.0f) + (step) - 0.5f;

                        // Calculate pixel brightness/lightness
                        Color c = heightmapTexture.GetPixel(x, y);
                        float l = (0.2126f * c.r) + (0.7152f * c.g) + (0.0722f * c.b);
                        // Record the maximum lightness of pixels
                        if (l >= max) max = l;
                        hpd.Add(new HeightmapPixelData() { lightness = l, pos = p });
                    }
                }

                // Inverse heightmap if possible
                if (inverseHeightmap)
                {
                    for (int i = 0; i < hpd.Count; i++)
                    {
                        // Reverse the pixel lightness by the maximum recorded lightness
                        float newLightness = max - hpd[i].lightness;
                        hpd[i] = new HeightmapPixelData() { lightness = newLightness, pos = hpd[i].pos };
                    }
                }

                return hpd;
            }

            /// <summary>
            /// Alternative normal recalculation based on threshold and angles
            /// </summary>
            public static class AlternativeNormals
            {
                public struct NormalData
                {
                    public Vector3[] vertices;
                    public int[] triangles;
                    public Vector3[] normals;
                }

                /// <summary>
                /// Recalculate the normals in alternative way - requires specific angle and threshold. 90 degrees is a default, smooth value. Use 0 degrees for flat smoothing.
                /// </summary>
                public static void RecalculateNormals(Mesh mesh, float angle = 90)
                {
                    NormalData nd = new NormalData() { normals = mesh.normals, triangles = mesh.triangles, vertices = mesh.vertices };
                    mesh.normals = RecalculateNormals(nd, angle);
                }

                /// <summary>
                /// Recalculate the normals in alternative way - requires specific angle and threshold. 90 degrees is a default, smooth value. Use 0 degrees for flat smoothing.
                /// </summary>
                public static Vector3[] RecalculateNormals(NormalData nd, float angle = 90)
                {
                    float cosineThreshold = Mathf.Cos(angle * Mathf.Deg2Rad);

                    Vector3[] vertices = nd.vertices;
                    Vector3[] normals = new Vector3[vertices.Length];
                    int[] triangles = nd.triangles;

                    Vector3[][] triNormals = new Vector3[1][];
                    Dictionary<VertexKey, List<VertexEntry>> dictionary = new Dictionary<VertexKey, List<VertexEntry>>(vertices.Length);

                    triNormals[0] = new Vector3[triangles.Length / 3];

                    for (int i = 0; i < triangles.Length; i += 3)
                    {
                        int i1 = triangles[i];
                        int i2 = triangles[i + 1];
                        int i3 = triangles[i + 2];

                        Vector3 p1 = vertices[i2] - vertices[i1];
                        Vector3 p2 = vertices[i3] - vertices[i1];
                        Vector3 normal = Vector3.Cross(p1, p2).normalized;
                        int triIndex = i / 3;
                        triNormals[0][triIndex] = normal;

                        VertexKey key;

                        if (!dictionary.TryGetValue(key = new VertexKey(vertices[i1]), out List<VertexEntry> entry))
                        {
                            entry = new List<VertexEntry>(4);
                            dictionary.Add(key, entry);
                        }
                        entry.Add(new VertexEntry(0, triIndex, i1));

                        if (!dictionary.TryGetValue(key = new VertexKey(vertices[i2]), out entry))
                        {
                            entry = new List<VertexEntry>();
                            dictionary.Add(key, entry);
                        }
                        entry.Add(new VertexEntry(0, triIndex, i2));

                        if (!dictionary.TryGetValue(key = new VertexKey(vertices[i3]), out entry))
                        {
                            entry = new List<VertexEntry>();
                            dictionary.Add(key, entry);
                        }
                        entry.Add(new VertexEntry(0, triIndex, i3));
                    }

                    foreach (var vertList in dictionary.Values)
                    {
                        for (int i = 0; i < vertList.Count; ++i)
                        {
                            Vector3 sum = new Vector3();
                            VertexEntry lhsEntry = vertList[i];

                            for (int j = 0; j < vertList.Count; ++j)
                            {
                                VertexEntry rhsEntry = vertList[j];
                                if (lhsEntry.VertexIndex == rhsEntry.VertexIndex)
                                    sum += triNormals[rhsEntry.MeshIndex][rhsEntry.TriangleIndex];
                                else
                                {
                                    // The dot product is the cosine of the angle between the two triangles.
                                    // A larger cosine means a smaller angle.
                                    var dot = Vector3.Dot(
                                        triNormals[lhsEntry.MeshIndex][lhsEntry.TriangleIndex],
                                        triNormals[rhsEntry.MeshIndex][rhsEntry.TriangleIndex]);
                                    if (dot >= cosineThreshold)
                                    {
                                        sum += triNormals[rhsEntry.MeshIndex][rhsEntry.TriangleIndex];
                                    }
                                }
                            }
                            normals[lhsEntry.VertexIndex] = sum.normalized;
                        }
                    }

                    return normals;
                }

                private struct VertexKey
                {
                    private readonly long _x;
                    private readonly long _y;
                    private readonly long _z;

                    // Change this if you require a different precision.
                    private const int Tolerance = 100000;

                    // Magic FNV values. Do not change these.
                    private const long FNV32Init = 0x811c9dc5;
                    private const long FNV32Prime = 0x01000193;

                    public VertexKey(Vector3 position)
                    {
                        _x = (long)(Mathf.Round(position.x * Tolerance));
                        _y = (long)(Mathf.Round(position.y * Tolerance));
                        _z = (long)(Mathf.Round(position.z * Tolerance));
                    }

                    public override bool Equals(object obj)
                    {
                        var key = (VertexKey)obj;
                        return _x == key._x && _y == key._y && _z == key._z;
                    }

                    public override int GetHashCode()
                    {
                        long rv = FNV32Init;
                        rv ^= _x;
                        rv *= FNV32Prime;
                        rv ^= _y;
                        rv *= FNV32Prime;
                        rv ^= _z;
                        rv *= FNV32Prime;
                        return rv.GetHashCode();
                    }
                }

                private struct VertexEntry
                {
                    public int MeshIndex;
                    public int TriangleIndex;
                    public int VertexIndex;

                    public VertexEntry(int meshIndex, int triIndex, int vertIndex)
                    {
                        MeshIndex = meshIndex;
                        TriangleIndex = triIndex;
                        VertexIndex = vertIndex;
                    }
                }
            }
        }

        /// <summary>
        /// Mesh-reference related methods
        /// </summary>
        public static class MeshReference
        {
            /// <summary>
            /// Create a brand new mesh reference copy
            /// </summary>
            /// <param name="entryMesh">Mesh entry</param>
            /// <returns>Returns a brand new mesh reference with all the refreshed parameters</returns>
            public static Mesh CreateNewMeshReference(Mesh entryMesh, bool recalculateBounds = true, bool recalculateNormals = true, bool recalculateTangents = true)
            {
                Mesh newMesh = new Mesh();
                newMesh.name = entryMesh.name;
                newMesh.indexFormat = entryMesh.indexFormat;
                newMesh.vertices = entryMesh.vertices;
                newMesh.triangles = entryMesh.triangles;
                newMesh.tangents = entryMesh.tangents;
                newMesh.normals = entryMesh.normals;
                newMesh.bounds = entryMesh.bounds;
                newMesh.colors = entryMesh.colors;
                newMesh.uv = entryMesh.uv;
                newMesh.uv2 = entryMesh.uv2;
                newMesh.uv3 = entryMesh.uv3;
                newMesh.uv4 = entryMesh.uv4;
                newMesh.uv5 = entryMesh.uv5;
                newMesh.uv6 = entryMesh.uv6;
                newMesh.uv7 = entryMesh.uv7;
                newMesh.uv8 = entryMesh.uv8;
                newMesh.subMeshCount = entryMesh.subMeshCount;
                newMesh.MarkDynamic();

                if (recalculateTangents) newMesh.RecalculateTangents();
                if (recalculateNormals) GeometryModification.AlternativeNormals.RecalculateNormals(newMesh);
                if (recalculateBounds) newMesh.RecalculateBounds();

                return newMesh;
            }

            /// <summary>
            /// Create a brand new mesh reference, does some additional work (if the shared mesh exists)
            /// </summary>
            public static void CreateNewMeshReference(MeshFilter entryMeshFilter, bool recalculateBounds = true, bool recalculateNormals = true, bool recalculateTangents = true)
            {
                if (entryMeshFilter == null)
                {
                    SculptingPro_Debug.Debug(null, "Creating a new mesh reference was unsuccessful. The object entry is empty!");
                    return;
                }
                if (entryMeshFilter.sharedMesh == null)
                {
                    SculptingPro_Debug.Debug(null, "Creating a new mesh reference of object " + entryMeshFilter.name + " was unsuccessful. The shared mesh is empty!");
                    return;
                }
                entryMeshFilter.sharedMesh = CreateNewMeshReference(entryMeshFilter.sharedMesh, recalculateBounds, recalculateNormals, recalculateTangents);
            }

            /// <summary>
            /// Returns a proper pipeline default shader - URP returns URP/Unlit etc
            /// </summary>
            public static Shader GetProperPipelineDefaultShader(bool lit = true, string standardUnlitCustomKeyword = "")
            {
                string shader = lit ? "Standard" : (string.IsNullOrEmpty(standardUnlitCustomKeyword) ? "Unlit/Color" : standardUnlitCustomKeyword);
                string fallback = shader;

                var pn = UnityEngine.Rendering.GraphicsSettings.currentRenderPipeline;
                if (pn == null)
                    return Shader.Find(shader);
                string pname = pn.name;
                shader = "";
                if (pname.Contains("Universal") || pname.Contains("URP"))
                    shader = "Universal Render Pipeline/" + (lit ? "Lit" : "Unlit");
                else if (pname.Contains("HDRP") || pname.Contains("HDRender"))
                    shader = "HDRP/" + (lit ? "Lit" : "Unlit");
                Shader s = Shader.Find(shader);
                if (s) return s;
                SculptingPro_Debug.Debug(null, "The scriptable render pipeline couldn't be recognized. Default built-in Standard shader has been returned");
                return Shader.Find(fallback);
            }
        }

        /// <summary>
        /// Various global transformation helpers from world to local space and vice-versa
        /// </summary>
        public static class Transformations
        {
            /// <summary>
            /// Convert point from local space to world space
            /// </summary>
            public static Vector3 TransformPoint(Vector3 WorldPos, Quaternion WorldRot, Vector3 WorldScale, Vector3 Point)
            {
                var localToWorldMatrix = Matrix4x4.TRS(WorldPos, WorldRot, WorldScale);
                return localToWorldMatrix.MultiplyPoint3x4(Point);
            }

            /// <summary>
            /// Convert point from local space to world space by the specified model
            /// </summary>
            public static Vector3 TransformPoint(SculptingPro_Thread.SculptingInputData.TransformModelData m, Vector3 Point)
            {
                var localToWorldMatrix = Matrix4x4.TRS(m.pos, m.rot, m.sca);
                return localToWorldMatrix.MultiplyPoint3x4(Point);
            }

            /// <summary>
            /// Convert point from world space to local space
            /// </summary>
            public static Vector3 TransformPointInverse(Vector3 WorldPos, Quaternion WorldRot, Vector3 WorldScale, Vector3 Point)
            {
                var localToWorldMatrix = Matrix4x4.TRS(WorldPos, WorldRot, WorldScale).inverse;
                return localToWorldMatrix.MultiplyPoint3x4(Point);
            }

            /// <summary>
            /// Convert point from world space to local space by the specified model
            /// </summary>
            public static Vector3 TransformPointInverse(SculptingPro_Thread.SculptingInputData.TransformModelData m, Vector3 Point)
            {
                var localToWorldMatrix = Matrix4x4.TRS(m.pos, m.rot, m.sca).inverse;
                return localToWorldMatrix.MultiplyPoint3x4(Point);
            }

            /// <summary>
            /// Convert point direction from local space to world space by the specified model
            /// </summary>
            public static Vector3 TransformDirection(SculptingPro_Thread.SculptingInputData.TransformModelData m, Vector3 Point)
            {
                var localToWorldMatrix = Matrix4x4.TRS(m.pos, m.rot, m.sca);
                return localToWorldMatrix.MultiplyVector(Point);
            }
        }

        /// <summary>
        /// Custom 3D math library focused on linear interpolations
        /// </summary>
        public static class Math3D
        {
            private static readonly System.Random interRand = new System.Random();

            /// <summary>
            /// Returns random number between minimum & maximum
            /// </summary>
            public static double GetRandomNumber(double minimum, double maximum)
            {
                return interRand.NextDouble() * (maximum - minimum) + minimum;
            }

            /// <summary>
            /// Custom linear interpolation between A to B
            /// </summary>
            public static Vector3 CustomLerp(Vector3 a, Vector3 b, float t)
            {
                return ((1 - t) * a + t * b);
            }
        }
	}
}