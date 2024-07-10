// using System;
// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
// using Normal.Realtime;
// using TMPro;
//
// public class DataSync : RealtimeComponent<DataSyncModel>
// {
//     public TMP_Text promptText, UrlText; 
//     private GenerateSpot2 spot;
//
//     private void Awake()
//     {
//         spot = GetComponent<GenerateSpot2>(); 
//     }
//
//     protected override void OnRealtimeModelReplaced(DataSyncModel previousModel, DataSyncModel currentModel) {
//         if (previousModel != null) {
//             // Unregister from events
//             previousModel.PromptDataDidChange -= PromptDidChange;
//             previousModel.URLIDDidChange -= URLIDDidChange;  
//             previousModel.TestNumberDidChange -= TestNumberDidChange;
//
//         }
//         
//         if (currentModel != null) {
//             // If this is a model that has no data set on it, populate it with filler.
//             if (currentModel.isFreshModel)
//                 currentModel.PromptData = "PROMPT NOT SET";
//                 currentModel.URLID = "URLID NOT SET";
//                 currentModel.TestNumber = "NO NUMBER"; 
//             // Update the UI to match the new model
//             UpdateTextPrompt();
//             UpdateTextURLID();
//             UpdateTestNumber(); 
//
//             // Register for events so we'll know if the data changes later
//             currentModel.PromptDataDidChange += PromptDidChange;
//             currentModel.URLIDDidChange += URLIDDidChange;
//             currentModel.TestNumberDidChange += TestNumberDidChange;
//
//         }
//     }
//
//     private void PromptDidChange(DataSyncModel model, string prompt) {
//         UpdateTextPrompt();
//     }
//     private void URLIDDidChange(DataSyncModel model, string URLID) {
//         UpdateTextURLID();
//     }
//     private void TestNumberDidChange(DataSyncModel model, string TestNumber) {
//         UpdateTestNumber();
//     }
//     
//     private void UpdateTextPrompt() {
//         promptText.text = model.PromptData;
//     }
//     private void UpdateTextURLID() {
//         Debug.Log("setting the urlid to " + model.URLID);
//         // UrlText.text = model.URLID; 
//         // spot.ChangeID(model.URLID);
//         // spot.URLIDText.text = model.URLID; 
//         spot.URLID = model.URLID; 
//     }
//     private void UpdateTestNumber() {
//         spot.DataSyncTestNumber = model.TestNumber;
//     }
//
//     public void Setprompt(string prompt) {
//         // This will fire the PromptDidChange event on the model, which will update the renderer for both the local player and all remote players.
//         model.PromptData = prompt;
//     }
//     public void SetURLID(string URLID) {
//         // This will fire the UpdateTextURLID event on the model
//         model.URLID = URLID;
//     }
//     public void SetTestNumber(string TestNumber) {
//         // This will fire the UpdateTextURLID event on the model
//         model.TestNumber = TestNumber;
//     }
// }