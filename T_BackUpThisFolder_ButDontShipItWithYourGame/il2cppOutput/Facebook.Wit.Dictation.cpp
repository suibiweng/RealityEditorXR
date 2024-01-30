#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<Meta.WitAi.WitRequest>
struct Action_1_tEE33A71F533D86EBC6A768BBF5F08D7A5AA0DA35;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Byte[]>
struct ConcurrentQueue_1_t65D5F18D7E02C26657F50B992141DC982E85B4A0;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.HashSet`1<Meta.WitAi.Events.SpeechEvents>
struct HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte>
struct Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42;
// System.Predicate`1<Meta.WitAi.Dictation.DictationService>
struct Predicate_1_t6908C676249317F191C97BFF88A5D965269E406D;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Dictation.Data.DictationSession>
struct UnityEvent_1_t28CBA41B8B0574B5E1848D4A3DF73736EBEBB356;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Meta.WitAi.Data.Info.ComposerGraph[]
struct ComposerGraphU5BU5D_t0BB5CF7F79C326E2D5DC0E30FA07EDFC0C7155D3;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Meta.WitAi.Dictation.DictationService[]
struct DictationServiceU5BU5D_t654A9C0CAC568CD2929B5D4F8A1179D019FE26CB;
// Meta.WitAi.Interfaces.IDynamicEntitiesProvider[]
struct IDynamicEntitiesProviderU5BU5D_t03676A0B837E3DEC5D33166D2B141C51233506DC;
// Meta.WitAi.Events.IWitByteDataReadyHandler[]
struct IWitByteDataReadyHandlerU5BU5D_t5C855C7DCEE7E44891EF8F6AFCFC95F8A53CE83A;
// Meta.WitAi.Events.IWitByteDataSentHandler[]
struct IWitByteDataSentHandlerU5BU5D_t5605135D2F9ABA76F7F38A9C30BC3EB16C99CEA7;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Meta.WitAi.Data.Info.WitCharacterInfo[]
struct WitCharacterInfoU5BU5D_t25225BD0C1F5E253122ABDD3562C9D0BA7D4E5E1;
// Meta.WitAi.Data.Info.WitEntityInfo[]
struct WitEntityInfoU5BU5D_tB0A63D23CECFD14157CB1D03E656D3CFCCFF3499;
// Meta.WitAi.Data.Info.WitIntentInfo[]
struct WitIntentInfoU5BU5D_t95D033231DE201B282D0C427BFF8E50F9C51D086;
// Meta.WitAi.Data.Info.WitTraitInfo[]
struct WitTraitInfoU5BU5D_tB790BA9F9C3B601ED9CD568A23C330D1EDF596D2;
// Meta.WitAi.Data.Info.WitVersionTagInfo[]
struct WitVersionTagInfoU5BU5D_t84FAB6A032C1C9E9B3BF7E4C95D3A8C84D26C637;
// Meta.WitAi.Data.Info.WitVoiceInfo[]
struct WitVoiceInfoU5BU5D_tDC3B4221779AC23CB86E3690D68414110CB627EC;
// Meta.WitAi.Data.AudioBuffer
struct AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72;
// Meta.WitAi.AudioDurationTracker
struct AudioDurationTracker_t43BE70DF8036B15F8C7D0E4E49F3333F0323BBFD;
// Meta.WitAi.Events.AudioDurationTrackerFinishedEvent
struct AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647;
// Meta.WitAi.Data.AudioEncoding
struct AudioEncoding_t98ED2D092A9829C604C73C3B611E2FC987413EE4;
// Meta.WitAi.Events.UnityEventListeners.AudioEventListener
struct AudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB;
// Meta.WitAi.ServiceReferences.AudioInputServiceReference
struct AudioInputServiceReference_tE6CB7A8166C583A570C07974A6E87F9D2C4C16B4;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Meta.WitAi.Interfaces.CustomTranscriptionProvider
struct CustomTranscriptionProvider_tC6EABF251A11EFEBE5A8AD8D77CEBF14FB1009C5;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Meta.WitAi.Dictation.Events.DictationEvents
struct DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC;
// Meta.WitAi.Dictation.DictationService
struct DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A;
// Meta.WitAi.ServiceReferences.DictationServiceAudioEventReference
struct DictationServiceAudioEventReference_t31BDC97AE06ADFF2F0EBC8F6F382FC846E70FCA3;
// Meta.WitAi.Dictation.Data.DictationSession
struct DictationSession_tD5DEAD00ADA69A7134F920A37933B042F4D3E74D;
// Meta.WitAi.Dictation.Events.DictationSessionEvent
struct DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Net.HttpWebRequest
struct HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9;
// Meta.WitAi.Interfaces.IAudioInputEvents
struct IAudioInputEvents_tF18D401737AABD0DF7EC79AD5846A2E82F635655;
// Meta.WitAi.Dictation.IDictationService
struct IDictationService_tB2BC91A139297C3D8A0A27B32EC92B14437C8F10;
// Meta.WitAi.Interfaces.IDynamicEntitiesProvider
struct IDynamicEntitiesProvider_tBA0D49C35A9CCDC33A56C48C1DF22EAC2732BAAC;
// Meta.WitAi.ITelemetryEventsProvider
struct ITelemetryEventsProvider_tB40ECC8D0BA678B614C6EE5C7B13D470D4A237C2;
// Meta.WitAi.Interfaces.ITranscriptionEvent
struct ITranscriptionEvent_tF48A05E7EFA481DA37B20DE69F0FC45230C74FC0;
// Meta.WitAi.Interfaces.ITranscriptionProvider
struct ITranscriptionProvider_t1379E57D7819531CCF5D18483E8D93DB1127DA2D;
// Meta.WitAi.IVoiceEventProvider
struct IVoiceEventProvider_t976993FF17250739A08016703CB70BDE6A373D14;
// Meta.WitAi.Interfaces.IWitRequestProvider
struct IWitRequestProvider_t25CCD07211D4B7EBE747121AD2E4DA5E0A49F33E;
// Meta.WitAi.IWitRuntimeConfigProvider
struct IWitRuntimeConfigProvider_t4EC310EB59B06D7A552E553E0F5A44FAD744B9A4;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Meta.WitAi.Dictation.MultiRequestTranscription
struct MultiRequestTranscription_tE95F8ABA905139B0AD7F940A65D4D5B9E94FFFB6;
// Meta.Voice.NLPRequestResponseEvent
struct NLPRequestResponseEvent_tDD562F3B70B56867885CA6AF029E93258D6ACB44;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Meta.WitAi.Events.SpeechEvents
struct SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Meta.WitAi.Events.TelemetryEvents
struct TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC;
// Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener
struct TranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5;
// Meta.Voice.TranscriptionRequestEvent
struct TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// Meta.WitAi.Events.VoiceEvents
struct VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9;
// Meta.WitAi.VoiceService
struct VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E;
// Meta.WitAi.Requests.VoiceServiceRequest
struct VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536;
// Meta.WitAi.Events.VoiceServiceRequestEvent
struct VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13;
// Meta.WitAi.Requests.VoiceServiceRequestEvent
struct VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601;
// Meta.WitAi.Requests.VoiceServiceRequestEvents
struct VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838;
// Meta.WitAi.Requests.VoiceServiceRequestResults
struct VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497;
// Meta.WitAi.Data.VoiceSession
struct VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Meta.WitAi.Events.WitByteDataEvent
struct WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC;
// Meta.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E;
// Meta.WitAi.Dictation.WitDictation
struct WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407;
// Meta.WitAi.Configuration.WitEndpointConfig
struct WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D;
// Meta.WitAi.Events.WitErrorEvent
struct WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2;
// Meta.WitAi.Events.WitMicLevelChangedEvent
struct WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7;
// Meta.WitAi.WitRequest
struct WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900;
// Meta.WitAi.Events.WitRequestCreatedEvent
struct WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B;
// Meta.WitAi.Configuration.WitRequestOptions
struct WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483;
// Meta.WitAi.Events.WitRequestOptionsEvent
struct WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B;
// Meta.WitAi.Events.WitResponseEvent
struct WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA;
// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C;
// Meta.WitAi.Configuration.WitRuntimeConfiguration
struct WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05;
// Meta.WitAi.WitService
struct WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB;
// Meta.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739;
// Meta.WitAi.Events.WitValidationEvent
struct WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C;
// Meta.WitAi.CoroutineUtility/CoroutinePerformer
struct CoroutinePerformer_t2423B696217C7475EF6AFE1D33000E8766703559;
// Meta.WitAi.Utilities.DictationServiceReference/<>c
struct U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E;
// Meta.WitAi.WitRequest/OnCustomizeUriEvent
struct OnCustomizeUriEvent_t9763454475C9A0802CE0A68DD50B1206BC1678BE;
// Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent
struct OnProvideCustomHeadersEvent_tAE425A4949CC45A3669E527731B58B12341E7AA4;
// Meta.WitAi.WitRequest/PreSendRequestDelegate
struct PreSendRequestDelegate_t2C0F13F2841C74740CFA0F3F4BAF91EC5CF87C5A;

IL2CPP_EXTERN_C RuntimeClass* DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t6908C676249317F191C97BFF88A5D965269E406D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Find_TisDictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A_mE9D6D550A98E242EC2F93BE818D2FAB1FBEF9A3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB_m0118E41DCAF2BA67B2779D8291BF03E32A98AA9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5_mDB4CC2FDB27B4ED85BF16474E02AD103A7E6C2B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB_mA9D185D54B663169AD1D27353B36FB9399F083A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5_m20B4FF673BCE55E37833D906DBB982415E18F185_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisWitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB_m2FFE0848746B9245C0EC4720A3DB19ADFC811209_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiRequestTranscription_OnCancelled_m3A9BE081F6B613099699E3F1C9BF492B693A6446_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiRequestTranscription_OnFullTranscription_mC89778BE8EA34158E3298FE30BC5754EDA67C147_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiRequestTranscription_OnPartialTranscription_m90F3C83D530D86D412B4DF5B6F08FD80CBEFDD88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisDictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A_m3B494FD89E96747E95CF9DFA0C006B1D5A35BBBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_FindObjectsOfTypeAll_TisDictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A_m123A8E33478179DD1FE3E090F8877B4A2A99E9A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_DictationServiceU3Eb__2_0_m5EAEC25BEB18D37A15FBC8E0E333D038ACB58057_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m0C8011D74C12E916F54FF256A60C04A334AB5111_RuntimeMethod_var;
struct ComposerGraph_t1AEED7052A249877C3A05B265FDC790A35F7EFC6_marshaled_com;
struct ComposerGraph_t1AEED7052A249877C3A05B265FDC790A35F7EFC6_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct WitCharacterInfo_tBE4FAB8304100E9A2900137C260D231AF79CB49D_marshaled_com;
struct WitCharacterInfo_tBE4FAB8304100E9A2900137C260D231AF79CB49D_marshaled_pinvoke;
struct WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_com;
struct WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_pinvoke;
struct WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_marshaled_com;
struct WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_marshaled_pinvoke;
struct WitVersionTagInfo_t1FB34DB86D5B5C75148C2961D1405CE4C02E1089_marshaled_com;
struct WitVersionTagInfo_t1FB34DB86D5B5C75148C2961D1405CE4C02E1089_marshaled_pinvoke;
struct WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_marshaled_com;
struct WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DictationServiceU5BU5D_t654A9C0CAC568CD2929B5D4F8A1179D019FE26CB;
struct IDynamicEntitiesProviderU5BU5D_t03676A0B837E3DEC5D33166D2B141C51233506DC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA87E5A6AEC271C971E6182A6B7BFA4EFCEC69FD1 
{
};

// Meta.Voice.VoiceRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>
struct VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981  : public RuntimeObject
{
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onStateChange
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onStateChange_0;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onInit
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onInit_1;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onSend
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onSend_2;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onCancel
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onCancel_3;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onFailed
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onFailed_4;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onSuccess
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onSuccess_5;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onComplete
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onComplete_6;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onDownloadProgressChange
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onDownloadProgressChange_7;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onUploadProgressChange
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onUploadProgressChange_8;
};

// Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct VoiceRequest_4_t635CDB7E63C5322E9D11D83B63A401260F8BAA8C  : public RuntimeObject
{
	// Meta.Voice.VoiceRequestState Meta.Voice.VoiceRequest`4::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_0;
	// System.Single Meta.Voice.VoiceRequest`4::<DownloadProgress>k__BackingField
	float ___U3CDownloadProgressU3Ek__BackingField_1;
	// System.Single Meta.Voice.VoiceRequest`4::<UploadProgress>k__BackingField
	float ___U3CUploadProgressU3Ek__BackingField_2;
	// TOptions Meta.Voice.VoiceRequest`4::<Options>k__BackingField
	WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___U3COptionsU3Ek__BackingField_3;
	// TEvents Meta.Voice.VoiceRequest`4::<Events>k__BackingField
	VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___U3CEventsU3Ek__BackingField_4;
	// TResults Meta.Voice.VoiceRequest`4::<Results>k__BackingField
	VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* ___U3CResultsU3Ek__BackingField_5;
};
struct Il2CppArrayBounds;

