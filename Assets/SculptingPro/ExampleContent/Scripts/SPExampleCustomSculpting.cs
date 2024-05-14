using UnityEngine;

namespace SculptingPro.Examples
{
    /// <summary>
    /// Default example custom sculpting script with commentary for SculptingPro example content.
    /// The script uses old legacy Input system.
    /// </summary>
    public sealed class SPExampleCustomSculpting : MonoBehaviour
    {
        [Header("Essential Params")]
        // Create reference indicator to the realtime sculpting object
        public SculptingPro_Realtime realtimeSculpting;
        // Sample object for sculpting origin
        public Transform sampleGameObject;
        // Target sculpting model (can be also received from the custom raycast...)
        public SculptingPro_Model targetModel;
        [Header("Sculpting Params")]
        public float customRadius = 0.25f;
        public float customIntensity = 0.8f;
        public bool lowerBrush = false;
        public float sampleGameObjectHeight = -0.95f;

        private bool doingSculpting = false;

        // Why would I need custom sculpting? For example you would like to customize where the ray should cast... See the example below.
        private void Update()
        {
            // Simple object movement
            Vector3 p = new Vector3
            {
                x = Mathf.Sin(Time.time * 1.5f) * 0.8f,
                z = 1.5f + Mathf.Cos(Time.time * 1.2f) * 0.8f,
                y = sampleGameObjectHeight
            };
            sampleGameObject.position = p;

            // Create a simple raycast process
            Ray r = new Ray(sampleGameObject.position, -sampleGameObject.up);
            // Simple raycast with custom distance
            if (Physics.Raycast(r, out RaycastHit hit, 1.0f))
            {
                if (hit.collider)
                {
                    // Call custom sculpting method with required parameters
                    //  Target model (can be received from the raycast as well)
                    //                                             World hit point
                    //                                                          World hit normal
                    //                                                                       Raise or lower feature?
                    //                                                                                            Brush radius
                    //                                                                                                           Brush intensity
                    realtimeSculpting.SPR_OnCustomSculpting(targetModel, hit.point, hit.normal, !lowerBrush, customRadius, customIntensity);
                    doingSculpting = true;
                }
                else ReleaseSculpting();
            }
            else ReleaseSculpting();
        }

        /// <summary>
        /// Called if the raycast is lost
        /// </summary>
        private void ReleaseSculpting()
        {
            // Return if no sculpting is processed
            if (!doingSculpting) return;

            // Required method to call when the sculpting ends!
            realtimeSculpting.SPR_OnStopSculpting();
            doingSculpting = false;
        }
    }
}