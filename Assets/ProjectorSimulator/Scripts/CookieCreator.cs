#if UNITY_EDITOR
using UnityEditor;
#endif
using UnityEngine;
using System.Threading;
using System.Linq;
using System.Collections;
using System.Collections.Generic;

public struct CookieData
{
    public float shift_v, shift_h, keystone_h, keystone_v, ratio, aspect;
    public CookieData(float shiftV, float shiftH, float keystoneH, float keystoneV, float throwRatio, float imageAspect)
    {
        shift_v = shiftV;
        shift_h = shiftH;
        keystone_h = keystoneH;
        keystone_v = keystoneV;
        ratio = throwRatio;
        aspect = imageAspect;
    }
}

public struct ProjectedImageInCookieData
{
    public int imageLeftEdgeInCookie, imageTopEdgeInCookie, imageWidthInCookie, imageHeightInCookie, textureSize;
    public int imageCentreH, imageCentreV;
    public float keystoneMinWidth, keystoneMinHeight;
    public bool keystoneH_flip, keystoneV_flip, colour;
    public ProjectedImageInCookieData(int imgLeftEdge, int imgTopEdge, int imgWidth, int imgHeight, float keystone_minWidth, float keystone_minHeight, bool flipKeystoneH, bool flipKeystoneV, bool isColour, int size)
    {
        imageLeftEdgeInCookie = imgLeftEdge;
        imageTopEdgeInCookie = imgTopEdge;
        imageWidthInCookie = imgWidth;
        imageHeightInCookie = imgHeight;
        imageCentreH = imageLeftEdgeInCookie + imageWidthInCookie / 2;
        imageCentreV = imageTopEdgeInCookie + imageHeightInCookie / 2;
        keystoneMinWidth = keystone_minWidth;
        keystoneMinHeight = keystone_minHeight;
        keystoneH_flip = flipKeystoneH;
        keystoneV_flip = flipKeystoneV;
        colour = isColour;
        textureSize = size;
    }
}

public struct PixelCalcArgs
{
    public int srcImgWidth;
    public int srcImgHeight;
    public Cookie.ImageType imageType;
    public bool doBlacks;
    public int startIndex;
    public int endIndex;

    public PixelCalcArgs(int srcWidth, int srcHeight, Cookie.ImageType type, bool calculateBlacks, int start, int stop)
    {
        srcImgWidth = srcWidth;
        srcImgHeight = srcHeight;
        imageType = type;
        doBlacks = calculateBlacks;
        startIndex = start;
        endIndex = stop;
    }
}

public struct VignetteData
{
    public bool _enabled;
    public float _radius;
    public float _fadeSize;
    public Vector2 _offset;
    public bool _forceCircle;
    public bool _circular;

    public VignetteData(bool enabled, float radius, float fadeSize, Vector2 offset, bool forceCircular, bool circular)
    {
        _enabled = enabled;
        _radius = radius;
        _fadeSize = fadeSize;
        _offset = offset;
        _forceCircle = forceCircular;
        _circular = circular;
    }
}

public class Cookie
{
    public enum ImageType { Colour, Grey };
    Texture projectedImage = null;
    Texture2D projectedImage2D = null;
    Color32[] imageColours = null;
    CookieData data;
    float imageWidth, imageHeight;
    float maxImageEdgeDistance;
    float metersToPixels = 1.0f;
    ImageType imageType = ImageType.Grey;
    Texture redCookie, greenCookie, blueCookie;
    Texture2D redCookie2D, greenCookie2D, blueCookie2D;
    Color32[] redColors, greenColors, blueColors;

    // used for calculating angle
    const float distance = 10.0f; // throw distance
    int textureSize = 1024; // texture width and height

    Light redLight, greenLight, blueLight;

    VignetteData _vignetteData;
    Texture vignetteCookie;

    bool supportLiveUpdate = false;
    bool pixelByPixel = false;

    // shaders which strip the individual channels, offloading to gpu
    static Material singlePassR, singlePassG, singlePassB;
    Vector2 cookieSpaceScale, cookieSpaceOffset;

