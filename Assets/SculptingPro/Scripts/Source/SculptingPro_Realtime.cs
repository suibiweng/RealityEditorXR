using System.Collections;
using UnityEngine;

using SculptingPro.Utilities;

namespace SculptingPro
{
    [AddComponentMenu(SculptingPro_Preferences.ORGANISATION + SculptingPro_Preferences.PACKAGENAME + "SculptingPro Realtime")]
    /// <summary>
    /// Full solution of sculpting at runtime. Apply this script to any empty object and properly assign all the required fields.
    /// Written by Matej Vanco 2021.
    /// https://matejvanco.com
    /// </summary>
    public sealed class SculptingPro_Realtime : MonoBehaviour
    {
        public SculptingPro_Thread.SculptingInputData sid;

        #region Essential variables

        // Top essentials
        public enum TargetPlatform { PC, Mobile, VR };
        public TargetPlatform targetPlatform = TargetPlatform.PC;

        public bool autoSetupRealtimeSculpting = true;

        public bool customSculpting = false;
        public bool useMultithreading = true;
        public UnityEngine.UI.Text threadOperationProgress;
        public string threadOperationProgressMessage = "Operation in progress: ";
        private bool threadOperationInProgress = false;
        private bool threadWasInOperation = false;

        public Camera mainCamera; //PC/Mobile
        public Transform mainController; //VR

        // Visual params - brush
        public Transform targetBrush;
        private GameObject targetBrushRenderer;
        public Transform targetHeightmapBrush;

        // Raycast conditions
        public LayerMask allowedLayers = ~0;
        public string allowedTag = "";
        public bool ignoreUI = false;
        public float rayDistance = 10; //VR
        public bool raycastFromCursor = true;

        // Locked sculpting params
        public bool lockedSculpting = false;
        public SculptingPro_Model lockedModelTarget;

        // Advanced - seams
        public bool tryAutoCloseSeams = true;

        #endregion

        #region Private variables

        private bool casting = false;
        private bool historyRecorded = false;
        private bool alreadyGrabbing = false;

        #endregion

        private void Awake()
        {
            if (!Application.isPlaying)
                return;
            if (!autoSetupRealtimeSculpting)
                return;
            SetupSculpting();
        }

        /// <summary>
        /// Complete internal setup process of realtime sculpting (called from manual SPR_Setup or from Awake [Auto-setup])
        /// </summary>
        private void SetupSculpting()
        {
            if (!Application.isPlaying) 
                return;

            if (customSculpting)
            {
                SPR_CheckThread(false);
                return;
            }

            if (!targetBrush)
            {
                SculptingPro_Debug.Debug(this, "Target brush object is missing. Please assign target brush field", SculptingPro_Debug.DebugType.Error);
                this.enabled = false;
                return;
            }
            targetBrushRenderer = targetBrush.gameObject;
            if (targetHeightmapBrush)
            {
                targetHeightmapBrush.parent = targetBrush;
                targetHeightmapBrush.localPosition = Vector3.zero;
                targetHeightmapBrush.localRotation = Quaternion.identity;
                targetHeightmapBrush.localScale = Vector3.one / 2.0f;
            }

            if (targetPlatform == TargetPlatform.VR)
            {
                if (!mainController)
                {
                    SculptingPro_Debug.Debug(this, "Target controller object is missing. Please assign target controller field", SculptingPro_Debug.DebugType.Error);
                    this.enabled = false;
                    return;
                }
            }
            else
            {
                if (!mainCamera)
                {
                    SculptingPro_Debug.Debug(this, "Main camera object is missing. Please assign main camera field", SculptingPro_Debug.DebugType.Error);
                    this.enabled = false;
                    return;
                }
            }

            if(lockedSculpting && !lockedModelTarget)
            {
                SculptingPro_Debug.Debug(this, "Model target object is missing. Please assign model target field to work with 'locked sculpting' feature", SculptingPro_Debug.DebugType.Error);
                this.enabled = false;
                return;
            }

            StartCoroutine(InitialThreadCheck());
        }

        private IEnumerator InitialThreadCheck()
        {
            yield return new WaitForSeconds(0.5f);

            while (true)
            {
                if (SculptingPro_Thread.Instance)
                {
                    if (SculptingPro_Thread.Instance.sculptingInputData.keepRefreshing)
                    {
                        SculptingPro_Thread.Instance.SP_CheckThread();
                        yield break;
                    }
                }
                else SPR_CheckThread(false);

                yield return new WaitForSeconds(1.0f);
            }
        }

        private void Update()
        {
            bool inOperation = !SculptingPro_Thread.threadDone && SculptingPro_Thread.threadProgress > 0;

            // Realtime sculpting won't work if operation is in progress (to prevent further complications and collapses)
            if (!customSculpting && !inOperation)
                SPR_ProcessRaycast();

            // Background operation handling - pseudoAsync operation report

            threadOperationInProgress = inOperation;
            if (threadOperationProgress)
                threadOperationProgress.enabled = inOperation;
            if (threadOperationInProgress)
            {
                if(threadOperationProgress)
                    threadOperationProgress.text = threadOperationProgressMessage + SculptingPro_Thread.threadProgress.ToString("0.0%");
                if (!threadWasInOperation)
                    threadWasInOperation = true;
            }
            else if (threadWasInOperation)
                StartCoroutine(FinishOperation());
        }

