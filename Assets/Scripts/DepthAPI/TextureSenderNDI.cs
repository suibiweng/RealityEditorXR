using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class TextureSenderNDI : MonoBehaviour
{    public Material sourceMaterial;  // The material from which to copy the texture
    public string sourceTextureName = "_MainTex";  // The texture property name in the source material
    public RenderTexture targetRenderTexture;  // The RenderTexture to which to assign the texture
  //  public Renderer targetRenderer;  // The renderer to apply the RenderTexture

   public RawImage rawImage;

    void Start()
    {
        // Ensure the RenderTexture is properly initialized
        if (targetRenderTexture != null && !targetRenderTexture.IsCreated())
        {
            targetRenderTexture.Create();
        }

        // Assign the RenderTexture to the target renderer's material
        // if (targetRenderer != null)
        // {
        //     targetRenderer.material.mainTexture = targetRenderTexture;
        // }
    }

    void Update()
    {
        sourceMaterial=rawImage.material;
        if (sourceMaterial != null && targetRenderTexture != null)
        {
            // Get the texture from the source material
            Texture sourceTexture = sourceMaterial.GetTexture(sourceTextureName);

            if (sourceTexture != null)
            {
                // Blit the source texture to the RenderTexture every frame
                Graphics.Blit(sourceTexture, targetRenderTexture);
            }
            else
            {
                Debug.LogWarning("Source texture is null.");
            }
        }
        else
        {
            Debug.LogWarning("Source material or RenderTexture is not assigned.");
        }


    }
}
    

