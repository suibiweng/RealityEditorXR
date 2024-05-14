using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading;

using SculptingPro.Utilities;

namespace SculptingPro
{
    [ExecuteAlways]
    /// <summary>
    /// Fully multithreaded mesh-sculpting source for mesh renderers in editor / at runtime in Unity Engine.
    /// Written by Matej Vanco 2021.
    /// https://matejvanco.com
    /// </summary>
    public sealed class SculptingPro_Thread : MonoBehaviour
    {
        /// <summary>
        /// Essential wrapper for sculpting data
        /// </summary>
        [System.Serializable]
        public sealed class SculptingInputData
        {
            // Essential params

            /// <summary>
            /// Keep the sculpting thread running?
            /// </summary>
            [HideInInspector] public bool keepRefreshing = false;

            /// <summary>
            /// While manipulating with mesh, the seams might run away and the mesh may open. If the field is enabled, the vertices will try to connect with neighbours (Takes more performance, but much better results)
            /// </summary>
            public bool autoCloseSeams = true;

            public float radius = 0.2f;
            public float intensity = 0.15f;

            [HideInInspector] public Vector3 worldPoint;
            [HideInInspector] public Vector3 normalVector;
            [HideInInspector] public Vector3 brushWorldEuler;

            // Model params

            /// <summary>
            /// Very required field to process sculpting - target model which mesh will be processed
            /// </summary>
            public SculptingPro_Model modelInput;
            /// <summary>
            /// Very required field - target model's transform data (multi-thread doesn't support Transform data, so it's required to use external variables)
            /// </summary>
            public TransformModelData modelTransformData;

            //Additional params [non-multithread related]

            /// <summary>
            /// Additional data for advanced sculpting features
            /// </summary>
            public AdditionalParams addParams;

            [System.Serializable]
            public sealed class AdditionalParams
            {
                //Raise/Lower/SetHeight related
                public BrushState brushState = BrushState.Raise;
                public SculptType sculptType = SculptType.SurfaceNormal;
                public Transform customDirObj;
                public Vector3 customDirObjVec;
                public Vector3 customDir;
                public RadiusType radiusType = RadiusType.Expontential;
                public float targetHeight = 1.0f;

                //Grab related
                [HideInInspector] public Vector3 grabOrigin;
                [HideInInspector] public Vector3 grabDirection;

                //Noise & Smoothing
                public NoiseDirections noiseDirections = NoiseDirections.VertexNormal;
                public SmoothingType smoothingType = SmoothingType.LaplacianFilter;

                //Heightmap related
                public SculptingPro_HeightmapBrushSrc heightmapBrush;
                public bool heightmapHorizontalBrush = true;
                public float heightmapYRotationOffset = 0.0f;

                //Limitations
                public bool distanceLimit = false;
                public float distanceLimitUnits = 1.0f;
            }            

            public struct TransformModelData
            {
                public Vector3 pos;
                public Quaternion rot;
                public Vector3 sca;
            }

            public SculptingInputData()
            {
                addParams = new AdditionalParams();
            }
        }

        public SculptingInputData sculptingInputData;

        public enum BrushState : int { None = 0, Raise = 1, Lower = 2, Revert = 3, Grab = 4, Noise = 5, Smooth = 6, Stylize = 7, SetHeight = 8, Heightmap = 9 };
        public enum SculptType : int { VertexNormal = 0, VertexDirection = 1, SurfaceNormal = 2, CustomDirection = 3, CustomObjectForwardDirection = 4 };
        public enum RadiusType : int { Expontential = 0, Linear = 1 };
        public enum SmoothingType : int { LaplacianFilter = 0, HCFilter = 1 };

        public enum NoiseDirections : int { XYZ = 0, XZ = 1, XY = 2, YZ = 3, Z = 4, Y = 5, X = 6, Centrical = 7, VertexNormal = 8 };

        public List<SculptingPro_Model> historyRecords = new List<SculptingPro_Model>();

        public bool useMultithreading = true;

        private static SculptingPro_Thread _instance;
        public static SculptingPro_Thread Instance { get { return _instance; } }


