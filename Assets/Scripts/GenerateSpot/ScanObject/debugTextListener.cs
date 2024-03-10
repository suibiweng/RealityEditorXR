using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class debugTextListener : MonoBehaviour
{
    private string msgString = "";
    void OnEnable()
    {
        Application.logMessageReceived += LogMessage;
    }
    void OnDisable()
    {
        Application.logMessageReceived -= LogMessage;
    }
    public void LogMessage(string message, string stackTrace, LogType type)
    {
        GetComponent<TMP_Text>().SetText(message);
    }
}
