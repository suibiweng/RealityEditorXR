#if UNITY_EDITOR
using UnityEditor;
using UnityEngine;

using SculptingPro;
using SculptingPro.Utilities;

namespace SculptingProEditor
{
    /// <summary>
    /// Main SculptingPro editor in the Unity Editor Scene-View only.
    /// Written by Matej Vanco 2021.
    /// https://matejvanco.com
    /// </summary>
    public sealed class SculptingPro_Editor : SculptingPro_EditorWindowUtilities
    {
        [MenuItem("Window/Sculpting Pro/Enable in Editor", false)]
        public static void Enable()
        {
            if (editorRunning) return;
            editorRunning = true;

            GetResources();

            if (Selection.activeGameObject && Selection.activeGameObject.GetComponent<SculptingPro_Model>())
                inLockedMode = Selection.activeGameObject.GetComponent<SculptingPro_Model>();

            dataIn = new SculptingPro_Thread.SculptingInputData();
            operationInProgress = false;

            if (EditorPrefs.HasKey(intensRegistry) && EditorPrefs.HasKey(intensMultiRegistry)
            && EditorPrefs.HasKey(radiusRegistry) && EditorPrefs.HasKey(radiusMultiRegistry))
            {
                dataIn.intensity = EditorPrefs.GetFloat(intensRegistry);
                intensMultipler = EditorPrefs.GetFloat(intensMultiRegistry);
                dataIn.radius = EditorPrefs.GetFloat(radiusRegistry);
                radiusMultipler = EditorPrefs.GetFloat(radiusMultiRegistry);
            }

            SceneView.duringSceneGui += SceneViewSculptingEditor;
            SculptingPro_Thread.threadProgress = 0.0f;

            System.Reflection.Assembly assembly = typeof(EditorWindow).Assembly;
            System.Type type = assembly.GetType("UnityEditor.GameView");
            GetWindow(type);

            CheckForThread();
        }

        [MenuItem("Window/Sculpting Pro/Disable in Editor", false)]
        public static void Disable()
        {
            if (!editorRunning) return;
            editorRunning = false;

            inLockedMode = null;

            EditorPrefs.SetFloat(intensRegistry, dataIn.intensity);
            EditorPrefs.SetFloat(intensMultiRegistry, intensMultipler);
            EditorPrefs.SetFloat(radiusRegistry, dataIn.radius);
            EditorPrefs.SetFloat(radiusMultiRegistry, radiusMultipler);

            SceneView.duringSceneGui -= SceneViewSculptingEditor;
            if(editorUpdateUsed)
                EditorApplication.update -= EditorUpdateProcessor;
            editorUpdateUsed = false;

            CheckForThread(true);

            if (heightmapBrushTemp)
                DestroyImmediate(heightmapBrushTemp.gameObject);

            SculptingPro_Thread.threadProgress = 0.0f;
            heightmapBrushTemp = null;
            operationInProgress = false;
        }

        [MenuItem("Window/Sculpting Pro/Support/Direct Contact", false)]
        public static void Support_Contact()
        {
            Application.OpenURL("https://matejvanco.com/contact/");
        }

        [MenuItem("Window/Sculpting Pro/Support/Discord", false)]
        public static void Support_Discord()
        {
            Application.OpenURL("https://discord.com/invite/WdcYHBtCfr");
        }

        [MenuItem("Window/Sculpting Pro/Support/General Documentation", false)]
        public static void Support_Docs()
        {
            Application.OpenURL("https://docs.google.com/presentation/d/1csc04iSj2ZyoUODZYtEP_eaHNVhDxFACq6Gghr4tXMg/edit?usp=sharing");
        }

        [MenuItem("Window/Sculpting Pro/Support/APi Documentation", false)]
        public static void Support_Api()
        {
            Application.OpenURL("https://struct9.com/matejvanco-assets/sculpting-pro/Introduction");
        }

        /// <summary>
        /// Check SculptingThread object and setup essentials
        /// </summary>
        /// <param name="destroy">or destroy them!</param>
        private static void CheckForThread(bool destroy = false)
        {
            if (destroy)
            {
                if (SculptingPro_Thread.Instance != null)
                    DestroyImmediate(SculptingPro_Thread.Instance.gameObject);
                SculptingPro_Thread[] spt = FindObjectsOfType<SculptingPro_Thread>();
                if (spt != null && spt.Length >= 1)
                {
                    for (int i = spt.Length - 1; i >= 0; i--)
                        DestroyImmediate(spt[i].gameObject);
                }
            }
            else
            {
                if (!SculptingPro_Thread.Instance) new GameObject().AddComponent<SculptingPro_Thread>();
                SculptingPro_Thread.Instance.SP_CheckThread(true, default, true);
            }
        }

