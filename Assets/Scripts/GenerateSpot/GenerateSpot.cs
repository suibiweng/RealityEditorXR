using System.Collections;
using System.Collections.Generic;
using UnityEngine.Networking;
using System;
using UnityEngine;
using TMPro;
using RealityEditor;
using UnityEngine.UI;
using DimBoxes;
using Normal.Realtime;
using Oculus.Interaction;



public class GenerateSpot : MonoBehaviour
{

    public bool isAcopy = false;

    public int id;
    public string downloadURL = "http://34.106.250.143/upload/";

    public string URLID;


    //Manager
    public RealityEditorManager manager;
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
    public GameObject EditMenu;
    public GameObject ScanningPanel;

    public GameObject DownloadPanel;
    public GameObject selectMenu;
    public GameObject AimStart;

    public GameObject EraseBtn,ColorBtn;




    // LoadObject
    public GameObject TargetObject;
    public GameObject BackGroundOnly;
    public GameObject Contianier;

    public recordData RecordData;

    
    public Projector erasingProjector;


    public BoundBox Outlinebox;
    ModelDownloader modelDownloader;

    public int CountID;
    bool promptGenrated = false;
    bool  InstructGen = false,Inpainted=false;

    public Grabbable _grabbable;


    public GenerateType SpotType;

    public RealtimeTransform _realtimeTransform;
    public RealtimeView _realtimeView;

    // Start is called before the first frame update
    public MovePlayer moveplayer;

    //public bool scanning=false;


    public Shader VertexColor,UnlitShader;

    public Material TargetMaterial;
    public Material ProjectorMeterial;

    public Texture WhiteTex,OriginTex;






    void Start()
    {
        manager = FindObjectOfType<RealityEditorManager>();
        externalController = GetComponent<GrabObject>();
        modelDownloader = FindObjectOfType<ModelDownloader>();
        _realtimeTransform = GetComponent<RealtimeTransform>();
        _realtimeView = GetComponent<RealtimeView>();
        moveplayer = FindObjectOfType<MovePlayer>();
        _grabbable = GetComponent<Grabbable>();
        downloadURL=manager.ServerURL;


// URLID=TimestampGenerator.GetTimestamp();

        StartCoroutine(CheckURLPeriodically(downloadURL + URLID + "_generated.zip"));
    
        StartCoroutine(CheckURLPeriodically(downloadURL + URLID + "_Instruction.zip"));


        RecordData = GetComponent<recordData>();


        _grabbable.WhenPointerEventRaised += HandlePointerEventRaised;


        // //   externalController.GrabbedObjectDelegate += Grab;
        //    externalController.ReleasedObjectDelegate += Release;




        loadingIcon.SetActive(false);


        if (selectMenu != null) selectMenu.SetActive(true);
        //  ControlPanels();

        if (isAcopy)
        {
            selectMenu.SetActive(false);

            _realtimeTransform.enabled = false;
            _realtimeView.enabled = false;

        }



    }


    public void setTheType(int select)
    {

        switch (select)
        {
            case 0:
                SpotType = GenerateType.Add;
                initAdd();

                break;

            case 1:
                SpotType = GenerateType.Reconstruction;
                initReconstruction();
                break;

        }


    }


    void initAdd()
    {

        StartCoroutine(CheckURLPeriodically(downloadURL + URLID + "_generated.zip"));
        isMaterialChanging = false;
        VoicePanel.SetActive(true);





    }

    void initReconstruction()
    {


        ScanningPanel.SetActive(true);

    }


    void OpenEditMenu()
    {
        EditMenu.SetActive(true);


    }

    void CloseEditMenu()
    {
        EditMenu.SetActive(false);
    }

