using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class DebugTMP : MonoBehaviour
{
    void Update()
    {
        //OVRInput.GetLocalControllerPosition(OVRInput.Controller.RTouch);
        if (OVRInput.GetUp(OVRInput.RawButton.Start))
        {
            msgString = ""; 
            Debug.Log("Reset The Log"); 

        }
    }

    public string msgString = "";
    void OnEnable() {
        Application.logMessageReceived += LogMessage;
    }

    void OnDisable() {
        Application.logMessageReceived -= LogMessage;
    }

    public void LogMessage(string message, string stackTrace, LogType type)
    {
        string formattedMessage;
        if (type == LogType.Error || type == LogType.Exception)
        {
            formattedMessage = FormatLogMessage(message, stackTrace, type);
        }
        else
        {
            formattedMessage = $"{type}: {message}";
        }
        msgString += "\n" + formattedMessage;
        GetComponent<TMP_Text>().SetText(msgString);
    }
    string FormatLogMessage(string message, string stackTrace, LogType type)
    {
        // Extract the object name, script name, and line number from the stack trace
        string[] stackLines = stackTrace.Split('\n');
        string objectName = "Unknown Object";
        string scriptInfo = "Unknown Script";
        string lineNumber = "Unknown Line";

        if (stackLines.Length > 1)
        {
            string stackLine = stackLines[1];
            int objNameStart = stackLine.IndexOf('(');
            int objNameEnd = stackLine.IndexOf(')', objNameStart);

            if (objNameStart != -1 && objNameEnd != -1)
            {
                objectName = stackLine.Substring(objNameStart + 1, objNameEnd - objNameStart - 1);
            }

            int scriptInfoStart = stackLine.LastIndexOf(" in ") + 4;
            if (scriptInfoStart != -1)
            {
                scriptInfo = stackLine.Substring(scriptInfoStart);
                int lineNumStart = scriptInfo.LastIndexOf(":") + 1;
                if (lineNumStart != -1)
                {
                    lineNumber = scriptInfo.Substring(lineNumStart).Trim();
                    scriptInfo = scriptInfo.Substring(0, lineNumStart - 1).Trim();
                }
            }
        }

        return $"{type}: {message}\nObject: {objectName}\nScript: {scriptInfo}\nLine: {lineNumber}\n";
    }
}