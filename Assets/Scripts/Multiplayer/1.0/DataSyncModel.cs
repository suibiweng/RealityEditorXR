using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[RealtimeModel (createMetaModel: true)]
public partial class DataSyncModel {
    [RealtimeProperty(1, true, true)]
    private string _URLID;
    [RealtimeProperty(2, true, true)]
    private string _Prompt;
    [RealtimeProperty(3, true, true)]
    private Color _Color;
    
}