    static Material vignetteShader;

    // data about where the actual image is located in the cookie (same for all channels)
    ProjectedImageInCookieData projectedImageData;

    public Cookie(CookieData cookieData, int cookieSize, Light red, Light green, Light blue, bool forcePixelByPixel, VignetteData vignetteData, Texture imageToProject = null, bool colour = false, bool enableLiveUpdate = false)
    {
        // fallback to pixel by pixel if keystoning used
        pixelByPixel = (cookieData.keystone_h != 0 || cookieData.keystone_v != 0) || forcePixelByPixel;

        textureSize = cookieSize;
        projectedImage = imageToProject;
        projectedImage2D = projectedImage as Texture2D;
        if (projectedImage2D != null && pixelByPixel)
            imageColours = projectedImage2D.GetPixels32();
        else
            imageColours = null;

        CreateTexture();

        if (colour)
            imageType = ImageType.Colour;

        redLight = red;
        greenLight = green;
        blueLight = blue;
        data = cookieData;
        _vignetteData = vignetteData;
        supportLiveUpdate = enableLiveUpdate;
        Initialise();
    }


    /// <summary>
    /// Creates cookies as Texture2Ds, used when performing keystone (pixel-by-pixel fallback)
    /// </summary>
    /// <param name="precalculatedData"></param>
    /// <param name="precalculatedCookie"></param>
    /// <param name="imageToProject"></param>
    public Cookie(ProjectedImageInCookieData precalculatedData, Texture precalculatedCookie, Texture imageToProject)
    {
        // this contructor is only used in pixel-by-pixel mode
        pixelByPixel = true;

        projectedImage = imageToProject;
        projectedImage2D = (Texture2D)projectedImage;
        if (projectedImage2D != null)
            imageColours = projectedImage2D.GetPixels32();
        else
            imageColours = null;

        projectedImageData = precalculatedData;
        if (projectedImageData.colour)
            imageType = ImageType.Colour;

        // create cookies
        redCookie = new Texture2D(precalculatedData.textureSize, precalculatedData.textureSize, TextureFormat.Alpha8, false);
        redCookie2D = (Texture2D)redCookie;
        redCookie.wrapMode = TextureWrapMode.Clamp;
        // copy blacks from precalculated cookie
        Graphics.CopyTexture(precalculatedCookie, redCookie);

        redColors = redCookie2D.GetPixels32();

        if (imageType == ImageType.Colour)
        {
            greenCookie = new Texture2D(precalculatedData.textureSize, precalculatedData.textureSize, TextureFormat.Alpha8, false);
            blueCookie = new Texture2D(precalculatedData.textureSize, precalculatedData.textureSize, TextureFormat.Alpha8, false);
            greenCookie2D = (Texture2D)greenCookie;
            blueCookie2D = (Texture2D)blueCookie;
            greenCookie.wrapMode = blueCookie.wrapMode = TextureWrapMode.Clamp;
            Graphics.CopyTexture(precalculatedCookie, greenCookie);
            Graphics.CopyTexture(precalculatedCookie, blueCookie);
            greenColors = greenCookie2D.GetPixels32();
            blueColors = blueCookie2D.GetPixels32();
        }

        UpdateCookie(false);
    }

    public void Cleanup()
    {
        RenderTexture temp;

        if (!pixelByPixel)
        {
            temp = redCookie as RenderTexture;
            if (temp)
            {
                temp.Release();
                temp = greenCookie as RenderTexture;
                temp.Release();
                temp = blueCookie as RenderTexture;
                temp.Release();
            }
        }
        temp = vignetteCookie as RenderTexture;
        if (temp)
            temp.Release();
    }

