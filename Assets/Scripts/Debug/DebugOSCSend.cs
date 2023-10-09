using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DebugOSCSend : MonoBehaviour
{

    public OSC osc;
    public string prompt="A cat";
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void sendTest(){
        
        OscMessage message = new OscMessage()
        {
            address = "/PromtGenerateModel"
        };
        message.values.Add(1);
        message.values.Add(prompt);

         osc.Send(message);

    }


    public void sendStop(){
        
        OscMessage message = new OscMessage()
        {
            address = "/stopProcess"
        };
    

         osc.Send(message);

    }
}
