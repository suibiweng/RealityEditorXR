#if UNITY_EDITOR
using UnityEditor;
#endif
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

[ExecuteInEditMode]
public class ProjectorSim : MonoBehaviour
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
    [Tooltip("Vertical lens shift as a percentage of image height/2 (100% shift = lens level with image edge)")]
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
    [Tooltip("Image to project. If empty, only white will be projected.")]
    public List<Texture2D> images = null;
    Texture2D lastImage = null;
    [Tooltip("zero-based index of the image to preview in the editor")]
    public int previewImageIndex = 0;
    int lastPreviewImageIndex = 0;
    [Tooltip("The time to show each image, if more than one image is supplied. Otherwise this value is ignored.")]
    public float imageInterval = 5.0f;
    [Tooltip("Whether to loop the slideshow. If false, the last image will remain once the slideshow is complete.")]
    public bool loop = true;
    [Tooltip("Whether to play the slideshow immediately.")]
    public bool playOnAwake = true;
    [Tooltip("Only uncheck if using the Legacy processing method. If unchecked, image will be in greyscale (loads slightly faster). Recommended to leave greyscale while setting aspect, zoom, and shift with Legacy method.")]
    public bool colour = true;
    bool lastColour = true;
    [Tooltip("The resolution of the Cookie texture. Higher will have better clarity in the image, lower will be faster to generate.")]
    public CookieSizes cookieSize = CookieSizes.c_256;
    CookieSizes lastCookieSize = CookieSizes.c_256;
    [Tooltip("If enabled, the projector will revert back to the slower, CPU-intensive pixel-by-pixel \"Legacy\" calculation used in versions prior to v1.4. Use this if your platform has trouble with the new GPU-based method.")]
    public bool forceLegacyMethod = false;

    [Header("Vignette")]
    [Space(10)]
    public bool useVignette = false;
    bool lastUseVignette = false;
    public VignetteShape vignetteShape = VignetteShape.circle;
    VignetteShape lastVignetteShape;
    [Range(0f, 1f)]
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
    [Tooltip("Toggles light path geometry. Light paths currently do not take keystoning into account.")]
    public bool showLightPath = true;
    bool lastShowLightPath = true;
    [Tooltip("The material of the light path.")]
    public Material lightPathMaterial;
    [Tooltip("The distance the light path reaches - 0 or below makes the light stop at the furthest geometry found at the image corners. This is most useful for curved screens when you want the light path to continue beyond the corners.")]
    public float lightPathRange = 0.0f;
    float lastLightPathRange = 0.0f;

    // Array of Cookies for slideshow
    Cookie[] cookies;
    int slideshowIndex = 0; // start slideshow at first image
    Light[] lights;
    ThrowBuilder tb;

    // Use this for initialization
    void Awake()
    {
        lights = GetComponentsInChildren<Light>(true);
        tb = GetComponentInChildren<ThrowBuilder>(true);
        if (!tb)
            Debug.Log("No ThrowBuilder found! by " + gameObject.name);

        foreach (Light l in lights)
        {
            l.gameObject.SetActive(false);
        }

        // ensure there is always at least 1 entry in the array
        if (images.Count > 0)
            cookies = new Cookie[images.Capacity];
        else
            cookies = new Cookie[1]; // no images but we need a cookie for white

        int cookieSizeInt = int.Parse(cookieSize.ToString().Substring(2));

        VignetteData vd = new VignetteData(useVignette, vignetteSize, vignetteFade, new Vector2(vignetteOffsetX, vignetteOffsetY), vignetteForceCircular, vignetteShape == VignetteShape.circle);

#if UNITY_EDITOR
        // if in editor edit mode, ensure preview image index is valid
        if (!EditorApplication.isPlaying)
        {
            previewImageIndex = Mathf.Clamp(previewImageIndex, 0, images.Count - 1); //  don't allow user to choose a value out of range
        }


        // if in editor play mode, calculate all cookies (because we want to play the slideshow)
        if (EditorApplication.isPlaying)
        {
#endif
            // if in any play mode, generate all cookies for slideshow


            // do first cookie as per usual
            cookies[0] = new Cookie(new CookieData(shift_v, shift_h, keystoneH, keystoneV, throwRatio, aspectRatio), cookieSizeInt, lights[0], lights[1], lights[2], forceLegacyMethod, vd, images[0], colour);

            // use first cookie data for remaining cookies
            for (int i = 1; i < cookies.Length; i++)
            {
                if (forceLegacyMethod) // revert to old way of re-using first cookie's texture
                    cookies[i] = new Cookie(cookies[0].GetProjectedImageData(), cookies[0].GetRedCookie(), images[i]);
                else
                    cookies[i] = new Cookie(new CookieData(shift_v, shift_h, keystoneH, keystoneV, throwRatio, aspectRatio), cookieSizeInt, lights[0], lights[1], lights[2], false, vd, images[i], colour);
            }

            // garbage collection
            images = null;
            System.GC.Collect();
            System.GC.WaitForPendingFinalizers();
#if UNITY_EDITOR
        }
        else // EDITOR EDIT MODE - only calculate the preview cookie
        {
            // use slot 0 as the preview cookie
            cookies[0] = new Cookie(new CookieData(shift_v, shift_h, keystoneH, keystoneV, throwRatio, aspectRatio), cookieSizeInt, lights[0], lights[1], lights[2], forceLegacyMethod, vd, images[previewImageIndex], colour);
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
        lights[0].gameObject.SetActive(true);
        if (colour)
        {
            lights[1].gameObject.SetActive(true);
            lights[2].gameObject.SetActive(true);
        }
        if (showLightPath)
            tb.gameObject.SetActive(true);

        // allow slideshow in editor play mode
#if UNITY_EDITOR
        if (EditorApplication.isPlaying)
        {
#endif
            // queue the next frame, if there is one.
            if (playOnAwake && cookies.Length > 1 && slideshowIndex < cookies.Length && imageInterval > 0.0f)
            {
                Invoke("AdvanceSlideshow", imageInterval);
            }
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

        CancelInvoke("AdvanceSlideshow");
    }

    private void OnDestroy()
    {
        if (cookies == null)
            return;

        for (int i = 0; i < cookies.Length; i++)
        {
            if (cookies[i] != null)
            {
                cookies[i].Cleanup();
            }
        }
    }

    /// <summary>
    /// Allow external scripts to set the slideshow index
    /// </summary>
    /// <param name="newIndex"></param>
    public void SetSlideshowIndex(int newIndex)
    {
        if (newIndex >= 0 && newIndex < cookies.Length)
        {
            slideshowIndex = newIndex;
        }
        else
        {
            Debug.LogWarning("Slideshow index " + newIndex + " is out of range. Argument must be between 0 and " + (GetNumImages() - 1));
            return;
        }

        AssignLightCookies();

        // if slideshow is playing, restart the timer
        if (IsInvoking("AdvanceSlideshow"))
        {
            CancelInvoke("AdvanceSlideshow");
            Invoke("AdvanceSlideshow", imageInterval);
        }
    }

    // Allow external scripts to pause and play the slideshow
    public void PauseSlideshow()
    {
        playOnAwake = false;
        CancelInvoke("AdvanceSlideshow");
    }
    public void PlaySlideshow()
    {
        CancelInvoke("AdvanceSlideshow");
        playOnAwake = true;
        if (cookies.Length >= 1 && imageInterval > 0.0f)
            Invoke("AdvanceSlideshow", imageInterval);
    }

    /// <summary>
    /// Gives each light a cookie for its relevant channel, using the slideshowIndex value.
    /// </summary>
    void AssignLightCookies()
    {
        lights[0].cookie = cookies[slideshowIndex].GetRedCookie();
        lights[1].cookie = cookies[slideshowIndex].GetGreenCookie();
        lights[2].cookie = cookies[slideshowIndex].GetBlueCookie();
    }

    public void AdvanceSlideshow()
    {
        // cancel any more pending invokes - otherwise external use of this function can cause inconsistent frame rate
        CancelInvoke("AdvanceSlideshow");

        slideshowIndex++;
        if (slideshowIndex >= cookies.Length) // reached end?
        {
            if (loop)
                slideshowIndex = 0;
            else
                return; // should never normally be hit, unless AdvanceSlideshow is called externally
        }

        AssignLightCookies();

        bool moreimages = slideshowIndex < cookies.Length - 1 || (slideshowIndex >= cookies.Length - 1 && loop);

        // if there is another frame, queue it.
        if (moreimages && playOnAwake)
            Invoke("AdvanceSlideshow", imageInterval);
    }

#if UNITY_EDITOR
    void UpdateColour()
    {
        if (!EditorApplication.isPlaying)
        {
            if (colour)
                cookies[0].SetProjectedImageType(Cookie.ImageType.Colour, this.enabled);
            else
                cookies[0].SetProjectedImageType(Cookie.ImageType.Grey, this.enabled);
        }
    }
#endif

#if UNITY_EDITOR
    void OnValidate()
    {
        if (!EditorApplication.isPlaying)
        {
            if (images.Count == 0) // ensure there is always at least 1 slot in the images array
            {
                images.Add(null);
            }
            if (cookies != null && cookies.Length > 0)
            {
                previewImageIndex = Mathf.Clamp(previewImageIndex, 0, images.Count - 1); // ensure PreviewImageIndex is valid

                if (live && cookies[slideshowIndex] != null)
                {
                    // preview image has changed?
                    if (images[previewImageIndex] != lastImage || previewImageIndex != lastPreviewImageIndex)
                    {
                        if (images[previewImageIndex])
                        {
                            cookies[0].SetProjectedImage(images[previewImageIndex]);
                        }
                        else
                        {
                            cookies[0].RemoveProjectedImage();
                        }
                    }
                    if (colour != lastColour)
                    {
                        UpdateColour();
                    }
                    // recalculate cookie
                    if (aspectRatio != lastAspect ||
                        throwRatio != lastThrowRatio ||
                        shift_h != lastShiftH ||
                        shift_v != lastShiftV ||
                        keystoneH != lastKeystoneH ||
                        keystoneV != lastKeystoneV ||
                        colour != lastColour ||
                        previewImageIndex != lastPreviewImageIndex ||
                        images[previewImageIndex] != lastImage ||
                        useVignette != lastUseVignette ||
                        vignetteFade != lastVignetteFade ||
                        vignetteSize != lastVignetteSize ||
                        vignetteOffsetX != lastVignetteOffsetX ||
                        vignetteOffsetY != lastVignetteOffsetY ||
                        lastVignetteForceCircular != vignetteForceCircular ||
                        vignetteShape != lastVignetteShape)
                    {
                        // reset vignette size if shape changed
                        if (vignetteShape != lastVignetteShape)
                        {
                            vignetteSize = vignetteShape == VignetteShape.circle ? 0.5f : 0f;
                            lastVignetteShape = vignetteShape;
                        }

                        cookies[0].Reinitialise(new CookieData(shift_v, shift_h, keystoneH, keystoneV, throwRatio, aspectRatio), new VignetteData(useVignette, vignetteSize, vignetteFade, new Vector2(vignetteOffsetX, vignetteOffsetY), vignetteForceCircular, vignetteShape == VignetteShape.circle));

                        lastColour = colour;
                        lastAspect = aspectRatio;
                        lastThrowRatio = throwRatio;
                        lastShiftH = shift_h;
                        lastShiftV = shift_v;
                        lastKeystoneH = keystoneH;
                        lastKeystoneV = keystoneV;
                        lastPreviewImageIndex = previewImageIndex;
                        lastImage = images[previewImageIndex];

                        lastUseVignette = useVignette;
                        lastVignetteSize = vignetteSize;
                        lastVignetteFade = vignetteFade;
                        lastVignetteOffsetX = vignetteOffsetX;
                        lastVignetteOffsetY = vignetteOffsetY;
                        lastVignetteForceCircular = vignetteForceCircular;

                        AssignLightCookies();
                        // rebuild the light path geometry
                        BuildLightPath();
                    }
                    if (cookieSize != lastCookieSize)
                    {
                        cookies[0].SetCookieSize(int.Parse(cookieSize.ToString().Substring(2)));
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

    public int GetNumImages()
    {
        if (images != null)
            return images.Count;
        else
            return cookies.Length; // return cookie count if images have already been processed and deleted from memory
    }
}