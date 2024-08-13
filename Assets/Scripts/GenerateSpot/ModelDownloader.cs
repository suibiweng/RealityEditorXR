using System.Collections;
using System.Collections.Generic;

using UnityEngine; 
using TriLibCore; 
using RealityEditor;


public class ModelDownloader : MonoBehaviour
{    public bool isDownloading=false;
     private Queue<ModelIformation> Tasks; 
 /// <summary>

        private void Start()
        {
           Tasks= new Queue<ModelIformation>();
        }

        public void AddTask(ModelIformation modelIformation){

            Tasks.Enqueue(modelIformation);

        }


        public void startDownload(){
        
            if(Tasks.Count>0)
             isDownloading=true;



        }



        private void Update() {


            if(!isDownloading)
            {
                return;
            }else{

                if(Tasks.Count>0){

                    LoadModel(Tasks.Dequeue());

                }else{

                    isDownloading=false;



                }
            
            }

            



        }





        






      public void LoadModel(ModelIformation modelInfo){

            var assetLoaderOptions = AssetLoader.CreateDefaultLoaderOptions();
            var webRequest = AssetDownloader.CreateWebRequest(modelInfo.ModelURL);
            AssetDownloader.LoadModelFromUri(webRequest, OnLoad, OnMaterialsLoad, OnProgress, OnError, modelInfo.gameobjectWarp, assetLoaderOptions);


 
        }



        /// <summary>
        /// Called when any error occurs.
        /// </summary>
        /// <param name="obj">The contextualized error, containing the original exception and the context passed to the method where the error was thrown.</param>
        private void OnError(IContextualizedError obj)
        {
            Debug.LogError($"An error occurred while loading your Model: {obj.GetInnerException()}");
        }

        /// <summary>
        /// Called when the Model loading progress changes.
        /// </summary>
        /// <param name="assetLoaderContext">The context used to load the Model.</param>
        /// <param name="progress">The loading progress.</param>
        private void OnProgress(AssetLoaderContext assetLoaderContext, float progress)
        {
            Debug.Log($"Loading Model. Progress: {progress:P}");
        }

        /// <summary>
        /// Called when the Model (including Textures and Materials) has been fully loaded.
        /// </summary>
        /// <remarks>The loaded GameObject is available on the assetLoaderContext.RootGameObject field.</remarks>
        /// <param name="assetLoaderContext">The context used to load the Model.</param>
        private void OnMaterialsLoad(AssetLoaderContext assetLoaderContext)
        {
            Debug.Log("Materials loaded. Model fully loaded.");

          /* if(Tasks.Count>0){
                 Tasks.Dequeue();
           }*/
        }

        /// <summary>
        /// Called when the Model Meshes and hierarchy are loaded.
        /// </summary>
        /// <remarks>The loaded GameObject is available on the assetLoaderContext.RootGameObject field.</remarks>
        /// <param name="assetLoaderContext">The context used to load the Model.</param>
        private void OnLoad(AssetLoaderContext assetLoaderContext)
        {
            Debug.Log("Model loaded. Loading materials.");
        }
    }

