using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;
using UnityEngine.UI;


public class recordData : MonoBehaviour
{
    
    public GameObject indicator;

    public ArrayList cameraPoses;


    public OSC osc;

    String fileName;
    bool recording = false;
    float startRecordingTime;
    StreamWriter sr;
    String imgName;
    public int imgCount = 0;

    GenerateSpot spot;
    public string instruction;

    public CameraSelectPoints campoints;

    // recording interval in seconds
    [SerializeField] private int recordingInterval;


    // Start is called before the first frame update
    void Start()
    {
        cameraPoses=new ArrayList();
        osc=FindObjectOfType<OSC>();
        spot=GetComponent<GenerateSpot>();
        campoints=FindObjectOfType<CameraSelectPoints>();
        indicator=campoints.indicator;

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

        foreach(var c in cameraPoses){
            Destroy((GameObject)c);


        }
        

    }

    bool capturing=false;


    // Update is called once per frame
    void Update()
    {
        // for debugging on desktop
        if (Input.GetKeyDown(KeyCode.V))
        {
        //     OscMessage message;

        //     message = new OscMessage();
        //     message.address = "/imagePath";
        //     message.values.Add(spot.URLID+"_scan_"+imgCount+".jpg");
        //   //  message.values.Add(this.transform.localToWorldMatrix.ToString());
        //      message.values.Add("left:"+campoints.LeftAim.x+"_");
          

        //     osc.Send(message);

        //     print("SendOSC");
        }

        if (recording)
        {
            
        if(OVRInput.Get(OVRInput.Button.PrimaryIndexTrigger)){
            
            if(!capturing){

                StartCoroutine( DelayCapture(0.5f));
            }


        }
            
            
            
            // if(Time.time - startRecordingTime > 0)
            // {

            // }
        }else{

            instruction="Press Start to scan and press left Trigger to capture";


        }
        
    }


    IEnumerator DelayCapture(float delaysecod){
        capturing=true;

        Capture();

         yield return new WaitForSeconds(delaysecod);
         
        capturing=false;









    }




    void Capture(){

                
                if(indicator!=null) {
                        GameObject c =Instantiate(indicator,indicator.transform.position,indicator.transform.rotation) as GameObject;
                        cameraPoses.Add(c);

                }


                OscMessage message;

                message = new OscMessage();
                message.address = "/imagePath";
                message.values.Add(spot.URLID+"_scan_"+imgCount+".jpg");
                //message.values.Add(this.transform.localToWorldMatrix.ToString());
             
             
             if(campoints.cameraType==CameraType.Stereo)   message.values.Add("left:"+campoints.rLeftAim.ToString()+" "+"right"+campoints.rRightAim.ToString());
             if(campoints.cameraType==CameraType.Mono)   message.values.Add(campoints.rCenterAim.ToString());
                osc.Send(message);
                
                
        
                
                
                startRecordingTime = Time.time;
                imgCount++;
                instruction="Captured pics :"+imgCount;






    }
}
