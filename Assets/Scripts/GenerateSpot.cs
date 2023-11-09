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


    //Manager
    RealityEditorManager manager;
    VoiceToPrompt voiceToPrompt;




   // Transform Control
   public Vector3 pos;
   public Vector3 size;
   public Vector3 TransRotation;

   public bool isselsected=false;

  public string Prompt;



 GrabObject externalController = null;




//Control Interface
public TMP_Text PromtText;
public Text LitseningText;
 // UI panel;
public GameObject [] controlPanels;
public Toggle [] PanelsToggles;
public GameObject VoicePanel;




// LoadObject
   public GameObject TargetObject; 
   public GameObject BackGroundOnly;
   public GameObject Contianier;

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

        manager.updateSelected(id);
        isselsected=true;



    }



    public void Grab(OVRInput.Controller grabHand)
    {
        manager.updateSelected(id);
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


    // Update is called once per frame
    void Update()
    {

    


        updateTheTransform();
        
    if(isselsected)  PromtText.text=Prompt;
      
        if(Input.GetKeyDown(KeyCode.Space)){

            DebugLoadModel();

        }


    



        
    }

    public void updateTheTransform(){
        //192.169.0.213
      //  TargetObject.transform.localScale=Contianier.transform.localScale;
       // BackGroundOnly.transform.localScale=Contianier.transform.localScale;






    }

    public void InturuptProcess(){
        manager.sendStop();


    }

    


    public void GenrateModel(){

        manager.promtGenerateModel(id,Prompt);
        PreViewQuad.SetActive(true);

    }

    void InstructNerf(string promt){



    }

    public void ScanObject(){



    }

    public void DebugLoadModel(){
    

        modelDownloader.LoadModel(        
            new ModelIformation(){
            ModelURL="http://34.106.250.143/upload/model.zip",
            gameobjectWarp=TargetObject

        }  );


    }

    public void Remove(){

        manager.RemoveSpot(id);


    }



}