        private IEnumerator FinishOperation()
        {
            threadWasInOperation = false;
            SPR_PassDataIntern();
            sid.keepRefreshing = false;
            if (!sid.modelInput) yield break;
            yield return new WaitForEndOfFrame();
            sid.modelInput.RefreshEntireMesh();
        }

        // Method macro - SPR = SculptingProRealtime

        /// <summary>
        /// Complete manual setup of the realtime sculpting - call this method if you are going to use a custom sculpting
        /// </summary>
        /// <param name="mainCamera">Target main camera</param>
        /// <param name="targetBrush">Target brush gameObject</param>
        /// <param name="useMultithreading">Use multithreading feature?</param>
        /// <param name="customSculpting">Is custom sculpting?</param>
        public void SPR_Setup(Camera mainCamera, Transform targetBrush, bool useMultithreading = true, bool customSculpting = false)
        {
            if (!Application.isPlaying)
            {
                SculptingPro_Debug.Debug(this, "SculptingPro_Realtime can be set up at runtime only!", SculptingPro_Debug.DebugType.Information);
                return;
            }

            sid = new SculptingPro_Thread.SculptingInputData();

            this.mainCamera = mainCamera;
            this.targetBrush = targetBrush;
            this.useMultithreading = useMultithreading;
            this.customSculpting = customSculpting;

            SetupSculpting();
        }

        /// <summary>
        /// Process raycast logic
        /// </summary>
        private void SPR_ProcessRaycast()
        {
            if (!alreadyGrabbing)
            {
                Ray r;
                if (targetPlatform == TargetPlatform.VR)
                    r = new Ray(mainController.position, mainController.forward);
                else
                {
                    if(raycastFromCursor)
                        r = mainCamera.ScreenPointToRay(Input.mousePosition);
                    else
                        r = new Ray(mainCamera.transform.position, mainCamera.transform.forward);
                }

                targetBrush.localScale = Vector3.one * (sid.radius * 2);

                if (!ignoreUI && UnityEngine.EventSystems.EventSystem.current && UnityEngine.EventSystems.EventSystem.current.IsPointerOverGameObject())
                {
                    SPR_RefreshBrushData(false);
                    return;
                }

                if (Physics.Raycast(r, out RaycastHit hit, targetPlatform == TargetPlatform.VR ? rayDistance : Mathf.Infinity, allowedLayers))
                {
                    if (hit.collider)
                    {
                        if(!string.IsNullOrEmpty(allowedTag) && !hit.collider.CompareTag(allowedTag))
                        {
                            SPR_RefreshBrushData(false);
                            return;
                        }

                        SculptingPro_Model spm = hit.collider.GetComponent<SculptingPro_Model>();
                        if (spm)
                        {
                            if (lockedSculpting && lockedModelTarget != spm)
                            {
                                SPR_RefreshBrushData(false);
                                return;
                            }

                            SPR_RefreshBrushData(true);

                            targetBrush.position = hit.point;
                            targetBrush.rotation = Quaternion.FromToRotation(-Vector3.forward, hit.normal);

                            sid.modelInput = spm;

                            if (sid.addParams.sculptType == SculptingPro_Thread.SculptType.CustomObjectForwardDirection && sid.addParams.customDirObj)
                                sid.addParams.customDirObjVec = sid.addParams.customDirObj.forward;

                            sid.worldPoint = hit.point;
                            sid.normalVector = hit.normal;
                            if (targetHeightmapBrush)
                                sid.brushWorldEuler = targetHeightmapBrush.eulerAngles;
                            sid.modelTransformData = new SculptingPro_Thread.SculptingInputData.TransformModelData() { pos = spm.transform.position, rot = spm.transform.rotation, sca = spm.transform.lossyScale };
                        }
                        else SPR_RefreshBrushData(false);
                    }
                    else SPR_RefreshBrushData(false);
                }
                else SPR_RefreshBrushData(false);
            }

            //Grabbing is a separated feature
            if (sid.addParams.brushState == SculptingPro_Thread.BrushState.Grab && sid.keepRefreshing && sid.modelInput)
            {
                if (!alreadyGrabbing) alreadyGrabbing = true;

                targetBrush.position = sid.worldPoint;
                targetBrush.rotation = Quaternion.FromToRotation(-Vector3.forward, sid.normalVector);
                bool vr = targetPlatform == TargetPlatform.VR;
                if (!vr)
                    sid.addParams.grabDirection = mainCamera.transform.TransformDirection(new Vector3(Input.mousePosition.x - sid.addParams.grabOrigin.x, Input.mousePosition.y - sid.addParams.grabOrigin.y, 0));
                else
                    sid.addParams.grabDirection = ((mainController.position + mainController.forward) - sid.addParams.grabOrigin) * 400.0f;

                if (SculptingPro_Thread.Instance != null)
                {
                    sid.keepRefreshing = true;
                    SculptingPro_Thread.Instance.SP_PassData(sid);
                }
            }
        }

        /// <summary>
        /// Refresh current brush data (hide/show brush + additional function)
        /// </summary>
        private void SPR_RefreshBrushData(bool status)
        {
            casting = status;
            if (targetBrushRenderer != null && targetBrushRenderer.activeSelf != status)
                targetBrushRenderer.SetActive(status);

            if (!status && sid.keepRefreshing)
            {
                alreadyGrabbing = false;
                historyRecorded = false;
                sid.keepRefreshing = false;
                SPR_PassDataIntern();
            }
        }

