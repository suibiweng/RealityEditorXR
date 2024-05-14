using System.Collections.Generic;
using UnityEngine;
using System.Threading;

using SculptingPro.Geometry;
using SculptingPro.Utilities;

namespace SculptingPro
{
    [ExecuteAlways]
    [AddComponentMenu(SculptingPro_Preferences.ORGANISATION + SculptingPro_Preferences.PACKAGENAME + "SculptingPro Model")]
    /// <summary>
    /// Essential component for sculpting-ready meshes. Apply this component to an object with MeshFilter component.
    /// Written by Matej Vanco 2021.
    /// https://matejvanco.com
    /// </summary>
    public sealed class SculptingPro_Model : MonoBehaviour
    {
        /// <summary>
        /// Actual dynamic model data
        /// </summary>
        public SculptingPro_Utilities.ModelData workingModelData;
        /// <summary>
        /// Stored model data for history purpose
        /// </summary>
        public SculptingPro_Utilities.ModelData storedModelData;
        /// <summary>
        /// Initial model data the model was born with
        /// </summary>
        public SculptingPro_Utilities.ModelData initialModelData;

        /// <summary>
        /// List of history records - vertices, triangles, normals, uvs and 'r' - was restored
        /// </summary>
        public List<(Vector3[] v, int[] t, Vector3[] n, Vector2[] u, bool r)> historyRecords = new List<(Vector3[], int[], Vector3[], Vector2[], bool)>();

        public MeshFilter meshFilter;
        public MeshCollider meshCollider;

        public bool recalculateNormals = true;
        public bool alternativeNormalsRecalculation = false;
        public float normalsAngle = 90.0f;

        public bool createNewReference = true;

        public bool registerSeams = true;
        public bool deepSeamsHandler = false;

        private void Start()
        {
            if (workingModelData != null && workingModelData.m_set) return;

            // Set procedural primitives
            if (GetComponent<SculptingPro_ProceduralPrimitives>()) GetComponent<SculptingPro_ProceduralPrimitives>().model = this;

            // Remove any other collider
            Collider c = GetComponent<Collider>();
            if (c && !Application.isPlaying) DestroyImmediate(c);
            else if (c && Application.isPlaying) Destroy(c);

            recalculateNormals = SculptingPro_Preferences.pref_RecalculateNormalsAsDefault;
            alternativeNormalsRecalculation = !SculptingPro_Preferences.pref_RecalculateNormalsOptimized;
            createNewReference = SculptingPro_Preferences.pref_CreateNewReferenceAsDefault;

            RegisterModel(true);
        }

        /// <summary>
        /// Reset current model and register its initial data manually
        /// </summary>
        [ContextMenu("> Manual Reset")]
        public void ManuallyResetComponent()
        {
            workingModelData = null;
            Start();
            RefreshMeshCollider();
        }

        // Model Register

        /// <summary>
        /// Initialize & register current model for successful sculpting (required method to make the sculpting work properly)
        /// </summary>
        /// <param name="includeInitialData">Include initial data - if enabled, the very initial data will be set</param>
        public void RegisterModel(bool includeInitialData = false)
        {
            workingModelData = new SculptingPro_Utilities.ModelData();

            // Mesh Filter is the must-have component
            meshFilter = GetComponent<MeshFilter>();
            if (!meshFilter)
            {
                SculptingPro_Debug.Debug(this, "Object doesn't contain MeshFilter component. SculptingPro_Model will be destroyed", SculptingPro_Debug.DebugType.Error);
                DestroyImmediate(this);
                return;
            }

            if (createNewReference)
            {
                meshFilter.sharedMesh.name = "SculptingMesh" + Random.Range(999, 999999).ToString();
                SculptingPro_Utilities.MeshReference.CreateNewMeshReference(meshFilter, true, recalculateNormals);
            }

            // Assign all the required parameters to the working data model
            workingModelData.m_name = meshFilter.sharedMesh.name;
            workingModelData.m_vertices = meshFilter.sharedMesh.vertices;
            workingModelData.m_triangles = meshFilter.sharedMesh.triangles;
            workingModelData.m_normals = meshFilter.sharedMesh.normals;
            workingModelData.m_uvs = meshFilter.sharedMesh.uv;
            if (meshFilter.sharedMesh.uv2.Length > 0) workingModelData.m_uvs2 = meshFilter.sharedMesh.uv2;
            if (meshFilter.sharedMesh.uv3.Length > 0) workingModelData.m_uvs3 = meshFilter.sharedMesh.uv3;
            // Copy to stored data for history purpose
            storedModelData = workingModelData.Copy(workingModelData);

            workingModelData.m_set = true;
            storedModelData.m_set = true;

            // Set initial data (for restoration purpose)
            if(includeInitialData)
                initialModelData = storedModelData.Copy(storedModelData);

            // Register seams if possible
            RegisterSeams(true);

            // Add mesh collider
            if (!GetComponent<MeshCollider>())
                meshCollider = gameObject.AddComponent<MeshCollider>();
            else if (!meshCollider) meshCollider = GetComponent<MeshCollider>();
        }

