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

    public Grabbable _grabbable;

    
    public GenerateType type;

    public RealtimeTransform _realtimeTransform;
    public RealtimeView _realtimeView; 
    
    // Start is called before the first frame update
    public MovePlayer moveplayer;
    
    void Start()
    {
        manager = FindObjectOfType<RealityEditorManager>();
        externalController = GetComponent<GrabObject>();
        modelDownloader = FindObjectOfType<ModelDownloader>();
        _realtimeTransform = GetComponent<RealtimeTransform>();
        _realtimeView = GetComponent<RealtimeView>();
        moveplayer = FindObjectOfType<MovePlayer>();
        _grabbable= GetComponent<Grabbable>();

                   StartCoroutine(CheckURLPeriodically());
        _grabbable.WhenPointerEventRaised += HandlePointerEventRaised;

       
         // //   externalController.GrabbedObjectDelegate += Grab;
         //    externalController.ReleasedObjectDelegate += Release;
        


        ControlPanels();
    }
    
    
    private void HandlePointerEventRaised(PointerEvent evt)
    {
        switch (evt.Type)
        {
            case PointerEventType.Select:

                URLIDText.text = "should be requesting the transform and view in grab";
                
                break;
            case PointerEventType.Unselect:
             
                URLIDText.text = "REleeeeeese";
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
        URLIDText.text = "should be requesting the transform and view in grab";

        // _realtimeTransform.RequestOwnership();
        // _realtimeView.RequestOwnershipOfSelfAndChildren();
        
        //  Outlinebox.line_renderer=true;
    }

    public void Release()
    {
        Debug.Log("should be releasing the cube");

        URLIDText.text = "should be releasing the cube";
        // Outlinebox.line_renderer=false;

    }







    public void ControlPanels()
    {
        for (int i = 0; i < PanelsToggles.Length; i++) {

            controlPanels[i].SetActive(PanelsToggles[i].isOn);




        }

        if (controlPanels[0].activeInHierarchy == true || controlPanels[1].activeInHierarchy == true) {



            VoicePanel.SetActive(true);
        } else {

            VoicePanel.SetActive(false);
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

        if (isselsected) PromtText.text = Prompt;

        if (Input.GetKeyDown(KeyCode.Space)) {

            DebugLoadModel();
            
        }

        if (Input.GetKeyDown(KeyCode.S)) {

            ScanObject();
        }



        //Prompt 


        // if(URLChecker.CheckURLConnection(downloadURL+URLID+".zip") && !promptGenrated) {
        //     promptGenrated=true;
        //     downloadModel(downloadURL+URLID+".zip");
        //
        // }
        //







    }

    public void updateTheTransform()
    {
        //192.169.0.213
        TargetObject.transform.localScale = Contianier.transform.localScale;
        // BackGroundOnly.transform.localScale=Contianier.transform.localScale;






    }

    public void InturuptProcess()
    {
        manager.sendStop();


    }




    public void GenrateModel()
    {
        manager.promtGenerateModel(id, Prompt, URLID);
        //URLIDText.text = URLID;
        PreViewQuad.SetActive(true);
        loadingIcon.SetActive(true);
        UiMenu.SetActive(false);

    }

    void InstructNerf(string promt)
    {



    }

    bool StartScanning = false;
    public TMP_Text Text_Scanning_Btn;
    public TMP_Text Text_Instruction;

    public void ScanObject()
    {

        if (!StartScanning) {
            StartScanning = true;

            RecordData.StartRecording();
            Text_Scanning_Btn.text = "Stop to Scanning";



        } else {
            StartScanning = false;


            Text_Scanning_Btn.text = "Start to Scanning";

            RecordData.StopRecording();





        }


    }

    public void DebugLoadModel()
    {


        modelDownloader.LoadModel(
            new ModelIformation() {
                ModelURL = "http://34.106.250.143/upload/model.zip",
                gameobjectWarp = TargetObject

            });


    }

    public void downloadModel(string url)
    {

        modelDownloader.AddTask(
            new ModelIformation() {
                ModelURL = url,
                gameobjectWarp = TargetObject
            }
        );
        PreViewQuad.SetActive(false);
        loadingIcon.SetActive(false);
        modelDownloader.startDownload();
    }



    public void Remove()
    {

        manager.RemoveSpot(id);


    }


  //  public string urlToCheck = "https://www.example.com";
    public float checkInterval = 5f; // Check the URL every 5 seconds
    public event Action<bool> OnURLResponse = delegate { };


    IEnumerator CheckURLPeriodically()
    {
        while (!promptGenrated) {
            yield return CheckURL();
            yield return new WaitForSeconds(checkInterval);
        }
    }

    IEnumerator CheckURL()
    {
        UnityWebRequest www = UnityWebRequest.Get(downloadURL + URLID + ".zip");
        UnityWebRequestAsyncOperation requestAsyncOperation = www.SendWebRequest();

        while (!requestAsyncOperation.isDone) {
            yield return null;
        }

        if (www.result == UnityWebRequest.Result.Success) {
            Debug.Log("URL is responding!");
            OnURLResponse(true);
        } else {
            Debug.LogError("Error checking URL: " + www.error);
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
    }

    private void HandleURLResponse(bool isResponding)
    {
        if (isResponding && !promptGenrated) {
            promptGenrated = true;

            downloadModel(downloadURL + URLID + ".zip");
            // Call your download function when the URL is responding
            // DownloadModel();
        } 
        
        else 
        
        {


        }
    }







}
