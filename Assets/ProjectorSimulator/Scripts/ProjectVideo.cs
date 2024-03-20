using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class ProjectVideo : MonoBehaviour
{
    public VideoClip videoToProject;
    public AudioSource audioSrc;
    public bool loop = true;
    public bool playOnAwake = true;
    VideoPlayer player;

    ProjectorSim_RenderTexture rtProjector;

    private void Awake()
    {
        rtProjector = GetComponent<ProjectorSim_RenderTexture>();

        if (!playOnAwake)
        {
            rtProjector.enabled = false;
        }
    }

    // Use this for initialization
    void Start()
    {
        if (videoToProject)
        {
            // Set up the VideoPlayer - DON'T play on awake as we need to Prepare() our settings first.
            player = gameObject.AddComponent<VideoPlayer>();
            player.playOnAwake = false;
            if (playOnAwake)
                player.prepareCompleted += delegate { PlayAfterPrepared(); };
            else
                rtProjector.enabled = false;

            // Tell the VideoPlayer to render to the projector's RenderTexture
            player.renderMode = VideoRenderMode.RenderTexture;
            player.targetTexture = rtProjector.renderTexture;

            // Tell the VideoPlayer to play our clip
            player.clip = videoToProject;
            player.isLooping = loop;

            if (audioSrc)
            {
                player.audioOutputMode = VideoAudioOutputMode.AudioSource;
                player.SetTargetAudioSource(0, audioSrc);
            }
            else
            {
                // no AudioSource found - do not play audio  (you can change this to VideoAudioOutputMode.Direct if you want to play the video's raw audio tracks)
                for (ushort i = 0; i < player.audioTrackCount; i++)
                {
                    player.audioOutputMode = VideoAudioOutputMode.None;
                }
            }
            // apply our settings - video will play once preparation is complete via the event handler we set up earlier
            player.Prepare();
        }
        else
        {
            Debug.LogWarning("No video specified on video projector! " + gameObject.name + " is disabled.");
            gameObject.SetActive(false);
        }
    }

    void PlayAfterPrepared()
    {
        rtProjector.enabled = true;
        player.Play();
    }

    /// <summary>
    /// To be used only if you don't want the Projector to play the video immediately (ProjectVideo.playOnAwake = false).
    /// This function plays the video immediately if VideoPlayer preparation has completed. Otherwise, it will play as soon as the preparation has completed.
    /// </summary>
    public void PlayVideoProjector()
    {
        if (player.isPrepared)
        {
            player.Play();
            rtProjector.enabled = true;
        }
        else
        {
            player.prepareCompleted += delegate { PlayAfterPrepared(); };
        }
    }

    public VideoPlayer GetVideoPlayer()
    {
        return player;
    }
}
