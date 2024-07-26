using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoomScanManager : MonoBehaviour
{

    public MeshExporter meshExporter;
    public GameObject targetObj;

    // Start is called before the first frame update
    void Start()
    {
    //    StartCoroutine(searchRoomMesh(1.0f));
    
        //Search room mesh

    }

    public IEnumerator searchRoomMesh(float waitSeconds){
        yield return new WaitForSeconds(waitSeconds);


                            var list=GameObject.FindObjectsOfType<OVRSceneAnchor>();
            for(int i=0;i<list.Length;i++)
            {
                if(i==0)
                {
                    GameObject room=list[i].gameObject;
                    //MeshFilter roomMeshFilter=room.GetComponent<MeshFilter>();
                    targetObj=room;
                    //_MeshFilter.mesh = roomMeshFilter.mesh;
                    //_MeshCollider.sharedMesh = roomMeshFilter.mesh;
                    //  meshObject.transform.rotation=room.transform.rotation;
                    //meshObject.transform.localScale = new Vector3(0.2f, 0.2f, 0.2f);
                    //_Button.gameObject.SetActive(false);
                }
            } 








    }

    public void getMeshObj (MeshFilter meshFilter)
    {

        targetObj=meshFilter.gameObject;

    }


    public void uploadRoomMesh(){

        meshExporter.UploadMeshDirectly(targetObj);


    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
