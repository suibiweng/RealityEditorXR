using System.Collections;
using System.Collections.Generic;
using UnityEngine.Networking;
using System;
using UnityEngine;
using TMPro;
using RealityEditor;
using UnityEngine.UI;
using  DimBoxes;
using Normal.Realtime;
using Oculus.Interaction;
using Unity.VisualScripting;


public class GenerateSpot : MonoBehaviour
{

    public int id;
    public string downloadURL = "http://34.106.250.143/upload/";

    public string URLID;


    //Manager
    RealityEditorManager manager;
    VoiceToPrompt voiceToPrompt;

    // Transform Control
    public Vector3 pos;
    public Vector3 size;
    public Vector3 TransRotation;

    public bool isselsected = false;

    public GameObject loadingIcon;

    public string Prompt;


    public TMP_Text previewText;
    public TMP_Text URLIDText;

    

    GrabObject externalController = null;




    //Control Interface
    public TMP_Text PromtText;
    public Text LitseningText;
    // UI panel;

    public GameObject UiMenu;
    public GameObject[] controlPanels;
    public Toggle[] PanelsToggles;
    public GameObject VoicePanel;

    public GameObject AimStart;




    // LoadObject
    public GameObject TargetObject;
    public GameObject BackGroundOnly;
    public GameObject Contianier;

    public recordData RecordData;

    public GameObject PreViewQuad;
    public BoundBox Outlinebox;
    ModelDownloader modelDownloader;

    public int CountID;
    bool promptGenrated = false;
    bool BakgrondGen = false ,TargetGen =false,InstructGen=false;

    public Grabbable _grabbable;

    
    public GenerateType SpotType;

    public RealtimeTransform _realtimeTransform;
    public RealtimeView _realtimeView; 
    
    // Start is called before the first frame update
    public MovePlayer moveplayer;

    //public bool scanning=false;


    public Shader VertexColor;

    
    void Start()
    {
        manager = FindObjectOfType<RealityEditorManager>();
        externalController = GetComponent<GrabObject>();
        modelDownloader = FindObjectOfType<ModelDownloader>();
        _realtimeTransform = GetComponent<RealtimeTransform>();
        _realtimeView = GetComponent<RealtimeView>();
        moveplayer = FindObjectOfType<MovePlayer>();
        _grabbable= GetComponent<Grabbable>();

        StartCoroutine(CheckURLPeriodically(downloadURL + URLID + "_generated.zip"));
        StartCoroutine(CheckURLPeriodically(downloadURL + URLID + "_scaned_background.zip"));
        StartCoroutine(CheckURLPeriodically(downloadURL + URLID + "_scaned_target.zip"));
        StartCoroutine(CheckURLPeriodically(downloadURL + URLID + "_scaned_Instruction.zip"));


        RecordData=GetComponent<recordData>();
        _grabbable.WhenPointerEventRaised += HandlePointerEventRaised; 

       
         // //   externalController.GrabbedObjectDelegate += Grab;
         //    externalController.ReleasedObjectDelegate += Release;

        loadingIcon.SetActive(false);
        


        ControlPanels();



    }


    public void setTheType(int select){

        switch(select)
        {
            case 0:
                SpotType=GenerateType.Add;

                initAdd();

            break;

            case 1:
                 SpotType=GenerateType.Reconstruction;
                 initReconstruction();
            break;

        }
        

    }


    void initAdd(){

        StartCoroutine(CheckURLPeriodically(downloadURL + URLID + "_generated.zip"));







    }

    void initReconstruction(){

        StartCoroutine(CheckURLPeriodically(downloadURL + URLID + "_scaned_background.zip"));
        StartCoroutine(CheckURLPeriodically(downloadURL + URLID + "_scaned_target.zip"));
        StartCoroutine(CheckURLPeriodically(downloadURL + URLID + "_scaned_Instruction.zip"));

        //openTheScanningPanel



        







    }
    
    
    private void HandlePointerEventRaised(PointerEvent evt)
    {
        switch (evt.Type)
        {
            case PointerEventType.Select:
                  OnSelect();

               // URLIDText.text = "should be requesting the transform and view in grab";
                
                break;
            case PointerEventType.Unselect:
             
               // URLIDText.text = "REleeeeeese";
                break;
        }
    }
    
    
    
    

    public void OnSelect()
    {

        manager.updateSelected(id, URLID);
        isselsected = true;
        Debug.Log("should be requesting the transform and view in Select");
     //   moveplayer.spot = this.gameObject;
        
        // _realtimeTransform.RequestOwnership();
        // _realtimeView.RequestOwnershipOfSelfAndChildren();

    }



    public void Grab(OVRInput.Controller grabHand)
    {
        manager.updateSelected(id, URLID);
        isselsected = true;
        Debug.Log("should be requesting the transform and view in grab");
        //URLIDText.text = "should be requesting the transform and view in grab";
        // _realtimeTransform.RequestOwnership();
        // _realtimeView.RequestOwnershipOfSelfAndChildren();
        //  Outlinebox.line_renderer=true;
    }

    public void Release()
    {
        Debug.Log("should be releasing the cube");

       // URLIDText.text = "should be releasing the cube";
        // Outlinebox.line_renderer=false;

    }
    public void Copy(){
        GameObject ACopy=Instantiate(this.gameObject);
    

    }

