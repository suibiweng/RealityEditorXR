using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Normal.Realtime;
using TMPro;

public class DataSync : RealtimeComponent<DataSyncModel>
{
    private GenerateSpot spot;
    private RealityEditorManager _manager2; 

    private void Awake()
    {
        spot = GetComponent<GenerateSpot>();
        _manager2 = FindObjectOfType<RealityEditorManager>(); 
    }

    protected override void OnRealtimeModelReplaced(DataSyncModel previousModel, DataSyncModel currentModel) {
        if (previousModel != null) {
            // Unregister from events
            previousModel.PromptDidChange -= PromptDidChange;
            previousModel.URLIDDidChange -= URLIDDidChange;  
            previousModel.ColorDidChange -= ColorDidChange;  


        }
        
        if (currentModel != null) {
            // If this is a model that has no data set on it, populate it with filler.
            if (currentModel.isFreshModel)
                currentModel.Prompt = "PROMPT NOT SET";
                currentModel.URLID = "URLID NOT SET";
            // Update the UI to match the new model
            UpdateTextPrompt();
            UpdateTextURLID();

            // Register for events so we'll know if the data changes later
            currentModel.PromptDidChange += PromptDidChange;
            currentModel.URLIDDidChange += URLIDDidChange;
            currentModel.ColorDidChange += ColorDidChange;


        }
    }

    private void PromptDidChange(DataSyncModel model, string prompt) {
        UpdateTextPrompt();
    }
    private void URLIDDidChange(DataSyncModel model, string URLID) {
        UpdateTextURLID();
    }
    private void ColorDidChange(DataSyncModel model, Color URLID) {
        UpdateColor();
    }
    
    private void UpdateTextPrompt() {
        Debug.Log("Setting the prompt to be " + model.Prompt);
        spot.Prompt = model.Prompt;
    }
    private void UpdateTextURLID()
    {
        Debug.Log("setting the urlid to " + model.URLID);
        spot.URLID = model.URLID;
        if (model.URLID != "URLID NOT SET")
        {
             Debug.Log("and Adding "+ model.URLID + " to the dictionary");
            _manager2.GenCubesDic.Add(model.URLID, gameObject);
        }
    }
    private void UpdateColor()
    {
       //change the color of the slider
       
    }

    public void Setprompt(string prompt) {
        // This will fire the PromptDidChange event on the model, which will update the renderer for both the local player and all remote players.
        model.Prompt = prompt;
    }
    public void SetURLID(string URLID) {
        // This will fire the UpdateTextURLID event on the model
        model.URLID = URLID;
    }
    
}