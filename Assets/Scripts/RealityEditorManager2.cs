using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RealityEditor;
using Normal.Realtime; 
using TMPro;
using TriLibCore.Dae.Schema;


public class RealityEditorManager2 : MonoBehaviour
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
    
    public GameObject sculptingMenu,scuptingBrush;
    
    void Start()
    {

        ServerURL+=":"+downloadPort+"/";
     //   GenCubes= new List<GameObject>();
        GenCubesDic=new Dictionary<string,GameObject>();
      //  IDs=GenCubes.Count;
        
    }


    public void updateSelected(int id,string IDurl)
    {
        int i = 0; 
        foreach (var idurl in GenCubesDic)
        {
            i++; 
            Debug.Log("Dictionary item " + i + " is " + idurl.Key);
        }
 
        i = 0; 
     //   GenCubes[selectedID].GetComponent<GenerateSpot>().isselsected=false;
       // GenCubes[id].GetComponent<GenerateSpot>().isselsected=true;
       Debug.Log("Using a dictionary in The manager, The key you are looking for is: " + IDurl); 
        GenCubesDic[selectedIDUrl].GetComponent<GenerateSpot2>().isselsected=false;
        GenCubesDic[selectedIDUrl].GetComponent<RealtimeTransform>().ClearOwnership(); 
        GenCubesDic[IDurl].GetComponent<GenerateSpot2>().isselsected=true;
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
    
    public void createSpot(Vector3 pos)
    {
        GameObject gcube = Realtime.Instantiate("GenrateSpot2.0", pos, Quaternion.identity);
        gcube.GetComponent<GenerateSpot2>().id=IDs;
        string urlid=TimestampGenerator.GetTimestamp();
        gcube.GetComponent<GenerateSpot2>().URLID=urlid;
        Debug.Log("Adding cube to the dictionary");
        GenCubesDic.Add(urlid,gcube);
        selectedIDUrl=urlid;
        IDs++;
    }

    public void createSavedSpot(Vector3 pos, Quaternion rot, Vector3 scale) // same as create spot function but includes scaling and rotating
    {
        Debug.Log("Creating Saved spot at " + pos);
        GameObject gcube = Realtime.Instantiate("GenrateSpot2.0", pos, rot);
        gcube.transform.localScale = scale;

        // GenCubes.Add(gcube);
        gcube.GetComponent<GenerateSpot2>().id=IDs;
        string urlid=TimestampGenerator.GetTimestamp();
        gcube.GetComponent<GenerateSpot2>().URLID=urlid;

        GenCubesDic.Add(urlid,gcube);
        selectedIDUrl=urlid;
        Debug.Log("Setting the new spots SelectedIDUrl to be: " + selectedIDUrl);
        IDs++;

    }

   public void RemoveSpot(string urlid){
       Destroy(GenCubesDic[urlid].gameObject);
       GenCubesDic.Remove(urlid);
     
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
        
    }


    public void InstructModify(int id,string promt,string urlid){
        OscMessage message = new OscMessage()
        {
            address = "/InstructModify"
        };
        message.values.Add(id);
        message.values.Add(promt);
        message.values.Add(urlid);
        
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
