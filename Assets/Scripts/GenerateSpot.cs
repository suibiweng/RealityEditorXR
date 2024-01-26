using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using RealityEditor;
using UnityEngine.UI;
using  DimBoxes;

public class GenerateSpot : MonoBehaviour
{

    public int id;
    public string downloadURL="http://34.106.250.143/upload/";

    public string URLID;


    //Manager
    RealityEditorManager manager;
    VoiceToPrompt voiceToPrompt;




   // Transform Control
   public Vector3 pos;
   public Vector3 size;
   public Vector3 TransRotation;

   public bool isselsected=false;

   public GameObject loadingIcon;

  public string Prompt;


  public TMP_Text previewText;

  



 GrabObject externalController = null;




//Control Interface
public TMP_Text PromtText;
public Text LitseningText;
 // UI panel;

public GameObject UiMenu; 
public GameObject [] controlPanels;
public Toggle [] PanelsToggles;
public GameObject VoicePanel;




// LoadObject
   public GameObject TargetObject; 
   public GameObject BackGroundOnly;
   public GameObject Contianier;

   public recordData RecordData;

   public GameObject PreViewQuad;
   public BoundBox Outlinebox;
   ModelDownloader modelDownloader;

   public int CountID;





    public GenerateType type;

    // Start is called before the first frame update
    void Start()
    {
    manager=FindObjectOfType<RealityEditorManager>();
    externalController=GetComponent<GrabObject>();
    modelDownloader=FindObjectOfType<ModelDownloader>();

        if (externalController)
        {
            externalController.GrabbedObjectDelegate += Grab;
            externalController.ReleasedObjectDelegate += Release;
        }

        
        ControlPanels();
    }

    public void OnSelect(){

        manager.updateSelected(id,URLID);
        isselsected=true;



    }



    public void Grab(OVRInput.Controller grabHand)
    {
        manager.updateSelected(id,URLID);
        isselsected=true;

      //  Outlinebox.line_renderer=true;
    }

    public void Release()
    {

   // Outlinebox.line_renderer=false;
        
    }







    public void ControlPanels(){
        for(int i=0;i<PanelsToggles.Length;i++){

            controlPanels[i].SetActive(PanelsToggles[i].isOn);
            



        }

        if(controlPanels[0].activeInHierarchy==true || controlPanels[1].activeInHierarchy==true){



            VoicePanel.SetActive(true);
        }else{

            VoicePanel.SetActive(false);
        }

    }

public void onLitsenClick(){
    Prompt=LitseningText.text;

}


 bool promptGenrated=false;


    // Update is called once per frame
    void Update()
    {

        

    


        updateTheTransform();
        
        if(isselsected)  PromtText.text=Prompt;
      
        if(Input.GetKeyDown(KeyCode.Space)){

            DebugLoadModel();

        }

        if(Input.GetKeyDown(KeyCode.S)){

            ScanObject();
        }



        //Prompt 


        if(URLChecker.CheckURLConnection(downloadURL+URLID+".zip") && !promptGenrated) {
            promptGenrated=true;
            downloadModel(downloadURL+URLID+".zip");

        }
  


    



        
    }

    public void updateTheTransform(){
        //192.169.0.213
         TargetObject.transform.localScale=Contianier.transform.localScale;
        // BackGroundOnly.transform.localScale=Contianier.transform.localScale;






    }

    public void InturuptProcess(){
        manager.sendStop();


    }

    


    public void GenrateModel(){
        manager.promtGenerateModel(id,Prompt,URLID);
        PreViewQuad.SetActive(true);
        loadingIcon.SetActive(true);
        UiMenu.SetActive(false);

    }

    void InstructNerf(string promt){



    }

    bool StartScanning=false;
    


    public TMP_Text Text_Scanning_Btn; 
    public TMP_Text Text_Instruction; 

    public void ScanObject(){

        if(!StartScanning){
            StartScanning=true;

            RecordData.StartRecording();
            Text_Scanning_Btn.text="Stop to Scanning";



        }else{
             StartScanning=false;


              Text_Scanning_Btn.text="Start to Scanning";

              RecordData.StopRecording();





        }


    }

    public void DebugLoadModel(){
    

        modelDownloader.LoadModel(        
            new ModelIformation(){
            ModelURL="http://34.106.250.143/upload/model.zip",
            gameobjectWarp=TargetObject

        }  );


    }

    public void downloadModel(string url){

                modelDownloader.AddTask(
                    new ModelIformation(){
                    ModelURL= url,
                    gameobjectWarp=TargetObject
                    }
                );
                PreViewQuad.SetActive(false);
                loadingIcon.SetActive(false);
                modelDownloader.startDownload();
    }



    public void Remove(){

        manager.RemoveSpot(id);


    }



}
