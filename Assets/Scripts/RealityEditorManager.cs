using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RealityEditor;
using Normal.Realtime; 
using TMPro;
using TriLibCore.Dae.Schema;


public class RealityEditorManager : MonoBehaviour
{
    public Transform LeftHand, RightHand;
    public Transform PlayerCamera; 
    public string uploadPort,downloadPort;
    public string ServerURL;

    public Dictionary<string,GameObject> GenCubesDic;

    public SceneSaverTest SceneSaverTest; 
   // public List<GameObject> GenCubes;
   
    public string selectedIDUrl;
    int IDs=0;
    TextMeshPro debugText;

    public Transform Cursor;
    
    public GameObject sculptingMenu,scuptingBrush;
    public OSC osc;
    private int colorcubeMover; 
    void Start()
    {
        osc=FindObjectOfType<OSC>();   

        ServerURL+=":"+downloadPort+"/";
     //   GenCubes= new List<GameObject>();
        GenCubesDic=new Dictionary<string,GameObject>();
      //  IDs=GenCubes.Count;
     // osc.SetAllMessageHandler(ReciveFromOSC);

        
    }


    public void updateSelected(int id,string IDurl)
    {
        Debug.Log("Using a dictionary in The manager, The key you are looking for is: " + IDurl); 
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
            createSpot(RightHand.position);
        }
        if(OVRInput.GetUp(OVRInput.RawButton.X)){
            createSpot(LeftHand.position);
        }
        if(Input.GetKeyDown(KeyCode.Space)){
            createSpot(new Vector3(0,0,0));
        }
        if(Input.GetKeyDown(KeyCode.S)){
            SceneSaverTest.SaveGenerateSpotsToPlayerPrefs();
        }
        if(Input.GetKeyDown(KeyCode.L)){
            SceneSaverTest.LoadGenerateSpotsFromPlayerPrefs();
        }
    }

    public string createReconstructionSpot(Vector3 pos,Quaternion rot,Vector3 scale,string vid){


        Realtime.InstantiateOptions options = new Realtime.InstantiateOptions
        {
            ownedByClient = true,
            preventOwnershipTakeover = false,
            // destroyWhenOwnerOrLastClientLeaves = true,
            useInstance = null // or specify the Realtime instance if necessary
        };
        GameObject gcube = Realtime.Instantiate("GenrateSpot2.1", pos, Quaternion.identity, options); //this might be obsolete trying new options feature
      
        gcube.transform.localScale = scale;
        gcube.transform.rotation=rot;
      
        gcube.GetComponent<GenerateSpot>().id=IDs;
        string urlid=TimestampGenerator.GetTimestamp(); 
        gcube.GetComponent<GenerateSpot>().URLID=urlid+vid;


        
        gcube.GetComponent<GenerateSpot>().setTheType(2);
        
        Debug.Log("The new Cube's URLID is: " + urlid);
        // gcube.GetComponent<DataSync2>().SetURLID(urlid); //setting the network urlid once right after we make the spot. But this dont work
        Debug.Log("Setting the network urlid to be: " + urlid);
        GenCubesDic.Add(urlid,gcube); //think about this: Are we adding the cube to the other players dictionaries? 
        //selectedIDUrl=urlid;  
        IDs++;

        return urlid;




    }


    
    
    private void createSpot(Vector3 pos)
    {
        Realtime.InstantiateOptions options = new Realtime.InstantiateOptions
        {
            ownedByClient = true,
            preventOwnershipTakeover = false,
            // destroyWhenOwnerOrLastClientLeaves = true,
            useInstance = null // or specify the Realtime instance if necessary
        };
        GameObject gcube = Realtime.Instantiate("GenrateSpot2.1", pos, Quaternion.identity, options); //this might be obsolete trying new options feature
        gcube.GetComponent<GenerateSpot>().id=IDs;
        string urlid=TimestampGenerator.GetTimestamp(); 
        gcube.GetComponent<GenerateSpot>().URLID=urlid;
        Debug.Log("The new Cube's URLID is: " + urlid);
        // gcube.GetComponent<DataSync2>().SetURLID(urlid); //setting the network urlid once right after we make the spot. But this dont work
        Debug.Log("Setting the network urlid to be: " + urlid);
        GenCubesDic.Add(urlid,gcube); //think about this: Are we adding the cube to the other players dictionaries? 
        selectedIDUrl=urlid;  
        IDs++;
    }
    public GameObject createSavedSpot(Vector3 pos, Quaternion rot, Vector3 scale, string urlid) // same as create spot function but includes scaling and rotating
    {
        Debug.Log("Creating Saved spot at " + pos);
        GameObject gcube = Realtime.Instantiate("GenrateSpot2.1", pos, rot);
        gcube.transform.localScale = scale;
        gcube.GetComponent<GenerateSpot>().id=IDs;
        gcube.GetComponent<GenerateSpot>().URLID=urlid;
        // gcube.GetComponent<DataSync2>().SetURLID(urlid); //setting the network urlid once right after we make the spot. But this dont work
        GenCubesDic.Add(urlid,gcube);
        selectedIDUrl=urlid;
        Debug.Log("Setting the new spots SelectedIDUrl to be: " + selectedIDUrl);
        IDs++;
        return gcube; 

    }

   public void RemoveSpot(string urlid){
       Destroy(GenCubesDic[urlid].gameObject);
       GenCubesDic.Remove(urlid);
     
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
    
    public void promtGenerateModel(int id,string promt,string URLID){
        Debug.Log("Checkpoint 2");

        OscMessage message = new OscMessage()
        {
            address = "/PromtGenerateModel"
        };
        Debug.Log("Checkpoint 3");

        message.values.Add(id);
        message.values.Add(promt);
        message.values.Add(URLID);
        message.values.Add("genrated");
        Debug.Log("Checkpoint 4");
        osc.Send(message);
        Debug.Log("Checkpoint 5");


    }
    // public void ReciveFromOSC(OscMessage oscMessage){
    //     switch(oscMessage.address){
    //         case "/GenrateModel":
            
    //             // debugText.text=oscMessage.values
    //             // modelDownloader.AddTask(
    //             //     CreateModelInfoFromOSC(oscMessage,
    //             //     GenCubes[oscMessage.GetInt(0)].GetComponent<GenerateSpot>().TargetObject)
    //             //     );

    //             //     GenCubes[oscMessage.GetInt(0)].GetComponent<GenerateSpot>().PreViewQuad.SetActive(false);
    //             //     GenCubes[oscMessage.GetInt(0)].GetComponent<GenerateSpot>().loadingIcon.SetActive(false);
    //             //     modelDownloader.startDownload();
    //             break;

    //         case "/GenrateBackGround":
    //             // modelDownloader.AddTask(
    //             // CreateModelInfoFromOSC(oscMessage,
    //             // GenCubes[oscMessage.GetInt(0)].GetComponent<GenerateSpot>().BackGroundOnly)
    //             // );
    //             break;

    //         case "/GenratObjOnly":

    //             // modelDownloader.AddTask(
    //             // CreateModelInfoFromOSC(oscMessage,
    //             // GenCubes[oscMessage.GetInt(0)].GetComponent<GenerateSpot>().TargetObject)
    //             // );

    //             break;
            
    //     }
    // }
    public void sendStop(){
        
        OscMessage message = new OscMessage()
        {
            address = "/stopProcess"
        };
    

        osc.Send(message);

    }
    
    
    
    
    
}