        private void Awake()
        {
            //Singleton intialization
            if (_instance != null && _instance != this)
            {
                Destroy(this.gameObject);
                SculptingPro_Debug.Debug(this, "Object has been destroyed due to multiple singleton classes");
                return;
            }
            else
            {
                _instance = this;
                this.name = "SCULPTING_THREAD";
            }
        }


        #region Geometry Handling

        /// <summary>
        /// Pass sculpting data to the thread
        /// </summary>
        /// <param name="sid">Required Sculpting Input Data [SID]</param>
        public void SP_PassData(SculptingInputData sid)
        {
            if (!threadDone) return;
            if (!sid.modelInput) return;
            if (!sid.keepRefreshing) return;
            sculptingInputData = sid;

            sid.modelInput.RefreshVertices();
            sid.modelInput.RecalculateBounds();
            sid.modelInput.RecalculateNormals();
        }

        /// <summary>
        /// Process complete sculpting action by the included SculptingInputData [SID]
        /// </summary>
        public void SP_ProcessVertices(SculptingInputData sid)
        {
            if (sid == null) return;
            if (sid.modelInput == null) return;
            if (sid.modelInput.workingModelData == null) return;

            if (sid.addParams.brushState == BrushState.Smooth)
            {
                switch (sid.addParams.smoothingType)
                {
                    case SmoothingType.HCFilter:
                        Vector3[] verts0 = SculptingPro_Utilities.SmoothingFilters.HCFilterSmoothing.HCFilter(
                        sid.modelInput.workingModelData.m_vertices, sid.modelInput.workingModelData.m_triangles, new SculptingPro_Utilities.SculptingAttributes()
                        {
                            radius = sid.radius,
                            transPos = sid.modelTransformData.pos,
                            transRot = sid.modelTransformData.rot,
                            transScale = sid.modelTransformData.sca,
                            worldPoint = sid.worldPoint,
                            includeWholeMesh = false
                        }, sid.intensity);
                        if (verts0 != null && sid != null && sid.modelInput != null)
                            sid.modelInput.workingModelData.m_vertices = verts0;
                        break;
                    case SmoothingType.LaplacianFilter:
                        Vector3[] verts = SculptingPro_Utilities.SmoothingFilters.LaplacianFilterSmoothing.LaplacianFilter(
                        sid.modelInput.workingModelData.m_vertices, sid.modelInput.storedModelData.m_triangles, sid.intensity, new SculptingPro_Utilities.SculptingAttributes()
                        {
                            radius = sid.radius,
                            transPos = sid.modelTransformData.pos,
                            transRot = sid.modelTransformData.rot,
                            transScale = sid.modelTransformData.sca,
                            worldPoint = sid.worldPoint,
                            includeWholeMesh = false
                        });
                        if (verts != null && sid != null && sid.modelInput != null)
                            sid.modelInput.workingModelData.m_vertices = verts;
                        break;
                }
            }
            else
            {
                if (sid.addParams.brushState == BrushState.Heightmap)
                {
                    if (sid.addParams.heightmapBrush == null)
                        return;
                    if (sid.addParams.heightmapBrush.pixelData == null || (sid.addParams.heightmapBrush.pixelData != null && sid.addParams.heightmapBrush.pixelData.Count == 0))
                        return;
                    sid.modelInput.workingModelData.m_vertices = SculptingPro_Utilities.GeometryModification.StampHeightmap(new SculptingPro_Utilities.HeightmapAttributes()
                    {
                        transPos = sid.modelTransformData.pos,
                        transRot = sid.modelTransformData.rot,
                        transSca = sid.modelTransformData.sca,
                        vertices = sid.modelInput.workingModelData.m_vertices,
                        triangles = sid.modelInput.workingModelData.m_triangles,
                        brushPos = sid.worldPoint,
                        brushDir = sid.normalVector,
                        brushIntens = -sid.intensity,
                        brushSize = sid.radius,
                        brushWorldEulerAngles = sid.brushWorldEuler
                    }, sid.addParams.heightmapBrush.pixelData);
                }
                else
                {
                    for (int i = 0; i < sid.modelInput.workingModelData.m_vertices.Length; i++)
                    {
                        if (Vector3.Distance(SculptingPro_Utilities.Transformations.TransformPoint(sid.modelTransformData, sid.modelInput.workingModelData.m_vertices[i]), sid.worldPoint) > sid.radius)
                            continue;
                        sid.modelInput.workingModelData.m_vertices[i] = SP_ProcessVertex(sid, sid.modelInput.workingModelData.m_vertices[i], sid.modelInput.storedModelData.m_vertices[i], sid.modelInput.workingModelData.m_normals[i]);
                    }
                }
            }

            SP_CloseSeams(sid);
            if (sid.modelInput.recalculateNormals && sid.modelInput.alternativeNormalsRecalculation && sid.modelInput.workingModelData.m_normals.Length < 10000)
            {
                sid.modelInput.workingModelData.m_normals = SculptingPro_Utilities.GeometryModification.AlternativeNormals.RecalculateNormals(new SculptingPro_Utilities.GeometryModification.AlternativeNormals.NormalData()
                {
                    vertices = sid.modelInput.workingModelData.m_vertices,
                    triangles = sid.modelInput.workingModelData.m_triangles,
                    normals = sid.modelInput.workingModelData.m_normals
                }, sid.modelInput.normalsAngle);
            }
        }

