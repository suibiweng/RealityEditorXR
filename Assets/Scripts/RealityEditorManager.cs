using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RealityEditor;
using Normal.Realtime; 

using TriLibCore.Dae.Schema;


public class RealityEditorManager : MonoBehaviour
{

    public List<GameObject> GenCubes;

    public GameObject generateSpotPreFab;

    public ModelDownloader modelDownloader;

    public int selectedID;
    public OSC osc;

    int IDs=0;

    public WsClient websocket;




    // Start is called before the first frame update
    void Start()
    {
        osc=FindObjectOfType<OSC>();   
        modelDownloader=FindObjectOfType<ModelDownloader>();
        websocket=FindObjectOfType<WsClient>();
        //GenCubes= new List<GameObject>();

        osc.SetAllMessageHandler(ReciveFromOSC);

        IDs=GenCubes.Count;
        // InvokeRepeating("removeOwnership", 2.0f, 1.0f);
        
    }


    public void updateSelected(int id){
        GenCubes[selectedID].GetComponent<GenerateSpot>().isselsected=false;
        GenCubes[id].GetComponent<GenerateSpot>().isselsected=true;

        selectedID=id;
    }


    // Update is called once per frame
    void Update()
    {
        //OVRInput.GetLocalControllerPosition(OVRInput.Controller.RTouch);
        if(OVRInput.GetUp(OVRInput.RawButton.A)){
            createSpot(OVRInput.GetLocalControllerPosition(OVRInput.Controller.RTouch));
        }
        if(OVRInput.GetUp(OVRInput.RawButton.X)){
            createSpot(OVRInput.GetLocalControllerPosition(OVRInput.Controller.LTouch));
        }
    }


    // void removeOwnership()
    // {
    //     foreach (var cube in GenCubes)
    //     {
    //         cube.GetComponent<RealtimeTransform>().ClearOwnership();
    //     }
    // }
    void createSpot(Vector3 pos){
        GameObject gcube= Realtime.Instantiate("GenrateSpot",pos,Quaternion.identity);
        GenCubes.Add(gcube);
        gcube.GetComponent<GenerateSpot>().id=IDs;
        IDs++;
        RealtimeTransform _realtimeTransform = gcube.GetComponent<RealtimeTransform>();
        // _realtimeTransform.RequestOwnership();

    }

   public void RemoveSpot(int id){


    for(int i=0;i<GenCubes.Count;i++){

    if(id== GenCubes[i].GetComponent<GenerateSpot>().id){
        Destroy(GenCubes[i].gameObject,2);
        GenCubes.RemoveAt(i);

    } 
     
    }




     


    }

    ModelIformation CreateModelInfoFromOSC(OscMessage oscMessage,GameObject obj){


        ModelIformation m =new ModelIformation(){
            ModelURL=oscMessage.values[1].ToString(),
            gameobjectWarp=obj
        };

        





        return m;



    }

    public void ReciveFromOSC(OscMessage oscMessage){
        switch(oscMessage.address){
            case "/GenrateModel":
            print(oscMessage);

            modelDownloader.AddTask(
                CreateModelInfoFromOSC(oscMessage,
                GenCubes[oscMessage.GetInt(0)].GetComponent<GenerateSpot>().TargetObject)
                );

                GenCubes[oscMessage.GetInt(0)].GetComponent<GenerateSpot>().PreViewQuad.SetActive(false);

                modelDownloader.startDownload();
                break;

            case "/GenrateBackGround":
                modelDownloader.AddTask(
                CreateModelInfoFromOSC(oscMessage,
                GenCubes[oscMessage.GetInt(0)].GetComponent<GenerateSpot>().BackGroundOnly)
                );
            break;

            case "/GenratObjOnly":

                modelDownloader.AddTask(
                CreateModelInfoFromOSC(oscMessage,
                GenCubes[oscMessage.GetInt(0)].GetComponent<GenerateSpot>().TargetObject)
                );

                break;





        }










    }






    public void promtGenerateModel(int id,string promt){
        OscMessage message = new OscMessage()
        {
            address = "/PromtGenerateModel"
        };
        message.values.Add(id);
        message.values.Add(promt);

         osc.Send(message);


         if(websocket!=null){
            WebSocketmessage msg=new WebSocketmessage();
            msg.ID=id.ToString();
            msg.prompt=promt;




            websocket.sendMessageToServer(msg);

         }


        


    }


    public void InstructNerf(int id,string promt){
        OscMessage message = new OscMessage()
        {
            address = "/InstructNerfGenerateModel"
        };
        message.values.Add(id);
        message.values.Add(promt);


        osc.Send(message);


    }



    public void sendStop(){
        
        OscMessage message = new OscMessage()
        {
            address = "/stopProcess"
        };
    

         osc.Send(message);

    }



    
    public void ScanObj(int id){

        OscMessage message = new OscMessage()
        {
            address = "/ScanModel"
        };
        message.values.Add(id);
        //message.values.Add(promt);




    }


    public void setPrompt(string txt)
    {

        GenCubes[selectedID].GetComponent<GenerateSpot>().Prompt=txt;


    }





}
