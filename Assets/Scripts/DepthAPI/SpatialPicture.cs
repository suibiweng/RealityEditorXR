using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using RealityEditor;

public class SpatialPicture : MonoBehaviour
{
    public MeshRenderer meshRenderer;
    
    public Material material;
    // Start is called before the first frame update
    void Start()
    {

       meshRenderer=GetComponent<MeshRenderer>();
       
       material=meshRenderer.materials[0];
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public IEnumerator DownloadTextures(string textureRGB,string textureDepth)
    {
         yield return new WaitForSeconds(5f);
        // Start downloading the first texture
        UnityWebRequest www1 = UnityWebRequestTexture.GetTexture(textureRGB);
        yield return www1.SendWebRequest();

        if (www1.result != UnityWebRequest.Result.Success)
        {
            Debug.LogError("Failed to download texture 1: " + www1.error);
        }
        else
        {
            Texture2D texture1 = DownloadHandlerTexture.GetContent(www1);
            material.SetTexture("_RGBMAP", texture1);  // Apply to the main texture slot
        }

        // Start downloading the second texture
        UnityWebRequest www2 = UnityWebRequestTexture.GetTexture(textureDepth);
        yield return www2.SendWebRequest();

        if (www2.result != UnityWebRequest.Result.Success)
        {
            Debug.LogError("Failed to download texture 2: " + www2.error);
        }
        else
        {
            Texture2D texture2 = DownloadHandlerTexture.GetContent(www2);
            material.SetTexture("_DepthMap", texture2);  // Apply to a secondary texture slot (ensure your shader supports it)
        }
    }
}
