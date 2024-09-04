using System.Collections;
using System.Collections.Generic;
using RealityEditor;
using UnityEngine;
using UnityEngine.UI;

public class ColorSelector : MonoBehaviour
{

    public GenerateSpot spot;

    public Slider ColorSlider;
    public Slider GraySlider;
    public Slider AlhpaSlider;

    public Material MainMaterial , projectorMaterial;

    public Image colorhint;


    // Start is called before the first frame update
    void Start()
    {

        // spot=transform.parent.gameObject.GetComponent<GenerateSpot>();
        


    }

    // Update is called once per frame
    void Update()
    {



        switch(spot.SpotType){
            case GenerateType.Add :

                MainMaterial=spot.TargetMaterial;


                MainMaterial.SetColor("_MulColor",GetColorFromValue(ColorSlider.value));
                colorhint.color= GetColorFromValue(ColorSlider.value);
                MainMaterial.SetFloat("_Gray",GraySlider.value);
                MainMaterial.SetFloat("_Alpha",AlhpaSlider.value);




                break;
              



            case GenerateType.Instruction :
            
            
            
            break;




            case GenerateType.Reconstruction :
            
            break;







        }








        
    }



    public  Color GetColorFromValue(float value)
    {
        // Clamp value to the range [0, 1]
        value = Mathf.Clamp01(value);

        // Define key colors for the gradient
        Color[] keyColors = new Color[] {
            Color.white, // End with white, // Start with black
            Color.red,
            new Color(1, 0.5f, 0), // Orange
            Color.yellow,
            Color.green,
            Color.blue,
            new Color(0.29f, 0, 0.51f), // Indigo
            new Color(0.93f, 0.51f, 0.93f), // Violet
          Color.black
        };

        // Calculate the segment length based on the number of transitions
        float segmentLength = 1f / (keyColors.Length - 1);

        // Find the current segment and interpolate the color
        for (int i = 0; i < keyColors.Length - 1; i++)
        {
            if (value <= segmentLength * (i + 1))
            {
                float segmentStart = segmentLength * i;
                // Normalize the value to the current segment
                float normalizedValue = (value - segmentStart) / segmentLength;
                return Color.Lerp(keyColors[i], keyColors[i + 1], normalizedValue);
            }
        }

        // Fallback to white if something goes wrong
        return Color.white;
    }






}
