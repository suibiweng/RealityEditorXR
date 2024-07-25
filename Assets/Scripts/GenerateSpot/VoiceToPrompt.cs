using Meta.WitAi;
using Meta.WitAi.Requests;
using UnityEngine;
using UnityEngine.UI;

public class VoiceToPrompt : MonoBehaviour
{
    public RealityEditorManager manager;

    public string promptStr;


    private VoiceServiceRequest _request;
    private bool _isActive = false;

    
    bool _deactivateAndAbort = false;
        bool _activateImmediately = false;



    [SerializeField] private VoiceService _voiceService;
    // Start is called before the first frame update
     private void Awake()
    {
        //  _voiceService = FindObjectOfType<VoiceService>();
         // manager= FindObjectOfType<RealityEditorManager>();


    }


      public void OnClick()
        {
            if (!_isActive)
            {
                Activate();
            }
            else
            {
                Deactivate();
            }
        }




    private void OnEnable()
        {
            if (_voiceService != null)
            {
                
                    _voiceService.VoiceEvents.OnComplete.AddListener(OnComplete);
                       _voiceService.VoiceEvents.OnFullTranscription.AddListener(OnTranscriptionChange);
                
            }
        }
        // Remove service delegates
    private void OnDisable()
        {
           if (_voiceService != null)
            {
                
                    _voiceService.VoiceEvents.OnComplete.RemoveListener(OnComplete);

                        _voiceService.VoiceEvents.OnFullTranscription.RemoveListener(OnTranscriptionChange);
                
            }
 
        }
    private void OnComplete(VoiceServiceRequest request)
    {

      //  promptStr=_voiceService.
      manager.setPrompt(promptStr);
      



    }



     private void OnTranscriptionChange(string text)
    {
        promptStr=text;
        
    }




            public void Activate()
        {
            if (!_activateImmediately)
            {
                _request = _voiceService.Activate(GetRequestEvents());
            }
            else
            {
                _request = _voiceService.ActivateImmediately(GetRequestEvents());
            }
        }

        // Deactivate depending on settings
        public void Deactivate()
        {
            if (!_deactivateAndAbort)
            {
                _request.DeactivateAudio();
            }
            else
            {
                _request.Cancel();
            }
        }


            private VoiceServiceRequestEvents GetRequestEvents()
        {
            VoiceServiceRequestEvents events = new VoiceServiceRequestEvents();
            events.OnInit.AddListener(OnInit);
            events.OnComplete.AddListener(OnCompleteQuest);
            return events;
        }
        // Request initialized
        private void OnInit(VoiceServiceRequest request)
        {
            _isActive = true;
            RefreshActive();
        }
        // Request completed
        private void OnCompleteQuest(VoiceServiceRequest request)
        {
            _isActive = false;
            RefreshActive();
        }

        // Refresh active text
        private void RefreshActive()
        {
           /* if (_buttonLabel != null)
            {
                _buttonLabel.text = _isActive ? _deactivateText : _activateText;
            }*/
        }

}
