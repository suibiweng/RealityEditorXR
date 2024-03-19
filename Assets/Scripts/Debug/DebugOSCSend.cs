using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RealityEditor;

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
        message.values.Add(TimestampGenerator.GetTimestamp());

         osc.Send(message);

    }

    public void sendTestScan(){


         OscMessage message;
        message = new OscMessage();
        message.address = "/endRecord";
        osc.Send(message);


        


    }



        public void sendTestNerf(){


         OscMessage message;
        message = new OscMessage();
        message.address = "/NerfTest";
        osc.Send(message);


        


    }


    public void sendTextrue(){
        
        OscMessage message = new OscMessage()
        {
            address = "/InstructModify"
        };
        message.values.Add(1);
        message.values.Add("a golden cup");
        message.values.Add("20240318161937");

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
