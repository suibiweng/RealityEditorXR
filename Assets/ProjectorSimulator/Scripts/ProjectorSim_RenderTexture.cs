#if UNITY_EDITOR
using UnityEditor;
#endif
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

[ExecuteInEditMode]
public class ProjectorSim_RenderTexture : MonoBehaviour
{
    public enum CookieSizes { c_128, c_256, c_512, c_1024, c_2048, c_4096 };
    public enum VignetteShape { circle, square };


    public bool live = true;

    [Header("Image size")]
    [Space(10)]
    [Tooltip("Aspect ratio of the projected image (width/height)")]
    public float aspectRatio = 1.6f;
    float lastAspect = 1.6f;
    [Tooltip("Throw ratio of the projector (distance/image width) - smaller is wider")]
    public float throwRatio = 1.0f;
    float lastThrowRatio = 1.0f;
    [Tooltip("Vertical lens shift as a percentage of image width/2 (100% shift = lens level with image edge)")]
    public float shift_v = 0.0f;
    float lastShiftV = 0.0f;
    [Tooltip("Horizontal lens shift as a percentage of image width/2 (100% shift = lens level with image edge)")]
    public float shift_h = 0.0f;
    float lastShiftH = 0.0f;
    [Tooltip("Use this to make a trapezoidal image square again. Forces fallback to CPU processing.")]
    [Range(-100.0f, 100.0f)]
    public float keystoneH = 0.0f;
    float lastKeystoneH;
    [Tooltip("Use this to make a trapezoidal image square again. Forces fallback to CPU processing.")]
    [Range(-100.0f, 100.0f)]
    public float keystoneV = 0.0f;
    float lastKeystoneV;

    [Header("Brightness")]
    [Space(10)]
    [Tooltip("Allows control of the brightness of the projector")]
    [Range(0.0f, 8.0f)]
    public float brightness = 1.0f;
    float lastBrightness = 1.0f;
    [Tooltip("Controls the reach of the projector's light")]
    public float range = 20.0f;
    float lastRange = 20.0f;

    [Header("Projected content")]
    [Space(10)]
    [Tooltip("Texture to project. If empty, only white will be projected.")]
    public RenderTexture renderTexture;
    [Tooltip("The time between image updates (1/framerate)")]
    public float imageInterval = 0.05f;
    [Tooltip("Only uncheck if using the Legacy processing method. If unchecked, image will be in greyscale (loads slightly faster). Recommended to leave greyscale while setting aspect, zoom, and shift with Legacy method.")]
    public bool colour = true;
    [Tooltip("The resolution of the Cookie texture. Higher will have better clarity in the image, lower will be faster to generate.")]
    public CookieSizes cookieSize = CookieSizes.c_256;
    CookieSizes lastCookieSize = CookieSizes.c_256;
    [Tooltip("The maximum time allowed for the projector to process a frame in seconds. This setting can ensure your game maintains a playable framerate. The resolution/colour fo the projector will automatically drop in order to process within the given time.")]
    public float maxProcessingTime = 0.015f;
    [Tooltip("If enabled, the projector will revert back to the slower, CPU-intensive pixel-by-pixel \"Legacy\" calculation used in versions prior to v1.4. Use this if your platform has trouble with the new GPU-based method.")]
    public bool forceLegacyMethod = false;

    [Header("Vignette")]
    [Space(10)]
    public bool useVignette = false;
    bool lastUseVignette = false;
    public VignetteShape vignetteShape = VignetteShape.circle;
    VignetteShape lastVignetteShape;
    [Range(0, 1f)]
    public float vignetteSize = 0.5f;
    float lastVignetteSize = 0.5f;
    [Range(0f, 1f)]
    public float vignetteFade = 0.2f;
    float lastVignetteFade = 0.2f;
    [Range(0f, 1f)]
    public float vignetteOffsetX = 0.5f;
    float lastVignetteOffsetX = 0.5f;
    [Range(0f, 1f)]
    public float vignetteOffsetY = 0.5f;
    float lastVignetteOffsetY = 0.5f;
    [Tooltip("Forces a circular vignette to be a circle instead of an oval. Ignored for square vignette.")]
    public bool vignetteForceCircular = true;
    bool lastVignetteForceCircular = true;

