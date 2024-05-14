using UnityEngine;

#if UNITY_EDITOR
using SculptingPro.Geometry;

using UnityEditor;
#endif

using SculptingPro.Utilities;

namespace SculptingPro.Geometry
{
    /// <summary>
    /// Collection of simple geometry - procedural primitives. This script sums up all the simple geometry types that the plugin provides.
    /// You can access to each geometry class by calling its static method 'GetPrimitive'.
    /// Written by Matej Vanco 2021.
    /// https://matejvanco.com
    /// </summary>
    [ExecuteAlways]
    [RequireComponent(typeof(MeshFilter))]
    public sealed class SculptingPro_ProceduralPrimitives : MonoBehaviour
    {
        public enum PrimitiveType { Plane, Cube, Sphere, Torus, Cone };
        public PrimitiveType primitiveType;

        public bool updateEveryFrame = true;

        public SculptingPro_Model model;

        #region Geometry Params

        // Plane params
        [SerializeField] private float priv_planeLength = 1;
        [SerializeField] private float priv_planeWidth = 1;
        [Range(2, 200)]
        [SerializeField] private int priv_planeRes = 8;

        // Cube params
        [SerializeField] private float priv_cubeLength = 1;
        [SerializeField] private float priv_cubeWidth = 1;
        [SerializeField] private float priv_cubeHeight = 1;
        [Range(2, 100)]
        [SerializeField] private int priv_cubeRes = 8;

        // Sphere params
        [SerializeField] private float priv_sphereRadius = 1;
        [Range(3, 100)]
        [SerializeField] private int priv_sphereSegments = 32;
        [Range(3, 100)]
        [SerializeField] private int priv_sphereStack = 32;
        [Range(0, 360)]
        [SerializeField] private int priv_sphereHorizSlice = 360;
        [Range(0, 180)]
        [SerializeField] private int priv_sphereVertSlice = 180;

        // Torus params
        [SerializeField] private float priv_torusThickness = 0.3f;
        [SerializeField] private float priv_torusRadius = 1.0f;
        [Range(3, 220)]
        [SerializeField] private int priv_torusSegments = 24;
        [Range(3, 220)]
        [SerializeField] private int priv_torusStack = 24;

        // Cone params
        [SerializeField] private float priv_coneHeight = 1.0f;
        [SerializeField] private float priv_coneTopRadius = 0.1f;
        [SerializeField] private float priv_coneBotRadius = 0.7f;
        [Range(3, 220)]
        [SerializeField] private int priv_coneResolution = 18;

        #endregion

        [SerializeField] private MeshFilter meshFilter;

        /// <summary>
        /// Generate a new gameObject with procedural primitives component
        /// </summary>
#if UNITY_EDITOR
        [MenuItem("GameObject/3D Object" + SculptingPro_Preferences.PACKAGENAME + "Procedural Primitives")]
#endif
        public static GameObject ProceduralPrimitives_Generate()
        {
            GameObject newGM = new GameObject();
            newGM.AddComponent<MeshRenderer>();
            newGM.AddComponent<MeshFilter>();
            newGM.AddComponent<SculptingPro_ProceduralPrimitives>().ProceduralPrimitives_Generate(PrimitiveType.Plane);
            newGM.name = "ProceduralPrimitive";
            Material mat = new Material(SculptingPro_Utilities.MeshReference.GetProperPipelineDefaultShader());
            newGM.GetComponent<Renderer>().sharedMaterial = mat;

#if UNITY_EDITOR
            if (!Application.isPlaying)
            {
                Selection.activeGameObject = newGM.transform.gameObject;
                newGM.transform.position = SceneView.lastActiveSceneView.camera.transform.position + SceneView.lastActiveSceneView.camera.transform.forward * 3f;
            }
#endif
            return newGM;
        }

        private void Awake()
        {
            if (!meshFilter)
            {
                meshFilter = GetComponent<MeshFilter>();
                TryGetComponent<SculptingPro_Model>(out model);
            }
        }

        private void Reset()
        {
            Awake();
        }

        private void Update()
        {
            if (!updateEveryFrame) return;
            if (model) return;

            ProceduralPrimitives_Generate(primitiveType);
        }

