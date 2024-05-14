using UnityEngine;

namespace SculptingPro
{
    /// <summary>
    /// Global preferences for the SculptingPro plugin.
    /// Written by Matej Vanco 2021.
    /// https://matejvanco.com
    /// </summary>
    public static class SculptingPro_Preferences
    {
        public const string ORGANISATION = "Matej Vanco";
        public const string PACKAGENAME = "/Sculpting Pro/";
        public const string VERSION = "3.0.0";
        /// <summary>
        /// dd/mm/yyyy
        /// </summary>
        public const string DATE = "02/02/2023";

        /// <summary>
        /// Default GUI color for locked sculpting
        /// </summary>
        public static readonly Color DEFAULT_COLOR_LOCKED = new Color(1.0f, 0.6f, 0.1f) * 1.5f;
        /// <summary>
        /// Default GUI color for unlocked sculpting
        /// </summary>
        public static readonly Color DEFAULT_COLOR_UNLOCKED = Color.white;

        /// <summary>
        /// Stored value that history-process can hold [the lower the value is, the less memory usage]
        /// </summary>
        public static int pref_MaxHistoryRecords = 10;

        /// <summary>
        /// Recalculate normals set to default for global model initialization
        /// </summary>
        public static bool pref_RecalculateNormalsAsDefault = true;

        /// <summary>
        /// If enabled, the 'recalculate normals' method will be set to optimized - Unity's default normals recalculation, which evaluates worse results. Otherwise (if set to false), the 'angle' field will appear and the mesh will evaluate better results (But takes much more performance!)
        /// </summary>
        public static bool pref_RecalculateNormalsOptimized = true;

        /// <summary>
        /// Create new mesh reference set to default for global model initialization
        /// </summary>
        public static bool pref_CreateNewReferenceAsDefault = true;

        /// <summary>
        /// Customizable color of editor GUI & brush handle in Locked Sculpting
        /// </summary>
        public static Color pref_LockedSculptingEditorColor = DEFAULT_COLOR_LOCKED;

        /// <summary>
        /// Customizable color of editor GUI & brush handle in Unlocked Sculpting
        /// </summary>
        public static Color pref_UnlockedSculptingEditorColor = DEFAULT_COLOR_UNLOCKED;

    }

    /// <summary>
    /// Internal debug written for SculptingPro plugin.
    /// 
    /// Written by Matej Vanco 2021.
    /// https://matejvanco.com
    /// </summary>
    public sealed class SculptingPro_Debug
    {
        public enum DebugType { Error, Warning, Information };
        public static void Debug(MonoBehaviour Sender, string Message, DebugType DType = DebugType.Information)
        {
            string senderName = !Sender ? "(Unknown sender)" : Sender.GetType().Name;
            string senderObjName = !Sender ? "(Unknown sender)" : Sender.gameObject.name;
            switch (DType)
            {
                case DebugType.Information: UnityEngine.Debug.Log(senderName + " [" + senderObjName + "]: " + Message); break;
                case DebugType.Warning: UnityEngine.Debug.LogWarning(senderName + " [" + senderObjName + "]: " + Message); break;
                case DebugType.Error: UnityEngine.Debug.LogError(senderName + " [" + senderObjName + "]: " + Message); break;
            }
        }
    }
}

#if UNITY_EDITOR
namespace SculptingProEditor
{
    using UnityEditor;
    using SculptingPro;

    [InitializeOnLoad]
    public sealed class SculptingPro_PreferencesEditorWindow : SculptingPro_EditorWindowUtilities
    {
        static SculptingPro_PreferencesEditorWindow()
        {
            RefreshValues();
        }

        private static void RefreshValues()
        {
            SculptingPro_Preferences.pref_CreateNewReferenceAsDefault = SPPreference_CreateNewMeshReference;
            SculptingPro_Preferences.pref_MaxHistoryRecords = SPPreference_MaxHistoryRecords;
            SculptingPro_Preferences.pref_RecalculateNormalsAsDefault = SPPreference_RecalculateNormalsAsDefault;
            SculptingPro_Preferences.pref_RecalculateNormalsOptimized = SPPreference_RecalculateNormalsOptimized;
        }