    [Header("Light path")]
    [Space(10)]
    [Tooltip("Toggles light path geometry.")]
    public bool showLightPath = true;
    bool lastShowLightPath = true;
    [Tooltip("The material of the light path.")]
    public Material lightPathMaterial;
    [Tooltip("The distance the light path reaches - 0 or below makes the light stop at the furthest geometry found at the image corners. This is most useful for curved screens when you want the light path to continue beyond the corners.")]
    public float lightPathRange = 0.0f;
    float lastLightPathRange = 0.0f;

    float[] previousProcessingTimes;
    int processingTimeIndex = 0;
    bool optimisedProcessingTimeYet = false;

    bool isPlaying = true;

    Texture2D convertedTexture;

    // Cookies and lights
    Cookie cookie;
    Light[] lights;
    ThrowBuilder tb;

    // prevent multiple projectors from trying to update their image in the same frame
    static bool projectorProcessedThisFrame = false;
    bool requiresProcessing = true;

    // hacky, sorry
    // we always want to update on the first frame (for some reason OnEnable does not count as the first frame)
    int frameCounter = 0;

    // Use this for initialization
    void Awake()
    {
        lights = GetComponentsInChildren<Light>(true);
        tb = GetComponentInChildren<ThrowBuilder>(true);

        // start with all lights off, otherwise first frame will see lights flash as the cookies haven't processed yet
        foreach (Light l in lights)
        {
            l.gameObject.SetActive(false);
        }

        // in the editor, however, we want the first light on, in order to see the size and shape of the image
#if UNITY_EDITOR
        lights[0].gameObject.SetActive(true);
#endif

        int cookieSizeInt = int.Parse(cookieSize.ToString().Substring(2));

        VignetteData vd = new VignetteData(useVignette, vignetteSize, vignetteFade, new Vector2(vignetteOffsetX, vignetteOffsetY), vignetteForceCircular, vignetteShape == VignetteShape.circle);

#if UNITY_EDITOR
        // if in editor play mode, queue the updating images
        if (EditorApplication.isPlaying)
        {
#endif
            previousProcessingTimes = new float[5];


            // do first cookie as per usual
            cookie = new Cookie(new CookieData(shift_v, shift_h, keystoneH, keystoneV, throwRatio, aspectRatio), cookieSizeInt, lights[0], lights[1], lights[2], forceLegacyMethod, vd, renderTexture, colour, true);
            cookie.SetProjectedImageType(colour ? Cookie.ImageType.Colour : Cookie.ImageType.Grey, this.enabled);

            convertedTexture = new Texture2D(renderTexture.width, renderTexture.height);

            //UpdateImage();

            // garbage collection
            System.GC.Collect();
            System.GC.WaitForPendingFinalizers();
#if UNITY_EDITOR
        }
        else // EDITOR EDIT MODE - only calculate the white cookie
        {
            // use slot 0 as the preview cookie
            cookie = new Cookie(new CookieData(shift_v, shift_h, keystoneH, keystoneV, throwRatio, aspectRatio), cookieSizeInt, lights[0], lights[1], lights[2], forceLegacyMethod, vd, null, colour);
        }
#endif
        AssignLightCookies();
    }

    void Start()
    {
        BuildLightPath();
    }

    void BuildLightPath()
    {
        // build the light path geometry
        if (tb)
        {
            if (lightPathRange <= 0) // automatically calculate light path distance, max range = range of projector
                tb.BuildThrow(throwRatio, aspectRatio, new Vector2(shift_h, shift_v), range, true, lightPathMaterial);
            else // use user-defined distance
                tb.BuildThrow(throwRatio, aspectRatio, new Vector2(shift_h, shift_v), lightPathRange, false, lightPathMaterial);
        }
    }

