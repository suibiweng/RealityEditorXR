using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Normal.Realtime;
using TMPro;

public class DataSync : RealtimeComponent<DataSyncModel> {
    
    public TextMeshPro PromptTextMesh, URLIDTextMesh;
    public GenerateSpot spot;
    
    protected override void OnRealtimeModelReplaced(DataSyncModel previousModel, DataSyncModel currentModel) {
        if (previousModel != null) {
            // Unregister from events
            previousModel.PromptDataDidChange -= PromptDidChange;
            previousModel.URLIDDidChange -= URLIDDidChange;
        }
        
        if (currentModel != null) {
            // If this is a model that has no data set on it, populate it with the current Text mesh pros.
            if (currentModel.isFreshModel)
                currentModel.PromptData = "_ " + PromptTextMesh.text;
                currentModel.URLID = "_ " + URLIDTextMesh.text;
            // Update the UI to match the new model
            UpdateTextPrompt();
            UpdateTextURLID(); 

            // Register for events so we'll know if the data changes later
            currentModel.PromptDataDidChange += PromptDidChange;
            currentModel.URLIDDidChange += URLIDDidChange;
        }
    }

    private void PromptDidChange(DataSyncModel model, string prompt) {
        UpdateTextPrompt();
    }
    private void URLIDDidChange(DataSyncModel model, string URLID) {
        UpdateTextURLID();
    }
    
    private void UpdateTextPrompt() {
        PromptTextMesh.text = model.PromptData;
    }
    private void UpdateTextURLID() {
        URLIDTextMesh.text = model.URLID;
        spot.URLID=model.URLID;
    }

    public void Setprompt(string prompt) {
        // This will fire the PromptDidChange event on the model, which will update the renderer for both the local player and all remote players.
        model.PromptData = prompt;
    }
    public void SetURLID(string URLID) {
        // This will fire the UpdateTextURLID event on the model
        model.URLID = URLID;
    }
}