    /// <summary>
    /// Creates the Cookie textures and gets the pixel buffers of each
    /// </summary>
    void CreateTexture()
    {
        if (pixelByPixel)
        {
            redCookie = new Texture2D(textureSize, textureSize, TextureFormat.Alpha8, false);
            greenCookie = new Texture2D(textureSize, textureSize, TextureFormat.Alpha8, false);
            blueCookie = new Texture2D(textureSize, textureSize, TextureFormat.Alpha8, false);

            redCookie.wrapMode = greenCookie.wrapMode = blueCookie.wrapMode = TextureWrapMode.Clamp;

            redCookie2D = (Texture2D)redCookie;
            greenCookie2D = (Texture2D)greenCookie;
            blueCookie2D = (Texture2D)blueCookie;

            redColors = redCookie2D.GetPixels32();
            greenColors = greenCookie2D.GetPixels32();
            blueColors = blueCookie2D.GetPixels32();
        }
        else
        {
            redCookie = new RenderTexture(textureSize, textureSize, 0, RenderTextureFormat.ARGB32);
            greenCookie = new RenderTexture(textureSize, textureSize, 0, RenderTextureFormat.ARGB32);
            blueCookie = new RenderTexture(textureSize, textureSize, 0, RenderTextureFormat.ARGB32);
            redCookie.wrapMode = greenCookie.wrapMode = blueCookie.wrapMode = TextureWrapMode.Clamp;
        }
    }

    /// <summary>
    /// Calculates light cone angle, draws the first Cookie, assigns cookie to light.
    /// </summary>
    void Initialise()
    {
        // get shaders
        if (singlePassR == null)
        {
            singlePassR = new Material(Shader.Find("Hidden/ProjectorSimSinglePass"));
            singlePassG = new Material(Shader.Find("Hidden/ProjectorSimSinglePass"));
            singlePassB = new Material(Shader.Find("Hidden/ProjectorSimSinglePass"));

            singlePassR.SetInt("_Channel", 0);
            singlePassG.SetInt("_Channel", 1);
            singlePassB.SetInt("_Channel", 2);

            vignetteShader = new Material(Shader.Find("Hidden/ProjectorSimVignette"));
        }

        if (!pixelByPixel)
        {
            if (projectedImage == null)
            {
                // create white texture
                projectedImage = new Texture2D(256, 256, TextureFormat.RGBA32, false, false);
                projectedImage2D = (Texture2D)projectedImage;
                projectedImage2D.wrapMode = TextureWrapMode.Clamp;
                projectedImage2D.anisoLevel = 1;
                projectedImage2D.filterMode = FilterMode.Trilinear;
            }
        }

        // calculate angle of light cone from throw ratio and possible lens shift amount
        imageWidth = distance / data.ratio;
        imageHeight = imageWidth / data.aspect;

        // calculate shift **IN METERS**
        float shift_H = imageWidth * (data.shift_h / 200.0f);
        float shift_V = imageHeight * (data.shift_v / 200.0f);

        // calculate how far the image can move with full lens shift applied (in meters from lens centre)
        float imageLimit_h = (imageWidth / 2.0f) + Mathf.Abs(shift_H);
        float imageLimit_v = (imageHeight / 2.0f) + Mathf.Abs(shift_V);
        maxImageEdgeDistance = Mathf.Max(imageLimit_h, imageLimit_v);

        metersToPixels = textureSize / (maxImageEdgeDistance * 2f);

        // Calculate the light angle required
        float spotAngle = Mathf.Atan(maxImageEdgeDistance / distance) * 2 * Mathf.Rad2Deg;
        redLight.spotAngle = greenLight.spotAngle = blueLight.spotAngle = spotAngle;

        if (!pixelByPixel)
        {
            // calculate extent of spotlight coverage at our arbitrary distance
            float totalHeight = distance * Mathf.Tan((spotAngle / 2) * Mathf.Deg2Rad) * 2;
            float totalWidth = totalHeight; // totalWidth is the same as the light coverage is square

            // scale is how many of this dimension can we fit into the cookie
            cookieSpaceScale = new Vector2(totalWidth / imageWidth, totalHeight / imageHeight);

            // offset is from bottom left corner of cookie, 1 unit = 1 image width/height
            float imageLeftEdge_m = totalWidth / 2 + (shift_H - imageWidth / 2);
            // clamp to allow a 1px border around image (otherwise even with our 1px border that can disappeasr at low resolutions)
            float pixelSize_m = totalWidth / textureSize;
            imageLeftEdge_m = Mathf.Clamp(imageLeftEdge_m, pixelSize_m, totalWidth - imageWidth - pixelSize_m);
            float imageLeftEdge_scale = imageLeftEdge_m / imageWidth;
            float imageBottomEdge_m = totalHeight / 2 + (shift_V - imageHeight / 2);
            imageBottomEdge_m = Mathf.Clamp(imageBottomEdge_m, pixelSize_m, totalHeight - imageHeight - pixelSize_m);
            float imageBottomEdge_scale = imageBottomEdge_m / imageHeight;

            cookieSpaceOffset = new Vector2(-imageLeftEdge_scale, -imageBottomEdge_scale);

            // vignette only used in shader processing
            vignetteCookie = new RenderTexture(projectedImage.width, projectedImage.height, 0, RenderTextureFormat.ARGB32);
        }

        // draw the cookie(s)
        UpdateCookie();
    }