// Meta.WitAi.Events.EventRegistry
struct EventRegistry_t712584F20910AAA2A4A85A34835BC58574C441FE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.Events.EventRegistry::_overriddenCallbacks
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____overriddenCallbacks_0;
	// System.Collections.Generic.HashSet`1<System.String> Meta.WitAi.Events.EventRegistry::_overriddenCallbacksHash
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____overriddenCallbacksHash_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Meta.WitAi.Events.TelemetryEvents
struct TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC  : public RuntimeObject
{
	// Meta.WitAi.Events.AudioDurationTrackerFinishedEvent Meta.WitAi.Events.TelemetryEvents::OnAudioTrackerFinished
	AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647* ___OnAudioTrackerFinished_0;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Meta.WitAi.Requests.VoiceServiceRequestOptions
struct VoiceServiceRequestOptions_tBB80C39F5D734638F03442F09F4F106BD5F20EE4  : public RuntimeObject
{
	// System.String Meta.WitAi.Requests.VoiceServiceRequestOptions::<RequestId>k__BackingField
	String_t* ___U3CRequestIdU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.Requests.VoiceServiceRequestOptions::<QueryParams>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CQueryParamsU3Ek__BackingField_1;
	// System.String Meta.WitAi.Requests.VoiceServiceRequestOptions::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
	// System.Single Meta.WitAi.Requests.VoiceServiceRequestOptions::<AudioThreshold>k__BackingField
	float ___U3CAudioThresholdU3Ek__BackingField_3;
};

// Meta.WitAi.Data.VoiceSession
struct VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B  : public RuntimeObject
{
	// Meta.WitAi.VoiceService Meta.WitAi.Data.VoiceSession::service
	VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* ___service_0;
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Data.VoiceSession::response
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response_1;
	// System.Boolean Meta.WitAi.Data.VoiceSession::validResponse
	bool ___validResponse_2;
};

// Meta.WitAi.Configuration.WitRuntimeConfiguration
struct WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05  : public RuntimeObject
{
	// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.Configuration.WitRuntimeConfiguration::witConfiguration
	WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___witConfiguration_0;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::minKeepAliveVolume
	float ___minKeepAliveVolume_1;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::minKeepAliveTimeInSeconds
	float ___minKeepAliveTimeInSeconds_2;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::minTranscriptionKeepAliveTimeInSeconds
	float ___minTranscriptionKeepAliveTimeInSeconds_3;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::maxRecordingTime
	float ___maxRecordingTime_4;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::soundWakeThreshold
	float ___soundWakeThreshold_5;
	// System.Int32 Meta.WitAi.Configuration.WitRuntimeConfiguration::sampleLengthInMs
	int32_t ___sampleLengthInMs_6;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::micBufferLengthInSeconds
	float ___micBufferLengthInSeconds_7;
	// System.Int32 Meta.WitAi.Configuration.WitRuntimeConfiguration::maxConcurrentRequests
	int32_t ___maxConcurrentRequests_8;
	// System.Boolean Meta.WitAi.Configuration.WitRuntimeConfiguration::sendAudioToWit
	bool ___sendAudioToWit_9;
	// Meta.WitAi.Interfaces.CustomTranscriptionProvider Meta.WitAi.Configuration.WitRuntimeConfiguration::customTranscriptionProvider
	CustomTranscriptionProvider_tC6EABF251A11EFEBE5A8AD8D77CEBF14FB1009C5* ___customTranscriptionProvider_10;
	// System.Boolean Meta.WitAi.Configuration.WitRuntimeConfiguration::alwaysRecord
	bool ___alwaysRecord_11;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::preferredActivationOffset
	float ___preferredActivationOffset_12;
};

// Meta.WitAi.Utilities.DictationServiceReference/<>c
struct U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E  : public RuntimeObject
{
};

struct U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E_StaticFields
{
	// Meta.WitAi.Utilities.DictationServiceReference/<>c Meta.WitAi.Utilities.DictationServiceReference/<>c::<>9
	U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E* ___U3CU3E9_0;
	// System.Predicate`1<Meta.WitAi.Dictation.DictationService> Meta.WitAi.Utilities.DictationServiceReference/<>c::<>9__2_0
	Predicate_1_t6908C676249317F191C97BFF88A5D965269E406D* ___U3CU3E9__2_0_1;
};

// Meta.Voice.TranscriptionRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>
struct TranscriptionRequestEvents_1_t9C76CCA9D6509EEDB9B9FED9016A35DBE9D3E585  : public VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981
{
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onAudioInputStateChange
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onAudioInputStateChange_9;
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onAudioActivation
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onAudioActivation_10;
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onStartListening
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onStartListening_11;
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onAudioDeactivation
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onAudioDeactivation_12;
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onStopListening
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onStopListening_13;
	// Meta.Voice.TranscriptionRequestEvent Meta.Voice.TranscriptionRequestEvents`1::_onPartialTranscription
	TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE* ____onPartialTranscription_14;
	// Meta.Voice.TranscriptionRequestEvent Meta.Voice.TranscriptionRequestEvents`1::_onFullTranscription
	TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE* ____onFullTranscription_15;
};

// Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct TranscriptionRequest_4_tF432B63E335559CC13F9AF9EFAE88109A3CA3963  : public VoiceRequest_4_t635CDB7E63C5322E9D11D83B63A401260F8BAA8C
{
	// Meta.Voice.VoiceAudioInputState Meta.Voice.TranscriptionRequest`4::<AudioInputState>k__BackingField
	int32_t ___U3CAudioInputStateU3Ek__BackingField_6;
};

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Dictation.Data.DictationSession>
struct UnityEvent_1_t28CBA41B8B0574B5E1848D4A3DF73736EBEBB356  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>
struct UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<System.String,System.String>
struct UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// Meta.WitAi.Utilities.DictationServiceReference
struct DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20 
{
	// Meta.WitAi.Dictation.DictationService Meta.WitAi.Utilities.DictationServiceReference::dictationService
	DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* ___dictationService_0;
};
// Native definition for P/Invoke marshalling of Meta.WitAi.Utilities.DictationServiceReference
struct DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20_marshaled_pinvoke
{
	DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* ___dictationService_0;
};
// Native definition for COM marshalling of Meta.WitAi.Utilities.DictationServiceReference
struct DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20_marshaled_com
{
	DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* ___dictationService_0;
};

// Meta.WitAi.Dictation.Data.DictationSession
struct DictationSession_tD5DEAD00ADA69A7134F920A37933B042F4D3E74D  : public VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B
{
	// Meta.WitAi.Dictation.IDictationService Meta.WitAi.Dictation.Data.DictationSession::dictationService
	RuntimeObject* ___dictationService_3;
	// System.String[] Meta.WitAi.Dictation.Data.DictationSession::clientRequestId
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___clientRequestId_4;
	// System.String Meta.WitAi.Dictation.Data.DictationSession::sessionId
	String_t* ___sessionId_5;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// Meta.WitAi.Events.SpeechEvents
struct SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E  : public EventRegistry_t712584F20910AAA2A4A85A34835BC58574C441FE
{
	// Meta.WitAi.Events.WitRequestOptionsEvent Meta.WitAi.Events.SpeechEvents::_onRequestOptionSetup
	WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* ____onRequestOptionSetup_3;
	// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.SpeechEvents::_onRequestInitialized
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* ____onRequestInitialized_4;
	// Meta.WitAi.Events.WitRequestCreatedEvent Meta.WitAi.Events.SpeechEvents::_onRequestCreated
	WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B* ____onRequestCreated_5;
	// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.SpeechEvents::_onSend
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* ____onSend_6;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onMinimumWakeThresholdHit
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onMinimumWakeThresholdHit_8;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onMicDataSent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onMicDataSent_9;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onStoppedListeningDueToDeactivation
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onStoppedListeningDueToDeactivation_10;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onStoppedListeningDueToInactivity
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onStoppedListeningDueToInactivity_11;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onStoppedListeningDueToTimeout
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onStoppedListeningDueToTimeout_12;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onAborting
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onAborting_14;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onAborted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onAborted_15;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::_onCanceled
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* ____onCanceled_16;
	// Meta.WitAi.Events.WitResponseEvent Meta.WitAi.Events.SpeechEvents::_onPartialResponse
	WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* ____onPartialResponse_18;
	// Meta.WitAi.Events.WitResponseEvent Meta.WitAi.Events.SpeechEvents::_onResponse
	WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* ____onResponse_19;
	// Meta.WitAi.Events.WitErrorEvent Meta.WitAi.Events.SpeechEvents::_onError
	WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* ____onError_20;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onRequestCompleted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onRequestCompleted_21;
	// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.SpeechEvents::_onComplete
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* ____onComplete_22;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onStartListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onStartListening_24;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onStoppedListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onStoppedListening_25;
	// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Events.SpeechEvents::_onMicLevelChanged
	WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* ____onMicLevelChanged_26;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::_onPartialTranscription
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* ____onPartialTranscription_28;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::_onFullTranscription
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* ____onFullTranscription_29;
	// System.Collections.Generic.HashSet`1<Meta.WitAi.Events.SpeechEvents> Meta.WitAi.Events.SpeechEvents::_listeners
	HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7* ____listeners_30;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Meta.WitAi.Data.Info.WitComposerInfo
struct WitComposerInfo_tC5EC9DE899984DE5F6E7D3BFC45A7EC1BFA8EEE7 
{
	// Meta.WitAi.Data.Info.ComposerGraph[] Meta.WitAi.Data.Info.WitComposerInfo::canvases
	ComposerGraphU5BU5D_t0BB5CF7F79C326E2D5DC0E30FA07EDFC0C7155D3* ___canvases_0;
};
// Native definition for P/Invoke marshalling of Meta.WitAi.Data.Info.WitComposerInfo
struct WitComposerInfo_tC5EC9DE899984DE5F6E7D3BFC45A7EC1BFA8EEE7_marshaled_pinvoke
{
	ComposerGraph_t1AEED7052A249877C3A05B265FDC790A35F7EFC6_marshaled_pinvoke* ___canvases_0;
};
// Native definition for COM marshalling of Meta.WitAi.Data.Info.WitComposerInfo
struct WitComposerInfo_tC5EC9DE899984DE5F6E7D3BFC45A7EC1BFA8EEE7_marshaled_com
{
	ComposerGraph_t1AEED7052A249877C3A05B265FDC790A35F7EFC6_marshaled_com* ___canvases_0;
};

// Meta.WitAi.Configuration.WitRequestOptions
struct WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483  : public VoiceServiceRequestOptions_tBB80C39F5D734638F03442F09F4F106BD5F20EE4
{
	// Meta.WitAi.Interfaces.IDynamicEntitiesProvider Meta.WitAi.Configuration.WitRequestOptions::dynamicEntities
	RuntimeObject* ___dynamicEntities_4;
	// System.Int32 Meta.WitAi.Configuration.WitRequestOptions::nBestIntents
	int32_t ___nBestIntents_5;
	// System.String Meta.WitAi.Configuration.WitRequestOptions::tag
	String_t* ___tag_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.Configuration.WitRequestOptions::additionalParameters
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___additionalParameters_7;
	// System.Action`1<Meta.WitAi.WitRequest> Meta.WitAi.Configuration.WitRequestOptions::onResponse
	Action_1_tEE33A71F533D86EBC6A768BBF5F08D7A5AA0DA35* ___onResponse_8;
};

// Meta.Voice.NLPAudioRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>
struct NLPAudioRequestEvents_1_tFAE223D8936F21D14D76AF80744C7BA64656D2F9  : public TranscriptionRequestEvents_1_t9C76CCA9D6509EEDB9B9FED9016A35DBE9D3E585
{
	// Meta.Voice.NLPRequestResponseEvent Meta.Voice.NLPAudioRequestEvents`1::_onPartialResponse
	NLPRequestResponseEvent_tDD562F3B70B56867885CA6AF029E93258D6ACB44* ____onPartialResponse_16;
	// Meta.Voice.NLPRequestResponseEvent Meta.Voice.NLPAudioRequestEvents`1::_onFullResponse
	NLPRequestResponseEvent_tDD562F3B70B56867885CA6AF029E93258D6ACB44* ____onFullResponse_17;
};

// Meta.Voice.NLPAudioRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct NLPAudioRequest_4_tB9AEC6E5E0DE9E86BAEA62F8FF35242BB6640C25  : public TranscriptionRequest_4_tF432B63E335559CC13F9AF9EFAE88109A3CA3963
{
	// System.Boolean Meta.Voice.NLPAudioRequest`4::_isFinalized
	bool ____isFinalized_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// Meta.WitAi.Dictation.Events.DictationEvents
struct DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC  : public SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E
{
	// Meta.WitAi.Dictation.Events.DictationSessionEvent Meta.WitAi.Dictation.Events.DictationEvents::_onDictationSessionStarted
	DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97* ____onDictationSessionStarted_32;
	// Meta.WitAi.Dictation.Events.DictationSessionEvent Meta.WitAi.Dictation.Events.DictationEvents::_onDictationSessionStopped
	DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97* ____onDictationSessionStopped_33;
};

// Meta.WitAi.Dictation.Events.DictationSessionEvent
struct DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97  : public UnityEvent_1_t28CBA41B8B0574B5E1848D4A3DF73736EBEBB356
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Meta.WitAi.Events.VoiceEvents
struct VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9  : public SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E
{
	// Meta.WitAi.Events.WitByteDataEvent Meta.WitAi.Events.VoiceEvents::_onByteDataReady
	WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC* ____onByteDataReady_32;
	// Meta.WitAi.Events.WitByteDataEvent Meta.WitAi.Events.VoiceEvents::_onByteDataSent
	WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC* ____onByteDataSent_33;
	// Meta.WitAi.Events.WitValidationEvent Meta.WitAi.Events.VoiceEvents::_onValidatePartialResponse
	WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C* ____onValidatePartialResponse_34;
};

// Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8 
{
	// System.String Meta.WitAi.Data.Info.WitAppInfo::name
	String_t* ___name_0;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::id
	String_t* ___id_1;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::lang
	String_t* ___lang_2;
	// System.Boolean Meta.WitAi.Data.Info.WitAppInfo::isPrivate
	bool ___isPrivate_3;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::createdAt
	String_t* ___createdAt_4;
	// Meta.WitAi.Data.Info.WitAppTrainingStatus Meta.WitAi.Data.Info.WitAppInfo::trainingStatus
	int32_t ___trainingStatus_5;
	// System.Int32 Meta.WitAi.Data.Info.WitAppInfo::lastTrainDuration
	int32_t ___lastTrainDuration_6;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::lastTrainedAt
	String_t* ___lastTrainedAt_7;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::nextTrainAt
	String_t* ___nextTrainAt_8;
	// Meta.WitAi.Data.Info.WitIntentInfo[] Meta.WitAi.Data.Info.WitAppInfo::intents
	WitIntentInfoU5BU5D_t95D033231DE201B282D0C427BFF8E50F9C51D086* ___intents_9;
	// Meta.WitAi.Data.Info.WitEntityInfo[] Meta.WitAi.Data.Info.WitAppInfo::entities
	WitEntityInfoU5BU5D_tB0A63D23CECFD14157CB1D03E656D3CFCCFF3499* ___entities_10;
	// Meta.WitAi.Data.Info.WitTraitInfo[] Meta.WitAi.Data.Info.WitAppInfo::traits
	WitTraitInfoU5BU5D_tB790BA9F9C3B601ED9CD568A23C330D1EDF596D2* ___traits_11;
	// Meta.WitAi.Data.Info.WitVersionTagInfo[] Meta.WitAi.Data.Info.WitAppInfo::versionTags
	WitVersionTagInfoU5BU5D_t84FAB6A032C1C9E9B3BF7E4C95D3A8C84D26C637* ___versionTags_12;
	// Meta.WitAi.Data.Info.WitVoiceInfo[] Meta.WitAi.Data.Info.WitAppInfo::voices
	WitVoiceInfoU5BU5D_tDC3B4221779AC23CB86E3690D68414110CB627EC* ___voices_13;
	// Meta.WitAi.Data.Info.WitComposerInfo Meta.WitAi.Data.Info.WitAppInfo::composer
	WitComposerInfo_tC5EC9DE899984DE5F6E7D3BFC45A7EC1BFA8EEE7 ___composer_14;
	// Meta.WitAi.Data.Info.WitCharacterInfo[] Meta.WitAi.Data.Info.WitAppInfo::characters
	WitCharacterInfoU5BU5D_t25225BD0C1F5E253122ABDD3562C9D0BA7D4E5E1* ___characters_15;
};
// Native definition for P/Invoke marshalling of Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8_marshaled_pinvoke
{
	char* ___name_0;
	char* ___id_1;
	char* ___lang_2;
	int32_t ___isPrivate_3;
	char* ___createdAt_4;
	int32_t ___trainingStatus_5;
	int32_t ___lastTrainDuration_6;
	char* ___lastTrainedAt_7;
	char* ___nextTrainAt_8;
	WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_marshaled_pinvoke* ___intents_9;
	WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_pinvoke* ___entities_10;
	WitTraitInfoU5BU5D_tB790BA9F9C3B601ED9CD568A23C330D1EDF596D2* ___traits_11;
	WitVersionTagInfo_t1FB34DB86D5B5C75148C2961D1405CE4C02E1089_marshaled_pinvoke* ___versionTags_12;
	WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_marshaled_pinvoke* ___voices_13;
	WitComposerInfo_tC5EC9DE899984DE5F6E7D3BFC45A7EC1BFA8EEE7_marshaled_pinvoke ___composer_14;
	WitCharacterInfo_tBE4FAB8304100E9A2900137C260D231AF79CB49D_marshaled_pinvoke* ___characters_15;
};
// Native definition for COM marshalling of Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___id_1;
	Il2CppChar* ___lang_2;
	int32_t ___isPrivate_3;
	Il2CppChar* ___createdAt_4;
	int32_t ___trainingStatus_5;
	int32_t ___lastTrainDuration_6;
	Il2CppChar* ___lastTrainedAt_7;
	Il2CppChar* ___nextTrainAt_8;
	WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_marshaled_com* ___intents_9;
	WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_com* ___entities_10;
	WitTraitInfoU5BU5D_tB790BA9F9C3B601ED9CD568A23C330D1EDF596D2* ___traits_11;
	WitVersionTagInfo_t1FB34DB86D5B5C75148C2961D1405CE4C02E1089_marshaled_com* ___versionTags_12;
	WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_marshaled_com* ___voices_13;
	WitComposerInfo_tC5EC9DE899984DE5F6E7D3BFC45A7EC1BFA8EEE7_marshaled_com ___composer_14;
	WitCharacterInfo_tBE4FAB8304100E9A2900137C260D231AF79CB49D_marshaled_com* ___characters_15;
};

// Meta.WitAi.Events.WitErrorEvent
struct WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2  : public UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50
{
};

// Meta.WitAi.Events.WitMicLevelChangedEvent
struct WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// Meta.WitAi.Events.WitResponseEvent
struct WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA  : public UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D
{
};

// Meta.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// Meta.Voice.NLPRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>
struct NLPRequestEvents_1_tB0D5CC5BDEF07795A35948076FD4D07D91C20CF2  : public NLPAudioRequestEvents_1_tFAE223D8936F21D14D76AF80744C7BA64656D2F9
{
};

// Meta.Voice.NLPRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct NLPRequest_4_t7177BC2349443FF686C2D98FDB887CA5744C4323  : public NLPAudioRequest_4_tB9AEC6E5E0DE9E86BAEA62F8FF35242BB6640C25
{
	// Meta.Voice.NLPRequestInputType Meta.Voice.NLPRequest`4::<InputType>k__BackingField
	int32_t ___U3CInputTypeU3Ek__BackingField_8;
	// System.Boolean Meta.Voice.NLPRequest`4::_initialized
	bool ____initialized_9;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.Predicate`1<Meta.WitAi.Dictation.DictationService>
struct Predicate_1_t6908C676249317F191C97BFF88A5D965269E406D  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// Meta.WitAi.Requests.VoiceServiceRequest
struct VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536  : public NLPRequest_4_t7177BC2349443FF686C2D98FDB887CA5744C4323
{
};

// Meta.WitAi.Requests.VoiceServiceRequestEvents
struct VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838  : public NLPRequestEvents_1_tB0D5CC5BDEF07795A35948076FD4D07D91C20CF2
{
};

// Meta.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_clientAccessToken
	String_t* ____clientAccessToken_4;
	// Meta.WitAi.Data.Info.WitAppInfo Meta.WitAi.Data.Configuration.WitConfiguration::_appInfo
	WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8 ____appInfo_5;
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_configurationId
	String_t* ____configurationId_6;
	// System.Int32 Meta.WitAi.Data.Configuration.WitConfiguration::timeoutMS
	int32_t ___timeoutMS_7;
	// Meta.WitAi.Configuration.WitEndpointConfig Meta.WitAi.Data.Configuration.WitConfiguration::endpointConfiguration
	WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* ___endpointConfiguration_8;
	// System.Boolean Meta.WitAi.Data.Configuration.WitConfiguration::isDemoOnly
	bool ___isDemoOnly_9;
	// System.Boolean Meta.WitAi.Data.Configuration.WitConfiguration::useConduit
	bool ___useConduit_10;
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_manifestLocalPath
	String_t* ____manifestLocalPath_11;
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.Data.Configuration.WitConfiguration::excludedAssemblies
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___excludedAssemblies_12;
	// System.Boolean Meta.WitAi.Data.Configuration.WitConfiguration::relaxedResolution
	bool ___relaxedResolution_13;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Meta.WitAi.WitRequest
struct WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900  : public VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536
{
	// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.WitRequest::<Configuration>k__BackingField
	WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___U3CConfigurationU3Ek__BackingField_10;
	// System.Int32 Meta.WitAi.WitRequest::<Timeout>k__BackingField
	int32_t ___U3CTimeoutU3Ek__BackingField_11;
	// Meta.WitAi.Data.AudioEncoding Meta.WitAi.WitRequest::<AudioEncoding>k__BackingField
	AudioEncoding_t98ED2D092A9829C604C73C3B611E2FC987413EE4* ___U3CAudioEncodingU3Ek__BackingField_12;
	// System.String Meta.WitAi.WitRequest::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_13;
	// System.String Meta.WitAi.WitRequest::<Command>k__BackingField
	String_t* ___U3CCommandU3Ek__BackingField_14;
	// System.Boolean Meta.WitAi.WitRequest::<IsPost>k__BackingField
	bool ___U3CIsPostU3Ek__BackingField_15;
	// System.Byte[] Meta.WitAi.WitRequest::postData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___postData_16;
	// System.String Meta.WitAi.WitRequest::postContentType
	String_t* ___postContentType_17;
	// System.String Meta.WitAi.WitRequest::forcedHttpMethodType
	String_t* ___forcedHttpMethodType_18;
	// System.Boolean Meta.WitAi.WitRequest::<HasResponseStarted>k__BackingField
	bool ___U3CHasResponseStartedU3Ek__BackingField_19;
	// System.Boolean Meta.WitAi.WitRequest::<IsInputStreamReady>k__BackingField
	bool ___U3CIsInputStreamReadyU3Ek__BackingField_20;
	// Meta.WitAi.AudioDurationTracker Meta.WitAi.WitRequest::audioDurationTracker
	AudioDurationTracker_t43BE70DF8036B15F8C7D0E4E49F3333F0323BBFD* ___audioDurationTracker_21;
	// System.Net.HttpWebRequest Meta.WitAi.WitRequest::_request
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ____request_22;
	// System.IO.Stream Meta.WitAi.WitRequest::_writeStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____writeStream_23;
	// System.Object Meta.WitAi.WitRequest::_streamLock
	RuntimeObject* ____streamLock_24;
	// System.Int32 Meta.WitAi.WitRequest::_bytesWritten
	int32_t ____bytesWritten_25;
	// System.String Meta.WitAi.WitRequest::_stackTrace
	String_t* ____stackTrace_26;
	// System.DateTime Meta.WitAi.WitRequest::_requestStartTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____requestStartTime_27;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Byte[]> Meta.WitAi.WitRequest::_writeBuffer
	ConcurrentQueue_1_t65D5F18D7E02C26657F50B992141DC982E85B4A0* ____writeBuffer_28;
	// System.String Meta.WitAi.WitRequest::<StatusDescription>k__BackingField
	String_t* ___U3CStatusDescriptionU3Ek__BackingField_29;
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.WitRequest::_lastResponseData
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ____lastResponseData_30;
	// Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent Meta.WitAi.WitRequest::onProvideCustomHeaders
	OnProvideCustomHeadersEvent_tAE425A4949CC45A3669E527731B58B12341E7AA4* ___onProvideCustomHeaders_31;
	// System.Action`1<Meta.WitAi.WitRequest> Meta.WitAi.WitRequest::onInputStreamReady
	Action_1_tEE33A71F533D86EBC6A768BBF5F08D7A5AA0DA35* ___onInputStreamReady_32;
	// System.Action`1<System.String> Meta.WitAi.WitRequest::onRawResponse
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onRawResponse_33;
	// Meta.WitAi.WitRequest/OnCustomizeUriEvent Meta.WitAi.WitRequest::onCustomizeUri
	OnCustomizeUriEvent_t9763454475C9A0802CE0A68DD50B1206BC1678BE* ___onCustomizeUri_34;
	// System.Action`1<System.String> Meta.WitAi.WitRequest::onPartialTranscription
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onPartialTranscription_36;
	// System.Action`1<System.String> Meta.WitAi.WitRequest::onFullTranscription
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onFullTranscription_37;
	// System.Action`1<Meta.WitAi.WitRequest> Meta.WitAi.WitRequest::onPartialResponse
	Action_1_tEE33A71F533D86EBC6A768BBF5F08D7A5AA0DA35* ___onPartialResponse_38;
	// System.Action`1<Meta.WitAi.WitRequest> Meta.WitAi.WitRequest::onResponse
	Action_1_tEE33A71F533D86EBC6A768BBF5F08D7A5AA0DA35* ___onResponse_39;
	// System.Boolean Meta.WitAi.WitRequest::_initialized
	bool ____initialized_40;
	// Meta.WitAi.CoroutineUtility/CoroutinePerformer Meta.WitAi.WitRequest::_performer
	CoroutinePerformer_t2423B696217C7475EF6AFE1D33000E8766703559* ____performer_41;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Action> Meta.WitAi.WitRequest::_mainThreadCallbacks
	ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* ____mainThreadCallbacks_42;
};

struct WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900_StaticFields
{
	// Meta.WitAi.WitRequest/PreSendRequestDelegate Meta.WitAi.WitRequest::onPreSendRequest
	PreSendRequestDelegate_t2C0F13F2841C74740CFA0F3F4BAF91EC5CF87C5A* ___onPreSendRequest_35;
};

// Meta.WitAi.Events.UnityEventListeners.AudioEventListener
struct AudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Events.UnityEventListeners.AudioEventListener::onMicAudioLevelChanged
	WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* ___onMicAudioLevelChanged_4;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.UnityEventListeners.AudioEventListener::onMicStartedListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onMicStartedListening_5;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.UnityEventListeners.AudioEventListener::onMicStoppedListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onMicStoppedListening_6;
	// Meta.WitAi.Interfaces.IAudioInputEvents Meta.WitAi.Events.UnityEventListeners.AudioEventListener::_events
	RuntimeObject* ____events_7;
};

// Meta.WitAi.ServiceReferences.AudioInputServiceReference
struct AudioInputServiceReference_tE6CB7A8166C583A570C07974A6E87F9D2C4C16B4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Meta.WitAi.Dictation.DictationService
struct DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::dictationEvents
	DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* ___dictationEvents_4;
	// Meta.WitAi.Events.TelemetryEvents Meta.WitAi.Dictation.DictationService::telemetryEvents
	TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* ___telemetryEvents_5;
};

// Meta.WitAi.Dictation.MultiRequestTranscription
struct MultiRequestTranscription_tE95F8ABA905139B0AD7F940A65D4D5B9E94FFFB6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.Dictation.DictationService Meta.WitAi.Dictation.MultiRequestTranscription::witDictation
	DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* ___witDictation_4;
	// System.Int32 Meta.WitAi.Dictation.MultiRequestTranscription::linesBetweenActivations
	int32_t ___linesBetweenActivations_5;
	// System.String Meta.WitAi.Dictation.MultiRequestTranscription::activationSeparator
	String_t* ___activationSeparator_6;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Dictation.MultiRequestTranscription::onTranscriptionUpdated
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* ___onTranscriptionUpdated_7;
	// System.Text.StringBuilder Meta.WitAi.Dictation.MultiRequestTranscription::_text
	StringBuilder_t* ____text_8;
	// System.String Meta.WitAi.Dictation.MultiRequestTranscription::_activeText
	String_t* ____activeText_9;
	// System.Boolean Meta.WitAi.Dictation.MultiRequestTranscription::_newSection
	bool ____newSection_10;
	// System.Text.StringBuilder Meta.WitAi.Dictation.MultiRequestTranscription::_separator
	StringBuilder_t* ____separator_11;
};

// Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener
struct TranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener::onPartialTranscription
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* ___onPartialTranscription_4;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener::onFullTranscription
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* ___onFullTranscription_5;
	// Meta.WitAi.Interfaces.ITranscriptionEvent Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener::_events
	RuntimeObject* ____events_6;
};

// Meta.WitAi.WitService
struct WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Meta.WitAi.WitService::_lastMinVolumeLevelTime
	float ____lastMinVolumeLevelTime_4;
	// Meta.WitAi.WitRequest Meta.WitAi.WitService::_recordingRequest
	WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900* ____recordingRequest_5;
	// System.Boolean Meta.WitAi.WitService::_isSoundWakeActive
	bool ____isSoundWakeActive_6;
	// Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte> Meta.WitAi.WitService::_lastSampleMarker
	Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* ____lastSampleMarker_7;
	// System.Boolean Meta.WitAi.WitService::_minKeepAliveWasHit
	bool ____minKeepAliveWasHit_8;
	// System.Boolean Meta.WitAi.WitService::_isActive
	bool ____isActive_9;
	// System.Int64 Meta.WitAi.WitService::_minSampleByteCount
	int64_t ____minSampleByteCount_10;
	// Meta.WitAi.IVoiceEventProvider Meta.WitAi.WitService::_voiceEventProvider
	RuntimeObject* ____voiceEventProvider_11;
	// Meta.WitAi.ITelemetryEventsProvider Meta.WitAi.WitService::_telemetryEventsProvider
	RuntimeObject* ____telemetryEventsProvider_12;
	// Meta.WitAi.IWitRuntimeConfigProvider Meta.WitAi.WitService::_runtimeConfigProvider
	RuntimeObject* ____runtimeConfigProvider_13;
	// Meta.WitAi.Interfaces.ITranscriptionProvider Meta.WitAi.WitService::_activeTranscriptionProvider
	RuntimeObject* ____activeTranscriptionProvider_14;
	// UnityEngine.Coroutine Meta.WitAi.WitService::_timeLimitCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____timeLimitCoroutine_15;
	// Meta.WitAi.Interfaces.IWitRequestProvider Meta.WitAi.WitService::_witRequestProvider
	RuntimeObject* ____witRequestProvider_16;
	// System.Boolean Meta.WitAi.WitService::_receivedTranscription
	bool ____receivedTranscription_17;
	// System.Single Meta.WitAi.WitService::_lastWordTime
	float ____lastWordTime_18;
	// System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest> Meta.WitAi.WitService::_transmitRequests
	HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* ____transmitRequests_19;
	// UnityEngine.Coroutine Meta.WitAi.WitService::_queueHandler
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____queueHandler_20;
	// Meta.WitAi.Events.IWitByteDataReadyHandler[] Meta.WitAi.WitService::_dataReadyHandlers
	IWitByteDataReadyHandlerU5BU5D_t5C855C7DCEE7E44891EF8F6AFCFC95F8A53CE83A* ____dataReadyHandlers_21;
	// Meta.WitAi.Events.IWitByteDataSentHandler[] Meta.WitAi.WitService::_dataSentHandlers
	IWitByteDataSentHandlerU5BU5D_t5605135D2F9ABA76F7F38A9C30BC3EB16C99CEA7* ____dataSentHandlers_22;
	// Meta.WitAi.Interfaces.IDynamicEntitiesProvider[] Meta.WitAi.WitService::_dynamicEntityProviders
	IDynamicEntitiesProviderU5BU5D_t03676A0B837E3DEC5D33166D2B141C51233506DC* ____dynamicEntityProviders_23;
	// System.Single Meta.WitAi.WitService::_time
	float ____time_24;
	// Meta.WitAi.Data.AudioBuffer Meta.WitAi.WitService::_buffer
	AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* ____buffer_25;
	// System.Boolean Meta.WitAi.WitService::_bufferDelegates
	bool ____bufferDelegates_26;
};

