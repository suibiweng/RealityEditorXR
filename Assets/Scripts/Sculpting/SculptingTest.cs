using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using SculptingPro;

public class SculptingTest : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    bool setSculpting = false;

    // Update is called once per frame
    void Update()
    {
        if (transform.childCount==0)
          return; 
        else{
           

            if (!setSculpting){

                setSculpting = true;
                   GetComponentInChildren<MeshFilter>().gameObject.AddComponent<SculptingPro_Model>();


            }
          




          }

        


          




    

        
    }
}