        /// <summary>
        /// Pass data to the external thread
        /// </summary>
        private void SPR_PassDataIntern()
        {
            if (SculptingPro_Thread.Instance)
            {
                if (useMultithreading)
                    SculptingPro_Thread.Instance.SP_PassData(sid);
                else
                {
                    SculptingPro_Thread.Instance.SP_ProcessVertices(sid);
                    sid.modelInput.RefreshVertices();
                    sid.modelInput.RecalculateBounds();
                    sid.modelInput.RecalculateNormals();
                }
            }
        }

        /// <summary>
        /// Essential SculptingThread checker - checks if SculptingPro_Thread object exists in the scene
        /// </summary>
        /// <param name="destroy">Destroy thread? If possible</param>
        private void SPR_CheckThread(bool destroy)
        {
            if (destroy)
            {
                if (SculptingPro_Thread.Instance != null)
                    Destroy(SculptingPro_Thread.Instance.gameObject);
                SculptingPro_Thread[] spt = FindObjectsOfType<SculptingPro_Thread>();
                if (spt != null && spt.Length >= 1)
                {
                    for (int i = spt.Length - 1; i >= 0; i--)
                        Destroy(spt[i].gameObject);
                }
            }
            else
            {
                if (!SculptingPro_Thread.Instance) new GameObject().AddComponent<SculptingPro_Thread>();
                SculptingPro_Thread.Instance.useMultithreading = useMultithreading;
                SculptingPro_Thread.Instance.SP_CheckThread(true);
            }
        }

        #region Public methods

        // Essential sculpting methods

        /// <summary>
        /// Do sculpting by specified settings on this object
        /// </summary>
        public void SPR_OnProcessSculpting()
        {
            if (!sid.modelInput) return;
            if (!casting && !alreadyGrabbing)
            {
                SPR_OnStopSculpting();
                return;
            }

            if (SculptingPro_Thread.Instance != null)
            {
                if (!historyRecorded)
                {
                    historyRecorded = true;
                    sid.modelInput.RecordHistory();
                    bool vr = targetPlatform == TargetPlatform.VR;
                    if (vr)
                        sid.addParams.grabOrigin = mainController.position + mainController.forward;
                    else
                        sid.addParams.grabOrigin = new Vector3(Input.mousePosition.x, Input.mousePosition.y, 0);
                }

                sid.autoCloseSeams = tryAutoCloseSeams;
                sid.keepRefreshing = true;
                if (useMultithreading)
                    SculptingPro_Thread.Instance.SP_PassData(sid);
                else
                {
                    SculptingPro_Thread.Instance.SP_ProcessVertices(sid);
                    sid.modelInput.RefreshVertices();
                    sid.modelInput.RecalculateBounds();
                    sid.modelInput.RecalculateNormals();
                }
            }
            else SculptingPro_Debug.Debug(this, "SculptingPro_Thread is missing!", SculptingPro_Debug.DebugType.Error);
        }

        /// <summary>
        /// Stop sculpting (used mostly on 'MouseUp' event) - releases & refreshes required components when user stops sculpting
        /// </summary>
        public void SPR_OnStopSculpting()
        {
            if (!casting) return;

            if (sid.modelInput)
            {
                sid.modelInput.RefreshMeshCollider();
                if (sid.modelInput.alternativeNormalsRecalculation && sid.modelInput.workingModelData.m_normals.Length >= 10000)
                    sid.modelInput.workingModelData.m_normals = SculptingPro_Utilities.GeometryModification.AlternativeNormals.RecalculateNormals(new SculptingPro_Utilities.GeometryModification.AlternativeNormals.NormalData()
                    {
                        vertices = sid.modelInput.workingModelData.m_vertices,
                        triangles = sid.modelInput.workingModelData.m_triangles,
                        normals = sid.modelInput.workingModelData.m_normals
                    }, sid.modelInput.normalsAngle);

                if (SculptingPro_Thread.Instance)
                    SculptingPro_Thread.Instance.SP_RecordGlobalHistory(sid.modelInput);
            }
            if(customSculpting)
                casting = false;
            SPR_RefreshBrushData(false);
        }

        /// <summary>
        /// Do custom sculpting by specified settings in the method parameters (Raise/Lower brush feature only)
        /// </summary>
        /// <param name="targetModel">Target model object</param>
        /// <param name="worldPoint">World point</param>
        /// <param name="worldNormal">World normal vector (mostly hit.normal)</param>
        /// <param name="raiseBrush">Raise brush feature or lower?</param>
        /// <param name="radius">Sculpting radius</param>
        /// <param name="intensity">Sculpting intensity</param>
        /// <param name="recordToHistory">Record current mesh data to history?</param>
        public void SPR_OnCustomSculpting(SculptingPro_Model targetModel, Vector3 worldPoint, Vector3 worldNormal, bool raiseBrush, float radius, float intensity, bool recordToHistory = true)
        {
            if (SculptingPro_Thread.Instance == null)
            {
                SculptingPro_Debug.Debug(this, "SculptingPro_Thread doesn't exist in the current scene!", SculptingPro_Debug.DebugType.Error);
                return;
            }
            sid = new SculptingPro_Thread.SculptingInputData();
            casting = true;
            sid.addParams.brushState = raiseBrush ? SculptingPro_Thread.BrushState.Raise : SculptingPro_Thread.BrushState.Lower;
            sid.modelInput = targetModel;
            sid.autoCloseSeams = tryAutoCloseSeams;

            sid.worldPoint = worldPoint;
            sid.normalVector = worldNormal;
            sid.modelTransformData = new SculptingPro_Thread.SculptingInputData.TransformModelData() { pos = targetModel.transform.position, rot = targetModel.transform.rotation, sca = targetModel.transform.lossyScale };

            sid.radius = radius;
            sid.intensity = intensity;
            if (recordToHistory)
            {
                if (!historyRecorded)
                {
                    historyRecorded = true;
                    sid.modelInput.RecordHistory();
                }
            }

            sid.keepRefreshing = true;
            if (useMultithreading)
                SculptingPro_Thread.Instance.SP_PassData(sid);
            else
            {
                SculptingPro_Thread.Instance.SP_ProcessVertices(sid);
                sid.modelInput.RefreshVertices();
                sid.modelInput.RecalculateBounds();
                sid.modelInput.RecalculateNormals();
            }
        }