    /// <summary>
    /// Called when image size/pos is changed and the image shape in the cookie will change
    /// </summary>
    /// <param name="cookieData"></param>
    public void Reinitialise(CookieData cookieData, VignetteData vd)
    {
        data = cookieData;
        _vignetteData = vd;
        Initialise();
    }

    void CalculatePixels(PixelCalcArgs args)
    {
        int x, y, pi_x, pi_y;
        int rowWidth, colHeight;
        float f;
        float rowProgress, colProgress;

        byte red, green, blue;
        red = green = blue = 255;

        // set pixel colors
        for (int i = 0; i < args.endIndex; i++)
        {
            x = i % projectedImageData.textureSize;
            y = i / projectedImageData.textureSize;

            // if no H keystone, make row width constant
            if (projectedImageData.imageWidthInCookie == projectedImageData.keystoneMinWidth)
            {
                rowWidth = projectedImageData.imageWidthInCookie;
            }
            else
            {
                // calculate row width after keystone correction
                float verticalProgress = (y - projectedImageData.imageTopEdgeInCookie) / (float)projectedImageData.imageHeightInCookie;
                if (projectedImageData.keystoneH_flip)
                    verticalProgress = 1f - verticalProgress;
                rowWidth = Mathf.RoundToInt(Mathf.Lerp(projectedImageData.imageWidthInCookie, projectedImageData.keystoneMinWidth, verticalProgress));
            }
            rowProgress = (x - (projectedImageData.imageCentreH - rowWidth / 2)) / (float)rowWidth;

            // if no V keystone, make col height constant
            if (projectedImageData.imageHeightInCookie == projectedImageData.keystoneMinHeight)
            {
                colHeight = projectedImageData.imageHeightInCookie;
            }
            else
            {
                // calculate column height after keystone correction
                float horizontalProgress = (x - projectedImageData.imageLeftEdgeInCookie) / (float)projectedImageData.imageWidthInCookie;
                if (projectedImageData.keystoneV_flip)
                    horizontalProgress = 1f - horizontalProgress;
                colHeight = Mathf.RoundToInt(Mathf.Lerp(projectedImageData.imageHeightInCookie, projectedImageData.keystoneMinHeight, horizontalProgress));
            }
            colProgress = (y - (projectedImageData.imageCentreV - colHeight / 2)) / (float)colHeight;

            // inside the image row?
            if (y > projectedImageData.imageCentreV - colHeight / 2 && y < projectedImageData.imageCentreV + colHeight / 2 &&
                // inside the image column?
                x > projectedImageData.imageCentreH - rowWidth / 2 && x < projectedImageData.imageCentreH - 1 + rowWidth / 2)
            {
                // white if no projected image
                if (imageColours == null)
                {
                    redColors[i] = new Color32(255, 255, 255, 255);

                    // Also set green and blue channels otherwise we get artefacts if colour box is checked
                    if (imageType == ImageType.Colour)
                    {
                        greenColors[i] = new Color32(255, 255, 255, 255);
                        blueColors[i] = new Color32(255, 255, 255, 255);
                    }
                }
                else // use the given texture
                {
                    // select which pixel to take from the image
                    pi_x = Mathf.RoundToInt(Mathf.Lerp(0, args.srcImgWidth - 1, rowProgress));
                    pi_y = Mathf.RoundToInt(Mathf.Lerp(0, args.srcImgHeight - 1, colProgress));
                    int flatindex = (args.srcImgWidth * pi_y) + pi_x;

                    // Colour or greyscale?
                    switch (imageType)
                    {
                        case ImageType.Colour:
                            red = (byte)Mathf.Clamp((imageColours[flatindex].r), 0, 255);
                            redColors[i] = new Color32(255, 255, 255, red);
                            green = (byte)Mathf.Clamp((imageColours[flatindex].g), 0, 255);
                            greenColors[i] = new Color32(255, 255, 255, green);
                            blue = (byte)Mathf.Clamp((imageColours[flatindex].b), 0, 255);
                            blueColors[i] = new Color32(255, 255, 255, blue);
                            break;
                        default: // greyscale
                            f = ((float)imageColours[flatindex].r +
                                        imageColours[flatindex].g +
                                        imageColours[flatindex].b) / 3f;
                            red = (byte)Mathf.Clamp((int)f, 0, 255);
                            redColors[i] = new Color32(255, 255, 255, red);
                            break;
                    }
                }
            }
            else if (args.doBlacks) // BLACK PIXELS
            {
                redColors[i] = new Color32(255, 255, 255, 0);
                if (imageType == ImageType.Colour)
                {
                    greenColors[i] = new Color32(255, 255, 255, 0);
                    blueColors[i] = new Color32(255, 255, 255, 0);
                }
            }
        }
    }