    // When enabled, turn lights on. Also start slideshow if necessary.
    void OnEnable()
    {
        if (frameCounter != 0)
            lights[0].gameObject.SetActive(true);

        if (showLightPath)
            tb.gameObject.SetActive(true);

        // we don't want to turn on the colour projectors in edit mode, as we are just projecting white
#if UNITY_EDITOR
        if (EditorApplication.isPlaying)
        {
#endif
            if (colour && frameCounter != 0)
            {
                lights[1].gameObject.SetActive(true);
                lights[2].gameObject.SetActive(true);
            }
#if UNITY_EDITOR
        }
#endif

        // allow slideshow in editor play mode
#if UNITY_EDITOR
        if (EditorApplication.isPlaying)
        {
#endif
            // stuff to do in play mode
            Invoke("UpdateImage", imageInterval);
#if UNITY_EDITOR
        }
#endif
    }

    // When disabled, turn lights off
    void OnDisable()
    {
        foreach (Light l in lights)
        {
            l.gameObject.SetActive(false);
        }

        if (showLightPath)
            tb.gameObject.SetActive(false);

        CancelInvoke("UpdateImage");
    }

    private void OnDestroy()
    {
        if (cookie != null)
            cookie.Cleanup();
    }

    // Allow external scripts to pause and play the projector
    public void Pause()
    {
        isPlaying = false;
        CancelInvoke("UpdateImage");
    }
    public void Play()
    {
        isPlaying = true;
        Invoke("UpdateImage", imageInterval);
    }

    /// <summary>
    /// Gives each light a cookie for its relevant channel, using the slideshowIndex value.
    /// </summary>
    void AssignLightCookies()
    {
        lights[0].cookie = cookie.GetRedCookie();
        lights[1].cookie = cookie.GetGreenCookie();
        lights[2].cookie = cookie.GetBlueCookie();
    }

    void CheckProcessingTime()
    {
        float averageTime = 0f;
        for (int i = 0; i < previousProcessingTimes.Length; i++)
        {
            averageTime += previousProcessingTimes[i];
        }
        averageTime /= (float)previousProcessingTimes.Length;

        if (averageTime > maxProcessingTime)
        {
            // reduce cookie resolution, if it's not already at the minimum
            if (cookieSize.ToString() != "c_128")
            {
                Debug.Log(gameObject.name + " is reducing cookie resolution from " + cookieSize.ToString() + " to " + (cookieSize - 1).ToString());
                cookieSize = (CookieSizes)(cookieSize - 1);
                cookie.SetCookieSize(int.Parse(cookieSize.ToString().Substring(2)));

                // reset the processing time array so we get a new measurement next time
                for (int i = 0; i < previousProcessingTimes.Length; i++)
                {
                    previousProcessingTimes[i] = 0f;
                }
            }
        }
        else
        {
            // we processed within the required time - set the flag to stop checking
            optimisedProcessingTimeYet = true;
        }

    }

    public void UpdateImage()
    {
        // skip processing if a projector has already updated this frame
        if (projectorProcessedThisFrame && forceLegacyMethod)
        {
            requiresProcessing = true;
            return;
        }
        // we are going to start processing - ensure no other projectors do so this frame
        requiresProcessing = false;
        projectorProcessedThisFrame = true;

        // start timing how long it takes the image to update
        float startTime = Time.realtimeSinceStartup;

        if (forceLegacyMethod || keystoneH != 0 || keystoneV != 0) // if we are doing pixel-by-pixel method
        {
            // store reference to the active buffer
            RenderTexture prev = RenderTexture.active;

            // copy the target rendertexture into our target Texture2D
            RenderTexture.active = renderTexture;
            convertedTexture.ReadPixels(new Rect(0, 0, convertedTexture.width, convertedTexture.height), 0, 0, true);
            convertedTexture.Apply();

            // restore the original buffer
            RenderTexture.active = prev;
            //RenderTexture.ReleaseTemporary(prev);

            // send the updated rendertexture to the cookie
            cookie.SetProjectedImage(convertedTexture);
        }

        cookie.ForceUpdateCookie(false);
        AssignLightCookies();

        // automatically adjust the cookie resolution in order to maintain framerate
        if (!optimisedProcessingTimeYet)
        {
            float stopTime = Time.realtimeSinceStartup;
            previousProcessingTimes[processingTimeIndex] = stopTime - startTime;
            processingTimeIndex++;
            if (processingTimeIndex >= previousProcessingTimes.Length)
            {
                processingTimeIndex = 0;
                CheckProcessingTime();
            }
        }

        if (isPlaying && this.enabled && !IsInvoking("UpdateImage"))
            Invoke("UpdateImage", imageInterval);
    }