        // Seams Register

        /// <summary>
        /// Main seams thread worker
        /// </summary>
        public sealed class SeamThread
        {
            public bool includeInitialData = false;
            public bool isActive = false;
            public float progress = 0.0f;

            public Thread threadSrc;
            public System.Action OnThreadDone;
        }

        public SeamThread seamThreadWorker;

        /// <summary>
        /// Register vertex seams - While manipulating with mesh, the seams might run away and the mesh may open. If the TryCloseSeams field is enabled, the vertices will try to connect with registered neighbours (Takes more performance, but much better results)
        /// </summary>
        /// <param name="includeInitialData">Initialize very initial data?</param>
        public void RegisterSeams(bool includeInitialData = false)
        {
            if(seamThreadWorker != null && seamThreadWorker.isActive)
            {
                if (seamThreadWorker.threadSrc != null && seamThreadWorker.threadSrc.IsAlive)
                {
                    SculptingPro_Debug.Debug(this, "You can't register vertex seams. The process is already running. Progress report: "+seamThreadWorker.progress.ToString("0.0") + "%");
                    return;
                }
                seamThreadWorker.isActive = false;
            }

            if(!registerSeams)
            {
                workingModelData.m_seams = null;
                storedModelData.CopySeams(workingModelData.m_seams);
                initialModelData.CopySeams(workingModelData.m_seams);
                return;
            }

            if(workingModelData.m_vertices.Length > 20000)
            {
                if(Application.isPlaying)
                    SculptingPro_Debug.Debug(this, "The mesh has more than 20k vertices so the seams generation may take a while... The generation will process in a background thread.");
#if UNITY_EDITOR
                if (!Application.isPlaying && UnityEditor.EditorUtility.DisplayDialog("Warning - Register Vertex Seams", "The mesh has more than 20k vertices so it may take a while to complete. The generation will process in a background thread. Are you sure to register vertex seams? (If the object is planar, you can press 'No'. Seam-handler is useful for spatial meshes)", "Yes", "No") == false)
                {
                    workingModelData.m_seams = null;
                    storedModelData.CopySeams(workingModelData.m_seams);
                    initialModelData.CopySeams(workingModelData.m_seams);
                    return;
                }
#endif
            }

            workingModelData.m_seams = null;
            seamThreadWorker = new SeamThread();
            seamThreadWorker.threadSrc = new Thread(ThreadRegisterSeams);
            seamThreadWorker.OnThreadDone = new System.Action(ThreadRegisterSeamsDone);
            seamThreadWorker.isActive = true;
            seamThreadWorker.threadSrc.Start();
        }

        /// <summary>
        /// Private background event for seams registration - when the thread is done
        /// </summary>
        private void ThreadRegisterSeamsDone()
        {
            storedModelData.CopySeams(workingModelData.m_seams);
            if (seamThreadWorker.includeInitialData)
                initialModelData.CopySeams(workingModelData.m_seams);

            seamThreadWorker.isActive = false;
            seamThreadWorker.threadSrc = null;
        }

