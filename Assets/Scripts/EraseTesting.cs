using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EraseTesting : MonoBehaviour
{
    public GameObject mask;
    public GameObject colorAdj;
    public bool turnON=false;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

        mask.SetActive(turnON);
        colorAdj.SetActive(turnON);
        
    }

    public void turnOnandOff(){

        turnON=!turnON;

        



    }
}