// Meta.WitAi.ServiceReferences.DictationServiceAudioEventReference
struct DictationServiceAudioEventReference_t31BDC97AE06ADFF2F0EBC8F6F382FC846E70FCA3  : public AudioInputServiceReference_tE6CB7A8166C583A570C07974A6E87F9D2C4C16B4
{
	// Meta.WitAi.Utilities.DictationServiceReference Meta.WitAi.ServiceReferences.DictationServiceAudioEventReference::_dictationServiceReference
	DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20 ____dictationServiceReference_4;
};

// Meta.WitAi.Dictation.WitDictation
struct WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407  : public DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A
{
	// Meta.WitAi.Configuration.WitRuntimeConfiguration Meta.WitAi.Dictation.WitDictation::witRuntimeConfiguration
	WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* ___witRuntimeConfiguration_6;
	// Meta.WitAi.WitService Meta.WitAi.Dictation.WitDictation::witService
	WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* ___witService_7;
	// Meta.WitAi.Events.VoiceEvents Meta.WitAi.Dictation.WitDictation::_voiceEvents
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* ____voiceEvents_8;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Meta.WitAi.Dictation.DictationService[]
struct DictationServiceU5BU5D_t654A9C0CAC568CD2929B5D4F8A1179D019FE26CB  : public RuntimeArray
{
	ALIGN_FIELD (8) DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* m_Items[1];

