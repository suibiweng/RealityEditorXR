using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

using OVR;
using UnityEditor;
public enum CameraType{
       Mono,Stereo
 


}



public class CameraSelectPoints : MonoBehaviour
{
    public GameObject indicator;


    public Texture CameraTexture;


    public TMP_Text coordinate;
    public CameraType cameraType;
    
    public Camera screenCam;
    public RealityEditorManager Manager;

    public RectTransform LeftPoint,RightPoint,CenterPoint;
    public Vector2 leftOffset,rightOffset,centerOffest;

     public Vector2 LeftAim,RightAim,centerAim;


    public Vector2 rLeftAim,rRightAim,rCenterAim;

   // public GameObject testTarget;
    public float speed =0.001f;

    public bool isActive;
    public CanvasGroup canvasGroup;

    
    // Start is called before the first frame update
    void Start()
    {
        Manager=FindObjectOfType<RealityEditorManager>();
        canvasGroup=GetComponent<CanvasGroup>();
        CameraTexture=GetComponent<RawImage>().texture;
        
        
    }

    public void Seton(bool active){

        if(active){

             canvasGroup.alpha=1f;


        }else{

              canvasGroup.alpha=0f;


        }



    }



    // Update is called once per frame
    void Update()
    {

          var joystick = OVRInput.Get(OVRInput.RawAxis2D.LThumbstick, OVRInput.Controller.LTouch);
     if(Manager.getSelectSpot()!=null){
    //     if(testTarget!=null){

            if(cameraType==CameraType.Stereo){

                Vector3 screenPos = screenCam.WorldToScreenPoint(Manager.getSelectSpot().GetComponent<GenerateSpot>().transform.position);

              //Vector3 screenPos = screenCam.WorldToScreenPoint(testTarget.transform.position);
               LeftAim=new Vector2(-(screenPos.x/2+leftOffset.x),screenPos.y/2+leftOffset.y);
               RightAim=new Vector2(-(screenPos.x/2+rightOffset.x),screenPos.y/2+rightOffset.y);


              LeftPoint.localPosition=new Vector3(LeftAim.x,LeftAim.y,0);
              RightPoint.localPosition=new Vector3(RightAim.x,RightAim.y,0);
              
              

              rLeftAim=new Vector2(LeftAim.x,-(LeftAim.y-120));
              rRightAim=new Vector2(-(RightAim.x+40),-(RightAim.y-120));
              print(rLeftAim.ToString());





            }


            if(cameraType==CameraType.Mono){

                centerOffest =new Vector2 (centerOffest.x + (joystick.x * Time.deltaTime * speed) , centerOffest.y + (joystick.y * Time.deltaTime * speed));
             
             



                 Vector3 screenPos = screenCam.WorldToScreenPoint(Manager.getSelectSpot().GetComponent<GenerateSpot>().transform.position);


                LeftPoint.gameObject.SetActive(false);
                RightPoint.gameObject.SetActive(false);

                centerAim=new Vector2((screenPos.x+centerOffest.x),screenPos.y+centerOffest.y);

                CenterPoint.localPosition=new Vector2(centerAim.x,centerAim.y);
          

                


                
                coordinate.text=centerOffest.ToString();
                rCenterAim=new Vector2(centerAim.x+320,centerAim.y+240);
     
              






             }
            





        }

        
    }
}
