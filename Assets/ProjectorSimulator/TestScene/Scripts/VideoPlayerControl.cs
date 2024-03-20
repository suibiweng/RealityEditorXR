using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class VideoPlayerControl : MonoBehaviour
{
    ProjectVideo pv;

    // Start is called before the first frame update
    void Awake()
    {
        pv = GetComponent<ProjectVideo>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            VideoPlayer vp = pv.GetVideoPlayer();
            if (vp)
            {
                if (vp.isPlaying) // if video is playing, pause it
                    vp.Pause();
                else if (vp.isPaused) // if video is paused, resume it
                    vp.Play();
                else
                    pv.PlayVideoProjector(); // otherwise, playback hasn't started and we should call this function to ensure the projector starts correctly
            }
        }
    }
}