	inline DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.Interfaces.IDynamicEntitiesProvider[]
struct IDynamicEntitiesProviderU5BU5D_t03676A0B837E3DEC5D33166D2B141C51233506DC  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// T[] UnityEngine.Resources::FindObjectsOfTypeAll<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Resources_FindObjectsOfTypeAll_TisRuntimeObject_mD84D8C84477F126072383A3F1E7789DA25B4206B_gshared (const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Find_TisRuntimeObject_m03DE8D6544B37CBB6B339128ACC38C60CCFC4C24_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// T[] UnityEngine.Resources::FindObjectsOfTypeAll<Meta.WitAi.Dictation.DictationService>()
inline DictationServiceU5BU5D_t654A9C0CAC568CD2929B5D4F8A1179D019FE26CB* Resources_FindObjectsOfTypeAll_TisDictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A_m123A8E33478179DD1FE3E090F8877B4A2A99E9A8 (const RuntimeMethod* method)
{
	return ((  DictationServiceU5BU5D_t654A9C0CAC568CD2929B5D4F8A1179D019FE26CB* (*) (const RuntimeMethod*))Resources_FindObjectsOfTypeAll_TisRuntimeObject_mD84D8C84477F126072383A3F1E7789DA25B4206B_gshared)(method);
}
// System.Void System.Predicate`1<Meta.WitAi.Dictation.DictationService>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mB2D30514EE462AB24C5A47D27E4331D833441D94 (Predicate_1_t6908C676249317F191C97BFF88A5D965269E406D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t6908C676249317F191C97BFF88A5D965269E406D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Array::Find<Meta.WitAi.Dictation.DictationService>(T[],System.Predicate`1<T>)
inline DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* Array_Find_TisDictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A_mE9D6D550A98E242EC2F93BE818D2FAB1FBEF9A3E (DictationServiceU5BU5D_t654A9C0CAC568CD2929B5D4F8A1179D019FE26CB* ___array0, Predicate_1_t6908C676249317F191C97BFF88A5D965269E406D* ___match1, const RuntimeMethod* method)
{
	return ((  DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* (*) (DictationServiceU5BU5D_t654A9C0CAC568CD2929B5D4F8A1179D019FE26CB*, Predicate_1_t6908C676249317F191C97BFF88A5D965269E406D*, const RuntimeMethod*))Array_Find_TisRuntimeObject_m03DE8D6544B37CBB6B339128ACC38C60CCFC4C24_gshared)(___array0, ___match1, method);
}
// Meta.WitAi.Dictation.DictationService Meta.WitAi.Utilities.DictationServiceReference::get_DictationService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* DictationServiceReference_get_DictationService_mBBF4697608C8D3865F010FCD7686BAB83FB6F970 (DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Utilities.DictationServiceReference/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3D91B3CA05DB77683CCE14F40668B58848343292 (U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_rootCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_rootCount_mCEEBE76B883D2FCDC25AB8D2DEE565E696887D6B (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Interfaces.IAudioInputEvents Meta.WitAi.Dictation.DictationService::get_AudioEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictationService_get_AudioEvents_m3C42CABF347FD00F6389BF5713414F63AB4E41CA (DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.ServiceReferences.AudioInputServiceReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInputServiceReference__ctor_m1D5961959A076D7B20B09B381006AEE698C4E1CB (AudioInputServiceReference_tE6CB7A8166C583A570C07974A6E87F9D2C4C16B4* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Configuration.WitRequestOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitRequestOptions__ctor_mE0690E218F01FC193447FCFACBD3A3BFF60AADCF (WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Requests.VoiceServiceRequestEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceServiceRequestEvents__ctor_mC421AD9C8287440D1C67B9D33B14E25C8AA9DBD8 (VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Meta.WitAi.Events.UnityEventListeners.AudioEventListener>()
inline AudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB* Component_GetComponent_TisAudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB_m0118E41DCAF2BA67B2779D8291BF03E32A98AA9D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<Meta.WitAi.Events.UnityEventListeners.AudioEventListener>()
inline AudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB* GameObject_AddComponent_TisAudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB_mA9D185D54B663169AD1D27353B36FB9399F083A5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener>()
inline TranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5* Component_GetComponent_TisTranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5_mDB4CC2FDB27B4ED85BF16474E02AD103A7E6C2B1 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener>()
inline TranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5* GameObject_AddComponent_TisTranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5_m20B4FF673BCE55E37833D906DBB982415E18F185 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Meta.WitAi.Dictation.Events.DictationEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationEvents__ctor_m14BB8C94EE1C58ED5D2C5E63C6F1F5742C22E337 (DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Events.TelemetryEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelemetryEvents__ctor_mDBE94F9496224CC006896B23456F1BE265746EE6 (TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Meta.WitAi.Dictation.DictationService>()
inline DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* Object_FindObjectOfType_TisDictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A_m3B494FD89E96747E95CF9DFA0C006B1D5A35BBBA (const RuntimeMethod* method)
{
	return ((  DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::get_OnFullTranscription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* SpeechEvents_get_OnFullTranscription_m72C7935CDD9EBD2FCAC9C0ECADC2830417512065_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71 (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::get_OnPartialTranscription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* SpeechEvents_get_OnPartialTranscription_m0BA26BCC13243D100712E20D4A6AE8DD56C64B18_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnAborting()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnAborting_mDA5491F8A6AADF0CBB44D92B3337090F3B5D0B68_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Dictation.MultiRequestTranscription::OnTranscriptionUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiRequestTranscription_OnTranscriptionUpdated_mA1D9172ED9D56787F329A62CDD4EE67989B0C8B1 (MultiRequestTranscription_tE95F8ABA905139B0AD7F940A65D4D5B9E94FFFB6* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m8037E51D061CE657D7EB2EDAFCEE91878E4F8FFB (StringBuilder_t* __this, StringBuilder_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
inline void UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, String_t* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, String_t*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Void Meta.WitAi.Events.WitTranscriptionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitTranscriptionEvent__ctor_m8FBA54D34EA19C07F367E3FF38F12102983D0B4D (WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Configuration.WitRuntimeConfiguration Meta.WitAi.Dictation.WitDictation::get_RuntimeConfiguration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* WitDictation_get_RuntimeConfiguration_m6BCE26A1878B1DFB3219C48D88F03FC9192EE969_inline (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.WitService::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitService_get_Active_mAB7DE538900E3FCC9CFDDEE56A5C4B6365768B85 (WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.WitService::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitService_get_IsRequestActive_mB557D91F99E08096A3BEFE333F6BF11AF5E234FE (WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Interfaces.ITranscriptionProvider Meta.WitAi.WitService::get_TranscriptionProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WitService_get_TranscriptionProvider_m725FD4B210B7C548210F6C4A171E933C2F44FF6C_inline (WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.WitService::set_TranscriptionProvider(Meta.WitAi.Interfaces.ITranscriptionProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitService_set_TranscriptionProvider_m3D15E2A8D281B3471632D552B05D5D0BA0C28FF1 (WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.WitService::get_MicActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitService_get_MicActive_m4371F9F4D90CE3B95800F609D826F7C9F05B2F74 (WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Events.VoiceEvents Meta.WitAi.Dictation.WitDictation::get_VoiceEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* WitDictation_get_VoiceEvents_m66661FAAA1C63820EE312715796544C6E5DAA3AD_inline (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Events.SpeechEvents::RemoveListener(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechEvents_RemoveListener_mA1338474ECF961E4D54BE985326BCEC7A4A379E2 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___listener0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Events.SpeechEvents::AddListener(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechEvents_AddListener_m3D461943EAFCA1156B96614A9C0BFFAACDCDDBF3 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___listener0, const RuntimeMethod* method) ;
// Meta.WitAi.WitRequest Meta.WitAi.WitRequestFactory::CreateDictationRequest(Meta.WitAi.Data.Configuration.WitConfiguration,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900* WitRequestFactory_CreateDictationRequest_m6FAF1D17D151D9724CFA61FFDFD3D27C328A9357 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___config0, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___requestOptions1, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___requestEvents2, const RuntimeMethod* method) ;
// Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.WitService::Activate(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* WitService_Activate_m0C74CF62C4F21BE1D789886CFE26BB20A2884FD0 (WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* __this, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___requestOptions0, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___requestEvents1, const RuntimeMethod* method) ;
// Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.WitService::ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* WitService_ActivateImmediately_mA4382D601AB4A221D929E9C7BC44C06B0B2C8EFF (WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* __this, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___requestOptions0, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___requestEvents1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.WitService::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitService_Deactivate_mE674DE1EBF6C435E490F8A57D8DE628579ECC152 (WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.WitService::DeactivateAndAbortRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitService_DeactivateAndAbortRequest_m129A65514F72499A89F83F5A94221D0EF8EE4038 (WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Dictation.DictationService::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_Awake_m9D73AD12F09FB78124E8A44A318387BD1395C8DE (DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Meta.WitAi.WitService>()
inline WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* GameObject_AddComponent_TisWitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB_m2FFE0848746B9245C0EC4720A3DB19ADFC811209 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Meta.WitAi.WitService::set_VoiceEventProvider(Meta.WitAi.IVoiceEventProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitService_set_VoiceEventProvider_m1FB1126AA38CD547A6EE9580BD84064F92DB95DC_inline (WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.WitService::set_ConfigurationProvider(Meta.WitAi.IWitRuntimeConfigProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitService_set_ConfigurationProvider_m210849AC4E7763982947F1FD3998FE0381DD4157_inline (WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.WitService::set_WitRequestProvider(Meta.WitAi.Interfaces.IWitRequestProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitService_set_WitRequestProvider_m234AC1CB07B785D1AD6BC00A3194FCFBF08EAFC1_inline (WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.WitService::set_TelemetryEventsProvider(Meta.WitAi.ITelemetryEventsProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitService_set_TelemetryEventsProvider_m9574C903F1E6FCF864A7F4B99F3C36086E267C1B_inline (WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Dictation.DictationService::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_OnEnable_m9F359DBD0CCD1D5F2670FC7A2089ECD12263D514 (DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Dictation.DictationService::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_OnDisable_m844C346816A56ADC5BD00D0CCB1F1521C5D1AB8B (DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* __this, const RuntimeMethod* method) ;
// Meta.WitAi.WitRequest Meta.WitAi.Dictation.WitDictation::CreateWitRequest(Meta.WitAi.Data.Configuration.WitConfiguration,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Interfaces.IDynamicEntitiesProvider[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900* WitDictation_CreateWitRequest_m0680D7C34E798C661B3C201F1A482565E8D2808C (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___config0, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___requestOptions1, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___requestEvents2, IDynamicEntitiesProviderU5BU5D_t03676A0B837E3DEC5D33166D2B141C51233506DC* ___additionalEntityProviders3, const RuntimeMethod* method) ;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.WitService::ExecuteRequest(Meta.WitAi.WitRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitService_ExecuteRequest_m90D471FC2727CB3D019613103A1692020F9124EC (WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* __this, WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900* ___newRequest0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Events.VoiceEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceEvents__ctor_m08A9CD5D70F02629DAD941C6F045D838E3E7D619 (VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Dictation.DictationService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService__ctor_m9AFD7A256F383D33C9825760C202FC53263EFD3F (DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Dictation.Events.DictationSessionEvent Meta.WitAi.Dictation.Events.DictationEvents::get_OnDictationSessionStarted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97* DictationEvents_get_OnDictationSessionStarted_m2BA6F8DB329F7BAA80B5599161CE4C8EA4B98DE8_inline (DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Dictation.Events.DictationSessionEvent Meta.WitAi.Dictation.Events.DictationEvents::get_OnDictationSessionStopped()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97* DictationEvents_get_OnDictationSessionStopped_m1AEECF38CBE067F0831E5445342EE54465BD4430_inline (DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnStartListening()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnStartListening_m1AE66AF56C8A79496E386C26CCB815E99EBB4DA7_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnStoppedListening()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnStoppedListening_mB59F3490B5F895B311DA82A0288DC2AEACF87586_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Events.SpeechEvents::get_OnMicLevelChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* SpeechEvents_get_OnMicLevelChanged_mF6437F7C9C8E60935C01C02C57CDFE62741F8CE8_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Events.WitErrorEvent Meta.WitAi.Events.SpeechEvents::get_OnError()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* SpeechEvents_get_OnError_mCB052EBA347C9125964E56DD0BD6CC0264796421_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Events.WitResponseEvent Meta.WitAi.Events.SpeechEvents::get_OnResponse()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* SpeechEvents_get_OnResponse_m35A479475B9CCCE66CDA4028A0A6AE6343E50400_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Dictation.Events.DictationSessionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationSessionEvent__ctor_m5AC84A37F1FFA43CC9CF86A7F3D413679A8802D3 (DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Events.SpeechEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechEvents__ctor_m6D16CA375136DF4D38A1D2E97B4479CB530F9ADA (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Dictation.Data.DictationSession>::.ctor()
inline void UnityEvent_1__ctor_m0C8011D74C12E916F54FF256A60C04A334AB5111 (UnityEvent_1_t28CBA41B8B0574B5E1848D4A3DF73736EBEBB356* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t28CBA41B8B0574B5E1848D4A3DF73736EBEBB356*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.VoiceSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSession__ctor_m84E12C01B690474505835B756F0857F85FB1F755 (VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Meta.WitAi.Utilities.DictationServiceReference
IL2CPP_EXTERN_C void DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20_marshal_pinvoke(const DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20& unmarshaled, DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20_marshaled_pinvoke& marshaled)
{
	Exception_t* ___dictationService_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'dictationService' of type 'DictationServiceReference': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___dictationService_0Exception, NULL);
}
IL2CPP_EXTERN_C void DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20_marshal_pinvoke_back(const DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20_marshaled_pinvoke& marshaled, DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20& unmarshaled)
{
	Exception_t* ___dictationService_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'dictationService' of type 'DictationServiceReference': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___dictationService_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Meta.WitAi.Utilities.DictationServiceReference
IL2CPP_EXTERN_C void DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20_marshal_pinvoke_cleanup(DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Meta.WitAi.Utilities.DictationServiceReference
IL2CPP_EXTERN_C void DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20_marshal_com(const DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20& unmarshaled, DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20_marshaled_com& marshaled)
{
	Exception_t* ___dictationService_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'dictationService' of type 'DictationServiceReference': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___dictationService_0Exception, NULL);
}
IL2CPP_EXTERN_C void DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20_marshal_com_back(const DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20_marshaled_com& marshaled, DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20& unmarshaled)
{
	Exception_t* ___dictationService_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'dictationService' of type 'DictationServiceReference': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___dictationService_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Meta.WitAi.Utilities.DictationServiceReference
IL2CPP_EXTERN_C void DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20_marshal_com_cleanup(DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20_marshaled_com& marshaled)
{
}
// Meta.WitAi.Dictation.DictationService Meta.WitAi.Utilities.DictationServiceReference::get_DictationService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* DictationServiceReference_get_DictationService_mBBF4697608C8D3865F010FCD7686BAB83FB6F970 (DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisDictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A_mE9D6D550A98E242EC2F93BE818D2FAB1FBEF9A3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t6908C676249317F191C97BFF88A5D965269E406D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_FindObjectsOfTypeAll_TisDictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A_m123A8E33478179DD1FE3E090F8877B4A2A99E9A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_DictationServiceU3Eb__2_0_m5EAEC25BEB18D37A15FBC8E0E333D038ACB58057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationServiceU5BU5D_t654A9C0CAC568CD2929B5D4F8A1179D019FE26CB* V_0 = NULL;
	Predicate_1_t6908C676249317F191C97BFF88A5D965269E406D* G_B4_0 = NULL;
	DictationServiceU5BU5D_t654A9C0CAC568CD2929B5D4F8A1179D019FE26CB* G_B4_1 = NULL;
	DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20* G_B4_2 = NULL;
	Predicate_1_t6908C676249317F191C97BFF88A5D965269E406D* G_B3_0 = NULL;
	DictationServiceU5BU5D_t654A9C0CAC568CD2929B5D4F8A1179D019FE26CB* G_B3_1 = NULL;
	DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20* G_B3_2 = NULL;
	{
		// if (!dictationService)
		DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* L_0 = __this->___dictationService_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// DictationService[] services = Resources.FindObjectsOfTypeAll<DictationService>();
		DictationServiceU5BU5D_t654A9C0CAC568CD2929B5D4F8A1179D019FE26CB* L_2;
		L_2 = Resources_FindObjectsOfTypeAll_TisDictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A_m123A8E33478179DD1FE3E090F8877B4A2A99E9A8(Resources_FindObjectsOfTypeAll_TisDictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A_m123A8E33478179DD1FE3E090F8877B4A2A99E9A8_RuntimeMethod_var);
		V_0 = L_2;
		// if (services != null)
		DictationServiceU5BU5D_t654A9C0CAC568CD2929B5D4F8A1179D019FE26CB* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		// dictationService = Array.Find(services, (o) => o.gameObject.scene.rootCount != 0);
		DictationServiceU5BU5D_t654A9C0CAC568CD2929B5D4F8A1179D019FE26CB* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E_il2cpp_TypeInfo_var);
		Predicate_1_t6908C676249317F191C97BFF88A5D965269E406D* L_5 = ((U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1;
		Predicate_1_t6908C676249317F191C97BFF88A5D965269E406D* L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = L_4;
		G_B3_2 = __this;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = L_4;
			G_B4_2 = __this;
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E_il2cpp_TypeInfo_var);
		U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E* L_7 = ((U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Predicate_1_t6908C676249317F191C97BFF88A5D965269E406D* L_8 = (Predicate_1_t6908C676249317F191C97BFF88A5D965269E406D*)il2cpp_codegen_object_new(Predicate_1_t6908C676249317F191C97BFF88A5D965269E406D_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Predicate_1__ctor_mB2D30514EE462AB24C5A47D27E4331D833441D94(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3Cget_DictationServiceU3Eb__2_0_m5EAEC25BEB18D37A15FBC8E0E333D038ACB58057_RuntimeMethod_var), NULL);
		Predicate_1_t6908C676249317F191C97BFF88A5D965269E406D* L_9 = L_8;
		((U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1), (void*)L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0037:
	{
		DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* L_10;
		L_10 = Array_Find_TisDictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A_mE9D6D550A98E242EC2F93BE818D2FAB1FBEF9A3E(G_B4_1, G_B4_0, Array_Find_TisDictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A_mE9D6D550A98E242EC2F93BE818D2FAB1FBEF9A3E_RuntimeMethod_var);
		G_B4_2->___dictationService_0 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___dictationService_0), (void*)L_10);
	}

IL_0041:
	{
		// return dictationService;
		DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* L_11 = __this->___dictationService_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* DictationServiceReference_get_DictationService_mBBF4697608C8D3865F010FCD7686BAB83FB6F970_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20*>(__this + _offset);
	DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* _returnValue;
	_returnValue = DictationServiceReference_get_DictationService_mBBF4697608C8D3865F010FCD7686BAB83FB6F970(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Meta.WitAi.Utilities.DictationServiceReference/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA45599AF3CE5DB9A1438BD91360547BBF9A7840B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E* L_0 = (U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E*)il2cpp_codegen_object_new(U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m3D91B3CA05DB77683CCE14F40668B58848343292(L_0, NULL);
		((U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Meta.WitAi.Utilities.DictationServiceReference/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3D91B3CA05DB77683CCE14F40668B58848343292 (U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.Utilities.DictationServiceReference/<>c::<get_DictationService>b__2_0(Meta.WitAi.Dictation.DictationService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_DictationServiceU3Eb__2_0_m5EAEC25BEB18D37A15FBC8E0E333D038ACB58057 (U3CU3Ec_t3593DBDCA1B24453B611C84B6FDDF07181121C6E* __this, DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* ___o0, const RuntimeMethod* method) 
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// dictationService = Array.Find(services, (o) => o.gameObject.scene.rootCount != 0);
		DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* L_0 = ___o0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01(L_1, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Scene_get_rootCount_mCEEBE76B883D2FCDC25AB8D2DEE565E696887D6B((&V_0), NULL);
		return (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Meta.WitAi.Interfaces.IAudioInputEvents Meta.WitAi.ServiceReferences.DictationServiceAudioEventReference::get_AudioEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictationServiceAudioEventReference_get_AudioEvents_m7DBFBF3EE5C2A3568058BE5FFA0B8108B337A21F (DictationServiceAudioEventReference_t31BDC97AE06ADFF2F0EBC8F6F382FC846E70FCA3* __this, const RuntimeMethod* method) 
{
	{
		// _dictationServiceReference.DictationService.AudioEvents;
		DictationServiceReference_t4F8FFD7C7E30D455D78A146F6B51E461FA20DA20* L_0 = (&__this->____dictationServiceReference_4);
		DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* L_1;
		L_1 = DictationServiceReference_get_DictationService_mBBF4697608C8D3865F010FCD7686BAB83FB6F970(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = DictationService_get_AudioEvents_m3C42CABF347FD00F6389BF5713414F63AB4E41CA(L_1, NULL);
		return L_2;
	}
}
// System.Void Meta.WitAi.ServiceReferences.DictationServiceAudioEventReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationServiceAudioEventReference__ctor_m928385DB395A2224A8EA04E259A683C51777755D (DictationServiceAudioEventReference_t31BDC97AE06ADFF2F0EBC8F6F382FC846E70FCA3* __this, const RuntimeMethod* method) 
{
	{
		AudioInputServiceReference__ctor_m1D5961959A076D7B20B09B381006AEE698C4E1CB(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* DictationService_get_DictationEvents_m8AC884290BAE5CCC90FAF6BC365069268BBF9954 (DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* __this, const RuntimeMethod* method) 
{
	{
		// get => dictationEvents;
		DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* L_0 = __this->___dictationEvents_4;
		return L_0;
	}
}
// System.Void Meta.WitAi.Dictation.DictationService::set_DictationEvents(Meta.WitAi.Dictation.Events.DictationEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_set_DictationEvents_mD1DAAEA17A092E58DE1DD666C58CB673762BC40E (DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* __this, DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* ___value0, const RuntimeMethod* method) 
{
	{
		// set => dictationEvents = value;
		DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* L_0 = ___value0;
		__this->___dictationEvents_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dictationEvents_4), (void*)L_0);
		return;
	}
}
// Meta.WitAi.Events.TelemetryEvents Meta.WitAi.Dictation.DictationService::get_TelemetryEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* DictationService_get_TelemetryEvents_m83E39D6C497590021F84C2238EA125F000C7C340 (DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* __this, const RuntimeMethod* method) 
{
	{
		// public TelemetryEvents TelemetryEvents { get => telemetryEvents; set => telemetryEvents = value; }
		TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* L_0 = __this->___telemetryEvents_5;
		return L_0;
	}
}
// System.Void Meta.WitAi.Dictation.DictationService::set_TelemetryEvents(Meta.WitAi.Events.TelemetryEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_set_TelemetryEvents_m6C4291AA0CE8064546C87EE17B233704DCB4F25A (DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* __this, TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* ___value0, const RuntimeMethod* method) 
{
	{
		// public TelemetryEvents TelemetryEvents { get => telemetryEvents; set => telemetryEvents = value; }
		TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* L_0 = ___value0;
		__this->___telemetryEvents_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___telemetryEvents_5), (void*)L_0);
		return;
	}
}
// Meta.WitAi.Interfaces.IAudioInputEvents Meta.WitAi.Dictation.DictationService::get_AudioEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictationService_get_AudioEvents_m3C42CABF347FD00F6389BF5713414F63AB4E41CA (DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* __this, const RuntimeMethod* method) 
{
	{
		// public IAudioInputEvents AudioEvents => DictationEvents;
		DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* L_0;
		L_0 = VirtualFuncInvoker0< DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		return L_0;
	}
}
// Meta.WitAi.Interfaces.ITranscriptionEvent Meta.WitAi.Dictation.DictationService::get_TranscriptionEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictationService_get_TranscriptionEvents_m0AA144BB870C93CF7B3CFBE1B0E2233A7CAF490D (DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* __this, const RuntimeMethod* method) 
{
	{
		// public ITranscriptionEvent TranscriptionEvents => DictationEvents;
		DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* L_0;
		L_0 = VirtualFuncInvoker0< DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		return L_0;
	}
}
// System.Void Meta.WitAi.Dictation.DictationService::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_Activate_mB34FCD9668F03DDF2EB88F1D3F379D8F4952262A (DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Activate() => Activate(new WitRequestOptions(), new VoiceServiceRequestEvents());
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_0 = (WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483*)il2cpp_codegen_object_new(WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitRequestOptions__ctor_mE0690E218F01FC193447FCFACBD3A3BFF60AADCF(L_0, NULL);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_1 = (VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838*)il2cpp_codegen_object_new(VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		VoiceServiceRequestEvents__ctor_mC421AD9C8287440D1C67B9D33B14E25C8AA9DBD8(L_1, NULL);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_2;
		L_2 = VirtualFuncInvoker2< VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536*, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483*, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* >::Invoke(28 /* Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.Dictation.DictationService::Activate(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents) */, __this, L_0, L_1);
		return;
	}
}
// System.Void Meta.WitAi.Dictation.DictationService::Activate(Meta.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_Activate_mC617A3F90A04DC92347BFA6B41D653F3367B146F (DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* __this, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___requestOptions0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Activate(WitRequestOptions requestOptions) => Activate(requestOptions, new VoiceServiceRequestEvents());
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_0 = ___requestOptions0;
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_1 = (VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838*)il2cpp_codegen_object_new(VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		VoiceServiceRequestEvents__ctor_mC421AD9C8287440D1C67B9D33B14E25C8AA9DBD8(L_1, NULL);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_2;
		L_2 = VirtualFuncInvoker2< VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536*, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483*, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* >::Invoke(28 /* Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.Dictation.DictationService::Activate(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents) */, __this, L_0, L_1);
		return;
	}
}
// Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.Dictation.DictationService::Activate(Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* DictationService_Activate_m85C4D58C58E797B2D69E37BD73562D8DC67C7D52 (DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* __this, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___requestEvents0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VoiceServiceRequest Activate(VoiceServiceRequestEvents requestEvents) => Activate(new WitRequestOptions(), requestEvents);
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_0 = (WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483*)il2cpp_codegen_object_new(WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitRequestOptions__ctor_mE0690E218F01FC193447FCFACBD3A3BFF60AADCF(L_0, NULL);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_1 = ___requestEvents0;
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_2;
		L_2 = VirtualFuncInvoker2< VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536*, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483*, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* >::Invoke(28 /* Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.Dictation.DictationService::Activate(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents) */, __this, L_0, L_1);
		return L_2;
	}
}
// System.Void Meta.WitAi.Dictation.DictationService::ActivateImmediately()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_ActivateImmediately_mB8109B59C95B3B3CB27A2C592737754890A5D30A (DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void ActivateImmediately() => ActivateImmediately(new WitRequestOptions(), new VoiceServiceRequestEvents());
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_0 = (WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483*)il2cpp_codegen_object_new(WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitRequestOptions__ctor_mE0690E218F01FC193447FCFACBD3A3BFF60AADCF(L_0, NULL);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_1 = (VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838*)il2cpp_codegen_object_new(VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		VoiceServiceRequestEvents__ctor_mC421AD9C8287440D1C67B9D33B14E25C8AA9DBD8(L_1, NULL);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_2;
		L_2 = VirtualFuncInvoker2< VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536*, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483*, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* >::Invoke(29 /* Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.Dictation.DictationService::ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents) */, __this, L_0, L_1);
		return;
	}
}
// System.Void Meta.WitAi.Dictation.DictationService::ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_ActivateImmediately_m9E9121F7F3B0B093857DEA84A81CC5892F6BAA34 (DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* __this, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___requestOptions0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void ActivateImmediately(WitRequestOptions requestOptions) => ActivateImmediately(requestOptions, new VoiceServiceRequestEvents());
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_0 = ___requestOptions0;
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_1 = (VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838*)il2cpp_codegen_object_new(VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		VoiceServiceRequestEvents__ctor_mC421AD9C8287440D1C67B9D33B14E25C8AA9DBD8(L_1, NULL);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_2;
		L_2 = VirtualFuncInvoker2< VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536*, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483*, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* >::Invoke(29 /* Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.Dictation.DictationService::ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents) */, __this, L_0, L_1);
		return;
	}
}
// Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.Dictation.DictationService::ActivateImmediately(Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* DictationService_ActivateImmediately_m70403B6D414F80AE2B382515A880AAB618C25783 (DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* __this, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___requestEvents0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VoiceServiceRequest ActivateImmediately(VoiceServiceRequestEvents requestEvents) => ActivateImmediately(new WitRequestOptions(), requestEvents);
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_0 = (WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483*)il2cpp_codegen_object_new(WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitRequestOptions__ctor_mE0690E218F01FC193447FCFACBD3A3BFF60AADCF(L_0, NULL);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_1 = ___requestEvents0;
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_2;
		L_2 = VirtualFuncInvoker2< VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536*, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483*, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* >::Invoke(29 /* Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.Dictation.DictationService::ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents) */, __this, L_0, L_1);
		return L_2;
	}
}
// System.Void Meta.WitAi.Dictation.DictationService::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_Awake_m9D73AD12F09FB78124E8A44A318387BD1395C8DE (DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB_m0118E41DCAF2BA67B2779D8291BF03E32A98AA9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5_mDB4CC2FDB27B4ED85BF16474E02AD103A7E6C2B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB_mA9D185D54B663169AD1D27353B36FB9399F083A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5_m20B4FF673BCE55E37833D906DBB982415E18F185_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var audioEventListener = GetComponent<AudioEventListener>();
		AudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB* L_0;
		L_0 = Component_GetComponent_TisAudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB_m0118E41DCAF2BA67B2779D8291BF03E32A98AA9D(__this, Component_GetComponent_TisAudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB_m0118E41DCAF2BA67B2779D8291BF03E32A98AA9D_RuntimeMethod_var);
		// if (!audioEventListener)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// gameObject.AddComponent<AudioEventListener>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		AudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB* L_3;
		L_3 = GameObject_AddComponent_TisAudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB_mA9D185D54B663169AD1D27353B36FB9399F083A5(L_2, GameObject_AddComponent_TisAudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB_mA9D185D54B663169AD1D27353B36FB9399F083A5_RuntimeMethod_var);
	}

IL_0019:
	{
		// var transcriptionEventListener = GetComponent<TranscriptionEventListener>();
		TranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5* L_4;
		L_4 = Component_GetComponent_TisTranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5_mDB4CC2FDB27B4ED85BF16474E02AD103A7E6C2B1(__this, Component_GetComponent_TisTranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5_mDB4CC2FDB27B4ED85BF16474E02AD103A7E6C2B1_RuntimeMethod_var);
		// if (!transcriptionEventListener)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (L_5)
		{
			goto IL_0032;
		}
	}
	{
		// gameObject.AddComponent<TranscriptionEventListener>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		TranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5* L_7;
		L_7 = GameObject_AddComponent_TisTranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5_m20B4FF673BCE55E37833D906DBB982415E18F185(L_6, GameObject_AddComponent_TisTranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5_m20B4FF673BCE55E37833D906DBB982415E18F185_RuntimeMethod_var);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.DictationService::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_OnEnable_m9F359DBD0CCD1D5F2670FC7A2089ECD12263D514 (DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.DictationService::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_OnDisable_m844C346816A56ADC5BD00D0CCB1F1521C5D1AB8B (DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.DictationService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService__ctor_m9AFD7A256F383D33C9825760C202FC53263EFD3F (DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] protected DictationEvents dictationEvents = new DictationEvents();
		DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* L_0 = (DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC*)il2cpp_codegen_object_new(DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DictationEvents__ctor_m14BB8C94EE1C58ED5D2C5E63C6F1F5742C22E337(L_0, NULL);
		__this->___dictationEvents_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dictationEvents_4), (void*)L_0);
		// protected TelemetryEvents telemetryEvents = new TelemetryEvents();
		TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* L_1 = (TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC*)il2cpp_codegen_object_new(TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TelemetryEvents__ctor_mDBE94F9496224CC006896B23456F1BE265746EE6(L_1, NULL);
		__this->___telemetryEvents_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___telemetryEvents_5), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Meta.WitAi.Dictation.MultiRequestTranscription::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiRequestTranscription_Awake_m6F7E8454470B18A790B209BFC57F2AFA454D39C0 (MultiRequestTranscription_tE95F8ABA905139B0AD7F940A65D4D5B9E94FFFB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisDictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A_m3B494FD89E96747E95CF9DFA0C006B1D5A35BBBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!witDictation) witDictation = FindObjectOfType<DictationService>();
		DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* L_0 = __this->___witDictation_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (!witDictation) witDictation = FindObjectOfType<DictationService>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* L_2;
		L_2 = Object_FindObjectOfType_TisDictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A_m3B494FD89E96747E95CF9DFA0C006B1D5A35BBBA(Object_FindObjectOfType_TisDictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A_m3B494FD89E96747E95CF9DFA0C006B1D5A35BBBA_RuntimeMethod_var);
		__this->___witDictation_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___witDictation_4), (void*)L_2);
	}

IL_0018:
	{
		// _text = new StringBuilder();
		StringBuilder_t* L_3 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_3, NULL);
		__this->____text_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____text_8), (void*)L_3);
		// _separator = new StringBuilder();
		StringBuilder_t* L_4 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_4, NULL);
		__this->____separator_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____separator_11), (void*)L_4);
		// for (int i = 0; i < linesBetweenActivations; i++)
		V_0 = 0;
		goto IL_0042;
	}

IL_0032:
	{
		// _separator.AppendLine();
		StringBuilder_t* L_5 = __this->____separator_11;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_5, NULL);
		// for (int i = 0; i < linesBetweenActivations; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0042:
	{
		// for (int i = 0; i < linesBetweenActivations; i++)
		int32_t L_8 = V_0;
		int32_t L_9 = __this->___linesBetweenActivations_5;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0032;
		}
	}
	{
		// if (!string.IsNullOrEmpty(activationSeparator))
		String_t* L_10 = __this->___activationSeparator_6;
		bool L_11;
		L_11 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_10, NULL);
		if (L_11)
		{
			goto IL_006a;
		}
	}
	{
		// _separator.Append(activationSeparator);
		StringBuilder_t* L_12 = __this->____separator_11;
		String_t* L_13 = __this->___activationSeparator_6;
		NullCheck(L_12);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, L_13, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.MultiRequestTranscription::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiRequestTranscription_OnEnable_mF602729FDB134E3223950C7611F62EB328226F29 (MultiRequestTranscription_tE95F8ABA905139B0AD7F940A65D4D5B9E94FFFB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiRequestTranscription_OnCancelled_m3A9BE081F6B613099699E3F1C9BF492B693A6446_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiRequestTranscription_OnFullTranscription_mC89778BE8EA34158E3298FE30BC5754EDA67C147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiRequestTranscription_OnPartialTranscription_m90F3C83D530D86D412B4DF5B6F08FD80CBEFDD88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// witDictation.DictationEvents.OnFullTranscription.AddListener(OnFullTranscription);
		DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* L_0 = __this->___witDictation_4;
		NullCheck(L_0);
		DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* L_1;
		L_1 = VirtualFuncInvoker0< DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, L_0);
		NullCheck(L_1);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_2;
		L_2 = SpeechEvents_get_OnFullTranscription_m72C7935CDD9EBD2FCAC9C0ECADC2830417512065_inline(L_1, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_3 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_3, __this, (intptr_t)((void*)MultiRequestTranscription_OnFullTranscription_mC89778BE8EA34158E3298FE30BC5754EDA67C147_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_2, L_3, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// witDictation.DictationEvents.OnPartialTranscription.AddListener(OnPartialTranscription);
		DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* L_4 = __this->___witDictation_4;
		NullCheck(L_4);
		DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* L_5;
		L_5 = VirtualFuncInvoker0< DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, L_4);
		NullCheck(L_5);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_6;
		L_6 = SpeechEvents_get_OnPartialTranscription_m0BA26BCC13243D100712E20D4A6AE8DD56C64B18_inline(L_5, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_7 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_7, __this, (intptr_t)((void*)MultiRequestTranscription_OnPartialTranscription_m90F3C83D530D86D412B4DF5B6F08FD80CBEFDD88_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_6, L_7, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// witDictation.DictationEvents.OnAborting.AddListener(OnCancelled);
		DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* L_8 = __this->___witDictation_4;
		NullCheck(L_8);
		DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* L_9;
		L_9 = VirtualFuncInvoker0< DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, L_8);
		NullCheck(L_9);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_10;
		L_10 = SpeechEvents_get_OnAborting_mDA5491F8A6AADF0CBB44D92B3337090F3B5D0B68_inline(L_9, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_11 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_11, __this, (intptr_t)((void*)MultiRequestTranscription_OnCancelled_m3A9BE081F6B613099699E3F1C9BF492B693A6446_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.MultiRequestTranscription::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiRequestTranscription_OnDisable_mDD7E1DD93954962B4A6FE4B0625F0E05972D1498 (MultiRequestTranscription_tE95F8ABA905139B0AD7F940A65D4D5B9E94FFFB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiRequestTranscription_OnCancelled_m3A9BE081F6B613099699E3F1C9BF492B693A6446_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiRequestTranscription_OnFullTranscription_mC89778BE8EA34158E3298FE30BC5754EDA67C147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiRequestTranscription_OnPartialTranscription_m90F3C83D530D86D412B4DF5B6F08FD80CBEFDD88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _activeText = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->____activeText_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeText_9), (void*)L_0);
		// witDictation.DictationEvents.OnFullTranscription.RemoveListener(OnFullTranscription);
		DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* L_1 = __this->___witDictation_4;
		NullCheck(L_1);
		DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* L_2;
		L_2 = VirtualFuncInvoker0< DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, L_1);
		NullCheck(L_2);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_3;
		L_3 = SpeechEvents_get_OnFullTranscription_m72C7935CDD9EBD2FCAC9C0ECADC2830417512065_inline(L_2, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_4 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_4, __this, (intptr_t)((void*)MultiRequestTranscription_OnFullTranscription_mC89778BE8EA34158E3298FE30BC5754EDA67C147_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F(L_3, L_4, UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var);
		// witDictation.DictationEvents.OnPartialTranscription.RemoveListener(OnPartialTranscription);
		DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* L_5 = __this->___witDictation_4;
		NullCheck(L_5);
		DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* L_6;
		L_6 = VirtualFuncInvoker0< DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, L_5);
		NullCheck(L_6);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_7;
		L_7 = SpeechEvents_get_OnPartialTranscription_m0BA26BCC13243D100712E20D4A6AE8DD56C64B18_inline(L_6, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_8 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_8, __this, (intptr_t)((void*)MultiRequestTranscription_OnPartialTranscription_m90F3C83D530D86D412B4DF5B6F08FD80CBEFDD88_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F(L_7, L_8, UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var);
		// witDictation.DictationEvents.OnAborting.RemoveListener(OnCancelled);
		DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A* L_9 = __this->___witDictation_4;
		NullCheck(L_9);
		DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* L_10;
		L_10 = VirtualFuncInvoker0< DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, L_9);
		NullCheck(L_10);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_11;
		L_11 = SpeechEvents_get_OnAborting_mDA5491F8A6AADF0CBB44D92B3337090F3B5D0B68_inline(L_10, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_12 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_12, __this, (intptr_t)((void*)MultiRequestTranscription_OnCancelled_m3A9BE081F6B613099699E3F1C9BF492B693A6446_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.MultiRequestTranscription::OnCancelled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiRequestTranscription_OnCancelled_m3A9BE081F6B613099699E3F1C9BF492B693A6446 (MultiRequestTranscription_tE95F8ABA905139B0AD7F940A65D4D5B9E94FFFB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _activeText = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->____activeText_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeText_9), (void*)L_0);
		// OnTranscriptionUpdated();
		MultiRequestTranscription_OnTranscriptionUpdated_mA1D9172ED9D56787F329A62CDD4EE67989B0C8B1(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.MultiRequestTranscription::OnFullTranscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiRequestTranscription_OnFullTranscription_mC89778BE8EA34158E3298FE30BC5754EDA67C147 (MultiRequestTranscription_tE95F8ABA905139B0AD7F940A65D4D5B9E94FFFB6* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _activeText = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->____activeText_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeText_9), (void*)L_0);
		// if (_text.Length > 0)
		StringBuilder_t* L_1 = __this->____text_8;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_1, NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		// _text.Append(_separator);
		StringBuilder_t* L_3 = __this->____text_8;
		StringBuilder_t* L_4 = __this->____separator_11;
		NullCheck(L_3);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m8037E51D061CE657D7EB2EDAFCEE91878E4F8FFB(L_3, L_4, NULL);
	}

IL_002b:
	{
		// _text.Append(text);
		StringBuilder_t* L_6 = __this->____text_8;
		String_t* L_7 = ___text0;
		NullCheck(L_6);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_7, NULL);
		// OnTranscriptionUpdated();
		MultiRequestTranscription_OnTranscriptionUpdated_mA1D9172ED9D56787F329A62CDD4EE67989B0C8B1(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.MultiRequestTranscription::OnPartialTranscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiRequestTranscription_OnPartialTranscription_m90F3C83D530D86D412B4DF5B6F08FD80CBEFDD88 (MultiRequestTranscription_tE95F8ABA905139B0AD7F940A65D4D5B9E94FFFB6* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	{
		// _activeText = text;
		String_t* L_0 = ___text0;
		__this->____activeText_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeText_9), (void*)L_0);
		// OnTranscriptionUpdated();
		MultiRequestTranscription_OnTranscriptionUpdated_mA1D9172ED9D56787F329A62CDD4EE67989B0C8B1(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.MultiRequestTranscription::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiRequestTranscription_Clear_m8CD44A26B552FB8D5B5D9BAA5473B9872837FFB7 (MultiRequestTranscription_tE95F8ABA905139B0AD7F940A65D4D5B9E94FFFB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _text.Clear();
		StringBuilder_t* L_0 = __this->____text_8;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_0, NULL);
		// onTranscriptionUpdated.Invoke(string.Empty);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_2 = __this->___onTranscriptionUpdated_7;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_2);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(L_2, L_3, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.MultiRequestTranscription::OnTranscriptionUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiRequestTranscription_OnTranscriptionUpdated_mA1D9172ED9D56787F329A62CDD4EE67989B0C8B1 (MultiRequestTranscription_tE95F8ABA905139B0AD7F940A65D4D5B9E94FFFB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		// var transcription = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// transcription.Append(_text);
		StringBuilder_t* L_1 = V_0;
		StringBuilder_t* L_2 = __this->____text_8;
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m8037E51D061CE657D7EB2EDAFCEE91878E4F8FFB(L_1, L_2, NULL);
		// if (!string.IsNullOrEmpty(_activeText))
		String_t* L_4 = __this->____activeText_9;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (L_5)
		{
			goto IL_0050;
		}
	}
	{
		// if (transcription.Length > 0)
		StringBuilder_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_6, NULL);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		// transcription.Append(_separator);
		StringBuilder_t* L_8 = V_0;
		StringBuilder_t* L_9 = __this->____separator_11;
		NullCheck(L_8);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m8037E51D061CE657D7EB2EDAFCEE91878E4F8FFB(L_8, L_9, NULL);
	}

IL_0036:
	{
		// if (!string.IsNullOrEmpty(_activeText))
		String_t* L_11 = __this->____activeText_9;
		bool L_12;
		L_12 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_11, NULL);
		if (L_12)
		{
			goto IL_0050;
		}
	}
	{
		// transcription.Append(_activeText);
		StringBuilder_t* L_13 = V_0;
		String_t* L_14 = __this->____activeText_9;
		NullCheck(L_13);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, L_14, NULL);
	}

IL_0050:
	{
		// onTranscriptionUpdated.Invoke(transcription.ToString());
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_16 = __this->___onTranscriptionUpdated_7;
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		NullCheck(L_16);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(L_16, L_18, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.MultiRequestTranscription::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiRequestTranscription__ctor_m9C3007EB5ADAEF134AE951402F11323921E95C2B (MultiRequestTranscription_tE95F8ABA905139B0AD7F940A65D4D5B9E94FFFB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private int linesBetweenActivations = 2;
		__this->___linesBetweenActivations_5 = 2;
		// [SerializeField] private string activationSeparator = String.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___activationSeparator_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activationSeparator_6), (void*)L_0);
		// [SerializeField] private WitTranscriptionEvent onTranscriptionUpdated = new
		//     WitTranscriptionEvent();
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_1 = (WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739*)il2cpp_codegen_object_new(WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WitTranscriptionEvent__ctor_m8FBA54D34EA19C07F367E3FF38F12102983D0B4D(L_1, NULL);
		__this->___onTranscriptionUpdated_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onTranscriptionUpdated_7), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Meta.WitAi.Configuration.WitRuntimeConfiguration Meta.WitAi.Dictation.WitDictation::get_RuntimeConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* WitDictation_get_RuntimeConfiguration_m6BCE26A1878B1DFB3219C48D88F03FC9192EE969 (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, const RuntimeMethod* method) 
{
	{
		// get => witRuntimeConfiguration;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_0 = __this->___witRuntimeConfiguration_6;
		return L_0;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::set_RuntimeConfiguration(Meta.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_set_RuntimeConfiguration_m5A2175C6DC4A2C23207F8825498E45D41B946619 (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* ___value0, const RuntimeMethod* method) 
{
	{
		// set => witRuntimeConfiguration = value;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_0 = ___value0;
		__this->___witRuntimeConfiguration_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___witRuntimeConfiguration_6), (void*)L_0);
		return;
	}
}
// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.Dictation.WitDictation::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* WitDictation_get_Configuration_m81195F83F0724BACE49B1440DA420D5C3B3BB518 (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, const RuntimeMethod* method) 
{
	WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* G_B2_0 = NULL;
	WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* G_B1_0 = NULL;
	{
		// public WitConfiguration Configuration => RuntimeConfiguration?.witConfiguration;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_0;
		L_0 = WitDictation_get_RuntimeConfiguration_m6BCE26A1878B1DFB3219C48D88F03FC9192EE969_inline(__this, NULL);
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E*)NULL;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_2 = G_B2_0->___witConfiguration_0;
		return L_2;
	}
}
// System.Boolean Meta.WitAi.Dictation.WitDictation::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitDictation_get_Active_m198CD33AF690E5620E5A01E9DB1126389C0B34F7 (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Active => null != witService && witService.Active;
		WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* L_0 = __this->___witService_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* L_2 = __this->___witService_7;
		NullCheck(L_2);
		bool L_3;
		L_3 = WitService_get_Active_mAB7DE538900E3FCC9CFDDEE56A5C4B6365768B85(L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Boolean Meta.WitAi.Dictation.WitDictation::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitDictation_get_IsRequestActive_mF35C76CC3C8FD2A79E74C23C005D4302BA5F2A6B (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool IsRequestActive => null != witService && witService.IsRequestActive;
		WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* L_0 = __this->___witService_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* L_2 = __this->___witService_7;
		NullCheck(L_2);
		bool L_3;
		L_3 = WitService_get_IsRequestActive_mB557D91F99E08096A3BEFE333F6BF11AF5E234FE(L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// Meta.WitAi.Interfaces.ITranscriptionProvider Meta.WitAi.Dictation.WitDictation::get_TranscriptionProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitDictation_get_TranscriptionProvider_mDC07DEA5374AF78A15607E1733EF0CFE2A2A4AA5 (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, const RuntimeMethod* method) 
{
	{
		// get => witService.TranscriptionProvider;
		WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* L_0 = __this->___witService_7;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = WitService_get_TranscriptionProvider_m725FD4B210B7C548210F6C4A171E933C2F44FF6C_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::set_TranscriptionProvider(Meta.WitAi.Interfaces.ITranscriptionProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_set_TranscriptionProvider_m6B39103D4D20D8AE423910645CC1B4B416545038 (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// set => witService.TranscriptionProvider = value;
		WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* L_0 = __this->___witService_7;
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		WitService_set_TranscriptionProvider_m3D15E2A8D281B3471632D552B05D5D0BA0C28FF1(L_0, L_1, NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.Dictation.WitDictation::get_MicActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitDictation_get_MicActive_m1167ADD43F2CB541E21F0C0D8E14CA966555433D (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool MicActive => null != witService && witService.MicActive;
		WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* L_0 = __this->___witService_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* L_2 = __this->___witService_7;
		NullCheck(L_2);
		bool L_3;
		L_3 = WitService_get_MicActive_m4371F9F4D90CE3B95800F609D826F7C9F05B2F74(L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Boolean Meta.WitAi.Dictation.WitDictation::get_ShouldSendMicData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitDictation_get_ShouldSendMicData_m3041AF3961F04A9814C841AC1B1E9F5CC045869C (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, const RuntimeMethod* method) 
{
	{
		// protected override bool ShouldSendMicData => witRuntimeConfiguration.sendAudioToWit ||
		//                                              null == TranscriptionProvider;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_0 = __this->___witRuntimeConfiguration_6;
		NullCheck(L_0);
		bool L_1 = L_0->___sendAudioToWit_9;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(22 /* Meta.WitAi.Interfaces.ITranscriptionProvider Meta.WitAi.Dictation.DictationService::get_TranscriptionProvider() */, __this);
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_0017:
	{
		return (bool)1;
	}
}
// Meta.WitAi.Events.VoiceEvents Meta.WitAi.Dictation.WitDictation::get_VoiceEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* WitDictation_get_VoiceEvents_m66661FAAA1C63820EE312715796544C6E5DAA3AD (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, const RuntimeMethod* method) 
{
	{
		// public VoiceEvents VoiceEvents => _voiceEvents;
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_0 = __this->____voiceEvents_8;
		return L_0;
	}
}
// Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.WitDictation::get_DictationEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* WitDictation_get_DictationEvents_mC537CBAF7380AEF2F373E7E6E76E630A8DAD55B8 (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, const RuntimeMethod* method) 
{
	{
		// get => dictationEvents;
		DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* L_0 = ((DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A*)__this)->___dictationEvents_4;
		return L_0;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::set_DictationEvents(Meta.WitAi.Dictation.Events.DictationEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_set_DictationEvents_m39F911CC10D0406A50DFAA4E443B97A1BE6854C9 (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* ___value0, const RuntimeMethod* method) 
{
	DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* V_0 = NULL;
	{
		// DictationEvents oldEvents = dictationEvents;
		DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* L_0 = ((DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A*)__this)->___dictationEvents_4;
		V_0 = L_0;
		// dictationEvents = value;
		DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* L_1 = ___value0;
		((DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A*)__this)->___dictationEvents_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A*)__this)->___dictationEvents_4), (void*)L_1);
		// if (gameObject.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_2, NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// VoiceEvents.RemoveListener(oldEvents);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_4;
		L_4 = WitDictation_get_VoiceEvents_m66661FAAA1C63820EE312715796544C6E5DAA3AD_inline(__this, NULL);
		DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* L_5 = V_0;
		NullCheck(L_4);
		SpeechEvents_RemoveListener_mA1338474ECF961E4D54BE985326BCEC7A4A379E2(L_4, L_5, NULL);
		// VoiceEvents.AddListener(dictationEvents);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_6;
		L_6 = WitDictation_get_VoiceEvents_m66661FAAA1C63820EE312715796544C6E5DAA3AD_inline(__this, NULL);
		DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* L_7 = ((DictationService_t120A3B548978DE9D6F3EF299907186C4AC963F3A*)__this)->___dictationEvents_4;
		NullCheck(L_6);
		SpeechEvents_AddListener_m3D461943EAFCA1156B96614A9C0BFFAACDCDDBF3(L_6, L_7, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// Meta.WitAi.WitRequest Meta.WitAi.Dictation.WitDictation::CreateWitRequest(Meta.WitAi.Data.Configuration.WitConfiguration,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Interfaces.IDynamicEntitiesProvider[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900* WitDictation_CreateWitRequest_m0680D7C34E798C661B3C201F1A482565E8D2808C (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___config0, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___requestOptions1, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___requestEvents2, IDynamicEntitiesProviderU5BU5D_t03676A0B837E3DEC5D33166D2B141C51233506DC* ___additionalEntityProviders3, const RuntimeMethod* method) 
{
	{
		// return config.CreateDictationRequest(requestOptions, requestEvents);
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_0 = ___config0;
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_1 = ___requestOptions1;
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_2 = ___requestEvents2;
		WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900* L_3;
		L_3 = WitRequestFactory_CreateDictationRequest_m6FAF1D17D151D9724CFA61FFDFD3D27C328A9357(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.Dictation.WitDictation::Activate(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* WitDictation_Activate_mD3A41AA108E1B53A52502FA8185BDA107D206316 (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___requestOptions0, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___requestEvents1, const RuntimeMethod* method) 
{
	{
		// return witService.Activate(requestOptions, requestEvents);
		WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* L_0 = __this->___witService_7;
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_1 = ___requestOptions0;
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_2 = ___requestEvents1;
		NullCheck(L_0);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_3;
		L_3 = WitService_Activate_m0C74CF62C4F21BE1D789886CFE26BB20A2884FD0(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.Dictation.WitDictation::ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* WitDictation_ActivateImmediately_m2A6D633DA9DC991B12A080CC77BE929EC6CDF2D1 (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___requestOptions0, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___requestEvents1, const RuntimeMethod* method) 
{
	{
		// return witService.ActivateImmediately(requestOptions, requestEvents);
		WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* L_0 = __this->___witService_7;
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_1 = ___requestOptions0;
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_2 = ___requestEvents1;
		NullCheck(L_0);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_3;
		L_3 = WitService_ActivateImmediately_mA4382D601AB4A221D929E9C7BC44C06B0B2C8EFF(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_Deactivate_mBE7AF4E15741C97D20D2536155942478E420D1E5 (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, const RuntimeMethod* method) 
{
	{
		// witService.Deactivate();
		WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* L_0 = __this->___witService_7;
		NullCheck(L_0);
		WitService_Deactivate_mE674DE1EBF6C435E490F8A57D8DE628579ECC152(L_0, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_Cancel_m21A6871EB9D84DDD328FB92F208AAF74E59DC74F (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, const RuntimeMethod* method) 
{
	{
		// witService.DeactivateAndAbortRequest();
		WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* L_0 = __this->___witService_7;
		NullCheck(L_0);
		WitService_DeactivateAndAbortRequest_m129A65514F72499A89F83F5A94221D0EF8EE4038(L_0, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_Awake_m36915B9A96B6F6EF630E1E516AC25AB8445B1012 (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisWitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB_m2FFE0848746B9245C0EC4720A3DB19ADFC811209_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		DictationService_Awake_m9D73AD12F09FB78124E8A44A318387BD1395C8DE(__this, NULL);
		// witService = gameObject.AddComponent<WitService>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* L_1;
		L_1 = GameObject_AddComponent_TisWitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB_m2FFE0848746B9245C0EC4720A3DB19ADFC811209(L_0, GameObject_AddComponent_TisWitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB_m2FFE0848746B9245C0EC4720A3DB19ADFC811209_RuntimeMethod_var);
		__this->___witService_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___witService_7), (void*)L_1);
		// witService.VoiceEventProvider = this;
		WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* L_2 = __this->___witService_7;
		NullCheck(L_2);
		WitService_set_VoiceEventProvider_m1FB1126AA38CD547A6EE9580BD84064F92DB95DC_inline(L_2, __this, NULL);
		// witService.ConfigurationProvider = this;
		WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* L_3 = __this->___witService_7;
		NullCheck(L_3);
		WitService_set_ConfigurationProvider_m210849AC4E7763982947F1FD3998FE0381DD4157_inline(L_3, __this, NULL);
		// witService.WitRequestProvider = this;
		WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* L_4 = __this->___witService_7;
		NullCheck(L_4);
		WitService_set_WitRequestProvider_m234AC1CB07B785D1AD6BC00A3194FCFBF08EAFC1_inline(L_4, __this, NULL);
		// witService.TelemetryEventsProvider = this;
		WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* L_5 = __this->___witService_7;
		NullCheck(L_5);
		WitService_set_TelemetryEventsProvider_m9574C903F1E6FCF864A7F4B99F3C36086E267C1B_inline(L_5, __this, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_OnEnable_m16057356D681B4D8B7395741A1117CDB839B74A6 (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, const RuntimeMethod* method) 
{
	{
		// base.OnEnable();
		DictationService_OnEnable_m9F359DBD0CCD1D5F2670FC7A2089ECD12263D514(__this, NULL);
		// VoiceEvents.AddListener(DictationEvents);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_0;
		L_0 = WitDictation_get_VoiceEvents_m66661FAAA1C63820EE312715796544C6E5DAA3AD_inline(__this, NULL);
		DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* L_1;
		L_1 = VirtualFuncInvoker0< DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_0);
		SpeechEvents_AddListener_m3D461943EAFCA1156B96614A9C0BFFAACDCDDBF3(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_OnDisable_m2956D048C9B2EAF9B37B17344FFC50A18847138B (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, const RuntimeMethod* method) 
{
	{
		// base.OnDisable();
		DictationService_OnDisable_m844C346816A56ADC5BD00D0CCB1F1521C5D1AB8B(__this, NULL);
		// VoiceEvents.RemoveListener(DictationEvents);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_0;
		L_0 = WitDictation_get_VoiceEvents_m66661FAAA1C63820EE312715796544C6E5DAA3AD_inline(__this, NULL);
		DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* L_1;
		L_1 = VirtualFuncInvoker0< DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_0);
		SpeechEvents_RemoveListener_mA1338474ECF961E4D54BE985326BCEC7A4A379E2(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::TranscribeFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation_TranscribeFile_mF51F54B9C81CB0F2449ABE80E512A634CE158BDC (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, String_t* ___fileName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// var request = CreateWitRequest(witRuntimeConfiguration.witConfiguration, new WitRequestOptions(), new VoiceServiceRequestEvents());
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_0 = __this->___witRuntimeConfiguration_6;
		NullCheck(L_0);
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_1 = L_0->___witConfiguration_0;
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_2 = (WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483*)il2cpp_codegen_object_new(WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WitRequestOptions__ctor_mE0690E218F01FC193447FCFACBD3A3BFF60AADCF(L_2, NULL);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_3 = (VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838*)il2cpp_codegen_object_new(VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		VoiceServiceRequestEvents__ctor_mC421AD9C8287440D1C67B9D33B14E25C8AA9DBD8(L_3, NULL);
		WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900* L_4;
		L_4 = WitDictation_CreateWitRequest_m0680D7C34E798C661B3C201F1A482565E8D2808C(__this, L_1, L_2, L_3, (IDynamicEntitiesProviderU5BU5D_t03676A0B837E3DEC5D33166D2B141C51233506DC*)NULL, NULL);
		V_0 = L_4;
		// var data = File.ReadAllBytes(fileName);
		String_t* L_5 = ___fileName0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_5, NULL);
		V_1 = L_6;
		// request.postData = data;
		WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900* L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		NullCheck(L_7);
		L_7->___postData_16 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___postData_16), (void*)L_8);
		// witService.ExecuteRequest(request);
		WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* L_9 = __this->___witService_7;
		WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900* L_10 = V_0;
		NullCheck(L_9);
		WitService_ExecuteRequest_m90D471FC2727CB3D019613103A1692020F9124EC(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Dictation.WitDictation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictation__ctor_m6542096D76D48501EC363C5505C9574A453FF639 (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly VoiceEvents _voiceEvents = new VoiceEvents();
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_0 = (VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9*)il2cpp_codegen_object_new(VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		VoiceEvents__ctor_m08A9CD5D70F02629DAD941C6F045D838E3E7D619(L_0, NULL);
		__this->____voiceEvents_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____voiceEvents_8), (void*)L_0);
		DictationService__ctor_m9AFD7A256F383D33C9825760C202FC53263EFD3F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Meta.WitAi.Dictation.Events.DictationSessionEvent Meta.WitAi.Dictation.Events.DictationEvents::get_OnDictationSessionStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97* DictationEvents_get_OnDictationSessionStarted_m2BA6F8DB329F7BAA80B5599161CE4C8EA4B98DE8 (DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* __this, const RuntimeMethod* method) 
{
	{
		// public DictationSessionEvent OnDictationSessionStarted => _onDictationSessionStarted;
		DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97* L_0 = __this->____onDictationSessionStarted_32;
		return L_0;
	}
}
// Meta.WitAi.Dictation.Events.DictationSessionEvent Meta.WitAi.Dictation.Events.DictationEvents::get_OnDictationSessionStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97* DictationEvents_get_OnDictationSessionStopped_m1AEECF38CBE067F0831E5445342EE54465BD4430 (DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* __this, const RuntimeMethod* method) 
{
	{
		// public DictationSessionEvent OnDictationSessionStopped => _onDictationSessionStopped;
		DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97* L_0 = __this->____onDictationSessionStopped_33;
		return L_0;
	}
}
// Meta.WitAi.Dictation.Events.DictationSessionEvent Meta.WitAi.Dictation.Events.DictationEvents::get_onDictationSessionStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97* DictationEvents_get_onDictationSessionStarted_m4CC7006DC9D8332DF879D07CE9ACF3A972EE4387 (DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* __this, const RuntimeMethod* method) 
{
	{
		// public DictationSessionEvent onDictationSessionStarted => OnDictationSessionStarted;
		DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97* L_0;
		L_0 = DictationEvents_get_OnDictationSessionStarted_m2BA6F8DB329F7BAA80B5599161CE4C8EA4B98DE8_inline(__this, NULL);
		return L_0;
	}
}
// Meta.WitAi.Dictation.Events.DictationSessionEvent Meta.WitAi.Dictation.Events.DictationEvents::get_onDictationSessionStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97* DictationEvents_get_onDictationSessionStopped_mBD01602B81E3B8DACBA84A9A874F99E0337A90B8 (DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* __this, const RuntimeMethod* method) 
{
	{
		// public DictationSessionEvent onDictationSessionStopped => OnDictationSessionStopped;
		DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97* L_0;
		L_0 = DictationEvents_get_OnDictationSessionStopped_m1AEECF38CBE067F0831E5445342EE54465BD4430_inline(__this, NULL);
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Dictation.Events.DictationEvents::get_onStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* DictationEvents_get_onStart_m538F53805B4FE06F4EFC78E2F4DEBF2243666CE3 (DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent onStart => OnStartListening;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0;
		L_0 = SpeechEvents_get_OnStartListening_m1AE66AF56C8A79496E386C26CCB815E99EBB4DA7_inline(__this, NULL);
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Dictation.Events.DictationEvents::get_onStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* DictationEvents_get_onStopped_m335221C9E8679B2F1200B506BE4496A11E3E43EC (DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent onStopped => OnStoppedListening;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0;
		L_0 = SpeechEvents_get_OnStoppedListening_mB59F3490B5F895B311DA82A0288DC2AEACF87586_inline(__this, NULL);
		return L_0;
	}
}
// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Dictation.Events.DictationEvents::get_onMicAudioLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* DictationEvents_get_onMicAudioLevel_m5CF1F5FF4AFBDDB6C657BA97737298AF27A2BDA6 (DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* __this, const RuntimeMethod* method) 
{
	{
		// public WitMicLevelChangedEvent onMicAudioLevel => OnMicLevelChanged;
		WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* L_0;
		L_0 = SpeechEvents_get_OnMicLevelChanged_mF6437F7C9C8E60935C01C02C57CDFE62741F8CE8_inline(__this, NULL);
		return L_0;
	}
}
// Meta.WitAi.Events.WitErrorEvent Meta.WitAi.Dictation.Events.DictationEvents::get_onError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* DictationEvents_get_onError_m8A9ADBE8A9AA97FAEC7C7D5BC93343CE25B4F383 (DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* __this, const RuntimeMethod* method) 
{
	{
		// public WitErrorEvent onError => OnError;
		WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* L_0;
		L_0 = SpeechEvents_get_OnError_mCB052EBA347C9125964E56DD0BD6CC0264796421_inline(__this, NULL);
		return L_0;
	}
}
// Meta.WitAi.Events.WitResponseEvent Meta.WitAi.Dictation.Events.DictationEvents::get_onResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* DictationEvents_get_onResponse_m517145B8D588E0113DFECAB0763DCFE452463904 (DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* __this, const RuntimeMethod* method) 
{
	{
		// public WitResponseEvent onResponse => OnResponse;
		WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* L_0;
		L_0 = SpeechEvents_get_OnResponse_m35A479475B9CCCE66CDA4028A0A6AE6343E50400_inline(__this, NULL);
		return L_0;
	}
}
// System.Void Meta.WitAi.Dictation.Events.DictationEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationEvents__ctor_m14BB8C94EE1C58ED5D2C5E63C6F1F5742C22E337 (DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private DictationSessionEvent _onDictationSessionStarted = new DictationSessionEvent();
		DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97* L_0 = (DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97*)il2cpp_codegen_object_new(DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DictationSessionEvent__ctor_m5AC84A37F1FFA43CC9CF86A7F3D413679A8802D3(L_0, NULL);
		__this->____onDictationSessionStarted_32 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onDictationSessionStarted_32), (void*)L_0);
		// private DictationSessionEvent _onDictationSessionStopped = new DictationSessionEvent();
		DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97* L_1 = (DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97*)il2cpp_codegen_object_new(DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DictationSessionEvent__ctor_m5AC84A37F1FFA43CC9CF86A7F3D413679A8802D3(L_1, NULL);
		__this->____onDictationSessionStopped_33 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onDictationSessionStopped_33), (void*)L_1);
		SpeechEvents__ctor_m6D16CA375136DF4D38A1D2E97B4479CB530F9ADA(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Meta.WitAi.Dictation.Events.DictationSessionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationSessionEvent__ctor_m5AC84A37F1FFA43CC9CF86A7F3D413679A8802D3 (DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m0C8011D74C12E916F54FF256A60C04A334AB5111_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m0C8011D74C12E916F54FF256A60C04A334AB5111(__this, UnityEvent_1__ctor_m0C8011D74C12E916F54FF256A60C04A334AB5111_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Meta.WitAi.Dictation.Data.DictationSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationSession__ctor_m9B95E1111F60E6D443065FA7A37B09790A887AE4 (DictationSession_tD5DEAD00ADA69A7134F920A37933B042F4D3E74D* __this, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public string sessionId = Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		__this->___sessionId_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sessionId_5), (void*)L_1);
		VoiceSession__ctor_m84E12C01B690474505835B756F0857F85FB1F755(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* SpeechEvents_get_OnFullTranscription_m72C7935CDD9EBD2FCAC9C0ECADC2830417512065_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitTranscriptionEvent OnFullTranscription => _onFullTranscription;
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_0 = __this->____onFullTranscription_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* SpeechEvents_get_OnPartialTranscription_m0BA26BCC13243D100712E20D4A6AE8DD56C64B18_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitTranscriptionEvent OnPartialTranscription => _onPartialTranscription;
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_0 = __this->____onPartialTranscription_28;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnAborting_mDA5491F8A6AADF0CBB44D92B3337090F3B5D0B68_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnAborting => _onAborting;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onAborting_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* WitDictation_get_RuntimeConfiguration_m6BCE26A1878B1DFB3219C48D88F03FC9192EE969_inline (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, const RuntimeMethod* method) 
{
	{
		// get => witRuntimeConfiguration;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_0 = __this->___witRuntimeConfiguration_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WitService_get_TranscriptionProvider_m725FD4B210B7C548210F6C4A171E933C2F44FF6C_inline (WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* __this, const RuntimeMethod* method) 
{
	{
		// get => _activeTranscriptionProvider;
		RuntimeObject* L_0 = __this->____activeTranscriptionProvider_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* WitDictation_get_VoiceEvents_m66661FAAA1C63820EE312715796544C6E5DAA3AD_inline (WitDictation_t446BE9E679967E6B3DEAAE2BB88D26432D700407* __this, const RuntimeMethod* method) 
{
	{
		// public VoiceEvents VoiceEvents => _voiceEvents;
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_0 = __this->____voiceEvents_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitService_set_VoiceEventProvider_m1FB1126AA38CD547A6EE9580BD84064F92DB95DC_inline (WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// set => _voiceEventProvider = value;
		RuntimeObject* L_0 = ___value0;
		__this->____voiceEventProvider_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____voiceEventProvider_11), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitService_set_ConfigurationProvider_m210849AC4E7763982947F1FD3998FE0381DD4157_inline (WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// set => _runtimeConfigProvider = value;
		RuntimeObject* L_0 = ___value0;
		__this->____runtimeConfigProvider_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____runtimeConfigProvider_13), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitService_set_WitRequestProvider_m234AC1CB07B785D1AD6BC00A3194FCFBF08EAFC1_inline (WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// set => _witRequestProvider = value;
		RuntimeObject* L_0 = ___value0;
		__this->____witRequestProvider_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____witRequestProvider_16), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitService_set_TelemetryEventsProvider_m9574C903F1E6FCF864A7F4B99F3C36086E267C1B_inline (WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// set => _telemetryEventsProvider = value;
		RuntimeObject* L_0 = ___value0;
		__this->____telemetryEventsProvider_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____telemetryEventsProvider_12), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97* DictationEvents_get_OnDictationSessionStarted_m2BA6F8DB329F7BAA80B5599161CE4C8EA4B98DE8_inline (DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* __this, const RuntimeMethod* method) 
{
	{
		// public DictationSessionEvent OnDictationSessionStarted => _onDictationSessionStarted;
		DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97* L_0 = __this->____onDictationSessionStarted_32;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97* DictationEvents_get_OnDictationSessionStopped_m1AEECF38CBE067F0831E5445342EE54465BD4430_inline (DictationEvents_t6745E4BAB771187F75B1FC8BF3A02ADCACE84CFC* __this, const RuntimeMethod* method) 
{
	{
		// public DictationSessionEvent OnDictationSessionStopped => _onDictationSessionStopped;
		DictationSessionEvent_t81D21E72E38C3F5D76E064553C027E68D9289B97* L_0 = __this->____onDictationSessionStopped_33;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnStartListening_m1AE66AF56C8A79496E386C26CCB815E99EBB4DA7_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnStartListening => _onStartListening;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onStartListening_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnStoppedListening_mB59F3490B5F895B311DA82A0288DC2AEACF87586_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnStoppedListening => _onStoppedListening;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onStoppedListening_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* SpeechEvents_get_OnMicLevelChanged_mF6437F7C9C8E60935C01C02C57CDFE62741F8CE8_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitMicLevelChangedEvent OnMicLevelChanged => _onMicLevelChanged;
		WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* L_0 = __this->____onMicLevelChanged_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* SpeechEvents_get_OnError_mCB052EBA347C9125964E56DD0BD6CC0264796421_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitErrorEvent OnError => _onError;
		WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* L_0 = __this->____onError_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* SpeechEvents_get_OnResponse_m35A479475B9CCCE66CDA4028A0A6AE6343E50400_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitResponseEvent OnResponse => _onResponse;
		WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* L_0 = __this->____onResponse_19;
		return L_0;
	}
}
