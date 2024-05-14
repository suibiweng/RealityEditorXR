#if UNITY_EDITOR
using UnityEngine;
using UnityEditor;

namespace SculptingProEditor
{
    /// <summary>
    /// Essential editor utilities for internal purpose.
    /// Written by Matej Vanco 2021.
    /// https://matejvanco.com
    /// </summary>
    public abstract class SculptingPro_EditorUtilities : Editor
    {
        protected void DrawProperty(string p, string Text, string ToolTip = "", bool includeChildren = false, bool identOffset = false)
        {
            SerializedProperty sf = serializedObject.FindProperty(p);
            if(sf == null)
            {
                Debug.LogError("Serialized property '" + p + "' could not be found");
                return;
            }

            if (identOffset) EditorGUI.indentLevel++;
            EditorGUILayout.PropertyField(sf, new GUIContent(Text, ToolTip), includeChildren);
            if (identOffset) EditorGUI.indentLevel--;
            serializedObject.ApplyModifiedProperties();
        }

        protected void Hb(string msg, MessageType msgt = MessageType.None)
        {
            EditorGUILayout.HelpBox(msg, msgt);
        }

        protected void L(string s, bool bold = false)
        {
            if(bold)
                GUILayout.Label(s, EditorStyles.boldLabel);
            else
                GUILayout.Label(s);
        }

        protected void L(Texture s)
        {
            GUILayout.Label(s);
        }

        protected void V(bool box = true)
        {
            if (!box) GUILayout.BeginVertical();
            else GUILayout.BeginVertical("Box");
        }

        protected void Ve()
        {
            GUILayout.EndVertical();
        }

        protected void H(bool box = true)
        {
            if (!box) GUILayout.BeginHorizontal();
            else GUILayout.BeginHorizontal("Box");
        }

        protected void He()
        {
            GUILayout.EndHorizontal();
        }

        protected bool B(string s, float width = 0)
        {
            if (width == 0)
                return GUILayout.Button(s);
            else
                return GUILayout.Button(s, GUILayout.Width(width));
        }

        protected void S(int s = 10)
        {
            GUILayout.Space(s);
        }
    }

    /// <summary>
    /// Essential editor Window utilities for internal purpose.
    /// Written by Matej Vanco 2021.
    /// https://matejvanco.com
    /// </summary>
    public abstract class SculptingPro_EditorWindowUtilities : EditorWindow
    {
        protected static void Hb(string msg, MessageType msgt = MessageType.None)
        {
            EditorGUILayout.HelpBox(msg, msgt);
        }

        protected static void L(string s, bool boldNonGrey = false, bool GreyNonBold = false)
        {
            if (boldNonGrey)
                GUILayout.Label(s,  EditorStyles.boldLabel);
            else if(GreyNonBold)
                GUILayout.Label(s, EditorStyles.centeredGreyMiniLabel);
            else
                GUILayout.Label(s);
        }

        protected static void L(string s, int size)
        {
            GUIStyle st = new GUIStyle(GUI.skin.label);
            st.fontSize = size;
            GUILayout.Label(s, st);
        }

        protected static void L(string s, GUIStyle style)
        {
            GUILayout.Label(s, style);
        }

        protected static void V(bool box = true)
        {
            if (!box) GUILayout.BeginVertical();
            else GUILayout.BeginVertical("Box");
        }

        protected static void Ve()
        {
            GUILayout.EndVertical();
        }

        protected static void H(bool box = true)
        {
            if (!box) GUILayout.BeginHorizontal();
            else GUILayout.BeginHorizontal("Box");
        }

        protected static void He()
        {
            GUILayout.EndHorizontal();
        }

        protected static bool B(string s)
        {
            return GUILayout.Button(s);
        }

        protected static bool B(GUIContent gui, GUIStyle gstyle)
        {
            return GUILayout.Button(gui, gstyle);
        }

        protected static void S(int s = 10)
        {
            GUILayout.Space(s);
        }
    }
}
#endif