    public void ForceUpdateCookie(bool doBlacks)
    {
        UpdateCookie(doBlacks);
    }

    /// <summary>
    /// Calculates where the image will be in the cookie and creates the whole cookie texture
    /// </summary>
    void UpdateCookie(bool doBlacks = true)
    {
        if (pixelByPixel)
        {
            if (redColors == null) // have we already processed?
                return;

            if (doBlacks)
            {
                float resultWidth, resultHeight;
                resultWidth = distance / data.ratio;
                resultHeight = resultWidth / data.aspect;

                // calculate image position in pixels

                // calculate shift in meters
                Vector2 shift = new Vector2(resultWidth * (data.shift_h / 200.0f),
                                            resultHeight * (data.shift_v / 200.0f));

                // position of image in meters, relative to projector centre
                float imageLeftMeters = maxImageEdgeDistance - (resultWidth / 2.0f) + shift.x;
                float imageTopMeters = maxImageEdgeDistance - (resultHeight / 2.0f) + shift.y;

                // posisiton of image in the cookie texture
                int imageLeftPixels = (int)(imageLeftMeters * metersToPixels);
                int imageTopPixels = (int)(imageTopMeters * metersToPixels);

                // size of image in the cookie texture
                int imageWidthPixels = (int)(resultWidth * metersToPixels);
                int imageHeightPixels = (int)(resultHeight * metersToPixels);

                // keystone width
                float keystoneH = data.keystone_h / 100f;
                if (keystoneH < 0)
                    keystoneH *= -1;
                float keystoneMinWidth = imageWidthPixels * (1f - keystoneH);

                float keystoneV = data.keystone_v / 100f;
                if (keystoneV < 0)
                    keystoneV *= -1;
                float keystoneMinHeight = imageHeightPixels * (1f - keystoneV);

                // data about where the image is located in the cookie
                projectedImageData = new ProjectedImageInCookieData(imageLeftPixels, imageTopPixels, imageWidthPixels, imageHeightPixels,
                                                                    keystoneMinWidth, keystoneMinHeight,
                                                                    data.keystone_h < 0, data.keystone_v < 0,
                                                                    imageType == ImageType.Colour, textureSize);
            }

            PixelCalcArgs args;
            if (projectedImage)
                args = new PixelCalcArgs(projectedImage.width, projectedImage.height, imageType, doBlacks, 0, redColors.Length);
            else
                args = new PixelCalcArgs(0, 0, imageType, doBlacks, 0, redColors.Length);
            CalculatePixels(args);

            // apply new colours once cookies are calculated
            redCookie2D.SetPixels32(redColors);
            redCookie2D.Apply();
            if (imageType == ImageType.Colour)
            {
                greenCookie2D.SetPixels32(greenColors);
                greenCookie2D.Apply();
                blueCookie2D.SetPixels32(blueColors);
                blueCookie2D.Apply();
            }
        }
        else // shader-based approach
        {
            // safety nets
            if (projectedImage == null) // should never happen, as we create a white image when null is passed in
            {
                Debug.Log("ProjectedImage is null!");
                return;
            }

            if (_vignetteData._enabled)
            {
                vignetteShader.SetFloat("_vignetteOffsetX", _vignetteData._offset.x);
                vignetteShader.SetFloat("_vignetteOffsetY", _vignetteData._offset.y);
                vignetteShader.SetFloat("_vignetteRadius", _vignetteData._radius);
                vignetteShader.SetFloat("_vignetteFadeSize", _vignetteData._fadeSize);
                vignetteShader.SetInt("circle", _vignetteData._circular ? 1 : 0);
                vignetteShader.SetFloat("_aspectRatio", _vignetteData._forceCircle ? data.aspect : 1.0f);

                Graphics.Blit(projectedImage, vignetteCookie as RenderTexture, vignetteShader);
            }

            Shader.SetGlobalInt("_PJSimCookieSize", textureSize);
            Shader.SetGlobalVector("_PJSimTransform", new Vector4(cookieSpaceScale.x, cookieSpaceScale.y, cookieSpaceOffset.x, cookieSpaceOffset.y));
            Graphics.Blit(_vignetteData._enabled ? vignetteCookie : projectedImage, redCookie as RenderTexture, singlePassR);
            Graphics.Blit(_vignetteData._enabled ? vignetteCookie : projectedImage, greenCookie as RenderTexture, singlePassG);
            Graphics.Blit(_vignetteData._enabled ? vignetteCookie : projectedImage, blueCookie as RenderTexture, singlePassB);
        }

        // garbage collection, otherwise RAM usage goes waaaaaaay up
#if UNITY_EDITOR
        if (EditorApplication.isPlaying)
        {
#endif
            // deallocate memory now that cookie has been created
            if (projectedImage as Texture2D != null)
                projectedImage = null;
            imageColours = null;
            if (!supportLiveUpdate)
                redColors = greenColors = blueColors = null;
#if UNITY_EDITOR
        }
#endif
    }

