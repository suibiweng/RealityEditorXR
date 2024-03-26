using System.Collections;
using System.Collections.Generic;

using UnityEngine;

public class FaceToUser : MonoBehaviour
{
    public GameObject player;
    // Start is called before the first frame update
    void Start()
    {
        player=Camera.main.gameObject;
    }

    // Update is called once per frame
    void Update()
    {
        transform.LookAt(
            new Vector3(player.transform.position.x,transform.position.y,player.transform.position.z)
            );
    }
}
