using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using RealityEditor;
using Oculus.Platform;
using Unity.VisualScripting;

public class RoomScanManager : MonoBehaviour
{

    public ParticleSystem hintParticle;

    public MeshExporter meshExporter;
    public GameObject Roommesh;

    public List<GameObject> Cropboxes;


    public GameObject BoundingBox;


    public OSC osc;

    public RealityEditorManager manager;


    
    int imgCount;
    string ID;
    public bool recording;


    // Start is called before the first frame update
    void Start()
    {
    
    //    StartCoroutine(searchRoomMesh(1.0f));

    // osc =FindObjectOfType<OSC>();      


    StartCoroutine(DelayTurnOffMesh());

   // manager=FindObjectOfType<RealityEditorManager>();
    
        //Search room mesh

    }

 
    MeshFilter TargetMesh;
    Vector3 RoomPosition;

    public void getMeshObj (MeshFilter meshFilter)
    {

        Roommesh=meshFilter.gameObject;
        TargetMesh=meshFilter;
        meshExporter.objectToExport=meshFilter.gameObject;

        // RoomPosition=Roommesh.transform.position;
        //  Debug.Log("Room:"+RoomPosition+Roommesh.transform.localScale+Roommesh.transform.rotation.eulerAngles);



     



    }
    IEnumerator DelayTurnOffMesh(){
        yield return new WaitForSeconds(1);


           Roommesh.SetActive(false);


    }


    public void uploadRoomMesh(){

        Roommesh.SetActive(true);

        meshExporter.UploadMeshDirectly(Roommesh);


    }

 GameObject [] boxes ;

    public void getallCropBoxes(){


            // StartCoroutine(DelaySetupFurniture());

    }




IEnumerator DelaySetupFurniture(){


        yield return new WaitForSeconds(1f);
        // Cropboxes=new List<GameObject>();
        boxes =GameObject.FindGameObjectsWithTag("CropBox");
        //osc =FindObjectOfType<OSC>();      
        // int index= 0;


            int index=0;
      foreach (GameObject g in boxes){
            yield return new WaitForSeconds(1f);

            Vector3 offestPostion = g.transform.position+new Vector3(0 ,g.transform.position.y-g.transform.localScale.y*0.5f,0);
            string urlid=manager.createReconstructionSpot(g.transform.position,g.transform.rotation, g.transform.localScale*0.5f,index.ToString());
            //need a OSC send to Server to crop mesh
            OscMessage message =new OscMessage(){
                address="/CreateCropBox"
            };
            message.values.Add(urlid);
            message.values.Add(g.transform.position.ToString());
            message.values.Add(g.transform.rotation.ToString());
            message.values.Add((g.transform.localScale*0.5f).ToString());
            osc.Send(message);
            index++;

        }




}





public void setAllFurnitures()


{


StartCoroutine(DelaySetupFurniture());



}











    


    // Update is called once per frame
    void Update()
    {


         if(OVRInput.Get(OVRInput.Button.PrimaryIndexTrigger) || OVRInput.Get(OVRInput.Button.SecondaryIndexTrigger)){
            if(recording){


                UpdateRoomScanning();

                hintParticle.Play();


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

           Roommesh.SetActive(true);








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
                message.values.Add(ID+"_RoomScan_"+imgCount+"");
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

        hintParticle.Stop();
        hintParticle.Clear();



        Roommesh.SetActive(false);



        // foreach(var c in cameraPoses){
        //     Destroy((GameObject)c);
        // }

        // campoints.Seton(false);




    }

}
