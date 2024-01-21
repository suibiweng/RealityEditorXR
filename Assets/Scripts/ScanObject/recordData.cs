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
    int imgCount = 0;



    // recording interval in seconds
    [SerializeField] private int recordingInterval;


    // Start is called before the first frame update
    void Start()
    {

        osc=FindObjectOfType<OSC>();

    }

    public void StartRecording()
    {
        recording = true;
        imgCount=0;
        startRecordingTime = Time.time;
        OscMessage message;
        message = new OscMessage();
        message.address = "/start";
        osc.Send(message);


    }

    public void StopRecording()
    {
        recording = false;
       
        OscMessage message;
        message = new OscMessage();
        message.address = "/end";
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
            message.values.Add(imgCount.ToString("D5") +".jpg");
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
                message.values.Add(imgCount.ToString("D5") + ".jpg");
                message.values.Add(this.transform.localToWorldMatrix.ToString());
                osc.Send(message);

                startRecordingTime = Time.time;
                imgCount++;

            }
        }
        
    }
}
