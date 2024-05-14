using UnityEngine;

namespace SculptingPro.Examples
{
	/// <summary>
	/// Default example custom first-person controller for SculptingPro example content.
	/// The script uses old legacy Input system.
	/// </summary>
	public sealed class SPExampleFirstPersonController : MonoBehaviour
    {
        [SerializeField] private float moveSpeed = 3.0f;

		[Range(0.1f, 9f)] [SerializeField] private float sensitivity = 2f;
		[Range(0f, 90f)] [SerializeField] private float yRotationLimit = 88f;

		private Vector2 rotation = Vector2.zero;
		private const string xAxis = "Mouse X";
		private const string yAxis = "Mouse Y";

		void Update()
		{
			Cursor.lockState = CursorLockMode.Locked;

			rotation.x += Input.GetAxis(xAxis) * sensitivity;
			rotation.y += Input.GetAxis(yAxis) * sensitivity;
			rotation.y = Mathf.Clamp(rotation.y, -yRotationLimit, yRotationLimit);
			Quaternion xQuat = Quaternion.AngleAxis(rotation.x, Vector3.up);
			Quaternion yQuat = Quaternion.AngleAxis(rotation.y, Vector3.left);

			transform.localRotation = xQuat * yQuat;

			Vector3 dir = new Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical"));
			dir = transform.TransformDirection(dir);
			dir.y = 0;
			transform.position += moveSpeed * Time.deltaTime * dir;
		}
	}
}