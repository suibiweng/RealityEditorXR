using UnityEngine;
using System.Collections;

public class CameraControl : MonoBehaviour
{
    public float moveSpeed = 2.0f;
    public float rotateSpeed = 3.0f;
    public float lerpSpeed = 0.01f;
    Vector3 velocity = Vector3.zero;

    Camera cam;

	// Use this for initialization
	void Start ()
    {
        cam = GetComponent<Camera>();
	}

    void Update()
    {
        if (Input.GetMouseButtonDown(1))
            Cursor.lockState = CursorLockMode.Locked;
        if (Input.GetMouseButtonUp(1))
            Cursor.lockState = CursorLockMode.None;
        if (Input.GetKeyDown(KeyCode.Escape))
            Application.Quit();
    }

    public void SetFOV(float fov)
    {
        GetComponent<Camera>().fieldOfView = fov;        
    }
	
	void FixedUpdate ()
    {
        Vector2 mousePos = new Vector2(Input.GetAxis("Mouse X"), Input.GetAxis("Mouse Y"));
        // only move camera if right mouse button is held
        if (Input.GetMouseButton(1))
        {
            Vector3 moveVector = Vector3.zero;

            if (Input.GetKey(KeyCode.W)) moveVector += Vector3.forward;
            if (Input.GetKey(KeyCode.S)) moveVector += Vector3.back;
            if (Input.GetKey(KeyCode.A)) moveVector += Vector3.left;
            if (Input.GetKey(KeyCode.D)) moveVector += Vector3.right;
            if (Input.GetKey(KeyCode.Q)) moveVector += Vector3.down;
            if (Input.GetKey(KeyCode.E)) moveVector += Vector3.up;

            // apply the speed
            moveVector *= moveSpeed * Time.deltaTime;

            // shift for go faster
            if (Input.GetKey(KeyCode.LeftShift))
                moveVector *= 4.0f;

            velocity = Vector3.Lerp(velocity, moveVector, lerpSpeed);
            // move the camera
            transform.Translate(velocity);

            // ROTATION
            float rotationH = mousePos.x;
            float rotationV = mousePos.y;

            transform.Rotate(Vector3.up, rotationH * rotateSpeed, Space.World);
            transform.Rotate(Vector3.left, rotationV * rotateSpeed);
        }
        else if (Input.GetMouseButtonUp(1))
            velocity = Vector3.zero;
    }
}
