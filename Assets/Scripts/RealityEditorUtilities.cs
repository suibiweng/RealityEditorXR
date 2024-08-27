using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Net;


namespace RealityEditor
{
    public enum GenerateType{
        Add,
        Reconstruction,
        Instruction,
        VirtualFurniture,
        None

    }



    public enum MeshType{
        Generated,
        TargetObject,
        BackGround,
        Modified

    }



    public class ModelIformation{
        public GameObject gameobjectWarp;
        public string ModelURL;

        public MeshType meshType;


        public MeshType modelType(){

            if(ModelURL.Contains("scaned")){
                if(ModelURL.Contains("target")){

                       meshType=MeshType.TargetObject;
                }

                if(ModelURL.Contains("background")){


                       meshType=MeshType.BackGround; 

                }

                if(ModelURL.Contains("Instruction")){

                 meshType=   MeshType.Modified;

                }

            }else if(ModelURL.Contains("generated")){


                meshType=MeshType.Generated;


            } 


            return meshType;
        }


        


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





public static class TimestampGenerator
{
    public static string GetTimestamp()
    {
        // Get the current date and time
        DateTime now = DateTime.Now;

        // Format the date and time as a timestamp string
        string timestamp = now.ToString("yyyyMMddHHmmss");

        return timestamp;
    }
}


public static class URLChecker
{
    public static bool CheckURLConnection(string url)
    {
        try
        {
            // Create a web request to the specified URL
            HttpWebRequest request = (HttpWebRequest)WebRequest.Create(url);
            
            // Set the request method to HEAD to only get headers without downloading the content
            request.Method = "HEAD";

            // Get the response
            HttpWebResponse response = (HttpWebResponse)request.GetResponse();

            // Check if the response status is OK (200)
            bool connectionExists = response.StatusCode == HttpStatusCode.OK;

            // Close the response
            response.Close();

            return connectionExists;
        }
        catch (Exception e)
        {
            // An exception occurred, indicating that the URL connection does not exist
          //  Debug.LogError("Error checking URL connection: " + e.Message);
            return false;
        }
    }
}




}
