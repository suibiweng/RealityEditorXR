using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Meta.XR.Depth;
using UnityEngine.UI;

public class DepthMapVis : MonoBehaviour
{

    // public EnvironmentDepthTextureProvider environmentDepthTextureProvider;

    public RawImage depthMap;
    // Start is called before the first frame update
    void Start()
    {

        var getTexture = Shader.GetGlobalTexture(EnvironmentDepthTextureProvider.DepthTextureID);

        depthMap.texture = getTexture;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
