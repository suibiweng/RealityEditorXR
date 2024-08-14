using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using RealityEditor;

public class RoomScanManager : MonoBehaviour
{

    public MeshExporter meshExporter;
    public GameObject targetObj;

    public List<GameObject> Cropboxes;


    public GameObject BoundingBox;


    public OSC osc;



    
    int imgCount;
    string ID;
    public bool recording;


    // Start is called before the first frame update
    void Start()
    {
        Cropboxes=new List<GameObject>();
    //    StartCoroutine(searchRoomMesh(1.0f));

    osc =FindAnyObjectByType<OSC>();      
    
        //Search room mesh

    }

 
    MeshFilter TargetMesh;
    Vector3 RoomPosition;

    public void getMeshObj (MeshFilter meshFilter)
    {

        targetObj=meshFilter.gameObject;
        TargetMesh=meshFilter;
        meshExporter.objectToExport=meshFilter.gameObject;

        RoomPosition=targetObj.transform.position;

         Debug.Log("Room:"+RoomPosition+targetObj.transform.localScale+targetObj.transform.rotation.eulerAngles);



    }


    public void uploadRoomMesh(){

        meshExporter.UploadMeshDirectly(targetObj);


    }



    public void uploadCropRoomMesh(){

        //meshExporter.CropAndUploadMesh(targetObj.GetComponent<MeshFilter>(),BoundingBox);


    }

    public void getallCropBoxes(){

        foreach (GameObject g in GameObject.FindGameObjectsWithTag("CropBox")){

            Debug.Log(g.name + g.transform.position+g.transform.localScale+g.transform.rotation.eulerAngles);
            Cropboxes.Add(g);

            





        }




    }







    


    // Update is called once per frame
    void Update()
    {


         if(OVRInput.Get(OVRInput.Button.PrimaryIndexTrigger)){
            if(recording){


                UpdateRoomScanning();


            }


        }

        
    }


    public void StartRoomScanning(){

        recording = true;
        imgCount=0;

        ID =TimestampGenerator.GetTimestamp();
       // startRecordingTime = Time.time;
        OscMessage message;
        message = new OscMessage();
        message.address = "/RoomScanStart";
        message.values.Add(ID);
        osc.Send(message);
        imgCount=0;








    }



    public void UpdateRoomScanning(){

        if(!capturing)
            StartCoroutine( DelayCapture(0.2f));

   



        
    }

    bool   capturing=false;
    IEnumerator DelayCapture(float delaysecod){
        capturing=true;

        Capture();

         yield return new WaitForSeconds(delaysecod);
         
        capturing=false;


    }


    void  Capture()
{

             OscMessage message;

                message = new OscMessage();
                message.address = "/Roomscan";
                message.values.Add(ID+"_RoomScan_"+imgCount+".jpg");
                //message.values.Add(this.transform.localToWorldMatrix.ToString());
             
                // osc.Send(message);
                
    
                imgCount++;
               // instruction="Captured pics :"+imgCount;


               osc.Send(message);





}


    public void EndRoomScanning(){

        recording = false;
        OscMessage message;
        message = new OscMessage();
        message.address = "/RoomscanEnd";
        osc.Send(message);



        // foreach(var c in cameraPoses){
        //     Destroy((GameObject)c);
        // }

        // campoints.Seton(false);




    }

}
