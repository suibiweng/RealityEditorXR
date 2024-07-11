using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RealtimeModel]
public partial class DataSyncModel {
    [RealtimeProperty(1, true, true)]
    private string _PromptData;
    [RealtimeProperty(2, true, true)]
    private string _URLID;
    [RealtimeProperty(3, true, true)]
    private int _TestNumber;
} 

