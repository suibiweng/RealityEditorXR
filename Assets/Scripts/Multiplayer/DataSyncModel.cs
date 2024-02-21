using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RealtimeModel(createMetaModel:true)]
public partial class DataSyncModel {
    [RealtimeProperty(1, true, true)]
    private string _PromptData;
    [RealtimeProperty(2, true, true)]
    private string _URLID;
} 