        /// <summary>
        /// Private background thread for seams registration/generation
        /// </summary>
        private void ThreadRegisterSeams()
        {
            if (!deepSeamsHandler)
            {
                List<Vector2Int> seams = new List<Vector2Int>();
                Dictionary<Vector3, List<int>> seamDict = new Dictionary<Vector3, List<int>>();
                for (int i = 0; i < workingModelData.m_vertices.Length; i++)
                {
                    seamThreadWorker.progress = ((float)i / (float)workingModelData.m_vertices.Length) * 100.0f;
                    Vector3 v = workingModelData.m_vertices[i];
                    if (seamDict.ContainsKey(v))
                    {
                        var vList = seamDict[v];
                        for (int j = 0; j < vList.Count; j++)
                        {
                            int z = vList[j];
                            seams.Add(new Vector2Int(i, z));
                        }
                        vList.Add(i);
                    }
                    else
                    {
                        var vList = new List<int>();
                        vList.Add(i);
                        seamDict.Add(v, vList);
                    }
                }
                workingModelData.m_seams = seams.ToArray();
            }
            else
            {
                List<Vector2Int> seams = new List<Vector2Int>();
                for (int i = 0; i < workingModelData.m_vertices.Length; i++)
                {
                    seamThreadWorker.progress = ((float)i / (float)workingModelData.m_vertices.Length) * 100.0f;

                    bool contains = false;
                    for (int x = 0; x < seams.Count; x++)
                    {
                        if (i == seams[x].x)
                        {
                            contains = true;
                            break;
                        }
                    }
                    if (contains) continue;
                    for (int z = 0; z < workingModelData.m_vertices.Length; z++)
                    {
                        if (i == z) continue;
                        if (workingModelData.m_vertices[i] == workingModelData.m_vertices[z])
                            seams.Add(new Vector2Int(i, z));
                    }
                }
                workingModelData.m_seams = new Vector2Int[seams.Count];
                for (int i = 0; i < seams.Count; i++)
                    workingModelData.m_seams[i] = seams[i];
            }

            seamThreadWorker.OnThreadDone?.Invoke();
        }

        /// <summary>
        /// Internal method for cancelation of seams generation
        /// </summary>
        internal void ThreadRegisterSeamsCancel()
        {
            if (seamThreadWorker == null) return;

            if (seamThreadWorker.threadSrc != null)
            {
                seamThreadWorker.threadSrc.Abort();
                seamThreadWorker.threadSrc = null;
            }

            if (seamThreadWorker.isActive)
            {
                workingModelData.m_seams = null;
                storedModelData.CopySeams(workingModelData.m_seams);
                initialModelData.CopySeams(workingModelData.m_seams);
            }

            seamThreadWorker.isActive = false;
        }

        private void OnDestroy()
        {
            ThreadRegisterSeamsCancel();
        }

        private void OnDisable()
        {
            ThreadRegisterSeamsCancel();
        }

        // History

        /// <summary>
        /// Record current mesh state to the history list (local)
        /// </summary>
        /// <param name="deepHistory">If enabled - record vertices, triangles, normals, uvs</param>
        /// <param name="restore">Was the mesh restored? Record 'restore' action</param>
        public void RecordHistory(bool deepHistory = false, bool restore = false)
        {
            Vector3[] newVerts = new Vector3[workingModelData.m_vertices.Length];
            System.Array.Copy(workingModelData.m_vertices, newVerts, workingModelData.m_vertices.Length);
            if(deepHistory)
            {
                Vector3[] newNormals = new Vector3[workingModelData.m_normals.Length];
                System.Array.Copy(workingModelData.m_normals, newNormals, workingModelData.m_normals.Length);
                int[] newTris = new int[workingModelData.m_triangles.Length];
                System.Array.Copy(workingModelData.m_triangles, newTris, workingModelData.m_triangles.Length);
                Vector2[] newUvs = new Vector2[workingModelData.m_uvs.Length];
                System.Array.Copy(workingModelData.m_uvs, newUvs, workingModelData.m_uvs.Length);
                historyRecords.Add((newVerts, newTris, newNormals, newUvs, restore));
            }
            else
                historyRecords.Add((newVerts, null, null, null, false));

            if (historyRecords.Count > SculptingPro_Preferences.pref_MaxHistoryRecords)
                historyRecords.RemoveAt(0);
        }

