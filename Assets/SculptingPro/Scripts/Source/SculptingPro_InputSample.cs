using UnityEngine;
using UnityEngine.Events;

namespace SculptingPro
{
    [ExecuteAlways]
    [RequireComponent(typeof(SculptingPro_Realtime))]
    [AddComponentMenu(SculptingPro_Preferences.ORGANISATION + SculptingPro_Preferences.PACKAGENAME + "SculptingPro Input Sample")]
    /// <summary>
    /// Simple input handler for realtime sculpting. Legacy input used.
    /// Written by Matej Vanco 2021.
    /// https://matejvanco.com
    /// </summary>
    public sealed class SculptingPro_InputSample : MonoBehaviour
    {
        [field:SerializeField] public SculptingPro_Realtime Spr { get; private set; }

        public bool sendInputEvents = true;

        [System.Serializable]
        public sealed class PCKeyEvents
        {
            public string eventName;
            public KeyCode eventInput;
            public InputEvents inputEvents;
        }

        public KeyCode pcMainInput = KeyCode.Mouse0;
        /// <summary>
        /// PC-only input events - use additional keys for event reading
        /// </summary>
        public PCKeyEvents[] pcInputKeyEvents;

        [System.Serializable]
        public sealed class InputEvents
        {
            public UnityEvent OnDownEvent;
            public UnityEvent OnHoldEvent;
            public UnityEvent OnUpEvent;
        }

        private void Awake()
        {
            if (!Spr) Spr = GetComponent<SculptingPro_Realtime>();
        }

        private void Start()
        {
            if (!Application.isPlaying)
                return;
            if (!Spr)
            {
                SculptingPro_Debug.Debug(this, "SculptingPro_Realtime doesn't not exist on the object. Simple input [SculptingPro_InputSample] handler is going off...", SculptingPro_Debug.DebugType.Error);
                this.enabled = false;
                return;
            }
        }

        private void Update()
        {
            if (!Application.isPlaying) 
                return;
            if (!sendInputEvents)
                return;

            if (Spr.targetPlatform == SculptingPro_Realtime.TargetPlatform.PC)
            {
                if(Input.GetKey(pcMainInput))
                    Spr.SPR_OnProcessSculpting();
                else if (Input.GetKeyUp(pcMainInput))
                    Spr.SPR_OnStopSculpting();

                foreach (PCKeyEvents e in pcInputKeyEvents)
                {
                    if (Input.GetKeyDown(e.eventInput))
                        e.inputEvents.OnDownEvent?.Invoke();
                    else if (Input.GetKey(e.eventInput))
                        e.inputEvents.OnHoldEvent?.Invoke();
                    else if (Input.GetKeyUp(e.eventInput))
                        e.inputEvents.OnUpEvent?.Invoke();
                }
            }
            else if (Spr.targetPlatform == SculptingPro_Realtime.TargetPlatform.Mobile)
            {
                if (Input.touchCount > 0)
                {
                    Touch t = Input.GetTouch(0);
                    if (t.phase == TouchPhase.Moved || t.phase == TouchPhase.Stationary)
                        Spr.SPR_OnProcessSculpting();
                    else if (t.phase == TouchPhase.Canceled || t.phase == TouchPhase.Ended)
                        Spr.SPR_OnStopSculpting();
                }
            }
        }
    }
}

#if UNITY_EDITOR
namespace SculptingProEditor
{
    using SculptingPro;
    using UnityEditor;

    [CustomEditor(typeof(SculptingPro_InputSample))]
    public sealed class SculptingPro_InputSample_Editor : SculptingPro_EditorUtilities
    {
        private SculptingPro_InputSample spi;

        private void OnEnable()
        {
            spi = (SculptingPro_InputSample)target;
        }

        public override void OnInspectorGUI()
        {
            if(!spi.Spr)
            {
                Hb("Realtime sculpting component is missing!", MessageType.Error);
                return;
            }
            S();
            V();
            if (spi.Spr.targetPlatform == SculptingPro_Realtime.TargetPlatform.Mobile)
                Hb("The sculpting will process when finger touches any sculpting-potential mesh");
            else if (spi.Spr.targetPlatform == SculptingPro_Realtime.TargetPlatform.VR)
                Hb("Your target platform is set to VR. Please remove this component [SculptingPro_InputSample] and add a proper VR Input dependency for target VR interface (Can be found in SculptingPro/VR)", MessageType.Error);
            else
            {
                DrawProperty("pcMainInput", "Main PC Input", "Main key code for essential sculpting process");
                DrawProperty("pcInputKeyEvents", "Additional Key Events", "List of additional PC input key events", true);
            }
            Ve();

            if (spi.Spr.targetPlatform != SculptingPro_Realtime.TargetPlatform.VR)
            {
                S(5);
                DrawProperty("sendInputEvents", "Send Input Events", "If disabled, the script will be practically disabled. The input will not be send");
            }
            S();
        }
    }
}
#endif