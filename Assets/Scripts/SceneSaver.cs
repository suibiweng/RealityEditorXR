using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using Normal.Realtime;


public class SceneSaver : MonoBehaviour //This is the old version and can be ignored
{
   public AudioSource source;
   public AudioClip savingSound, loadingSound;
   public RealityEditorManager RealityEditorManager;
   // public GameObject GenSpotPrefab;
   [System.Serializable]
   public class GenerateSpotData
   {
       public string URLID;
       public Vector3 position;
       public Quaternion rotation;
       public Vector3 scale;
   }


   [System.Serializable]
   public class GenerateSpotDataList
   {
       public List<GenerateSpotData> generateSpotDataList;
   }


   void Start()
   {
      
   }


   void Update()
   {
       // if(OVRInput.GetUp(OVRInput.RawButton.LThumbstick)){
       //     source.PlayOneShot(savingSound);
       //     Debug.Log("Start Button Has Been Pressed. Saving Scene...");
       //     SaveGenerateSpotsToPlayerPrefs();
       // }
       // if(OVRInput.GetUp(OVRInput.RawButton.RThumbstick)){
       //     source.PlayOneShot(loadingSound);
       //     Debug.Log("Load Button Has Been Pressed. Loading Scene...");
       //     LoadGenerateSpotsFromPlayerPrefs();
       // }
   }


   void SaveGenerateSpotsToPlayerPrefs()
   {
       // Find all objects of type GenerateSpot
       GenerateSpot[] generateSpots = FindObjectsOfType<GenerateSpot>();
       List<GenerateSpotData> generateSpotDataList = new List<GenerateSpotData>();
      
       // Extract data
       foreach (var generateSpot in generateSpots)
       {
           GenerateSpotData data = new GenerateSpotData();
           data.URLID = generateSpot.URLID;
           data.position = generateSpot.transform.position;
           data.rotation = generateSpot.transform.rotation;
           data.scale = generateSpot.transform.localScale;


           generateSpotDataList.Add(data);
       }


       // Serialize data to JSON
       GenerateSpotDataList allData = new GenerateSpotDataList();
       allData.generateSpotDataList = generateSpotDataList;
       string json = JsonUtility.ToJson(allData);


       // Save to PlayerPrefs
       PlayerPrefs.SetString("GenerateSpotData", json);
       PlayerPrefs.Save();
   }


   // void LoadGenerateSpotsFromPlayerPrefs()
   // {
   //     // Check if the key exists
   //     if (PlayerPrefs.HasKey("GenerateSpotData"))
   //     {
   //         // Get the JSON string
   //         string json = PlayerPrefs.GetString("GenerateSpotData");
   //
   //
   //         // Deserialize the JSON string back to the object
   //         GenerateSpotDataList allData = JsonUtility.FromJson<GenerateSpotDataList>(json);
   //
   //
   //         foreach (var data in allData.generateSpotDataList)
   //         {
   //             Debug.Log("Loading scene with " + allData.generateSpotDataList.Count + " Cubes");
   //             GameObject newObject = Realtime.Instantiate("GenrateSpot", data.position, data.rotation);
   //             // GameObject newObject = Realtime.Instantiate("NewCube", data.position, data.rotation);
   //             newObject.transform.localScale = data.scale;
   //             newObject.GetComponent<GenerateSpot>().URLID = data.URLID;
   //             // newObject.GetComponent<DataSync>().SetURLID(data.URLID);  //doing this in the createSavedSpot function. 
   //             RealityEditorManager.GenCubesDic.Add(data.URLID, newObject);
   //             newObject.GetComponent<GenerateSpot>().initAdd();
   //
   //             // RealityEditorManager.selectedIDUrl = data.URLID;
   //             // RealityEditorManager.IDs++;
   //         }
   //     }
   // }
}

