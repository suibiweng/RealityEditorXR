using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class DebugTMP : MonoBehaviour
{
    private string msgString = "";
    void OnEnable() {
        Application.logMessageReceived += LogMessage;
    }

    void OnDisable() {
        Application.logMessageReceived -= LogMessage;
    }

    public void LogMessage(string message, string stackTrace, LogType type)
    {
        msgString += "\n";
        msgString += message; 
        GetComponent<TMP_Text>().SetText(msgString);
    }
}