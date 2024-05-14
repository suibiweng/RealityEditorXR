using UnityEngine;

namespace SculptingPro.Examples
{
    /// <summary>
    /// Default example orbital camera controller script for SculptingPro example content.
    /// The script uses old legacy Input system.
    /// </summary>
    public sealed class SPExampleOrbitalCamera : MonoBehaviour
    {
        [Header("Example movement for SculptingPro")]
        public Transform mainCamera;

        public Transform orbitalTarget;
        public float distance = 5.0f;
        public float xSpeed = 40;
        public float ySpeed = 110;
        [Space]
        public float yMinLimit = -35f;
        public float yMaxLimit = 80f;
        [Space]
        public float distanceMin = 1.5f;
        public float distanceMax = 15f;
        [Space]
        public float smoothSpeed = 8.0f;
        [Space]
        public bool useInputToMove = true;
        public KeyCode MoveInput = KeyCode.Mouse1;

        float x = 0.0f;
        float y = 35f;

        private void LateUpdate()
        {
            if (!orbitalTarget) return;

            if (useInputToMove && Input.GetKey(MoveInput))
            {
                x += Input.GetAxis("Mouse X") * xSpeed * distance * 0.02f;
                y -= Input.GetAxis("Mouse Y") * ySpeed * 0.02f;
            }
            else if (!useInputToMove)
            {
                x += Input.GetAxis("Mouse X") * xSpeed * distance * 0.02f;
                y -= Input.GetAxis("Mouse Y") * ySpeed * 0.02f;
            }

            y = ClampAngle(y, yMinLimit, yMaxLimit);

            Quaternion rotation = Quaternion.Euler(y, x, 0);

            if (!Input.GetKey(KeyCode.LeftControl) && !Input.GetKey(KeyCode.LeftAlt) && !Input.GetKey(KeyCode.R))
                distance = Mathf.Clamp(distance - Input.GetAxis("Mouse ScrollWheel") * 5, distanceMin, distanceMax);

            Vector3 negDistance = new Vector3(0.0f, 0.0f, -distance);
            Vector3 position = rotation * negDistance + orbitalTarget.position;

            mainCamera.rotation = Quaternion.Lerp(mainCamera.rotation, rotation, smoothSpeed * Time.deltaTime);
            mainCamera.position = Vector3.Lerp(mainCamera.position, position, smoothSpeed * Time.deltaTime);
        }

        private float ClampAngle(float angle, float min, float max)
        {
            if (angle < -360f)
                angle += 360f;
            if (angle > 360f)
                angle -= 360f;
            return Mathf.Clamp(angle, min, max);
        }
    }
}