        /// <summary>
        /// Get essential resources from Resources folder located in SculptingPro folder
        /// </summary>
        private static void GetResources()
        {
            tool_RaiseLowerIcon = Resources.Load("eico_l_RaiseLower") as Texture;
            tool_SetHeightIcon = Resources.Load("eico_l_SetHeight") as Texture;
            tool_RevertIcon = Resources.Load("eico_l_Revert") as Texture;
            tool_HeightmapIcon = Resources.Load("eico_l_Heightmap") as Texture;
            tool_NoiseIcon = Resources.Load("eico_l_Noise") as Texture;
            tool_StylizeIcon = Resources.Load("eico_l_Stylize") as Texture;
            tool_SmoothIcon = Resources.Load("eico_l_Smooth") as Texture;
            tool_GrabIcon = Resources.Load("eico_l_Grab") as Texture;
        }

        // Essential Stuff

        public static bool editorRunning = false;
        private static bool editorUpdateUsed = false;
        private static SculptingPro_Model inLockedMode;

        private static float intensMultipler = 0.0f;
        private static float radiusMultipler = 0.0f;

        private static readonly string intensRegistry = "SC_Intens";
        private static readonly string radiusRegistry = "SC_Radius";
        private static readonly string intensMultiRegistry = "SC_MultiIntens";
        private static readonly string radiusMultiRegistry = "SC_MultiRadius";

        // Icons

        private static Texture tool_RaiseLowerIcon;
        private static Texture tool_SetHeightIcon;
        private static Texture tool_RevertIcon;
        private static Texture tool_HeightmapIcon;
        private static Texture tool_NoiseIcon;
        private static Texture tool_StylizeIcon;
        private static Texture tool_SmoothIcon;
        private static Texture tool_GrabIcon;

        // GUI

        private static bool overGUI = false;

        private static Vector2 scrollPosition = Vector2.one;
        private const float editorPanelWidth = 260.0f;
        private const float editorPanelHeight = 850.0f;

        private static bool operationInProgress = false;

