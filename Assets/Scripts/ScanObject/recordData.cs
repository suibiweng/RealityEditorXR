using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;
using UnityEngine.UI;

public class recordData : MonoBehaviour
{
    public OSC osc;

    String fileName;
    bool recording = false;
    float startRecordingTime;
    StreamWriter sr;
    String imgName;
    public int imgCount = 0;

    GenerateSpot spot;
    public string instruction;



    // recording interval in seconds
    [SerializeField] private int recordingInterval;


    // Start is called before the first frame update
    void Start()
    {

        osc=FindObjectOfType<OSC>();
        spot=GetComponent<GenerateSpot>();

    }

    public void StartRecording()
    {
        recording = true;
        imgCount=0;
        startRecordingTime = Time.time;
        OscMessage message;
        message = new OscMessage();
        message.address = "/startRecord";
        message.values.Add(spot.URLID);
        osc.Send(message);
        imgCount=0;


    }

    public void StopRecording()
    {
        recording = false;
       
        OscMessage message;
        message = new OscMessage();
        message.address = "/endRecord";
        osc.Send(message);
        

    }


    // Update is called once per frame
    void Update()
    {
        // for debugging on desktop
        if (Input.GetKeyDown(KeyCode.V))
        {
            OscMessage message;

            message = new OscMessage();
            message.address = "/imagePath";
            message.values.Add(spot.URLID+"_scan_"+imgCount+".jpg");
            message.values.Add(this.transform.localToWorldMatrix.ToString());
            osc.Send(message);

            print("SendOSC");
        }

        if (recording)
        {
            
            if(Time.time - startRecordingTime > 1)
            {

                OscMessage message;

                message = new OscMessage();
                message.address = "/imagePath";
                message.values.Add(spot.URLID+"_scan_"+imgCount+".jpg");
                message.values.Add(this.transform.localToWorldMatrix.ToString());
                osc.Send(message);

                startRecordingTime = Time.time;
                imgCount++;
                instruction="Captured pics :"+imgCount;


            }
        }else{

            instruction="Press Start to scan";






        }
        
    }
}
