using UnityEngine;
using System.Collections;

public class TextureDownloader : MonoBehaviour
{
    public string imageUrl = "https://example.com/your_image.jpg"; // Replace with your image URL
    public float updateInterval = 10.0f; // Update interval in seconds
    private Material quadMaterial;

    private void Start()
    {
        quadMaterial = GetComponent<Renderer>().material;
        StartCoroutine(DownloadAndRefreshTexture());
    }

    private IEnumerator DownloadAndRefreshTexture()
    {
        while (true)
        {
            using (WWW www = new WWW(imageUrl))
            {
                yield return www;

                if (string.IsNullOrEmpty(www.error))
                {
                    Texture2D texture = www.texture;

                    if (texture != null)
                    {
                        quadMaterial.mainTexture=texture ;
                    }
                    else
                    {
                        Debug.LogError("Downloaded texture is null.");
                    }
                }
                else
                {
                    Debug.LogError("Error downloading texture: " + www.error);
                }
            }

            yield return new WaitForSeconds(updateInterval);
        }
    }
}