        [MenuItem("Window/Sculpting Pro/Preferences")]
        private static void Init()
        {
            SculptingPro_PreferencesEditorWindow vt = (SculptingPro_PreferencesEditorWindow)GetWindow(typeof(SculptingPro_PreferencesEditorWindow));
            vt.maxSize = new Vector2(400, 350);
            vt.minSize = new Vector2(350, 300);
            vt.titleContent = new GUIContent("Sculpting Pro Preferences");
            vt.Show();
            RefreshValues();
        }

        #region Preferences

        private static bool spCreateNewReference = true;
        public static bool SPPreference_CreateNewMeshReference
        {
            get
            {
                if (EditorPrefs.HasKey("SPCreateNewReference"))
                    return EditorPrefs.GetBool("SPCreateNewReference");
                else
                    return spCreateNewReference;
            }
            set
            {
                spCreateNewReference = value;
                SculptingPro_Preferences.pref_CreateNewReferenceAsDefault = spCreateNewReference;
                EditorPrefs.SetBool("SPCreateNewReference", spCreateNewReference);
            }
        }

        private static bool spRecalculateNormalsAsDefault = true;
        public static bool SPPreference_RecalculateNormalsAsDefault
        {
            get
            {
                if (EditorPrefs.HasKey("SPRecalculateNormalsAsDefault"))
                    return EditorPrefs.GetBool("SPRecalculateNormalsAsDefault");
                else
                    return spRecalculateNormalsAsDefault;
            }
            set
            {
                spRecalculateNormalsAsDefault = value;
                SculptingPro_Preferences.pref_RecalculateNormalsAsDefault = spRecalculateNormalsAsDefault;
                EditorPrefs.SetBool("SPRecalculateNormalsAsDefault", spRecalculateNormalsAsDefault);
            }
        }

        private static bool spRecalculateNormalsOptimized = true;
        public static bool SPPreference_RecalculateNormalsOptimized
        {
            get
            {
                if (EditorPrefs.HasKey("SPRecalculateNormalsAsOptimized"))
                    return EditorPrefs.GetBool("SPRecalculateNormalsAsOptimized");
                else
                    return spRecalculateNormalsOptimized;
            }
            set
            {
                spRecalculateNormalsOptimized = value;
                SculptingPro_Preferences.pref_RecalculateNormalsOptimized = spRecalculateNormalsOptimized;
                EditorPrefs.SetBool("SPRecalculateNormalsAsOptimized", spRecalculateNormalsOptimized);
            }
        }

        private static int spMaxHistoryRecords = 10;
        public static int SPPreference_MaxHistoryRecords
        {
            get
            {
                if (EditorPrefs.HasKey("SPMaxHistoryRecords"))
                    return EditorPrefs.GetInt("SPMaxHistoryRecords");
                else
                    return spMaxHistoryRecords;
            }
            set
            {
                spMaxHistoryRecords = value;
                SculptingPro_Preferences.pref_MaxHistoryRecords = spMaxHistoryRecords;
                EditorPrefs.SetInt("SPMaxHistoryRecords", spMaxHistoryRecords);
            }
        }

        private static Color spLockedSculptingEditorColor = SculptingPro_Preferences.DEFAULT_COLOR_LOCKED;
        public static Color SPPreference_LockedSculptingEditorColor
        {
            get
            {
                if (EditorPrefs.HasKey("SPLockedSculptingEditorColor"))
                    return SPColorConvertor(EditorPrefs.GetString("SPLockedSculptingEditorColor"));
                else
                    return spLockedSculptingEditorColor;
            }
            set
            {
                spLockedSculptingEditorColor = value;
                SculptingPro_Preferences.pref_LockedSculptingEditorColor = spLockedSculptingEditorColor;
                EditorPrefs.SetString("SPLockedSculptingEditorColor", SPStringFromColorConvertor(spLockedSculptingEditorColor));
            }
        }