        /// <summary>
        /// Scene-GUI handler
        /// </summary>
        private static void SceneViewSculptingEditor(SceneView sv)
        {
            overGUI = Event.current.mousePosition.x <= editorPanelWidth;

            if (!overGUI) 
                SceneWork();
            else 
                SetMouse(false);

            if (dataIn.addParams.brushState == SculptingPro_Thread.BrushState.SetHeight && dataIn.modelInput != null)
            {
                Vector3 pos = dataIn.modelInput.transform.position;
                Handles.DrawDottedLine(pos, pos + (Vector3.up * dataIn.addParams.targetHeight), 5.0f);
            }

            Handles.BeginGUI();

            float maxH = editorPanelHeight;
            GUILayout.BeginArea(new Rect(15, 5, editorPanelWidth, maxH));
            float svh = sv.camera.pixelRect.height;

            Color gc = inLockedMode ? SculptingPro_Preferences.pref_LockedSculptingEditorColor : SculptingPro_Preferences.pref_UnlockedSculptingEditorColor;
            GUI.color = gc;

            if (svh < maxH)
                scrollPosition = GUILayout.BeginScrollView(scrollPosition, false, true, GUILayout.Width(editorPanelWidth - 20.0f), GUILayout.Height(sv.camera.pixelRect.height));

            S();
            L("Sculpting Pro Editor " + SculptingPro_Preferences.VERSION, true);

            // Brush essentials
            V();
            V();
            L("Brush Radius", true);
            L("CTRL + Scroll", 10);
            dataIn.radius = EditorGUILayout.Slider(dataIn.radius, 0.01f, 1.0f + radiusMultipler);
            radiusMultipler = Mathf.Clamp(EditorGUILayout.FloatField("Radius Multiplier", radiusMultipler), 0.0f, 1000.0f);
            Ve();
            V();
            L("Brush Intensity", true);
            L("ALT + Scroll", 10);
            dataIn.intensity = EditorGUILayout.Slider(dataIn.intensity, 0.01f, 1.0f + intensMultipler);
            intensMultipler = Mathf.Clamp(EditorGUILayout.FloatField("Intensity Multiplier", intensMultipler), 0.0f, 1000.0f);
            Ve();
            dataIn.autoCloseSeams = EditorGUILayout.Toggle("Try Auto Close Seams", dataIn.autoCloseSeams);
            Ve();

            // Sculpting tools
            GUI_GenerateTools();

            // Mesh features
            GUI_GenerateMeshFeatures();
            if (!inLockedMode)
            {
                V();
                dataIn.addParams.distanceLimit = EditorGUILayout.Toggle("Distance Limits", dataIn.addParams.distanceLimit);
                if (dataIn.addParams.distanceLimit)
                {
                    float lw = EditorGUIUtility.labelWidth;
                    EditorGUIUtility.labelWidth = 80.0f;
                    dataIn.addParams.distanceLimitUnits = EditorGUILayout.FloatField("Distance", dataIn.addParams.distanceLimitUnits);
                    EditorGUIUtility.labelWidth = lw;
                }
                Ve();
            }

            bool doesNotHaveHistory = inLockedMode ? inLockedMode.historyRecords == null || inLockedMode.historyRecords.Count == 0 
                : SculptingPro_Thread.Instance.historyRecords == null || SculptingPro_Thread.Instance.historyRecords.Count == 0;
            GUI.color = doesNotHaveHistory ? gc / 2.0f : gc;
            string addStr = "";
            if (!doesNotHaveHistory)
                addStr = " [" + (inLockedMode ? inLockedMode.historyRecords.Count.ToString() : SculptingPro_Thread.Instance.historyRecords.Count.ToString()) + "]";

            if (B("Undo" + addStr))
            {
                if (inLockedMode) inLockedMode.UndoHistory();
                else if (SculptingPro_Thread.Instance) SculptingPro_Thread.Instance.SP_UndoGlobalHistory();
            }
            GUI.color = gc;
            if (B("Exit Editor"))
                Disable();

            if (svh < maxH)
            {
                S(20);
                GUILayout.EndScrollView();
            }
            GUILayout.EndArea();
            Handles.EndGUI();

            if (inLockedMode)
            {
                GUILayout.BeginArea(new Rect((sv.camera.pixelRect.width / 2) - 200, 15, 400, 50));
                GUIStyle gstyle = new GUIStyle(GUI.skin.label);
                gstyle.alignment = TextAnchor.MiddleCenter;
                H();
                L("Vertex: " + inLockedMode.workingModelData.m_vertices.Length.ToString(), gstyle);
                L("Triangle: " + inLockedMode.workingModelData.m_triangles.Length.ToString(), gstyle);
                if (inLockedMode.workingModelData.m_seams != null)
                    L("Seam: " + inLockedMode.workingModelData.m_seams.Length.ToString(), gstyle);
                else
                    L("Normal: " + inLockedMode.workingModelData.m_normals.Length.ToString(), gstyle);
                He();
                GUILayout.EndArea();
            }

            if (SculptingPro_Thread.threadProgress > 0.0f && !SculptingPro_Thread.threadDone)
            {
                if (!operationInProgress)
                {
                    if(editorUpdateUsed)
                        EditorApplication.update -= EditorUpdateProcessor;
                    else
                        editorUpdateUsed = true;
                    EditorApplication.update += EditorUpdateProcessor;
                    operationInProgress = true;
                }

                // Thread is faster than GUI repaint, errors are thrown
                try
                {
                    GUILayout.BeginArea(new Rect((sv.camera.pixelRect.width / 2) - 200, sv.camera.pixelRect.height - 30, 200, 30));
                    H();
                    L("Operation in progress: " + SculptingPro_Thread.threadProgress.ToString("0.0%"), true);
                    He();
                    GUILayout.EndArea();
                }
                catch { }
            }
        }

        /// <summary>
        /// Editor updater
        /// </summary>
        private static void EditorUpdateProcessor()
        {
            if (operationInProgress && SculptingPro_Thread.threadDone)
            {
                SculptingPro_Thread.Instance.SP_PassData(dataIn);
                operationInProgress = false;
                RefreshModelPhysicalData();
                if(editorUpdateUsed)
                    EditorApplication.update -= EditorUpdateProcessor;
                editorUpdateUsed = false;
            }
        }

