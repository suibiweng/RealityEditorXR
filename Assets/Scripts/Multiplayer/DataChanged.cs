using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class DataChanged : MonoBehaviour {
    [SerializeField]
    private TextMeshPro _prompt, URLIDText;
    private DataSync _DataSync;

    private void Awake() {
        _DataSync = GetComponent<DataSync>();
    }

    private void Update() {
        // setting the values in the data store to the current UI text. Not very efficient. 
        _DataSync.Setprompt(_prompt.text);
        _DataSync.SetURLID(URLIDText.text);
        
            
    }
}