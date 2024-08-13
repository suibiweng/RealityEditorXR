using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using Normal.Realtime;


public class SceneSaverTest : MonoBehaviour
{
   public AudioSource source;
   public AudioClip savingSound, loadingSound;

   public RealityEditorManager RealityEditorManager2; 
   // public GameObject GenSpotPrefab;
   [System.Serializable]
   public class GenerateSpotData
   {
       public Vector3 position;
       public Quaternion rotation;
       public Vector3 scale;
       public string urlid; 
   }


   [System.Serializable]
   public class GenerateSpotDataList
   {
       public List<GenerateSpotData> generateSpotDataList;
   }
   
   void Update()
   {
       if(OVRInput.GetUp(OVRInput.RawButton.LThumbstick)){
           source.PlayOneShot(savingSound);
           Debug.Log("Start Button Has Been Pressed. Saving Scene...");
           SaveGenerateSpotsToPlayerPrefs();
       }
       if(OVRInput.GetUp(OVRInput.RawButton.RThumbstick)){
           source.PlayOneShot(loadingSound);
           Debug.Log("Load Button Has Been Pressed. Loading Scene...");
           LoadGenerateSpotsFromPlayerPrefs();
       }
   }


   public void SaveGenerateSpotsToPlayerPrefs()
   {
       // Find all objects of type GenerateSpot
       GameObject[] generateSpots = GameObject.FindGameObjectsWithTag("GenerateSpot");
       List<GenerateSpotData> generateSpotDataList = new List<GenerateSpotData>();
      Debug.Log("found " + generateSpots.Length + " Cubes while saving scene");
       // Extract data
       foreach (var generateSpot in generateSpots)
       {
           GenerateSpotData data = new GenerateSpotData();
           data.position = generateSpot.transform.position;
           data.rotation = generateSpot.transform.rotation;
           data.scale = generateSpot.transform.localScale;
           data.urlid = generateSpot.GetComponent<GenerateSpot>().URLID; 
           Debug.Log("saving the urlid: " + data.urlid);
           generateSpotDataList.Add(data);
       }


       // Serialize data to JSON
       GenerateSpotDataList allData = new GenerateSpotDataList();
       allData.generateSpotDataList = generateSpotDataList;
       string json = JsonUtility.ToJson(allData);


       // Save to PlayerPrefs
       // Debug.Log("Saving the JsonString: " + json);
       PlayerPrefs.SetString("GenerateSpotData", json);
       PlayerPrefs.Save();
   }


   public void LoadGenerateSpotsFromPlayerPrefs()
   {
       // Check if the key exists
       if (PlayerPrefs.HasKey("GenerateSpotData"))
       {
           // Get the JSON string
           string json = PlayerPrefs.GetString("GenerateSpotData");
           // Debug.Log("Loading the JSON String: " + json);

           // Deserialize the JSON string back to the object 
           GenerateSpotDataList allData = JsonUtility.FromJson<GenerateSpotDataList>(json);
 
           Debug.Log("Loading scene with " + allData.generateSpotDataList.Count + " Cubes");
           foreach (var data in allData.generateSpotDataList)
           {
               GameObject newObject = RealityEditorManager2.createSavedSpot(data.position, data.rotation, data.scale, data.urlid);
               Debug.Log("loading urlid: " + data.urlid);
               // newObject.GetComponent<GenerateSpot2>().URLID = data.URLID;
               newObject.GetComponent<GenerateSpot>().initAdd();
           }
       }
   }
}