    private void Update()
    {
#if UNITY_EDITOR
        if (EditorApplication.isPlaying)
        {
#endif
            if (frameCounter == 0) // update the cookie for the first time
            {
                frameCounter = 1;
                UpdateImage();
            }
            else if (frameCounter == 1) // turn the spotlights on after cookies are initialised
            {
                frameCounter = 2;
                lights[0].gameObject.SetActive(true);
                if (colour)
                {
                    lights[1].gameObject.SetActive(true);
                    lights[2].gameObject.SetActive(true);
                }
            }
            else if (forceLegacyMethod && requiresProcessing && !projectorProcessedThisFrame) // update as needed
            {
                UpdateImage();
            }
#if UNITY_EDITOR
        }
#endif
    }

    private void LateUpdate()
    {
        projectorProcessedThisFrame = false; // reset flag which prevents more than 1 cookie updating per frame
    }

#if UNITY_EDITOR
    void OnValidate()
    {
        if (!EditorApplication.isPlaying)
        {
            if (cookie != null)
            {
                if (live && cookie != null)
                {
                    // recalculate cookie
                    if (aspectRatio != lastAspect ||
                        throwRatio != lastThrowRatio ||
                        shift_h != lastShiftH ||
                        shift_v != lastShiftV ||
                        keystoneH != lastKeystoneH ||
                        keystoneV != lastKeystoneV ||
                        useVignette != lastUseVignette ||
                        vignetteFade != lastVignetteFade ||
                        vignetteSize != lastVignetteSize ||
                        vignetteOffsetX != lastVignetteOffsetX ||
                        vignetteOffsetY != lastVignetteOffsetY ||
                        vignetteForceCircular != lastVignetteForceCircular ||
                        vignetteShape != lastVignetteShape)
                    {
                        // reset vignette size if shape changed
                        if (vignetteShape != lastVignetteShape)
                        {
                            vignetteSize = vignetteShape == VignetteShape.circle ? 0.5f : 0f;
                            lastVignetteShape = vignetteShape;
                        }

                        cookie.Reinitialise(new CookieData(shift_v, shift_h, keystoneH, keystoneV, throwRatio, aspectRatio), new VignetteData(useVignette, vignetteSize, vignetteFade, new Vector2(vignetteOffsetX, vignetteOffsetY), vignetteForceCircular, vignetteShape == VignetteShape.circle));

                        lastAspect = aspectRatio;
                        lastThrowRatio = throwRatio;
                        lastShiftH = shift_h;
                        lastShiftV = shift_v;
                        lastKeystoneH = keystoneH;
                        lastKeystoneV = keystoneV;
                        lastUseVignette = useVignette;
                        lastVignetteSize = vignetteSize;
                        lastVignetteFade = vignetteFade;
                        lastVignetteOffsetX = vignetteOffsetX;
                        lastVignetteOffsetY = vignetteOffsetY;
                        lastVignetteForceCircular = vignetteForceCircular;

                        AssignLightCookies();
                        BuildLightPath();
                    }
                    if (cookieSize != lastCookieSize)
                    {
                        cookie.SetCookieSize(int.Parse(cookieSize.ToString().Substring(2)));
                        lastCookieSize = cookieSize;
                        AssignLightCookies();
                    }
                    if (lastBrightness != brightness)
                    {
                        foreach (Light l in lights)
                        {
                            l.intensity = brightness;
                        }
                        lastBrightness = brightness;
                    }
                    if (lastRange != range)
                    {
                        foreach (Light l in lights)
                        {
                            l.range = range;
                        }
                        lastRange = range;
                        BuildLightPath();
                    }
                    if (showLightPath != lastShowLightPath)
                    {
                        if (tb)
                            tb.gameObject.SetActive(showLightPath);
                        lastShowLightPath = showLightPath;
                    }
                    if (lightPathRange != lastLightPathRange)
                    {
                        lastLightPathRange = lightPathRange;
                        BuildLightPath();
                    }
                }
            }
        }
    }
#endif
}
