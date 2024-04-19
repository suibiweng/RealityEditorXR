using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using OVR; 
using Normal.Realtime; 

public class MovePlayer : MonoBehaviour
{
   // public GameObject spot;
    // public RealtimeTransform MultiPlayer; 
    public GameObject Player; 
    // Transform CameraOffset; // set to parent of main Camera
    public float speed;
    public float rotateSpeed;
    public Transform head; 
    
    void start()
    {
        
    }
    void Update()
    {
        var joystick = OVRInput.Get(OVRInput.RawAxis2D.LThumbstick, OVRInput.Controller.LTouch);
        var Rightjoystick = OVRInput.Get(OVRInput.RawAxis2D.RThumbstick, OVRInput.Controller.RTouch);

        Player.transform.position += (head.right * joystick.x + head.forward * joystick.y) * Time.deltaTime * speed;
        Player.transform.Rotate(new Vector3(0f,Rightjoystick.x * rotateSpeed, 0f));
    
    }
}

