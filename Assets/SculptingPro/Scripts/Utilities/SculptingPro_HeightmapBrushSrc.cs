using System.Collections.Generic;
using UnityEngine;

using SculptingPro.Utilities;

namespace SculptingPro
{
    [CreateAssetMenu(fileName = "Heightmap Brush Object", menuName = "SculptingPro/Heightmap brush object", order = 1)]
    /// <summary>
    /// Essential component for heightmap brushes. Create a single unique scriptable object that will refer to a completely ready heightmap brush.
    /// Written by Matej Vanco 2022.
    /// https://matejvanco.com
    /// </summary>
    public sealed class SculptingPro_HeightmapBrushSrc : ScriptableObject
    {
        public Texture2D heightmapTexture;
        internal Texture2D registeredHeightmap;

        public bool inverseHeightmap = false;
        internal bool registeredInverseHeightmap;

        [HideInInspector] public List<SculptingPro_Utilities.HeightmapPixelData> pixelData;

        /// <summary>
        /// Calculate current heightmap pixel data
        /// </summary>
        public void HeightmapBrushSrc_CalculateHeightmapPixelData()
        {
            pixelData = SculptingPro_Utilities.GeometryModification.CalculateHeightmapPixelData(heightmapTexture, inverseHeightmap);
            registeredHeightmap = heightmapTexture;
            registeredInverseHeightmap = inverseHeightmap;
        }
    }
}

#if UNITY_EDITOR
namespace SculptingProEditor
{
    using UnityEditor;
    using SculptingPro;

    [CustomEditor(typeof(SculptingPro_HeightmapBrushSrc))]
    public sealed class SculptingPro_HeightmapBrushSrcEditor : SculptingPro_EditorUtilities
    {
        private SculptingPro_HeightmapBrushSrc src;

        private void OnEnable()
        {
            src = (SculptingPro_HeightmapBrushSrc)target;
        }

        public override void OnInspectorGUI()
        {
            S();

            DrawDefaultInspector();

            S();
            // Is readable?
            if (src.heightmapTexture && !src.heightmapTexture.isReadable)
            {
                Hb("Target heightmap texture is not set to read/write. Please enable read/write property by clicking the button below");
                if(B("Enable Read/Write"))
                {
                    string assetPath = AssetDatabase.GetAssetPath(src.heightmapTexture);
                    var tImporter = AssetImporter.GetAtPath(assetPath) as TextureImporter;
                    if (tImporter != null)
                    {
                        tImporter.textureType = TextureImporterType.Default;
                        tImporter.isReadable = true;

                        AssetDatabase.ImportAsset(assetPath);
                        AssetDatabase.Refresh();
                    }
                }
                return;
            }

            if (src.heightmapTexture)
            {
                // Is in a required size?
                if (src.heightmapTexture.width > 256 || src.heightmapTexture.height > 256)
                {
                    Hb("The current heightmap texture has higher resolution. The maximum supported resolution is 256x256. Press the button below to resize (your original texture will remain and a new copy will be created)");
                    if (B("Resize Heightmap Texture"))
                    {
                        RenderTexture rt = new RenderTexture(256, 256, 24);
                        RenderTexture.active = rt;
                        Graphics.Blit(src.heightmapTexture, rt);
                        Texture2D result = new Texture2D(256, 256);
                        result.ReadPixels(new Rect(0, 0, 256, 256), 0, 0);
                        result.Apply();
                        string path = EditorUtility.SaveFilePanel("Save resized heightmap to assets", Application.dataPath, src.heightmapTexture.name + "_Resized", "png");
                        if (!string.IsNullOrEmpty(path))
                        {
                            System.IO.File.Create(path).Dispose();
                            System.IO.File.WriteAllBytes(path, result.EncodeToPNG());
                            AssetDatabase.Refresh();
                            string assetRelativePath = "Assets" + path.Substring(Application.dataPath.Length);
                            src.heightmapTexture = (Texture2D)AssetDatabase.LoadAssetAtPath(assetRelativePath, typeof(Texture2D));
                        }
                    }
                    return;
                }
                // Has equal dimensions?
                else if (src.heightmapTexture.width != src.heightmapTexture.height)
                {
                    Hb("The heightmap texture is not in 1:1 ratio. Please provide a heightmap texture with equal dimensions (128x128 recommended)");
                    return;
                }
                // Has pixel data?
                else if (src.pixelData.Count == 0)
                {
                    Hb("Heightmap pixel data are not generated. Please calculate the heightmap pixel data below");
                    if (B("Calculate Pixel Data"))
                        src.HeightmapBrushSrc_CalculateHeightmapPixelData();
                    return;
                }
                // Any other changes?
                else if (src.registeredHeightmap != src.heightmapTexture || src.registeredInverseHeightmap != src.inverseHeightmap)
                {
                    Hb("Some properties above have been changed. Please recalculate the heightmap pixel data below");
                    if (B("Calculate Pixel Data"))
                        src.HeightmapBrushSrc_CalculateHeightmapPixelData();
                    return;
                }
            }
            else
                return;

            Hb("The heightmap brush is ready to use. You can still recalculate pixel data");
            if (B("Re-calculate Pixel Data"))
                src.HeightmapBrushSrc_CalculateHeightmapPixelData();

            S();
        }
    }
}
#endif