    public bool setMaterialforGenrated(Transform obj){

        if(obj.childCount==0){

             return false;

        }else{
            Renderer renderer;

            renderer=obj.gameObject.GetComponentInChildren<Renderer>();

            renderer.materials[0].shader=VertexColor;









        return true;


        }
           
        

        
    }







    public void ControlPanels()
    {
        for (int i = 0; i < PanelsToggles.Length; i++) {

            controlPanels[i].SetActive(PanelsToggles[i].isOn);




        }

        if (controlPanels[0].activeInHierarchy == true || controlPanels[1].activeInHierarchy == true) {

            //AimStart.GetComponent<MeshRenderer>().enabled=false;
            VoicePanel.SetActive(true);
        } else {

            RecordData.campoints.Seton(true);
            VoicePanel.SetActive(false);
            //AimStart.GetComponent<MeshRenderer>().enabled=true;
           

        }

    }

    public void onLitsenClick()
    {
        Prompt = LitseningText.text;

    }


 


    // Update is called once per frame
    void Update()
    {
        
        

        updateTheTransform();


       if( SpotType==GenerateType.Add)
        setMaterialforGenrated(TargetObject.transform);

        if (isselsected) PromtText.text = Prompt;

        if (Input.GetKeyDown(KeyCode.Space)) {

            DebugLoadModel();
            
        }



        Text_Instruction.text=RecordData.instruction;






    }

    public void updateTheTransform()
    {
 






    }

    public void InturuptProcess()
    {
        manager.sendStop();


    }




    public void GenrateModel()
    {
        manager.promtGenerateModel(id, Prompt, URLID);
        URLIDText.text = URLID;
        // PreViewQuad.SetActive(true);
        loadingIcon.SetActive(true);
        UiMenu.SetActive(false);
        //StartCoroutine(CheckURLPeriodically(downloadURL + URLID + "genrated.zip"));

    }

    void ModifyModelinstruction(string Prompt)
    {
        manager.InstructModify(id,Prompt,URLID);
        URLIDText.text = URLID;
        loadingIcon.SetActive(true);
        UiMenu.SetActive(false);

    }

    bool StartScanning = false;
    public TMP_Text Text_Scanning_Btn;
    public TMP_Text Text_Instruction;

    public void ScanObject()
    {

        if (!StartScanning) {
            StartScanning = true;
            RecordData.StartRecording();
            Text_Scanning_Btn.text = "Stop Scanning";

        } else {
            StartScanning = false;
            Text_Scanning_Btn.text = "Start Scanning";
            RecordData.StopRecording();

        }


    }





    public void DebugLoadModel()
    {
        modelDownloader.LoadModel(
            new ModelIformation() {
                ModelURL = "http://127.0.0.1:8000/20240308003439_generated.zip",
                gameobjectWarp = TargetObject

            });
        modelDownloader.startDownload();
    }

    public void downloadModel(string url,GameObject warp)
    {
        modelDownloader.AddTask(
            new ModelIformation() {
                ModelURL = url,
                gameobjectWarp = warp
            }
        );
        PreViewQuad.SetActive(false);
        loadingIcon.SetActive(false);
        modelDownloader.startDownload();
    }


  //  public string urlToCheck = "https://www.example.com";
    public float checkInterval = 5f; // Check the URL every 5 seconds
    public event Action<bool> OnURLResponse = delegate { };

  


    IEnumerator CheckURLPeriodically(string urltocheck)
    {
        while (true) {
            yield return CheckURL(urltocheck);
            yield return new WaitForSeconds(checkInterval);
        }
    }

    string ShapeEDownloadURL,BackGroundURL,TargetURL,instructionURL;
    IEnumerator CheckURL(string url)
    {
        UnityWebRequest www = UnityWebRequest.Get(url);
        UnityWebRequestAsyncOperation requestAsyncOperation = www.SendWebRequest();

        while (!requestAsyncOperation.isDone) {
            yield return null;
        }

        if (www.result == UnityWebRequest.Result.Success) {
            Debug.Log("URL is responding!");


             if(url.Contains("scaned")){
                if(url.Contains("target")){
                    TargetURL=url;
                      
                }

                if(url.Contains("background")){

                       BackGroundURL=url;
                }

                if(url.Contains("Instruction")){

                    instructionURL=url;

                }

            }else if(url.Contains("generated")){


               ShapeEDownloadURL=url;


            } 
        





            OnURLResponse(true);
        } else {
          //  Debug.LogError("Error checking URL: " + www.error);
            OnURLResponse(false);
        }

        www.Dispose();
    }


    private void OnEnable()
    {
        OnURLResponse += HandleURLResponse;
    }

    private void OnDisable()
    {
        OnURLResponse -= HandleURLResponse;
        _grabbable.WhenPointerEventRaised -= HandlePointerEventRaised;
    }




    private void HandleURLResponse(bool isResponding)
    {

        if (isResponding && !promptGenrated) { //for shape E
            promptGenrated = true;
            downloadModel(ShapeEDownloadURL,TargetObject);
        } 


        if (isResponding && !BakgrondGen) { //for shape E
            BakgrondGen = true;
            downloadModel(TargetURL,TargetObject);
        } 


        
        if (isResponding && !TargetGen) { //for shape E
            TargetGen = true;
            downloadModel(BackGroundURL,BackGroundOnly);
        } 

        
        if (isResponding && !InstructGen) { //for shape E
            InstructGen = true;
            downloadModel(instructionURL,TargetObject);
        } 


    }







}