        private static Color spUnlockedSculptingEditorColor = SculptingPro_Preferences.DEFAULT_COLOR_UNLOCKED;
        public static Color SPPreference_UnlockedSculptingEditorColor
        {
            get
            {
                if (EditorPrefs.HasKey("SPUnlockedSculptingEditorColor"))
                    return SPColorConvertor(EditorPrefs.GetString("SPUnlockedSculptingEditorColor"));
                else
                    return spUnlockedSculptingEditorColor;
            }
            set
            {
                spUnlockedSculptingEditorColor = value;
                SculptingPro_Preferences.pref_UnlockedSculptingEditorColor = spUnlockedSculptingEditorColor;
                EditorPrefs.SetString("SPUnlockedSculptingEditorColor", SPStringFromColorConvertor(spUnlockedSculptingEditorColor));
            }
        }

        #region Intern Helpers

        /// <summary>
        /// Internal convertor - from color to string
        /// </summary>
        private static string SPStringFromColorConvertor(Color c)
        {
            return $"{c.r.ToString().Replace(",", ".")},{c.g.ToString().Replace(",", ".")},{c.b.ToString().Replace(",", ".")}";
        }

        /// <summary>
        /// Internal convertor - from string to color
        /// </summary>
        private static Color SPColorConvertor(string str)
        {
            string[] s = str.Split(',');
            if (s.Length != 3) return SculptingPro_Preferences.DEFAULT_COLOR_LOCKED;
            else return new Color(SPFloatConvertor(s[0]), SPFloatConvertor(s[1]), SPFloatConvertor(s[2]));
        }

        /// <summary>
        /// Internal convertor - from string to float
        /// </summary>
        private static float SPFloatConvertor(string str)
        {
            float.TryParse(str, System.Globalization.NumberStyles.Float, System.Globalization.CultureInfo.InvariantCulture, out float f);
            return f;
        }

        #endregion

        #endregion

        private void OnGUI()
        {
            S(20);
            L("Sculpting Pro - Preferences", true);
            S(15);
            V();
            V();
            SPPreference_CreateNewMeshReference = GUILayout.Toggle(SPPreference_CreateNewMeshReference, "Create New Mesh Reference as Default");
            if (!SPPreference_CreateNewMeshReference)
                Hb("This option is highly recommended to keep enabled! You may easily lost your original mesh data. In such case, please duplicate your target mesh.", MessageType.Warning);
            Ve();
            V();
            SPPreference_RecalculateNormalsAsDefault = GUILayout.Toggle(SPPreference_RecalculateNormalsAsDefault, "Auto Recalculate Normals as Default");
            Ve();
            V();
            SPPreference_RecalculateNormalsOptimized = GUILayout.Toggle(SPPreference_RecalculateNormalsOptimized, new GUIContent("Recalculate Normals Optimized as Default", "If enabled, the 'recalculate normals' method will be set to optimized - Unity's default normals recalculation, which evaluates worse results. Otherwise (if set to false), the 'angle' field will appear and the mesh will evaluate smoother results (But takes much more performance!)"));
            Ve();
            V();
            SPPreference_LockedSculptingEditorColor = EditorGUILayout.ColorField(new GUIContent("Locked Sculpting Color"), SPPreference_LockedSculptingEditorColor);
            Ve();
            V();
            SPPreference_UnlockedSculptingEditorColor = EditorGUILayout.ColorField(new GUIContent("Unlocked Sculpting Color"), SPPreference_UnlockedSculptingEditorColor);
            Ve();
            V();
            SPPreference_MaxHistoryRecords = Mathf.Clamp(EditorGUILayout.IntField("Max History Records", SPPreference_MaxHistoryRecords), 1, 100);
            if (SPPreference_MaxHistoryRecords > 30)
                Hb("It's very recommended to keep the history record as low as it's possible to prevent high memory allocation and GC overload.", MessageType.Warning);
            Ve();
            if(B("Reset To Default"))
            {
                SPPreference_MaxHistoryRecords = 10;
                SPPreference_CreateNewMeshReference = true;
                SPPreference_RecalculateNormalsAsDefault = true;
                SPPreference_RecalculateNormalsOptimized = true;
                SPPreference_LockedSculptingEditorColor = SculptingPro_Preferences.DEFAULT_COLOR_LOCKED;
                SPPreference_UnlockedSculptingEditorColor = SculptingPro_Preferences.DEFAULT_COLOR_UNLOCKED;
                EditorUtility.SetDirty(this);
            }
            Ve();
        }
    }
}
#endif