        /// <summary>
        /// Do custom sculpting by specified settings in the method parameters (Heightmap feature only)
        /// </summary>
        /// <param name="targetModel">Target model object</param>
        /// <param name="worldPoint">World point</param>
        /// <param name="worldNormal">World normal vector (mostly hit.normal)</param>
        /// <param name="worldEuler">World euler rotation</param>
        /// <param name="hbs">Heightmap brush source (required pixel data)</param>
        /// <param name="yRotation">Y Rotation offset of the heightmap brush</param>
        /// <param name="radius">Sculpting radius</param>
        /// <param name="intensity">Sculpting intensity</param>
        /// <param name="recordToHistory">Record current mesh data to history?</param>
        public void SPR_OnCustomSculpting(SculptingPro_Model targetModel, Vector3 worldPoint, Vector3 worldNormal, Vector3 worldEuler, SculptingPro_HeightmapBrushSrc hbs, float yRotation, float radius, float intensity, bool recordToHistory = true)
        {
            if (SculptingPro_Thread.Instance == null)
            {
                SculptingPro_Debug.Debug(this, "SculptingPro_Thread doesn't exist in the current scene!", SculptingPro_Debug.DebugType.Error);
                return;
            }
            sid = new SculptingPro_Thread.SculptingInputData();
            casting = true;
            sid.addParams.brushState = SculptingPro_Thread.BrushState.Heightmap;
            sid.addParams.heightmapBrush = hbs;
            sid.addParams.heightmapHorizontalBrush = yRotation == 0.0f;
            sid.addParams.heightmapYRotationOffset = yRotation;
            sid.brushWorldEuler = worldEuler;
            sid.modelInput = targetModel;
            sid.autoCloseSeams = tryAutoCloseSeams;

            sid.worldPoint = worldPoint;
            sid.normalVector = worldNormal;
            sid.modelTransformData = new SculptingPro_Thread.SculptingInputData.TransformModelData() { pos = targetModel.transform.position, rot = targetModel.transform.rotation, sca = targetModel.transform.lossyScale };

            sid.radius = radius;
            sid.intensity = intensity;
            if (recordToHistory)
            {
                if (!historyRecorded)
                {
                    historyRecorded = true;
                    sid.modelInput.RecordHistory();
                }
            }

                sid.keepRefreshing = true;
            if (useMultithreading)
                SculptingPro_Thread.Instance.SP_PassData(sid);
            else
            {
                SculptingPro_Thread.Instance.SP_ProcessVertices(sid);
                sid.modelInput.RefreshVertices();
                sid.modelInput.RecalculateBounds();
                sid.modelInput.RecalculateNormals();
            }
        }

        /// <summary>
        /// Do custom sculpting by specified settings in the method parameters (Completely custom 'SculptingInputData')
        /// </summary>
        /// <param name="sidData">Brand new sculpting input data</param>
        /// <param name="recordToHistory">Record current mesh data to history?</param>
        public void SPR_OnCustomSculpting(SculptingPro_Thread.SculptingInputData sidData, bool recordToHistory = true)
        {
            if (SculptingPro_Thread.Instance == null)
            {
                SculptingPro_Debug.Debug(this, "SculptingPro_Thread doesn't exist in the current scene!", SculptingPro_Debug.DebugType.Error);
                return;
            }
            casting = true;
            sid = sidData;
            if (recordToHistory)
            {
                if (!historyRecorded)
                {
                    historyRecorded = true;
                    sid.modelInput.RecordHistory();
                }
            }

            sid.keepRefreshing = true;
            if (useMultithreading)
                SculptingPro_Thread.Instance.SP_PassData(sid);
            else
            {
                SculptingPro_Thread.Instance.SP_ProcessVertices(sid);
                sid.modelInput.RefreshVertices();
                sid.modelInput.RecalculateBounds();
                sid.modelInput.RecalculateNormals();
            }
        }

        /// <summary>
        /// Enable or Disable sculpting and overall script (safe way than setting enable/disable)
        /// </summary>
        public void SPR_OnEnableDisableSculpting(bool v)
        {
            targetBrushRenderer.SetActive(v);
            this.enabled = v;
        }

        // Essential variable-changing methods

        /// <summary>
        /// Change sculpting radius by custom value
        /// </summary>
        public void SPR_ChangeRadius(float v)
        {
            sid.radius = v;
        }

        /// <summary>
        /// Add sculpting radius by custom value
        /// </summary>
        public void SPR_ChangeRadius_Add(float addVal)
        {
            sid.radius += addVal;
        }

        /// <summary>
        /// Subtract sculpting radius by custom value
        /// </summary>
        public void SPR_ChangeRadius_Sub(float subVal)
        {
            sid.radius -= subVal;
            if (sid.radius <= 0) sid.radius = 0;
        }

