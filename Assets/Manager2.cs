using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Normal.Realtime;

public class Manager2 : MonoBehaviour
{
    public Transform leftHand, RightHand; 
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            createSpot(Vector3.zero); 
        }
        if(OVRInput.GetUp(OVRInput.RawButton.A)){
            createSpot(RightHand.position);
        }
        if(OVRInput.GetUp(OVRInput.RawButton.X)){
            createSpot(leftHand.position);
        }
    } 

    private void createSpot(Vector3 spawnPos)
    {
        Realtime.Instantiate("GenrateSpot2.0", spawnPos, Quaternion.identity);
    }
}