        /// <summary>
        /// Scene-GUI handler - generate tools
        /// </summary>
        private static void GUI_GenerateTools()
        {
            V();
            L("Sculpting Tools");

            GUIStyle s = new GUIStyle(GUI.skin.button)
            {
                imagePosition = ImagePosition.ImageLeft,
                alignment = TextAnchor.MiddleLeft,
                padding = new RectOffset(15, 0, 3, 3),
                richText = true
            };
            //Raise/Lower
            if (B(new GUIContent(ReturnCorrectTool(1), tool_RaiseLowerIcon), s))
            {
                dataIn.addParams.brushState = SculptingPro_Thread.BrushState.Raise;
                raiseLowerSelection = true;
            }
            if (dataIn.addParams.brushState == SculptingPro_Thread.BrushState.Raise || dataIn.addParams.brushState == SculptingPro_Thread.BrushState.Lower)
            {
                EditorGUI.indentLevel++;
                //Sculpting types
                V();
                L("Sculpting Type");
                SculptingPro_Thread.SculptType scType = dataIn.addParams.sculptType;
                dataIn.addParams.sculptType = (SculptingPro_Thread.SculptType)EditorGUILayout.EnumPopup(dataIn.addParams.sculptType);
                if (scType != dataIn.addParams.sculptType) SetMouse(false);
                if (dataIn.addParams.sculptType == SculptingPro_Thread.SculptType.CustomDirection)
                    dataIn.addParams.customDir = EditorGUILayout.Vector3Field("Direction", dataIn.addParams.customDir);
                else if (dataIn.addParams.sculptType == SculptingPro_Thread.SculptType.CustomObjectForwardDirection)
                {
                    dataIn.addParams.customDirObj = EditorGUILayout.ObjectField("Target Object", dataIn.addParams.customDirObj, typeof(Transform), true) as Transform;
                    if (dataIn.addParams.customDirObj != null)
                        dataIn.addParams.customDirObjVec = dataIn.addParams.customDirObj.forward;
                    else
                        dataIn.addParams.customDirObjVec = Vector3.zero;
                }
                else
                    dataIn.addParams.customDirObjVec = Vector3.zero;
                Ve();
                //Radius types
                V();
                L("Radius Type");
                SculptingPro_Thread.RadiusType radType = dataIn.addParams.radiusType;
                dataIn.addParams.radiusType = (SculptingPro_Thread.RadiusType)EditorGUILayout.EnumPopup(dataIn.addParams.radiusType);
                if (radType != dataIn.addParams.radiusType) SetMouse(false);
                L("Use Left Control to Lower", GreyNonBold: true);
                Ve();
                EditorGUI.indentLevel--;
            }
            //SetHeight
            if (B(new GUIContent(ReturnCorrectTool(8), tool_SetHeightIcon), s))
            {
                dataIn.addParams.brushState = SculptingPro_Thread.BrushState.SetHeight;
                raiseLowerSelection = false;
            }
            if (dataIn.addParams.brushState == SculptingPro_Thread.BrushState.SetHeight)
            {
                EditorGUI.indentLevel++;
                V();
                dataIn.addParams.targetHeight = EditorGUILayout.FloatField("Target Height [World]", dataIn.addParams.targetHeight);
                L("Use Intensity for transition speed", GreyNonBold:true);
                Ve();
                EditorGUI.indentLevel--;
            }
            //Revert
            if (B(new GUIContent(ReturnCorrectTool(3), tool_RevertIcon), s))
            {
                dataIn.addParams.brushState = SculptingPro_Thread.BrushState.Revert;
                raiseLowerSelection = false;
            }
            if (dataIn.addParams.brushState == SculptingPro_Thread.BrushState.Revert)
            {
                EditorGUI.indentLevel++;
                V();
                L("Use Intensity for transition speed", GreyNonBold: true);
                Ve();
                EditorGUI.indentLevel--;
            }
            //Heightmap
            if (B(new GUIContent(ReturnCorrectTool(9), tool_HeightmapIcon), s))
            {
                dataIn.addParams.brushState = SculptingPro_Thread.BrushState.Heightmap;
                raiseLowerSelection = false;
            }
            if (dataIn.addParams.brushState == SculptingPro_Thread.BrushState.Heightmap)
            {
                EditorGUI.indentLevel++;
                V();
                dataIn.addParams.heightmapBrush = (SculptingPro_HeightmapBrushSrc)EditorGUILayout.ObjectField("Heightmap Brush", dataIn.addParams.heightmapBrush, typeof(SculptingPro_HeightmapBrushSrc), false);
                if (dataIn.addParams.heightmapBrush)
                {
                    if(dataIn.addParams.heightmapBrush.heightmapTexture == null)
                        Hb("The heightmap brush texture is missing!", MessageType.Error);
                    else if (dataIn.addParams.heightmapBrush.pixelData == null || dataIn.addParams.heightmapBrush.pixelData.Count == 0)
                    {
                        Hb("Pixel data on this brush are not calculated. Please calculate pixel data below", MessageType.Error);
                        if (B("Calculate Pixel Data"))
                            dataIn.addParams.heightmapBrush.HeightmapBrushSrc_CalculateHeightmapPixelData();
                    }
                }
                dataIn.addParams.heightmapHorizontalBrush = EditorGUILayout.Toggle("Horizontal Brush", dataIn.addParams.heightmapHorizontalBrush);
                if (dataIn.addParams.heightmapHorizontalBrush)
                {
                    dataIn.addParams.heightmapYRotationOffset = EditorGUILayout.FloatField("Rotation Offset", dataIn.addParams.heightmapYRotationOffset);
                    L("Rotate: LSHIFT + Scroll", GreyNonBold: true);
                }
                L("Use Intensity for transition speed", GreyNonBold: true);
                Ve();
                EditorGUI.indentLevel--;
            }
            //Grab
            if (B(new GUIContent(ReturnCorrectTool(4), tool_GrabIcon), s))
            {
                dataIn.addParams.brushState = SculptingPro_Thread.BrushState.Grab;
                raiseLowerSelection = false;
            }
            if (dataIn.addParams.brushState == SculptingPro_Thread.BrushState.Grab)
            {
                EditorGUI.indentLevel++;
                //Radius types
                V();
                L("Radius Type");
                SculptingPro_Thread.RadiusType radType = dataIn.addParams.radiusType;
                dataIn.addParams.radiusType = (SculptingPro_Thread.RadiusType)EditorGUILayout.EnumPopup(dataIn.addParams.radiusType);
                if (radType != dataIn.addParams.radiusType) SetMouse(false);
                Ve();
                EditorGUI.indentLevel--;
            }
            //Noise
            if (B(new GUIContent(ReturnCorrectTool(5), tool_NoiseIcon), s))
            {
                dataIn.addParams.brushState = SculptingPro_Thread.BrushState.Noise;
                raiseLowerSelection = false;
            }
            if (dataIn.addParams.brushState == SculptingPro_Thread.BrushState.Noise)
            {
                EditorGUI.indentLevel++;
                V();
                SculptingPro_Thread.NoiseDirections scType = dataIn.addParams.noiseDirections;
                dataIn.addParams.noiseDirections = (SculptingPro_Thread.NoiseDirections)EditorGUILayout.EnumPopup(dataIn.addParams.noiseDirections);
                if (scType != dataIn.addParams.noiseDirections) SetMouse(false);
                Ve();
                EditorGUI.indentLevel--;
            }
            //Stylize
            if (B(new GUIContent(ReturnCorrectTool(7), tool_StylizeIcon), s))
            {
                dataIn.addParams.brushState = SculptingPro_Thread.BrushState.Stylize;
                raiseLowerSelection = false;
            }
            if (dataIn.addParams.brushState == SculptingPro_Thread.BrushState.Stylize)
            {
                EditorGUI.indentLevel++;
                V();
                L("Use Intensity for transition speed", GreyNonBold: true);
                Ve();
                EditorGUI.indentLevel--;
            }
            //Smooth
            if (B(new GUIContent(ReturnCorrectTool(6), tool_SmoothIcon), s))
            {
                dataIn.addParams.brushState = SculptingPro_Thread.BrushState.Smooth;
                raiseLowerSelection = false;
            }
            if (dataIn.addParams.brushState == SculptingPro_Thread.BrushState.Smooth)
            {
                EditorGUI.indentLevel++;
                V();
                SculptingPro_Thread.SmoothingType scType = dataIn.addParams.smoothingType;
                dataIn.addParams.smoothingType = (SculptingPro_Thread.SmoothingType)EditorGUILayout.EnumPopup(dataIn.addParams.smoothingType);
                if (scType != dataIn.addParams.smoothingType) SetMouse(false);
                L("Use Intensity for transition speed", GreyNonBold: true);
                Ve();
                EditorGUI.indentLevel--;
            }
            Ve();
        }

