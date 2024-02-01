using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Klak.Ndi;
using UnityEngine.UI;
public class SendToNdi : MonoBehaviour
{
    public NdiSender sender;
    public RawImage image;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        sender.sourceTexture=image.texture;
    }
}
