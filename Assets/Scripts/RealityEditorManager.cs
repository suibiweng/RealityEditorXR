using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RealityEditor;
using Normal.Realtime; 
using TMPro;
using TriLibCore.Dae.Schema;


public class RealityEditorManager : MonoBehaviour
{

    public string uploadPort,downloadPort;

    public string uploadURL;

    public string ServerURL;

    public Dictionary<string,GameObject> GenCubesDic;

   // public List<GameObject> GenCubes;
    

    public GameObject generateSpotPreFab;

    public ModelDownloader modelDownloader;

    public int selectedID;
    public string selectedIDUrl;
    public OSC osc;

    

    int IDs=0;

    //public WsClient websocket;

    TextMeshPro debugText;


    public GameObject Cursor;


    public GameObject sculptingMenu,scuptingBrush;

    




    // Start is called before the first frame update
    void Start()
    {

        uploadURL=ServerURL+":"+uploadPort+"/";
        ServerURL+=":"+downloadPort+"/";



        osc=FindObjectOfType<OSC>();   
        modelDownloader=FindObjectOfType<ModelDownloader>();
       // websocket=FindObjectOfType<WsClient>();
     //   GenCubes= new List<GameObject>();
        GenCubesDic=new Dictionary<string,GameObject>();


        osc.SetAllMessageHandler(ReciveFromOSC);

      //  IDs=GenCubes.Count;
        // InvokeRepeating("removeOwnership", 2.0f, 1.0f);
        
    }


    public void updateSelected(int id,string IDurl){
     //   GenCubes[selectedID].GetComponent<GenerateSpot>().isselsected=false;
       // GenCubes[id].GetComponent<GenerateSpot>().isselsected=true;


        GenCubesDic[selectedIDUrl].GetComponent<GenerateSpot>().isselsected=false;
        GenCubesDic[selectedIDUrl].GetComponent<RealtimeTransform>().ClearOwnership();
        GenCubesDic[IDurl].GetComponent<GenerateSpot>().isselsected=true;
        GenCubesDic[IDurl].GetComponent<RealtimeView>().RequestOwnershipOfSelfAndChildren();
        GenCubesDic[IDurl].GetComponent<RealtimeTransform>().RequestOwnership();



        //selectedID=id;
        selectedIDUrl=IDurl;
    }

    public void turnSculptingMenu(bool on){

        sculptingMenu.SetActive(on);
        scuptingBrush.SetActive(on);





    }

    public GameObject getSelectSpot(){
        
        return GenCubesDic[selectedIDUrl];
        
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



    
    
    void createSpot(Vector3 pos)
    {
        GameObject gcube = Realtime.Instantiate("GenrateSpot", pos, Quaternion.identity);
        // GenCubes.Add(gcube);
       
        gcube.GetComponent<GenerateSpot>().id=IDs;


        string urlid=TimestampGenerator.GetTimestamp();
        gcube.GetComponent<GenerateSpot>().URLID=urlid;

        GenCubesDic.Add(urlid,gcube);
        selectedIDUrl=urlid;
        IDs++;
        RealtimeTransform _realtimeTransform = gcube.GetComponent<RealtimeTransform>();
        // _realtimeTransform.RequestOwnership();

    }

   public void RemoveSpot(string urlid){

       Destroy(GenCubesDic[urlid].gameObject);
        GenCubesDic.Remove(urlid);
     
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

            

            // modelDownloader.AddTask(
            //     CreateModelInfoFromOSC(oscMessage,
            //     GenCubes[oscMessage.GetInt(0)].GetComponent<GenerateSpot>().TargetObject)
            //     );

            //     GenCubes[oscMessage.GetInt(0)].GetComponent<GenerateSpot>().PreViewQuad.SetActive(false);
            //     GenCubes[oscMessage.GetInt(0)].GetComponent<GenerateSpot>().loadingIcon.SetActive(false);
            //     modelDownloader.startDownload();
                break;

            case "/GenrateBackGround":
                // modelDownloader.AddTask(
                // CreateModelInfoFromOSC(oscMessage,
                // GenCubes[oscMessage.GetInt(0)].GetComponent<GenerateSpot>().BackGroundOnly)
                // );
            break;

            case "/GenratObjOnly":

                // modelDownloader.AddTask(
                // CreateModelInfoFromOSC(oscMessage,
                // GenCubes[oscMessage.GetInt(0)].GetComponent<GenerateSpot>().TargetObject)
                // );

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
        message.values.Add("genrated");

         osc.Send(message);


        //  if(websocket!=null){
        //     WebSocketmessage msg=new WebSocketmessage();
        //     msg.ID=id.ToString();
        //     msg.prompt=promt;




        //     websocket.sendMessageToServer(msg);

        //  }


        


    }


    public void InstructModify(int id,string promt,string urlid){
        OscMessage message = new OscMessage()
        {
            address = "/InstructModify"
        };
        message.values.Add(id);
        message.values.Add(promt);
        message.values.Add(urlid);


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


        //GenCubes[selectedID].GetComponent<GenerateSpot>().Prompt=txt;
        GenCubesDic[selectedIDUrl].GetComponent<GenerateSpot>().Prompt=txt;


    }


    public void ChangeID(string PreviousKey,string Modifiedkey,GameObject v){


        

        GenCubesDic.Add(Modifiedkey,v);
       // GenCubesDic.Remove(PreviousKey);
        
       // GenCubesDic[Modifiedkey] = value;






    }





}