        /// <summary>
        /// Try to close vertex seams by the specified SID data
        /// </summary>
        public void SP_CloseSeams(SculptingInputData sid)
        {
            if (sid.autoCloseSeams && sid.modelInput != null && sid.modelInput.workingModelData != null && sid.modelInput.workingModelData.m_seams != null)
            {
                for (int i = 0; i < sid.modelInput.workingModelData.m_seams.Length; i++)
                    sid.modelInput.workingModelData.m_vertices[sid.modelInput.workingModelData.m_seams[i].y] = sid.modelInput.workingModelData.m_vertices[sid.modelInput.workingModelData.m_seams[i].x];
            }
        }

        /// <summary>
        /// Process sculpting for specific vertex with SculptingInputData
        /// </summary>
        /// <param name="sid">Required Sculpting Input Data with modelInput included</param>
        /// <param name="v">Vertex</param>
        /// <param name="o">Initial-Original vertex</param>
        /// <param name="n">Normal</param>
        /// <returns>Returns proceeded vertex</returns>
        public Vector3 SP_ProcessVertex(SculptingInputData sid, Vector3 v, Vector3 o, Vector3 n)
        {
            Vector3 vv = SculptingPro_Utilities.Transformations.TransformPoint(sid.modelTransformData, v);
            Vector3 ivv = vv;
            float i = sid.intensity;

            //Brush state initialization
            switch(sid.addParams.brushState)
            {
                //Essential raise/lower
                case BrushState.Lower:
                case BrushState.Raise:
                    i *= (sid.addParams.radiusType == RadiusType.Expontential ? (sid.radius - Vector3.Distance(vv, sid.worldPoint)) : 1.0f) * 0.05f;
                    vv += SP_ProcessSculptingType(sid, v, n) * (sid.addParams.brushState == BrushState.Lower ? -i : i);
                    break;

                case BrushState.SetHeight:
                    vv = Vector3.Lerp(vv, new Vector3(vv.x, sid.modelTransformData.pos.y + sid.addParams.targetHeight, vv.z), Mathf.Clamp01(i));
                    break;

                //Essential revert
                case BrushState.Revert:
                    vv = Vector3.Lerp(vv, SculptingPro_Utilities.Transformations.TransformPoint(sid.modelTransformData, o), Mathf.Clamp01(i));
                    break;

                //Essential grab
                case BrushState.Grab:
                    i *= (sid.addParams.radiusType == RadiusType.Expontential ? (sid.radius - Vector3.Distance(vv, sid.worldPoint)) : 1.0f) * 0.05f;
                    vv += sid.addParams.grabDirection * (i / 64.42f);
                    break;

                //Noisy brush
                case BrushState.Noise:
                    {
                        Vector3 nv = vv;
                        float rand_x = (float)SculptingPro_Utilities.Math3D.GetRandomNumber(-0.01f, 0.01f);
                        float rand_y = (float)SculptingPro_Utilities.Math3D.GetRandomNumber(-0.01f, 0.01f);
                        float rand_z = (float)SculptingPro_Utilities.Math3D.GetRandomNumber(-0.01f, 0.01f);
                        switch (sid.addParams.noiseDirections)
                        {
                            case NoiseDirections.X:
                                nv.x += rand_x * i;
                                break;
                            case NoiseDirections.Y:
                                nv.y += rand_y * i;
                                break;
                            case NoiseDirections.Z:
                                nv.z += rand_z * i;
                                break;

                            case NoiseDirections.XY:
                                nv.x += rand_x * i;
                                nv.y += rand_y * i;
                                break;
                            case NoiseDirections.XZ:
                                nv.x += rand_x * i;
                                nv.z += rand_z * i;
                                break;

                            case NoiseDirections.YZ:
                                nv.y += rand_y * i;
                                nv.z += rand_z * i;
                                break;
                            case NoiseDirections.XYZ:
                                nv.x += rand_x * i;
                                nv.y += rand_y * i;
                                nv.z += rand_z * i;
                                break;

                            case NoiseDirections.Centrical:
                                Vector3 vvv = (sid.modelTransformData.pos - nv) * rand_x;
                                nv.x += vvv.x * i;
                                nv.y += vvv.y * i;
                                nv.z += vvv.z * i;
                                break;
                            case NoiseDirections.VertexNormal:
                                vvv = n * rand_x;
                                nv.x += vvv.x * i;
                                nv.y += vvv.y * i;
                                nv.z += vvv.z * i;
                                break;
                        }
                        vv = nv;
                    }
                    break;

                //Stylize brush
                case BrushState.Stylize:
                    Vector3 pv = Vector3.positiveInfinity;
                    float md = Mathf.Infinity;
                    for (int x = 0; x < sid.modelInput.workingModelData.m_vertices.Length; x++)
                    {
                        if (sid.modelInput.workingModelData.m_vertices[x] == v) continue;
                        float dist = Vector3.Distance(sid.modelInput.workingModelData.m_vertices[x], v);
                        if (dist < md)
                        {
                            md = dist;
                            pv = sid.modelInput.workingModelData.m_vertices[x];
                        }
                    }
                    vv = SculptingPro_Utilities.Transformations.TransformPoint(sid.modelTransformData, SculptingPro_Utilities.Math3D.CustomLerp(v, pv, Mathf.Clamp01(i)));
                    break;
            }

            //Limitations
            if(sid.addParams.distanceLimit)
            {
                if ((vv - SculptingPro_Utilities.Transformations.TransformPoint(sid.modelTransformData, o)).magnitude > Mathf.Abs(sid.addParams.distanceLimitUnits))
                    vv = ivv;
            }

            return SculptingPro_Utilities.Transformations.TransformPointInverse(sid.modelTransformData, vv);
        }