        /// <summary>
        /// Change sculpting intensity by custom value
        /// </summary>
        public void SPR_ChangeIntensity(float v)
        {
            sid.intensity = v;
        }

        /// <summary>
        /// Add sculpting Intensity by custom value
        /// </summary>
        public void SPR_ChangeIntensity_Add(float addVal)
        {
            sid.intensity += addVal;
        }

        /// <summary>
        /// Subtract sculpting Intensity by custom value
        /// </summary>
        public void SPR_ChangeIntensity_Sub(float subVal)
        {
            sid.intensity -= subVal;
            if (sid.intensity <= 0) sid.intensity = 0;
        }

        /// <summary>
        /// Change a sculpting brush state by existing option [None = 0, Raise = 1, Lower = 2, Revert = 3, Grab = 4, Noise = 5, Smooth = 6, Stylize = 7, Heightmap = 8]
        /// </summary>
        /// <param name="v">None = 0, Raise = 1, Lower = 2, Revert = 3, Grab = 4, Noise = 5, Smooth = 6, Stylize = 7, Heightmap = 8</param>
        public void SPR_ChangeBrushState(int v)
        {
            sid.addParams.brushState = (SculptingPro_Thread.BrushState)v;
            if(targetHeightmapBrush)
                targetHeightmapBrush.gameObject.SetActive((SculptingPro_Thread.BrushState)v == SculptingPro_Thread.BrushState.Heightmap);
        }

        // Advanced variable-changing methods (sculpting type, noise, smoothing...)

        /// <summary>
        /// Change sculpting type by existing option [VertexNormal = 0, VertexDirection = 1, SurfaceNormal = 2, CustomDirection = 3, CustomObjectForwardDirection = 4]
        /// </summary>
        /// <param name="v">VertexNormal = 0, VertexDirection = 1, SurfaceNormal = 2, CustomDirection = 3, CustomObjectForwardDirection = 4</param>
        public void SPR_ChangeSculptingType(int v)
        {
            sid.addParams.sculptType = (SculptingPro_Thread.SculptType)v;
        }

        /// <summary>
        /// Change noise direction by existing option [XYZ = 0, XZ = 1, XY = 2, YZ = 3, Z = 4, Y = 5, X = 6, Centrical = 7, VertexNormal = 8]
        /// </summary>
        /// <param name="v">XYZ = 0, XZ = 1, XY = 2, YZ = 3, Z = 4, Y = 5, X = 6, Centrical = 7, VertexNormal = 8</param>
        public void SPR_ChangeNoiseDirection(int v)
        {
            sid.addParams.noiseDirections = (SculptingPro_Thread.NoiseDirections)v;
        }

        /// <summary>
        /// Change smoothing type by existing option [LaplacianFilter = 0, HCFilter = 1]
        /// </summary>
        /// <param name="v">LaplacianFilter = 0, HCFilter = 1</param>
        public void SPR_ChangeSmoothingType(int v)
        {
            sid.addParams.smoothingType = (SculptingPro_Thread.SmoothingType)v;
        }

        /// <summary>
        /// Change radius type by existing option [Expontential = 0, Linear = 1]
        /// </summary>
        /// <param name="v">Expontential = 0, Linear = 1</param>
        public void SPR_ChangeRadiusType(int v)
        {
            sid.addParams.radiusType = (SculptingPro_Thread.RadiusType)v;
        }

        /// <summary>
        /// Enable/ Disable distance limitation
        /// </summary>
        /// <param name="v">Enable/ Disable</param>
        public void SPR_EnableDisableDistanceLimit(bool v)
        {
            sid.addParams.distanceLimit = v;
        }

        /// <summary>
        /// Change distance limitation by custom value
        /// </summary>
        public void SPR_ChangeDistanceLimit(float v)
        {
            sid.addParams.distanceLimitUnits = v;
        }

        /// <summary>
        /// Change target set height by custom value
        /// </summary>
        public void SPR_ChangeSetHeightYValue(float v)
        {
            sid.addParams.targetHeight = v;
        }

        /// <summary>
        /// Change the current heightmap brush
        /// </summary>
        public void SPR_ChangeHeightmapBrush(SculptingPro_HeightmapBrushSrc hbs)
        {
            sid.addParams.heightmapBrush = hbs;
            if(targetHeightmapBrush)
                targetHeightmapBrush.GetComponentInChildren<MeshRenderer>().material.mainTexture = hbs.heightmapTexture;
        }

        /// <summary>
        /// Change current heightmap brush rotation Y offset
        /// </summary>
        public void SPR_ChangeHeightmapBrushRotationOffset(float v)
        {
            sid.addParams.heightmapYRotationOffset = v;
            if (targetHeightmapBrush)
            {
                Vector3 rot = targetHeightmapBrush.localEulerAngles;
                rot.z = v;
                targetHeightmapBrush.localEulerAngles = rot;
            }
        }

        // Advanced functions & other features

        /// <summary>
        /// Process undo action (if possible)
        /// </summary>
        public void SPR_OnUndo()
        {
            if (!SculptingPro_Thread.Instance) return;
            if (!lockedSculpting)
                SculptingPro_Thread.Instance.SP_UndoGlobalHistory();
            else if(lockedModelTarget)
                lockedModelTarget.UndoHistory();
        }

