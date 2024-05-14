using UnityEngine;
using UnityEngine.Events;


namespace SculptingPro
{
    /// <summary>
    /// Selection VR Helper - additional component for extended VR support
    /// </summary>
    [AddComponentMenu(SculptingPro_Preferences.ORGANISATION + SculptingPro_Preferences.PACKAGENAME + "VR Input/Selection VR Helper")]
    public class SculptingPro_SelectionHelper : MonoBehaviour
    {
        [System.Serializable]
        public struct EventElement
        {
            [Tooltip("Required object name to hit")]
            public string requiredName;
            [Tooltip("Specific event if the object is successfully hit")]
            public UnityEvent targetEvent;
        }
        public EventElement[] eventElements;
        [Space]
        [Tooltip("Use line renderer as a visual. Leave it empty if not needed...")]
        public LineRenderer targetLineRenderer;
        public LayerMask raycastMask = ~0;

        private bool pressRegistered = false;

        /// <summary>
        /// Specific method for the required listener from InputVR components [If pressed, the ray will be created along the object's forward direction]
        /// </summary>
        public void GlobalReceiver_SetControlInput(bool pressed)
        {
            if (targetLineRenderer) targetLineRenderer.enabled = true;
            if (targetLineRenderer) targetLineRenderer.SetPosition(0, transform.position);
            if (pressRegistered && !pressed)
                pressRegistered = false;

           Ray r = new Ray(transform.position, transform.forward);
            if (!Physics.Raycast(r, out RaycastHit h, Mathf.Infinity, raycastMask))
            {
                if (targetLineRenderer) targetLineRenderer.enabled = false;
                return;
            }
            if (!h.collider)
            {
                if (targetLineRenderer) targetLineRenderer.enabled = false;
                return;
            }
            if (targetLineRenderer) targetLineRenderer.SetPosition(1, h.point);

            if (!pressed) return;

            if (pressRegistered != pressed && pressed)
            {
                foreach (EventElement e in eventElements)
                {
                    if (e.requiredName == h.collider.name) e.targetEvent?.Invoke();
                }
            }
            pressRegistered = pressed;
        }
    }
}