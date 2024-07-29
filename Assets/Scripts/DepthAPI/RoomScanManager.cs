using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class RoomScanManager : MonoBehaviour
{

    public MeshExporter meshExporter;
    public GameObject targetObj;

    public List<GameObject> Cropboxes;


    public GameObject BoundingBox;

    // Start is called before the first frame update
    void Start()
    {
        Cropboxes=new List<GameObject>();
    //    StartCoroutine(searchRoomMesh(1.0f));
    
        //Search room mesh

    }

 
    MeshFilter TargetMesh;
    Vector3 RoomPosition;

    public void getMeshObj (MeshFilter meshFilter)
    {

        targetObj=meshFilter.gameObject;
        TargetMesh=meshFilter;
        meshExporter.objectToExport=meshFilter.gameObject;

        RoomPosition=targetObj.transform.position;

         Debug.Log("Room:"+RoomPosition+targetObj.transform.localScale+targetObj.transform.rotation.eulerAngles);



    }


    public void uploadRoomMesh(){

        meshExporter.UploadMeshDirectly(targetObj);


    }



    public void uploadCropRoomMesh(){

        //meshExporter.CropAndUploadMesh(targetObj.GetComponent<MeshFilter>(),BoundingBox);


    }

    public void getallCropBoxes(){

        foreach (GameObject g in GameObject.FindGameObjectsWithTag("CropBox")){

            Debug.Log(g.name + g.transform.position+g.transform.localScale+g.transform.rotation.eulerAngles);
            Cropboxes.Add(g);

            





        }




    }


    


    // Update is called once per frame
    void Update()
    {
        
    }
}
