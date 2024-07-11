using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[RealtimeModel (createMetaModel: true)]
public partial class DataSyncModel2 {
    [RealtimeProperty(1, true, true)]
    private string _URLID;
    [RealtimeProperty(2, true, true)]
    private string _Prompt;
    
}