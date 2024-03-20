using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RenderTextureCamDisabler : MonoBehaviour
{
    public ProjectVideo pv;

    // Start is called before the first frame update
    void Start()
    {
        if (pv)
        {
            if (pv.videoToProject != null)
                gameObject.SetActive(false);
        }
    }
}
