using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Klak.Ndi;
using UnityEngine.UI;

using Meta.XR.Depth;
public class RawImageSendtoNdi : MonoBehaviour
{
    public NdiSender ndiSender;
    public RawImage rawImage;

     public EnvironmentDepthTextureProvider m_depthTextureProvider;
    // Start is called before the first frame update
    void Start()
    {
        ndiSender.ndiName="sendQuestDepth";
       // var physicalDepthTex = Shader.GetGlobalTexture(EnvironmentDepthTextureProvider.DepthTextureID);
       // ndiSender.sourceTexture=physicalDepthTex;
        
    }

    // Update is called once per frame
    void Update()
    {
         ndiSender.sourceTexture=rawImage.texture;
        
        
        
        
            }
}
