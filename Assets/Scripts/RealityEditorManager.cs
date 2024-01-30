using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RealityEditor;
using Normal.Realtime; 
using TMPro;
using TriLibCore.Dae.Schema;


public class RealityEditorManager : MonoBehaviour
{

    public Dictionary<string,GameObject> GenCubesDic;

    public List<GameObject> GenCubes;
    

    public GameObject generateSpotPreFab;

    public ModelDownloader modelDownloader;

    public int selectedID;
    public string selectedIDUrl;
    public OSC osc;

    int IDs=0;

    //public WsClient websocket;

    TextMeshPro debugText;

    




    // Start is called before the first frame update
    void Start()
    {
        osc=FindObjectOfType<OSC>();   
        modelDownloader=FindObjectOfType<ModelDownloader>();
       // websocket=FindObjectOfType<WsClient>();
        GenCubes= new List<GameObject>();
        GenCubesDic=new Dictionary<string,GameObject>();


        osc.SetAllMessageHandler(ReciveFromOSC);

      //  IDs=GenCubes.Count;
        // InvokeRepeating("removeOwnership", 2.0f, 1.0f);
        
    }


    public void updateSelected(int id,string IDurl){
        GenCubes[selectedID].GetComponent<GenerateSpot>().isselsected=false;
        GenCubes[id].GetComponent<GenerateSpot>().isselsected=true;


        GenCubesDic[selectedIDUrl].GetComponent<GenerateSpot>().isselsected=false;
        GenCubesDic[IDurl].GetComponent<GenerateSpot>().isselsected=true;




        selectedID=id;
        selectedIDUrl=IDurl;
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
        if(Input.GetKeyDown(KeyCode.Space)){
            createSpot(new Vector3(0,0,0));
        }
    }



    
    
    void createSpot(Vector3 pos){
        GameObject gcube= Realtime.Instantiate("GenrateSpot",pos,Quaternion.identity);
        GenCubes.Add(gcube);
       
        gcube.GetComponent<GenerateSpot>().id=IDs;
        gcube.GetComponent<GenerateSpot>().URLID=TimestampGenerator.GetTimestamp();
        GenCubesDic.Add( gcube.GetComponent<GenerateSpot>().URLID,gcube);
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
            
               // debugText.text=oscMessage.values

            

            modelDownloader.AddTask(
                CreateModelInfoFromOSC(oscMessage,
                GenCubes[oscMessage.GetInt(0)].GetComponent<GenerateSpot>().TargetObject)
                );

                GenCubes[oscMessage.GetInt(0)].GetComponent<GenerateSpot>().PreViewQuad.SetActive(false);
                GenCubes[oscMessage.GetInt(0)].GetComponent<GenerateSpot>().loadingIcon.SetActive(false);
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










 






    public void promtGenerateModel(int id,string promt,string URLID){
        OscMessage message = new OscMessage()
        {
            address = "/PromtGenerateModel"
        };
        message.values.Add(id);
        message.values.Add(promt);
        message.values.Add(URLID);

         osc.Send(message);


        //  if(websocket!=null){
        //     WebSocketmessage msg=new WebSocketmessage();
        //     msg.ID=id.ToString();
        //     msg.prompt=promt;




        //     websocket.sendMessageToServer(msg);

        //  }


        


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
        GenCubesDic[selectedIDUrl].GetComponent<GenerateSpot>().Prompt=txt;
        // GenCubes[selectedID].GetComponent<GenerateSpot>().Prompt=txt;


    }





}
