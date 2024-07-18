using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using TMPro;

public class PreviewCube : MonoBehaviour
{

    public GameObject previewCube;
    public GameObject Cube;

    // Start is called before the first frame update
    void Start()
    {
        Cube= Instantiate(previewCube,transform.position,Quaternion.identity)as GameObject;
        GenerateSpot spot =Cube.GetComponent<GenerateSpot>();
        Cube.name=this.gameObject.name;
      //  spot.previewText.text=Cube.name;
        this.transform.parent=spot.TargetObject.transform;

        this.transform.localPosition= Vector3.zero;


        


        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
