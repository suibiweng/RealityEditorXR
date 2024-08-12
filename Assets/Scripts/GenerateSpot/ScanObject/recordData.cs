using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;
using UnityEngine.UI;
using UnityEngine.Networking;
using RealityEditor;

public class recordData : MonoBehaviour
{
    public RenderTexture RT;
    
    public GameObject indicator;

    public ArrayList cameraPoses;

    public RealityEditorManager manager;


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

    public Camera screenCam;


    // Start is called before the first frame update
    void Start()
    {
        cameraPoses=new ArrayList();
        osc=FindObjectOfType<OSC>();
        spot=GetComponent<GenerateSpot>();
 
        manager =spot.manager;
        screenCam=GameObject.FindGameObjectWithTag("USBCamera").GetComponent<Camera>();
       
     //   indicator=campoints.indicator;

    }

     public Vector3 screenPos;
    public void StartInpainting(){

        Startinpanting=true;


        if(spot.isselsected){

         



        OscMessage message = new OscMessage()
        {
            address = "/InpaintBackGround"
        };
        message.values.Add(spot.URLID);


       

        message.values.Add(screenPos.x);
        message.values.Add(-screenPos.y);


        osc.Send(message);





        }






       // StartCoroutine(UploadCoroutine(ConvertToTexture2D(RT), campoints.rCenterAim));



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
        // osc.Send(message);
        imgCount=0;


    }

    public void StopRecording()
    {
        recording = false;
        OscMessage message;
        message = new OscMessage();
        message.address = "/endRecord";
        // osc.Send(message);

        foreach(var c in cameraPoses){
            Destroy((GameObject)c);
        }

        campoints.Seton(false);


    }

    bool capturing=false;
    bool Startinpanting;



    // Update is called once per frame
    void Update()
    {

         if(Input.GetKeyDown(KeyCode.Q)){


               StartCoroutine(UploadCoroutine(ConvertToTexture2D(RT), campoints.rCenterAim));




         }






         //StartInpainting();



        screenPos = screenCam.WorldToScreenPoint(spot.gameObject.transform.position);

        if (recording)
        {
            
        if(OVRInput.Get(OVRInput.Button.PrimaryIndexTrigger)){
            
            
            
           // StartCoroutine(UploadCoroutine((Texture2D)campoints.CameraTexture, campoints.centerAim));
            
            
            if(!capturing){

                StartCoroutine( DelayCapture(0.2f));
            }


        }
            
        
        }else{

           // instruction="Press Start to scan and press left Trigger to capture";


        }
        
    }


     public static byte[] EncodeTextureToJPG(Texture2D texture, int quality = 75)
    {
        // Create a temporary Texture2D in a format that supports encoding
       Texture2D tempTexture = new Texture2D(texture.width, texture.height, texture.format, texture.mipmapCount > 1);

        // Copy the pixel data
        Graphics.CopyTexture(texture, tempTexture);
        tempTexture.Apply(true); 
        // Encode the temporary texture
        byte[] jpgBytes = tempTexture.EncodeToJPG(quality);

        // Clean up the temporary texture
         DestroyImmediate(tempTexture);

        return jpgBytes;
    }




   IEnumerator UploadCoroutine(Texture2D texture, Vector2 coordinates)
    {
        // Convert texture to a JPG byte array
        byte[] textureBytes =texture.EncodeToJPG();

        // Create a multipart form for the request
        WWWForm form = new WWWForm();
        form.AddBinaryData("file", textureBytes, "texture.jpg", "image/jpeg");
        
        // Add 2D coordinates to the form
        form.AddField("xCoordinate", coordinates.x.ToString());
        form.AddField("yCoordinate", coordinates.y.ToString());
        form.AddField("URLID",spot.URLID); 

        // Create a UnityWebRequest for uploading the data
        using (UnityWebRequest www = UnityWebRequest.Post(spot.manager.ServerURL+"upload", form))
        {
            // Set a download handler to receive the server's response
            www.downloadHandler = new DownloadHandlerBuffer();

            // Send the request and wait for the response
            yield return www.SendWebRequest();

            if (www.result != UnityWebRequest.Result.Success)
            {
                Startinpanting=false;

                Debug.LogError(www.error);
            }
            else
            {
                Debug.Log("Upload complete!");
            }
        }
    }



        public Texture2D ConvertToTexture2D(RenderTexture renderTexture)
    {
        // Create a new Texture2D with the same dimensions as the RenderTexture
        Texture2D texture2D = new Texture2D(renderTexture.width, renderTexture.height, TextureFormat.RGBA32, false);

        // Save the current active RenderTexture
        RenderTexture currentActiveRT = RenderTexture.active;

        // Set the RenderTexture as active (so we can read from it)
        RenderTexture.active = renderTexture;

        // Read the pixels from the RenderTexture and apply them to the Texture2D
        texture2D.ReadPixels(new Rect(0, 0, renderTexture.width, renderTexture.height), 0, 0);
        texture2D.Apply();

        // Restore the previously active RenderTexture
        RenderTexture.active = currentActiveRT;

        return texture2D;
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
             if(campoints.cameraType==CameraType.Mono)   message.values.Add(campoints.centerAim.ToString());
                // osc.Send(message);
                
                startRecordingTime = Time.time;
                imgCount++;
                instruction="Captured pics :"+imgCount;






    }
}