        /// <summary>
        /// Scene-GUI handler - generate mesh features
        /// </summary>
        private static void GUI_GenerateMeshFeatures()
        {
            if (dataIn.modelInput && inLockedMode)
            {
                V();
                L("Mesh Features");
                V();
                H(false);
                if (B("Subdivide"))
                {
                    if (dataIn.modelInput.seamThreadWorker != null && dataIn.modelInput.seamThreadWorker.isActive)
                    {
                        SculptingPro_Debug.Debug(dataIn.modelInput, "You can't process this action. Seams generation is in progress...");
                        return;
                    }
                    dataIn.modelInput.RecordHistory(true);
                    SculptingPro_Utilities.GeometryModification.VertexSubdivision.Subdivide(dataIn.modelInput.meshFilter.sharedMesh);
                    dataIn.modelInput.RegisterModel();
                    dataIn.modelInput.RefreshEntireMesh();
                }
                if (B("Smooth"))
                {
                    if (dataIn.modelInput.seamThreadWorker != null && dataIn.modelInput.seamThreadWorker.isActive)
                    {
                        SculptingPro_Debug.Debug(dataIn.modelInput, "You can't process this action. Seams generation is in progress...");
                        return;
                    }
                    dataIn.modelInput.RecordHistory(true);
                    if (dataIn.modelInput.workingModelData.m_vertices.Length > 2000)
                        dataIn.modelInput.workingModelData.m_vertices = SculptingPro_Utilities.SmoothingFilters.LaplacianFilterSmoothing.LaplacianFilter(
                            dataIn.modelInput.workingModelData.m_vertices, dataIn.modelInput.workingModelData.m_triangles, 1.5f);
                    else
                        dataIn.modelInput.workingModelData.m_vertices = SculptingPro_Utilities.SmoothingFilters.HCFilterSmoothing.HCFilter(
                        dataIn.modelInput.workingModelData.m_vertices, dataIn.modelInput.workingModelData.m_triangles, 0.5f);

                    dataIn.keepRefreshing = true;
                    dataIn.worldPoint = Vector3.down * 1000000;
                    SculptingPro_Thread.Instance.SP_PassData(dataIn);
                    dataIn.modelInput.RefreshEntireMesh();
                    SetMouse(false);
                }
                if (B("Flip"))
                {
                    if (dataIn.modelInput.seamThreadWorker != null && dataIn.modelInput.seamThreadWorker.isActive)
                    {
                        SculptingPro_Debug.Debug(dataIn.modelInput, "You can't process this action. Seams generation is in progress...");
                        return;
                    }
                    dataIn.modelInput.RecordHistory(true);
                    dataIn.modelInput.workingModelData.m_triangles = SculptingPro_Utilities.GeometryModification.FlipMesh(dataIn.modelInput.meshFilter.sharedMesh.triangles);
                    dataIn.keepRefreshing = true;
                    SculptingPro_Thread.Instance.SP_PassData(dataIn);
                    dataIn.modelInput.RefreshEntireMesh();
                    SetMouse(false);
                }
                He();
                Ve();
                dataIn.addParams.distanceLimit = EditorGUILayout.Toggle("Distance Limits", dataIn.addParams.distanceLimit);
                if (dataIn.addParams.distanceLimit)
                {
                    float lw = EditorGUIUtility.labelWidth;
                    EditorGUIUtility.labelWidth = 80.0f;
                    dataIn.addParams.distanceLimitUnits = EditorGUILayout.FloatField("Distance", dataIn.addParams.distanceLimitUnits);
                    EditorGUIUtility.labelWidth = lw;
                }
                if (B("Save Mesh To Assets") && dataIn.modelInput)
                    SaveMeshToAssets(inLockedMode.meshFilter);
                if (B("Restore Original Mesh") && dataIn.modelInput)
                {
                    dataIn.modelInput.RecordHistory(true, true);
                    dataIn.modelInput.RestoreOriginalMesh();
                    SceneView.RepaintAll();
                }
                Ve();
            }
        }