        /// <summary>
        /// Evaluate current sculpting type by SculptingInputData [SID]
        /// </summary>
        /// <param name="sid">Required Sculpting Input Data</param>
        /// <param name="v">Vertex</param>
        /// <param name="n">Normal</param>
        /// <returns>Returns correct direction for vertex process</returns>
        public Vector3 SP_ProcessSculptingType(SculptingInputData sid, Vector3 v, Vector3 n)
        {
            switch(sid.addParams.sculptType)
            {
                case SculptType.SurfaceNormal: return sid.normalVector;
                case SculptType.VertexDirection: return SculptingPro_Utilities.Transformations.TransformDirection(sid.modelTransformData, v.normalized);
                case SculptType.VertexNormal: return n;
                case SculptType.CustomDirection: return sid.addParams.customDir;
                case SculptType.CustomObjectForwardDirection: return sid.addParams.customDirObjVec;
            }
            return v;
        }

        #endregion


        #region Thread Handling

        internal Thread workingThread;
        public static bool threadDone = true;
        public static float threadProgress = 0.0f;

        /// <summary>
        /// Essential thread worker - runs just once; is handled by SculptingPro_Thread
        /// </summary>
        private void SP_ThreadWorker()
        {
            while (true)
            {
                if (!sculptingInputData.keepRefreshing && threadDone)
                    continue;

                threadDone = false;

                SP_ProcessVertices(sculptingInputData);

                threadDone = true;

                Thread.Sleep(10);
            }
        }