        /// <summary>
        /// Make a step back for this mesh in the history list (if possible)
        /// </summary>
        public void UndoHistory()
        {
            if (seamThreadWorker != null && seamThreadWorker.isActive)
            {
                SculptingPro_Debug.Debug(this, "You can't process this action. Seams generation is in progress...");
                return;
            }

            if (historyRecords.Count == 0)
                return;

            bool register = false;
            if(historyRecords[historyRecords.Count - 1].t == null)
                workingModelData.m_vertices = historyRecords[historyRecords.Count - 1].v;
            else
            {
                int c = workingModelData.m_vertices.Length;
                workingModelData.m_triangles = historyRecords[historyRecords.Count - 1].t;
                workingModelData.m_vertices = historyRecords[historyRecords.Count - 1].v;
                workingModelData.m_normals = historyRecords[historyRecords.Count - 1].n;
                workingModelData.m_uvs = historyRecords[historyRecords.Count - 1].u;
                register = c != historyRecords[historyRecords.Count - 1].v.Length;
            }
            if (register)
            {
                RefreshEntireMesh(!historyRecords[historyRecords.Count - 1].r);
                RegisterModel();
            }
            else RefreshEntireMesh();

            historyRecords.RemoveAt(historyRecords.Count - 1);
        }

        /// <summary>
        /// Clear the whole history list for this mesh
        /// </summary>
        public void ClearHistory()
        {
            historyRecords = new List<(Vector3[] v, int[] t, Vector3[] n, Vector2[] u, bool r)>();
        }

        // Mesh Essentials

        /// <summary>
        /// Force-refresh current mesh vertices
        /// </summary>
        public void RefreshVertices()
        {
            meshFilter.sharedMesh.SetVertices(workingModelData.m_vertices);
        }

        /// <summary>
        /// Recalculate current mesh bounds
        /// </summary>
        public void RecalculateBounds()
        {
            meshFilter.sharedMesh.RecalculateBounds();
        }

        /// <summary>
        /// Recalculate current mesh normals
        /// </summary>
        /// <param name="forceRecalculateNormals">If enabled, the normals will be recalculated even the 'recalculateNormals' field is disabled</param>
        public void RecalculateNormals(bool forceRecalculateNormals = false)
        {
            if (recalculateNormals || forceRecalculateNormals)
            {
                if (alternativeNormalsRecalculation)
                    SculptingPro_Utilities.GeometryModification.AlternativeNormals.RecalculateNormals(meshFilter.sharedMesh, normalsAngle);
                else
                    meshFilter.sharedMesh.RecalculateNormals();
            }
        }


        /// <summary>
        /// Refresh entire mesh with triangles, uvs etc
        /// </summary>
        /// <param name="trisGoFirst">If enabled, triangles will be set before vertices</param>
        public void RefreshEntireMesh(bool trisGoFirst = true)
        {
            if (trisGoFirst) meshFilter.sharedMesh.SetTriangles(workingModelData.m_triangles, 0);
            RefreshVertices();
            if (!trisGoFirst) meshFilter.sharedMesh.SetTriangles(workingModelData.m_triangles, 0);

            if (meshFilter.sharedMesh.vertexCount == workingModelData.m_normals.Length)
                meshFilter.sharedMesh.SetNormals(workingModelData.m_normals);
            if(meshFilter.sharedMesh.vertexCount == workingModelData.m_uvs.Length)
                meshFilter.sharedMesh.SetUVs(0, workingModelData.m_uvs);
            if (workingModelData.m_uvs2 != null && meshFilter.sharedMesh.vertexCount == workingModelData.m_uvs2.Length && workingModelData.m_uvs2.Length > 0)
                meshFilter.sharedMesh.SetUVs(1, workingModelData.m_uvs2);
            if (workingModelData.m_uvs3 != null && meshFilter.sharedMesh.vertexCount == workingModelData.m_uvs3.Length && workingModelData.m_uvs3.Length > 0)
                meshFilter.sharedMesh.SetUVs(2, workingModelData.m_uvs3);

            RefreshMeshCollider();
            RecalculateBounds();
            RecalculateNormals();
        }