        /// <summary>
        /// Restore target to original/ initial mesh data
        /// </summary>
        public void SPR_OnRestoreTarget()
        {
            if (!lockedSculpting) return;

            if (lockedModelTarget)
            {
                if (lockedModelTarget.seamThreadWorker != null && lockedModelTarget.seamThreadWorker.isActive)
                {
                    SculptingPro_Debug.Debug(lockedModelTarget, "You can't process this action. Seams generation is in progress...");
                    return;
                }
                lockedModelTarget.RestoreOriginalMesh();
            }
        }

        /// <summary>
        /// Process subdivision on locked target model
        /// </summary>
        public void SPR_SubdivideTarget()
        {
            if(lockedModelTarget == null)
            {
                SculptingPro_Debug.Debug(this, "Locked model target is missing. Subdivision will be terminated", SculptingPro_Debug.DebugType.Error);
                return;
            }
            if (lockedModelTarget.seamThreadWorker != null && lockedModelTarget.seamThreadWorker.isActive)
            {
                SculptingPro_Debug.Debug(lockedModelTarget, "You can't process this action. Seams generation is in progress...");
                return;
            }
            lockedModelTarget.RecordHistory(true);
            SculptingPro_Utilities.GeometryModification.VertexSubdivision.Subdivide(lockedModelTarget.meshFilter.sharedMesh);
            lockedModelTarget.RegisterModel();
            lockedModelTarget.RefreshEntireMesh();
        }

        /// <summary>
        /// Process smooth function on locked target model
        /// </summary>
        public void SPR_SmoothTarget()
        {
            if (lockedModelTarget == null)
            {
                SculptingPro_Debug.Debug(this, "Locked model target is missing. Smooth function will be terminated", SculptingPro_Debug.DebugType.Error);
                return;
            }
            if (lockedModelTarget.seamThreadWorker != null && lockedModelTarget.seamThreadWorker.isActive)
            {
                SculptingPro_Debug.Debug(lockedModelTarget, "You can't process this action. Seams generation is in progress...");
                return;
            }
            lockedModelTarget.RecordHistory(true);
            sid.modelInput = lockedModelTarget;
            if (lockedModelTarget.workingModelData.m_vertices.Length > 2000)
                lockedModelTarget.workingModelData.m_vertices = SculptingPro_Utilities.SmoothingFilters.LaplacianFilterSmoothing.LaplacianFilter(
                    lockedModelTarget.workingModelData.m_vertices, lockedModelTarget.workingModelData.m_triangles, 1.5f);
            else
                lockedModelTarget.workingModelData.m_vertices = SculptingPro_Utilities.SmoothingFilters.HCFilterSmoothing.HCFilter(
                lockedModelTarget.workingModelData.m_vertices, lockedModelTarget.workingModelData.m_triangles, 0.5f);
            if (SculptingPro_Thread.Instance)
                SculptingPro_Thread.Instance.SP_CloseSeams(sid);
            lockedModelTarget.RefreshEntireMesh();
        }

        /// <summary>
        /// Process flip function on locked target model
        /// </summary>
        public void SPR_FlipTarget()
        {
            if (lockedModelTarget == null)
            {
                SculptingPro_Debug.Debug(this, "Locked model target is missing. Flip function will be terminated", SculptingPro_Debug.DebugType.Error);
                return;
            }
            if (lockedModelTarget.seamThreadWorker != null && lockedModelTarget.seamThreadWorker.isActive)
            {
                SculptingPro_Debug.Debug(lockedModelTarget, "You can't process this action. Seams generation is in progress...");
                return;
            }
            lockedModelTarget.RecordHistory(true);
            lockedModelTarget.workingModelData.m_triangles = SculptingPro_Utilities.GeometryModification.FlipMesh(lockedModelTarget.meshFilter.sharedMesh.triangles);
            lockedModelTarget.RefreshEntireMesh();
        }

        /// <summary>
        /// Try to close broken seams on locked target model (input represents a 'looking-distance' for a possible vertices)
        /// </summary>
        public void SPR_TryCloseSeamsTarget(float v)
        {
            if (lockedModelTarget == null)
            {
                SculptingPro_Debug.Debug(this, "Locked model target is missing. TryCloseSeams function will be terminated", SculptingPro_Debug.DebugType.Error);
                return;
            }
            lockedModelTarget.RecordHistory(true);
            lockedModelTarget.workingModelData.m_vertices = SculptingPro_Utilities.GeometryModification.TryCloseSeams(lockedModelTarget.meshFilter.sharedMesh.vertices, v);
            lockedModelTarget.RefreshEntireMesh();
        }

        /// <summary>
        /// Try to auto-close broken seams on locked target model
        /// </summary>
        public void SPR_TryAutoCloseSeamsTarget(bool v)
        {
            tryAutoCloseSeams = v;
        }

        #endregion
    }
}

#if UNITY_EDITOR
namespace SculptingProEditor
{
    using UnityEditor;
    using SculptingPro;

    [CustomEditor(typeof(SculptingPro_Realtime))]
    public sealed class SculptingPro_Realtime_Editor : SculptingPro_EditorUtilities
    {
        private SculptingPro_Realtime spr;

        public Texture realtimeImgEditor;

        private void OnEnable()
        {
            spr = (SculptingPro_Realtime)target;
            realtimeImgEditor = Resources.Load("eico_h_realtimeHeader", typeof(Texture)) as Texture;
        }

