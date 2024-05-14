using UnityEngine;

namespace SculptingPro
{
    /// <summary>
    /// Input dependency = Oculus Platform. Apply this component to one of the VR controllers with SculptingPro_Realtime behaviour
    /// </summary>
    [RequireComponent(typeof(SculptingPro_Realtime))]
    [AddComponentMenu(SculptingPro_Preferences.ORGANISATION + SculptingPro_Preferences.PACKAGENAME + "VR Input/Input VR [Oculus Integration]")]
    public class SculptingPro_InputVR_OculusIntegration : MonoBehaviour
    {
        // VR Target Device
        [Space]
        public OVRInput.Controller targetDevice;

        // VR Input Type
        public OVRInput.Button inputButton;
        [Space]
        [Tooltip("If enabled, the input will be refreshed every frame")]
        public bool updateInputEveryFrame = true;

        /// <summary>
        /// Is button held down?
        /// </summary>
        internal bool inputState = false;
        private SculptingPro_Realtime spr;
        //Additional
        private SculptingPro_SelectionHelper sh;

        private void Start()
        {
            spr = GetComponent<SculptingPro_Realtime>();
            if (!spr)
            {
                SculptingPro_Debug.Debug(this, "The object doesn't contain realtime sculpting component", SculptingPro_Debug.DebugType.Error);
                this.enabled = false;
            }

            sh = GetComponent<SculptingPro_SelectionHelper>();
        }

        private void Update()
        {
            if (!updateInputEveryFrame) return;
            InputVR_SendInput();
        }

        /// <summary>
        /// Send input to the fellow Realtime sculpting script on the object
        /// </summary>
        public void InputVR_SendInput()
        {
            bool input = InputVR_GetInputState();
            //Additional
            if (sh) sh.GlobalReceiver_SetControlInput(input);
            //----------
            if (input != inputState)
            {
                if (!input) spr.SPR_OnStopSculpting();
                inputState = input;
            }
            if (inputState)
                spr.SPR_OnProcessSculpting();
        }

        /// <summary>
        /// Get current VR input of the specified attributes
        /// </summary>
        /// <returns>returns true if pressed</returns>
        public bool InputVR_GetInputState()
        {
            if (!Application.isPlaying) return false;
            if (!this.enabled) return false;
            return OVRInput.Get(inputButton, targetDevice);
        }
    }
}