        /// <summary>
        /// Scene-GUI handler - returns correct tool by specified 'bState'
        /// </summary>
        private static string ReturnCorrectTool(int bState)
        {
            bool isRaiseLower = bState == 1;
            string bs = isRaiseLower ? "Raise/Lower" : ((SculptingPro_Thread.BrushState)bState).ToString();
            if (dataIn.addParams.brushState == (SculptingPro_Thread.BrushState)bState || (isRaiseLower && (dataIn.addParams.brushState == SculptingPro_Thread.BrushState.Lower || dataIn.addParams.brushState == SculptingPro_Thread.BrushState.Raise)))
                return "   <b>> " + bs + "</b>";
            else
                return "   " + bs;
        }

        // Tech Stuff

        private static bool mouseDown = false;
        private static bool ctrlDown = false;
        private static bool raiseLowerSelection = true;
        private static SculptingPro_Thread.SculptingInputData dataIn;
        private static bool historyRecorded = false;
        private static bool alreadyGrabbing = false;

        /// <summary>
        /// Essential scene-work in Unity-Editor (sculpting via Cursor events)
        /// </summary>
        private static void SceneWork()
        {
            if (Application.isPlaying) return;
            if (!editorRunning) return;

            HandleUtility.AddDefaultControl(GUIUtility.GetControlID(FocusType.Passive));
            Tools.current = Tool.None;

            if (Event.current.type == EventType.ScrollWheel)
            {
                if (Event.current.control)
                {
                    dataIn.radius -= Event.current.delta.y * 0.01f;
                    Event.current.Use();
                }
                if (Event.current.alt)
                {
                    dataIn.intensity -= Event.current.delta.y * 0.01f;
                    Event.current.Use();
                }
                if(dataIn.addParams.brushState == SculptingPro_Thread.BrushState.Heightmap && dataIn.addParams.heightmapHorizontalBrush)
                {
                    if (Event.current.shift)
                    {
                        dataIn.addParams.heightmapYRotationOffset -= Event.current.delta.y;
                        Event.current.Use();
                    }
                }
            }

            if (inLockedMode)
                dataIn.modelInput = inLockedMode;

            RaycastWork();

            if (!mouseDown)
            {
                bool mouse = Event.current.type == EventType.MouseDown && Event.current.button == 0 && !Event.current.alt;
                if (mouse) SetMouse(true);
            }
            else if (Event.current.type == EventType.MouseUp)
            {
                RefreshModelPhysicalData();
                SetMouse(false);
            }
            ctrlDown = Event.current.control;
        }

