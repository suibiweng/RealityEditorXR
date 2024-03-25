using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using UnityEngine.UIElements;
using RealityEditor;


public class DownloadReconstruction : MonoBehaviour
{

    public GenerateSpot spot;
    private Dictionary<string, string> fileNameToUrlMap;
    public Dropdown dropdown; // Assign this in the Inspector

    public string url = "http://example.com/"; // Set your URL here

    void Start()
    {
        if (dropdown == null)
        {
            Debug.LogError("Dropdown component not assigned.");
            return;
        }

        fileNameToUrlMap = new Dictionary<string, string>();

        url=spot.downloadURL+"/FromIPAD/";
       // modelDownloader=FindAnyObjectByType<ModelDownloader>();
        StartCoroutine(GetZipFileList(url));
    }

    IEnumerator GetZipFileList(string url)
    {
        using (UnityWebRequest webRequest = UnityWebRequest.Get(url))
        {
            yield return webRequest.SendWebRequest();

            if (webRequest.result != UnityWebRequest.Result.Success)
            {
                Debug.Log($"Error: {webRequest.error}");
            }
            else
            {
                ParseHtmlForZipFiles(webRequest.downloadHandler.text);
                PopulateDropdown();
            }
        }
    }

    void ParseHtmlForZipFiles(string htmlContent)
    {
        MatchCollection matches = Regex.Matches(htmlContent, "href=\"([^\"]+\\.zip)\"", RegexOptions.IgnoreCase);
        
        foreach (Match match in matches)
        {
            if (match.Success)
            {
                string fileUrl = match.Groups[1].Value;
                string fileNameWithoutExtension = ExtractFileNameWithoutExtension(fileUrl);
                if (!fileNameToUrlMap.ContainsKey(fileNameWithoutExtension))
                {
                    fileNameToUrlMap.Add(fileNameWithoutExtension, fileUrl);
                }
            }
        }
    }

    void PopulateDropdown()
    {
        dropdown.ClearOptions(); // Clear existing options
        List<string> fileNames = new List<string>(fileNameToUrlMap.Keys);
        dropdown.AddOptions(fileNames); // Add new options
    }

    string ExtractFileNameWithoutExtension(string fileUrl)
    {
        var segments = fileUrl.Split('/');
        var fileNameWithExtension = segments[segments.Length - 1];
        var fileNameWithoutExtension = fileNameWithExtension.Split('.')[0];
        return fileNameWithoutExtension;
    }

    public string GetUrlByFileName(string fileNameWithoutExtension)
    {
        if (fileNameToUrlMap.TryGetValue(fileNameWithoutExtension, out string url))
        {
            return url;
        }
        else
        {
            return null; // Or any appropriate default value or message
        }
    }

    public void startToDownload(){

           int index = dropdown.value;
           string selectedFileName = dropdown.options[index].text;

           string DownLoadURL=GetUrlByFileName(selectedFileName);

           print(DownLoadURL);

           spot.downloadModel( url+DownLoadURL,spot.TargetObject);



    }

    void Update(){

        if(Input.GetKeyDown(KeyCode.W)){

            startToDownload();



        }

    }
}