        /// <summary>
        /// Try to update the mesh collider
        /// </summary>
        public void RefreshMeshCollider()
        {
            if (meshCollider)
                meshCollider.sharedMesh = meshFilter.sharedMesh;
        }

        /// <summary>
        /// Restore current mesh status to its original/initial state
        /// </summary>
        public void RestoreOriginalMesh()
        {
            if (seamThreadWorker != null && seamThreadWorker.isActive)
            {
                SculptingPro_Debug.Debug(this, "You can't process this action. Seams generation is in progress...");
                return;
            }
            workingModelData = initialModelData.Copy(initialModelData);
            storedModelData = initialModelData.Copy(initialModelData);

            RefreshEntireMesh();
        }


        /// <summary>
        /// Combine current mesh with its children - create one single mesh (no undo)
        /// </summary>
        public void CombineMesh()
        {
            if (seamThreadWorker != null && seamThreadWorker.isActive)
            {
                SculptingPro_Debug.Debug(this, "You can't process this action. Seams generation is in progress...");
                return;
            }
            SculptingPro_Utilities.GeometryModification.CombineChildren(meshFilter, this);
        }
    }
}

#if UNITY_EDITOR
namespace SculptingProEditor
{
    using UnityEditor;
    using SculptingPro;

    [CustomEditor(typeof(SculptingPro_Model))]
    public sealed class SculptingPro_Model_Editor : SculptingPro_EditorUtilities
    {
        private SculptingPro_Model spm;

        private void OnEnable()
        {
            spm = (SculptingPro_Model)target;
        }