        private static void RefreshModelPhysicalData()
        {
            if (dataIn.modelInput)
            {
                dataIn.modelInput.RefreshMeshCollider();
                if (dataIn.modelInput.alternativeNormalsRecalculation && dataIn.modelInput.workingModelData.m_normals.Length >= 10000)
                    dataIn.modelInput.workingModelData.m_normals = SculptingPro_Utilities.GeometryModification.AlternativeNormals.RecalculateNormals(new SculptingPro_Utilities.GeometryModification.AlternativeNormals.NormalData()
                    {
                        vertices = dataIn.modelInput.workingModelData.m_vertices,
                        triangles = dataIn.modelInput.workingModelData.m_triangles,
                        normals = dataIn.modelInput.workingModelData.m_normals
                    }, dataIn.modelInput.normalsAngle);

                if (!inLockedMode && SculptingPro_Thread.Instance)
                    SculptingPro_Thread.Instance.SP_RecordGlobalHistory(dataIn.modelInput);
                EditorUtility.SetDirty(dataIn.modelInput);
            }
        }

        private static MeshRenderer heightmapBrushTemp;

        /// <summary>
        /// Essential raycast work in Unity-Editor Scene View [Called from SceneWork method]
        /// </summary>
        private static void RaycastWork()
        {
            if (!alreadyGrabbing)
            {
                Ray ray = HandleUtility.GUIPointToWorldRay(Event.current.mousePosition);

                if (Physics.Raycast(ray, out RaycastHit hit))
                {
                    if (hit.collider)
                    {
                        SculptingPro_Model ss = hit.collider.GetComponent<SculptingPro_Model>();
                        if (inLockedMode && ss != inLockedMode) return;

                        if (ss)
                        {
                            dataIn.worldPoint = hit.point;
                            dataIn.normalVector = hit.normal;
                            dataIn.modelTransformData = new SculptingPro_Thread.SculptingInputData.TransformModelData() { pos = ss.transform.position, rot = ss.transform.rotation, sca = ss.transform.localScale };

                            Color tC = inLockedMode ? SculptingPro_Preferences.pref_LockedSculptingEditorColor : SculptingPro_Preferences.pref_UnlockedSculptingEditorColor;
                            tC.a = 0.25f;

                            // Heightmap brush visualization
                            if (dataIn.addParams.brushState == SculptingPro_Thread.BrushState.Heightmap && dataIn.addParams.heightmapBrush)
                            {
                                if (heightmapBrushTemp == null)
                                {
                                    heightmapBrushTemp = GameObject.CreatePrimitive(PrimitiveType.Quad).GetComponent<MeshRenderer>();
                                    heightmapBrushTemp.name = "HEIGHTMAP_TEMP_BRUSH";
                                    heightmapBrushTemp.sharedMaterial = new Material(SculptingPro_Utilities.MeshReference.GetProperPipelineDefaultShader(false, "Transparent/Diffuse"));
                                    heightmapBrushTemp.sharedMaterial.color = new Color(1, 1, 1, 0.45f);
                                    heightmapBrushTemp.sharedMaterial = Instantiate(heightmapBrushTemp.sharedMaterial);
                                    DestroyImmediate(heightmapBrushTemp.GetComponent<Collider>());
                                }
                                if (heightmapBrushTemp.sharedMaterial.mainTexture != dataIn.addParams.heightmapBrush.heightmapTexture)
                                    heightmapBrushTemp.sharedMaterial.mainTexture = dataIn.addParams.heightmapBrush.heightmapTexture;
                                heightmapBrushTemp.transform.position = hit.point;

                                Vector3 euler;
                                if (dataIn.addParams.heightmapHorizontalBrush)
                                {
                                    euler = Vector3.up + new Vector3(90, 0, 0);
                                    euler.y = dataIn.addParams.heightmapYRotationOffset;
                                }
                                else
                                {
                                    Quaternion r = Quaternion.FromToRotation(Vector3.forward, hit.normal) * Quaternion.Euler(180, 0.0f, 0.0f);
                                    euler = r.eulerAngles;
                                    euler.z = 0;
                                }

                                dataIn.brushWorldEuler = euler;
                                heightmapBrushTemp.transform.rotation = Quaternion.Euler(euler);
                                heightmapBrushTemp.transform.position -= heightmapBrushTemp.transform.forward * 0.01f;
                                heightmapBrushTemp.transform.localScale = Vector3.one * dataIn.radius;
                                heightmapBrushTemp.enabled = true;
                            }

                            // Default brush visualization
                            else
                            {
                                Handles.color = tC;
                                Handles.DrawSolidDisc(hit.point, hit.normal, dataIn.radius);
                                if(heightmapBrushTemp)
                                    heightmapBrushTemp.enabled = false;
                            }

                            if (mouseDown)
                            {
                                dataIn.modelInput = ss;
                                if (!historyRecorded)
                                {
                                    historyRecorded = true;
                                    dataIn.modelInput.RecordHistory();
                                    dataIn.addParams.grabOrigin = new Vector3(Event.current.mousePosition.x, Event.current.mousePosition.y, 0);
                                }

                                if (raiseLowerSelection) dataIn.addParams.brushState = !ctrlDown ? SculptingPro_Thread.BrushState.Raise : SculptingPro_Thread.BrushState.Lower;
                                if (SculptingPro_Thread.Instance != null)
                                {
                                    dataIn.keepRefreshing = true;
                                    SculptingPro_Thread.Instance.SP_PassData(dataIn);
                                }
                            }
                        }
                    }
                    else SetMouse(false);
                }
                else SetMouse(false);
            }

            // Grabbing is a separated feature
            if (dataIn.addParams.brushState == SculptingPro_Thread.BrushState.Grab && mouseDown && dataIn.modelInput)
            {
                if (!alreadyGrabbing) alreadyGrabbing = true;

                Color tC = inLockedMode ? SculptingPro_Preferences.pref_LockedSculptingEditorColor : SculptingPro_Preferences.pref_UnlockedSculptingEditorColor;
                tC.a = 0.25f;
                Handles.color = tC;
                Handles.DrawSolidDisc(dataIn.worldPoint, dataIn.normalVector, dataIn.radius);

                dataIn.addParams.grabDirection =
                    SceneView.currentDrawingSceneView.camera.transform.TransformDirection(
                        new Vector3(Event.current.mousePosition.x - dataIn.addParams.grabOrigin.x, dataIn.addParams.grabOrigin.y - Event.current.mousePosition.y, 0));

                if (SculptingPro_Thread.Instance != null)
                {
                    dataIn.keepRefreshing = true;
                    SculptingPro_Thread.Instance.SP_PassData(dataIn);
                }
            }
        }