        public override void OnInspectorGUI()
        {
            S(5);
            if(realtimeImgEditor != null) L(realtimeImgEditor);
            H();
            if (B("Documentation"))
                SculptingPro_Editor.Support_Docs();
            if (B("Discord"))
                SculptingPro_Editor.Support_Discord();
            if (B("Contact"))
                SculptingPro_Editor.Support_Contact();
            He();
            Hb("Sculpting Pro at runtime v" + SculptingPro_Preferences.VERSION + " ["+SculptingPro_Preferences.DATE+"]");
            S(5);

            L("> Essentials", true);
            V();
            V();
            V();
            DrawProperty("autoSetupRealtimeSculpting", "Auto-Setup", "If enabled, the realtime sculpting will be automatically setup. Otherwise you are able to setup the realtime sculpting manually (Call the SPR_Setup method)");
            Ve();
            DrawProperty("customSculpting", "Custom Sculpting", "If enabled, the custom sculpting feature will be enabled (Mostly used for internal purpose - for custom input, custom sculpting rays etc... Ignore this field for default realtime sculpting with all the available fields below)");
            DrawProperty("useMultithreading", "Use Multithreading", "If enabled, the sculpting will be ready for complex meshes (50k+). Doesn't work for WebGL platforms");
#if UNITY_WEBGL
			if (spr.useMultithreading)
            	Hb("WebGL doesn't support multithreaded applications. Please disable 'Use Multithreading' field to prevent further issues...", MessageType.Error);
#endif
			if (!spr.useMultithreading)
                Hb("It's recommended to keep multithreading enabled due to performance stability. However if it's required to keep the multithreading disabled, keep the target meshes vertex count low (below 4k).", MessageType.Warning);
            else
            {
                EditorGUI.indentLevel++;
                DrawProperty("threadOperationProgress", "Thread Operation Progress", "Operation thread progress report - optional field");
                DrawProperty("threadOperationProgressMessage", "Message", "Main message of the thread operation");
                EditorGUI.indentLevel--;
            }
            DrawProperty("tryAutoCloseSeams", "Try Auto Close Seams", "While manipulating with mesh, the seams might run away and the mesh may open. If the field is enabled, the vertices will try to connect with neighbours. Used mostly for spatial meshes, planar meshes don't need this feature (Takes more performance, but evaluates much better results)");
            Ve();
            if (spr.customSculpting)
            {
                Ve();
                S(5);
                Hb("Custom Sculpting field is enabled. Custom Sculpting allows you to operate sculpting features from the code. Use 'SPR_OnCustomSculpting' method to access custom mesh features");
                S();
                return;
            }
            S(5);
            V();
            DrawProperty("targetPlatform", "Target Platform", "PC/Mobile/VR?");
            EditorGUI.indentLevel++;
            if (spr.targetPlatform == SculptingPro_Realtime.TargetPlatform.VR)
            {
                if (spr.mainController == null)
                    GUI.color = new Color(0.8f, 0.3f, 0.3f) * 2.0f;
                DrawProperty("mainController", "*Target Controller", "[REQUIRED] Target controller object for sculpting");
                GUI.color = Color.white;
            }
            else
            {
                if (spr.mainCamera == null)
                    GUI.color = new Color(0.8f, 0.3f, 0.3f) * 2.0f;
                DrawProperty("mainCamera", "*Target Camera", "[REQUIRED] Target camera object for sculpting");
                GUI.color = Color.white;
            }
            EditorGUI.indentLevel--;
            Ve();
            S();
            V();
            if (spr.targetBrush == null)
                GUI.color = new Color(0.8f, 0.3f, 0.3f) * 2.0f;
            DrawProperty("targetBrush", "*Target Sculpting Brush", "[REQUIRED] Target sculpting brush for 'virtual' sculpting pointer. Can be any object. The best shape is sphere");
            GUI.color = Color.white;
            Ve();
            Ve();

            S();

            L("> Raycast Conditions", true);
            V();
            DrawProperty("allowedLayers", "Allowed Layers", "Allowed raycast layers for sculpting (default:everything)");
            DrawProperty("allowedTag", "Allowed Tag", "Allowed raycast tag for sculpting (default:empty) = Leave the field empty if you would like to raycast all objects");
            DrawProperty("ignoreUI", "Ignore UI", "If disabled, the raycast will stop if cursor/ray hits any UI element. Otherwise the UI will be ignored");
            if (spr.targetPlatform != SculptingPro_Realtime.TargetPlatform.VR)
                DrawProperty("raycastFromCursor", "Raycast From Cursor", "If enabled, the raycast origin will be cursor/finger. Otherwise the origin will be camera's forward direction (center of the screen)");
            Ve();

            S();

            L("> Sculpting Parameters", true);
            V();
            V();
            DrawProperty("sid.radius", "Brush Radius", "Overall brush radius in virtual units");
            DrawProperty("sid.intensity", "Brush Intensity", "Overall brush intensity in virtual units");
            Ve();
            S(5);
            V();
            DrawProperty("sid.addParams.brushState", "Brush State", "Current brush state");
            if (spr.sid.addParams.brushState == SculptingPro_Thread.BrushState.Raise || spr.sid.addParams.brushState == SculptingPro_Thread.BrushState.Lower)
            {
                EditorGUI.indentLevel++;
                DrawProperty("sid.addParams.sculptType", "Sculpting Type", "Current sculpting type");
                if(spr.sid.addParams.sculptType == SculptingPro_Thread.SculptType.CustomDirection)
                    DrawProperty("sid.addParams.customDir", "Custom direction", "Custom Vector direction in which certain vertices will move");
                if (spr.sid.addParams.sculptType == SculptingPro_Thread.SculptType.CustomObjectForwardDirection)
                    DrawProperty("sid.addParams.customDirObj", "Custom Object Direction", "Custom object-local-forward direction in which certain vertices will move");
                if (spr.sid.addParams.sculptType == SculptingPro_Thread.SculptType.SurfaceNormal)
                    Hb("Calculated surface normal direction by brush & raycast");
                if (spr.sid.addParams.sculptType == SculptingPro_Thread.SculptType.VertexNormal)
                    Hb("Calculated direction by normal data from vertices");
                if (spr.sid.addParams.sculptType == SculptingPro_Thread.SculptType.VertexDirection)
                    Hb("Calculated 'natural' direction from vertices");
                EditorGUI.indentLevel--;
            }

            if (spr.sid.addParams.brushState == SculptingPro_Thread.BrushState.Raise || spr.sid.addParams.brushState == SculptingPro_Thread.BrushState.Lower
                || spr.sid.addParams.brushState == SculptingPro_Thread.BrushState.Grab)
            {
                EditorGUI.indentLevel++;
                DrawProperty("sid.addParams.radiusType", "Radius Type", "Current radius type, Exponential evaluates smoother results");
                EditorGUI.indentLevel--;
            }

            if (spr.sid.addParams.brushState == SculptingPro_Thread.BrushState.Noise)
            {
                EditorGUI.indentLevel++;
                DrawProperty("sid.addParams.noiseDirections", "Noise Direction", "Current noise direction type in which 'noised-vertices' will move");
                EditorGUI.indentLevel--;
            }
            if (spr.sid.addParams.brushState == SculptingPro_Thread.BrushState.Smooth)
            {
                EditorGUI.indentLevel++;
                DrawProperty("sid.addParams.smoothingType", "Smoothing Type", "Current smoothing type method");
                if (spr.sid.addParams.smoothingType == SculptingPro_Thread.SmoothingType.HCFilter)
                    Hb("HC Filter is built mostly for spatial meshes, takes more time to process (sphere, cube, generics...)");
                else
                    Hb("Laplacian Filter is built mostly for planar meshes, takes less time to process (plane, quad, terrains...)");
                EditorGUI.indentLevel--;
            }

            if (spr.sid.addParams.brushState == SculptingPro_Thread.BrushState.SetHeight)
            {
                EditorGUI.indentLevel++;
                DrawProperty("sid.addParams.targetHeight", "Target Height [World]", "Vertices target height position in World Space");
                if (spr.sid.addParams.distanceLimit)
                    Hb("Distance Limitation field is enabled - this may affect the SetHeight brush state", MessageType.Warning);
                EditorGUI.indentLevel--;
            }

            if (spr.sid.addParams.brushState == SculptingPro_Thread.BrushState.Heightmap)
            {
                EditorGUI.indentLevel++;
                DrawProperty("targetHeightmapBrush", "Heightmap Editor Brush", "Target editor brush for visualization of the selected heightmap brush texture");
                DrawProperty("sid.addParams.heightmapBrush", "Heightmap Texture Brush", "Main heightmap texture brush with pixel data");
                if (spr.sid.addParams.heightmapBrush)
                {
                    if (spr.sid.addParams.heightmapBrush.heightmapTexture == null)
                        Hb("The heightmap brush texture is missing!", MessageType.Error);
                    else if (spr.sid.addParams.heightmapBrush.pixelData == null || spr.sid.addParams.heightmapBrush.pixelData.Count == 0)
                    {
                        Hb("Pixel data on this brush are not calculated. Please calculate pixel data below", MessageType.Error);
                        if (B("Calculate Pixel Data"))
                            spr.sid.addParams.heightmapBrush.HeightmapBrushSrc_CalculateHeightmapPixelData();
                    }
                }
                DrawProperty("sid.addParams.heightmapHorizontalBrush", "Horizontal Brush", "Is the heightmap brush horizontal only?");
                if (spr.sid.addParams.heightmapHorizontalBrush)
                    DrawProperty("sid.addParams.heightmapYRotationOffset", "Rotation Offset", "Horizontal heightmap brush Y rotation offset");

                if (spr.sid.addParams.distanceLimit)
                    Hb("Distance Limitation field is enabled - this may affect the Heightmap brush state", MessageType.Warning);
                EditorGUI.indentLevel--;
            }

            Ve();
            S(5);
            V();
            DrawProperty("sid.addParams.distanceLimit", "Distance Limitation", "Enable/Disable distance limitations");
            if (spr.sid.addParams.distanceLimit)
            {
                EditorGUI.indentLevel++;
                DrawProperty("sid.addParams.distanceLimitUnits", "Max Distance", "Max distance of processed vertices from initial state to the current");
                EditorGUI.indentLevel--;
            }
            Ve();
            Ve();

            S();

            L("> Locked Sculpting", true);
            Hb("If locked sculpting is enabled, you will be able to manipulate with just one specific model. Great feature for precise & clear sculpting.");
            V();
            DrawProperty("lockedSculpting", "Locked Sculpting", "If enabled, you will be able to manipulate with just one specific model");
            if (spr.lockedSculpting)
            {
                EditorGUI.indentLevel++;
                DrawProperty("lockedModelTarget", "Target Sculpting Model", "Specific target model for sculpting");
                EditorGUI.indentLevel--;
            }
            Ve();
            if(spr.targetPlatform != SculptingPro_Realtime.TargetPlatform.VR && !spr.GetComponent<SculptingPro_InputSample>())
            {
                S();
                if (B("Add Input Sample"))
                    spr.gameObject.AddComponent<SculptingPro_InputSample>();
            }
            S();
        }
    }
}
#endif