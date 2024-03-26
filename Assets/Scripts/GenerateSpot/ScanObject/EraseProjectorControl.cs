using System.Collections;
using System.Collections.Generic;
using System.Drawing;
using UnityEngine;

public class EraseProjectorControl : MonoBehaviour
{
    public Projector projector;



[ColorUsage(true, true)]
 public UnityEngine.Color left;



    public Material mat;




    [Range(0,1)]
     public float intenstive=0.5f ;
    
    // Start is called before the first frame update
    void Start()
    {
        projector=GetComponent<Projector>();

       mat= projector.material;
    

        // left= new Vector4(1,1,1,0);

        // right= new Vector4(1,1,1,1);
    
        
    }

    // Update is called once per frame
    void Update()
    {

      // UnityEngine.Color color =UnityEngine.Color.Lerp(left,right,intenstive);



    //    Color( r * intenstive, g * intenstive, b * intenstive).


    //     UnityEngine.Color hdrColor = new UnityEngine.Color(c.r * intenstive, c.g * intenstive, c.b * intenstive, c.a);
        
        
    //     mat.SetColor("_MulColor",hdrColor);

    }
}
