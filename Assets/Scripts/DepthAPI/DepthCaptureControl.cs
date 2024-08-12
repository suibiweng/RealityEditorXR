using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DepthCaptureControl : MonoBehaviour
{
    public OSC osc;
    public GenerateSpot generateSpot;

    public recordData recorddata;
    // Start is called before the first frame update
    void Start()
    {
        osc =GameObject.FindAnyObjectByType<OSC>();

        generateSpot = GetComponent<GenerateSpot>();

        recorddata=GetComponent<recordData>();


    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void CapturePicture(){
       OscMessage message = new OscMessage()
        {
            address = "/captureSpatialPicture"
        };
        message.values.Add(generateSpot.URLID);
        message.values.Add(recorddata.screenPos.x);
        message.values.Add(-recorddata.screenPos.y);
        osc.Send(message);




    }
}