        /// <summary>
        /// Generate a specific primitive type for this mesh filter
        /// </summary>
        public void ProceduralPrimitives_Generate(PrimitiveType shape)
        {
            primitiveType = shape;
            switch (shape)
            {
                case PrimitiveType.Plane: 
                    meshFilter.sharedMesh = SculptingProGeometry_Plane.GetPrimitive(priv_planeRes, priv_planeWidth, priv_planeLength);
                    break;
                case PrimitiveType.Cube: 
                    meshFilter.sharedMesh = SculptingProGeometry_Cube.GetPrimitive(priv_cubeRes, priv_cubeLength, priv_cubeWidth, priv_cubeHeight);
                    break;
                case PrimitiveType.Torus:
                    meshFilter.sharedMesh = SculptingProGeometry_Torus.GetPrimitive(priv_torusSegments, priv_torusStack, priv_torusRadius, priv_torusThickness);
                    break;
                case PrimitiveType.Sphere: 
                    meshFilter.sharedMesh = SculptingProGeometry_Sphere.GetPrimitive(priv_sphereSegments, priv_sphereStack, priv_sphereRadius, priv_sphereHorizSlice, priv_sphereVertSlice);
                    break;
                case PrimitiveType.Cone:
                    meshFilter.sharedMesh = SculptingProGeometry_Cone.GetPrimitive(priv_coneResolution, priv_coneHeight, priv_coneTopRadius, priv_coneBotRadius);
                    break;
            }

            if (model)
            {
                model.RegisterModel(true);
                model.RefreshMeshCollider();
                model.ClearHistory();
            }
        }
    }
}

#if UNITY_EDITOR
namespace SculptingProEditor
{
    [CustomEditor(typeof(SculptingPro_ProceduralPrimitives))]
    public sealed class SP_ProceduralPrimitives_Editor : SculptingPro_EditorUtilities
    {
        private SculptingPro_ProceduralPrimitives spps;

        private void OnEnable()
        {
            spps = (SculptingPro_ProceduralPrimitives)target;
        }

        public override void OnInspectorGUI()
        {
            S();
            V();
            V();
            DrawProperty("primitiveType", "Primitive Type");
            Ve();
            if (spps.model)
            {
                if (spps.updateEveryFrame)
                    spps.updateEveryFrame = false;
                Hb("The object contains SculptingPro_Model component which stores current mesh data. In such case, you have to update the mesh manually to prevent further mesh conflicts");
            }
            else
            {
                EditorGUI.indentLevel++;
                DrawProperty("updateEveryFrame", "Update Every Frame");
                EditorGUI.indentLevel--;
            }
            if (!spps.updateEveryFrame)
            {
                if (B("Update Mesh"))
                    spps.ProceduralPrimitives_Generate(spps.primitiveType);
            }
            Ve();
            S();
            V();
            switch (spps.primitiveType)
            {
                case SculptingPro_ProceduralPrimitives.PrimitiveType.Plane:
                    DrawProperty("priv_planeWidth", "Width");
                    DrawProperty("priv_planeLength", "Length");
                    S(5);
                    DrawProperty("priv_planeRes", "Resolution");
                    break;

                case SculptingPro_ProceduralPrimitives.PrimitiveType.Cube:
                    DrawProperty("priv_cubeWidth", "Width");
                    DrawProperty("priv_cubeLength", "Length");
                    DrawProperty("priv_cubeHeight", "Height");
                    S(5);
                    DrawProperty("priv_cubeRes", "Resolution");
                    break;

                case SculptingPro_ProceduralPrimitives.PrimitiveType.Sphere:
                    DrawProperty("priv_sphereRadius", "Radius");
                    DrawProperty("priv_sphereSegments", "Segments");
                    DrawProperty("priv_sphereStack", "Stack");
                    S(5);
                    DrawProperty("priv_sphereHorizSlice", "Horizontal Slice");
                    DrawProperty("priv_sphereVertSlice", "Vertical Slice");
                    break;

                case SculptingPro_ProceduralPrimitives.PrimitiveType.Torus:
                    DrawProperty("priv_torusThickness", "Thickness");
                    DrawProperty("priv_torusRadius", "Radius");
                    S(5);
                    DrawProperty("priv_torusSegments", "Segments");
                    DrawProperty("priv_torusStack", "Stack");
                    break;

                case SculptingPro_ProceduralPrimitives.PrimitiveType.Cone:
                    DrawProperty("priv_coneHeight", "Height");
                    DrawProperty("priv_coneTopRadius", "Top Radius");
                    DrawProperty("priv_coneBotRadius", "Bot Radius");
                    S(5);
                    DrawProperty("priv_coneResolution", "Resolution");
                    break;
            }
            Ve();
            S();
        }
    }
}
#endif