        private bool threadCheckRunning = false;
        /// <summary>
        /// Check other thread for destroy or single creation
        /// </summary>
        /// <param name="createSculptThread">Create new thread if the thread is not existing</param>
        /// <param name="delay">Input delay if possible</param>
        /// <param name="immediately">Check thread immediately (editor) or check thread with delay (runtime)</param>
        public void SP_CheckThread(bool createSculptThread = true, float delay = 0.1f, bool immediately = false)
        {
            if (!useMultithreading) return;
            if (threadCheckRunning && !immediately) return;

            if (sculptingInputData == null) sculptingInputData = new SculptingInputData();

            if (!immediately)
                StartCoroutine(SP_ThreadCheckingRltm(createSculptThread, delay));
            else
                SP_ThreadChecking(createSculptThread);
        }

        /// <summary>
        /// Immediate thread check
        /// </summary>
        /// <param name="createSculptThread">Create thread if the thread is not existing</param>
        private void SP_ThreadChecking(bool createSculptThread)
        {
            if (createSculptThread)
            {
                if (workingThread == null)
                {
                    workingThread = new Thread(SP_ThreadWorker);
                    workingThread.Start();
                }
                else
                {
                    SP_KillThread();

                    workingThread = new Thread(SP_ThreadWorker);
                    workingThread.Start();
                }
            }
            else SP_KillThread();
        }

        /// <summary>
        /// Delayed thread checking (built mostly for runtime checking)
        /// </summary>
        private IEnumerator SP_ThreadCheckingRltm(bool createSculptThread, float delay)
        {
            threadCheckRunning = true;
            yield return new WaitForSeconds(delay);
            if (createSculptThread)
            {
                if (workingThread == null)
                {
                    workingThread = new Thread(SP_ThreadWorker);
                    workingThread.Start();
                }
                else
                {
                    SP_KillThread();

                    yield return new WaitForEndOfFrame();

                    workingThread = new Thread(SP_ThreadWorker);
                    workingThread.Start();
                }
            }
            else SP_KillThread();
            threadCheckRunning = false;
        }

        /// <summary>
        /// Kill thread immediately
        /// </summary>
        private void SP_KillThread()
        {
            if (workingThread != null && workingThread.IsAlive)
                workingThread.Abort();
            workingThread = null;
        }

        #endregion

        #region U-Inherited Methods

        //Methods below control mostly thread-behaviour

        private void OnApplicationQuit()
        {
            SP_KillThread();
        }

        private void OnApplicationFocus(bool focus)
        {
            if(focus) SP_CheckThread();
        }

        private void OnDestroy()
        {
            SP_KillThread();
        }

        private void OnDisable()
        {
            SP_KillThread();
        }

        private void OnEnable()
        {
            SP_CheckThread();
        }

        #endregion

        #region Global History

        /// <summary>
        /// Record history data by specified sculpting model
        /// </summary>
        /// <param name="spm">Input model</param>
        public void SP_RecordGlobalHistory(SculptingPro_Model spm)
        {
            historyRecords.Add(spm);
            if (historyRecords.Count > SculptingPro_Preferences.pref_MaxHistoryRecords)
                historyRecords.RemoveAt(0);
        }

        /// <summary>
        /// Undo history - make step back (if possible)
        /// </summary>
        public void SP_UndoGlobalHistory()
        {
            if (historyRecords.Count == 0)
                return;
            if (historyRecords[historyRecords.Count - 1] != null)
                historyRecords[historyRecords.Count - 1].UndoHistory();
            historyRecords.RemoveAt(historyRecords.Count - 1);
        }

        #endregion
    }
}