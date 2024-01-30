using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace RealityEditor
{
    public enum GenerateType{
        RealObject,
        DreamDiffusion

    }



    public class ModelIformation{
        public GameObject gameobjectWarp;
        public string ModelURL;


    }

    public class WebSocketmessage{
        public string ID;
        public string prompt;

        public string getMsg(){

            return ""+ID+","+prompt;

        }

        public void setMsg(string msg){
            string [] data=msg.Split(",");

            ID=data[0];
            prompt=data[1];


        }




    }




// public class RealityEditorUtilities : MonoBehaviour
// {
//     // Start is called before the first frame update
//     void Start()
//     {
        
//     }

//     // Update is called once per frame
//     void Update()
//     {
        
//     }
// }


}
