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
    
    void start()
    {
        
    }
    void Update()
    {
        var joystick = OVRInput.Get(OVRInput.RawAxis2D.LThumbstick, OVRInput.Controller.LTouch);
        var Rightjoystick = OVRInput.Get(OVRInput.RawAxis2D.RThumbstick, OVRInput.Controller.RTouch);
        float fixedy = Player.transform.position.y;

        Player.transform.position += (transform.right * joystick.x + transform.forward * joystick.y) * Time.deltaTime * speed;
        Player.transform.Rotate(new Vector3(0f,Rightjoystick.y * rotateSpeed, 0f));
        // Player.transform.position = new Vector3()
     //   spot.GetComponent<RealtimeView>().RequestOwnershipOfSelfAndChildren();
       // spot.GetComponent<RealtimeTransform>().RequestOwnership();
    }
}