  bool isErasing=false;
    public void Erasing(){

        isErasing=!isErasing;

        erasingProjector.gameObject.SetActive(isErasing);


        if(isErasing){

             TargetMaterial.SetTexture("_MainTex", WhiteTex);



        }else{

        TargetMaterial.SetTexture("_MainTex", OriginTex);

        }
        

        





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
       

        if (SpotType != GenerateType.None)
        {

            if (TargetObject.transform.childCount != 0) OpenEditMenu();

        }

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
    public void Copy()
    {
        GameObject ACopy = Instantiate(this.gameObject);
        ACopy.GetComponent<GenerateSpot>().isAcopy = true;



    }

    public bool setMaterialforGenrated(Transform obj,Shader shader)
    {

        if (obj.childCount == 0)
        {

            return false;

        }
        else
        {
            Renderer renderer;

            renderer = obj.gameObject.GetComponentInChildren<Renderer>();

            renderer.materials[0].shader = shader;


           
            TargetMaterial=renderer.materials[0];
            if(SpotType!=GenerateType.Add)
                OriginTex=TargetMaterial.GetTexture("_MainTex");









            return true;


        }




    }







    public void ControlPanels()
    {
        for (int i = 0; i < PanelsToggles.Length; i++)
        {

            controlPanels[i].SetActive(PanelsToggles[i].isOn);




        }

        if (controlPanels[0].activeInHierarchy == true || controlPanels[1].activeInHierarchy == true)
        {

            //AimStart.GetComponent<MeshRenderer>().enabled=false;
            VoicePanel.SetActive(true);
        }
        else
        {

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
        if (isAcopy)
        {
            UiMenu.SetActive(false);
            return;

        }



        updateTheTransform();

        switch (SpotType)
        {

            case GenerateType.Add:
                setMaterialforGenrated(TargetObject.transform,VertexColor);
                EraseBtn.SetActive(false);
                ColorBtn.SetActive(true);

                break;

            case GenerateType.Instruction:
                setMaterialforGenrated(TargetObject.transform,UnlitShader);
                TargetObject.transform.localEulerAngles=new Vector3(0,-90,90);
                TargetObject.transform.localScale=new Vector3(5,5,5);

            break;

            case GenerateType.Reconstruction:
                setMaterialforGenrated(TargetObject.transform,UnlitShader);
                TargetObject.transform.localEulerAngles=new Vector3(0,-90,90);
                TargetObject.transform.localScale=new Vector3(5,5,5);
                 EraseBtn.SetActive(true);
                 ColorBtn.SetActive(false);

                



                break;

            case GenerateType.None:

                CloseEditMenu();
                break;






        }




        if (isselsected) PromtText.text = Prompt;



        if (Input.GetKeyDown(KeyCode.X))
        {
            DebugGenrateModel();
            print("DebugSend");


        }


        // if (Input.GetKeyDown(KeyCode.V))
        // {



        //     DebugModifyModelinstruction();
        // }



        if (Input.GetKeyDown(KeyCode.D))
        {

            //_inpainting.jpg

             StartCoroutine(CheckURLPeriodically(downloadURL + "20240325024513_inpainting.jpg"));

        }


        if (Input.GetKeyDown(KeyCode.S))
        {

            InstructGen = false;
            StartCoroutine(CleartheObjinTarget());



        }

        Text_Instruction.text = RecordData.instruction;



    }

    public void updateTheTransform()
    {



    }

    public void InturuptProcess()
    {
        manager.sendStop();

    }

    public void materialModify()
    {
        isMaterialChanging = true;
        VoicePanel.SetActive(true);


    }





    bool isMaterialChanging;



    public void ConfirmGeneration()
    {

        if (isMaterialChanging)
        {
            ModifyModelinstruction();

        }
        else
        {
            GenrateModel();

        }
        OpenEditMenu();

    }



    void DebugModifyModelinstruction()
    {
        manager.InstructModify(id, "A Metal Apple", URLID);
        URLIDText.text = URLID;
        loadingIcon.SetActive(true);
        Prompt = "";
        InstructGen = false;
        StartCoroutine(CheckURLPeriodically(downloadURL + URLID + "_Instruction.zip"));
        StartCoroutine(CleartheObjinTarget());
        //  UiMenu.SetActive(false);

    }


    public void DebugGenrateModel()
    {
        manager.promtGenerateModel(id, "Apple", URLID);
        URLIDText.text = URLID;
        // PreViewQuad.SetActive(true);
        loadingIcon.SetActive(true);
        Prompt = "";

    }







    public void GenrateModel()
    {
        manager.promtGenerateModel(id, Prompt, URLID);
        URLIDText.text = URLID;
        // PreViewQuad.SetActive(true);
        loadingIcon.SetActive(true);
        Prompt = "";

    }

    void ModifyModelinstruction()
    {
        manager.InstructModify(id, Prompt, URLID);
        URLIDText.text = URLID;
        loadingIcon.SetActive(true);
        Prompt = "";
        InstructGen = false;
        StartCoroutine(CheckURLPeriodically(downloadURL + URLID + "_Instruction.zip"));
        StartCoroutine(CleartheObjinTarget());
        //  UiMenu.SetActive(false);

    }


    IEnumerator CleartheObjinTarget()
    {
        yield return new WaitForSeconds(1f);



        int childCount = TargetObject.transform.childCount;

        for (int i = 0; i < childCount; i++)
        {

            Destroy(TargetObject.transform.GetChild(0).gameObject);



        }


    }

    bool StartScanning = false;
    public TMP_Text Text_Scanning_Btn;
    public TMP_Text Text_Instruction;

    public void ScanObject()
    {

        if (!StartScanning)
        {
            StartScanning = true;
            RecordData.StartRecording();
            Text_Scanning_Btn.text = "Stop Scanning";

        }
        else
        {
            StartScanning = false;
            Text_Scanning_Btn.text = "Start Scanning";
            RecordData.StopRecording();

        }


    }

   public void StartToinpainting(){


         RecordData.StartInpainting();

        Inpainted=false;
         StartCoroutine(CheckURLPeriodically(downloadURL + URLID + "_inpainting.jpg"));






    }

    



    public void DebugLoadModel()
    {
        modelDownloader.LoadModel(
            new ModelIformation()
            {
                ModelURL = "http://127.0.0.1:8000/20240318170259_generated.zip",
                gameobjectWarp = TargetObject

            });
        modelDownloader.startDownload();
    }

    public void downloadModel(string url, GameObject warp)
    {
        modelDownloader.AddTask(
            new ModelIformation()
            {
                ModelURL = url,
                gameobjectWarp = warp
            }
        );

        loadingIcon.SetActive(false);
        modelDownloader.startDownload();
    }


    //  public string urlToCheck = "https://www.example.com";
    public float checkInterval = 5f; // Check the URL every 5 seconds
    public event Action<bool> OnURLResponse = delegate { };




    IEnumerator CheckURLPeriodically(string urltocheck)
    {
        yield return new WaitForSeconds(10f);
        while (true)
        {
            yield return CheckURL(urltocheck);
            yield return new WaitForSeconds(checkInterval);
        }
    }

   // string ShapeEDownloadURL, BackGroundURL, TargetURL, instructionURL;
    IEnumerator CheckURL(string url)
    {
        UnityWebRequest www = UnityWebRequest.Get(url);
        UnityWebRequestAsyncOperation requestAsyncOperation = www.SendWebRequest();

        while (!requestAsyncOperation.isDone)
        {
            yield return null;
        }

        if (www.result == UnityWebRequest.Result.Success)
        {
            Debug.Log("URL is responding!");


            if (url.Contains("Instruction"))
            {
          
                if (!InstructGen)
                { //for shape E
                    InstructGen = true;
                    downloadModel(url, TargetObject);
                }

            }

        
            if (url.Contains("generated"))
            {


                if (!promptGenrated)
                { //for shape E
                    promptGenrated = true;
                    downloadModel(url, TargetObject);
                }

            }

            if (url.Contains("inpainting")){

                if(!Inpainted)
                {
                    Inpainted=true;
                    CreateMaterialAndSetTexture(url, ProjectorMeterial);

                }

                


            }






            OnURLResponse(true);
        }
        else
        {
            //  Debug.LogError("Error checking URL: " + www.error);
            OnURLResponse(false);
        }

        www.Dispose();
    }


    private void OnEnable()
    {
        // OnURLResponse += HandleURLResponse;
    }

    private void OnDisable()
    {
        // OnURLResponse -= HandleURLResponse;
        _grabbable.WhenPointerEventRaised -= HandlePointerEventRaised;
    }





    public void Remove()
    {

        manager.RemoveSpot(URLID);


    }




   public void CreateMaterialAndSetTexture(string imageUrl,Material sourceMaterial)
    {
        // Check if the source material is assigned
        if(sourceMaterial == null)
        {
            Debug.LogError("Source material is not assigned.");
            return;
        }

        // Create a new material with the same shader as the source material
        Material newMaterial = new Material(sourceMaterial.shader);

        // Optionally copy properties from the source material to the new material
        // newMaterial.CopyPropertiesFromMaterial(sourceMaterial);

        // Start the coroutine to download and apply the texture
        StartCoroutine(DownloadImageCoroutine(imageUrl, newMaterial));
    }
    public Texture2D erasingTexture;
    private IEnumerator DownloadImageCoroutine(string imageUrl, Material material)
    {
        using (UnityWebRequest webRequest = UnityWebRequestTexture.GetTexture(imageUrl))
        {
            // Send the request
            yield return webRequest.SendWebRequest();

            if (webRequest.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError("Error downloading image: " + webRequest.error);
            }
            else
            {
                // Get the downloaded texture
                Texture2D downloadedTexture = DownloadHandlerTexture.GetContent(webRequest);
                erasingTexture=downloadedTexture;
                // Apply the texture to the provided material
                material.SetTexture("_ShadowTex",downloadedTexture);
                erasingProjector.gameObject.SetActive(true);
                erasingProjector.material=material;
                // erasingProjector.gameObject.SetActive(false);
                Debug.Log("Image applied to new material successfully.");
                loadingIcon.SetActive(false);

                DownloadPanel.SetActive(true);
            }
        }
    }

}

