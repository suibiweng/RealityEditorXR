using System.Collections;
using System.Collections.Generic;
using JetBrains.Annotations;
using UnityEngine;
using Oculus.Interaction;
public class Eraser : MonoBehaviour
{
    public Grabbable grabbable;

    public GameObject EraseLine;
    public GameObject pen;

    // Start is called before the first frame update
    void Start()
    {
         grabbable = GetComponentInChildren<Grabbable>();
    }

    // Update is called once per frame
    void Update()
    {


        if (grabbable.SelectingPointsCount > 0) // is grabbing
        {

            if (OVRInput.GetDown(OVRInput.Button.SecondaryIndexTrigger)){

                pen=Instantiate(EraseLine,transform.position,transform.rotation);
            
            }

            if(OVRInput.Get(OVRInput.Button.SecondaryIndexTrigger)){

                pen.transform.position=transform.position;


            }

            if(OVRInput.GetUp(OVRInput.Button.SecondaryIndexTrigger)){

                pen=null;


            }





            // Grabbing logic here if needed
        }
        else
        {
        
        }
    }
}