        /// <summary>
        /// Main mouse handler - is mouse pressed or released?
        /// </summary>
        /// <param name="s">Current mouse status (Down/Up)</param>
        private static void SetMouse(bool s)
        {
            if(mouseDown != s)
                RefreshModelPhysicalData();
            mouseDown = s;

            if (heightmapBrushTemp && heightmapBrushTemp.enabled != s)
                heightmapBrushTemp.enabled = s;

            if (!s)
            {
                alreadyGrabbing = false;
                historyRecorded = false;
                if (SculptingPro_Thread.Instance && dataIn.keepRefreshing)
                    SculptingPro_Thread.Instance.SP_PassData(dataIn);
                dataIn.keepRefreshing = false;
            }
        }

        /// <summary>
        /// Save mesh to assets [Editor only]
        /// </summary>
        public static void SaveMeshToAssets(MeshFilter meshFilter)
        {
            if (meshFilter == null || (meshFilter && meshFilter.sharedMesh == null))
            {
                SculptingPro_Debug.Debug(null, "The object doesn't contain Mesh Filter or shared mesh is empty", SculptingPro_Debug.DebugType.Error);
                return;
            }

            string path = EditorUtility.SaveFilePanelInProject("Please enter the path to save your Mesh to Assets as Prefab", meshFilter.sharedMesh.name, "asset", "Please enter path");

            if (string.IsNullOrEmpty(path))
                return;

            string UniquePath = AssetDatabase.GenerateUniqueAssetPath(path);
            try
            {
                AssetDatabase.CreateAsset(meshFilter.sharedMesh, UniquePath);
                AssetDatabase.SaveAssets();
                AssetDatabase.Refresh();

                SculptingPro_Debug.Debug(null, "Mesh has been successfully saved to: " + path, SculptingPro_Debug.DebugType.Information);
            }
            catch (UnityException e)
            {
                SculptingPro_Debug.Debug(null, ">>>Error while saving mesh asset<<<\n\n" + e.Message + ", Unique Path: " + UniquePath, SculptingPro_Debug.DebugType.Error);
            }
        }
    }
}
#endif