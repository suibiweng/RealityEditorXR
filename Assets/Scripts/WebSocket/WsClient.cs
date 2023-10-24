using UnityEngine;
using WebSocketSharp;
using RealityEditor;
public class WsClient : MonoBehaviour
{
    public RealityEditorManager manager;

    public string connectURL="ws://34.106.250.143:8888/websocket";
    WebSocket ws;
    private void Start()
    {
        ws = new WebSocket(connectURL);

        manager=FindObjectOfType<RealityEditorManager>();

        ws.Connect();
        ws.OnMessage += (sender, e) =>
        {
            Debug.Log("Message Received from "+((WebSocket)sender).Url+", Data : "+e.Data);




        };
    }


    




private void Update()
    {
        if(ws == null)
        {
            return;
        }
        if (Input.GetKeyDown(KeyCode.A))
        {
            print("A");
            ws.Send("Hello");
        }  
    }


public void sendMessageToServer(WebSocketmessage msg){


     ws.Send(msg.getMsg());



}



}