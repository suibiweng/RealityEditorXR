using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class DataChanged : MonoBehaviour {
    [SerializeField]
    private TextMeshPro _prompt, URLIDText;
    // private string _previousPrompt;
    private DataSync _DataSync;

    private void Awake() {
        // Get a reference to the color sync component
        _DataSync = GetComponent<DataSync>();
    }

    private void Update() {
        // If the string has changed, call Setprompt on the color sync component.
        _DataSync.Setprompt(_prompt.text);
        _DataSync.SetURLID(URLIDText.text);
        
            
    }
}