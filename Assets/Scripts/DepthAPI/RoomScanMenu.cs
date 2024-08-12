using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class RoomScanMenu : MonoBehaviour
{

    public RoomScanManager roomScanManager;
    public Button ScanButton;
    public TMP_Text ScanTextBtn;
    // Start is called before the first frame update
    void Start()
    {

        roomScanManager= FindAnyObjectByType<RoomScanManager>();


        
    }

    public void ButtonScanPressed(){
        if(!roomScanManager.recording){

            ScanTextBtn.text="Start to Scan the Room";
            roomScanManager.StartRoomScanning();

        }else {


             ScanTextBtn.text="Stop to Scan the Room";
             roomScanManager.EndRoomScanning();


        }




    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
