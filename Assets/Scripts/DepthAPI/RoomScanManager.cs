using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoomScanManager : MonoBehaviour
{

    public MeshExporter meshExporter;
    public GameObject targetObj;


    public GameObject BoundingBox;

    // Start is called before the first frame update
    void Start()
    {
    //    StartCoroutine(searchRoomMesh(1.0f));
    
        //Search room mesh

    }

 
    MeshFilter TargetMesh;

    public void getMeshObj (MeshFilter meshFilter)
    {

        targetObj=meshFilter.gameObject;
        TargetMesh=meshFilter;
        meshExporter.objectToExport=meshFilter.gameObject;

    }


    public void uploadRoomMesh(){

        meshExporter.UploadMeshDirectly(targetObj);


    }



    public void uploadCropRoomMesh(){

        //meshExporter.CropAndUploadMesh(targetObj.GetComponent<MeshFilter>(),BoundingBox);


    }


    


    // Update is called once per frame
    void Update()
    {
        
    }
}
