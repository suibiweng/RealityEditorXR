using UnityEngine;

namespace SculptingPro.Examples
{
    /// <summary>
    /// Default example custom HEIGHTMAP sculpting script with commentary for SculptingPro example content.
    /// The script uses old legacy Input system.
    /// </summary>
    public sealed class SPExampleCustomHeightmapSculpting : MonoBehaviour
    {
        [Header("Essential Params")]
        // Create reference indicator to the realtime sculpting object
        public SculptingPro_Realtime realtimeSculpting;
        public Camera mainCam;
        // Sample brush object for sculpting origin
        public Transform sampleBrush;
        // Target sculpting model (can be also received from the custom raycast)
        public SculptingPro_Model targetModel;
        [Header("Sculpting Params")]
        public float customRadius = 0.75f;
        public float customIntensity = 0.3f;
        public float customHeightmapRotation = 0.0f;
        // Target heightmap brush object for heightmap stamping (Go to the Assets/Create/SculptingPro/HeightmapBrushObject, choose a texture, recalculate pixel data and there you go!)
        public SculptingPro_HeightmapBrushSrc heightmapBrushObject;

        // Why would I need custom heightmap sculpting? For example you would like to customize where the ray should cast... See the example below.
        private void Update()
        {
            // Show the actual brush size on the sampleBrush
            sampleBrush.transform.localScale = Vector3.one * customRadius;
            Vector3 rot = sampleBrush.eulerAngles;
            rot.y = customHeightmapRotation;
            sampleBrush.eulerAngles = rot;

            // Check if the thread is not working (the SculptingPro_Realtime will take care of the thread to complete, all you need to do is to pass the message to start heightmap process stamping)
            if (SculptingPro_Thread.threadDone && SculptingPro_Thread.threadProgress == 0)
            {
                // Create simple raycast process - from cursor
                Ray r = mainCam.ScreenPointToRay(Input.mousePosition);
                // Simple raycast
                if (Physics.Raycast(r, out RaycastHit hit, Mathf.Infinity))
                {
                    if (hit.collider)
                    {
                        sampleBrush.transform.position = hit.point + (Vector3.up * 0.05f);
                        // Check for the input (just once as this process requires some time to complete)
                        if (Input.GetMouseButtonDown(0))
                        {
                            // Call custom heightmap sculpting method with required parameters
                            //                                  Target model (can be received from the raycast as well)
                            //                                             World hit point (can be any point in the world coordinates)
                            //                                                          World hit normal
                            //                                                                         Target brush world euler rotation
                            //                                                                                                  Heightmap brush object
                            //                                                                                                                         Custom heightmap Y rotation...
                            realtimeSculpting.SPR_OnCustomSculpting(targetModel, hit.point, hit.normal, sampleBrush.eulerAngles, heightmapBrushObject, customHeightmapRotation, customRadius, customIntensity);
                        }
                    }
                }
            }
        }
    }
}