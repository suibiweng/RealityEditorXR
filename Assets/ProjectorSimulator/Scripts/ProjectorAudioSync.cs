using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProjectorAudioSync : MonoBehaviour
{
    public ProjectorSim pj;
    AudioSource src;
    int numFrames;

    void Start()
    {
        src = GetComponent<AudioSource>();
        if (pj)
            numFrames = pj.GetNumImages();

        if (!pj || !src)
        {
            Debug.Log("References not set in Audio Sync script on " + gameObject.name + "! Please check a projector is assigned and there is an AudioSource on the object.");
            this.enabled = false;
        }
    }

    // Update is called once per frame
    void Update()
    {
        float progress = src.time / src.clip.length;
        pj.SetSlideshowIndex((int)(numFrames * progress));
    }
}