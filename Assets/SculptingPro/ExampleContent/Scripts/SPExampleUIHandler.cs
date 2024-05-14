using UnityEngine;
using UnityEngine.UI;

namespace SculptingPro.Examples
{
    /// <summary>
    /// Default example UI controller script for SculptingPro example content.
    /// The script uses old legacy Input system.
    /// </summary>
    public sealed class SPExampleUIHandler : MonoBehaviour
    {
        [Header("Example UI handler for SculptingPro")]
        public SculptingPro_Realtime realtimeTarget;
        [Space]
        public Text radiusTxt;
        public Slider radius;
        public Text intensityTxt;
        public Slider intensity;
        public Text meshInfoTxt;
        public Slider rotation;
        [Space]
        public Button[] tools;

        private void Update()
        {
            radiusTxt.text = realtimeTarget.sid.radius.ToString("0.0");
            intensityTxt.text = realtimeTarget.sid.intensity.ToString("0.0");

            if (Input.GetKey(KeyCode.LeftControl))
                radius.value += Input.GetAxis("Mouse ScrollWheel") * 0.5f;
            if (Input.GetKey(KeyCode.LeftAlt))
                intensity.value += Input.GetAxis("Mouse ScrollWheel") * 0.5f;
            if (Input.GetKey(KeyCode.R))
            {
                if (rotation != null)
                    rotation.value += Input.GetAxis("Mouse ScrollWheel") * 45.0f;
            }
        }

        private void LateUpdate()
        {
            int seams = realtimeTarget.lockedModelTarget.workingModelData.m_seams == null ? 0 : realtimeTarget.lockedModelTarget.workingModelData.m_seams.Length;
            meshInfoTxt.text = $"Vertices: {realtimeTarget.lockedModelTarget.workingModelData.m_vertices.Length}\n" +
                $"Seams: {seams}\n" +
                $"Triangles: {realtimeTarget.lockedModelTarget.workingModelData.m_triangles.Length}\n" +
                $"Normals: {realtimeTarget.lockedModelTarget.workingModelData.m_normals.Length}\n" +
                $"UVs: {realtimeTarget.lockedModelTarget.workingModelData.m_uvs.Length}";
            for (int i = 0; i < tools.Length; i++)
                tools[i].interactable = !((int)realtimeTarget.sid.addParams.brushState - 1 == i);
        }
    }
}