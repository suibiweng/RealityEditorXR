using UnityEngine;
using WebSocketSharp;
public class WsClient : MonoBehaviour
{
    

    WebSocket ws;
    private void Start()
    {
        ws = new WebSocket("ws://34.106.250.143:8888/websocket");
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


public void sendMessageToServer(string msg){



}



}