    /// <summary>
    /// Set the image to project (does NOT cause a redraw - call Reinitialise to redraw)
    /// </summary>
    /// <param name="image"></param>
    /// <param name="pixels"></param>
    public void SetProjectedImage(Texture2D image)
    {
        projectedImage = image;
        if (image != null && pixelByPixel)
        {
            imageColours = image.GetPixels32();
        }
    }
    public void RemoveProjectedImage() { projectedImage = null; imageColours = null; }
    public void SetProjectedImageType(ImageType type, bool modifyLightEnabledStatus = true)
    {
        imageType = type;
        if (imageType == ImageType.Colour) // colour mode?
            redLight.color = Color.red;
        else
            redLight.color = Color.white;

        // should we also modify the light active status? (this check is so that we do not enable lights on a disabled projector)
        if (modifyLightEnabledStatus)
        {
            greenLight.gameObject.SetActive(imageType == ImageType.Colour);
            blueLight.gameObject.SetActive(imageType == ImageType.Colour);
        }
    }
    public void SetCookieSize(int newSize)
    {
        textureSize = newSize;
        CreateTexture();
        Initialise();
    }

    public Texture GetRedCookie() { return redCookie; }
    public Texture GetGreenCookie() { return greenCookie; }
    public Texture GetBlueCookie() { return blueCookie; }

    public ProjectedImageInCookieData GetProjectedImageData() { return projectedImageData; }
}