        public override void OnInspectorGUI()
        {
            S(5);
            Hb("The object is ready for sculpting");
            V();
            L("Vertices: " + spm.workingModelData.m_vertices.Length.ToString());
            if (spm.registerSeams)
            {
                if(spm.seamThreadWorker != null && spm.seamThreadWorker.isActive)
                {
                    H(false);
                    L("Seams are generating in a background...");
                    var rect = EditorGUILayout.GetControlRect(false, EditorGUIUtility.singleLineHeight);
                    EditorGUI.ProgressBar(rect, spm.seamThreadWorker.progress * 0.01f, spm.seamThreadWorker.progress.ToString("0.0") + "%");
                    He();
                }
                else if (spm.workingModelData.m_seams != null && spm.workingModelData.m_seams.Length != 0)
                    L("Seams: " + spm.workingModelData.m_seams.Length.ToString());
                else
                {
                    H(false);
                    L("Seams not available or not required");
                    if (B("Generate Seams"))
                    {
                        spm.RegisterSeams();
                        Repaint();
                        return;
                    }
                    He();
                }
            }
            if(spm.seamThreadWorker != null && (spm.seamThreadWorker.isActive || (spm.seamThreadWorker.threadSrc != null && spm.seamThreadWorker.threadSrc.IsAlive)))
            {
                if(B("Cancel Seams Generation"))
                {
                    spm.ThreadRegisterSeamsCancel();
                    Repaint();
                    return;
                }
            }
            L("Triangles: " + spm.workingModelData.m_triangles.Length.ToString());
            L("Normals: " + spm.workingModelData.m_normals.Length.ToString());
            if(spm.workingModelData.m_uvs != null)
                L("UVs: " + spm.workingModelData.m_uvs.Length.ToString());
            Ve();
            S(5);
            H(false);
            DrawProperty("createNewReference", "Create New Reference", "If enabled, the object will create a new reference on every deep-mesh change. To keep the original mesh reference, go to 'Sculpting Pro Preferences' and disable Create New Reference");
            if (B("Create New Reference", 190))
            {
                if(spm.seamThreadWorker != null && spm.seamThreadWorker.isActive)
                {
                    EditorUtility.DisplayDialog("Unable to continue", "You can't process this action. Seams generation is in progress...", "OK");
                    Repaint();
                    return;
                }
                if (EditorUtility.DisplayDialog("Question", "You are about to create a new mesh reference. All the history and shared mesh data will be removed from the current mesh. Are you sure?", "Yes", "No"))
                {
                    SculptingPro_Utilities.MeshReference.CreateNewMeshReference(spm.meshFilter, true, spm.recalculateNormals);
                    spm.RegisterModel(true);
                }
            }
            He();
            H(false);
            DrawProperty("recalculateNormals", "Auto Recalculate Normals", "If enabled, the component will automatically recalculate normals. The performance might increase by disabling the field (So you can recalculate normals manually)");
            if (spm.alternativeNormalsRecalculation)
            {
                float lw = EditorGUIUtility.labelWidth;
                EditorGUIUtility.labelWidth = 40.0f;
                DrawProperty("normalsAngle", "Angle", "Smoothing angle of the normals. The lower the angle is, the flatter the surface evaluates");
                EditorGUIUtility.labelWidth = lw;
            }
            if (B("Recalculate Normals", 190))
                spm.RecalculateNormals(true);
            He();
            DrawProperty("alternativeNormalsRecalculation", "Alternative Normals", "If enabled, the normals will be recalculated using the 'alternative normals recalculation' technique");
            H(false);
            DrawProperty("registerSeams", "Register Seams", "Allow automatic vertex-seams refresh. The performance might increase by disabling the field, but worse results may appear");
            if(spm.registerSeams)
            {
                if (B("Generate Seams", 190))
                {
                    if (EditorUtility.DisplayDialog("Question", "You are about to create a vertex seams. This may take a while. Are you sure to continue?", "Yes", "No"))
                    {
                        spm.RegisterSeams(true);
                        Repaint();
                        return;
                    }
                }
            }
            He();
            if (spm.registerSeams)
            {
                EditorGUI.indentLevel++;
                DrawProperty("deepSeamsHandler", "Deep Seams Handler", "If enabled, the seams will be generated more precisely, but takes more time to calculate & more performance to process");
                EditorGUI.indentLevel--;
            }
            S(5);
            GUI.color = SculptingPro_Preferences.pref_LockedSculptingEditorColor;
            V();
            if (B("Sculpt The Mesh In Editor"))
                SculptingPro_Editor.Enable();
            if(SculptingPro_Editor.editorRunning)
            {
                if (B("Exit Sculpting Editor"))
                    SculptingPro_Editor.Disable();
            }
            GUI.color = Color.white;
            if (spm.transform.childCount > 0)
            {
                if (B("Combine Mesh"))
                {
                    if (spm.seamThreadWorker != null && spm.seamThreadWorker.isActive)
                    {
                        EditorUtility.DisplayDialog("Unable to continue", "You can't process this action. Seams generation is in progress...", "OK");
                        Repaint();
                        return;
                    }
                    if (EditorUtility.DisplayDialog("Question", "You are about to combine current mesh with its children. All the history and shared mesh data will be removed from the current mesh and the new mesh will be registered as an initial one. Also there is no undo (You can make a duplicate of this mesh just in case). Are you sure to continue?", "Yes", "No"))
                        SculptingPro_Utilities.GeometryModification.CombineChildren(spm.meshFilter, spm);
                }
            }

            S();

            if (B("Save Mesh To Assets"))
                SculptingPro_Editor.SaveMeshToAssets(spm.meshFilter);

            if (B("Restore Original Mesh"))
            {
                if (spm.seamThreadWorker != null && spm.seamThreadWorker.isActive)
                {
                    EditorUtility.DisplayDialog("Unable to continue", "You can't process this action. Seams generation is in progress...", "OK");
                    Repaint();
                    return;
                }
                if (EditorUtility.DisplayDialog("Question", "You are about to restore the current mesh to its original state. There won't by any undo recorded. Are you sure to continue?", "Yes", "No"))
                {
                    spm.RestoreOriginalMesh();
                    spm.ClearHistory();
                }
            }
            Ve();
        }
    }
}
#endif