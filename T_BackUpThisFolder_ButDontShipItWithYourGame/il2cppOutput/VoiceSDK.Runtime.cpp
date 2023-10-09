#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<System.Text.StringBuilder>
struct Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6;
// System.Action`1<Meta.WitAi.TTS.TTSService>
struct Action_1_t57277DB1A2C96FE1786EC8F434F38C04936E8D55;
// System.Action`1<Meta.WitAi.WitRequest>
struct Action_1_tEE33A71F533D86EBC6A768BBF5F08D7A5AA0DA35;
// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState>
struct Action_2_tA8AAF96FAF4A6358E7130C80F784D938CD1CE694;
// Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<System.Object>
struct BaseAndroidConnectionImpl_1_tA4C3B58831127678BDD16C6E068700A8CC5FFF88;
// Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Bindings.Android.VoiceSDKBinding>
struct BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Byte[]>
struct ConcurrentQueue_1_t65D5F18D7E02C26657F50B992141DC982E85B4A0;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Object,Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog>
struct Dictionary_2_t33EDB378CB3FAB3AA3D5F9A2BCF280AF33010C00;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.String,Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog>
struct Dictionary_2_t4C79FFD3DA8950C7EDEA3B63EBC17CDF35765011;
// System.Collections.Generic.HashSet`1<UnityEngine.Component>
struct HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<Meta.WitAi.Events.SpeechEvents>
struct HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct IEnumerable_1_t5E611CE39CFF1BF28867B51B0C37E661A9DD75D1;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct IEqualityComparer_1_t58FF6E948EA4845DCDDDC905962FA1A41B104FA1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog>
struct KeyCollection_t1A0A76528E979E6B8E0D510DFF9D752587B27D44;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// Meta.Voice.NLPRequest`4<System.Object,System.Object,System.Object,System.Object>
struct NLPRequest_4_t79F59B9AB3FBFADB04B729AEF19245FE89658855;
// Meta.Voice.NLPRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct NLPRequest_4_t7177BC2349443FF686C2D98FDB887CA5744C4323;
// Meta.WitAi.Data.RingBuffer`1<System.Byte>
struct RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276;
// Meta.Voice.TranscriptionRequestEvents`1<System.Object>
struct TranscriptionRequestEvents_1_tC4E9654F32479322C2B15FB336483473AA337067;
// Meta.Voice.TranscriptionRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>
struct TranscriptionRequestEvents_1_t9C76CCA9D6509EEDB9B9FED9016A35DBE9D3E585;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B;
// UnityEngine.Events.UnityAction`1<Meta.WitAi.TTS.Data.TTSClipData>
struct UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809;
// UnityEngine.Events.UnityAction`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896;
// UnityEngine.Events.UnityAction`1<Meta.WitAi.Json.WitResponseNode>
struct UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8;
// UnityEngine.Events.UnityAction`2<System.Int64,System.Double>
struct UnityAction_2_tD1BCB3DC65C3130393D8FC4FE131FDFBBBE54CE4;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C;
// UnityEngine.Events.UnityAction`2<System.String,System.String>
struct UnityAction_2_t0DBAE2B43FD6E30FC19DDEB9BE926A3402202A83;
// UnityEngine.Events.UnityAction`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>
struct UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.TTS.Data.TTSClipData>
struct UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>
struct UnityEvent_1_tD140963BF887A3E18CDB90439A9DD6FE5438B8B8;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Configuration.WitRequestOptions>
struct UnityEvent_1_tB2107CA265B68A4E479CAFA0530DAE8251E03F58;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>
struct UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D;
// UnityEngine.Events.UnityEvent`2<System.Int64,System.Double>
struct UnityEvent_2_t8D8E787461BECB35F2627E8001A36D825CA99A97;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961;
// UnityEngine.Events.UnityEvent`2<System.String,System.String>
struct UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50;
// UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>
struct UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct ValueCollection_t64E898E0B72E520E1E88680D2FFF4E0997AC8D66;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog>
struct ValueCollection_t502B15BC5E9FA43D6864C125979E58CAD5F4F865;
// Meta.Voice.VoiceRequestEvents`1<System.Object>
struct VoiceRequestEvents_1_t95DA2E7D5D393B0FC5B3C7D3D276186681278DD7;
// Meta.Voice.VoiceRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>
struct VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981;
// Meta.Voice.VoiceRequest`4<System.Object,System.Object,System.Object,System.Object>
struct VoiceRequest_4_t6799EEA3F92FAD2873D8E4F7650667AA90E2F95B;
// Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct VoiceRequest_4_t635CDB7E63C5322E9D11D83B63A401260F8BAA8C;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>[]
struct EntryU5BU5D_tFA685976D596A475477D8288ED93C3310B644095;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog>[]
struct EntryU5BU5D_t7D7288393C487295811259E34365B0FCB2F139D8;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343;
// System.Collections.Generic.HashSet`1/Slot<Meta.WitAi.Requests.VoiceServiceRequest>[]
struct SlotU5BU5D_t5F35C38C423264E86946704142505E0CB91836C9;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Meta.WitAi.Data.Info.ComposerGraph[]
struct ComposerGraphU5BU5D_t0BB5CF7F79C326E2D5DC0E30FA07EDFC0C7155D3;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Meta.WitAi.VoiceService[]
struct VoiceServiceU5BU5D_t0F6EBA47148CDC25807C5CD4DFC314DCA07F7484;
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
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection
struct AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// Oculus.Voice.AppVoiceExperience
struct AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF;
// Meta.WitAi.Data.AudioBuffer
struct AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72;
// Meta.WitAi.Data.AudioBufferConfiguration
struct AudioBufferConfiguration_tB38ABF06828B3927593D6E28F41EC838EFE9B8B3;
// Meta.WitAi.Events.AudioBufferEvents
struct AudioBufferEvents_t464B32397852A58D1333411135D8AB9CF2F6C233;
// Meta.WitAi.AudioDurationTracker
struct AudioDurationTracker_t43BE70DF8036B15F8C7D0E4E49F3333F0323BBFD;
// Meta.WitAi.Events.AudioDurationTrackerFinishedEvent
struct AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647;
// Meta.WitAi.Data.AudioEncoding
struct AudioEncoding_t98ED2D092A9829C604C73C3B611E2FC987413EE4;
// Oculus.Voice.Core.Bindings.Android.BaseServiceBinding
struct BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// Meta.WitAi.Interfaces.CustomTranscriptionProvider
struct CustomTranscriptionProvider_tC6EABF251A11EFEBE5A8AD8D77CEBF14FB1009C5;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Net.HttpWebRequest
struct HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9;
// Meta.Voice.Audio.IAudioClipStream
struct IAudioClipStream_t8C69DFC069C32750744A9CDED216D09F3788820F;
// Meta.WitAi.Interfaces.IAudioInputSource
struct IAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C;
// Meta.Voice.Audio.IAudioSystem
struct IAudioSystem_t893F5E85FC1F6F7BF7592D39F23FCC299A715B51;
// Meta.Conduit.IConduitDispatcher
struct IConduitDispatcher_t9DB0F42120182B87787DF6413D5A8A57F1B136DB;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Meta.WitAi.Interfaces.IDynamicEntitiesProvider
struct IDynamicEntitiesProvider_tBA0D49C35A9CCDC33A56C48C1DF22EAC2732BAAC;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Meta.Conduit.IParameterProvider
struct IParameterProvider_t54E8BABE59BFEF8B0AFE24B0CE382FAAF04B1F14;
// Oculus.Voice.Interfaces.IPlatformVoiceService
struct IPlatformVoiceService_tF80331031D071E67BDCF1AD27AFB37F433B8CD52;
// Meta.WitAi.Interfaces.ITranscriptionProvider
struct ITranscriptionProvider_t1379E57D7819531CCF5D18483E8D93DB1127DA2D;
// Oculus.Voice.Bindings.Android.IVCBindingEvents
struct IVCBindingEvents_tCAE3B3E0378C6B68FF50642AB9BBF4851AD1A5C4;
// Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger
struct IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0;
// Meta.WitAi.IVoiceService
struct IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC;
// Meta.WitAi.Interfaces.IWitConfigurationProvider
struct IWitConfigurationProvider_t10F6E96EFD591280386EEE382C0B2E94325333C3;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Meta.Voice.NLPRequestResponseEvent
struct NLPRequestResponseEvent_tDD562F3B70B56867885CA6AF029E93258D6ACB44;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Oculus.Voice.ObjectVoiceExperience
struct ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827;
// UnityEngine.Android.PermissionCallbacks
struct PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Security.Cryptography.SHA256
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Meta.WitAi.Events.SpeechEvents
struct SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Meta.WitAi.TTS.Data.TTSClipData
struct TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827;
// Meta.WitAi.TTS.Events.TTSClipErrorEvent
struct TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689;
// Meta.WitAi.TTS.Events.TTSClipEvent
struct TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40;
// Meta.WitAi.TTS.Data.TTSDiskCacheSettings
struct TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80;
// Meta.WitAi.TTS.Events.TTSDownloadEvents
struct TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089;
// Meta.WitAi.TTS.TTSService
struct TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D;
// Meta.WitAi.TTS.Events.TTSServiceEvents
struct TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF;
// Oculus.Voice.Logging.TTSServiceLogging
struct TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7;
// Meta.WitAi.TTS.Events.TTSStreamEvents
struct TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6;
// Meta.WitAi.TTS.Data.TTSVoiceSettings
struct TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326;
// Meta.WitAi.TTS.Events.TTSWebRequestEvents
struct TTSWebRequestEvents_tC4FECDF01945794BF9C37C4448B61EE0134CC1E5;
// Meta.WitAi.Events.TelemetryEvents
struct TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Meta.Voice.TranscriptionRequestEvent
struct TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// Oculus.VoiceSDK.UX.VoiceActivationButton
struct VoiceActivationButton_t5517345FB7D1A22B85C94B073ACDCCEB345F031A;
// Meta.WitAi.Events.VoiceEvents
struct VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9;
// Oculus.Voice.Bindings.Android.VoiceSDKBinding
struct VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1;
// Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding
struct VoiceSDKConfigBinding_t63C6CC95097F3A3384FB2132417E196693144DBB;
// Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKConsoleLoggerImpl
struct VoiceSDKConsoleLoggerImpl_tD830A3FDBCDEFAA68417E5F31BFB7B875818F59B;
// Oculus.Voice.Bindings.Android.VoiceSDKImpl
struct VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A;
// Oculus.Voice.Bindings.Android.VoiceSDKImplRequest
struct VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75;
// Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding
struct VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4;
// Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKLoggerBinding
struct VoiceSDKLoggerBinding_t598AF60F0F768523822B787A1E3123212A27D759;
// Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKPlatformLoggerImpl
struct VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993;
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
// Meta.WitAi.Requests.VoiceServiceRequestOptions
struct VoiceServiceRequestOptions_tBB80C39F5D734638F03442F09F4F106BD5F20EE4;
// Meta.WitAi.Requests.VoiceServiceRequestResults
struct VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497;
// Oculus.VoiceSDK.UX.VoiceTranscriptionLabel
struct VoiceTranscriptionLabel_t6D0504E24A4F16DD62EBD1A35A7A9A12FCFB9A55;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Meta.WitAi.Wit
struct Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81;
// Meta.WitAi.Events.WitByteDataEvent
struct WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC;
// Meta.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E;
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
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// Meta.WitAi.CoroutineUtility/CoroutinePerformer
struct CoroutinePerformer_t2423B696217C7475EF6AFE1D33000E8766703559;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Oculus.VoiceSDK.Utilities.MicPermissionsManager/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t4983429A5DFBA983A90A930D2B711DC21F0928EC;
// Meta.WitAi.WitRequest/OnCustomizeUriEvent
struct OnCustomizeUriEvent_t9763454475C9A0802CE0A68DD50B1206BC1678BE;
// Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent
struct OnProvideCustomHeadersEvent_tAE425A4949CC45A3669E527731B58B12341E7AA4;
// Meta.WitAi.WitRequest/PreSendRequestDelegate
struct PreSendRequestDelegate_t2C0F13F2841C74740CFA0F3F4BAF91EC5CF87C5A;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t57277DB1A2C96FE1786EC8F434F38C04936E8D55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioStreamDecodeType_tAB620C01ABB5A19964D7DFE66F2856B9C2B5F7C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t4C79FFD3DA8950C7EDEA3B63EBC17CDF35765011_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlatformVoiceService_tF80331031D071E67BDCF1AD27AFB37F433B8CD52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVCBindingEvents_tCAE3B3E0378C6B68FF50642AB9BBF4851AD1A5C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVoiceActivationHandler_t92524B948032EDC913767859D29B5EFDD7438B86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWitConfigurationProvider_t10F6E96EFD591280386EEE382C0B2E94325333C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t4983429A5DFBA983A90A930D2B711DC21F0928EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t0DBAE2B43FD6E30FC19DDEB9BE926A3402202A83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_tD1BCB3DC65C3130393D8FC4FE131FDFBBBE54CE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceSDKConfigBinding_t63C6CC95097F3A3384FB2132417E196693144DBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral009B2393908F71D06D49150F8D76B306E76A6F71;
IL2CPP_EXTERN_C String_t* _stringLiteral00E41D42C2ADF1C57D8B97F8A6CCDED95285A64C;
IL2CPP_EXTERN_C String_t* _stringLiteral04F7A632CB9093444F04C91A3DED8164C4B86967;
IL2CPP_EXTERN_C String_t* _stringLiteral059D2D8503B18BBF1A91395054BF3B7D6AE0CFCC;
IL2CPP_EXTERN_C String_t* _stringLiteral092BA6AD0413546226AD2BEA11159B0EB044FDB2;
IL2CPP_EXTERN_C String_t* _stringLiteral0AD681F3CCA95D9E6DBE642350F27A4677186DCE;
IL2CPP_EXTERN_C String_t* _stringLiteral0ADCE98000A1E213D168FF9E6AD07CD47FBA0EE9;
IL2CPP_EXTERN_C String_t* _stringLiteral0B4C9B994D78DE3313E2AEE4DF0964592BF389FE;
IL2CPP_EXTERN_C String_t* _stringLiteral0BCDDF342A73CF6C15DBCBD80233EF8B1AD281CD;
IL2CPP_EXTERN_C String_t* _stringLiteral0C45DB50527FCFAD456E74EB416B617329505309;
IL2CPP_EXTERN_C String_t* _stringLiteral0C8E84E39D0E62D31544DE3953FDF92C5BAB60EB;
IL2CPP_EXTERN_C String_t* _stringLiteral0DF52374CCE8AA942D55172FF34E782E0277521F;
IL2CPP_EXTERN_C String_t* _stringLiteral0FD7B3C1033C1EF1C45607B35492B62E1CFC7C11;
IL2CPP_EXTERN_C String_t* _stringLiteral0FFEE78AE9B9B70D02D981D757BDC5718500A44C;
IL2CPP_EXTERN_C String_t* _stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C;
IL2CPP_EXTERN_C String_t* _stringLiteral112AEE07A72CC5B0BD54135F5BEBD553BC960DCC;
IL2CPP_EXTERN_C String_t* _stringLiteral17A5AD13F3B52AA01A6CBB2F9F414BE34E8AB9A9;
IL2CPP_EXTERN_C String_t* _stringLiteral1820E647BC43B12E095BB83CACC06DCCF7C816B9;
IL2CPP_EXTERN_C String_t* _stringLiteral1843B1E941F6A3C0E4110772113431741BE3E061;
IL2CPP_EXTERN_C String_t* _stringLiteral1A11CB2257580AF506A77D19EE092D4CDEF9C6D5;
IL2CPP_EXTERN_C String_t* _stringLiteral1B62E5629805E3224249BCAA0D9ECBB4C84AE48B;
IL2CPP_EXTERN_C String_t* _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29;
IL2CPP_EXTERN_C String_t* _stringLiteral203DD5C89072A85E4D8D935A3028CCC3E3855F85;
IL2CPP_EXTERN_C String_t* _stringLiteral21916927D1C2A23DD6DA3C2E7FE2F3D6317F563A;
IL2CPP_EXTERN_C String_t* _stringLiteral23DFEA97252D648F4EA2A6B771F82146E5CED7D8;
IL2CPP_EXTERN_C String_t* _stringLiteral2887437BCA2B9747807C22BD44376772EBBE4F62;
IL2CPP_EXTERN_C String_t* _stringLiteral2894440BAEB414CE20DA9ED3F006FA5CDAC39A0A;
IL2CPP_EXTERN_C String_t* _stringLiteral2C25F3C2950E0AFEA7FBD0AEB1FD0CC9CF30F713;
IL2CPP_EXTERN_C String_t* _stringLiteral2F3DB030C8BDF0926D14123D900497AE12BB3AD1;
IL2CPP_EXTERN_C String_t* _stringLiteral2F59628CFCF68C1C363F48F1FB91CF30C77F0D31;
IL2CPP_EXTERN_C String_t* _stringLiteral3071111457D2E6DE5F1B14C4FAB682F6E0FFAB70;
IL2CPP_EXTERN_C String_t* _stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C;
IL2CPP_EXTERN_C String_t* _stringLiteral34A0CA7C65D8EA1257DCD5BABA1EEB95E6C5E244;
IL2CPP_EXTERN_C String_t* _stringLiteral361CDD76EEF3F6E43190EA2E6D184590B6545659;
IL2CPP_EXTERN_C String_t* _stringLiteral375ED8BBE05A9343F552D3F8863536344C38BCA2;
IL2CPP_EXTERN_C String_t* _stringLiteral376CA77BE87EBF24FE3233A567285926D6704A8E;
IL2CPP_EXTERN_C String_t* _stringLiteral3B322A3FA1E8AF97C5D21A2D349C0D614C4FE854;
IL2CPP_EXTERN_C String_t* _stringLiteral3CFC2EF3D9EDDF6FCDC092F234CE3CD4452F0038;
IL2CPP_EXTERN_C String_t* _stringLiteral42803C53AA4A1E97C977D23B6151233E4358454F;
IL2CPP_EXTERN_C String_t* _stringLiteral44B2D05B30930277A76F515F28030129C61E365D;
IL2CPP_EXTERN_C String_t* _stringLiteral44F8CF1DD153763D204008F1F37945C204372AE8;
IL2CPP_EXTERN_C String_t* _stringLiteral455532645A36B471DC93D48F55B5E5617AE61927;
IL2CPP_EXTERN_C String_t* _stringLiteral459CA1A783220A8007E9DD248A257FE22F59A157;
IL2CPP_EXTERN_C String_t* _stringLiteral45A6A359B020506529C26653998F41906D297BD2;
IL2CPP_EXTERN_C String_t* _stringLiteral47DA4AFC29222C9791B731DF4DADD99DC88F94B0;
IL2CPP_EXTERN_C String_t* _stringLiteral4B0E509E3481549FC8F096287EFB425FAAFC38A4;
IL2CPP_EXTERN_C String_t* _stringLiteral4BF2D245939E3F8C5FCC94859405A931946FD428;
IL2CPP_EXTERN_C String_t* _stringLiteral52BB1AD0DD3A85E7F05A9AEA98E0EEB98B478F6D;
IL2CPP_EXTERN_C String_t* _stringLiteral52CCE57FBBB435D24E1DD8F182FA0BDA2750C166;
IL2CPP_EXTERN_C String_t* _stringLiteral540FC1C9BFCBBB4FA1B5B7948321692AACB9CE7A;
IL2CPP_EXTERN_C String_t* _stringLiteral541ADAD93719A7753AA265CAD6BA6276D2686025;
IL2CPP_EXTERN_C String_t* _stringLiteral548DD7D06577C4334EC607D75585201092F56682;
IL2CPP_EXTERN_C String_t* _stringLiteral550894D8930D82CF3BB3AC17DFA88A6C23CEFAA2;
IL2CPP_EXTERN_C String_t* _stringLiteral5756AECEA7064F13CC9765BE1F87065EA5B3D18E;
IL2CPP_EXTERN_C String_t* _stringLiteral58AE457A2E7C031E4E4EADC82BC37330A84838AD;
IL2CPP_EXTERN_C String_t* _stringLiteral58E6C2EC507A286B7251F62BDC9CAE9A390FC260;
IL2CPP_EXTERN_C String_t* _stringLiteral591184A69213A4D299171C75373FEABB89BF8937;
IL2CPP_EXTERN_C String_t* _stringLiteral5A9AEFD32E63F4C4FEAE65BF93199A9A35785D51;
IL2CPP_EXTERN_C String_t* _stringLiteral5D5A4764C731B021A048CFC139A82DD3DA9BD940;
IL2CPP_EXTERN_C String_t* _stringLiteral5E3E2576A59667A5ADD34DEA55FAAF0634D3379E;
IL2CPP_EXTERN_C String_t* _stringLiteral607C6077E36406D8A8A0E09E6751FDB0C5DEE673;
IL2CPP_EXTERN_C String_t* _stringLiteral60B5F0B94F9F43FCA0CB9E41D3FA61B9254BDC05;
IL2CPP_EXTERN_C String_t* _stringLiteral60DB2D6C7D1E32BCBAC4811B3E7978364FFC0102;
IL2CPP_EXTERN_C String_t* _stringLiteral612B514077F211362B9850601E9C65C05DE45FCC;
IL2CPP_EXTERN_C String_t* _stringLiteral62B962D58D79AB658276228C081F11858A78D27B;
IL2CPP_EXTERN_C String_t* _stringLiteral62DF8B883A7680DEF02C157C7AF38B4A3E89D8BF;
IL2CPP_EXTERN_C String_t* _stringLiteral647CF137C0F27918F699BD1C0B1DC7FF9EFC1014;
IL2CPP_EXTERN_C String_t* _stringLiteral654BFE537B0ADB16C92A45895BD6054F35C69AC2;
IL2CPP_EXTERN_C String_t* _stringLiteral6ACA126350941A62677533ACC01C769BF2C144F3;
IL2CPP_EXTERN_C String_t* _stringLiteral6C2259C1F5D9911CDDA502DB9262E503845291FD;
IL2CPP_EXTERN_C String_t* _stringLiteral6CD966C6F70DF98361E72B6885D22A1DAAAEDC33;
IL2CPP_EXTERN_C String_t* _stringLiteral6D2C56060B3F7353031AD314517C27945CC39748;
IL2CPP_EXTERN_C String_t* _stringLiteral6DB33ADD301402F08747C4EE933A8EF10A8128F7;
IL2CPP_EXTERN_C String_t* _stringLiteral6E376700E58DD3581CFBE1F901798D5C61E52BA0;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5431EF8CF17B42351F85D399751058873E7E92;
IL2CPP_EXTERN_C String_t* _stringLiteral6FCACA7D51404EF06FCE5239D8C92E6191ABA80F;
IL2CPP_EXTERN_C String_t* _stringLiteral70D7A6B6F07D06B84D969116AFFEF4306B8E5C76;
IL2CPP_EXTERN_C String_t* _stringLiteral71562A6EF05B696E3C241CD3AC6CBE92C9CC34E4;
IL2CPP_EXTERN_C String_t* _stringLiteral734D834219E25F6AC949E3C4A33AA80BB578DC1A;
IL2CPP_EXTERN_C String_t* _stringLiteral73D8E11C6B0DFF5D3141AFDA853D918DD590FE66;
IL2CPP_EXTERN_C String_t* _stringLiteral752699A52EB197527BED33C5B99BC4ECEA6CA2C5;
IL2CPP_EXTERN_C String_t* _stringLiteral757897937B2F4FAC7D54EC81DE0F5EA06552BBC7;
IL2CPP_EXTERN_C String_t* _stringLiteral758539BAB55F46D4BBF114C2EFD7959EAC1D4F74;
IL2CPP_EXTERN_C String_t* _stringLiteral76518E7DE5882197CD91E9F2E6826A3C0B9F493C;
IL2CPP_EXTERN_C String_t* _stringLiteral77EE5971434CDE6F74A1DAE44D94954E1624D77C;
IL2CPP_EXTERN_C String_t* _stringLiteral7A27C2F288438DD1823D8FA78BB3A4F69453087B;
IL2CPP_EXTERN_C String_t* _stringLiteral7C022E2202C33B05A9AD14AE1A1E837AC3233551;
IL2CPP_EXTERN_C String_t* _stringLiteral7DCA7ABB7665F39A2018B81163C1408CAD7D1078;
IL2CPP_EXTERN_C String_t* _stringLiteral82938739DC25500B2FDF6A71BF7855A06D9CE065;
IL2CPP_EXTERN_C String_t* _stringLiteral876C5E86B8C3F36CC9EE33BD83A2E4C40D583CF7;
IL2CPP_EXTERN_C String_t* _stringLiteral88CE8E234A99CCC43174399F014A281BE375DA3B;
IL2CPP_EXTERN_C String_t* _stringLiteral8973AE49BD46E89F131A8F5F8A58904E2C1CA11A;
IL2CPP_EXTERN_C String_t* _stringLiteral89DD495BF8F6260A2012F42471A630D65E682877;
IL2CPP_EXTERN_C String_t* _stringLiteral8FA7542A896F56F6303AD171587806AB0CDBD95D;
IL2CPP_EXTERN_C String_t* _stringLiteral90299BFCD00E6E29A61209F375686A81B96665F6;
IL2CPP_EXTERN_C String_t* _stringLiteral9155F30AA734CC9F26A86F037D8B48FDF7869B2B;
IL2CPP_EXTERN_C String_t* _stringLiteral9198612C1E03878B69FB53EDEFD1E20C986857B4;
IL2CPP_EXTERN_C String_t* _stringLiteral92880054127C75525C53DE67A3AC1E56944CD8F5;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteral9611837DC9F59CE850732A48008AE16B5242C6BE;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral99F5492A05A8C160F59C1B0615E2B0A504E56678;
IL2CPP_EXTERN_C String_t* _stringLiteral9D0AFAB723466D5AEB28205DB63F17CC6A8430C3;
IL2CPP_EXTERN_C String_t* _stringLiteral9F10E972FF3AD9BCA9E85E8ACEC160516A000E86;
IL2CPP_EXTERN_C String_t* _stringLiteralA0C6FF001ADF1824C2B6266A303671C2386842C6;
IL2CPP_EXTERN_C String_t* _stringLiteralA10964CC93D7E488FED7249F5076B722443D1789;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1;
IL2CPP_EXTERN_C String_t* _stringLiteralA3691F02FF1D37B1190812560F0848EC71261DA2;
IL2CPP_EXTERN_C String_t* _stringLiteralA3CED0A910CE6733B5E12AE3171291BDBFE22631;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DC94CE2E4ADB08254413E0E3386625CB614D76;
IL2CPP_EXTERN_C String_t* _stringLiteralA4249AEA5B1AE9E78829F6D9A0EFE24DE7967450;
IL2CPP_EXTERN_C String_t* _stringLiteralA5F5BF1922B226E3D4630BD3232DEBE4F927C7DE;
IL2CPP_EXTERN_C String_t* _stringLiteralAB4F3A484ED3991575D8B729EC5A620357A4A41B;
IL2CPP_EXTERN_C String_t* _stringLiteralAC73D661602F46A092AF190767F8E68241BB314F;
IL2CPP_EXTERN_C String_t* _stringLiteralAE7B62EEB89F8DE61743260B194DFADDDC2372C1;
IL2CPP_EXTERN_C String_t* _stringLiteralB6814B83C0CAFFAC7308A42994ACCC03CA22FCCE;
IL2CPP_EXTERN_C String_t* _stringLiteralB87F49253CFFED648B03A8D5C67D4624305684D4;
IL2CPP_EXTERN_C String_t* _stringLiteralB9CE0BCF216F3F1257A8C396F63FF8CECAB574F7;
IL2CPP_EXTERN_C String_t* _stringLiteralBA8F86E450F61205EF060F7DA79C0B6904644890;
IL2CPP_EXTERN_C String_t* _stringLiteralBAE99594C9291FC466C7FDEADF4CE02C97917A51;
IL2CPP_EXTERN_C String_t* _stringLiteralBBF23B4B70E0BD3FF31AB982C6BDF878E58833CB;
IL2CPP_EXTERN_C String_t* _stringLiteralBC1A73A406A2B8A6BA7CDD3AE6E608083E7333CC;
IL2CPP_EXTERN_C String_t* _stringLiteralBD279B34956BA7F8E34C5C3AFF65333266E085D6;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC04CC788232484E918569E326AD3839934507B;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC9163C315671EAC81D72701BD6DCF13C6773FA;
IL2CPP_EXTERN_C String_t* _stringLiteralBE7DD99E85C227059851B0EE97AE932456AEF7DC;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC1975E9A78A2FD35E6CC7B379E04990FAB148155;
IL2CPP_EXTERN_C String_t* _stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37;
IL2CPP_EXTERN_C String_t* _stringLiteralC57DF55488E115904EE3CE487DC4A90DE22A342F;
IL2CPP_EXTERN_C String_t* _stringLiteralC6083E3193B2C42160931E36C8DF7C83A18368C1;
IL2CPP_EXTERN_C String_t* _stringLiteralC6AEA7FDCC06A3ECCEE1AF1AF5703BFDA86CD244;
IL2CPP_EXTERN_C String_t* _stringLiteralC6CF1388F62C641E47D1C0FC9A05AF1D6F8FCB6F;
IL2CPP_EXTERN_C String_t* _stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096;
IL2CPP_EXTERN_C String_t* _stringLiteralC8091E2D2F6CED8F44D831FBF9A846D40850FA72;
IL2CPP_EXTERN_C String_t* _stringLiteralC8FA3FC5D47930CB399E570088545EDE20A971DB;
IL2CPP_EXTERN_C String_t* _stringLiteralC982AFF5E079BBDA3580BE37ECC91BC71135F59E;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF168F877EC6D86E1C62FE514023B4373C1018D;
IL2CPP_EXTERN_C String_t* _stringLiteralCBF28E8A6AC6C4E3A3E60076E430BBC6501C8AF4;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD4A60C78B1E543FC99764C33AEB77BCFE4231207;
IL2CPP_EXTERN_C String_t* _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964;
IL2CPP_EXTERN_C String_t* _stringLiteralD744E0023ACB34526A1B142EFA90B5CFF45FDC53;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F;
IL2CPP_EXTERN_C String_t* _stringLiteralDCCA071A995303A9BBCD5E2DBE5E190C2B0A05FA;
IL2CPP_EXTERN_C String_t* _stringLiteralDCCF22B1EB35EC58FFEB04A8C396594903C38127;
IL2CPP_EXTERN_C String_t* _stringLiteralDD4104677145B876F292A0DE0E3D05E4D6B15066;
IL2CPP_EXTERN_C String_t* _stringLiteralDD6C5540AB43FA5EAE750894E23E2E250DD5E7B1;
IL2CPP_EXTERN_C String_t* _stringLiteralE0973000AFB7A33EB6108E555F37DE0D4155B187;
IL2CPP_EXTERN_C String_t* _stringLiteralE1423475EA278C8BCE568970404EECBE529CBEAA;
IL2CPP_EXTERN_C String_t* _stringLiteralE760573AA7D8A67A8B2068119D02E73882BC4A43;
IL2CPP_EXTERN_C String_t* _stringLiteralE8F4B323C30FAE436F30D6A29F7DDC0C29CD5F62;
IL2CPP_EXTERN_C String_t* _stringLiteralEAA0AD4C9DDC7B173ACD12710BBE084A3B32C5F6;
IL2CPP_EXTERN_C String_t* _stringLiteralEB39CC48C9C18312603F049AD5F95F130C96D608;
IL2CPP_EXTERN_C String_t* _stringLiteralEC992C951DB0BC53E8B3C5900205297E72E6E965;
IL2CPP_EXTERN_C String_t* _stringLiteralECE395CDAEB0ECDBD5A23AA77D43B5263126619C;
IL2CPP_EXTERN_C String_t* _stringLiteralEE166EB545AC42FA5F62142A18E3268B3A5D8A77;
IL2CPP_EXTERN_C String_t* _stringLiteralEE1EF95F5D04D20EF4C7CF4CAB5C1D4027F8F1AB;
IL2CPP_EXTERN_C String_t* _stringLiteralEFDD8635A33F297BE7CCE3F542CD9461E76FF3B7;
IL2CPP_EXTERN_C String_t* _stringLiteralF1791A4023492EC42A6A612D3F7AEB832B83E613;
IL2CPP_EXTERN_C String_t* _stringLiteralF3D4075FEE3A6553252231D0D9D36146556637A3;
IL2CPP_EXTERN_C String_t* _stringLiteralF5F89232B0CDE6B0E7076884EA8579F8F38D88C1;
IL2CPP_EXTERN_C String_t* _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B;
IL2CPP_EXTERN_C String_t* _stringLiteralFB15B199286087ABF3CFB70DE2FEE096A6EE64C3;
IL2CPP_EXTERN_C String_t* _stringLiteralFC140051BF200AB88497170B5004988B2DA52192;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6C1DC2224936F4BEE7CBA35A0036A85E7B52F4;
IL2CPP_EXTERN_C String_t* _stringLiteralFD4F4E562E3D5D78A8F85CA721593F333654CFCE;
IL2CPP_EXTERN_C String_t* _stringLiteralFD5890B382C18CBAC2E6BD9433A9A1E32BBDECC0;
IL2CPP_EXTERN_C String_t* _stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1C70D480560CA0D0C171727EB7B1FF4C1F267F15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4BE09BF2FD0695C38B40120A43296C6808B0F31F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppVoiceExperience_OnAudioDurationTrackerFinished_m8A674E70657144510C37DDCB407F8448E5D2A046_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppVoiceExperience_OnFullTranscription_mD136FC61E33844D716993A0401D9C893111492B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppVoiceExperience_OnMicDataSent_mD8EB7402399CBD6160E0F6847E50D46DD401445F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppVoiceExperience_OnMinimumWakeThresholdHit_m0E993681E61A11C64C7AF5E0CEBADBD4351C4823_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppVoiceExperience_OnPartialTranscription_m43DDBC74AA40D0415607BDBC16E385FA71083529_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppVoiceExperience_OnRequestComplete_m87274E71C728B608E296BBAEB45628AB7CD6374A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppVoiceExperience_OnRequestInit_m0E6D46242FC24941EFB5D01CA31513F3A7193BDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppVoiceExperience_OnSend_mADA1EFAAA5CF2C6F1370EF6AAE214D2BF1D1278E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppVoiceExperience_OnStartedListening_m1B032B403E9F607D166D9B275C6B2790292EEB65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppVoiceExperience_OnStoppedListeningDueToDeactivation_mEA47204E2E074720C40644911F21E8ED9D24B3AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppVoiceExperience_OnStoppedListeningDueToInactivity_m62CBE21E8203BE6EAA39E318BEFA46A2D59283A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppVoiceExperience_OnStoppedListeningDueToTimeout_m9AF658CBBC99740BB27872ACE974E4CA1A202682_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppVoiceExperience_OnStoppedListening_m19CF3A2B9878EE39D16B8CE4F428B93217109BAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppVoiceExperience_OnWitResponseListener_mC7B073E49C3EDBE342A667792EAEEE835652C9D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppVoiceExperience_U3CInitVoiceSDKU3Eb__44_0_mA9C415566EEC602B8D1049A7DED086FC5AE3EA0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseAndroidConnectionImpl_1_Connect_m98AC713280FE00772A276E37AC3442A77B465CEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseAndroidConnectionImpl_1_Disconnect_mA5F161E6B61246B5919266A3C4A151C31092189D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseAndroidConnectionImpl_1__ctor_mF468E5CB91C72482F571B497B147F08542E8CC80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisIWitConfigurationProvider_t10F6E96EFD591280386EEE382C0B2E94325333C3_m5E35E768F44DAAA094DC5C1B3C6F30B23A6080DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7_m71B5CF48056A53AB4BDC0F936A72793532AA72C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisWit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81_m6AB221606184DEBB0DE27D756243BA92513E5C93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m38C6401E811ABEFA847926B7653D33164A5DBF2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m738809F2B7C254B544E989D865C5E6C02AFB7404_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m36954781460815A63FB8A357AD7235F87C00969B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m96809BA36D32F4A59571E3C7FB63D7614F61C0B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m5AF46713421C1F94BB11EFFCF0D56D8682E7B06B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisVoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536_mF12222DC4CEBF5BCC6CA2AD209B9D539E30DAAE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1717C5902C12395F339137E7C859B070DC3E4AC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7726F1B66F3C91BA3CC742401FCBE2D36717D8D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAB1C5F19EA9209F72A2F2543713CEA1A7CCF29EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7_m4E02C9E1D05C9E2DBBE1477A28F14618682BAEC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisWit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81_m161213BAE1F339C97C4E3AEBD106B6A14F7850C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_m87A41B25D0955A50171FAB790A096BB0B9102DD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m3CA5C7394243399E85AD48B66709FF22C685473D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m16F3F7420AE65B74DBA459919C8EE4CDDD67B377_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m5CB1CFB26B2AE6689AC3D812FBD04752E0F5E469_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m8FBC2DC239E52D1082A0E433EC2F46FFD7AE5D6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m7599E6C0496CE36BC943F965522F13EEE6303F23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_mDE40B5AA383E622BEFDF2028B2668F3A199C9772_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_CopyTo_m2DEA1FFA96F37A6F52C3D47D69E60F1B1C7E8B50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_get_Count_m4091EB97339FC86B2770A513C1BB6EEBB9E8FAFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NLPRequest_4_Send_m543F669E5C9AE067D7B57E0C12B0053A418D4872_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectVoiceExperience_HandleAudioActivation_mDCE09C403DB4C47EACF0D682222B5612AAC2401A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectVoiceExperience_HandleAudioDeactivation_m6279EA99537432DA17968FAA4BDBBED9714AD0D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectVoiceExperience_HandleAudioInputStateChange_m4381855B0B7F007431E8DF27C3F016D6FC942640_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectVoiceExperience_HandleCancel_mE9738C8FB5BBA3DF129C55B3091F3E7D25AD1879_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectVoiceExperience_HandleComplete_m2C32B1683D6E7F6CB84E1BA5A8B9883404251285_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectVoiceExperience_HandleDownloadProgressChange_m9734CE103A003552FC7A81D9E84491D6A86D2843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectVoiceExperience_HandleFailed_m287A00E51235F0AC174758D4999F771703CF09EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectVoiceExperience_HandleFullTranscription_m4715FACF6F73A80B00599F0CE9B6D4D885487670_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectVoiceExperience_HandleInit_mFA162C04A84507EFC384B5C3D5CF51FB4B59CE8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectVoiceExperience_HandlePartialTranscription_m45DBE1F53C66F3B42DCAA2A76D592D4B35580B7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectVoiceExperience_HandleSend_mFB1A58D232AB4EB0097A4BC19CF7FD43876B540A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectVoiceExperience_HandleStartListening_mDDC63B6207D74D4B28F4AD6C56EE9902CC53FB17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectVoiceExperience_HandleStateChange_m33E50B948D82473ACC0084F0F06E738F24D3A17A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectVoiceExperience_HandleStopListening_m37B2F847D882DDE51C61FD3EFA93AC2CDAA243BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectVoiceExperience_HandleSuccess_m91E7A91D3B6827030CD431747AB4198FC6C72568_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectVoiceExperience_HandleUploadProgressChange_m2400CA40DD77ADDACB5C4FF68F958E7A5F65CC24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisAppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF_m8397FDEAFB49032F5E84ED9937CA30800385502C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDA8F5B3610935B66B1EC441F14D138F7C47411EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDCA64A62C0DE0D098A97F8FDFDA230DAEA167555_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSServiceLogging_OnRequestBegin_m556775CDF19AF575A878B1CB76A02F34E3933245_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSServiceLogging_OnRequestCancel_m8BE61F8D30DFFC9A8B3A84AC3D39865448609331_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSServiceLogging_OnRequestComplete_m9550AE3127C6B5786C71229DFA2FCA59C3D1E602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSServiceLogging_OnRequestError_mF6C261823983A6ACA3A7B245931079B00F812AFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSServiceLogging_OnRequestFirstResponse_m407B49045E82665355331C61A1DC5F375A3C20D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSServiceLogging_OnRequestReady_m2C33A60627A914B3A79B51E047B405B25FD65173_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSServiceLogging_OnServiceStart_m302D7452463FD93C90C6B8214A7229767C382445_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranscriptionRequestEvents_1_get_OnAudioActivation_m813715AE17139B19DED8A67BD243BCAD21852545_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranscriptionRequestEvents_1_get_OnAudioDeactivation_m2A0E42CD4A4BE3A28DF8C2DA5EBC6E1A75AC1541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranscriptionRequestEvents_1_get_OnAudioInputStateChange_mF5C332349C5A2F5D34FB2A88A1BCEB000E408AF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranscriptionRequestEvents_1_get_OnFullTranscription_m8DCC37FE078DDDE599940178F24793A948734050_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranscriptionRequestEvents_1_get_OnPartialTranscription_mFC81596B72E31A12519D70AC2182360C8DDA69D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranscriptionRequestEvents_1_get_OnStartListening_mD9C59DC7A6C2C2C61AB5A4137E03531704AA5EB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranscriptionRequestEvents_1_get_OnStopListening_m9AD3AED265F5EBB43BBF3845BE8B8398E31F108B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CRequestMicPermissionU3Eb__0_m5D27A7895C5158560A2D5A1189C06ECBDF5FD4E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m03EDE8CB25D09EA569869E869DC2554E4D9E2F55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m29A1E14E6C4E7BD2AA1810F34C1F79A2D1A6B2CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m3B94A53C1F1B0E7C93061F3651DE1E716127DEF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m75F136A134251EC0553FA93A8F6DB17C273F2D25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m8CED891B50C804B13259BD552FD7621CFF6CF7E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m84C07A346FB285EE2C1488B1F0D69BC6557E8D54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_AddListener_m1F3FE6BD9D4A9C57206FB67E9CE9C277BF3557DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_AddListener_m762AA5B1470E71CD800C81D865CA790FB8390D83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m40308708481154EFE4E59A5787D5CB02DC8B5645_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_mE12D8B1489A72A3AD9E7E020A64138B0AD806DFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_RemoveListener_m14CBE08174F26830B90291AE2E5126A5CC001F95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_RemoveListener_mF064823D14A8A7CC3CE23E401348A847A18FF7CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceActivationButton_OnClick_m26E25D1F891AFDDE14104E0F0578A081547449E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceActivationButton_OnComplete_m5817A717203C276DE8E01486ED778F14D3457241_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceActivationButton_OnInit_mC45831C731498EFE85348C0E16A6F235F3508629_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceRequestEvents_1_get_OnCancel_m93EF162482A866C17FEA71230F2A67314F27CA79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceRequestEvents_1_get_OnComplete_mCF88D3B32BB971E0CDD460436A604C337B58ABA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceRequestEvents_1_get_OnDownloadProgressChange_m0752D4341E1C858A84B6A49F92AB49DB51152D49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceRequestEvents_1_get_OnFailed_mD9FA83DC2035E8D5C5EA84AF7E7EAC9F2D7AE4C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceRequestEvents_1_get_OnInit_m02F0C353A1306EBC0F79EB6C6F1990CBE892D1B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceRequestEvents_1_get_OnSend_m6436A95B91606C3B15CB57C5E3591E0230A29CBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceRequestEvents_1_get_OnStateChange_mD1D19967DB9E5AD4FE0DFEC8A2E0F2298FAC16C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceRequestEvents_1_get_OnSuccess_mFE8C133667AE3019A85E73A5117971DA76BD35FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceRequestEvents_1_get_OnUploadProgressChange_mBC40C133A0BD578D98DE0D5E8B227373C09EE05C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceRequest_4_get_Events_m203351D7CF3E967C106C1CB5FA57C03D3754A132_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceRequest_4_get_State_mD1BF2E4830CA915E79E008BB91B6F53BDFA4748D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceSDKConstants_OnCustomUserAgent_m0811AEC65F29CC362B219BDC9F99CCA2E2E077E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceSDKImpl_OnRequestCanceled_mBB992A0F8696098849503C93541DA919095C345A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceSDKImpl_OnRequestComplete_m3B8EFE630D402FD3C8507AB10156CC6AE48BBEE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceSDKImpl_OnRequestFailed_m72F77F4D52E0EE70152F3EA1B80D1E3E91FB8556_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceSDKImpl_OnRequestSuccess_mD093D6DFA88EBC48610BF589608DB53359E66870_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceSDKImpl_OnStoppedListening_mA1756BD9180B56077E95BCC85BCB126D14A6BFD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceTranscriptionLabel_OnComplete_mA1210373958E2BA535ED0D9CB9FBF5F43C8A3A4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceTranscriptionLabel_OnError_mD6BCBFA200C3DCB2EDBE2D81B46F1B581DC80524_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceTranscriptionLabel_OnStartListening_mE3A301E45B1B6059242C5479E2BA5BCE54EF7F91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceTranscriptionLabel_OnTranscriptionChange_mF55062A409B4A5546580DA196282D49ADBE73DE1_RuntimeMethod_var;
struct ComposerGraph_t1AEED7052A249877C3A05B265FDC790A35F7EFC6_marshaled_com;
struct ComposerGraph_t1AEED7052A249877C3A05B265FDC790A35F7EFC6_marshaled_pinvoke;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
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

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct VoiceServiceU5BU5D_t0F6EBA47148CDC25807C5CD4DFC314DCA07F7484;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t0884DB74AEEEC7E1EEC72A76654867EE7EDE408C 
{
};

// Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Bindings.Android.VoiceSDKBinding>
struct BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF  : public RuntimeObject
{
	// System.String Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1::fragmentClassName
	String_t* ___fragmentClassName_0;
	// T Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1::service
	VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* ___service_1;
	// Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1::serviceConnection
	AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB* ___serviceConnection_2;
};

// Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKLoggerBinding>
struct BaseAndroidConnectionImpl_1_tB843327F5F7A38DC3005ED10F716728EF7135C09  : public RuntimeObject
{
	// System.String Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1::fragmentClassName
	String_t* ___fragmentClassName_0;
	// T Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1::service
	VoiceSDKLoggerBinding_t598AF60F0F768523822B787A1E3123212A27D759* ___service_1;
	// Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1::serviceConnection
	AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB* ___serviceConnection_2;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tFA685976D596A475477D8288ED93C3310B644095* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t64E898E0B72E520E1E88680D2FFF4E0997AC8D66* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog>
struct Dictionary_2_t4C79FFD3DA8950C7EDEA3B63EBC17CDF35765011  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7D7288393C487295811259E34365B0FCB2F139D8* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t1A0A76528E979E6B8E0D510DFF9D752587B27D44* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t502B15BC5E9FA43D6864C125979E58CAD5F4F865* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t5F35C38C423264E86946704142505E0CB91836C9* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
};

// Meta.Voice.VoiceRequestEvents`1<System.Object>
struct VoiceRequestEvents_1_t95DA2E7D5D393B0FC5B3C7D3D276186681278DD7  : public RuntimeObject
{
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onStateChange
	RuntimeObject* ____onStateChange_0;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onInit
	RuntimeObject* ____onInit_1;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onSend
	RuntimeObject* ____onSend_2;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onCancel
	RuntimeObject* ____onCancel_3;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onFailed
	RuntimeObject* ____onFailed_4;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onSuccess
	RuntimeObject* ____onSuccess_5;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onComplete
	RuntimeObject* ____onComplete_6;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onDownloadProgressChange
	RuntimeObject* ____onDownloadProgressChange_7;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onUploadProgressChange
	RuntimeObject* ____onUploadProgressChange_8;
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

// Meta.Voice.VoiceRequest`4<System.Object,System.Object,System.Object,System.Object>
struct VoiceRequest_4_t6799EEA3F92FAD2873D8E4F7650667AA90E2F95B  : public RuntimeObject
{
	// Meta.Voice.VoiceRequestState Meta.Voice.VoiceRequest`4::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_0;
	// System.Single Meta.Voice.VoiceRequest`4::<DownloadProgress>k__BackingField
	float ___U3CDownloadProgressU3Ek__BackingField_1;
	// System.Single Meta.Voice.VoiceRequest`4::<UploadProgress>k__BackingField
	float ___U3CUploadProgressU3Ek__BackingField_2;
	// TOptions Meta.Voice.VoiceRequest`4::<Options>k__BackingField
	RuntimeObject* ___U3COptionsU3Ek__BackingField_3;
	// TEvents Meta.Voice.VoiceRequest`4::<Events>k__BackingField
	RuntimeObject* ___U3CEventsU3Ek__BackingField_4;
	// TResults Meta.Voice.VoiceRequest`4::<Results>k__BackingField
	RuntimeObject* ___U3CResultsU3Ek__BackingField_5;
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

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// Oculus.Voice.AppBuiltIns
struct AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E  : public RuntimeObject
{
};

struct AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields
{
	// System.String Oculus.Voice.AppBuiltIns::builtInPrefix
	String_t* ___builtInPrefix_0;
	// System.String Oculus.Voice.AppBuiltIns::modelName
	String_t* ___modelName_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>> Oculus.Voice.AppBuiltIns::apps
	Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* ___apps_2;
};
struct Il2CppArrayBounds;

// Oculus.Voice.Core.Bindings.Android.BaseServiceBinding
struct BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject Oculus.Voice.Core.Bindings.Android.BaseServiceBinding::binding
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___binding_0;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Meta.WitAi.Events.EventRegistry
struct EventRegistry_t712584F20910AAA2A4A85A34835BC58574C441FE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.Events.EventRegistry::_overriddenCallbacks
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____overriddenCallbacks_0;
	// System.Collections.Generic.HashSet`1<System.String> Meta.WitAi.Events.EventRegistry::_overriddenCallbacksHash
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____overriddenCallbacksHash_1;
};

// Oculus.VoiceSDK.Utilities.MicPermissionsManager
struct MicPermissionsManager_t28755CB83276B1A0F423B84C4558F4096E243F95  : public RuntimeObject
{
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

// Meta.WitAi.TTS.Data.TTSClipData
struct TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827  : public RuntimeObject
{
	// System.String Meta.WitAi.TTS.Data.TTSClipData::textToSpeak
	String_t* ___textToSpeak_0;
	// System.String Meta.WitAi.TTS.Data.TTSClipData::clipID
	String_t* ___clipID_1;
	// UnityEngine.AudioType Meta.WitAi.TTS.Data.TTSClipData::audioType
	int32_t ___audioType_2;
	// Meta.WitAi.TTS.Data.TTSVoiceSettings Meta.WitAi.TTS.Data.TTSClipData::voiceSettings
	TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___voiceSettings_3;
	// Meta.WitAi.TTS.Data.TTSDiskCacheSettings Meta.WitAi.TTS.Data.TTSClipData::diskCacheSettings
	TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings_4;
	// System.String Meta.WitAi.TTS.Data.TTSClipData::_queryRequestId
	String_t* ____queryRequestId_5;
	// System.Boolean Meta.WitAi.TTS.Data.TTSClipData::queryStream
	bool ___queryStream_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.TTS.Data.TTSClipData::queryParameters
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___queryParameters_7;
	// Meta.Voice.Audio.IAudioClipStream Meta.WitAi.TTS.Data.TTSClipData::_clipStream
	RuntimeObject* ____clipStream_8;
	// Meta.WitAi.TTS.Data.TTSClipLoadState Meta.WitAi.TTS.Data.TTSClipData::loadState
	int32_t ___loadState_9;
	// System.Single Meta.WitAi.TTS.Data.TTSClipData::loadProgress
	float ___loadProgress_10;
	// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState> Meta.WitAi.TTS.Data.TTSClipData::onStateChange
	Action_2_tA8AAF96FAF4A6358E7130C80F784D938CD1CE694* ___onStateChange_11;
	// System.Action`1<System.String> Meta.WitAi.TTS.Data.TTSClipData::onPlaybackReady
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onPlaybackReady_12;
	// System.Action`1<System.String> Meta.WitAi.TTS.Data.TTSClipData::onDownloadComplete
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onDownloadComplete_13;
};

// Meta.WitAi.TTS.Events.TTSServiceEvents
struct TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF  : public RuntimeObject
{
	// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Events.TTSServiceEvents::OnClipCreated
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___OnClipCreated_0;
	// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Events.TTSServiceEvents::OnClipUnloaded
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___OnClipUnloaded_1;
	// Meta.WitAi.TTS.Events.TTSWebRequestEvents Meta.WitAi.TTS.Events.TTSServiceEvents::WebRequest
	TTSWebRequestEvents_tC4FECDF01945794BF9C37C4448B61EE0134CC1E5* ___WebRequest_2;
	// Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Events.TTSServiceEvents::Stream
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* ___Stream_3;
	// Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Events.TTSServiceEvents::Download
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* ___Download_4;
};

// Meta.WitAi.TTS.Events.TTSWebRequestEvents
struct TTSWebRequestEvents_tC4FECDF01945794BF9C37C4448B61EE0134CC1E5  : public RuntimeObject
{
	// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Events.TTSWebRequestEvents::OnRequestBegin
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___OnRequestBegin_0;
	// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Events.TTSWebRequestEvents::OnRequestCancel
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___OnRequestCancel_1;
	// Meta.WitAi.TTS.Events.TTSClipErrorEvent Meta.WitAi.TTS.Events.TTSWebRequestEvents::OnRequestError
	TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* ___OnRequestError_2;
	// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Events.TTSWebRequestEvents::OnRequestFirstResponse
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___OnRequestFirstResponse_3;
	// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Events.TTSWebRequestEvents::OnRequestReady
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___OnRequestReady_4;
	// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Events.TTSWebRequestEvents::OnRequestComplete
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___OnRequestComplete_5;
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

// Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding
struct VoiceSDKConfigBinding_t63C6CC95097F3A3384FB2132417E196693144DBB  : public RuntimeObject
{
	// Meta.WitAi.Configuration.WitRuntimeConfiguration Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding::configuration
	WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* ___configuration_0;
};

// Oculus.Voice.VoiceSDKConstants
struct VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823  : public RuntimeObject
{
};

struct VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_StaticFields
{
	// System.Boolean Oculus.Voice.VoiceSDKConstants::_isInitialized
	bool ____isInitialized_0;
	// System.String Oculus.Voice.VoiceSDKConstants::_sdkVersion
	String_t* ____sdkVersion_1;
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

// Meta.WitAi.Requests.VoiceServiceRequestResults
struct VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497  : public RuntimeObject
{
	// System.Int32 Meta.WitAi.Requests.VoiceServiceRequestResults::<StatusCode>k__BackingField
	int32_t ___U3CStatusCodeU3Ek__BackingField_0;
	// System.String Meta.WitAi.Requests.VoiceServiceRequestResults::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;
	// System.String Meta.WitAi.Requests.VoiceServiceRequestResults::<Transcription>k__BackingField
	String_t* ___U3CTranscriptionU3Ek__BackingField_2;
	// System.Boolean Meta.WitAi.Requests.VoiceServiceRequestResults::<IsFinalTranscription>k__BackingField
	bool ___U3CIsFinalTranscriptionU3Ek__BackingField_3;
	// System.String[] Meta.WitAi.Requests.VoiceServiceRequestResults::<FinalTranscriptions>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CFinalTranscriptionsU3Ek__BackingField_4;
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Requests.VoiceServiceRequestResults::<ResponseData>k__BackingField
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___U3CResponseDataU3Ek__BackingField_5;
};

// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C  : public RuntimeObject
{
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

// Oculus.VoiceSDK.Utilities.MicPermissionsManager/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t4983429A5DFBA983A90A930D2B711DC21F0928EC  : public RuntimeObject
{
	// System.Action`1<System.String> Oculus.VoiceSDK.Utilities.MicPermissionsManager/<>c__DisplayClass1_0::permissionGrantedCallback
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___permissionGrantedCallback_0;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<Meta.WitAi.Requests.VoiceServiceRequest>
struct Enumerator_t238229FA78C36CE2AB25DB5A0A3638F0B1E1DBE2 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ____current_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	RuntimeObject* ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>
struct Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	String_t* ____currentKey_3;
};

// Meta.Voice.TranscriptionRequestEvents`1<System.Object>
struct TranscriptionRequestEvents_1_tC4E9654F32479322C2B15FB336483473AA337067  : public VoiceRequestEvents_1_t95DA2E7D5D393B0FC5B3C7D3D276186681278DD7
{
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onAudioInputStateChange
	RuntimeObject* ____onAudioInputStateChange_9;
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onAudioActivation
	RuntimeObject* ____onAudioActivation_10;
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onStartListening
	RuntimeObject* ____onStartListening_11;
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onAudioDeactivation
	RuntimeObject* ____onAudioDeactivation_12;
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onStopListening
	RuntimeObject* ____onStopListening_13;
	// Meta.Voice.TranscriptionRequestEvent Meta.Voice.TranscriptionRequestEvents`1::_onPartialTranscription
	TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE* ____onPartialTranscription_14;
	// Meta.Voice.TranscriptionRequestEvent Meta.Voice.TranscriptionRequestEvents`1::_onFullTranscription
	TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE* ____onFullTranscription_15;
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

// Meta.Voice.TranscriptionRequest`4<System.Object,System.Object,System.Object,System.Object>
struct TranscriptionRequest_4_t83C1BC70A4F9F446C0915970241859EDE6013F0A  : public VoiceRequest_4_t6799EEA3F92FAD2873D8E4F7650667AA90E2F95B
{
	// Meta.Voice.VoiceAudioInputState Meta.Voice.TranscriptionRequest`4::<AudioInputState>k__BackingField
	int32_t ___U3CAudioInputStateU3Ek__BackingField_6;
};

// Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct TranscriptionRequest_4_tF432B63E335559CC13F9AF9EFAE88109A3CA3963  : public VoiceRequest_4_t635CDB7E63C5322E9D11D83B63A401260F8BAA8C
{
	// Meta.Voice.VoiceAudioInputState Meta.Voice.TranscriptionRequest`4::<AudioInputState>k__BackingField
	int32_t ___U3CAudioInputStateU3Ek__BackingField_6;
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

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.TTS.Data.TTSClipData>
struct UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>
struct UnityEvent_1_tD140963BF887A3E18CDB90439A9DD6FE5438B8B8  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Configuration.WitRequestOptions>
struct UnityEvent_1_tB2107CA265B68A4E479CAFA0530DAE8251E03F58  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
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

// UnityEngine.Events.UnityEvent`2<System.Int64,System.Double>
struct UnityEvent_2_t8D8E787461BECB35F2627E8001A36D825CA99A97  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<System.String,System.String>
struct UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>
struct UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// Oculus.Voice.Bindings.Android.VoiceSDKBinding
struct VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1  : public BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01
{
};

// Oculus.Voice.Bindings.Android.VoiceSDKImpl
struct VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A  : public BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF
{
	// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImpl::_isServiceAvailable
	bool ____isServiceAvailable_3;
	// System.Action Oculus.Voice.Bindings.Android.VoiceSDKImpl::OnServiceNotAvailableEvent
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnServiceNotAvailableEvent_4;
	// Meta.WitAi.IVoiceService Oculus.Voice.Bindings.Android.VoiceSDKImpl::_baseVoiceService
	RuntimeObject* ____baseVoiceService_5;
	// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImpl::_isActive
	bool ____isActive_6;
	// Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding Oculus.Voice.Bindings.Android.VoiceSDKImpl::eventBinding
	VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* ___eventBinding_7;
	// System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest> Oculus.Voice.Bindings.Android.VoiceSDKImpl::<Requests>k__BackingField
	HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* ___U3CRequestsU3Ek__BackingField_8;
	// Meta.WitAi.Interfaces.ITranscriptionProvider Oculus.Voice.Bindings.Android.VoiceSDKImpl::<TranscriptionProvider>k__BackingField
	RuntimeObject* ___U3CTranscriptionProviderU3Ek__BackingField_9;
};

// Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKPlatformLoggerImpl
struct VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993  : public BaseAndroidConnectionImpl_1_tB843327F5F7A38DC3005ED10F716728EF7135C09
{
	// System.Boolean Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKPlatformLoggerImpl::<IsUsingPlatformIntegration>k__BackingField
	bool ___U3CIsUsingPlatformIntegrationU3Ek__BackingField_3;
	// System.String Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKPlatformLoggerImpl::<WitApplication>k__BackingField
	String_t* ___U3CWitApplicationU3Ek__BackingField_4;
	// Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKConsoleLoggerImpl Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKPlatformLoggerImpl::consoleLoggerImpl
	VoiceSDKConsoleLoggerImpl_tD830A3FDBCDEFAA68417E5F31BFB7B875818F59B* ___consoleLoggerImpl_5;
	// System.Boolean Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKPlatformLoggerImpl::loggedFirstTranscriptionTime
	bool ___loggedFirstTranscriptionTime_6;
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

// Meta.Voice.NLPAudioRequest`4<System.Object,System.Object,System.Object,System.Object>
struct NLPAudioRequest_4_tB6B029BFDAEFFA17E2FA29CA64C51F87D70DE9CA  : public TranscriptionRequest_4_t83C1BC70A4F9F446C0915970241859EDE6013F0A
{
	// System.Boolean Meta.Voice.NLPAudioRequest`4::_isFinalized
	bool ____isFinalized_7;
};

// Meta.Voice.NLPAudioRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct NLPAudioRequest_4_tB9AEC6E5E0DE9E86BAEA62F8FF35242BB6640C25  : public TranscriptionRequest_4_tF432B63E335559CC13F9AF9EFAE88109A3CA3963
{
	// System.Boolean Meta.Voice.NLPAudioRequest`4::_isFinalized
	bool ____isFinalized_7;
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// Meta.WitAi.Events.AudioDurationTrackerFinishedEvent
struct AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647  : public UnityEvent_2_t8D8E787461BECB35F2627E8001A36D825CA99A97
{
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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

// Meta.WitAi.TTS.Events.TTSClipErrorEvent
struct TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689  : public UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8
{
};

// Meta.WitAi.TTS.Events.TTSClipEvent
struct TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40  : public UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC
{
};

// Meta.Voice.TranscriptionRequestEvent
struct TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
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

// Meta.WitAi.Events.VoiceServiceRequestEvent
struct VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13  : public UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2
{
};

// Meta.WitAi.Requests.VoiceServiceRequestEvent
struct VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601  : public UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2
{
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

// Meta.WitAi.Events.WitRequestCreatedEvent
struct WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B  : public UnityEvent_1_tD140963BF887A3E18CDB90439A9DD6FE5438B8B8
{
};

// Meta.WitAi.Events.WitRequestOptionsEvent
struct WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B  : public UnityEvent_1_tB2107CA265B68A4E479CAFA0530DAE8251E03F58
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

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog
struct TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 
{
	// System.DateTime Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog::startTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___startTime_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog::annotations
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___annotations_1;
};
// Native definition for P/Invoke marshalling of Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog
struct TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2_marshaled_pinvoke
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___startTime_0;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___annotations_1;
};
// Native definition for COM marshalling of Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog
struct TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2_marshaled_com
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___startTime_0;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___annotations_1;
};

// Meta.Voice.NLPRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>
struct NLPRequestEvents_1_tB0D5CC5BDEF07795A35948076FD4D07D91C20CF2  : public NLPAudioRequestEvents_1_tFAE223D8936F21D14D76AF80744C7BA64656D2F9
{
};

// Meta.Voice.NLPRequest`4<System.Object,System.Object,System.Object,System.Object>
struct NLPRequest_4_t79F59B9AB3FBFADB04B729AEF19245FE89658855  : public NLPAudioRequest_4_tB6B029BFDAEFFA17E2FA29CA64C51F87D70DE9CA
{
	// Meta.Voice.NLPRequestInputType Meta.Voice.NLPRequest`4::<InputType>k__BackingField
	int32_t ___U3CInputTypeU3Ek__BackingField_8;
	// System.Boolean Meta.Voice.NLPRequest`4::_initialized
	bool ____initialized_9;
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

// UnityEngine.Android.PermissionCallbacks
struct PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// System.Action`1<System.String> UnityEngine.Android.PermissionCallbacks::PermissionGranted
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___PermissionGranted_4;
	// System.Action`1<System.String> UnityEngine.Android.PermissionCallbacks::PermissionDenied
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___PermissionDenied_5;
	// System.Action`1<System.String> UnityEngine.Android.PermissionCallbacks::PermissionDeniedAndDontAskAgain
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___PermissionDeniedAndDontAskAgain_6;
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

// Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding
struct VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// Meta.WitAi.IVoiceService Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::_voiceService
	RuntimeObject* ____voiceService_4;
	// Oculus.Voice.Bindings.Android.IVCBindingEvents Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::_bindingEvents
	RuntimeObject* ____bindingEvents_5;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`1<System.Text.StringBuilder>
struct Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6  : public MulticastDelegate_t
{
};

// System.Action`1<Meta.WitAi.TTS.TTSService>
struct Action_1_t57277DB1A2C96FE1786EC8F434F38C04936E8D55  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<Meta.WitAi.TTS.Data.TTSClipData>
struct UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<Meta.WitAi.Json.WitResponseNode>
struct UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<System.Int64,System.Double>
struct UnityAction_2_tD1BCB3DC65C3130393D8FC4FE131FDFBBBE54CE4  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<System.String,System.String>
struct UnityAction_2_t0DBAE2B43FD6E30FC19DDEB9BE926A3402202A83  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>
struct UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
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

// Oculus.Voice.Bindings.Android.VoiceSDKImplRequest
struct VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75  : public VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536
{
	// Oculus.Voice.Bindings.Android.VoiceSDKBinding Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::<Service>k__BackingField
	VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* ___U3CServiceU3Ek__BackingField_10;
	// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::<Immediately>k__BackingField
	bool ___U3CImmediatelyU3Ek__BackingField_11;
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

// Meta.WitAi.Data.AudioBuffer
struct AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Meta.WitAi.Data.AudioBuffer::alwaysRecording
	bool ___alwaysRecording_5;
	// Meta.WitAi.Data.AudioBufferConfiguration Meta.WitAi.Data.AudioBuffer::audioBufferConfiguration
	AudioBufferConfiguration_tB38ABF06828B3927593D6E28F41EC838EFE9B8B3* ___audioBufferConfiguration_6;
	// Meta.WitAi.Events.AudioBufferEvents Meta.WitAi.Data.AudioBuffer::events
	AudioBufferEvents_t464B32397852A58D1333411135D8AB9CF2F6C233* ___events_7;
	// Meta.WitAi.Interfaces.IAudioInputSource Meta.WitAi.Data.AudioBuffer::_micInput
	RuntimeObject* ____micInput_8;
	// Meta.WitAi.Data.RingBuffer`1<System.Byte> Meta.WitAi.Data.AudioBuffer::_micDataBuffer
	RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276* ____micDataBuffer_9;
	// System.Byte[] Meta.WitAi.Data.AudioBuffer::_byteDataBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteDataBuffer_10;
	// System.Collections.Generic.HashSet`1<UnityEngine.Component> Meta.WitAi.Data.AudioBuffer::_waitingRecorders
	HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* ____waitingRecorders_11;
	// System.Collections.Generic.HashSet`1<UnityEngine.Component> Meta.WitAi.Data.AudioBuffer::_activeRecorders
	HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* ____activeRecorders_12;
};

struct AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_StaticFields
{
	// Meta.WitAi.Data.AudioBuffer Meta.WitAi.Data.AudioBuffer::_instance
	AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* ____instance_4;
};

// Oculus.Voice.ObjectVoiceExperience
struct ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.Events.VoiceEvents Oculus.Voice.ObjectVoiceExperience::_voiceEvents
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* ____voiceEvents_4;
	// Oculus.Voice.AppVoiceExperience Oculus.Voice.ObjectVoiceExperience::_voice
	AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* ____voice_5;
	// Meta.WitAi.Requests.VoiceServiceRequest Oculus.Voice.ObjectVoiceExperience::_activation
	VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ____activation_6;
	// Meta.WitAi.Requests.VoiceServiceRequestEvents Oculus.Voice.ObjectVoiceExperience::_events
	VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ____events_7;
};

// Meta.WitAi.TTS.TTSService
struct TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.Voice.Audio.IAudioSystem Meta.WitAi.TTS.TTSService::_audioSystem
	RuntimeObject* ____audioSystem_5;
	// Meta.WitAi.TTS.Events.TTSServiceEvents Meta.WitAi.TTS.TTSService::_events
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* ____events_8;
	// System.Boolean Meta.WitAi.TTS.TTSService::_delegates
	bool ____delegates_9;
	// System.Security.Cryptography.SHA256 Meta.WitAi.TTS.TTSService::CLIP_HASH
	SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* ___CLIP_HASH_11;
};

struct TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_StaticFields
{
	// Meta.WitAi.TTS.TTSService Meta.WitAi.TTS.TTSService::_instance
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* ____instance_4;
	// System.Action`1<Meta.WitAi.TTS.TTSService> Meta.WitAi.TTS.TTSService::OnServiceStart
	Action_1_t57277DB1A2C96FE1786EC8F434F38C04936E8D55* ___OnServiceStart_6;
	// System.Action`1<Meta.WitAi.TTS.TTSService> Meta.WitAi.TTS.TTSService::OnServiceDestroy
	Action_1_t57277DB1A2C96FE1786EC8F434F38C04936E8D55* ___OnServiceDestroy_7;
};

// Oculus.Voice.Logging.TTSServiceLogging
struct TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Voice.Logging.TTSServiceLogging::EnableConsoleLogging
	bool ___EnableConsoleLogging_4;
	// Meta.WitAi.TTS.TTSService Oculus.Voice.Logging.TTSServiceLogging::<Service>k__BackingField
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* ___U3CServiceU3Ek__BackingField_5;
	// Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger Oculus.Voice.Logging.TTSServiceLogging::_voiceSDKLoggerImpl
	RuntimeObject* ____voiceSDKLoggerImpl_6;
	// System.Collections.Generic.Dictionary`2<System.String,Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog> Oculus.Voice.Logging.TTSServiceLogging::_requests
	Dictionary_2_t4C79FFD3DA8950C7EDEA3B63EBC17CDF35765011* ____requests_7;
};

struct TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7_StaticFields
{
	// System.Boolean Oculus.Voice.Logging.TTSServiceLogging::_initialized
	bool ____initialized_15;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.VoiceSDK.UX.VoiceActivationButton
struct VoiceActivationButton_t5517345FB7D1A22B85C94B073ACDCCEB345F031A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button Oculus.VoiceSDK.UX.VoiceActivationButton::_button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____button_4;
	// UnityEngine.UI.Text Oculus.VoiceSDK.UX.VoiceActivationButton::_buttonLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____buttonLabel_5;
	// Meta.WitAi.VoiceService Oculus.VoiceSDK.UX.VoiceActivationButton::_voiceService
	VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* ____voiceService_6;
	// System.String Oculus.VoiceSDK.UX.VoiceActivationButton::_activateText
	String_t* ____activateText_7;
	// System.Boolean Oculus.VoiceSDK.UX.VoiceActivationButton::_activateImmediately
	bool ____activateImmediately_8;
	// System.String Oculus.VoiceSDK.UX.VoiceActivationButton::_deactivateText
	String_t* ____deactivateText_9;
	// System.Boolean Oculus.VoiceSDK.UX.VoiceActivationButton::_deactivateAndAbort
	bool ____deactivateAndAbort_10;
	// Meta.WitAi.Requests.VoiceServiceRequest Oculus.VoiceSDK.UX.VoiceActivationButton::_request
	VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ____request_11;
	// System.Boolean Oculus.VoiceSDK.UX.VoiceActivationButton::_isActive
	bool ____isActive_12;
};

// Meta.WitAi.VoiceService
struct VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.VoiceService::_witConfiguration
	WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ____witConfiguration_4;
	// Meta.Conduit.IParameterProvider Meta.WitAi.VoiceService::_conduitParameterProvider
	RuntimeObject* ____conduitParameterProvider_5;
	// Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::events
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* ___events_6;
	// Meta.WitAi.Events.TelemetryEvents Meta.WitAi.VoiceService::telemetryEvents
	TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* ___telemetryEvents_7;
	// Meta.Conduit.IConduitDispatcher Meta.WitAi.VoiceService::<ConduitDispatcher>k__BackingField
	RuntimeObject* ___U3CConduitDispatcherU3Ek__BackingField_8;
	// System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest> Meta.WitAi.VoiceService::<Requests>k__BackingField
	HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* ___U3CRequestsU3Ek__BackingField_9;
};

// Oculus.VoiceSDK.UX.VoiceTranscriptionLabel
struct VoiceTranscriptionLabel_t6D0504E24A4F16DD62EBD1A35A7A9A12FCFB9A55  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Oculus.VoiceSDK.UX.VoiceTranscriptionLabel::_label
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____label_4;
	// Meta.WitAi.VoiceService[] Oculus.VoiceSDK.UX.VoiceTranscriptionLabel::_voiceServices
	VoiceServiceU5BU5D_t0F6EBA47148CDC25807C5CD4DFC314DCA07F7484* ____voiceServices_5;
	// UnityEngine.Color Oculus.VoiceSDK.UX.VoiceTranscriptionLabel::_transcriptionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____transcriptionColor_6;
	// UnityEngine.Color Oculus.VoiceSDK.UX.VoiceTranscriptionLabel::_promptColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____promptColor_7;
	// System.String Oculus.VoiceSDK.UX.VoiceTranscriptionLabel::_promptDefault
	String_t* ____promptDefault_8;
	// System.String Oculus.VoiceSDK.UX.VoiceTranscriptionLabel::_promptListening
	String_t* ____promptListening_9;
	// UnityEngine.Color Oculus.VoiceSDK.UX.VoiceTranscriptionLabel::_errorColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____errorColor_10;
};

// Oculus.Voice.AppVoiceExperience
struct AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF  : public VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E
{
	// Meta.WitAi.Configuration.WitRuntimeConfiguration Oculus.Voice.AppVoiceExperience::witRuntimeConfiguration
	WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* ___witRuntimeConfiguration_10;
	// System.Boolean Oculus.Voice.AppVoiceExperience::usePlatformServices
	bool ___usePlatformServices_11;
	// System.Boolean Oculus.Voice.AppVoiceExperience::enableConsoleLogging
	bool ___enableConsoleLogging_12;
	// Oculus.Voice.Interfaces.IPlatformVoiceService Oculus.Voice.AppVoiceExperience::platformService
	RuntimeObject* ___platformService_13;
	// Meta.WitAi.IVoiceService Oculus.Voice.AppVoiceExperience::voiceServiceImpl
	RuntimeObject* ___voiceServiceImpl_14;
	// Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger Oculus.Voice.AppVoiceExperience::voiceSDKLoggerImpl
	RuntimeObject* ___voiceSDKLoggerImpl_15;
	// System.Action Oculus.Voice.AppVoiceExperience::OnInitialized
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnInitialized_16;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// Meta.WitAi.Wit
struct Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81  : public VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E
{
	// Meta.WitAi.Configuration.WitRuntimeConfiguration Meta.WitAi.Wit::witRuntimeConfiguration
	WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* ___witRuntimeConfiguration_10;
	// Meta.WitAi.WitService Meta.WitAi.Wit::witService
	WitService_t56C5E2169F4FFED7AA01BC97F7834E24AE60C5DB* ___witService_11;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Meta.WitAi.VoiceService[]
struct VoiceServiceU5BU5D_t0F6EBA47148CDC25807C5CD4DFC314DCA07F7484  : public RuntimeArray
{
	ALIGN_FIELD (8) VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* m_Items[1];

	inline VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
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


// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// TUnityEvent Meta.Voice.VoiceRequestEvents`1<System.Object>::get_OnInit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequestEvents_1_get_OnInit_mD16A4E0CDE110585286DEE879DAF664B951AD181_gshared_inline (VoiceRequestEvents_1_t95DA2E7D5D393B0FC5B3C7D3D276186681278DD7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// TUnityEvent Meta.Voice.VoiceRequestEvents`1<System.Object>::get_OnComplete()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequestEvents_1_get_OnComplete_mE8880E39823C62FB3B515437C888D993F6812496_gshared_inline (VoiceRequestEvents_1_t95DA2E7D5D393B0FC5B3C7D3D276186681278DD7* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m13361A4FDB34792A370647BE3DCFDF2AE9043F43_gshared (UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_AddListener_mDFE9269B80D7B70296A328376452DFA83905E153_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::RemoveListener(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_RemoveListener_m9C8E93B029B8AEF7A7BAD316FCE909A0E8053930_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C* ___call0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyCollection_get_Count_mB870EAF2A8DC8A4EE35A3C2D14DE5EFBB5BE5EDD_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::CopyTo(TKey[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection_CopyTo_mDC23F0CB0A5EC478C97C22F1FD23809F1FF19F1F_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<System.Int64,System.Double>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m9AD9A204D382DF5271F61E2DC5B481C2725EFB28_gshared (UnityAction_2_tD1BCB3DC65C3130393D8FC4FE131FDFBBBE54CE4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Int64,System.Double>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_AddListener_m762AA5B1470E71CD800C81D865CA790FB8390D83_gshared (UnityEvent_2_t8D8E787461BECB35F2627E8001A36D825CA99A97* __this, UnityAction_2_tD1BCB3DC65C3130393D8FC4FE131FDFBBBE54CE4* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Int64,System.Double>::RemoveListener(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_RemoveListener_m14CBE08174F26830B90291AE2E5126A5CC001F95_gshared (UnityEvent_2_t8D8E787461BECB35F2627E8001A36D825CA99A97* __this, UnityAction_2_tD1BCB3DC65C3130393D8FC4FE131FDFBBBE54CE4* ___call0, const RuntimeMethod* method) ;
// TOptions Meta.Voice.VoiceRequest`4<System.Object,System.Object,System.Object,System.Object>::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequest_4_get_Options_m9E49C7F16D2A38536F351223A546E161B86E6F1A_gshared_inline (VoiceRequest_4_t6799EEA3F92FAD2873D8E4F7650667AA90E2F95B* __this, const RuntimeMethod* method) ;
// Meta.Voice.NLPRequestInputType Meta.Voice.NLPRequest`4<System.Object,System.Object,System.Object,System.Object>::get_InputType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NLPRequest_4_get_InputType_mC9E0344101339A2209EA096521A03EF91B035FA7_gshared_inline (NLPRequest_4_t79F59B9AB3FBFADB04B729AEF19245FE89658855* __this, const RuntimeMethod* method) ;
// Meta.Voice.VoiceRequestState Meta.Voice.VoiceRequest`4<System.Object,System.Object,System.Object,System.Object>::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceRequest_4_get_State_m9C2C1AE81703B1D55383F0845B1CBE4EBFCAF8BF_gshared_inline (VoiceRequest_4_t6799EEA3F92FAD2873D8E4F7650667AA90E2F95B* __this, const RuntimeMethod* method) ;
// TResults Meta.Voice.VoiceRequest`4<System.Object,System.Object,System.Object,System.Object>::get_Results()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequest_4_get_Results_m421B3F006357D4059C51FCAD88D18C39FB74FC3C_gshared_inline (VoiceRequest_4_t6799EEA3F92FAD2873D8E4F7650667AA90E2F95B* __this, const RuntimeMethod* method) ;
// TUnityEvent Meta.Voice.VoiceRequestEvents`1<System.Object>::get_OnCancel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequestEvents_1_get_OnCancel_m92A9B76615DA4A60670A7FEAD8162D0E90009E0E_gshared_inline (VoiceRequestEvents_1_t95DA2E7D5D393B0FC5B3C7D3D276186681278DD7* __this, const RuntimeMethod* method) ;
// TUnityEvent Meta.Voice.VoiceRequestEvents`1<System.Object>::get_OnFailed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequestEvents_1_get_OnFailed_m2568FBA483CE0E294CD637F6E77961AA26304D45_gshared_inline (VoiceRequestEvents_1_t95DA2E7D5D393B0FC5B3C7D3D276186681278DD7* __this, const RuntimeMethod* method) ;
// TUnityEvent Meta.Voice.VoiceRequestEvents`1<System.Object>::get_OnSend()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequestEvents_1_get_OnSend_m40187362FE431DEF3020310731533CA077133813_gshared_inline (VoiceRequestEvents_1_t95DA2E7D5D393B0FC5B3C7D3D276186681278DD7* __this, const RuntimeMethod* method) ;
// TUnityEvent Meta.Voice.VoiceRequestEvents`1<System.Object>::get_OnSuccess()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequestEvents_1_get_OnSuccess_mEE0DC7E6BB4304286D480498ED35552AF529AE1F_gshared_inline (VoiceRequestEvents_1_t95DA2E7D5D393B0FC5B3C7D3D276186681278DD7* __this, const RuntimeMethod* method) ;
// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1<System.Object>::get_OnAudioActivation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TranscriptionRequestEvents_1_get_OnAudioActivation_m93DEC1525A3C1129D12750A9DF9FD6D4AA9A25C9_gshared_inline (TranscriptionRequestEvents_1_tC4E9654F32479322C2B15FB336483473AA337067* __this, const RuntimeMethod* method) ;
// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1<System.Object>::get_OnAudioDeactivation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TranscriptionRequestEvents_1_get_OnAudioDeactivation_m3668B55A958A520333067CA690F21F4257EFD92B_gshared_inline (TranscriptionRequestEvents_1_tC4E9654F32479322C2B15FB336483473AA337067* __this, const RuntimeMethod* method) ;
// Meta.Voice.TranscriptionRequestEvent Meta.Voice.TranscriptionRequestEvents`1<System.Object>::get_OnPartialTranscription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE* TranscriptionRequestEvents_1_get_OnPartialTranscription_mDC0299035D9C0726B927AE02EC97D0A495741ACD_gshared_inline (TranscriptionRequestEvents_1_tC4E9654F32479322C2B15FB336483473AA337067* __this, const RuntimeMethod* method) ;
// Meta.Voice.TranscriptionRequestEvent Meta.Voice.TranscriptionRequestEvents`1<System.Object>::get_OnFullTranscription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE* TranscriptionRequestEvents_1_get_OnFullTranscription_m49066F9C62F1CE73A68706507468E8DFD1FBB4E0_gshared_inline (TranscriptionRequestEvents_1_tC4E9654F32479322C2B15FB336483473AA337067* __this, const RuntimeMethod* method) ;
// TUnityEvent Meta.Voice.VoiceRequestEvents`1<System.Object>::get_OnStateChange()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequestEvents_1_get_OnStateChange_mD81AE20E08B1D5A10EBB4AE8C1648C756BF32272_gshared_inline (VoiceRequestEvents_1_t95DA2E7D5D393B0FC5B3C7D3D276186681278DD7* __this, const RuntimeMethod* method) ;
// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1<System.Object>::get_OnStartListening()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TranscriptionRequestEvents_1_get_OnStartListening_m36C14EAD5CEA72F6BC19E86A2DEFDF769DEC7875_gshared_inline (TranscriptionRequestEvents_1_tC4E9654F32479322C2B15FB336483473AA337067* __this, const RuntimeMethod* method) ;
// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1<System.Object>::get_OnStopListening()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TranscriptionRequestEvents_1_get_OnStopListening_mBD56C7A3CB0DD51DA1DAD76D0E0702184597D76A_gshared_inline (TranscriptionRequestEvents_1_tC4E9654F32479322C2B15FB336483473AA337067* __this, const RuntimeMethod* method) ;
// TUnityEvent Meta.Voice.VoiceRequestEvents`1<System.Object>::get_OnDownloadProgressChange()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequestEvents_1_get_OnDownloadProgressChange_mED95A76837856E7EBCEC1AAE087DB94E13405BE4_gshared_inline (VoiceRequestEvents_1_t95DA2E7D5D393B0FC5B3C7D3D276186681278DD7* __this, const RuntimeMethod* method) ;
// TUnityEvent Meta.Voice.VoiceRequestEvents`1<System.Object>::get_OnUploadProgressChange()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequestEvents_1_get_OnUploadProgressChange_m30D6491FB945605F64FA83B9C3B61E58588FCA6E_gshared_inline (VoiceRequestEvents_1_t95DA2E7D5D393B0FC5B3C7D3D276186681278DD7* __this, const RuntimeMethod* method) ;
// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1<System.Object>::get_OnAudioInputStateChange()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TranscriptionRequestEvents_1_get_OnAudioInputStateChange_m26013C6F2CC275C2889BA929CD0BE9FD36B52EF3_gshared_inline (TranscriptionRequestEvents_1_tC4E9654F32479322C2B15FB336483473AA337067* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m14ECD27B4098A67F54EF100A181B9089B5AB5A84_gshared (Dictionary_2_t33EDB378CB3FAB3AA3D5F9A2BCF280AF33010C00* __this, RuntimeObject* ___key0, TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2DC39DEFD9C61CA5836EE1706976305152E35233_gshared (Dictionary_2_t33EDB378CB3FAB3AA3D5F9A2BCF280AF33010C00* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 Dictionary_2_get_Item_m8C0D78970689B23C18E70C31CFED21C482C11E7E_gshared (Dictionary_2_t33EDB378CB3FAB3AA3D5F9A2BCF280AF33010C00* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m8A8D68B51B99E42563396B21F937D6378AF47489_gshared (Dictionary_2_t33EDB378CB3FAB3AA3D5F9A2BCF280AF33010C00* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBBD7480B7DDEF88C1F847EEEB021541F04ECDECC_gshared (Dictionary_2_t33EDB378CB3FAB3AA3D5F9A2BCF280AF33010C00* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Set<System.Object>(System.String,FieldType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisRuntimeObject_m03148F756DBB615CB512097333F869C88D4D767A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, RuntimeObject* ___val1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Set<System.Single>(System.String,FieldType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, float ___val1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Set<System.Int32>(System.String,FieldType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4BE09BF2FD0695C38B40120A43296C6808B0F31F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, int32_t ___val1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Set<System.Boolean>(System.String,FieldType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1C70D480560CA0D0C171727EB7B1FF4C1F267F15_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, bool ___val1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<System.Object>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAndroidConnectionImpl_1__ctor_m5CFBE8EB62AD96BE0AA2420148E2E1A9E36DFE80_gshared (BaseAndroidConnectionImpl_1_tA4C3B58831127678BDD16C6E068700A8CC5FFF88* __this, String_t* ___className0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<System.Object>::Connect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAndroidConnectionImpl_1_Connect_m067CDFCA738027D352218CBE339841C1F2160217_gshared (BaseAndroidConnectionImpl_1_tA4C3B58831127678BDD16C6E068700A8CC5FFF88* __this, String_t* ___version0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<System.Object>::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAndroidConnectionImpl_1_Disconnect_mB2193E1A3D66A2F285F9DA739210A4A3AAACD61F_gshared (BaseAndroidConnectionImpl_1_tA4C3B58831127678BDD16C6E068700A8CC5FFF88* __this, const RuntimeMethod* method) ;
// System.Void Meta.Voice.NLPRequest`4<System.Object,System.Object,System.Object,System.Object>::Send(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NLPRequest_4_Send_m33C43A34194E8B5677C61E484E9D2B805F6286D3_gshared (NLPRequest_4_t79F59B9AB3FBFADB04B729AEF19245FE89658855* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// TEvents Meta.Voice.VoiceRequest`4<System.Object,System.Object,System.Object,System.Object>::get_Events()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequest_4_get_Events_mA3586B456290E5A77E164E735BF2996EA5AD909C_gshared_inline (VoiceRequest_4_t6799EEA3F92FAD2873D8E4F7650667AA90E2F95B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Int64,System.Double>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_mE12D8B1489A72A3AD9E7E020A64138B0AD806DFB_gshared (UnityEvent_2_t8D8E787461BECB35F2627E8001A36D825CA99A97* __this, int64_t ___arg00, double ___arg11, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Meta.WitAi.VoiceService>()
inline VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDA8F5B3610935B66B1EC441F14D138F7C47411EC (const RuntimeMethod* method)
{
	return ((  VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void Oculus.VoiceSDK.UX.VoiceActivationButton::RefreshActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceActivationButton_RefreshActive_mD690EF7AEB734948CCC75105D69753AA3CDC9725 (VoiceActivationButton_t5517345FB7D1A22B85C94B073ACDCCEB345F031A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void Oculus.VoiceSDK.UX.VoiceActivationButton::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceActivationButton_Activate_m3FA620C1268F5F34C0500B05E9794D582F5ED7AC (VoiceActivationButton_t5517345FB7D1A22B85C94B073ACDCCEB345F031A* __this, const RuntimeMethod* method) ;
// System.Void Oculus.VoiceSDK.UX.VoiceActivationButton::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceActivationButton_Deactivate_m48CB83A52875A76C071B73687A2F0B8E7733C719 (VoiceActivationButton_t5517345FB7D1A22B85C94B073ACDCCEB345F031A* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Requests.VoiceServiceRequestEvents Oculus.VoiceSDK.UX.VoiceActivationButton::GetRequestEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* VoiceActivationButton_GetRequestEvents_m4C550B9F74B1B44A83512764E5DF7BC670FD260F (VoiceActivationButton_t5517345FB7D1A22B85C94B073ACDCCEB345F031A* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.VoiceService::Activate(Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* VoiceService_Activate_m5775703279AA8210115C9ED1431545C1A184A02F (VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* __this, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___requestEvents0, const RuntimeMethod* method) ;
// Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.VoiceService::ActivateImmediately(Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* VoiceService_ActivateImmediately_mC3827967516B7E8311AC491AE121222404911CFB (VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* __this, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___requestEvents0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Requests.VoiceServiceRequestEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceServiceRequestEvents__ctor_mC421AD9C8287440D1C67B9D33B14E25C8AA9DBD8 (VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* __this, const RuntimeMethod* method) ;
// TUnityEvent Meta.Voice.VoiceRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>::get_OnInit()
inline VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* VoiceRequestEvents_1_get_OnInit_m02F0C353A1306EBC0F79EB6C6F1990CBE892D1B7_inline (VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981* __this, const RuntimeMethod* method)
{
	return ((  VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* (*) (VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981*, const RuntimeMethod*))VoiceRequestEvents_1_get_OnInit_mD16A4E0CDE110585286DEE879DAF664B951AD181_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Events.UnityAction`1<Meta.WitAi.Requests.VoiceServiceRequest>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82 (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A (UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2* __this, UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2*, UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// TUnityEvent Meta.Voice.VoiceRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>::get_OnComplete()
inline VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* VoiceRequestEvents_1_get_OnComplete_mCF88D3B32BB971E0CDD460436A604C337B58ABA9_inline (VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981* __this, const RuntimeMethod* method)
{
	return ((  VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* (*) (VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981*, const RuntimeMethod*))VoiceRequestEvents_1_get_OnComplete_mE8880E39823C62FB3B515437C888D993F6812496_gshared_inline)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<Meta.WitAi.VoiceService>()
inline VoiceServiceU5BU5D_t0F6EBA47148CDC25807C5CD4DFC314DCA07F7484* Object_FindObjectsOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDCA64A62C0DE0D098A97F8FDFDA230DAEA167555 (const RuntimeMethod* method)
{
	return ((  VoiceServiceU5BU5D_t0F6EBA47148CDC25807C5CD4DFC314DCA07F7484* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnStartListening()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnStartListening_m1AE66AF56C8A79496E386C26CCB815E99EBB4DA7_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::get_OnPartialTranscription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* SpeechEvents_get_OnPartialTranscription_m0BA26BCC13243D100712E20D4A6AE8DD56C64B18_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
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
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::get_OnFullTranscription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* SpeechEvents_get_OnFullTranscription_m72C7935CDD9EBD2FCAC9C0ECADC2830417512065_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Events.WitErrorEvent Meta.WitAi.Events.SpeechEvents::get_OnError()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* SpeechEvents_get_OnError_mCB052EBA347C9125964E56DD0BD6CC0264796421_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m1C937A45A2857F3199CB7182AD45A0D2AEA0A2BF (UnityAction_2_t0DBAE2B43FD6E30FC19DDEB9BE926A3402202A83* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t0DBAE2B43FD6E30FC19DDEB9BE926A3402202A83*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m13361A4FDB34792A370647BE3DCFDF2AE9043F43_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.String,System.String>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
inline void UnityEvent_2_AddListener_m1F3FE6BD9D4A9C57206FB67E9CE9C277BF3557DE (UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50* __this, UnityAction_2_t0DBAE2B43FD6E30FC19DDEB9BE926A3402202A83* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50*, UnityAction_2_t0DBAE2B43FD6E30FC19DDEB9BE926A3402202A83*, const RuntimeMethod*))UnityEvent_2_AddListener_mDFE9269B80D7B70296A328376452DFA83905E153_gshared)(__this, ___call0, method);
}
// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.SpeechEvents::get_OnComplete()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* SpeechEvents_get_OnComplete_m9FD0FF1FDEA3E57022FA443D9D27A91108EC4BB9_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.String,System.String>::RemoveListener(UnityEngine.Events.UnityAction`2<T0,T1>)
inline void UnityEvent_2_RemoveListener_mF064823D14A8A7CC3CE23E401348A847A18FF7CF (UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50* __this, UnityAction_2_t0DBAE2B43FD6E30FC19DDEB9BE926A3402202A83* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50*, UnityAction_2_t0DBAE2B43FD6E30FC19DDEB9BE926A3402202A83*, const RuntimeMethod*))UnityEvent_2_RemoveListener_m9C8E93B029B8AEF7A7BAD316FCE909A0E8053930_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D (UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2* __this, UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2*, UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void Oculus.VoiceSDK.UX.VoiceTranscriptionLabel::SetText(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceTranscriptionLabel_SetText_m44235CFE6B7893E111983DE93E446135A120A216 (VoiceTranscriptionLabel_t6D0504E24A4F16DD62EBD1A35A7A9A12FCFB9A55* __this, String_t* ___newText0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___newColor1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B (String_t* ___permission0, const RuntimeMethod* method) ;
// System.Void Oculus.VoiceSDK.Utilities.MicPermissionsManager/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m1326932DB311B56DAEAB612D325C4541F42A0C3C (U3CU3Ec__DisplayClass1_0_t4983429A5DFBA983A90A930D2B711DC21F0928EC* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.VoiceSDK.Utilities.MicPermissionsManager::HasMicPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MicPermissionsManager_HasMicPermission_m87B33F0E6CFB654B2DF0044F2541297F9454A17D (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void UnityEngine.Android.PermissionCallbacks::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionCallbacks__ctor_m91B14BBBC8913C131E400BA0D13576822AAE7A75 (PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Android.PermissionCallbacks::add_PermissionGranted(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionCallbacks_add_PermissionGranted_m74335D4200D9B1A7C80AB9C133F95C61FCDCDF89 (PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String,UnityEngine.Android.PermissionCallbacks)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_m7B8E817C03FDB5C99F22002C7181F27BF031F117 (String_t* ___permission0, PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F* ___callbacks1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::get_Keys()
inline KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68 (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* (*) (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::get_Count()
inline int32_t KeyCollection_get_Count_m4091EB97339FC86B2770A513C1BB6EEBB9E8FAFD (KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A*, const RuntimeMethod*))KeyCollection_get_Count_mB870EAF2A8DC8A4EE35A3C2D14DE5EFBB5BE5EDD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::CopyTo(TKey[],System.Int32)
inline void KeyCollection_CopyTo_m2DEA1FFA96F37A6F52C3D47D69E60F1B1C7E8B50 (KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, int32_t, const RuntimeMethod*))KeyCollection_CopyTo_mDC23F0CB0A5EC478C97C22F1FD23809F1FF19F1F_gshared)(__this, ___array0, ___index1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::.ctor()
inline void Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4 (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8 (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* __this, String_t* ___key0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*, String_t*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.String Oculus.Voice.VoiceSDKConstants::get_SdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VoiceSDKConstants_get_SdkVersion_mF133D85DC043FBC29879693987576EA9D6371F28 (const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.VoiceService::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceService_get_Active_mD6E97667C28BEB1912993FF96DC0F21801648AA9 (VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.VoiceService::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceService_get_IsRequestActive_mE92593B428C6B1F08856E512D54ACA8181809E0E (VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Voice.AppVoiceExperience::get_HasPlatformIntegrations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_HasPlatformIntegrations_mC13C22A105847FA22FD88995434D40766EB16CC2 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.AppVoiceExperience::InitVoiceSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_InitVoiceSDK_m32D292065C10F12806D615E70A52C3DE51A623B5 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.VoiceService::CanSend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceService_CanSend_m00454E63A849F02C6499AEB930A24A3FFAAD3C38 (VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.VoiceService::CanActivateAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceService_CanActivateAudio_m408AADD41524AB159447D58C57AB99ABBDFFE7D0 (VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Data.AudioBuffer Meta.WitAi.Data.AudioBuffer::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* AudioBuffer_get_Instance_m4814D13CF2DDD846128EB95989EB2C764FFF48C1 (const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.Data.AudioBuffer::get_IsInputAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioBuffer_get_IsInputAvailable_mBA7ADDFFF4DB7E3F22F174203829BC5A2674370D (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, const RuntimeMethod* method) ;
// System.String Oculus.Voice.AppVoiceExperience::get_PACKAGE_VERSION()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppVoiceExperience_get_PACKAGE_VERSION_m0EF7F1AE8B1BBBF16C840F9DD21EB24BBF4E3059 (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.VLog::E(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1 (RuntimeObject* ___log0, const RuntimeMethod* method) ;
// System.Boolean Oculus.Voice.AppVoiceExperience::get_UsePlatformIntegrations()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_UsePlatformIntegrations_mC70DA709801F2D03B7CE13BC18546D37AFB79050_inline (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKPlatformLoggerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKPlatformLoggerImpl__ctor_mB98388D0B9F59FF41DA4D886AF2BE550F914E2DF (VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::.ctor(Meta.WitAi.IVoiceService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl__ctor_mD8291C1EFF4C31FB498CF4322A2AFE3F6FB854BF (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, RuntimeObject* ___baseVoiceService0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Meta.WitAi.Configuration.WitRuntimeConfiguration Oculus.Voice.AppVoiceExperience::get_RuntimeConfiguration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* AppVoiceExperience_get_RuntimeConfiguration_mD24F0877CFC8E672244CFF3BD79930F04401A704_inline (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::SetRuntimeConfiguration(Meta.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_SetRuntimeConfiguration_mC6E588389CBBAE86514843C164EE79FA972A6945 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* ___configuration0, const RuntimeMethod* method) ;
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_PlatformSupportsWit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKImpl_get_PlatformSupportsWit_m372E01C4FEBDC063566D099A673EAFC2702A197E (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Wit::set_RuntimeConfiguration(Meta.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Wit_set_RuntimeConfiguration_m187D7E162FC1D1EC0C02D33202EE2B5FD2E8C8DB_inline (Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81* __this, WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.AppVoiceExperience::RevertToWitUnity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_RevertToWitUnity_m346BC3947D7A11513EFB5124475AABAD5346D7C5 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) ;
// System.String Meta.WitAi.Data.Configuration.WitConfiguration::GetLoggerAppId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitConfiguration_GetLoggerAppId_m320C33D2DC3EF5956C053F588C67CF7154F04728 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Voice.AppVoiceExperience::get_EnableConsoleLogging()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_EnableConsoleLogging_mA4FAB753C46C4F0D7291C255D8F5C4E3152EC151_inline (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Meta.WitAi.Wit>()
inline Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81* Component_GetComponent_TisWit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81_m6AB221606184DEBB0DE27D756243BA92513E5C93 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Meta.WitAi.Wit>()
inline Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81* GameObject_AddComponent_TisWit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81_m161213BAE1F339C97C4E3AEBD106B6A14F7850C8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.VoiceService::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceService_OnEnable_m4D54C869C0EE72FA158BFA17973220A4FD69A219 (VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* __this, const RuntimeMethod* method) ;
// System.Void Oculus.VoiceSDK.Utilities.MicPermissionsManager::RequestMicPermission(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicPermissionsManager_RequestMicPermission_m8D289CCF5521DEBB59DD086F1EB76B5BD8F4F430 (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___permissionGrantedCallback0, const RuntimeMethod* method) ;
// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.SpeechEvents::get_OnRequestInitialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* SpeechEvents_get_OnRequestInitialized_mDF97BA996E91AC80EDEFA571B39D2ECD09C97A09_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Events.WitResponseEvent Meta.WitAi.Events.SpeechEvents::get_OnResponse()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* SpeechEvents_get_OnResponse_m35A479475B9CCCE66CDA4028A0A6AE6343E50400_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Meta.WitAi.Json.WitResponseNode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m8B1FC56332BDF48F305E5F292D2F751AAC2A90EE (UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m03EDE8CB25D09EA569869E869DC2554E4D9E2F55 (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D* __this, UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D*, UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnMinimumWakeThresholdHit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnMinimumWakeThresholdHit_m1C3C6112F4B81CA7AB4092C679CB1F0A0897AF41_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnStoppedListening()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnStoppedListening_mB59F3490B5F895B311DA82A0288DC2AEACF87586_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnMicDataSent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnMicDataSent_mAA598367D126F79A9BC611B95D6779CAD18C6874_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.SpeechEvents::get_OnSend()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* SpeechEvents_get_OnSend_m848D965F028D864B6175BA77425848BA86153A13_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnStoppedListeningDueToTimeout()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnStoppedListeningDueToTimeout_m09ED39D18AEAD2C383D62452353161EF4400DF70_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnStoppedListeningDueToInactivity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnStoppedListeningDueToInactivity_mDB9EB1C53F62E85CE682C58725EFE2ED98FCED59_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnStoppedListeningDueToDeactivation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnStoppedListeningDueToDeactivation_mBEF3FA3D000697DED97B1738FED177B46F7E5629_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<System.Int64,System.Double>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m9AD9A204D382DF5271F61E2DC5B481C2725EFB28 (UnityAction_2_tD1BCB3DC65C3130393D8FC4FE131FDFBBBE54CE4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_tD1BCB3DC65C3130393D8FC4FE131FDFBBBE54CE4*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m9AD9A204D382DF5271F61E2DC5B481C2725EFB28_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.Int64,System.Double>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
inline void UnityEvent_2_AddListener_m762AA5B1470E71CD800C81D865CA790FB8390D83 (UnityEvent_2_t8D8E787461BECB35F2627E8001A36D825CA99A97* __this, UnityAction_2_tD1BCB3DC65C3130393D8FC4FE131FDFBBBE54CE4* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t8D8E787461BECB35F2627E8001A36D825CA99A97*, UnityAction_2_tD1BCB3DC65C3130393D8FC4FE131FDFBBBE54CE4*, const RuntimeMethod*))UnityEvent_2_AddListener_m762AA5B1470E71CD800C81D865CA790FB8390D83_gshared)(__this, ___call0, method);
}
// System.Void Meta.WitAi.VoiceService::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceService_OnDisable_m0C7EC495F5FCF1272C0FDCBB48DDCFF0C48FCE0E (VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m84C07A346FB285EE2C1488B1F0D69BC6557E8D54 (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D* __this, UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D*, UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.Int64,System.Double>::RemoveListener(UnityEngine.Events.UnityAction`2<T0,T1>)
inline void UnityEvent_2_RemoveListener_m14CBE08174F26830B90291AE2E5126A5CC001F95 (UnityEvent_2_t8D8E787461BECB35F2627E8001A36D825CA99A97* __this, UnityAction_2_tD1BCB3DC65C3130393D8FC4FE131FDFBBBE54CE4* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t8D8E787461BECB35F2627E8001A36D825CA99A97*, UnityAction_2_tD1BCB3DC65C3130393D8FC4FE131FDFBBBE54CE4*, const RuntimeMethod*))UnityEvent_2_RemoveListener_m14CBE08174F26830B90291AE2E5126A5CC001F95_gshared)(__this, ___call0, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Voice.AppVoiceExperience::get_Initialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_Initialized_m97ED7179C4F41C4595B0047A0EC983B5EC186DFA (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) ;
// TOptions Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::get_Options()
inline WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_inline (VoiceRequest_4_t635CDB7E63C5322E9D11D83B63A401260F8BAA8C* __this, const RuntimeMethod* method)
{
	return ((  WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* (*) (VoiceRequest_4_t635CDB7E63C5322E9D11D83B63A401260F8BAA8C*, const RuntimeMethod*))VoiceRequest_4_get_Options_m9E49C7F16D2A38536F351223A546E161B86E6F1A_gshared_inline)(__this, method);
}
// System.String Meta.WitAi.Requests.VoiceServiceRequestOptions::get_RequestId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VoiceServiceRequestOptions_get_RequestId_mC465590B47E4B5F542BD3E9BED1074D032C1446F_inline (VoiceServiceRequestOptions_tBB80C39F5D734638F03442F09F4F106BD5F20EE4* __this, const RuntimeMethod* method) ;
// Meta.Voice.NLPRequestInputType Meta.Voice.NLPRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::get_InputType()
inline int32_t NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_inline (NLPRequest_4_t7177BC2349443FF686C2D98FDB887CA5744C4323* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NLPRequest_4_t7177BC2349443FF686C2D98FDB887CA5744C4323*, const RuntimeMethod*))NLPRequest_4_get_InputType_mC9E0344101339A2209EA096521A03EF91B035FA7_gshared_inline)(__this, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.Json.WitResponseNode::op_Inequality(Meta.WitAi.Json.WitResponseNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseNode_op_Inequality_mB890519AF1C832EC1EEB1644A5B0E1D0F4C324F9 (WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357 (double* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// Meta.Voice.VoiceRequestState Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::get_State()
inline int32_t VoiceRequest_4_get_State_mD1BF2E4830CA915E79E008BB91B6F53BDFA4748D_inline (VoiceRequest_4_t635CDB7E63C5322E9D11D83B63A401260F8BAA8C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (VoiceRequest_4_t635CDB7E63C5322E9D11D83B63A401260F8BAA8C*, const RuntimeMethod*))VoiceRequest_4_get_State_m9C2C1AE81703B1D55383F0845B1CBE4EBFCAF8BF_gshared_inline)(__this, method);
}
// TResults Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::get_Results()
inline VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_inline (VoiceRequest_4_t635CDB7E63C5322E9D11D83B63A401260F8BAA8C* __this, const RuntimeMethod* method)
{
	return ((  VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* (*) (VoiceRequest_4_t635CDB7E63C5322E9D11D83B63A401260F8BAA8C*, const RuntimeMethod*))VoiceRequest_4_get_Results_m421B3F006357D4059C51FCAD88D18C39FB74FC3C_gshared_inline)(__this, method);
}
// System.String Meta.WitAi.Requests.VoiceServiceRequestResults::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VoiceServiceRequestResults_get_Message_mB5D3F7451AC4CE7DA64F7CAD1C9E8A856B7E2188_inline (VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Requests.VoiceServiceRequestResults::get_ResponseData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* VoiceServiceRequestResults_get_ResponseData_m799C34130B5FB50CA3C0EC9B0D437997AFA483A7_inline (VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.VLog::D(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37 (RuntimeObject* ___log0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.VoiceService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceService__ctor_m0F341EBA993A0F5807334FB75B05C05944E73CAE (VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Oculus.Voice.AppVoiceExperience>()
inline AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* Object_FindObjectOfType_TisAppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF_m8397FDEAFB49032F5E84ED9937CA30800385502C (const RuntimeMethod* method)
{
	return ((  AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// TUnityEvent Meta.Voice.VoiceRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>::get_OnCancel()
inline VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* VoiceRequestEvents_1_get_OnCancel_m93EF162482A866C17FEA71230F2A67314F27CA79_inline (VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981* __this, const RuntimeMethod* method)
{
	return ((  VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* (*) (VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981*, const RuntimeMethod*))VoiceRequestEvents_1_get_OnCancel_m92A9B76615DA4A60670A7FEAD8162D0E90009E0E_gshared_inline)(__this, method);
}
// TUnityEvent Meta.Voice.VoiceRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>::get_OnFailed()
inline VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* VoiceRequestEvents_1_get_OnFailed_mD9FA83DC2035E8D5C5EA84AF7E7EAC9F2D7AE4C2_inline (VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981* __this, const RuntimeMethod* method)
{
	return ((  VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* (*) (VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981*, const RuntimeMethod*))VoiceRequestEvents_1_get_OnFailed_m2568FBA483CE0E294CD637F6E77961AA26304D45_gshared_inline)(__this, method);
}
// TUnityEvent Meta.Voice.VoiceRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>::get_OnSend()
inline VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* VoiceRequestEvents_1_get_OnSend_m6436A95B91606C3B15CB57C5E3591E0230A29CBD_inline (VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981* __this, const RuntimeMethod* method)
{
	return ((  VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* (*) (VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981*, const RuntimeMethod*))VoiceRequestEvents_1_get_OnSend_m40187362FE431DEF3020310731533CA077133813_gshared_inline)(__this, method);
}
// TUnityEvent Meta.Voice.VoiceRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>::get_OnSuccess()
inline VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* VoiceRequestEvents_1_get_OnSuccess_mFE8C133667AE3019A85E73A5117971DA76BD35FF_inline (VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981* __this, const RuntimeMethod* method)
{
	return ((  VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* (*) (VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981*, const RuntimeMethod*))VoiceRequestEvents_1_get_OnSuccess_mEE0DC7E6BB4304286D480498ED35552AF529AE1F_gshared_inline)(__this, method);
}
// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>::get_OnAudioActivation()
inline VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* TranscriptionRequestEvents_1_get_OnAudioActivation_m813715AE17139B19DED8A67BD243BCAD21852545_inline (TranscriptionRequestEvents_1_t9C76CCA9D6509EEDB9B9FED9016A35DBE9D3E585* __this, const RuntimeMethod* method)
{
	return ((  VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* (*) (TranscriptionRequestEvents_1_t9C76CCA9D6509EEDB9B9FED9016A35DBE9D3E585*, const RuntimeMethod*))TranscriptionRequestEvents_1_get_OnAudioActivation_m93DEC1525A3C1129D12750A9DF9FD6D4AA9A25C9_gshared_inline)(__this, method);
}
// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>::get_OnAudioDeactivation()
inline VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* TranscriptionRequestEvents_1_get_OnAudioDeactivation_m2A0E42CD4A4BE3A28DF8C2DA5EBC6E1A75AC1541_inline (TranscriptionRequestEvents_1_t9C76CCA9D6509EEDB9B9FED9016A35DBE9D3E585* __this, const RuntimeMethod* method)
{
	return ((  VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* (*) (TranscriptionRequestEvents_1_t9C76CCA9D6509EEDB9B9FED9016A35DBE9D3E585*, const RuntimeMethod*))TranscriptionRequestEvents_1_get_OnAudioDeactivation_m3668B55A958A520333067CA690F21F4257EFD92B_gshared_inline)(__this, method);
}
// Meta.Voice.TranscriptionRequestEvent Meta.Voice.TranscriptionRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>::get_OnPartialTranscription()
inline TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE* TranscriptionRequestEvents_1_get_OnPartialTranscription_mFC81596B72E31A12519D70AC2182360C8DDA69D5_inline (TranscriptionRequestEvents_1_t9C76CCA9D6509EEDB9B9FED9016A35DBE9D3E585* __this, const RuntimeMethod* method)
{
	return ((  TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE* (*) (TranscriptionRequestEvents_1_t9C76CCA9D6509EEDB9B9FED9016A35DBE9D3E585*, const RuntimeMethod*))TranscriptionRequestEvents_1_get_OnPartialTranscription_mDC0299035D9C0726B927AE02EC97D0A495741ACD_gshared_inline)(__this, method);
}
// Meta.Voice.TranscriptionRequestEvent Meta.Voice.TranscriptionRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>::get_OnFullTranscription()
inline TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE* TranscriptionRequestEvents_1_get_OnFullTranscription_m8DCC37FE078DDDE599940178F24793A948734050_inline (TranscriptionRequestEvents_1_t9C76CCA9D6509EEDB9B9FED9016A35DBE9D3E585* __this, const RuntimeMethod* method)
{
	return ((  TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE* (*) (TranscriptionRequestEvents_1_t9C76CCA9D6509EEDB9B9FED9016A35DBE9D3E585*, const RuntimeMethod*))TranscriptionRequestEvents_1_get_OnFullTranscription_m49066F9C62F1CE73A68706507468E8DFD1FBB4E0_gshared_inline)(__this, method);
}
// TUnityEvent Meta.Voice.VoiceRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>::get_OnStateChange()
inline VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* VoiceRequestEvents_1_get_OnStateChange_mD1D19967DB9E5AD4FE0DFEC8A2E0F2298FAC16C2_inline (VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981* __this, const RuntimeMethod* method)
{
	return ((  VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* (*) (VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981*, const RuntimeMethod*))VoiceRequestEvents_1_get_OnStateChange_mD81AE20E08B1D5A10EBB4AE8C1648C756BF32272_gshared_inline)(__this, method);
}
// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>::get_OnStartListening()
inline VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* TranscriptionRequestEvents_1_get_OnStartListening_mD9C59DC7A6C2C2C61AB5A4137E03531704AA5EB6_inline (TranscriptionRequestEvents_1_t9C76CCA9D6509EEDB9B9FED9016A35DBE9D3E585* __this, const RuntimeMethod* method)
{
	return ((  VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* (*) (TranscriptionRequestEvents_1_t9C76CCA9D6509EEDB9B9FED9016A35DBE9D3E585*, const RuntimeMethod*))TranscriptionRequestEvents_1_get_OnStartListening_m36C14EAD5CEA72F6BC19E86A2DEFDF769DEC7875_gshared_inline)(__this, method);
}
// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>::get_OnStopListening()
inline VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* TranscriptionRequestEvents_1_get_OnStopListening_m9AD3AED265F5EBB43BBF3845BE8B8398E31F108B_inline (TranscriptionRequestEvents_1_t9C76CCA9D6509EEDB9B9FED9016A35DBE9D3E585* __this, const RuntimeMethod* method)
{
	return ((  VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* (*) (TranscriptionRequestEvents_1_t9C76CCA9D6509EEDB9B9FED9016A35DBE9D3E585*, const RuntimeMethod*))TranscriptionRequestEvents_1_get_OnStopListening_mBD56C7A3CB0DD51DA1DAD76D0E0702184597D76A_gshared_inline)(__this, method);
}
// TUnityEvent Meta.Voice.VoiceRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>::get_OnDownloadProgressChange()
inline VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* VoiceRequestEvents_1_get_OnDownloadProgressChange_m0752D4341E1C858A84B6A49F92AB49DB51152D49_inline (VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981* __this, const RuntimeMethod* method)
{
	return ((  VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* (*) (VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981*, const RuntimeMethod*))VoiceRequestEvents_1_get_OnDownloadProgressChange_mED95A76837856E7EBCEC1AAE087DB94E13405BE4_gshared_inline)(__this, method);
}
// TUnityEvent Meta.Voice.VoiceRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>::get_OnUploadProgressChange()
inline VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* VoiceRequestEvents_1_get_OnUploadProgressChange_mBC40C133A0BD578D98DE0D5E8B227373C09EE05C_inline (VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981* __this, const RuntimeMethod* method)
{
	return ((  VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* (*) (VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981*, const RuntimeMethod*))VoiceRequestEvents_1_get_OnUploadProgressChange_m30D6491FB945605F64FA83B9C3B61E58588FCA6E_gshared_inline)(__this, method);
}
// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>::get_OnAudioInputStateChange()
inline VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* TranscriptionRequestEvents_1_get_OnAudioInputStateChange_mF5C332349C5A2F5D34FB2A88A1BCEB000E408AF3_inline (TranscriptionRequestEvents_1_t9C76CCA9D6509EEDB9B9FED9016A35DBE9D3E585* __this, const RuntimeMethod* method)
{
	return ((  VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* (*) (TranscriptionRequestEvents_1_t9C76CCA9D6509EEDB9B9FED9016A35DBE9D3E585*, const RuntimeMethod*))TranscriptionRequestEvents_1_get_OnAudioInputStateChange_m26013C6F2CC275C2889BA929CD0BE9FD36B52EF3_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___methodName0, RuntimeObject* ___value1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>::Invoke(T0)
inline void UnityEvent_1_Invoke_m8CED891B50C804B13259BD552FD7621CFF6CF7E5 (UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2*, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::get_OnCanceled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* SpeechEvents_get_OnCanceled_mC99F35015A99C7E082341B8E8DA65FAF1E5B7D6C_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
inline void UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, String_t* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, String_t*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Void Meta.WitAi.Configuration.WitRequestOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitRequestOptions__ctor_mE0690E218F01FC193447FCFACBD3A3BFF60AADCF (WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Events.VoiceEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceEvents__ctor_m08A9CD5D70F02629DAD941C6F045D838E3E7D619 (VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.VoiceSDKConstants::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKConstants_Init_m6ADBE1F6E5E2A03F39AC50BF2E55095F356D82F2 (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Text.StringBuilder>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1540C8C2516AEA9F0AEE87470E2815CA36C560C7 (Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Meta.WitAi.Requests.WitVRequest::add_OnProvideCustomUserAgent(System.Action`1<System.Text.StringBuilder>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitVRequest_add_OnProvideCustomUserAgent_m0ADDFB64122A96484E3714F6C73F60B9E120175F (Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Insert_mEA426100381DD65FB6A891BA28B5F1208BEDDD29 (StringBuilder_t* __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Meta.WitAi.TTS.TTSService>()
inline TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* GameObject_GetComponent_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_m87A41B25D0955A50171FAB790A096BB0B9102DD5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Oculus.Voice.Logging.TTSServiceLogging::set_Service(Meta.WitAi.TTS.TTSService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TTSServiceLogging_set_Service_mE541F5CC89C9F314DE22FA23B1FB58B6FACBAE83_inline (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Logging.TTSServiceLogging::InitLogger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_InitLogger_m69B656F2FAFC204C20B4168657477443489C7613 (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.TTSService Oculus.Voice.Logging.TTSServiceLogging::get_Service()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Meta.WitAi.Interfaces.IWitConfigurationProvider>()
inline RuntimeObject* Component_GetComponent_TisIWitConfigurationProvider_t10F6E96EFD591280386EEE382C0B2E94325333C3_m5E35E768F44DAAA094DC5C1B3C6F30B23A6080DF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// Meta.WitAi.TTS.Events.TTSServiceEvents Meta.WitAi.TTS.TTSService::get_Events()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Meta.WitAi.TTS.Data.TTSClipData>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4 (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.TTS.Data.TTSClipData>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061 (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC* __this, UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC*, UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityAction`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3 (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m13361A4FDB34792A370647BE3DCFDF2AE9043F43_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
inline void UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183 (UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8* __this, UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8*, UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*, const RuntimeMethod*))UnityEvent_2_AddListener_mDFE9269B80D7B70296A328376452DFA83905E153_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.TTS.Data.TTSClipData>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282 (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC* __this, UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC*, UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>::RemoveListener(UnityEngine.Events.UnityAction`2<T0,T1>)
inline void UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C (UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8* __this, UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8*, UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*, const RuntimeMethod*))UnityEvent_2_RemoveListener_m9C8E93B029B8AEF7A7BAD316FCE909A0E8053930_gshared)(__this, ___call0, method);
}
// System.Void Oculus.Voice.Logging.TTSServiceLogging::LogStart(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_LogStart_m81A77CE30006988BAAF6E37F96A75EA3A478CAE0 (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Logging.TTSServiceLogging::LogComplete(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_LogComplete_mDBB8DA4B5B839BD5C58BA45BEB5EBC89BC28E9CF (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, String_t* ___error1, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Logging.TTSServiceLogging::LogTimestamp(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_LogTimestamp_m0CA674CF4E8EDF89EBBCF92428921784DC5AB129 (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, String_t* ___key1, const RuntimeMethod* method) ;
// Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog Oculus.Voice.Logging.TTSServiceLogging::GetRequestData(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 TTSServiceLogging_GetRequestData_mFCE10C18536F7D5AF25C86EE51980EEB2D77CA6D (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Logging.TTSServiceLogging::LogTimestamp(Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_LogTimestamp_m298121CFE42985DBEA970723ACCA552F2DDF64F3 (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 ___requestData0, String_t* ___key1, const RuntimeMethod* method) ;
// Meta.WitAi.Requests.AudioStreamDecodeType Meta.WitAi.Requests.AudioStreamHandler::GetDecodeType(UnityEngine.AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioStreamHandler_GetDecodeType_mBF4EE600D82D113CD600FA77380F913FE78A3D43 (int32_t ___audioType0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Logging.TTSServiceLogging::LogAnnotate(Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_LogAnnotate_mCCEDCC63E21B4A0C5C60563E6FD252A1191AB3F8 (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 ___requestData0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m8A8E8910575F649AA72E01649BACE16F0F362FF4 (bool* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.String Meta.WitAi.TTS.Data.TTSClipData::get_queryRequestId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TTSClipData_get_queryRequestId_m6930268D572D60661944AF7D43A4BA77108882E7_inline (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m5AF46713421C1F94BB11EFFCF0D56D8682E7B06B (Dictionary_2_t4C79FFD3DA8950C7EDEA3B63EBC17CDF35765011* __this, String_t* ___key0, TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4C79FFD3DA8950C7EDEA3B63EBC17CDF35765011*, String_t*, TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2, const RuntimeMethod*))Dictionary_2_set_Item_m14ECD27B4098A67F54EF100A181B9089B5AB5A84_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m38C6401E811ABEFA847926B7653D33164A5DBF2D (Dictionary_2_t4C79FFD3DA8950C7EDEA3B63EBC17CDF35765011* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4C79FFD3DA8950C7EDEA3B63EBC17CDF35765011*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2DC39DEFD9C61CA5836EE1706976305152E35233_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog>::get_Item(TKey)
inline TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 Dictionary_2_get_Item_m96809BA36D32F4A59571E3C7FB63D7614F61C0B2 (Dictionary_2_t4C79FFD3DA8950C7EDEA3B63EBC17CDF35765011* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 (*) (Dictionary_2_t4C79FFD3DA8950C7EDEA3B63EBC17CDF35765011*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m8C0D78970689B23C18E70C31CFED21C482C11E7E_gshared)(__this, ___key0, method);
}
// System.Int64 Oculus.Voice.Core.Utilities.DateTimeUtility::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTimeUtility_get_ElapsedMilliseconds_mFCCD79CB27652B45BB76D679824C381809226602 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Keys()
inline KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::GetEnumerator()
inline Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22 (KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 (*) (KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342*, const RuntimeMethod*))KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867*, const RuntimeMethod*))Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::get_Current()
inline String_t* Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_inline (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867*, const RuntimeMethod*))Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283 (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867*, const RuntimeMethod*))Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog>::Remove(TKey)
inline bool Dictionary_2_Remove_m738809F2B7C254B544E989D865C5E6C02AFB7404 (Dictionary_2_t4C79FFD3DA8950C7EDEA3B63EBC17CDF35765011* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4C79FFD3DA8950C7EDEA3B63EBC17CDF35765011*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m8A8D68B51B99E42563396B21F937D6378AF47489_gshared)(__this, ___key0, method);
}
// System.Void System.Action`1<Meta.WitAi.TTS.TTSService>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mCF49CAA81BB5F8BED6F41C37FAB01DA863C380DA (Action_1_t57277DB1A2C96FE1786EC8F434F38C04936E8D55* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t57277DB1A2C96FE1786EC8F434F38C04936E8D55*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Meta.WitAi.TTS.TTSService::add_OnServiceStart(System.Action`1<Meta.WitAi.TTS.TTSService>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_add_OnServiceStart_m0463D8971A25A6572CB0F669A8BA02DF45D301EB (Action_1_t57277DB1A2C96FE1786EC8F434F38C04936E8D55* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Oculus.Voice.Logging.TTSServiceLogging>()
inline TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* Component_GetComponent_TisTTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7_m71B5CF48056A53AB4BDC0F936A72793532AA72C9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<Oculus.Voice.Logging.TTSServiceLogging>()
inline TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* GameObject_AddComponent_TisTTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7_m4E02C9E1D05C9E2DBBE1477A28F14618682BAEC7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog>::.ctor()
inline void Dictionary_2__ctor_m36954781460815A63FB8A357AD7235F87C00969B (Dictionary_2_t4C79FFD3DA8950C7EDEA3B63EBC17CDF35765011* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4C79FFD3DA8950C7EDEA3B63EBC17CDF35765011*, const RuntimeMethod*))Dictionary_2__ctor_mBBD7480B7DDEF88C1F847EEEB021541F04ECDECC_gshared)(__this, method);
}
// System.Void Oculus.Voice.Core.Bindings.Android.BaseServiceBinding::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseServiceBinding__ctor_m22F1D7EDB34C2C3349D5678957D925793DAB1D20 (BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___sdkInstance0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___methodName0, ___args1, method);
}
// System.String Meta.WitAi.Configuration.WitRequestOptions::ToJsonString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitRequestOptions_ToJsonString_m903548928E6DE6B8A677661C17899BC42E1B0134 (WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding::.ctor(Meta.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKConfigBinding__ctor_m53E48B597E269C75F5C7D2ECC39B54419D1EA544 (VoiceSDKConfigBinding_t63C6CC95097F3A3384FB2132417E196693144DBB* __this, WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* ___config0, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding::ToJavaObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* VoiceSDKConfigBinding_ToJavaObject_m861460742482EB29DF6B5BB913D5C55EFD17A4BA (VoiceSDKConfigBinding_t63C6CC95097F3A3384FB2132417E196693144DBB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String Meta.WitAi.Data.Configuration.WitConfiguration::GetClientAccessToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WitConfiguration_GetClientAccessToken_m619DD2445232CA6A5C168763814741B3C75DCF47_inline (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Set<System.String>(System.String,FieldType)
inline void AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, String_t* ___val1, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, String_t*, const RuntimeMethod*))AndroidJavaObject_Set_TisRuntimeObject_m03148F756DBB615CB512097333F869C88D4D767A_gshared)(__this, ___fieldName0, ___val1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Set<UnityEngine.AndroidJavaObject>(System.String,FieldType)
inline void AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___val1, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, const RuntimeMethod*))AndroidJavaObject_Set_TisRuntimeObject_m03148F756DBB615CB512097333F869C88D4D767A_gshared)(__this, ___fieldName0, ___val1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Set<System.Single>(System.String,FieldType)
inline void AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, float ___val1, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, float, const RuntimeMethod*))AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5_gshared)(__this, ___fieldName0, ___val1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Set<System.Int32>(System.String,FieldType)
inline void AndroidJavaObject_Set_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4BE09BF2FD0695C38B40120A43296C6808B0F31F (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, int32_t ___val1, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, int32_t, const RuntimeMethod*))AndroidJavaObject_Set_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4BE09BF2FD0695C38B40120A43296C6808B0F31F_gshared)(__this, ___fieldName0, ___val1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Set<System.Boolean>(System.String,FieldType)
inline void AndroidJavaObject_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1C70D480560CA0D0C171727EB7B1FF4C1F267F15 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, bool ___val1, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, bool, const RuntimeMethod*))AndroidJavaObject_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1C70D480560CA0D0C171727EB7B1FF4C1F267F15_gshared)(__this, ___fieldName0, ___val1, method);
}
// System.Void System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest>::.ctor()
inline void HashSet_1__ctor_m7599E6C0496CE36BC943F965522F13EEE6303F23 (HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Bindings.Android.VoiceSDKBinding>::.ctor(System.String)
inline void BaseAndroidConnectionImpl_1__ctor_mF468E5CB91C72482F571B497B147F08542E8CC80 (BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF* __this, String_t* ___className0, const RuntimeMethod* method)
{
	((  void (*) (BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*, String_t*, const RuntimeMethod*))BaseAndroidConnectionImpl_1__ctor_m5CFBE8EB62AD96BE0AA2420148E2E1A9E36DFE80_gshared)(__this, ___className0, method);
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_PlatformSupportsWit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_PlatformSupportsWit_m19DB6531CDA2434ADABE06C5310FA94A370C5F18 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_Active_mD3DC2E21C48504508A4BA471D90DF2A72601D172 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_IsRequestActive_mB32B7327F5F82796F4D6358164028E53686903DC (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_MicActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_MicActive_m9489251FE1B2A59DE39FA58F94C95C8628F56219 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::SetRuntimeConfiguration(Meta.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_SetRuntimeConfiguration_mBE9EBF99296D727EB3DDBB03D4AAA31AE5DAE615 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* ___configuration0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Bindings.Android.VoiceSDKBinding>::Connect(System.String)
inline void BaseAndroidConnectionImpl_1_Connect_m98AC713280FE00772A276E37AC3442A77B465CEC (BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF* __this, String_t* ___version0, const RuntimeMethod* method)
{
	((  void (*) (BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*, String_t*, const RuntimeMethod*))BaseAndroidConnectionImpl_1_Connect_m067CDFCA738027D352218CBE339841C1F2160217_gshared)(__this, ___version0, method);
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::.ctor(Meta.WitAi.IVoiceService,Oculus.Voice.Bindings.Android.IVCBindingEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding__ctor_m924FD698201D96E8364328E105232FA2EDD9AF3E (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, RuntimeObject* ___voiceService0, RuntimeObject* ___bindingEvents1, const RuntimeMethod* method) ;
// Meta.WitAi.Events.VoiceEvents Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::get_VoiceEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* VoiceSDKListenerBinding_get_VoiceEvents_mB57DC862894B65506C815C301C5631E195C83847 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::SetListener(Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_SetListener_mECA88A4F2258C2C48FBB5B245222EC4E42A2FBB5 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* ___listener0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Connect_m98EB7BC47E670145423665DB7E2A23BB84BB05AF (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Bindings.Android.VoiceSDKBinding>::Disconnect()
inline void BaseAndroidConnectionImpl_1_Disconnect_mA5F161E6B61246B5919266A3C4A151C31092189D (BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*, const RuntimeMethod*))BaseAndroidConnectionImpl_1_Disconnect_mB2193E1A3D66A2F285F9DA739210A4A3AAACD61F_gshared)(__this, method);
}
// Meta.WitAi.Events.WitRequestOptionsEvent Meta.WitAi.Events.SpeechEvents::get_OnRequestOptionSetup()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* SpeechEvents_get_OnRequestOptionSetup_mDD48B5E524783E2376629F4ABA5985A85C1CC24C_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Configuration.WitRequestOptions>::Invoke(T0)
inline void UnityEvent_1_Invoke_m3B94A53C1F1B0E7C93061F3651DE1E716127DEF0 (UnityEvent_1_tB2107CA265B68A4E479CAFA0530DAE8251E03F58* __this, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB2107CA265B68A4E479CAFA0530DAE8251E03F58*, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// Meta.WitAi.Requests.VoiceServiceRequest Oculus.Voice.Bindings.Android.VoiceSDKImpl::GetRequest(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.Voice.NLPRequestInputType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* VoiceSDKImpl_GetRequest_m67190CD71C0B72E8DDCF935CED2AFB424DB385B0 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___requestOptions0, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___requestEvents1, int32_t ___inputType2, bool ___audioImmediate3, const RuntimeMethod* method) ;
// System.Void Meta.Voice.NLPRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::Send(System.String)
inline void NLPRequest_4_Send_m543F669E5C9AE067D7B57E0C12B0053A418D4872 (NLPRequest_4_t7177BC2349443FF686C2D98FDB887CA5744C4323* __this, String_t* ___text0, const RuntimeMethod* method)
{
	((  void (*) (NLPRequest_4_t7177BC2349443FF686C2D98FDB887CA5744C4323*, String_t*, const RuntimeMethod*))NLPRequest_4_Send_m33C43A34194E8B5677C61E484E9D2B805F6286D3_gshared)(__this, ___text0, method);
}
// System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest> Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_Requests()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* VoiceSDKImpl_get_Requests_m4D22091B386178D74B5C67275BB3CB9CD8C3DAA9_inline (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest>::GetEnumerator()
inline Enumerator_t238229FA78C36CE2AB25DB5A0A3638F0B1E1DBE2 HashSet_1_GetEnumerator_m5CB1CFB26B2AE6689AC3D812FBD04752E0F5E469 (HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t238229FA78C36CE2AB25DB5A0A3638F0B1E1DBE2 (*) (HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Meta.WitAi.Requests.VoiceServiceRequest>::Dispose()
inline void Enumerator_Dispose_m1717C5902C12395F339137E7C859B070DC3E4AC8 (Enumerator_t238229FA78C36CE2AB25DB5A0A3638F0B1E1DBE2* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t238229FA78C36CE2AB25DB5A0A3638F0B1E1DBE2*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<Meta.WitAi.Requests.VoiceServiceRequest>::get_Current()
inline VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* Enumerator_get_Current_mAB1C5F19EA9209F72A2F2543713CEA1A7CCF29EE_inline (Enumerator_t238229FA78C36CE2AB25DB5A0A3638F0B1E1DBE2* __this, const RuntimeMethod* method)
{
	return ((  VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* (*) (Enumerator_t238229FA78C36CE2AB25DB5A0A3638F0B1E1DBE2*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Meta.WitAi.Requests.VoiceServiceRequest>::MoveNext()
inline bool Enumerator_MoveNext_m7726F1B66F3C91BA3CC742401FCBE2D36717D8D0 (Enumerator_t238229FA78C36CE2AB25DB5A0A3638F0B1E1DBE2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t238229FA78C36CE2AB25DB5A0A3638F0B1E1DBE2*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest>::Contains(T)
inline bool HashSet_1_Contains_m16F3F7420AE65B74DBA459919C8EE4CDDD67B377 (HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE*, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::.ctor(Oculus.Voice.Bindings.Android.VoiceSDKBinding,Meta.Voice.NLPRequestInputType,System.Boolean,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest__ctor_m2FD6E677E01ED0BDD25CA84EFDD0C3143C55A33E (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* ___newService0, int32_t ___newInputType1, bool ___newImmediately2, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___newOptions3, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___newEvents4, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest>::Add(T)
inline bool HashSet_1_Add_m3CA5C7394243399E85AD48B66709FF22C685473D (HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE*, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// TEvents Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::get_Events()
inline VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* VoiceRequest_4_get_Events_m203351D7CF3E967C106C1CB5FA57C03D3754A132_inline (VoiceRequest_4_t635CDB7E63C5322E9D11D83B63A401260F8BAA8C* __this, const RuntimeMethod* method)
{
	return ((  VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* (*) (VoiceRequest_4_t635CDB7E63C5322E9D11D83B63A401260F8BAA8C*, const RuntimeMethod*))VoiceRequest_4_get_Events_mA3586B456290E5A77E164E735BF2996EA5AD909C_gshared_inline)(__this, method);
}
// Meta.WitAi.Events.VoiceEvents Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_VoiceEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* VoiceSDKImpl_get_VoiceEvents_mDB22DE6A42BBC0225E1F1C498D83E97E23F1D7CC (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnAborted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnAborted_m1BF160D6FBB7602D71BB7E262F7FFCF868C0DFF0_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Int32 Meta.WitAi.Requests.VoiceServiceRequestResults::get_StatusCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceServiceRequestResults_get_StatusCode_m3C210912FC433548965F049249DF0CDD46C41732_inline (VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.String,System.String>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_m40308708481154EFE4E59A5787D5CB02DC8B5645 (UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50* __this, String_t* ___arg00, String_t* ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50*, String_t*, String_t*, const RuntimeMethod*))UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared)(__this, ___arg00, ___arg11, method);
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnRequestCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnRequestCompleted_m4FDD273CC7D87CE80A18BBC2E3107BF81CBF4CBB_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>::Invoke(T0)
inline void UnityEvent_1_Invoke_m29A1E14E6C4E7BD2AA1810F34C1F79A2D1A6B2CC (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest>::Remove(T)
inline bool HashSet_1_Remove_m8FBC2DC239E52D1082A0E433EC2F46FFD7AE5D6A (HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE*, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___item0, method);
}
// System.Void Meta.WitAi.Requests.VoiceServiceRequest::.ctor(Meta.Voice.NLPRequestInputType,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceServiceRequest__ctor_m082596AC2C0139EA1BF90D3AE4848CF86082C2FD (VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* __this, int32_t ___newInputType0, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___newOptions1, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___newEvents2, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::set_Service(Oculus.Voice.Bindings.Android.VoiceSDKBinding)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_set_Service_mA724B1BFE746287B14AFE494B068E6E58955B9C9_inline (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::set_Immediately(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_set_Immediately_m356B48CE913A084BCE771141AD004F93CF037FFC_inline (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::get_Immediately()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceSDKImplRequest_get_Immediately_mA18C4F628A92860FD6C255A0A6731DE6486721FA_inline (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, const RuntimeMethod* method) ;
// Oculus.Voice.Bindings.Android.VoiceSDKBinding Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::get_Service()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* VoiceSDKImplRequest_get_Service_m24E53E1F349FD4BA62C846C1D53D92081E977DCF_inline (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_ActivateImmediately_mAE77E654195172665EA423332C5287AFA9D6FA03 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___options0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Activate(Meta.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Activate_m2B9D589F386A31D807C30E522DC49F644D203754 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___options0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Deactivate_mB0F3CE4FF5E8579CEAC78F717250E951B5DEEF71 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) ;
// System.String Meta.WitAi.Requests.VoiceServiceRequestOptions::get_Text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VoiceServiceRequestOptions_get_Text_m78FC14117147FF7042E92666EBC0633FA4BD8AD0_inline (VoiceServiceRequestOptions_tBB80C39F5D734638F03442F09F4F106BD5F20EE4* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Activate(System.String,Meta.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Activate_m4F67A04DBD5D731C2F6CEF75D547B81D591B616E (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, String_t* ___text0, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___options1, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::DeactivateAndAbortRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_DeactivateAndAbortRequest_m84DF1F32E12D4FF53F50C0680F684256537761BC (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* WitResponseNode_Parse_m7FC8CFF3EFB9D3B0F1BD5F6F0757035F86252542 (String_t* ___aJSON0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___javaInterface0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest>::get_Count()
inline int32_t HashSet_1_get_Count_mDE40B5AA383E622BEFDF2028B2668F3A199C9772_inline (HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE*, const RuntimeMethod*))HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline)(__this, method);
}
// TSource System.Linq.Enumerable::First<Meta.WitAi.Requests.VoiceServiceRequest>(System.Collections.Generic.IEnumerable`1<TSource>)
inline VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* Enumerable_First_TisVoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536_mF12222DC4CEBF5BCC6CA2AD209B9D539E30DAAE5 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared)(___source0, method);
}
// Meta.WitAi.Requests.VoiceServiceRequest Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::GetRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* VoiceSDKListenerBinding_GetRequest_m38136DF758A0E38BAE4F571F67D5AE7BA8B14EDF (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___requestId0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::HandleStartListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_HandleStartListening_m1FD6806C473255305D5BE76A688554ACEA469DC1 (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onStartListening(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onStartListening_m13BD037635C5126FF7863C7B8C7E0F8DEB32AF5E (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___requestId0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::HandleStopListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_HandleStopListening_mF37B951F9B14CD8BF8CE8CC4985EDBC6E1967D23 (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onStoppedListening(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onStoppedListening_mEBA9CDB24CD1028952612BC8245CC71CCB8558FE (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, int32_t ___reason0, String_t* ___requestId1, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::HandleTransmissionBegan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_HandleTransmissionBegan_m840C22E2C5DEC52141DEA4AB63507609F5FE279D (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Events.WitRequestCreatedEvent Meta.WitAi.Events.SpeechEvents::get_OnRequestCreated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B* SpeechEvents_get_OnRequestCreated_mDB1CAA325BD1348FDF861A84E45F47FF84D15C63_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>::Invoke(T0)
inline void UnityEvent_1_Invoke_m75F136A134251EC0553FA93A8F6DB17C273F2D25 (UnityEvent_1_tD140963BF887A3E18CDB90439A9DD6FE5438B8B8* __this, WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tD140963BF887A3E18CDB90439A9DD6FE5438B8B8*, WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onRequestCreated(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onRequestCreated_m5B45DC0F288EE2466490F8C475729C82AE4AF5EB (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___requestId0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::HandlePartialTranscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_HandlePartialTranscription_mE5CAE9D79A3F05D2B6E52E5F0E954CBBB63142C9 (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, String_t* ___transcription0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onPartialTranscription(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onPartialTranscription_m57DB1000AA7D19B583506B28018619E912553C1B (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___transcription0, String_t* ___requestId1, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::HandleFullTranscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_HandleFullTranscription_m58435396486B84E64D6A49545FF2257E816E603D (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, String_t* ___transcription0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onFullTranscription(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onFullTranscription_m827443E15C97C8297417DDD90ADC5B23A663A820 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___transcription0, String_t* ___requestId1, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::HandlePartialResponse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_HandlePartialResponse_m2CF78E9E0B83F6C9C85D8A88FC6917B36836E84F (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, String_t* ___responseJson0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onPartialResponse(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onPartialResponse_m0201E2D4266DC1F102FAC93339DF19D643C0D666 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___responseJson0, String_t* ___requestId1, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::HandleCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_HandleCanceled_m64F4142836CC611D42DD65ADD5424DD2CE72C60A (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onAborted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onAborted_m1EC89D14C80CDA0AE1E0640772C4F84D355D93A4 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___requestId0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::HandleError(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_HandleError_m16F17C2F85EB7A4C5EBE53AA28DF202A1DFA5CC5 (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, String_t* ___error0, String_t* ___message1, String_t* ___errorBody2, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onError(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onError_m61AFC56BFA2D447CA1A321E9740620CD3C0DB9CD (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___error0, String_t* ___message1, String_t* ___errorBody2, String_t* ___requestId3, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::HandleResponse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_HandleResponse_m7852E12CDCB3AE6B5E94AFFCE77DFAC6C223A593 (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, String_t* ___responseJson0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onResponse(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onResponse_m07DDC9A69B1EDAABBC1C737CFB1FCBC7015F6AF5 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___responseJson0, String_t* ___requestId1, const RuntimeMethod* method) ;
// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Events.SpeechEvents::get_OnMicLevelChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* SpeechEvents_get_OnMicLevelChanged_mF6437F7C9C8E60935C01C02C57CDFE62741F8CE8_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
inline void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, float, const RuntimeMethod*))UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared)(__this, ___arg00, method);
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onMicLevelChanged(System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onMicLevelChanged_mA83DDA2437B013319AE1FAC3F1B8BDE55F13E41F (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, float ___level0, String_t* ___requestId1, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onMicDataSent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onMicDataSent_m340FADE99562E5C9BDA41B07FE043B6AD8E67A6C (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___requestId0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onMinimumWakeThresholdHit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onMinimumWakeThresholdHit_m0A05075FC98025A0DEB1DBA73F072542C97BA5B4 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___requestId0, const RuntimeMethod* method) ;
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onRequestCompleted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onRequestCompleted_mE2C1F72CF44A6B813ADB8249F833253BCA1FE3ED (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___requestId0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.VLog::W(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_W_m7943297ED32FD0E92544C324E6793089056A2344 (RuntimeObject* ___log0, const RuntimeMethod* method) ;
// System.DateTime Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::NativeTimestampToDateTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D VoiceSDKListenerBinding_NativeTimestampToDateTime_mB7471BF6D0FBF304DB543C5080101CFE3451D0A4 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, int64_t ___javaTimestamp0, const RuntimeMethod* method) ;
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Events.TelemetryEvents Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::get_TelemetryEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* VoiceSDKListenerBinding_get_TelemetryEvents_m72B4328D72C40D781FEF1668138B63CDD3F89B0F (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Int64,System.Double>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_mE12D8B1489A72A3AD9E7E020A64138B0AD806DFB (UnityEvent_2_t8D8E787461BECB35F2627E8001A36D825CA99A97* __this, int64_t ___arg00, double ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t8D8E787461BECB35F2627E8001A36D825CA99A97*, int64_t, double, const RuntimeMethod*))UnityEvent_2_Invoke_mE12D8B1489A72A3AD9E7E020A64138B0AD806DFB_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, int32_t ___kind7, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddMilliseconds_mEF44A0EE635A478B7B0CDAA438D2240C14C88D05 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
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
// System.Void Oculus.VoiceSDK.UX.VoiceActivationButton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceActivationButton_Awake_m5B794288B45CA161A238EEBF6E98DBF717465E7F (VoiceActivationButton_t5517345FB7D1A22B85C94B073ACDCCEB345F031A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDA8F5B3610935B66B1EC441F14D138F7C47411EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _buttonLabel = GetComponentInChildren<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(__this, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		__this->____buttonLabel_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buttonLabel_5), (void*)L_0);
		// _button = GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1;
		L_1 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		__this->____button_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____button_4), (void*)L_1);
		// if (_voiceService == null)
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_2 = __this->____voiceService_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// _voiceService = FindObjectOfType<VoiceService>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_4;
		L_4 = Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDA8F5B3610935B66B1EC441F14D138F7C47411EC(Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDA8F5B3610935B66B1EC441F14D138F7C47411EC_RuntimeMethod_var);
		__this->____voiceService_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____voiceService_6), (void*)L_4);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Oculus.VoiceSDK.UX.VoiceActivationButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceActivationButton_OnEnable_m045879B8959ABC7645F9C4E06D0F89F74E9120BB (VoiceActivationButton_t5517345FB7D1A22B85C94B073ACDCCEB345F031A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceActivationButton_OnClick_m26E25D1F891AFDDE14104E0F0578A081547449E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RefreshActive();
		VoiceActivationButton_RefreshActive_mD690EF7AEB734948CCC75105D69753AA3CDC9725(__this, NULL);
		// if (_button != null)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____button_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// _button.onClick.AddListener(OnClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->____button_4;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)VoiceActivationButton_OnClick_m26E25D1F891AFDDE14104E0F0578A081547449E0_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Oculus.VoiceSDK.UX.VoiceActivationButton::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceActivationButton_OnDisable_m1A45DF8AFC34AB368E812B118867D3E34FC88AAC (VoiceActivationButton_t5517345FB7D1A22B85C94B073ACDCCEB345F031A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceActivationButton_OnClick_m26E25D1F891AFDDE14104E0F0578A081547449E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _isActive = false;
		__this->____isActive_12 = (bool)0;
		// if (_button != null)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____button_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		// _button.onClick.RemoveListener(OnClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->____button_4;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)VoiceActivationButton_OnClick_m26E25D1F891AFDDE14104E0F0578A081547449E0_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_3, L_4, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Oculus.VoiceSDK.UX.VoiceActivationButton::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceActivationButton_OnClick_m26E25D1F891AFDDE14104E0F0578A081547449E0 (VoiceActivationButton_t5517345FB7D1A22B85C94B073ACDCCEB345F031A* __this, const RuntimeMethod* method) 
{
	{
		// if (!_isActive)
		bool L_0 = __this->____isActive_12;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// Activate();
		VoiceActivationButton_Activate_m3FA620C1268F5F34C0500B05E9794D582F5ED7AC(__this, NULL);
		return;
	}

IL_000f:
	{
		// Deactivate();
		VoiceActivationButton_Deactivate_m48CB83A52875A76C071B73687A2F0B8E7733C719(__this, NULL);
		// }
		return;
	}
}
// System.Void Oculus.VoiceSDK.UX.VoiceActivationButton::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceActivationButton_Activate_m3FA620C1268F5F34C0500B05E9794D582F5ED7AC (VoiceActivationButton_t5517345FB7D1A22B85C94B073ACDCCEB345F031A* __this, const RuntimeMethod* method) 
{
	{
		// if (!_activateImmediately)
		bool L_0 = __this->____activateImmediately_8;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// _request = _voiceService.Activate(GetRequestEvents());
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_1 = __this->____voiceService_6;
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_2;
		L_2 = VoiceActivationButton_GetRequestEvents_m4C550B9F74B1B44A83512764E5DF7BC670FD260F(__this, NULL);
		NullCheck(L_1);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_3;
		L_3 = VoiceService_Activate_m5775703279AA8210115C9ED1431545C1A184A02F(L_1, L_2, NULL);
		__this->____request_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____request_11), (void*)L_3);
		return;
	}

IL_0020:
	{
		// _request = _voiceService.ActivateImmediately(GetRequestEvents());
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_4 = __this->____voiceService_6;
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_5;
		L_5 = VoiceActivationButton_GetRequestEvents_m4C550B9F74B1B44A83512764E5DF7BC670FD260F(__this, NULL);
		NullCheck(L_4);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_6;
		L_6 = VoiceService_ActivateImmediately_mC3827967516B7E8311AC491AE121222404911CFB(L_4, L_5, NULL);
		__this->____request_11 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____request_11), (void*)L_6);
		// }
		return;
	}
}
// System.Void Oculus.VoiceSDK.UX.VoiceActivationButton::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceActivationButton_Deactivate_m48CB83A52875A76C071B73687A2F0B8E7733C719 (VoiceActivationButton_t5517345FB7D1A22B85C94B073ACDCCEB345F031A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC1A73A406A2B8A6BA7CDD3AE6E608083E7333CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_deactivateAndAbort)
		bool L_0 = __this->____deactivateAndAbort_10;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// _request.DeactivateAudio();
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_1 = __this->____request_11;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(46 /* System.Void Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::DeactivateAudio() */, L_1);
		return;
	}

IL_0014:
	{
		// _request.Cancel();
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_2 = __this->____request_11;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(27 /* System.Void Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::Cancel(System.String) */, L_2, _stringLiteralBC1A73A406A2B8A6BA7CDD3AE6E608083E7333CC);
		// }
		return;
	}
}
// Meta.WitAi.Requests.VoiceServiceRequestEvents Oculus.VoiceSDK.UX.VoiceActivationButton::GetRequestEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* VoiceActivationButton_GetRequestEvents_m4C550B9F74B1B44A83512764E5DF7BC670FD260F (VoiceActivationButton_t5517345FB7D1A22B85C94B073ACDCCEB345F031A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceActivationButton_OnComplete_m5817A717203C276DE8E01486ED778F14D3457241_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceActivationButton_OnInit_mC45831C731498EFE85348C0E16A6F235F3508629_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnComplete_mCF88D3B32BB971E0CDD460436A604C337B58ABA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnInit_m02F0C353A1306EBC0F79EB6C6F1990CBE892D1B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VoiceServiceRequestEvents events = new VoiceServiceRequestEvents();
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_0 = (VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838*)il2cpp_codegen_object_new(VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		VoiceServiceRequestEvents__ctor_mC421AD9C8287440D1C67B9D33B14E25C8AA9DBD8(L_0, NULL);
		// events.OnInit.AddListener(OnInit);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_1 = L_0;
		NullCheck(L_1);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_2;
		L_2 = VoiceRequestEvents_1_get_OnInit_m02F0C353A1306EBC0F79EB6C6F1990CBE892D1B7_inline(L_1, VoiceRequestEvents_1_get_OnInit_m02F0C353A1306EBC0F79EB6C6F1990CBE892D1B7_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_3 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_3, __this, (intptr_t)((void*)VoiceActivationButton_OnInit_mC45831C731498EFE85348C0E16A6F235F3508629_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_2, L_3, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		// events.OnComplete.AddListener(OnComplete);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_4 = L_1;
		NullCheck(L_4);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_5;
		L_5 = VoiceRequestEvents_1_get_OnComplete_mCF88D3B32BB971E0CDD460436A604C337B58ABA9_inline(L_4, VoiceRequestEvents_1_get_OnComplete_mCF88D3B32BB971E0CDD460436A604C337B58ABA9_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_6 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_6, __this, (intptr_t)((void*)VoiceActivationButton_OnComplete_m5817A717203C276DE8E01486ED778F14D3457241_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_5, L_6, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		// return events;
		return L_4;
	}
}
// System.Void Oculus.VoiceSDK.UX.VoiceActivationButton::OnInit(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceActivationButton_OnInit_mC45831C731498EFE85348C0E16A6F235F3508629 (VoiceActivationButton_t5517345FB7D1A22B85C94B073ACDCCEB345F031A* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	{
		// _isActive = true;
		__this->____isActive_12 = (bool)1;
		// RefreshActive();
		VoiceActivationButton_RefreshActive_mD690EF7AEB734948CCC75105D69753AA3CDC9725(__this, NULL);
		// }
		return;
	}
}
// System.Void Oculus.VoiceSDK.UX.VoiceActivationButton::OnComplete(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceActivationButton_OnComplete_m5817A717203C276DE8E01486ED778F14D3457241 (VoiceActivationButton_t5517345FB7D1A22B85C94B073ACDCCEB345F031A* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	{
		// _isActive = false;
		__this->____isActive_12 = (bool)0;
		// RefreshActive();
		VoiceActivationButton_RefreshActive_mD690EF7AEB734948CCC75105D69753AA3CDC9725(__this, NULL);
		// }
		return;
	}
}
// System.Void Oculus.VoiceSDK.UX.VoiceActivationButton::RefreshActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceActivationButton_RefreshActive_mD690EF7AEB734948CCC75105D69753AA3CDC9725 (VoiceActivationButton_t5517345FB7D1A22B85C94B073ACDCCEB345F031A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	String_t* G_B4_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B4_1 = NULL;
	{
		// if (_buttonLabel != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____buttonLabel_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// _buttonLabel.text = _isActive ? _deactivateText : _activateText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->____buttonLabel_5;
		bool L_3 = __this->____isActive_12;
		G_B2_0 = L_2;
		if (L_3)
		{
			G_B3_0 = L_2;
			goto IL_0024;
		}
	}
	{
		String_t* L_4 = __this->____activateText_7;
		G_B4_0 = L_4;
		G_B4_1 = G_B2_0;
		goto IL_002a;
	}

IL_0024:
	{
		String_t* L_5 = __this->____deactivateText_9;
		G_B4_0 = L_5;
		G_B4_1 = G_B3_0;
	}

IL_002a:
	{
		NullCheck(G_B4_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B4_1, G_B4_0);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Oculus.VoiceSDK.UX.VoiceActivationButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceActivationButton__ctor_mFA7800933BBFACE9E955FBC3E79BEA9C0494069A (VoiceActivationButton_t5517345FB7D1A22B85C94B073ACDCCEB345F031A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral607C6077E36406D8A8A0E09E6751FDB0C5DEE673);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76518E7DE5882197CD91E9F2E6826A3C0B9F493C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string _activateText = "Activate";
		__this->____activateText_7 = _stringLiteral76518E7DE5882197CD91E9F2E6826A3C0B9F493C;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activateText_7), (void*)_stringLiteral76518E7DE5882197CD91E9F2E6826A3C0B9F493C);
		// [SerializeField] private string _deactivateText = "Deactivate";
		__this->____deactivateText_9 = _stringLiteral607C6077E36406D8A8A0E09E6751FDB0C5DEE673;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____deactivateText_9), (void*)_stringLiteral607C6077E36406D8A8A0E09E6751FDB0C5DEE673);
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
// System.Void Oculus.VoiceSDK.UX.VoiceTranscriptionLabel::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceTranscriptionLabel_Awake_mFB3D0C70CBA65D519E874679EE167060D8727B2C (VoiceTranscriptionLabel_t6D0504E24A4F16DD62EBD1A35A7A9A12FCFB9A55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDCA64A62C0DE0D098A97F8FDFDA230DAEA167555_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_voiceServices == null || _voiceServices.Length == 0)
		VoiceServiceU5BU5D_t0F6EBA47148CDC25807C5CD4DFC314DCA07F7484* L_0 = __this->____voiceServices_5;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		VoiceServiceU5BU5D_t0F6EBA47148CDC25807C5CD4DFC314DCA07F7484* L_1 = __this->____voiceServices_5;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_001c;
		}
	}

IL_0011:
	{
		// _voiceServices = FindObjectsOfType<VoiceService>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		VoiceServiceU5BU5D_t0F6EBA47148CDC25807C5CD4DFC314DCA07F7484* L_2;
		L_2 = Object_FindObjectsOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDCA64A62C0DE0D098A97F8FDFDA230DAEA167555(Object_FindObjectsOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDCA64A62C0DE0D098A97F8FDFDA230DAEA167555_RuntimeMethod_var);
		__this->____voiceServices_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____voiceServices_5), (void*)L_2);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Oculus.VoiceSDK.UX.VoiceTranscriptionLabel::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceTranscriptionLabel_OnEnable_m70F1699252E4E9485FF422EE5D2B6784563E5036 (VoiceTranscriptionLabel_t6D0504E24A4F16DD62EBD1A35A7A9A12FCFB9A55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t0DBAE2B43FD6E30FC19DDEB9BE926A3402202A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_AddListener_m1F3FE6BD9D4A9C57206FB67E9CE9C277BF3557DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceTranscriptionLabel_OnComplete_mA1210373958E2BA535ED0D9CB9FBF5F43C8A3A4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceTranscriptionLabel_OnError_mD6BCBFA200C3DCB2EDBE2D81B46F1B581DC80524_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceTranscriptionLabel_OnStartListening_mE3A301E45B1B6059242C5479E2BA5BCE54EF7F91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceTranscriptionLabel_OnTranscriptionChange_mF55062A409B4A5546580DA196282D49ADBE73DE1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VoiceServiceU5BU5D_t0F6EBA47148CDC25807C5CD4DFC314DCA07F7484* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (_voiceServices != null)
		VoiceServiceU5BU5D_t0F6EBA47148CDC25807C5CD4DFC314DCA07F7484* L_0 = __this->____voiceServices_5;
		if (!L_0)
		{
			goto IL_00b4;
		}
	}
	{
		// foreach (var service in _voiceServices)
		VoiceServiceU5BU5D_t0F6EBA47148CDC25807C5CD4DFC314DCA07F7484* L_1 = __this->____voiceServices_5;
		V_0 = L_1;
		V_1 = 0;
		goto IL_00ab;
	}

IL_0019:
	{
		// foreach (var service in _voiceServices)
		VoiceServiceU5BU5D_t0F6EBA47148CDC25807C5CD4DFC314DCA07F7484* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// service.VoiceEvents.OnStartListening.AddListener(OnStartListening);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_6 = L_5;
		NullCheck(L_6);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_7;
		L_7 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_6);
		NullCheck(L_7);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_8;
		L_8 = SpeechEvents_get_OnStartListening_m1AE66AF56C8A79496E386C26CCB815E99EBB4DA7_inline(L_7, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_9, __this, (intptr_t)((void*)VoiceTranscriptionLabel_OnStartListening_mE3A301E45B1B6059242C5479E2BA5BCE54EF7F91_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_8, L_9, NULL);
		// service.VoiceEvents.OnPartialTranscription.AddListener(OnTranscriptionChange);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_10 = L_6;
		NullCheck(L_10);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_11;
		L_11 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_10);
		NullCheck(L_11);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_12;
		L_12 = SpeechEvents_get_OnPartialTranscription_m0BA26BCC13243D100712E20D4A6AE8DD56C64B18_inline(L_11, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_13 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_13, __this, (intptr_t)((void*)VoiceTranscriptionLabel_OnTranscriptionChange_mF55062A409B4A5546580DA196282D49ADBE73DE1_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_12, L_13, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// service.VoiceEvents.OnFullTranscription.AddListener(OnTranscriptionChange);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_14 = L_10;
		NullCheck(L_14);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_15;
		L_15 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_14);
		NullCheck(L_15);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_16;
		L_16 = SpeechEvents_get_OnFullTranscription_m72C7935CDD9EBD2FCAC9C0ECADC2830417512065_inline(L_15, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_17 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_17, __this, (intptr_t)((void*)VoiceTranscriptionLabel_OnTranscriptionChange_mF55062A409B4A5546580DA196282D49ADBE73DE1_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_16, L_17, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// service.VoiceEvents.OnError.AddListener(OnError);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_18 = L_14;
		NullCheck(L_18);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_19;
		L_19 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_18);
		NullCheck(L_19);
		WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* L_20;
		L_20 = SpeechEvents_get_OnError_mCB052EBA347C9125964E56DD0BD6CC0264796421_inline(L_19, NULL);
		UnityAction_2_t0DBAE2B43FD6E30FC19DDEB9BE926A3402202A83* L_21 = (UnityAction_2_t0DBAE2B43FD6E30FC19DDEB9BE926A3402202A83*)il2cpp_codegen_object_new(UnityAction_2_t0DBAE2B43FD6E30FC19DDEB9BE926A3402202A83_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		UnityAction_2__ctor_m1C937A45A2857F3199CB7182AD45A0D2AEA0A2BF(L_21, __this, (intptr_t)((void*)VoiceTranscriptionLabel_OnError_mD6BCBFA200C3DCB2EDBE2D81B46F1B581DC80524_RuntimeMethod_var), NULL);
		NullCheck(L_20);
		UnityEvent_2_AddListener_m1F3FE6BD9D4A9C57206FB67E9CE9C277BF3557DE(L_20, L_21, UnityEvent_2_AddListener_m1F3FE6BD9D4A9C57206FB67E9CE9C277BF3557DE_RuntimeMethod_var);
		// service.VoiceEvents.OnComplete.AddListener(OnComplete);
		NullCheck(L_18);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_22;
		L_22 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_18);
		NullCheck(L_22);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_23;
		L_23 = SpeechEvents_get_OnComplete_m9FD0FF1FDEA3E57022FA443D9D27A91108EC4BB9_inline(L_22, NULL);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_24 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_24, __this, (intptr_t)((void*)VoiceTranscriptionLabel_OnComplete_mA1210373958E2BA535ED0D9CB9FBF5F43C8A3A4F_RuntimeMethod_var), NULL);
		NullCheck(L_23);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_23, L_24, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_00ab:
	{
		// foreach (var service in _voiceServices)
		int32_t L_26 = V_1;
		VoiceServiceU5BU5D_t0F6EBA47148CDC25807C5CD4DFC314DCA07F7484* L_27 = V_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0019;
		}
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void Oculus.VoiceSDK.UX.VoiceTranscriptionLabel::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceTranscriptionLabel_OnDisable_mAB732CACD4A997F0FC92F58EE78804E8F94A7FC1 (VoiceTranscriptionLabel_t6D0504E24A4F16DD62EBD1A35A7A9A12FCFB9A55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t0DBAE2B43FD6E30FC19DDEB9BE926A3402202A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_RemoveListener_mF064823D14A8A7CC3CE23E401348A847A18FF7CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceTranscriptionLabel_OnComplete_mA1210373958E2BA535ED0D9CB9FBF5F43C8A3A4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceTranscriptionLabel_OnError_mD6BCBFA200C3DCB2EDBE2D81B46F1B581DC80524_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceTranscriptionLabel_OnStartListening_mE3A301E45B1B6059242C5479E2BA5BCE54EF7F91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceTranscriptionLabel_OnTranscriptionChange_mF55062A409B4A5546580DA196282D49ADBE73DE1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VoiceServiceU5BU5D_t0F6EBA47148CDC25807C5CD4DFC314DCA07F7484* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (_voiceServices != null)
		VoiceServiceU5BU5D_t0F6EBA47148CDC25807C5CD4DFC314DCA07F7484* L_0 = __this->____voiceServices_5;
		if (!L_0)
		{
			goto IL_00b4;
		}
	}
	{
		// foreach (var service in _voiceServices)
		VoiceServiceU5BU5D_t0F6EBA47148CDC25807C5CD4DFC314DCA07F7484* L_1 = __this->____voiceServices_5;
		V_0 = L_1;
		V_1 = 0;
		goto IL_00ab;
	}

IL_0019:
	{
		// foreach (var service in _voiceServices)
		VoiceServiceU5BU5D_t0F6EBA47148CDC25807C5CD4DFC314DCA07F7484* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// service.VoiceEvents.OnStartListening.RemoveListener(OnStartListening);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_6 = L_5;
		NullCheck(L_6);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_7;
		L_7 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_6);
		NullCheck(L_7);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_8;
		L_8 = SpeechEvents_get_OnStartListening_m1AE66AF56C8A79496E386C26CCB815E99EBB4DA7_inline(L_7, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_9, __this, (intptr_t)((void*)VoiceTranscriptionLabel_OnStartListening_mE3A301E45B1B6059242C5479E2BA5BCE54EF7F91_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_8, L_9, NULL);
		// service.VoiceEvents.OnPartialTranscription.RemoveListener(OnTranscriptionChange);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_10 = L_6;
		NullCheck(L_10);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_11;
		L_11 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_10);
		NullCheck(L_11);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_12;
		L_12 = SpeechEvents_get_OnPartialTranscription_m0BA26BCC13243D100712E20D4A6AE8DD56C64B18_inline(L_11, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_13 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_13, __this, (intptr_t)((void*)VoiceTranscriptionLabel_OnTranscriptionChange_mF55062A409B4A5546580DA196282D49ADBE73DE1_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F(L_12, L_13, UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var);
		// service.VoiceEvents.OnFullTranscription.RemoveListener(OnTranscriptionChange);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_14 = L_10;
		NullCheck(L_14);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_15;
		L_15 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_14);
		NullCheck(L_15);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_16;
		L_16 = SpeechEvents_get_OnFullTranscription_m72C7935CDD9EBD2FCAC9C0ECADC2830417512065_inline(L_15, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_17 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_17, __this, (intptr_t)((void*)VoiceTranscriptionLabel_OnTranscriptionChange_mF55062A409B4A5546580DA196282D49ADBE73DE1_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F(L_16, L_17, UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var);
		// service.VoiceEvents.OnError.RemoveListener(OnError);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_18 = L_14;
		NullCheck(L_18);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_19;
		L_19 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_18);
		NullCheck(L_19);
		WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* L_20;
		L_20 = SpeechEvents_get_OnError_mCB052EBA347C9125964E56DD0BD6CC0264796421_inline(L_19, NULL);
		UnityAction_2_t0DBAE2B43FD6E30FC19DDEB9BE926A3402202A83* L_21 = (UnityAction_2_t0DBAE2B43FD6E30FC19DDEB9BE926A3402202A83*)il2cpp_codegen_object_new(UnityAction_2_t0DBAE2B43FD6E30FC19DDEB9BE926A3402202A83_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		UnityAction_2__ctor_m1C937A45A2857F3199CB7182AD45A0D2AEA0A2BF(L_21, __this, (intptr_t)((void*)VoiceTranscriptionLabel_OnError_mD6BCBFA200C3DCB2EDBE2D81B46F1B581DC80524_RuntimeMethod_var), NULL);
		NullCheck(L_20);
		UnityEvent_2_RemoveListener_mF064823D14A8A7CC3CE23E401348A847A18FF7CF(L_20, L_21, UnityEvent_2_RemoveListener_mF064823D14A8A7CC3CE23E401348A847A18FF7CF_RuntimeMethod_var);
		// service.VoiceEvents.OnComplete.RemoveListener(OnComplete);
		NullCheck(L_18);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_22;
		L_22 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_18);
		NullCheck(L_22);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_23;
		L_23 = SpeechEvents_get_OnComplete_m9FD0FF1FDEA3E57022FA443D9D27A91108EC4BB9_inline(L_22, NULL);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_24 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_24, __this, (intptr_t)((void*)VoiceTranscriptionLabel_OnComplete_mA1210373958E2BA535ED0D9CB9FBF5F43C8A3A4F_RuntimeMethod_var), NULL);
		NullCheck(L_23);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(L_23, L_24, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_00ab:
	{
		// foreach (var service in _voiceServices)
		int32_t L_26 = V_1;
		VoiceServiceU5BU5D_t0F6EBA47148CDC25807C5CD4DFC314DCA07F7484* L_27 = V_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0019;
		}
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void Oculus.VoiceSDK.UX.VoiceTranscriptionLabel::OnStartListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceTranscriptionLabel_OnStartListening_mE3A301E45B1B6059242C5479E2BA5BCE54EF7F91 (VoiceTranscriptionLabel_t6D0504E24A4F16DD62EBD1A35A7A9A12FCFB9A55* __this, const RuntimeMethod* method) 
{
	{
		// SetText(_promptListening, _promptColor);
		String_t* L_0 = __this->____promptListening_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->____promptColor_7;
		VoiceTranscriptionLabel_SetText_m44235CFE6B7893E111983DE93E446135A120A216(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.VoiceSDK.UX.VoiceTranscriptionLabel::OnTranscriptionChange(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceTranscriptionLabel_OnTranscriptionChange_mF55062A409B4A5546580DA196282D49ADBE73DE1 (VoiceTranscriptionLabel_t6D0504E24A4F16DD62EBD1A35A7A9A12FCFB9A55* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	{
		// SetText(text, _transcriptionColor);
		String_t* L_0 = ___text0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->____transcriptionColor_6;
		VoiceTranscriptionLabel_SetText_m44235CFE6B7893E111983DE93E446135A120A216(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.VoiceSDK.UX.VoiceTranscriptionLabel::OnError(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceTranscriptionLabel_OnError_mD6BCBFA200C3DCB2EDBE2D81B46F1B581DC80524 (VoiceTranscriptionLabel_t6D0504E24A4F16DD62EBD1A35A7A9A12FCFB9A55* __this, String_t* ___status0, String_t* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetText($"[{status}] {error}", _errorColor);
		String_t* L_0 = ___status0;
		String_t* L_1 = ___error1;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, L_0, _stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C, L_1, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->____errorColor_10;
		VoiceTranscriptionLabel_SetText_m44235CFE6B7893E111983DE93E446135A120A216(__this, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Oculus.VoiceSDK.UX.VoiceTranscriptionLabel::OnComplete(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceTranscriptionLabel_OnComplete_mA1210373958E2BA535ED0D9CB9FBF5F43C8A3A4F (VoiceTranscriptionLabel_t6D0504E24A4F16DD62EBD1A35A7A9A12FCFB9A55* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	{
		// if (string.Equals(_label.text, _promptListening))
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____label_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		String_t* L_2 = __this->____promptListening_9;
		bool L_3;
		L_3 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// SetText(_promptDefault, _promptColor);
		String_t* L_4 = __this->____promptDefault_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->____promptColor_7;
		VoiceTranscriptionLabel_SetText_m44235CFE6B7893E111983DE93E446135A120A216(__this, L_4, L_5, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Oculus.VoiceSDK.UX.VoiceTranscriptionLabel::SetText(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceTranscriptionLabel_SetText_m44235CFE6B7893E111983DE93E446135A120A216 (VoiceTranscriptionLabel_t6D0504E24A4F16DD62EBD1A35A7A9A12FCFB9A55* __this, String_t* ___newText0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___newColor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_label == null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____label_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// _label = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2;
		L_2 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->____label_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____label_4), (void*)L_2);
		// if (_label == null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->____label_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// return;
		return;
	}

IL_0029:
	{
		// if (string.Equals(newText, _label.text) && newColor == _label.color)
		String_t* L_5 = ___newText0;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->____label_4;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_6);
		bool L_8;
		L_8 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___newColor1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->____label_4;
		NullCheck(L_10);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_10);
		bool L_12;
		L_12 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		// return;
		return;
	}

IL_0050:
	{
		// _label.text = newText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->____label_4;
		String_t* L_14 = ___newText0;
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_14);
		// _label.color = newColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = __this->____label_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___newColor1;
		NullCheck(L_15);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_16);
		// }
		return;
	}
}
// System.Void Oculus.VoiceSDK.UX.VoiceTranscriptionLabel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceTranscriptionLabel__ctor_m88CF1D69F3DC32E8378C9143FCBDF4C4D4AAD184 (VoiceTranscriptionLabel_t6D0504E24A4F16DD62EBD1A35A7A9A12FCFB9A55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88CE8E234A99CCC43174399F014A281BE375DA3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4249AEA5B1AE9E78829F6D9A0EFE24DE7967450);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private Color _transcriptionColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->____transcriptionColor_6 = L_0;
		// [SerializeField] private Color _promptColor = new Color(0.2f, 0.2f, 0.2f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_1), (0.200000003f), (0.200000003f), (0.200000003f), /*hidden argument*/NULL);
		__this->____promptColor_7 = L_1;
		// [SerializeField] private string _promptDefault = "Press activate to begin listening";
		__this->____promptDefault_8 = _stringLiteral88CE8E234A99CCC43174399F014A281BE375DA3B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____promptDefault_8), (void*)_stringLiteral88CE8E234A99CCC43174399F014A281BE375DA3B);
		// [SerializeField] private string _promptListening = "Listening...";
		__this->____promptListening_9 = _stringLiteralA4249AEA5B1AE9E78829F6D9A0EFE24DE7967450;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____promptListening_9), (void*)_stringLiteralA4249AEA5B1AE9E78829F6D9A0EFE24DE7967450);
		// [SerializeField] private Color _errorColor = new Color(0.8f, 0.2f, 0.2f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_2), (0.800000012f), (0.200000003f), (0.200000003f), /*hidden argument*/NULL);
		__this->____errorColor_10 = L_2;
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
// System.Boolean Oculus.VoiceSDK.Utilities.MicPermissionsManager::HasMicPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MicPermissionsManager_HasMicPermission_m87B33F0E6CFB654B2DF0044F2541297F9454A17D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Permission.HasUserAuthorizedPermission(Permission.Microphone);
		bool L_0;
		L_0 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748, NULL);
		return L_0;
	}
}
// System.Void Oculus.VoiceSDK.Utilities.MicPermissionsManager::RequestMicPermission(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicPermissionsManager_RequestMicPermission_m8D289CCF5521DEBB59DD086F1EB76B5BD8F4F430 (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___permissionGrantedCallback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CRequestMicPermissionU3Eb__0_m5D27A7895C5158560A2D5A1189C06ECBDF5FD4E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t4983429A5DFBA983A90A930D2B711DC21F0928EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t4983429A5DFBA983A90A930D2B711DC21F0928EC* V_0 = NULL;
	PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B3_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_t4983429A5DFBA983A90A930D2B711DC21F0928EC* L_0 = (U3CU3Ec__DisplayClass1_0_t4983429A5DFBA983A90A930D2B711DC21F0928EC*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t4983429A5DFBA983A90A930D2B711DC21F0928EC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_m1326932DB311B56DAEAB612D325C4541F42A0C3C(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t4983429A5DFBA983A90A930D2B711DC21F0928EC* L_1 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = ___permissionGrantedCallback0;
		NullCheck(L_1);
		L_1->___permissionGrantedCallback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___permissionGrantedCallback_0), (void*)L_2);
		// if (HasMicPermission())
		bool L_3;
		L_3 = MicPermissionsManager_HasMicPermission_m87B33F0E6CFB654B2DF0044F2541297F9454A17D(NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// permissionGrantedCallback?.Invoke(Permission.Microphone);
		U3CU3Ec__DisplayClass1_0_t4983429A5DFBA983A90A930D2B711DC21F0928EC* L_4 = V_0;
		NullCheck(L_4);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = L_4->___permissionGrantedCallback_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = L_5;
		G_B2_0 = L_6;
		if (L_6)
		{
			G_B3_0 = L_6;
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		NullCheck(G_B3_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B3_0, _stringLiteral6D2C56060B3F7353031AD314517C27945CC39748, NULL);
		// return;
		return;
	}

IL_002a:
	{
		// var callbacks = new PermissionCallbacks();
		PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F* L_7 = (PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F*)il2cpp_codegen_object_new(PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		PermissionCallbacks__ctor_m91B14BBBC8913C131E400BA0D13576822AAE7A75(L_7, NULL);
		V_1 = L_7;
		// callbacks.PermissionGranted += s => permissionGrantedCallback?.Invoke(s);
		PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F* L_8 = V_1;
		U3CU3Ec__DisplayClass1_0_t4983429A5DFBA983A90A930D2B711DC21F0928EC* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CRequestMicPermissionU3Eb__0_m5D27A7895C5158560A2D5A1189C06ECBDF5FD4E0_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		PermissionCallbacks_add_PermissionGranted_m74335D4200D9B1A7C80AB9C133F95C61FCDCDF89(L_8, L_10, NULL);
		// Permission.RequestUserPermission(Permission.Microphone, callbacks);
		PermissionCallbacks_t6C5002298E6649261FCB52C244695459E5C9890F* L_11 = V_1;
		Permission_RequestUserPermission_m7B8E817C03FDB5C99F22002C7181F27BF031F117(_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748, L_11, NULL);
		// }
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
// System.Void Oculus.VoiceSDK.Utilities.MicPermissionsManager/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m1326932DB311B56DAEAB612D325C4541F42A0C3C (U3CU3Ec__DisplayClass1_0_t4983429A5DFBA983A90A930D2B711DC21F0928EC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Oculus.VoiceSDK.Utilities.MicPermissionsManager/<>c__DisplayClass1_0::<RequestMicPermission>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CRequestMicPermissionU3Eb__0_m5D27A7895C5158560A2D5A1189C06ECBDF5FD4E0 (U3CU3Ec__DisplayClass1_0_t4983429A5DFBA983A90A930D2B711DC21F0928EC* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	{
		// callbacks.PermissionGranted += s => permissionGrantedCallback?.Invoke(s);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___permissionGrantedCallback_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = ___s0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, L_2, NULL);
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
// System.String[] Oculus.Voice.AppBuiltIns::get_appNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* AppBuiltIns_get_appNames_mDF785F6921F49AB5AC3B014A3E43E54EEB91B1E8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_CopyTo_m2DEA1FFA96F37A6F52C3D47D69E60F1B1C7E8B50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_get_Count_m4091EB97339FC86B2770A513C1BB6EEBB9E8FAFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		// string[] keys = new string[apps.Keys.Count];
		il2cpp_codegen_runtime_class_init_inline(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_0 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___apps_2;
		NullCheck(L_0);
		KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* L_1;
		L_1 = Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68(L_0, Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = KeyCollection_get_Count_m4091EB97339FC86B2770A513C1BB6EEBB9E8FAFD(L_1, KeyCollection_get_Count_m4091EB97339FC86B2770A513C1BB6EEBB9E8FAFD_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		// apps.Keys.CopyTo(keys, 0);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_4 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___apps_2;
		NullCheck(L_4);
		KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* L_5;
		L_5 = Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68(L_4, Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_0;
		NullCheck(L_5);
		KeyCollection_CopyTo_m2DEA1FFA96F37A6F52C3D47D69E60F1B1C7E8B50(L_5, L_6, 0, KeyCollection_CopyTo_m2DEA1FFA96F37A6F52C3D47D69E60F1B1C7E8B50_RuntimeMethod_var);
		// return keys;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		return L_7;
	}
}
// System.Void Oculus.Voice.AppBuiltIns::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppBuiltIns__cctor_m3FDC271ED7F2EE7AAB8470DFE97B0E0DB6E55FED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral092BA6AD0413546226AD2BEA11159B0EB044FDB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ADCE98000A1E213D168FF9E6AD07CD47FBA0EE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C45DB50527FCFAD456E74EB416B617329505309);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DF52374CCE8AA942D55172FF34E782E0277521F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17A5AD13F3B52AA01A6CBB2F9F414BE34E8AB9A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B62E5629805E3224249BCAA0D9ECBB4C84AE48B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral203DD5C89072A85E4D8D935A3028CCC3E3855F85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C25F3C2950E0AFEA7FBD0AEB1FD0CC9CF30F713);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F3DB030C8BDF0926D14123D900497AE12BB3AD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F59628CFCF68C1C363F48F1FB91CF30C77F0D31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral375ED8BBE05A9343F552D3F8863536344C38BCA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral376CA77BE87EBF24FE3233A567285926D6704A8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral459CA1A783220A8007E9DD248A257FE22F59A157);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B0E509E3481549FC8F096287EFB425FAAFC38A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral541ADAD93719A7753AA265CAD6BA6276D2686025);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral550894D8930D82CF3BB3AC17DFA88A6C23CEFAA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral591184A69213A4D299171C75373FEABB89BF8937);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62DF8B883A7680DEF02C157C7AF38B4A3E89D8BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647CF137C0F27918F699BD1C0B1DC7FF9EFC1014);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ACA126350941A62677533ACC01C769BF2C144F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C2259C1F5D9911CDDA502DB9262E503845291FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CD966C6F70DF98361E72B6885D22A1DAAAEDC33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DB33ADD301402F08747C4EE933A8EF10A8128F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5431EF8CF17B42351F85D399751058873E7E92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77EE5971434CDE6F74A1DAE44D94954E1624D77C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A27C2F288438DD1823D8FA78BB3A4F69453087B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C022E2202C33B05A9AD14AE1A1E837AC3233551);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C5E86B8C3F36CC9EE33BD83A2E4C40D583CF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8973AE49BD46E89F131A8F5F8A58904E2C1CA11A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9155F30AA734CC9F26A86F037D8B48FDF7869B2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10E972FF3AD9BCA9E85E8ACEC160516A000E86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DC94CE2E4ADB08254413E0E3386625CB614D76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6814B83C0CAFFAC7308A42994ACCC03CA22FCCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB87F49253CFFED648B03A8D5C67D4624305684D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9CE0BCF216F3F1257A8C396F63FF8CECAB574F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA8F86E450F61205EF060F7DA79C0B6904644890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBF23B4B70E0BD3FF31AB982C6BDF878E58833CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC04CC788232484E918569E326AD3839934507B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC9163C315671EAC81D72701BD6DCF13C6773FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6083E3193B2C42160931E36C8DF7C83A18368C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6CF1388F62C641E47D1C0FC9A05AF1D6F8FCB6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC982AFF5E079BBDA3580BE37ECC91BC71135F59E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF168F877EC6D86E1C62FE514023B4373C1018D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBF28E8A6AC6C4E3A3E60076E430BBC6501C8AF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A60C78B1E543FC99764C33AEB77BCFE4231207);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD744E0023ACB34526A1B142EFA90B5CFF45FDC53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCCA071A995303A9BBCD5E2DBE5E190C2B0A05FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCCF22B1EB35EC58FFEB04A8C396594903C38127);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1423475EA278C8BCE568970404EECBE529CBEAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8F4B323C30FAE436F30D6A29F7DDC0C29CD5F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAA0AD4C9DDC7B173ACD12710BBE084A3B32C5F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECE395CDAEB0ECDBD5A23AA77D43B5263126619C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE166EB545AC42FA5F62142A18E3268B3A5D8A77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC140051BF200AB88497170B5004988B2DA52192);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6C1DC2224936F4BEE7CBA35A0036A85E7B52F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string builtInPrefix = "builtin:";
		((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___builtInPrefix_0 = _stringLiteralBA8F86E450F61205EF060F7DA79C0B6904644890;
		Il2CppCodeGenWriteBarrier((void**)(&((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___builtInPrefix_0), (void*)_stringLiteralBA8F86E450F61205EF060F7DA79C0B6904644890);
		// private static string modelName = "Built-in Models";
		((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1 = _stringLiteralEE166EB545AC42FA5F62142A18E3268B3A5D8A77;
		Il2CppCodeGenWriteBarrier((void**)(&((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1), (void*)_stringLiteralEE166EB545AC42FA5F62142A18E3268B3A5D8A77);
		// public static readonly Dictionary<string, Dictionary<string, string>>
		//     apps = new Dictionary<string, Dictionary<string, string>>
		//     {
		//         {
		//             "Chinese", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_zh"},
		//                 {"name", modelName},
		//                 {"lang", "zh"},
		//                 {"clientToken", "3KQH33637TAT7WD4TG7T65SDRO73WZGY"},
		//             }
		//         },
		//         {
		//             "Dutch", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_nl"},
		//                 {"name", modelName},
		//                 {"lang", "nl"},
		//                 {"clientToken", "ZCD6HCNCL6GTJKZ3QKWNKQVEDI4GUL7C"},
		//             }
		//         },
		//         {
		//             "English", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_en"},
		//                 {"name", modelName},
		//                 {"lang", "en"},
		//                 {"clientToken", "HOKEABS7HPIQVSRSVWRPTTV75TQJ5QBP"},
		//             }
		//         },
		//         {
		//             "French", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_fr"},
		//                 {"name", modelName},
		//                 {"lang", "fr"},
		//                 {"clientToken", "7PP7NK2QAH67MREGZV6SB6RIEWAYDNRY"},
		//             }
		//         },
		//         {
		//             "German", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_de"},
		//                 {"name", modelName},
		//                 {"lang", "de"},
		//                 {"clientToken", "7LXOOB4JC7MXPUTTGQHDVQMHGEEJT6LE"},
		//             }
		//         },
		//         {
		//             "Italian", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_it"},
		//                 {"name", modelName},
		//                 {"lang", "it"},
		//                 {"clientToken", "KELCNR4DCCPPOCF2RDFS4M6JOCWWIFII"},
		//             }
		//         },
		//         {
		//             "Japanese", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_ja"},
		//                 {"name", modelName},
		//                 {"lang", "ja"},
		//                 {"clientToken", "TPJGLBBCHJ5F7BVVN5XLEGP6YDQRUE3P"},
		//             }
		//         },
		//         {
		//             "Korean", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_ko"},
		//                 {"name", modelName},
		//                 {"lang", "ko"},
		//                 {"clientToken", "NT4WJLL7ACMFBXS4B7W5GRLTKDZQ36R4"},
		//             }
		//         },
		//         {
		//             "Polish", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_pl"},
		//                 {"name", modelName},
		//                 {"lang", "pl"},
		//                 {"clientToken", "DMDRHGYDYN33D3IKCX5BG5R57EL2IIC4"},
		//             }
		//         },
		//         {
		//             "Portuguese", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_pt"},
		//                 {"name", modelName},
		//                 {"lang", "pt"},
		//                 {"clientToken", "W4W3BSKL72HZC5MXLILONJUCG732SQQN"},
		//             }
		//         },
		//         {
		//             "Russian", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_ru"},
		//                 {"name", modelName},
		//                 {"lang", "ru"},
		//                 {"clientToken", "W67HLUWA3MBYVEKRW3VVWUKSNZGAOFBI"},
		//             }
		//         },
		//         {
		//             "Spanish", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_es"},
		//                 {"name", modelName},
		//                 {"lang", "es"},
		//                 {"clientToken", "YW7AM5OOVSW5XKGYKFE2S2HLC2WHC3UI"},
		//             }
		//         },
		//         {
		//             "Swedish", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_sv"},
		//                 {"name", modelName},
		//                 {"lang", "sv"},
		//                 {"clientToken", "NPE3UJ7Y4NIVTUOZ7QPPAP3TY6FYPXJY"},
		//             }
		//         },
		//         {
		//             "Turkish", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_tr"},
		//                 {"name", modelName},
		//                 {"lang", "tr"},
		//                 {"clientToken", "ZCISEDXESLYJOROLNOODCGGPZXHLUAEE"},
		//             }
		//         },
		//     };
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_0 = (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*)il2cpp_codegen_object_new(Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4(L_0, Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_1 = L_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_2, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_3, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralCAF168F877EC6D86E1C62FE514023B4373C1018D, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = L_3;
		String_t* L_5 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_4);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_4, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_5, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = L_4;
		NullCheck(L_6);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_6, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteralEAA0AD4C9DDC7B173ACD12710BBE084A3B32C5F6, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = L_6;
		NullCheck(L_7);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_7, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteral591184A69213A4D299171C75373FEABB89BF8937, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_1);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_1, _stringLiteral876C5E86B8C3F36CC9EE33BD83A2E4C40D583CF7, L_7, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_8 = L_1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_9, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = L_9;
		NullCheck(L_10);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_10, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralE1423475EA278C8BCE568970404EECBE529CBEAA, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_11 = L_10;
		String_t* L_12 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_11);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_12, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_13 = L_11;
		NullCheck(L_13);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_13, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral6DB33ADD301402F08747C4EE933A8EF10A8128F7, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14 = L_13;
		NullCheck(L_14);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_14, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralDCCA071A995303A9BBCD5E2DBE5E190C2B0A05FA, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_8);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_8, _stringLiteral7C022E2202C33B05A9AD14AE1A1E837AC3233551, L_14, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_15 = L_8;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_16 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_16, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_17 = L_16;
		NullCheck(L_17);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_17, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralB87F49253CFFED648B03A8D5C67D4624305684D4, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_18 = L_17;
		String_t* L_19 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_18);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_18, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_19, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_20 = L_18;
		NullCheck(L_20);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_20, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_21 = L_20;
		NullCheck(L_21);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_21, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteral6CD966C6F70DF98361E72B6885D22A1DAAAEDC33, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_15);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_15, _stringLiteralDCCF22B1EB35EC58FFEB04A8C396594903C38127, L_21, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_22 = L_15;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_23 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_23, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_24 = L_23;
		NullCheck(L_24);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_24, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralC6CF1388F62C641E47D1C0FC9A05AF1D6F8FCB6F, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_25 = L_24;
		String_t* L_26 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_25);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_25, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_26, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_27 = L_25;
		NullCheck(L_27);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_27, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral203DD5C89072A85E4D8D935A3028CCC3E3855F85, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_28 = L_27;
		NullCheck(L_28);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_28, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralBBF23B4B70E0BD3FF31AB982C6BDF878E58833CB, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_22);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_22, _stringLiteralFC6C1DC2224936F4BEE7CBA35A0036A85E7B52F4, L_28, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_29 = L_22;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_30 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_30, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_31 = L_30;
		NullCheck(L_31);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_31, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteral2C25F3C2950E0AFEA7FBD0AEB1FD0CC9CF30F713, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_32 = L_31;
		String_t* L_33 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_32);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_32, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_33, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_34 = L_32;
		NullCheck(L_34);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_34, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_35 = L_34;
		NullCheck(L_35);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_35, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralFC140051BF200AB88497170B5004988B2DA52192, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_29);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_29, _stringLiteral647CF137C0F27918F699BD1C0B1DC7FF9EFC1014, L_35, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_36 = L_29;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_37 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_37, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_38 = L_37;
		NullCheck(L_38);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_38, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteral092BA6AD0413546226AD2BEA11159B0EB044FDB2, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_39 = L_38;
		String_t* L_40 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_39);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_39, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_40, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_41 = L_39;
		NullCheck(L_41);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_41, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral1B62E5629805E3224249BCAA0D9ECBB4C84AE48B, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_42 = L_41;
		NullCheck(L_42);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_42, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralB9CE0BCF216F3F1257A8C396F63FF8CECAB574F7, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_36);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_36, _stringLiteral375ED8BBE05A9343F552D3F8863536344C38BCA2, L_42, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_43 = L_36;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_44 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_44, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_45 = L_44;
		NullCheck(L_45);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_45, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteral0ADCE98000A1E213D168FF9E6AD07CD47FBA0EE9, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_46 = L_45;
		String_t* L_47 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_46);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_46, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_47, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_48 = L_46;
		NullCheck(L_48);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_48, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral0C45DB50527FCFAD456E74EB416B617329505309, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_49 = L_48;
		NullCheck(L_49);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_49, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralBDC9163C315671EAC81D72701BD6DCF13C6773FA, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_43);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_43, _stringLiteral376CA77BE87EBF24FE3233A567285926D6704A8E, L_49, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_50 = L_43;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_51 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_51, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_52 = L_51;
		NullCheck(L_52);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_52, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteral8973AE49BD46E89F131A8F5F8A58904E2C1CA11A, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_53 = L_52;
		String_t* L_54 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_53);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_53, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_54, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_55 = L_53;
		NullCheck(L_55);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_55, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral4B0E509E3481549FC8F096287EFB425FAAFC38A4, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_56 = L_55;
		NullCheck(L_56);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_56, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteral550894D8930D82CF3BB3AC17DFA88A6C23CEFAA2, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_50);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_50, _stringLiteralE8F4B323C30FAE436F30D6A29F7DDC0C29CD5F62, L_56, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_57 = L_50;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_58 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_58);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_58, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_59 = L_58;
		NullCheck(L_59);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_59, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralCBF28E8A6AC6C4E3A3E60076E430BBC6501C8AF4, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_60 = L_59;
		String_t* L_61 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_60);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_60, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_61, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_62 = L_60;
		NullCheck(L_62);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_62, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteralD744E0023ACB34526A1B142EFA90B5CFF45FDC53, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_63 = L_62;
		NullCheck(L_63);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_63, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralBDC04CC788232484E918569E326AD3839934507B, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_57);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_57, _stringLiteral9155F30AA734CC9F26A86F037D8B48FDF7869B2B, L_63, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_64 = L_57;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_65 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_65);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_65, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_66 = L_65;
		NullCheck(L_66);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_66, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteral9F10E972FF3AD9BCA9E85E8ACEC160516A000E86, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_67 = L_66;
		String_t* L_68 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_67);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_67, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_68, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_69 = L_67;
		NullCheck(L_69);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_69, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral17A5AD13F3B52AA01A6CBB2F9F414BE34E8AB9A9, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_70 = L_69;
		NullCheck(L_70);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_70, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteral6ACA126350941A62677533ACC01C769BF2C144F3, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_64);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_64, _stringLiteralECE395CDAEB0ECDBD5A23AA77D43B5263126619C, L_70, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_71 = L_64;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_72 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_72);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_72, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_73 = L_72;
		NullCheck(L_73);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_73, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralC6083E3193B2C42160931E36C8DF7C83A18368C1, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_74 = L_73;
		String_t* L_75 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_74);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_74, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_75, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_76 = L_74;
		NullCheck(L_76);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_76, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_77 = L_76;
		NullCheck(L_77);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_77, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralD4A60C78B1E543FC99764C33AEB77BCFE4231207, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_71);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_71, _stringLiteral2F3DB030C8BDF0926D14123D900497AE12BB3AD1, L_77, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_78 = L_71;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_79 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_79);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_79, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_80 = L_79;
		NullCheck(L_80);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_80, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteral6C2259C1F5D9911CDDA502DB9262E503845291FD, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_81 = L_80;
		String_t* L_82 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_81);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_81, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_82, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_83 = L_81;
		NullCheck(L_83);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_83, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral77EE5971434CDE6F74A1DAE44D94954E1624D77C, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_84 = L_83;
		NullCheck(L_84);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_84, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteral459CA1A783220A8007E9DD248A257FE22F59A157, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_78);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_78, _stringLiteral2F59628CFCF68C1C363F48F1FB91CF30C77F0D31, L_84, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_85 = L_78;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_86 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_86);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_86, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_87 = L_86;
		NullCheck(L_87);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_87, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteral7A27C2F288438DD1823D8FA78BB3A4F69453087B, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_88 = L_87;
		String_t* L_89 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_88);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_88, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_89, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_90 = L_88;
		NullCheck(L_90);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_90, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteralA3DC94CE2E4ADB08254413E0E3386625CB614D76, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_91 = L_90;
		NullCheck(L_91);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_91, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralC982AFF5E079BBDA3580BE37ECC91BC71135F59E, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_85);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_85, _stringLiteral62DF8B883A7680DEF02C157C7AF38B4A3E89D8BF, L_91, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_92 = L_85;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_93 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_93);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_93, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_94 = L_93;
		NullCheck(L_94);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_94, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralB6814B83C0CAFFAC7308A42994ACCC03CA22FCCE, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_95 = L_94;
		String_t* L_96 = ((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___modelName_1;
		NullCheck(L_95);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_95, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_96, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_97 = L_95;
		NullCheck(L_97);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_97, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral541ADAD93719A7753AA265CAD6BA6276D2686025, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_98 = L_97;
		NullCheck(L_98);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_98, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteral6F5431EF8CF17B42351F85D399751058873E7E92, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_92);
		Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_92, _stringLiteral0DF52374CCE8AA942D55172FF34E782E0277521F, L_98, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___apps_2 = L_92;
		Il2CppCodeGenWriteBarrier((void**)(&((AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tC1F47D2993C2AB7C0BCDDECF93AC44865AE9745E_il2cpp_TypeInfo_var))->___apps_2), (void*)L_92);
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
// Meta.WitAi.Configuration.WitRuntimeConfiguration Oculus.Voice.AppVoiceExperience::get_RuntimeConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* AppVoiceExperience_get_RuntimeConfiguration_mD24F0877CFC8E672244CFF3BD79930F04401A704 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	{
		// get => witRuntimeConfiguration;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_0 = __this->___witRuntimeConfiguration_10;
		return L_0;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::set_RuntimeConfiguration(Meta.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_set_RuntimeConfiguration_m4E8B92D39EEFAF93F88B3BF1DC3E2671D524A2C4 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* ___value0, const RuntimeMethod* method) 
{
	{
		// set => witRuntimeConfiguration = value;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_0 = ___value0;
		__this->___witRuntimeConfiguration_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___witRuntimeConfiguration_10), (void*)L_0);
		return;
	}
}
// Meta.WitAi.Data.Configuration.WitConfiguration Oculus.Voice.AppVoiceExperience::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* AppVoiceExperience_get_Configuration_mF6C423D86759090BEE4079D3D643A3A171B3B301 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* G_B2_0 = NULL;
	WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* G_B1_0 = NULL;
	{
		// public WitConfiguration Configuration => witRuntimeConfiguration?.witConfiguration;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_0 = __this->___witRuntimeConfiguration_10;
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
// System.String Oculus.Voice.AppVoiceExperience::get_PACKAGE_VERSION()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppVoiceExperience_get_PACKAGE_VERSION_m0EF7F1AE8B1BBBF16C840F9DD21EB24BBF4E3059 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string PACKAGE_VERSION => VoiceSDKConstants.SdkVersion;
		il2cpp_codegen_runtime_class_init_inline(VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = VoiceSDKConstants_get_SdkVersion_mF133D85DC043FBC29879693987576EA9D6371F28(NULL);
		return L_0;
	}
}
// System.Boolean Oculus.Voice.AppVoiceExperience::get_Initialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_Initialized_m97ED7179C4F41C4595B0047A0EC983B5EC186DFA (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	{
		// private bool Initialized => null != voiceServiceImpl;
		RuntimeObject* L_0 = __this->___voiceServiceImpl_14;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::add_OnInitialized(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_add_OnInitialized_mC2B8CACF8362D1AEE7515A8EB9A2812E1F52312D (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnInitialized_16;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnInitialized_16);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::remove_OnInitialized(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_remove_OnInitialized_mEBE79F6EB2DCA1CB336E7AF7D41FEAB233610B9E (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnInitialized_16;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnInitialized_16);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Oculus.Voice.AppVoiceExperience::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_Active_m390651D974B07FC7986545D805DEDEDDC4673895 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceActivationHandler_t92524B948032EDC913767859D29B5EFDD7438B86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Active => base.Active || (null != voiceServiceImpl && voiceServiceImpl.Active);
		bool L_0;
		L_0 = VoiceService_get_Active_mD6E97667C28BEB1912993FF96DC0F21801648AA9(__this, NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = __this->___voiceServiceImpl_14;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = __this->___voiceServiceImpl_14;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Meta.WitAi.IVoiceActivationHandler::get_Active() */, IVoiceActivationHandler_t92524B948032EDC913767859D29B5EFDD7438B86_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}

IL_001c:
	{
		return (bool)0;
	}

IL_001e:
	{
		return (bool)1;
	}
}
// System.Boolean Oculus.Voice.AppVoiceExperience::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_IsRequestActive_mB4603059CD8A43ED20ECBF5B80A98CB157B1DA4E (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool IsRequestActive => base.IsRequestActive || (null != voiceServiceImpl && voiceServiceImpl.IsRequestActive);
		bool L_0;
		L_0 = VoiceService_get_IsRequestActive_mE92593B428C6B1F08856E512D54ACA8181809E0E(__this, NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = __this->___voiceServiceImpl_14;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = __this->___voiceServiceImpl_14;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Meta.WitAi.IVoiceService::get_IsRequestActive() */, IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}

IL_001c:
	{
		return (bool)0;
	}

IL_001e:
	{
		return (bool)1;
	}
}
// Meta.WitAi.Interfaces.ITranscriptionProvider Oculus.Voice.AppVoiceExperience::get_TranscriptionProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppVoiceExperience_get_TranscriptionProvider_m1A359D43DBBC071FB402D98F88905D5D8964FAD0 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// get => voiceServiceImpl?.TranscriptionProvider;
		RuntimeObject* L_0 = __this->___voiceServiceImpl_14;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(7 /* Meta.WitAi.Interfaces.ITranscriptionProvider Meta.WitAi.IVoiceService::get_TranscriptionProvider() */, IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var, G_B2_0);
		return L_2;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::set_TranscriptionProvider(Meta.WitAi.Interfaces.ITranscriptionProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_set_TranscriptionProvider_m45DDA31BF5C105AD3D27C80A2FC71EB1B3ED383D (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (voiceServiceImpl != null)
		RuntimeObject* L_0 = __this->___voiceServiceImpl_14;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// voiceServiceImpl.TranscriptionProvider = value;
		RuntimeObject* L_1 = __this->___voiceServiceImpl_14;
		RuntimeObject* L_2 = ___value0;
		NullCheck(L_1);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(8 /* System.Void Meta.WitAi.IVoiceService::set_TranscriptionProvider(Meta.WitAi.Interfaces.ITranscriptionProvider) */, IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Boolean Oculus.Voice.AppVoiceExperience::get_MicActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_MicActive_mD58A0B1D1B4268E01257A19AE9DADF263812426E (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool MicActive => null != voiceServiceImpl && voiceServiceImpl.MicActive;
		RuntimeObject* L_0 = __this->___voiceServiceImpl_14;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->___voiceServiceImpl_14;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Meta.WitAi.IVoiceService::get_MicActive() */, IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean Oculus.Voice.AppVoiceExperience::get_ShouldSendMicData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_ShouldSendMicData_mC0CD3592B73CE03B2517F57D0BFDACBD5126728C (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	{
		// protected override bool ShouldSendMicData => witRuntimeConfiguration.sendAudioToWit ||
		//                                           null == TranscriptionProvider;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_0 = __this->___witRuntimeConfiguration_10;
		NullCheck(L_0);
		bool L_1 = L_0->___sendAudioToWit_9;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(28 /* Meta.WitAi.Interfaces.ITranscriptionProvider Meta.WitAi.VoiceService::get_TranscriptionProvider() */, __this);
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_0017:
	{
		return (bool)1;
	}
}
// System.Boolean Oculus.Voice.AppVoiceExperience::get_HasPlatformIntegrations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_HasPlatformIntegrations_mC13C22A105847FA22FD88995434D40766EB16CC2 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool HasPlatformIntegrations => usePlatformServices && voiceServiceImpl is VoiceSDKImpl;
		bool L_0 = __this->___usePlatformServices_11;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = __this->___voiceServiceImpl_14;
		return (bool)((!(((RuntimeObject*)(VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A*)((VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A*)IsInstClass((RuntimeObject*)L_1, VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Boolean Oculus.Voice.AppVoiceExperience::get_EnableConsoleLogging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_EnableConsoleLogging_mA4FAB753C46C4F0D7291C255D8F5C4E3152EC151 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	{
		// public bool EnableConsoleLogging => enableConsoleLogging;
		bool L_0 = __this->___enableConsoleLogging_12;
		return L_0;
	}
}
// System.Boolean Oculus.Voice.AppVoiceExperience::get_UsePlatformIntegrations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_UsePlatformIntegrations_mC70DA709801F2D03B7CE13BC18546D37AFB79050 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	{
		// get => usePlatformServices;
		bool L_0 = __this->___usePlatformServices_11;
		return L_0;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::set_UsePlatformIntegrations(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_set_UsePlatformIntegrations_m3D8CCAC60558252702847ACDD0E664D66403F7D9 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45A6A359B020506529C26653998F41906D297BD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62B962D58D79AB658276228C081F11858A78D27B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA10964CC93D7E488FED7249F5076B722443D1789);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B5_0 = NULL;
	{
		// if (usePlatformServices != value || HasPlatformIntegrations != value)
		bool L_0 = __this->___usePlatformServices_11;
		bool L_1 = ___value0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		bool L_2;
		L_2 = AppVoiceExperience_get_HasPlatformIntegrations_mC13C22A105847FA22FD88995434D40766EB16CC2(__this, NULL);
		bool L_3 = ___value0;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0042;
		}
	}

IL_0012:
	{
		// usePlatformServices = value;
		bool L_4 = ___value0;
		__this->___usePlatformServices_11 = L_4;
		// Debug.Log($"{(usePlatformServices ? "Enabling" : "Disabling")} platform integration.");
		bool L_5 = __this->___usePlatformServices_11;
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		G_B5_0 = _stringLiteral45A6A359B020506529C26653998F41906D297BD2;
		goto IL_002d;
	}

IL_0028:
	{
		G_B5_0 = _stringLiteralA10964CC93D7E488FED7249F5076B722443D1789;
	}

IL_002d:
	{
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B5_0, _stringLiteral62B962D58D79AB658276228C081F11858A78D27B, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// InitVoiceSDK();
		AppVoiceExperience_InitVoiceSDK_m32D292065C10F12806D615E70A52C3DE51A623B5(__this, NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Boolean Oculus.Voice.AppVoiceExperience::CanSend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_CanSend_m30FAC137B30C1DD09ACEF1C095D86EC9278FF6CC (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return base.CanSend() && null != voiceServiceImpl && voiceServiceImpl.CanSend();
		bool L_0;
		L_0 = VoiceService_CanSend_m00454E63A849F02C6499AEB930A24A3FFAAD3C38(__this, NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = __this->___voiceServiceImpl_14;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = __this->___voiceServiceImpl_14;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(10 /* System.Boolean Meta.WitAi.IVoiceService::CanSend() */, IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// Meta.WitAi.Requests.VoiceServiceRequest Oculus.Voice.AppVoiceExperience::Activate(System.String,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* AppVoiceExperience_Activate_mAF2F5FC37554A465EA731A103915D82D51F8B526 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, String_t* ___text0, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___requestOptions1, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___requestEvents2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceActivationHandler_t92524B948032EDC913767859D29B5EFDD7438B86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanSend())
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean Meta.WitAi.VoiceService::CanSend() */, __this);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// return voiceServiceImpl.Activate(text, requestOptions, requestEvents);
		RuntimeObject* L_1 = __this->___voiceServiceImpl_14;
		String_t* L_2 = ___text0;
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_3 = ___requestOptions1;
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_4 = ___requestEvents2;
		NullCheck(L_1);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_5;
		L_5 = InterfaceFuncInvoker3< VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536*, String_t*, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483*, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* >::Invoke(1 /* Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.IVoiceActivationHandler::Activate(System.String,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents) */, IVoiceActivationHandler_t92524B948032EDC913767859D29B5EFDD7438B86_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		return L_5;
	}

IL_0017:
	{
		// return null;
		return (VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536*)NULL;
	}
}
// System.Boolean Oculus.Voice.AppVoiceExperience::CanActivateAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_CanActivateAudio_mF382675919D244F976FEC1AF0E8E3A6A10CA9B69 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return base.CanActivateAudio() && voiceServiceImpl.CanActivateAudio();
		bool L_0;
		L_0 = VoiceService_CanActivateAudio_m408AADD41524AB159447D58C57AB99ABBDFFE7D0(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->___voiceServiceImpl_14;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean Meta.WitAi.IVoiceService::CanActivateAudio() */, IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.String Oculus.Voice.AppVoiceExperience::GetActivateAudioError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppVoiceExperience_GetActivateAudioError_m45B25FE2B83BE21022FE033444C7A04C326DE53C (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82938739DC25500B2FDF6A71BF7855A06D9CE065);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!HasPlatformIntegrations && !AudioBuffer.Instance.IsInputAvailable)
		bool L_0;
		L_0 = AppVoiceExperience_get_HasPlatformIntegrations_mC13C22A105847FA22FD88995434D40766EB16CC2(__this, NULL);
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* L_1;
		L_1 = AudioBuffer_get_Instance_m4814D13CF2DDD846128EB95989EB2C764FFF48C1(NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = AudioBuffer_get_IsInputAvailable_mBA7ADDFFF4DB7E3F22F174203829BC5A2674370D(L_1, NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return "No Microphone(s)/recording devices found.  You will be unable to capture audio on this device.";
		return _stringLiteral82938739DC25500B2FDF6A71BF7855A06D9CE065;
	}

IL_001a:
	{
		// return string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_3;
	}
}
// Meta.WitAi.Requests.VoiceServiceRequest Oculus.Voice.AppVoiceExperience::Activate(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* AppVoiceExperience_Activate_mC7CDBAA2A4B75E7FCAD9C6B3725EB33E0AD7B30A (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___requestOptions0, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___requestEvents1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceActivationHandler_t92524B948032EDC913767859D29B5EFDD7438B86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanActivateAudio() && CanSend())
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(41 /* System.Boolean Meta.WitAi.VoiceService::CanActivateAudio() */, __this);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean Meta.WitAi.VoiceService::CanSend() */, __this);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// return voiceServiceImpl.Activate(requestOptions, requestEvents);
		RuntimeObject* L_2 = __this->___voiceServiceImpl_14;
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_3 = ___requestOptions0;
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_4 = ___requestEvents1;
		NullCheck(L_2);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_5;
		L_5 = InterfaceFuncInvoker2< VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536*, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483*, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* >::Invoke(2 /* Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.IVoiceActivationHandler::Activate(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents) */, IVoiceActivationHandler_t92524B948032EDC913767859D29B5EFDD7438B86_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		return L_5;
	}

IL_001e:
	{
		// return null;
		return (VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536*)NULL;
	}
}
// Meta.WitAi.Requests.VoiceServiceRequest Oculus.Voice.AppVoiceExperience::ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* AppVoiceExperience_ActivateImmediately_m034EC2E0239503881C7C0310ACC212C24728A58C (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___requestOptions0, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___requestEvents1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceActivationHandler_t92524B948032EDC913767859D29B5EFDD7438B86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanActivateAudio() && CanSend())
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(41 /* System.Boolean Meta.WitAi.VoiceService::CanActivateAudio() */, __this);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean Meta.WitAi.VoiceService::CanSend() */, __this);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// return voiceServiceImpl.ActivateImmediately(requestOptions, requestEvents);
		RuntimeObject* L_2 = __this->___voiceServiceImpl_14;
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_3 = ___requestOptions0;
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_4 = ___requestEvents1;
		NullCheck(L_2);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_5;
		L_5 = InterfaceFuncInvoker2< VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536*, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483*, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* >::Invoke(3 /* Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.IVoiceActivationHandler::ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents) */, IVoiceActivationHandler_t92524B948032EDC913767859D29B5EFDD7438B86_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		return L_5;
	}

IL_001e:
	{
		// return null;
		return (VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536*)NULL;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_Deactivate_m06734C8C4D6AA23BC95D5ECD09AB569245B32C7E (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceActivationHandler_t92524B948032EDC913767859D29B5EFDD7438B86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceServiceImpl.Deactivate();
		RuntimeObject* L_0 = __this->___voiceServiceImpl_14;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Meta.WitAi.IVoiceActivationHandler::Deactivate() */, IVoiceActivationHandler_t92524B948032EDC913767859D29B5EFDD7438B86_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::DeactivateAndAbortRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_DeactivateAndAbortRequest_m18E7597A4EE81B4BAE32C93DBA64130EB5219FED (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceActivationHandler_t92524B948032EDC913767859D29B5EFDD7438B86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceServiceImpl.DeactivateAndAbortRequest();
		RuntimeObject* L_0 = __this->___voiceServiceImpl_14;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Meta.WitAi.IVoiceActivationHandler::DeactivateAndAbortRequest() */, IVoiceActivationHandler_t92524B948032EDC913767859D29B5EFDD7438B86_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::InitVoiceSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_InitVoiceSDK_m32D292065C10F12806D615E70A52C3DE51A623B5 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_U3CInitVoiceSDKU3Eb__44_0_mA9C415566EEC602B8D1049A7DED086FC5AE3EA0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BCDDF342A73CF6C15DBCBD80233EF8B1AD281CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1820E647BC43B12E095BB83CACC06DCCF7C816B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0973000AFB7A33EB6108E555F37DE0D4155B187);
		s_Il2CppMethodInitialized = true;
	}
	VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993* V_0 = NULL;
	Exception_t* V_1 = NULL;
	VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* V_2 = NULL;
	Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* G_B17_0 = NULL;
	RuntimeObject* G_B17_1 = NULL;
	WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* G_B16_0 = NULL;
	RuntimeObject* G_B16_1 = NULL;
	String_t* G_B20_0 = NULL;
	RuntimeObject* G_B20_1 = NULL;
	WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* G_B19_0 = NULL;
	RuntimeObject* G_B19_1 = NULL;
	WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* G_B18_0 = NULL;
	RuntimeObject* G_B18_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B22_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B21_0 = NULL;
	{
		// if (string.IsNullOrEmpty(PACKAGE_VERSION))
		String_t* L_0;
		L_0 = AppVoiceExperience_get_PACKAGE_VERSION_m0EF7F1AE8B1BBBF16C840F9DD21EB24BBF4E3059(NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// VLog.E("No SDK Version Set");
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(_stringLiteral0BCDDF342A73CF6C15DBCBD80233EF8B1AD281CD, NULL);
	}

IL_0016:
	{
		// if (!UsePlatformIntegrations)
		bool L_2;
		L_2 = AppVoiceExperience_get_UsePlatformIntegrations_mC70DA709801F2D03B7CE13BC18546D37AFB79050_inline(__this, NULL);
		if (L_2)
		{
			goto IL_0072;
		}
	}
	{
		// if (voiceServiceImpl is VoiceSDKImpl)
		RuntimeObject* L_3 = __this->___voiceServiceImpl_14;
		if (!((VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A*)IsInstClass((RuntimeObject*)L_3, VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A_il2cpp_TypeInfo_var)))
		{
			goto IL_003b;
		}
	}
	{
		// ((VoiceSDKImpl) voiceServiceImpl).Disconnect();
		RuntimeObject* L_4 = __this->___voiceServiceImpl_14;
		NullCheck(((VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A*)CastclassClass((RuntimeObject*)L_4, VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A_il2cpp_TypeInfo_var)));
		VirtualActionInvoker0::Invoke(5 /* System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Bindings.Android.VoiceSDKBinding>::Disconnect() */, ((VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A*)CastclassClass((RuntimeObject*)L_4, VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A_il2cpp_TypeInfo_var)));
	}

IL_003b:
	{
		// if (voiceSDKLoggerImpl is VoiceSDKPlatformLoggerImpl)
		RuntimeObject* L_5 = __this->___voiceSDKLoggerImpl_15;
		if (!((VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993*)IsInstClass((RuntimeObject*)L_5, VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993_il2cpp_TypeInfo_var)))
		{
			goto IL_0072;
		}
	}
	try
	{// begin try (depth: 1)
		// ((VoiceSDKPlatformLoggerImpl)voiceSDKLoggerImpl).Disconnect();
		RuntimeObject* L_6 = __this->___voiceSDKLoggerImpl_15;
		NullCheck(((VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993*)CastclassClass((RuntimeObject*)L_6, VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993_il2cpp_TypeInfo_var)));
		VirtualActionInvoker0::Invoke(5 /* System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKLoggerBinding>::Disconnect() */, ((VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993*)CastclassClass((RuntimeObject*)L_6, VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993_il2cpp_TypeInfo_var)));
		// }
		goto IL_0072;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005a;
		}
		throw e;
	}

CATCH_005a:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// VLog.E($"Disconnection error: {e.Message}");
		Exception_t* L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_7);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral455532645A36B471DC93D48F55B5E5617AE61927)), L_8, NULL);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_9, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0072;
	}// end catch (depth: 1)

IL_0072:
	{
		// var loggerImpl = new VoiceSDKPlatformLoggerImpl();
		VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993* L_10 = (VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993*)il2cpp_codegen_object_new(VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		VoiceSDKPlatformLoggerImpl__ctor_mB98388D0B9F59FF41DA4D886AF2BE550F914E2DF(L_10, NULL);
		V_0 = L_10;
		// loggerImpl.Connect(PACKAGE_VERSION);
		VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993* L_11 = V_0;
		String_t* L_12;
		L_12 = AppVoiceExperience_get_PACKAGE_VERSION_m0EF7F1AE8B1BBBF16C840F9DD21EB24BBF4E3059(NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(4 /* System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKLoggerBinding>::Connect(System.String) */, L_11, L_12);
		// voiceSDKLoggerImpl = loggerImpl;
		VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993* L_13 = V_0;
		__this->___voiceSDKLoggerImpl_15 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voiceSDKLoggerImpl_15), (void*)L_13);
		// if (UsePlatformIntegrations)
		bool L_14;
		L_14 = AppVoiceExperience_get_UsePlatformIntegrations_mC70DA709801F2D03B7CE13BC18546D37AFB79050_inline(__this, NULL);
		if (!L_14)
		{
			goto IL_014b;
		}
	}
	{
		// Debug.Log("Checking platform capabilities...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE0973000AFB7A33EB6108E555F37DE0D4155B187, NULL);
		// var platformImpl = new VoiceSDKImpl(this);
		VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* L_15 = (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A*)il2cpp_codegen_object_new(VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		VoiceSDKImpl__ctor_mD8291C1EFF4C31FB498CF4322A2AFE3F6FB854BF(L_15, __this, NULL);
		V_2 = L_15;
		// platformImpl.OnServiceNotAvailableEvent += () => RevertToWitUnity();
		VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* L_16 = V_2;
		VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* L_17 = L_16;
		NullCheck(L_17);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_18 = L_17->___OnServiceNotAvailableEvent_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_19 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_19, __this, (intptr_t)((void*)AppVoiceExperience_U3CInitVoiceSDKU3Eb__44_0_mA9C415566EEC602B8D1049A7DED086FC5AE3EA0D_RuntimeMethod_var), NULL);
		Delegate_t* L_20;
		L_20 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_18, L_19, NULL);
		NullCheck(L_17);
		L_17->___OnServiceNotAvailableEvent_4 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_20, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___OnServiceNotAvailableEvent_4), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_20, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		// platformImpl.Connect(PACKAGE_VERSION);
		VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* L_21 = V_2;
		String_t* L_22;
		L_22 = AppVoiceExperience_get_PACKAGE_VERSION_m0EF7F1AE8B1BBBF16C840F9DD21EB24BBF4E3059(NULL);
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(4 /* System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Bindings.Android.VoiceSDKBinding>::Connect(System.String) */, L_21, L_22);
		// platformImpl.SetRuntimeConfiguration(RuntimeConfiguration);
		VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* L_23 = V_2;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_24;
		L_24 = AppVoiceExperience_get_RuntimeConfiguration_mD24F0877CFC8E672244CFF3BD79930F04401A704_inline(__this, NULL);
		NullCheck(L_23);
		VoiceSDKImpl_SetRuntimeConfiguration_mC6E588389CBBAE86514843C164EE79FA972A6945(L_23, L_24, NULL);
		// if (platformImpl.PlatformSupportsWit)
		VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* L_25 = V_2;
		NullCheck(L_25);
		bool L_26;
		L_26 = VoiceSDKImpl_get_PlatformSupportsWit_m372E01C4FEBDC063566D099A673EAFC2702A197E(L_25, NULL);
		if (!L_26)
		{
			goto IL_0139;
		}
	}
	{
		// voiceServiceImpl = platformImpl;
		VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* L_27 = V_2;
		__this->___voiceServiceImpl_14 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voiceServiceImpl_14), (void*)L_27);
		// if (voiceServiceImpl is Wit wit)
		RuntimeObject* L_28 = __this->___voiceServiceImpl_14;
		V_3 = ((Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81*)IsInstClass((RuntimeObject*)L_28, Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81_il2cpp_TypeInfo_var));
		Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81* L_29 = V_3;
		if (!L_29)
		{
			goto IL_0109;
		}
	}
	{
		// wit.RuntimeConfiguration = witRuntimeConfiguration;
		Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81* L_30 = V_3;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_31 = __this->___witRuntimeConfiguration_10;
		NullCheck(L_30);
		Wit_set_RuntimeConfiguration_m187D7E162FC1D1EC0C02D33202EE2B5FD2E8C8DB_inline(L_30, L_31, NULL);
	}

IL_0109:
	{
		// voiceServiceImpl.VoiceEvents = VoiceEvents;
		RuntimeObject* L_32 = __this->___voiceServiceImpl_14;
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_33;
		L_33 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_32);
		InterfaceActionInvoker1< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(4 /* System.Void Meta.WitAi.IVoiceService::set_VoiceEvents(Meta.WitAi.Events.VoiceEvents) */, IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var, L_32, L_33);
		// voiceServiceImpl.TelemetryEvents = TelemetryEvents;
		RuntimeObject* L_34 = __this->___voiceServiceImpl_14;
		TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* L_35;
		L_35 = VirtualFuncInvoker0< TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* >::Invoke(33 /* Meta.WitAi.Events.TelemetryEvents Meta.WitAi.VoiceService::get_TelemetryEvents() */, __this);
		NullCheck(L_34);
		InterfaceActionInvoker1< TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* >::Invoke(6 /* System.Void Meta.WitAi.IVoiceService::set_TelemetryEvents(Meta.WitAi.Events.TelemetryEvents) */, IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var, L_34, L_35);
		// voiceSDKLoggerImpl.IsUsingPlatformIntegration = true;
		RuntimeObject* L_36 = __this->___voiceSDKLoggerImpl_15;
		NullCheck(L_36);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::set_IsUsingPlatformIntegration(System.Boolean) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_36, (bool)1);
		goto IL_0151;
	}

IL_0139:
	{
		// Debug.Log("Platform registration indicated platform support is not currently available.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1820E647BC43B12E095BB83CACC06DCCF7C816B9, NULL);
		// RevertToWitUnity();
		AppVoiceExperience_RevertToWitUnity_m346BC3947D7A11513EFB5124475AABAD5346D7C5(__this, NULL);
		goto IL_0151;
	}

IL_014b:
	{
		// RevertToWitUnity();
		AppVoiceExperience_RevertToWitUnity_m346BC3947D7A11513EFB5124475AABAD5346D7C5(__this, NULL);
	}

IL_0151:
	{
		// voiceSDKLoggerImpl.WitApplication = RuntimeConfiguration?.witConfiguration?.GetLoggerAppId();
		RuntimeObject* L_37 = __this->___voiceSDKLoggerImpl_15;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_38;
		L_38 = AppVoiceExperience_get_RuntimeConfiguration_mD24F0877CFC8E672244CFF3BD79930F04401A704_inline(__this, NULL);
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_39 = L_38;
		G_B16_0 = L_39;
		G_B16_1 = L_37;
		if (L_39)
		{
			G_B17_0 = L_39;
			G_B17_1 = L_37;
			goto IL_0164;
		}
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B16_1;
		goto IL_0175;
	}

IL_0164:
	{
		NullCheck(G_B17_0);
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_40 = G_B17_0->___witConfiguration_0;
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_41 = L_40;
		G_B18_0 = L_41;
		G_B18_1 = G_B17_1;
		if (L_41)
		{
			G_B19_0 = L_41;
			G_B19_1 = G_B17_1;
			goto IL_0170;
		}
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		goto IL_0175;
	}

IL_0170:
	{
		NullCheck(G_B19_0);
		String_t* L_42;
		L_42 = WitConfiguration_GetLoggerAppId_m320C33D2DC3EF5956C053F588C67CF7154F04728(G_B19_0, NULL);
		G_B20_0 = L_42;
		G_B20_1 = G_B19_1;
	}

IL_0175:
	{
		NullCheck(G_B20_1);
		InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::set_WitApplication(System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, G_B20_1, G_B20_0);
		// voiceSDKLoggerImpl.ShouldLogToConsole = EnableConsoleLogging;
		RuntimeObject* L_43 = __this->___voiceSDKLoggerImpl_15;
		bool L_44;
		L_44 = AppVoiceExperience_get_EnableConsoleLogging_mA4FAB753C46C4F0D7291C255D8F5C4E3152EC151_inline(__this, NULL);
		NullCheck(L_43);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::set_ShouldLogToConsole(System.Boolean) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_43, L_44);
		// OnInitialized?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_45 = __this->___OnInitialized_16;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_46 = L_45;
		G_B21_0 = L_46;
		if (L_46)
		{
			G_B22_0 = L_46;
			goto IL_0196;
		}
	}
	{
		return;
	}

IL_0196:
	{
		NullCheck(G_B22_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B22_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::RevertToWitUnity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_RevertToWitUnity_m346BC3947D7A11513EFB5124475AABAD5346D7C5 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisWit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81_m6AB221606184DEBB0DE27D756243BA92513E5C93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisWit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81_m161213BAE1F339C97C4E3AEBD106B6A14F7850C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81* V_0 = NULL;
	Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81* V_1 = NULL;
	{
		// Wit w = GetComponent<Wit>();
		Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81* L_0;
		L_0 = Component_GetComponent_TisWit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81_m6AB221606184DEBB0DE27D756243BA92513E5C93(__this, Component_GetComponent_TisWit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81_m6AB221606184DEBB0DE27D756243BA92513E5C93_RuntimeMethod_var);
		V_0 = L_0;
		// if (null == w)
		Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_1, NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// w = gameObject.AddComponent<Wit>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81* L_4;
		L_4 = GameObject_AddComponent_TisWit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81_m161213BAE1F339C97C4E3AEBD106B6A14F7850C8(L_3, GameObject_AddComponent_TisWit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81_m161213BAE1F339C97C4E3AEBD106B6A14F7850C8_RuntimeMethod_var);
		V_0 = L_4;
		// w.hideFlags = HideFlags.HideInInspector;
		Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81* L_5 = V_0;
		NullCheck(L_5);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_5, 2, NULL);
	}

IL_0023:
	{
		// voiceServiceImpl = w;
		Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81* L_6 = V_0;
		__this->___voiceServiceImpl_14 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voiceServiceImpl_14), (void*)L_6);
		// if (voiceServiceImpl is Wit wit)
		RuntimeObject* L_7 = __this->___voiceServiceImpl_14;
		V_1 = ((Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81*)IsInstClass((RuntimeObject*)L_7, Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81_il2cpp_TypeInfo_var));
		Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		// wit.RuntimeConfiguration = witRuntimeConfiguration;
		Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81* L_9 = V_1;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_10 = __this->___witRuntimeConfiguration_10;
		NullCheck(L_9);
		Wit_set_RuntimeConfiguration_m187D7E162FC1D1EC0C02D33202EE2B5FD2E8C8DB_inline(L_9, L_10, NULL);
	}

IL_0045:
	{
		// voiceServiceImpl.VoiceEvents = VoiceEvents;
		RuntimeObject* L_11 = __this->___voiceServiceImpl_14;
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_12;
		L_12 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_11);
		InterfaceActionInvoker1< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(4 /* System.Void Meta.WitAi.IVoiceService::set_VoiceEvents(Meta.WitAi.Events.VoiceEvents) */, IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var, L_11, L_12);
		// voiceServiceImpl.TelemetryEvents = TelemetryEvents;
		RuntimeObject* L_13 = __this->___voiceServiceImpl_14;
		TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* L_14;
		L_14 = VirtualFuncInvoker0< TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* >::Invoke(33 /* Meta.WitAi.Events.TelemetryEvents Meta.WitAi.VoiceService::get_TelemetryEvents() */, __this);
		NullCheck(L_13);
		InterfaceActionInvoker1< TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* >::Invoke(6 /* System.Void Meta.WitAi.IVoiceService::set_TelemetryEvents(Meta.WitAi.Events.TelemetryEvents) */, IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var, L_13, L_14);
		// voiceSDKLoggerImpl.IsUsingPlatformIntegration = false;
		RuntimeObject* L_15 = __this->___voiceSDKLoggerImpl_15;
		NullCheck(L_15);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::set_IsUsingPlatformIntegration(System.Boolean) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_15, (bool)0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_OnEnable_mFA904DED2E6436FA7D1223D4B3F0B4A25854188A (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnAudioDurationTrackerFinished_m8A674E70657144510C37DDCB407F8448E5D2A046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnFullTranscription_mD136FC61E33844D716993A0401D9C893111492B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnMicDataSent_mD8EB7402399CBD6160E0F6847E50D46DD401445F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnMinimumWakeThresholdHit_m0E993681E61A11C64C7AF5E0CEBADBD4351C4823_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnPartialTranscription_m43DDBC74AA40D0415607BDBC16E385FA71083529_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnRequestComplete_m87274E71C728B608E296BBAEB45628AB7CD6374A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnRequestInit_m0E6D46242FC24941EFB5D01CA31513F3A7193BDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnSend_mADA1EFAAA5CF2C6F1370EF6AAE214D2BF1D1278E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnStartedListening_m1B032B403E9F607D166D9B275C6B2790292EEB65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnStoppedListeningDueToDeactivation_mEA47204E2E074720C40644911F21E8ED9D24B3AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnStoppedListeningDueToInactivity_m62CBE21E8203BE6EAA39E318BEFA46A2D59283A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnStoppedListeningDueToTimeout_m9AF658CBBC99740BB27872ACE974E4CA1A202682_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnStoppedListening_m19CF3A2B9878EE39D16B8CE4F428B93217109BAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnWitResponseListener_mC7B073E49C3EDBE342A667792EAEEE835652C9D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformVoiceService_tF80331031D071E67BDCF1AD27AFB37F433B8CD52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tD1BCB3DC65C3130393D8FC4FE131FDFBBBE54CE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m03EDE8CB25D09EA569869E869DC2554E4D9E2F55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_AddListener_m762AA5B1470E71CD800C81D865CA790FB8390D83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B8_0 = NULL;
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B7_0 = NULL;
	WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* G_B11_0 = NULL;
	WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* G_B10_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B14_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B13_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B17_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B16_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B20_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B19_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B23_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B22_0 = NULL;
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B26_0 = NULL;
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B25_0 = NULL;
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* G_B29_0 = NULL;
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* G_B28_0 = NULL;
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* G_B32_0 = NULL;
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* G_B31_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B35_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B34_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B38_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B37_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B41_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B40_0 = NULL;
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B44_0 = NULL;
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B43_0 = NULL;
	AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647* G_B47_0 = NULL;
	AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647* G_B46_0 = NULL;
	{
		// base.OnEnable();
		VoiceService_OnEnable_m4D54C869C0EE72FA158BFA17973220A4FD69A219(__this, NULL);
		// if (MicPermissionsManager.HasMicPermission())
		bool L_0;
		L_0 = MicPermissionsManager_HasMicPermission_m87B33F0E6CFB654B2DF0044F2541297F9454A17D(NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// InitVoiceSDK();
		AppVoiceExperience_InitVoiceSDK_m32D292065C10F12806D615E70A52C3DE51A623B5(__this, NULL);
		goto IL_001b;
	}

IL_0015:
	{
		// MicPermissionsManager.RequestMicPermission();
		MicPermissionsManager_RequestMicPermission_m8D289CCF5521DEBB59DD086F1EB76B5BD8F4F430((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL, NULL);
	}

IL_001b:
	{
		// platformService?.SetRuntimeConfiguration(witRuntimeConfiguration);
		RuntimeObject* L_1 = __this->___platformService_13;
		RuntimeObject* L_2 = L_1;
		G_B4_0 = L_2;
		if (L_2)
		{
			G_B5_0 = L_2;
			goto IL_0027;
		}
	}
	{
		goto IL_0032;
	}

IL_0027:
	{
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_3 = __this->___witRuntimeConfiguration_10;
		NullCheck(G_B5_0);
		InterfaceActionInvoker1< WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* >::Invoke(1 /* System.Void Oculus.Voice.Interfaces.IPlatformVoiceService::SetRuntimeConfiguration(Meta.WitAi.Configuration.WitRuntimeConfiguration) */, IPlatformVoiceService_tF80331031D071E67BDCF1AD27AFB37F433B8CD52_il2cpp_TypeInfo_var, G_B5_0, L_3);
	}

IL_0032:
	{
		// VoiceEvents.OnRequestInitialized?.AddListener(OnRequestInit);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_4;
		L_4 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_4);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_5;
		L_5 = SpeechEvents_get_OnRequestInitialized_mDF97BA996E91AC80EDEFA571B39D2ECD09C97A09_inline(L_4, NULL);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_6 = L_5;
		G_B7_0 = L_6;
		if (L_6)
		{
			G_B8_0 = L_6;
			goto IL_0043;
		}
	}
	{
		goto IL_0054;
	}

IL_0043:
	{
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_7 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_7, __this, (intptr_t)((void*)AppVoiceExperience_OnRequestInit_m0E6D46242FC24941EFB5D01CA31513F3A7193BDD_RuntimeMethod_var), NULL);
		NullCheck(G_B8_0);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(G_B8_0, L_7, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
	}

IL_0054:
	{
		// VoiceEvents.OnResponse?.AddListener(OnWitResponseListener);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_8;
		L_8 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_8);
		WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* L_9;
		L_9 = SpeechEvents_get_OnResponse_m35A479475B9CCCE66CDA4028A0A6AE6343E50400_inline(L_8, NULL);
		WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* L_10 = L_9;
		G_B10_0 = L_10;
		if (L_10)
		{
			G_B11_0 = L_10;
			goto IL_0065;
		}
	}
	{
		goto IL_0076;
	}

IL_0065:
	{
		UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8* L_11 = (UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8*)il2cpp_codegen_object_new(UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction_1__ctor_m8B1FC56332BDF48F305E5F292D2F751AAC2A90EE(L_11, __this, (intptr_t)((void*)AppVoiceExperience_OnWitResponseListener_mC7B073E49C3EDBE342A667792EAEEE835652C9D5_RuntimeMethod_var), NULL);
		NullCheck(G_B11_0);
		UnityEvent_1_AddListener_m03EDE8CB25D09EA569869E869DC2554E4D9E2F55(G_B11_0, L_11, UnityEvent_1_AddListener_m03EDE8CB25D09EA569869E869DC2554E4D9E2F55_RuntimeMethod_var);
	}

IL_0076:
	{
		// VoiceEvents.OnStartListening?.AddListener(OnStartedListening);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_12;
		L_12 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_12);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_13;
		L_13 = SpeechEvents_get_OnStartListening_m1AE66AF56C8A79496E386C26CCB815E99EBB4DA7_inline(L_12, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_14 = L_13;
		G_B13_0 = L_14;
		if (L_14)
		{
			G_B14_0 = L_14;
			goto IL_0087;
		}
	}
	{
		goto IL_0098;
	}

IL_0087:
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_15 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_15, __this, (intptr_t)((void*)AppVoiceExperience_OnStartedListening_m1B032B403E9F607D166D9B275C6B2790292EEB65_RuntimeMethod_var), NULL);
		NullCheck(G_B14_0);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(G_B14_0, L_15, NULL);
	}

IL_0098:
	{
		// VoiceEvents.OnMinimumWakeThresholdHit?.AddListener(OnMinimumWakeThresholdHit);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_16;
		L_16 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_16);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_17;
		L_17 = SpeechEvents_get_OnMinimumWakeThresholdHit_m1C3C6112F4B81CA7AB4092C679CB1F0A0897AF41_inline(L_16, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_18 = L_17;
		G_B16_0 = L_18;
		if (L_18)
		{
			G_B17_0 = L_18;
			goto IL_00a9;
		}
	}
	{
		goto IL_00ba;
	}

IL_00a9:
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_19 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_19, __this, (intptr_t)((void*)AppVoiceExperience_OnMinimumWakeThresholdHit_m0E993681E61A11C64C7AF5E0CEBADBD4351C4823_RuntimeMethod_var), NULL);
		NullCheck(G_B17_0);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(G_B17_0, L_19, NULL);
	}

IL_00ba:
	{
		// VoiceEvents.OnStoppedListening?.AddListener(OnStoppedListening);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_20;
		L_20 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_20);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_21;
		L_21 = SpeechEvents_get_OnStoppedListening_mB59F3490B5F895B311DA82A0288DC2AEACF87586_inline(L_20, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_22 = L_21;
		G_B19_0 = L_22;
		if (L_22)
		{
			G_B20_0 = L_22;
			goto IL_00cb;
		}
	}
	{
		goto IL_00dc;
	}

IL_00cb:
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_23 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_23, __this, (intptr_t)((void*)AppVoiceExperience_OnStoppedListening_m19CF3A2B9878EE39D16B8CE4F428B93217109BAE_RuntimeMethod_var), NULL);
		NullCheck(G_B20_0);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(G_B20_0, L_23, NULL);
	}

IL_00dc:
	{
		// VoiceEvents.OnMicDataSent?.AddListener(OnMicDataSent);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_24;
		L_24 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_24);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_25;
		L_25 = SpeechEvents_get_OnMicDataSent_mAA598367D126F79A9BC611B95D6779CAD18C6874_inline(L_24, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_26 = L_25;
		G_B22_0 = L_26;
		if (L_26)
		{
			G_B23_0 = L_26;
			goto IL_00ed;
		}
	}
	{
		goto IL_00fe;
	}

IL_00ed:
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_27 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_27, __this, (intptr_t)((void*)AppVoiceExperience_OnMicDataSent_mD8EB7402399CBD6160E0F6847E50D46DD401445F_RuntimeMethod_var), NULL);
		NullCheck(G_B23_0);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(G_B23_0, L_27, NULL);
	}

IL_00fe:
	{
		// VoiceEvents.OnSend?.AddListener(OnSend);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_28;
		L_28 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_28);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_29;
		L_29 = SpeechEvents_get_OnSend_m848D965F028D864B6175BA77425848BA86153A13_inline(L_28, NULL);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_30 = L_29;
		G_B25_0 = L_30;
		if (L_30)
		{
			G_B26_0 = L_30;
			goto IL_010f;
		}
	}
	{
		goto IL_0120;
	}

IL_010f:
	{
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_31 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_31, __this, (intptr_t)((void*)AppVoiceExperience_OnSend_mADA1EFAAA5CF2C6F1370EF6AAE214D2BF1D1278E_RuntimeMethod_var), NULL);
		NullCheck(G_B26_0);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(G_B26_0, L_31, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
	}

IL_0120:
	{
		// VoiceEvents.OnPartialTranscription?.AddListener(OnPartialTranscription);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_32;
		L_32 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_32);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_33;
		L_33 = SpeechEvents_get_OnPartialTranscription_m0BA26BCC13243D100712E20D4A6AE8DD56C64B18_inline(L_32, NULL);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_34 = L_33;
		G_B28_0 = L_34;
		if (L_34)
		{
			G_B29_0 = L_34;
			goto IL_0131;
		}
	}
	{
		goto IL_0142;
	}

IL_0131:
	{
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_35 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_35, __this, (intptr_t)((void*)AppVoiceExperience_OnPartialTranscription_m43DDBC74AA40D0415607BDBC16E385FA71083529_RuntimeMethod_var), NULL);
		NullCheck(G_B29_0);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(G_B29_0, L_35, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
	}

IL_0142:
	{
		// VoiceEvents.OnFullTranscription?.AddListener(OnFullTranscription);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_36;
		L_36 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_36);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_37;
		L_37 = SpeechEvents_get_OnFullTranscription_m72C7935CDD9EBD2FCAC9C0ECADC2830417512065_inline(L_36, NULL);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_38 = L_37;
		G_B31_0 = L_38;
		if (L_38)
		{
			G_B32_0 = L_38;
			goto IL_0153;
		}
	}
	{
		goto IL_0164;
	}

IL_0153:
	{
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_39 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_39, __this, (intptr_t)((void*)AppVoiceExperience_OnFullTranscription_mD136FC61E33844D716993A0401D9C893111492B7_RuntimeMethod_var), NULL);
		NullCheck(G_B32_0);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(G_B32_0, L_39, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
	}

IL_0164:
	{
		// VoiceEvents.OnStoppedListeningDueToTimeout?.AddListener(OnStoppedListeningDueToTimeout);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_40;
		L_40 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_40);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_41;
		L_41 = SpeechEvents_get_OnStoppedListeningDueToTimeout_m09ED39D18AEAD2C383D62452353161EF4400DF70_inline(L_40, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_42 = L_41;
		G_B34_0 = L_42;
		if (L_42)
		{
			G_B35_0 = L_42;
			goto IL_0175;
		}
	}
	{
		goto IL_0186;
	}

IL_0175:
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_43 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_43, __this, (intptr_t)((void*)AppVoiceExperience_OnStoppedListeningDueToTimeout_m9AF658CBBC99740BB27872ACE974E4CA1A202682_RuntimeMethod_var), NULL);
		NullCheck(G_B35_0);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(G_B35_0, L_43, NULL);
	}

IL_0186:
	{
		// VoiceEvents.OnStoppedListeningDueToInactivity?.AddListener(OnStoppedListeningDueToInactivity);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_44;
		L_44 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_44);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_45;
		L_45 = SpeechEvents_get_OnStoppedListeningDueToInactivity_mDB9EB1C53F62E85CE682C58725EFE2ED98FCED59_inline(L_44, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_46 = L_45;
		G_B37_0 = L_46;
		if (L_46)
		{
			G_B38_0 = L_46;
			goto IL_0197;
		}
	}
	{
		goto IL_01a8;
	}

IL_0197:
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_47 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_47, __this, (intptr_t)((void*)AppVoiceExperience_OnStoppedListeningDueToInactivity_m62CBE21E8203BE6EAA39E318BEFA46A2D59283A8_RuntimeMethod_var), NULL);
		NullCheck(G_B38_0);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(G_B38_0, L_47, NULL);
	}

IL_01a8:
	{
		// VoiceEvents.OnStoppedListeningDueToDeactivation?.AddListener(OnStoppedListeningDueToDeactivation);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_48;
		L_48 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_48);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_49;
		L_49 = SpeechEvents_get_OnStoppedListeningDueToDeactivation_mBEF3FA3D000697DED97B1738FED177B46F7E5629_inline(L_48, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_50 = L_49;
		G_B40_0 = L_50;
		if (L_50)
		{
			G_B41_0 = L_50;
			goto IL_01b9;
		}
	}
	{
		goto IL_01ca;
	}

IL_01b9:
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_51 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_51, __this, (intptr_t)((void*)AppVoiceExperience_OnStoppedListeningDueToDeactivation_mEA47204E2E074720C40644911F21E8ED9D24B3AE_RuntimeMethod_var), NULL);
		NullCheck(G_B41_0);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(G_B41_0, L_51, NULL);
	}

IL_01ca:
	{
		// VoiceEvents.OnComplete?.AddListener(OnRequestComplete);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_52;
		L_52 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_52);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_53;
		L_53 = SpeechEvents_get_OnComplete_m9FD0FF1FDEA3E57022FA443D9D27A91108EC4BB9_inline(L_52, NULL);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_54 = L_53;
		G_B43_0 = L_54;
		if (L_54)
		{
			G_B44_0 = L_54;
			goto IL_01db;
		}
	}
	{
		goto IL_01ec;
	}

IL_01db:
	{
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_55 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_55, __this, (intptr_t)((void*)AppVoiceExperience_OnRequestComplete_m87274E71C728B608E296BBAEB45628AB7CD6374A_RuntimeMethod_var), NULL);
		NullCheck(G_B44_0);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(G_B44_0, L_55, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
	}

IL_01ec:
	{
		// TelemetryEvents.OnAudioTrackerFinished?.AddListener(OnAudioDurationTrackerFinished);
		TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* L_56;
		L_56 = VirtualFuncInvoker0< TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* >::Invoke(33 /* Meta.WitAi.Events.TelemetryEvents Meta.WitAi.VoiceService::get_TelemetryEvents() */, __this);
		NullCheck(L_56);
		AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647* L_57 = L_56->___OnAudioTrackerFinished_0;
		AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647* L_58 = L_57;
		G_B46_0 = L_58;
		if (L_58)
		{
			G_B47_0 = L_58;
			goto IL_01fc;
		}
	}
	{
		return;
	}

IL_01fc:
	{
		UnityAction_2_tD1BCB3DC65C3130393D8FC4FE131FDFBBBE54CE4* L_59 = (UnityAction_2_tD1BCB3DC65C3130393D8FC4FE131FDFBBBE54CE4*)il2cpp_codegen_object_new(UnityAction_2_tD1BCB3DC65C3130393D8FC4FE131FDFBBBE54CE4_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		UnityAction_2__ctor_m9AD9A204D382DF5271F61E2DC5B481C2725EFB28(L_59, __this, (intptr_t)((void*)AppVoiceExperience_OnAudioDurationTrackerFinished_m8A674E70657144510C37DDCB407F8448E5D2A046_RuntimeMethod_var), NULL);
		NullCheck(G_B47_0);
		UnityEvent_2_AddListener_m762AA5B1470E71CD800C81D865CA790FB8390D83(G_B47_0, L_59, UnityEvent_2_AddListener_m762AA5B1470E71CD800C81D865CA790FB8390D83_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_OnDisable_mDCE98C5C9A50462AA5061B29091F55EA826EEAB5 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnAudioDurationTrackerFinished_m8A674E70657144510C37DDCB407F8448E5D2A046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnFullTranscription_mD136FC61E33844D716993A0401D9C893111492B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnMicDataSent_mD8EB7402399CBD6160E0F6847E50D46DD401445F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnMinimumWakeThresholdHit_m0E993681E61A11C64C7AF5E0CEBADBD4351C4823_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnPartialTranscription_m43DDBC74AA40D0415607BDBC16E385FA71083529_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnRequestComplete_m87274E71C728B608E296BBAEB45628AB7CD6374A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnRequestInit_m0E6D46242FC24941EFB5D01CA31513F3A7193BDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnSend_mADA1EFAAA5CF2C6F1370EF6AAE214D2BF1D1278E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnStartedListening_m1B032B403E9F607D166D9B275C6B2790292EEB65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnStoppedListeningDueToDeactivation_mEA47204E2E074720C40644911F21E8ED9D24B3AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnStoppedListeningDueToInactivity_m62CBE21E8203BE6EAA39E318BEFA46A2D59283A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnStoppedListeningDueToTimeout_m9AF658CBBC99740BB27872ACE974E4CA1A202682_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnStoppedListening_m19CF3A2B9878EE39D16B8CE4F428B93217109BAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_OnWitResponseListener_mC7B073E49C3EDBE342A667792EAEEE835652C9D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tD1BCB3DC65C3130393D8FC4FE131FDFBBBE54CE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m84C07A346FB285EE2C1488B1F0D69BC6557E8D54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_RemoveListener_m14CBE08174F26830B90291AE2E5126A5CC001F95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* V_0 = NULL;
	VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993* V_1 = NULL;
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B6_0 = NULL;
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B5_0 = NULL;
	WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* G_B9_0 = NULL;
	WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* G_B8_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B12_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B11_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B15_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B14_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B18_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B17_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B21_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B20_0 = NULL;
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B24_0 = NULL;
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B23_0 = NULL;
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* G_B27_0 = NULL;
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* G_B26_0 = NULL;
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* G_B30_0 = NULL;
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* G_B29_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B33_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B32_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B36_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B35_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B39_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B38_0 = NULL;
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B42_0 = NULL;
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B41_0 = NULL;
	AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647* G_B45_0 = NULL;
	AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647* G_B44_0 = NULL;
	{
		// base.OnDisable();
		VoiceService_OnDisable_m0C7EC495F5FCF1272C0FDCBB48DDCFF0C48FCE0E(__this, NULL);
		// if (voiceServiceImpl is VoiceSDKImpl platformImpl)
		RuntimeObject* L_0 = __this->___voiceServiceImpl_14;
		V_0 = ((VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A*)IsInstClass((RuntimeObject*)L_0, VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A_il2cpp_TypeInfo_var));
		VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// platformImpl.Disconnect();
		VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* L_2 = V_0;
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(5 /* System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Bindings.Android.VoiceSDKBinding>::Disconnect() */, L_2);
	}

IL_001b:
	{
		// if (voiceSDKLoggerImpl is VoiceSDKPlatformLoggerImpl loggerImpl)
		RuntimeObject* L_3 = __this->___voiceSDKLoggerImpl_15;
		V_1 = ((VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993*)IsInstClass((RuntimeObject*)L_3, VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993_il2cpp_TypeInfo_var));
		VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// loggerImpl.Disconnect();
		VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993* L_5 = V_1;
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(5 /* System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKLoggerBinding>::Disconnect() */, L_5);
	}

IL_0030:
	{
		// voiceServiceImpl = null;
		__this->___voiceServiceImpl_14 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voiceServiceImpl_14), (void*)(RuntimeObject*)NULL);
		// voiceSDKLoggerImpl = null;
		__this->___voiceSDKLoggerImpl_15 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voiceSDKLoggerImpl_15), (void*)(RuntimeObject*)NULL);
		// VoiceEvents.OnRequestInitialized?.RemoveListener(OnRequestInit);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_6;
		L_6 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_6);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_7;
		L_7 = SpeechEvents_get_OnRequestInitialized_mDF97BA996E91AC80EDEFA571B39D2ECD09C97A09_inline(L_6, NULL);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_8 = L_7;
		G_B5_0 = L_8;
		if (L_8)
		{
			G_B6_0 = L_8;
			goto IL_004f;
		}
	}
	{
		goto IL_0060;
	}

IL_004f:
	{
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_9 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_9, __this, (intptr_t)((void*)AppVoiceExperience_OnRequestInit_m0E6D46242FC24941EFB5D01CA31513F3A7193BDD_RuntimeMethod_var), NULL);
		NullCheck(G_B6_0);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(G_B6_0, L_9, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
	}

IL_0060:
	{
		// VoiceEvents.OnResponse?.RemoveListener(OnWitResponseListener);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_10;
		L_10 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_10);
		WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* L_11;
		L_11 = SpeechEvents_get_OnResponse_m35A479475B9CCCE66CDA4028A0A6AE6343E50400_inline(L_10, NULL);
		WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* L_12 = L_11;
		G_B8_0 = L_12;
		if (L_12)
		{
			G_B9_0 = L_12;
			goto IL_0071;
		}
	}
	{
		goto IL_0082;
	}

IL_0071:
	{
		UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8* L_13 = (UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8*)il2cpp_codegen_object_new(UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction_1__ctor_m8B1FC56332BDF48F305E5F292D2F751AAC2A90EE(L_13, __this, (intptr_t)((void*)AppVoiceExperience_OnWitResponseListener_mC7B073E49C3EDBE342A667792EAEEE835652C9D5_RuntimeMethod_var), NULL);
		NullCheck(G_B9_0);
		UnityEvent_1_RemoveListener_m84C07A346FB285EE2C1488B1F0D69BC6557E8D54(G_B9_0, L_13, UnityEvent_1_RemoveListener_m84C07A346FB285EE2C1488B1F0D69BC6557E8D54_RuntimeMethod_var);
	}

IL_0082:
	{
		// VoiceEvents.OnStartListening?.RemoveListener(OnStartedListening);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_14;
		L_14 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_14);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_15;
		L_15 = SpeechEvents_get_OnStartListening_m1AE66AF56C8A79496E386C26CCB815E99EBB4DA7_inline(L_14, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_16 = L_15;
		G_B11_0 = L_16;
		if (L_16)
		{
			G_B12_0 = L_16;
			goto IL_0093;
		}
	}
	{
		goto IL_00a4;
	}

IL_0093:
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_17 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_17, __this, (intptr_t)((void*)AppVoiceExperience_OnStartedListening_m1B032B403E9F607D166D9B275C6B2790292EEB65_RuntimeMethod_var), NULL);
		NullCheck(G_B12_0);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(G_B12_0, L_17, NULL);
	}

IL_00a4:
	{
		// VoiceEvents.OnMinimumWakeThresholdHit?.RemoveListener(OnMinimumWakeThresholdHit);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_18;
		L_18 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_18);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_19;
		L_19 = SpeechEvents_get_OnMinimumWakeThresholdHit_m1C3C6112F4B81CA7AB4092C679CB1F0A0897AF41_inline(L_18, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_20 = L_19;
		G_B14_0 = L_20;
		if (L_20)
		{
			G_B15_0 = L_20;
			goto IL_00b5;
		}
	}
	{
		goto IL_00c6;
	}

IL_00b5:
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_21 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_21, __this, (intptr_t)((void*)AppVoiceExperience_OnMinimumWakeThresholdHit_m0E993681E61A11C64C7AF5E0CEBADBD4351C4823_RuntimeMethod_var), NULL);
		NullCheck(G_B15_0);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(G_B15_0, L_21, NULL);
	}

IL_00c6:
	{
		// VoiceEvents.OnStoppedListening?.RemoveListener(OnStoppedListening);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_22;
		L_22 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_22);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_23;
		L_23 = SpeechEvents_get_OnStoppedListening_mB59F3490B5F895B311DA82A0288DC2AEACF87586_inline(L_22, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_24 = L_23;
		G_B17_0 = L_24;
		if (L_24)
		{
			G_B18_0 = L_24;
			goto IL_00d7;
		}
	}
	{
		goto IL_00e8;
	}

IL_00d7:
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_25 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_25, __this, (intptr_t)((void*)AppVoiceExperience_OnStoppedListening_m19CF3A2B9878EE39D16B8CE4F428B93217109BAE_RuntimeMethod_var), NULL);
		NullCheck(G_B18_0);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(G_B18_0, L_25, NULL);
	}

IL_00e8:
	{
		// VoiceEvents.OnMicDataSent?.RemoveListener(OnMicDataSent);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_26;
		L_26 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_26);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_27;
		L_27 = SpeechEvents_get_OnMicDataSent_mAA598367D126F79A9BC611B95D6779CAD18C6874_inline(L_26, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_28 = L_27;
		G_B20_0 = L_28;
		if (L_28)
		{
			G_B21_0 = L_28;
			goto IL_00f9;
		}
	}
	{
		goto IL_010a;
	}

IL_00f9:
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_29 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_29, __this, (intptr_t)((void*)AppVoiceExperience_OnMicDataSent_mD8EB7402399CBD6160E0F6847E50D46DD401445F_RuntimeMethod_var), NULL);
		NullCheck(G_B21_0);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(G_B21_0, L_29, NULL);
	}

IL_010a:
	{
		// VoiceEvents.OnSend?.RemoveListener(OnSend);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_30;
		L_30 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_30);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_31;
		L_31 = SpeechEvents_get_OnSend_m848D965F028D864B6175BA77425848BA86153A13_inline(L_30, NULL);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_32 = L_31;
		G_B23_0 = L_32;
		if (L_32)
		{
			G_B24_0 = L_32;
			goto IL_011b;
		}
	}
	{
		goto IL_012c;
	}

IL_011b:
	{
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_33 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_33, __this, (intptr_t)((void*)AppVoiceExperience_OnSend_mADA1EFAAA5CF2C6F1370EF6AAE214D2BF1D1278E_RuntimeMethod_var), NULL);
		NullCheck(G_B24_0);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(G_B24_0, L_33, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
	}

IL_012c:
	{
		// VoiceEvents.OnPartialTranscription?.RemoveListener(OnPartialTranscription);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_34;
		L_34 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_34);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_35;
		L_35 = SpeechEvents_get_OnPartialTranscription_m0BA26BCC13243D100712E20D4A6AE8DD56C64B18_inline(L_34, NULL);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_36 = L_35;
		G_B26_0 = L_36;
		if (L_36)
		{
			G_B27_0 = L_36;
			goto IL_013d;
		}
	}
	{
		goto IL_014e;
	}

IL_013d:
	{
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_37 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_37, __this, (intptr_t)((void*)AppVoiceExperience_OnPartialTranscription_m43DDBC74AA40D0415607BDBC16E385FA71083529_RuntimeMethod_var), NULL);
		NullCheck(G_B27_0);
		UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F(G_B27_0, L_37, UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var);
	}

IL_014e:
	{
		// VoiceEvents.OnFullTranscription?.RemoveListener(OnFullTranscription);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_38;
		L_38 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_38);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_39;
		L_39 = SpeechEvents_get_OnFullTranscription_m72C7935CDD9EBD2FCAC9C0ECADC2830417512065_inline(L_38, NULL);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_40 = L_39;
		G_B29_0 = L_40;
		if (L_40)
		{
			G_B30_0 = L_40;
			goto IL_015f;
		}
	}
	{
		goto IL_0170;
	}

IL_015f:
	{
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_41 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_41, __this, (intptr_t)((void*)AppVoiceExperience_OnFullTranscription_mD136FC61E33844D716993A0401D9C893111492B7_RuntimeMethod_var), NULL);
		NullCheck(G_B30_0);
		UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F(G_B30_0, L_41, UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var);
	}

IL_0170:
	{
		// VoiceEvents.OnStoppedListeningDueToTimeout?.RemoveListener(OnStoppedListeningDueToTimeout);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_42;
		L_42 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_42);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_43;
		L_43 = SpeechEvents_get_OnStoppedListeningDueToTimeout_m09ED39D18AEAD2C383D62452353161EF4400DF70_inline(L_42, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_44 = L_43;
		G_B32_0 = L_44;
		if (L_44)
		{
			G_B33_0 = L_44;
			goto IL_0181;
		}
	}
	{
		goto IL_0192;
	}

IL_0181:
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_45 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_45, __this, (intptr_t)((void*)AppVoiceExperience_OnStoppedListeningDueToTimeout_m9AF658CBBC99740BB27872ACE974E4CA1A202682_RuntimeMethod_var), NULL);
		NullCheck(G_B33_0);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(G_B33_0, L_45, NULL);
	}

IL_0192:
	{
		// VoiceEvents.OnStoppedListeningDueToInactivity?.RemoveListener(OnStoppedListeningDueToInactivity);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_46;
		L_46 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_46);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_47;
		L_47 = SpeechEvents_get_OnStoppedListeningDueToInactivity_mDB9EB1C53F62E85CE682C58725EFE2ED98FCED59_inline(L_46, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_48 = L_47;
		G_B35_0 = L_48;
		if (L_48)
		{
			G_B36_0 = L_48;
			goto IL_01a3;
		}
	}
	{
		goto IL_01b4;
	}

IL_01a3:
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_49 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_49, __this, (intptr_t)((void*)AppVoiceExperience_OnStoppedListeningDueToInactivity_m62CBE21E8203BE6EAA39E318BEFA46A2D59283A8_RuntimeMethod_var), NULL);
		NullCheck(G_B36_0);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(G_B36_0, L_49, NULL);
	}

IL_01b4:
	{
		// VoiceEvents.OnStoppedListeningDueToDeactivation?.RemoveListener(OnStoppedListeningDueToDeactivation);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_50;
		L_50 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_50);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_51;
		L_51 = SpeechEvents_get_OnStoppedListeningDueToDeactivation_mBEF3FA3D000697DED97B1738FED177B46F7E5629_inline(L_50, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_52 = L_51;
		G_B38_0 = L_52;
		if (L_52)
		{
			G_B39_0 = L_52;
			goto IL_01c5;
		}
	}
	{
		goto IL_01d6;
	}

IL_01c5:
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_53 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_53, __this, (intptr_t)((void*)AppVoiceExperience_OnStoppedListeningDueToDeactivation_mEA47204E2E074720C40644911F21E8ED9D24B3AE_RuntimeMethod_var), NULL);
		NullCheck(G_B39_0);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(G_B39_0, L_53, NULL);
	}

IL_01d6:
	{
		// VoiceEvents.OnComplete?.RemoveListener(OnRequestComplete);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_54;
		L_54 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(31 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_54);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_55;
		L_55 = SpeechEvents_get_OnComplete_m9FD0FF1FDEA3E57022FA443D9D27A91108EC4BB9_inline(L_54, NULL);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_56 = L_55;
		G_B41_0 = L_56;
		if (L_56)
		{
			G_B42_0 = L_56;
			goto IL_01e7;
		}
	}
	{
		goto IL_01f8;
	}

IL_01e7:
	{
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_57 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_57, __this, (intptr_t)((void*)AppVoiceExperience_OnRequestComplete_m87274E71C728B608E296BBAEB45628AB7CD6374A_RuntimeMethod_var), NULL);
		NullCheck(G_B42_0);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(G_B42_0, L_57, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
	}

IL_01f8:
	{
		// TelemetryEvents.OnAudioTrackerFinished?.RemoveListener(OnAudioDurationTrackerFinished);
		TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* L_58;
		L_58 = VirtualFuncInvoker0< TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* >::Invoke(33 /* Meta.WitAi.Events.TelemetryEvents Meta.WitAi.VoiceService::get_TelemetryEvents() */, __this);
		NullCheck(L_58);
		AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647* L_59 = L_58->___OnAudioTrackerFinished_0;
		AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647* L_60 = L_59;
		G_B44_0 = L_60;
		if (L_60)
		{
			G_B45_0 = L_60;
			goto IL_0208;
		}
	}
	{
		return;
	}

IL_0208:
	{
		UnityAction_2_tD1BCB3DC65C3130393D8FC4FE131FDFBBBE54CE4* L_61 = (UnityAction_2_tD1BCB3DC65C3130393D8FC4FE131FDFBBBE54CE4*)il2cpp_codegen_object_new(UnityAction_2_tD1BCB3DC65C3130393D8FC4FE131FDFBBBE54CE4_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		UnityAction_2__ctor_m9AD9A204D382DF5271F61E2DC5B481C2725EFB28(L_61, __this, (intptr_t)((void*)AppVoiceExperience_OnAudioDurationTrackerFinished_m8A674E70657144510C37DDCB407F8448E5D2A046_RuntimeMethod_var), NULL);
		NullCheck(G_B45_0);
		UnityEvent_2_RemoveListener_m14CBE08174F26830B90291AE2E5126A5CC001F95(G_B45_0, L_61, UnityEvent_2_RemoveListener_m14CBE08174F26830B90291AE2E5126A5CC001F95_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_OnApplicationFocus_m8F49805779857F88CDCB53E78730EE1EC4DABDE9 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, bool ___hasFocus0, const RuntimeMethod* method) 
{
	{
		// if (enabled && hasFocus && !Initialized)
		bool L_0;
		L_0 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		bool L_1 = ___hasFocus0;
		if (!((int32_t)((int32_t)L_0&(int32_t)L_1)))
		{
			goto IL_001f;
		}
	}
	{
		bool L_2;
		L_2 = AppVoiceExperience_get_Initialized_m97ED7179C4F41C4595B0047A0EC983B5EC186DFA(__this, NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		// if (MicPermissionsManager.HasMicPermission())
		bool L_3;
		L_3 = MicPermissionsManager_HasMicPermission_m87B33F0E6CFB654B2DF0044F2541297F9454A17D(NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// InitVoiceSDK();
		AppVoiceExperience_InitVoiceSDK_m32D292065C10F12806D615E70A52C3DE51A623B5(__this, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::OnRequestInit(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_OnRequestInit_m0E6D46242FC24941EFB5D01CA31513F3A7193BDD (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00E41D42C2ADF1C57D8B97F8A6CCDED95285A64C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral059D2D8503B18BBF1A91395054BF3B7D6AE0CFCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B322A3FA1E8AF97C5D21A2D349C0D614C4FE854);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral612B514077F211362B9850601E9C65C05DE45FCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD4104677145B876F292A0DE0E3D05E4D6B15066);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE1EF95F5D04D20EF4C7CF4CAB5C1D4027F8F1AB);
		s_Il2CppMethodInitialized = true;
	}
	WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	String_t* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	RuntimeObject* G_B6_2 = NULL;
	WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	RuntimeObject* G_B8_2 = NULL;
	WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	RuntimeObject* G_B7_2 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	RuntimeObject* G_B9_2 = NULL;
	WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	RuntimeObject* G_B11_2 = NULL;
	WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	RuntimeObject* G_B10_2 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	RuntimeObject* G_B12_2 = NULL;
	WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	RuntimeObject* G_B14_2 = NULL;
	WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	RuntimeObject* G_B13_2 = NULL;
	String_t* G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	RuntimeObject* G_B15_2 = NULL;
	WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* G_B17_0 = NULL;
	String_t* G_B17_1 = NULL;
	RuntimeObject* G_B17_2 = NULL;
	WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	RuntimeObject* G_B16_2 = NULL;
	String_t* G_B18_0 = NULL;
	String_t* G_B18_1 = NULL;
	RuntimeObject* G_B18_2 = NULL;
	{
		// voiceSDKLoggerImpl.LogInteractionStart(request.Options?.RequestId, request.InputType == NLPRequestInputType.Text ? "message" : "speech");
		RuntimeObject* L_0 = __this->___voiceSDKLoggerImpl_15;
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_1 = ___request0;
		NullCheck(L_1);
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_2;
		L_2 = VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_inline(L_1, VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_RuntimeMethod_var);
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_0;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0018;
	}

IL_0013:
	{
		NullCheck(G_B2_0);
		String_t* L_4;
		L_4 = VoiceServiceRequestOptions_get_RequestId_mC465590B47E4B5F542BD3E9BED1074D032C1446F_inline(G_B2_0, NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_1;
	}

IL_0018:
	{
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_5 = ___request0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_inline(L_5, NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_RuntimeMethod_var);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		if (!L_6)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			goto IL_0027;
		}
	}
	{
		G_B6_0 = _stringLiteralEE1EF95F5D04D20EF4C7CF4CAB5C1D4027F8F1AB;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_002c;
	}

IL_0027:
	{
		G_B6_0 = _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_002c:
	{
		NullCheck(G_B6_2);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(6 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionStart(System.String,System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, G_B6_2, G_B6_1, G_B6_0);
		// voiceSDKLoggerImpl.LogAnnotation("clientSDKVersion", PACKAGE_VERSION);
		RuntimeObject* L_7 = __this->___voiceSDKLoggerImpl_15;
		String_t* L_8;
		L_8 = AppVoiceExperience_get_PACKAGE_VERSION_m0EF7F1AE8B1BBBF16C840F9DD21EB24BBF4E3059(NULL);
		NullCheck(L_7);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogAnnotation(System.String,System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_7, _stringLiteral3B322A3FA1E8AF97C5D21A2D349C0D614C4FE854, L_8);
		// voiceSDKLoggerImpl.LogAnnotation("minWakeThreshold",
		//     RuntimeConfiguration?.soundWakeThreshold.ToString(CultureInfo.InvariantCulture));
		RuntimeObject* L_9 = __this->___voiceSDKLoggerImpl_15;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_10;
		L_10 = AppVoiceExperience_get_RuntimeConfiguration_mD24F0877CFC8E672244CFF3BD79930F04401A704_inline(__this, NULL);
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_11 = L_10;
		G_B7_0 = L_11;
		G_B7_1 = _stringLiteral00E41D42C2ADF1C57D8B97F8A6CCDED95285A64C;
		G_B7_2 = L_9;
		if (L_11)
		{
			G_B8_0 = L_11;
			G_B8_1 = _stringLiteral00E41D42C2ADF1C57D8B97F8A6CCDED95285A64C;
			G_B8_2 = L_9;
			goto IL_005e;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_1;
		G_B9_2 = G_B7_2;
		goto IL_006d;
	}

IL_005e:
	{
		NullCheck(G_B8_0);
		float* L_12 = (&G_B8_0->___soundWakeThreshold_5);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_13;
		L_13 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_14;
		L_14 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A(L_12, L_13, NULL);
		G_B9_0 = L_14;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
	}

IL_006d:
	{
		NullCheck(G_B9_2);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogAnnotation(System.String,System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, G_B9_2, G_B9_1, G_B9_0);
		// voiceSDKLoggerImpl.LogAnnotation("minKeepAliveTimeSec",
		//     RuntimeConfiguration?.minKeepAliveTimeInSeconds.ToString(CultureInfo.InvariantCulture));
		RuntimeObject* L_15 = __this->___voiceSDKLoggerImpl_15;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_16;
		L_16 = AppVoiceExperience_get_RuntimeConfiguration_mD24F0877CFC8E672244CFF3BD79930F04401A704_inline(__this, NULL);
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_17 = L_16;
		G_B10_0 = L_17;
		G_B10_1 = _stringLiteral059D2D8503B18BBF1A91395054BF3B7D6AE0CFCC;
		G_B10_2 = L_15;
		if (L_17)
		{
			G_B11_0 = L_17;
			G_B11_1 = _stringLiteral059D2D8503B18BBF1A91395054BF3B7D6AE0CFCC;
			G_B11_2 = L_15;
			goto IL_008a;
		}
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_0099;
	}

IL_008a:
	{
		NullCheck(G_B11_0);
		float* L_18 = (&G_B11_0->___minKeepAliveTimeInSeconds_2);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_19;
		L_19 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_20;
		L_20 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A(L_18, L_19, NULL);
		G_B12_0 = L_20;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_0099:
	{
		NullCheck(G_B12_2);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogAnnotation(System.String,System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, G_B12_2, G_B12_1, G_B12_0);
		// voiceSDKLoggerImpl.LogAnnotation("minTranscriptionKeepAliveTimeSec",
		//     RuntimeConfiguration?.minTranscriptionKeepAliveTimeInSeconds.ToString(CultureInfo.InvariantCulture));
		RuntimeObject* L_21 = __this->___voiceSDKLoggerImpl_15;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_22;
		L_22 = AppVoiceExperience_get_RuntimeConfiguration_mD24F0877CFC8E672244CFF3BD79930F04401A704_inline(__this, NULL);
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_23 = L_22;
		G_B13_0 = L_23;
		G_B13_1 = _stringLiteral612B514077F211362B9850601E9C65C05DE45FCC;
		G_B13_2 = L_21;
		if (L_23)
		{
			G_B14_0 = L_23;
			G_B14_1 = _stringLiteral612B514077F211362B9850601E9C65C05DE45FCC;
			G_B14_2 = L_21;
			goto IL_00b6;
		}
	}
	{
		G_B15_0 = ((String_t*)(NULL));
		G_B15_1 = G_B13_1;
		G_B15_2 = G_B13_2;
		goto IL_00c5;
	}

IL_00b6:
	{
		NullCheck(G_B14_0);
		float* L_24 = (&G_B14_0->___minTranscriptionKeepAliveTimeInSeconds_3);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_25;
		L_25 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_26;
		L_26 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A(L_24, L_25, NULL);
		G_B15_0 = L_26;
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
	}

IL_00c5:
	{
		NullCheck(G_B15_2);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogAnnotation(System.String,System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, G_B15_2, G_B15_1, G_B15_0);
		// voiceSDKLoggerImpl.LogAnnotation("maxRecordingTime",
		//     RuntimeConfiguration?.maxRecordingTime.ToString(CultureInfo.InvariantCulture));
		RuntimeObject* L_27 = __this->___voiceSDKLoggerImpl_15;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_28;
		L_28 = AppVoiceExperience_get_RuntimeConfiguration_mD24F0877CFC8E672244CFF3BD79930F04401A704_inline(__this, NULL);
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_29 = L_28;
		G_B16_0 = L_29;
		G_B16_1 = _stringLiteralDD4104677145B876F292A0DE0E3D05E4D6B15066;
		G_B16_2 = L_27;
		if (L_29)
		{
			G_B17_0 = L_29;
			G_B17_1 = _stringLiteralDD4104677145B876F292A0DE0E3D05E4D6B15066;
			G_B17_2 = L_27;
			goto IL_00e2;
		}
	}
	{
		G_B18_0 = ((String_t*)(NULL));
		G_B18_1 = G_B16_1;
		G_B18_2 = G_B16_2;
		goto IL_00f1;
	}

IL_00e2:
	{
		NullCheck(G_B17_0);
		float* L_30 = (&G_B17_0->___maxRecordingTime_4);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_31;
		L_31 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_32;
		L_32 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A(L_30, L_31, NULL);
		G_B18_0 = L_32;
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
	}

IL_00f1:
	{
		NullCheck(G_B18_2);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogAnnotation(System.String,System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, G_B18_2, G_B18_1, G_B18_0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::OnWitResponseListener(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_OnWitResponseListener_mC7B073E49C3EDBE342A667792EAEEE835652C9D5 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___witResponseNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D0AFAB723466D5AEB28205DB63F17CC6A8430C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAE99594C9291FC466C7FDEADF4CE02C97917A51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE1EF95F5D04D20EF4C7CF4CAB5C1D4027F8F1AB);
		s_Il2CppMethodInitialized = true;
	}
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* G_B5_0 = NULL;
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* G_B4_0 = NULL;
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* G_B3_0 = NULL;
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* G_B8_0 = NULL;
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* G_B7_0 = NULL;
	String_t* G_B11_0 = NULL;
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* G_B10_0 = NULL;
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* G_B9_0 = NULL;
	{
		// var tokens = witResponseNode?["speech"]?["tokens"];
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___witResponseNode0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B5_0 = ((WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*)(NULL));
		goto IL_0022;
	}

IL_0006:
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___witResponseNode0;
		NullCheck(L_1);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_2;
		L_2 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_1, _stringLiteralEE1EF95F5D04D20EF4C7CF4CAB5C1D4027F8F1AB);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0018;
		}
	}
	{
		G_B5_0 = ((WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*)(NULL));
		goto IL_0022;
	}

IL_0018:
	{
		NullCheck(G_B4_0);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_4;
		L_4 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, G_B4_0, _stringLiteral9D0AFAB723466D5AEB28205DB63F17CC6A8430C3);
		G_B5_0 = L_4;
	}

IL_0022:
	{
		V_0 = G_B5_0;
		// if (tokens != null)
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_5 = V_0;
		bool L_6;
		L_6 = WitResponseNode_op_Inequality_mB890519AF1C832EC1EEB1644A5B0E1D0F4C324F9(L_5, NULL, NULL);
		if (!L_6)
		{
			goto IL_007f;
		}
	}
	{
		// int speechTokensLength = tokens.Count;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 Meta.WitAi.Json.WitResponseNode::get_Count() */, L_7);
		V_1 = L_8;
		// string speechLength = witResponseNode["speech"]["tokens"][speechTokensLength - 1]?["end"]?.Value;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_9 = ___witResponseNode0;
		NullCheck(L_9);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_10;
		L_10 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_9, _stringLiteralEE1EF95F5D04D20EF4C7CF4CAB5C1D4027F8F1AB);
		NullCheck(L_10);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_11;
		L_11 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_10, _stringLiteral9D0AFAB723466D5AEB28205DB63F17CC6A8430C3);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_13;
		L_13 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, int32_t >::Invoke(5 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.Int32) */, L_11, ((int32_t)il2cpp_codegen_subtract(L_12, 1)));
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_14 = L_13;
		G_B7_0 = L_14;
		if (L_14)
		{
			G_B8_0 = L_14;
			goto IL_0057;
		}
	}
	{
		G_B11_0 = ((String_t*)(NULL));
		goto IL_006d;
	}

IL_0057:
	{
		NullCheck(G_B8_0);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_15;
		L_15 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, G_B8_0, _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_16 = L_15;
		G_B9_0 = L_16;
		if (L_16)
		{
			G_B10_0 = L_16;
			goto IL_0068;
		}
	}
	{
		G_B11_0 = ((String_t*)(NULL));
		goto IL_006d;
	}

IL_0068:
	{
		NullCheck(G_B10_0);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Meta.WitAi.Json.WitResponseNode::get_Value() */, G_B10_0);
		G_B11_0 = L_17;
	}

IL_006d:
	{
		V_2 = G_B11_0;
		// voiceSDKLoggerImpl.LogAnnotation("audioLength", speechLength);
		RuntimeObject* L_18 = __this->___voiceSDKLoggerImpl_15;
		String_t* L_19 = V_2;
		NullCheck(L_18);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogAnnotation(System.String,System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_18, _stringLiteralBAE99594C9291FC466C7FDEADF4CE02C97917A51, L_19);
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::OnStartedListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_OnStartedListening_m1B032B403E9F607D166D9B275C6B2790292EEB65 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral009B2393908F71D06D49150F8D76B306E76A6F71);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceSDKLoggerImpl.LogInteractionPoint("startedListening");
		RuntimeObject* L_0 = __this->___voiceSDKLoggerImpl_15;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(9 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionPoint(System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_0, _stringLiteral009B2393908F71D06D49150F8D76B306E76A6F71);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::OnMinimumWakeThresholdHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_OnMinimumWakeThresholdHit_m0E993681E61A11C64C7AF5E0CEBADBD4351C4823 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB39CC48C9C18312603F049AD5F95F130C96D608);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceSDKLoggerImpl.LogInteractionPoint("minWakeThresholdHit");
		RuntimeObject* L_0 = __this->___voiceSDKLoggerImpl_15;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(9 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionPoint(System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_0, _stringLiteralEB39CC48C9C18312603F049AD5F95F130C96D608);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::OnStoppedListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_OnStoppedListening_m19CF3A2B9878EE39D16B8CE4F428B93217109BAE (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1791A4023492EC42A6A612D3F7AEB832B83E613);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceSDKLoggerImpl.LogInteractionPoint("stoppedListening");
		RuntimeObject* L_0 = __this->___voiceSDKLoggerImpl_15;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(9 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionPoint(System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_0, _stringLiteralF1791A4023492EC42A6A612D3F7AEB832B83E613);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::OnStoppedListeningDueToTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_OnStoppedListeningDueToTimeout_m9AF658CBBC99740BB27872ACE974E4CA1A202682 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3CED0A910CE6733B5E12AE3171291BDBFE22631);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceSDKLoggerImpl.LogInteractionPoint("stoppedListeningTimeout");
		RuntimeObject* L_0 = __this->___voiceSDKLoggerImpl_15;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(9 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionPoint(System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_0, _stringLiteralA3CED0A910CE6733B5E12AE3171291BDBFE22631);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::OnStoppedListeningDueToInactivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_OnStoppedListeningDueToInactivity_m62CBE21E8203BE6EAA39E318BEFA46A2D59283A8 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A11CB2257580AF506A77D19EE092D4CDEF9C6D5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceSDKLoggerImpl.LogInteractionPoint("stoppedListeningInactivity");
		RuntimeObject* L_0 = __this->___voiceSDKLoggerImpl_15;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(9 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionPoint(System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_0, _stringLiteral1A11CB2257580AF506A77D19EE092D4CDEF9C6D5);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::OnStoppedListeningDueToDeactivation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_OnStoppedListeningDueToDeactivation_mEA47204E2E074720C40644911F21E8ED9D24B3AE (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral757897937B2F4FAC7D54EC81DE0F5EA06552BBC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceSDKLoggerImpl.LogInteractionPoint("stoppedListeningDeactivate");
		RuntimeObject* L_0 = __this->___voiceSDKLoggerImpl_15;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(9 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionPoint(System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_0, _stringLiteral757897937B2F4FAC7D54EC81DE0F5EA06552BBC7);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::OnMicDataSent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_OnMicDataSent_mD8EB7402399CBD6160E0F6847E50D46DD401445F (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89DD495BF8F6260A2012F42471A630D65E682877);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceSDKLoggerImpl.LogInteractionPoint("micDataSent");
		RuntimeObject* L_0 = __this->___voiceSDKLoggerImpl_15;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(9 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionPoint(System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_0, _stringLiteral89DD495BF8F6260A2012F42471A630D65E682877);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::OnSend(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_OnSend_mADA1EFAAA5CF2C6F1370EF6AAE214D2BF1D1278E (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34A0CA7C65D8EA1257DCD5BABA1EEB95E6C5E244);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC57DF55488E115904EE3CE487DC4A90DE22A342F);
		s_Il2CppMethodInitialized = true;
	}
	WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	RuntimeObject* G_B3_2 = NULL;
	WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	RuntimeObject* G_B2_2 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	RuntimeObject* G_B4_2 = NULL;
	{
		// voiceSDKLoggerImpl.LogInteractionPoint("witRequestCreated");
		RuntimeObject* L_0 = __this->___voiceSDKLoggerImpl_15;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(9 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionPoint(System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_0, _stringLiteral34A0CA7C65D8EA1257DCD5BABA1EEB95E6C5E244);
		// if (request != null)
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_1 = ___request0;
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// voiceSDKLoggerImpl.LogAnnotation("requestIdOverride", request.Options?.RequestId);
		RuntimeObject* L_2 = __this->___voiceSDKLoggerImpl_15;
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_3 = ___request0;
		NullCheck(L_3);
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_4;
		L_4 = VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_inline(L_3, VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_RuntimeMethod_var);
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_5 = L_4;
		G_B2_0 = L_5;
		G_B2_1 = _stringLiteralC57DF55488E115904EE3CE487DC4A90DE22A342F;
		G_B2_2 = L_2;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = _stringLiteralC57DF55488E115904EE3CE487DC4A90DE22A342F;
			G_B3_2 = L_2;
			goto IL_002b;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		goto IL_0030;
	}

IL_002b:
	{
		NullCheck(G_B3_0);
		String_t* L_6;
		L_6 = VoiceServiceRequestOptions_get_RequestId_mC465590B47E4B5F542BD3E9BED1074D032C1446F_inline(G_B3_0, NULL);
		G_B4_0 = L_6;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0030:
	{
		NullCheck(G_B4_2);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogAnnotation(System.String,System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, G_B4_2, G_B4_1, G_B4_0);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::OnAudioDurationTrackerFinished(System.Int64,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_OnAudioDurationTrackerFinished_m8A674E70657144510C37DDCB407F8448E5D2A046 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, int64_t ___timestamp0, double ___audioDuration1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71562A6EF05B696E3C241CD3AC6CBE92C9CC34E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1975E9A78A2FD35E6CC7B379E04990FAB148155);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceSDKLoggerImpl.LogAnnotation("adt_duration", audioDuration.ToString(CultureInfo.InvariantCulture));
		RuntimeObject* L_0 = __this->___voiceSDKLoggerImpl_15;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_2;
		L_2 = Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357((&___audioDuration1), L_1, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogAnnotation(System.String,System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_0, _stringLiteralC1975E9A78A2FD35E6CC7B379E04990FAB148155, L_2);
		// voiceSDKLoggerImpl.LogAnnotation("adt_finished", timestamp.ToString());
		RuntimeObject* L_3 = __this->___voiceSDKLoggerImpl_15;
		String_t* L_4;
		L_4 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&___timestamp0), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogAnnotation(System.String,System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_3, _stringLiteral71562A6EF05B696E3C241CD3AC6CBE92C9CC34E4, L_4);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::OnPartialTranscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_OnPartialTranscription_m43DDBC74AA40D0415607BDBC16E385FA71083529 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceSDKLoggerImpl.LogFirstTranscriptionTime();
		RuntimeObject* L_0 = __this->___voiceSDKLoggerImpl_15;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(11 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogFirstTranscriptionTime() */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::OnFullTranscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_OnFullTranscription_mD136FC61E33844D716993A0401D9C893111492B7 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04F7A632CB9093444F04C91A3DED8164C4B86967);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceSDKLoggerImpl.LogInteractionPoint("fullTranscriptionTime");
		RuntimeObject* L_0 = __this->___voiceSDKLoggerImpl_15;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(9 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionPoint(System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_0, _stringLiteral04F7A632CB9093444F04C91A3DED8164C4B86967);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::OnRequestComplete(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_OnRequestComplete_m87274E71C728B608E296BBAEB45628AB7CD6374A (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequest_4_get_State_mD1BF2E4830CA915E79E008BB91B6F53BDFA4748D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FFEE78AE9B9B70D02D981D757BDC5718500A44C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3071111457D2E6DE5F1B14C4FAB682F6E0FFAB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8FA3FC5D47930CB399E570088545EDE20A971DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB15B199286087ABF3CFB70DE2FEE096A6EE64C3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (request.State == VoiceRequestState.Failed)
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_0 = ___request0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VoiceRequest_4_get_State_mD1BF2E4830CA915E79E008BB91B6F53BDFA4748D_inline(L_0, VoiceRequest_4_get_State_mD1BF2E4830CA915E79E008BB91B6F53BDFA4748D_RuntimeMethod_var);
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0045;
		}
	}
	{
		// VLog.E($"Request Failed\nError: {request.Results.Message}\n{request.Results.ResponseData}");
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_2 = ___request0;
		NullCheck(L_2);
		VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* L_3;
		L_3 = VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_inline(L_2, VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_RuntimeMethod_var);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VoiceServiceRequestResults_get_Message_mB5D3F7451AC4CE7DA64F7CAD1C9E8A856B7E2188_inline(L_3, NULL);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_5 = ___request0;
		NullCheck(L_5);
		VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* L_6;
		L_6 = VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_inline(L_5, VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_RuntimeMethod_var);
		NullCheck(L_6);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_7;
		L_7 = VoiceServiceRequestResults_get_ResponseData_m799C34130B5FB50CA3C0EC9B0D437997AFA483A7_inline(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralFB15B199286087ABF3CFB70DE2FEE096A6EE64C3, L_4, L_7, NULL);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_8, NULL);
		// voiceSDKLoggerImpl.LogInteractionEndFailure(request.Results.Message);
		RuntimeObject* L_9 = __this->___voiceSDKLoggerImpl_15;
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_10 = ___request0;
		NullCheck(L_10);
		VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* L_11;
		L_11 = VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_inline(L_10, VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_RuntimeMethod_var);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VoiceServiceRequestResults_get_Message_mB5D3F7451AC4CE7DA64F7CAD1C9E8A856B7E2188_inline(L_11, NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< String_t* >::Invoke(8 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionEndFailure(System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_9, L_12);
		return;
	}

IL_0045:
	{
		// else if (request.State == VoiceRequestState.Canceled)
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_13 = ___request0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VoiceRequest_4_get_State_mD1BF2E4830CA915E79E008BB91B6F53BDFA4748D_inline(L_13, VoiceRequest_4_get_State_mD1BF2E4830CA915E79E008BB91B6F53BDFA4748D_RuntimeMethod_var);
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_0079;
		}
	}
	{
		// VLog.D($"Request Canceled\nMessage: {request.Results.Message}");
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_15 = ___request0;
		NullCheck(L_15);
		VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* L_16;
		L_16 = VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_inline(L_15, VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_RuntimeMethod_var);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VoiceServiceRequestResults_get_Message_mB5D3F7451AC4CE7DA64F7CAD1C9E8A856B7E2188_inline(L_16, NULL);
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC8FA3FC5D47930CB399E570088545EDE20A971DB, L_17, NULL);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_18, NULL);
		// voiceSDKLoggerImpl.LogInteractionEndFailure("aborted");
		RuntimeObject* L_19 = __this->___voiceSDKLoggerImpl_15;
		NullCheck(L_19);
		InterfaceActionInvoker1< String_t* >::Invoke(8 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionEndFailure(System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_19, _stringLiteral0FFEE78AE9B9B70D02D981D757BDC5718500A44C);
		return;
	}

IL_0079:
	{
		// VLog.D($"Request Success");
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(_stringLiteral3071111457D2E6DE5F1B14C4FAB682F6E0FFAB70, NULL);
		// voiceSDKLoggerImpl.LogInteractionEndSuccess();
		RuntimeObject* L_20 = __this->___voiceSDKLoggerImpl_15;
		NullCheck(L_20);
		InterfaceActionInvoker0::Invoke(7 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionEndSuccess() */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_20);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience__ctor_mBAABF86A9EA449A140B9A3E681EF9105FFF034A2 (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	{
		VoiceService__ctor_m0F341EBA993A0F5807334FB75B05C05944E73CAE(__this, NULL);
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::<InitVoiceSDK>b__44_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_U3CInitVoiceSDKU3Eb__44_0_mA9C415566EEC602B8D1049A7DED086FC5AE3EA0D (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	{
		// platformImpl.OnServiceNotAvailableEvent += () => RevertToWitUnity();
		AppVoiceExperience_RevertToWitUnity_m346BC3947D7A11513EFB5124475AABAD5346D7C5(__this, NULL);
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
// System.Void Oculus.Voice.ObjectVoiceExperience::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectVoiceExperience_OnEnable_m5C81BF406B5B0DC98A2CC0F9BC5F29B6EBD6F3E5 (ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleAudioActivation_mDCE09C403DB4C47EACF0D682222B5612AAC2401A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleAudioDeactivation_m6279EA99537432DA17968FAA4BDBBED9714AD0D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleAudioInputStateChange_m4381855B0B7F007431E8DF27C3F016D6FC942640_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleCancel_mE9738C8FB5BBA3DF129C55B3091F3E7D25AD1879_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleComplete_m2C32B1683D6E7F6CB84E1BA5A8B9883404251285_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleDownloadProgressChange_m9734CE103A003552FC7A81D9E84491D6A86D2843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleFailed_m287A00E51235F0AC174758D4999F771703CF09EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleFullTranscription_m4715FACF6F73A80B00599F0CE9B6D4D885487670_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleInit_mFA162C04A84507EFC384B5C3D5CF51FB4B59CE8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandlePartialTranscription_m45DBE1F53C66F3B42DCAA2A76D592D4B35580B7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleSend_mFB1A58D232AB4EB0097A4BC19CF7FD43876B540A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleStartListening_mDDC63B6207D74D4B28F4AD6C56EE9902CC53FB17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleStateChange_m33E50B948D82473ACC0084F0F06E738F24D3A17A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleStopListening_m37B2F847D882DDE51C61FD3EFA93AC2CDAA243BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleSuccess_m91E7A91D3B6827030CD431747AB4198FC6C72568_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleUploadProgressChange_m2400CA40DD77ADDACB5C4FF68F958E7A5F65CC24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF_m8397FDEAFB49032F5E84ED9937CA30800385502C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranscriptionRequestEvents_1_get_OnAudioActivation_m813715AE17139B19DED8A67BD243BCAD21852545_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranscriptionRequestEvents_1_get_OnAudioDeactivation_m2A0E42CD4A4BE3A28DF8C2DA5EBC6E1A75AC1541_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranscriptionRequestEvents_1_get_OnAudioInputStateChange_mF5C332349C5A2F5D34FB2A88A1BCEB000E408AF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranscriptionRequestEvents_1_get_OnFullTranscription_m8DCC37FE078DDDE599940178F24793A948734050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranscriptionRequestEvents_1_get_OnPartialTranscription_mFC81596B72E31A12519D70AC2182360C8DDA69D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranscriptionRequestEvents_1_get_OnStartListening_mD9C59DC7A6C2C2C61AB5A4137E03531704AA5EB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranscriptionRequestEvents_1_get_OnStopListening_m9AD3AED265F5EBB43BBF3845BE8B8398E31F108B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnCancel_m93EF162482A866C17FEA71230F2A67314F27CA79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnComplete_mCF88D3B32BB971E0CDD460436A604C337B58ABA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnDownloadProgressChange_m0752D4341E1C858A84B6A49F92AB49DB51152D49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnFailed_mD9FA83DC2035E8D5C5EA84AF7E7EAC9F2D7AE4C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnInit_m02F0C353A1306EBC0F79EB6C6F1990CBE892D1B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnSend_m6436A95B91606C3B15CB57C5E3591E0230A29CBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnStateChange_mD1D19967DB9E5AD4FE0DFEC8A2E0F2298FAC16C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnSuccess_mFE8C133667AE3019A85E73A5117971DA76BD35FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnUploadProgressChange_mBC40C133A0BD578D98DE0D5E8B227373C09EE05C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_voice) _voice = FindObjectOfType<AppVoiceExperience>();
		AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* L_0 = __this->____voice_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (!_voice) _voice = FindObjectOfType<AppVoiceExperience>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* L_2;
		L_2 = Object_FindObjectOfType_TisAppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF_m8397FDEAFB49032F5E84ED9937CA30800385502C(Object_FindObjectOfType_TisAppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF_m8397FDEAFB49032F5E84ED9937CA30800385502C_RuntimeMethod_var);
		__this->____voice_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____voice_5), (void*)L_2);
	}

IL_0018:
	{
		// _events.OnCancel.AddListener(HandleCancel);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_3 = __this->____events_7;
		NullCheck(L_3);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_4;
		L_4 = VoiceRequestEvents_1_get_OnCancel_m93EF162482A866C17FEA71230F2A67314F27CA79_inline(L_3, VoiceRequestEvents_1_get_OnCancel_m93EF162482A866C17FEA71230F2A67314F27CA79_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_5 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_5, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleCancel_mE9738C8FB5BBA3DF129C55B3091F3E7D25AD1879_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_4, L_5, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		// _events.OnComplete.AddListener(HandleComplete);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_6 = __this->____events_7;
		NullCheck(L_6);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_7;
		L_7 = VoiceRequestEvents_1_get_OnComplete_mCF88D3B32BB971E0CDD460436A604C337B58ABA9_inline(L_6, VoiceRequestEvents_1_get_OnComplete_mCF88D3B32BB971E0CDD460436A604C337B58ABA9_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_8 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_8, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleComplete_m2C32B1683D6E7F6CB84E1BA5A8B9883404251285_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_7, L_8, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		// _events.OnFailed.AddListener(HandleFailed);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_9 = __this->____events_7;
		NullCheck(L_9);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_10;
		L_10 = VoiceRequestEvents_1_get_OnFailed_mD9FA83DC2035E8D5C5EA84AF7E7EAC9F2D7AE4C2_inline(L_9, VoiceRequestEvents_1_get_OnFailed_mD9FA83DC2035E8D5C5EA84AF7E7EAC9F2D7AE4C2_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_11 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_11, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleFailed_m287A00E51235F0AC174758D4999F771703CF09EE_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_10, L_11, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		// _events.OnInit.AddListener(HandleInit);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_12 = __this->____events_7;
		NullCheck(L_12);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_13;
		L_13 = VoiceRequestEvents_1_get_OnInit_m02F0C353A1306EBC0F79EB6C6F1990CBE892D1B7_inline(L_12, VoiceRequestEvents_1_get_OnInit_m02F0C353A1306EBC0F79EB6C6F1990CBE892D1B7_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_14 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_14, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleInit_mFA162C04A84507EFC384B5C3D5CF51FB4B59CE8D_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_13, L_14, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		// _events.OnSend.AddListener(HandleSend);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_15 = __this->____events_7;
		NullCheck(L_15);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_16;
		L_16 = VoiceRequestEvents_1_get_OnSend_m6436A95B91606C3B15CB57C5E3591E0230A29CBD_inline(L_15, VoiceRequestEvents_1_get_OnSend_m6436A95B91606C3B15CB57C5E3591E0230A29CBD_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_17 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_17, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleSend_mFB1A58D232AB4EB0097A4BC19CF7FD43876B540A_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_16, L_17, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		// _events.OnSuccess.AddListener(HandleSuccess);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_18 = __this->____events_7;
		NullCheck(L_18);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_19;
		L_19 = VoiceRequestEvents_1_get_OnSuccess_mFE8C133667AE3019A85E73A5117971DA76BD35FF_inline(L_18, VoiceRequestEvents_1_get_OnSuccess_mFE8C133667AE3019A85E73A5117971DA76BD35FF_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_20 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_20, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleSuccess_m91E7A91D3B6827030CD431747AB4198FC6C72568_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_19, L_20, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		// _events.OnAudioActivation.AddListener(HandleAudioActivation);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_21 = __this->____events_7;
		NullCheck(L_21);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_22;
		L_22 = TranscriptionRequestEvents_1_get_OnAudioActivation_m813715AE17139B19DED8A67BD243BCAD21852545_inline(L_21, TranscriptionRequestEvents_1_get_OnAudioActivation_m813715AE17139B19DED8A67BD243BCAD21852545_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_23 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_23, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleAudioActivation_mDCE09C403DB4C47EACF0D682222B5612AAC2401A_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_22, L_23, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		// _events.OnAudioDeactivation.AddListener(HandleAudioDeactivation);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_24 = __this->____events_7;
		NullCheck(L_24);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_25;
		L_25 = TranscriptionRequestEvents_1_get_OnAudioDeactivation_m2A0E42CD4A4BE3A28DF8C2DA5EBC6E1A75AC1541_inline(L_24, TranscriptionRequestEvents_1_get_OnAudioDeactivation_m2A0E42CD4A4BE3A28DF8C2DA5EBC6E1A75AC1541_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_26 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_26, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleAudioDeactivation_m6279EA99537432DA17968FAA4BDBBED9714AD0D4_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_25, L_26, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		// _events.OnPartialTranscription.AddListener(HandlePartialTranscription);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_27 = __this->____events_7;
		NullCheck(L_27);
		TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE* L_28;
		L_28 = TranscriptionRequestEvents_1_get_OnPartialTranscription_mFC81596B72E31A12519D70AC2182360C8DDA69D5_inline(L_27, TranscriptionRequestEvents_1_get_OnPartialTranscription_mFC81596B72E31A12519D70AC2182360C8DDA69D5_RuntimeMethod_var);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_29 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_29, __this, (intptr_t)((void*)ObjectVoiceExperience_HandlePartialTranscription_m45DBE1F53C66F3B42DCAA2A76D592D4B35580B7B_RuntimeMethod_var), NULL);
		NullCheck(L_28);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_28, L_29, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// _events.OnFullTranscription.AddListener(HandleFullTranscription);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_30 = __this->____events_7;
		NullCheck(L_30);
		TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE* L_31;
		L_31 = TranscriptionRequestEvents_1_get_OnFullTranscription_m8DCC37FE078DDDE599940178F24793A948734050_inline(L_30, TranscriptionRequestEvents_1_get_OnFullTranscription_m8DCC37FE078DDDE599940178F24793A948734050_RuntimeMethod_var);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_32 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_32, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleFullTranscription_m4715FACF6F73A80B00599F0CE9B6D4D885487670_RuntimeMethod_var), NULL);
		NullCheck(L_31);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_31, L_32, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// _events.OnStateChange.AddListener(HandleStateChange);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_33 = __this->____events_7;
		NullCheck(L_33);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_34;
		L_34 = VoiceRequestEvents_1_get_OnStateChange_mD1D19967DB9E5AD4FE0DFEC8A2E0F2298FAC16C2_inline(L_33, VoiceRequestEvents_1_get_OnStateChange_mD1D19967DB9E5AD4FE0DFEC8A2E0F2298FAC16C2_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_35 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_35, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleStateChange_m33E50B948D82473ACC0084F0F06E738F24D3A17A_RuntimeMethod_var), NULL);
		NullCheck(L_34);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_34, L_35, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		// _events.OnStartListening.AddListener(HandleStartListening);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_36 = __this->____events_7;
		NullCheck(L_36);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_37;
		L_37 = TranscriptionRequestEvents_1_get_OnStartListening_mD9C59DC7A6C2C2C61AB5A4137E03531704AA5EB6_inline(L_36, TranscriptionRequestEvents_1_get_OnStartListening_mD9C59DC7A6C2C2C61AB5A4137E03531704AA5EB6_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_38 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_38, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleStartListening_mDDC63B6207D74D4B28F4AD6C56EE9902CC53FB17_RuntimeMethod_var), NULL);
		NullCheck(L_37);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_37, L_38, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		// _events.OnStopListening.AddListener(HandleStopListening);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_39 = __this->____events_7;
		NullCheck(L_39);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_40;
		L_40 = TranscriptionRequestEvents_1_get_OnStopListening_m9AD3AED265F5EBB43BBF3845BE8B8398E31F108B_inline(L_39, TranscriptionRequestEvents_1_get_OnStopListening_m9AD3AED265F5EBB43BBF3845BE8B8398E31F108B_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_41 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_41, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleStopListening_m37B2F847D882DDE51C61FD3EFA93AC2CDAA243BB_RuntimeMethod_var), NULL);
		NullCheck(L_40);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_40, L_41, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		// _events.OnDownloadProgressChange.AddListener(HandleDownloadProgressChange);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_42 = __this->____events_7;
		NullCheck(L_42);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_43;
		L_43 = VoiceRequestEvents_1_get_OnDownloadProgressChange_m0752D4341E1C858A84B6A49F92AB49DB51152D49_inline(L_42, VoiceRequestEvents_1_get_OnDownloadProgressChange_m0752D4341E1C858A84B6A49F92AB49DB51152D49_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_44 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_44, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleDownloadProgressChange_m9734CE103A003552FC7A81D9E84491D6A86D2843_RuntimeMethod_var), NULL);
		NullCheck(L_43);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_43, L_44, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		// _events.OnUploadProgressChange.AddListener(HandleUploadProgressChange);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_45 = __this->____events_7;
		NullCheck(L_45);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_46;
		L_46 = VoiceRequestEvents_1_get_OnUploadProgressChange_mBC40C133A0BD578D98DE0D5E8B227373C09EE05C_inline(L_45, VoiceRequestEvents_1_get_OnUploadProgressChange_mBC40C133A0BD578D98DE0D5E8B227373C09EE05C_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_47 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_47, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleUploadProgressChange_m2400CA40DD77ADDACB5C4FF68F958E7A5F65CC24_RuntimeMethod_var), NULL);
		NullCheck(L_46);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_46, L_47, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		// _events.OnAudioInputStateChange.AddListener(HandleAudioInputStateChange);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_48 = __this->____events_7;
		NullCheck(L_48);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_49;
		L_49 = TranscriptionRequestEvents_1_get_OnAudioInputStateChange_mF5C332349C5A2F5D34FB2A88A1BCEB000E408AF3_inline(L_48, TranscriptionRequestEvents_1_get_OnAudioInputStateChange_mF5C332349C5A2F5D34FB2A88A1BCEB000E408AF3_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_50 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_50, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleAudioInputStateChange_m4381855B0B7F007431E8DF27C3F016D6FC942640_RuntimeMethod_var), NULL);
		NullCheck(L_49);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_49, L_50, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.ObjectVoiceExperience::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectVoiceExperience_OnDisable_m80987F8EB79E8F9243A588E02B38E67DE175330F (ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleAudioActivation_mDCE09C403DB4C47EACF0D682222B5612AAC2401A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleAudioDeactivation_m6279EA99537432DA17968FAA4BDBBED9714AD0D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleAudioInputStateChange_m4381855B0B7F007431E8DF27C3F016D6FC942640_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleCancel_mE9738C8FB5BBA3DF129C55B3091F3E7D25AD1879_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleComplete_m2C32B1683D6E7F6CB84E1BA5A8B9883404251285_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleDownloadProgressChange_m9734CE103A003552FC7A81D9E84491D6A86D2843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleFailed_m287A00E51235F0AC174758D4999F771703CF09EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleFullTranscription_m4715FACF6F73A80B00599F0CE9B6D4D885487670_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleInit_mFA162C04A84507EFC384B5C3D5CF51FB4B59CE8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandlePartialTranscription_m45DBE1F53C66F3B42DCAA2A76D592D4B35580B7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleSend_mFB1A58D232AB4EB0097A4BC19CF7FD43876B540A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleStartListening_mDDC63B6207D74D4B28F4AD6C56EE9902CC53FB17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleStateChange_m33E50B948D82473ACC0084F0F06E738F24D3A17A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleStopListening_m37B2F847D882DDE51C61FD3EFA93AC2CDAA243BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleSuccess_m91E7A91D3B6827030CD431747AB4198FC6C72568_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectVoiceExperience_HandleUploadProgressChange_m2400CA40DD77ADDACB5C4FF68F958E7A5F65CC24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranscriptionRequestEvents_1_get_OnAudioActivation_m813715AE17139B19DED8A67BD243BCAD21852545_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranscriptionRequestEvents_1_get_OnAudioDeactivation_m2A0E42CD4A4BE3A28DF8C2DA5EBC6E1A75AC1541_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranscriptionRequestEvents_1_get_OnAudioInputStateChange_mF5C332349C5A2F5D34FB2A88A1BCEB000E408AF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranscriptionRequestEvents_1_get_OnFullTranscription_m8DCC37FE078DDDE599940178F24793A948734050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranscriptionRequestEvents_1_get_OnPartialTranscription_mFC81596B72E31A12519D70AC2182360C8DDA69D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranscriptionRequestEvents_1_get_OnStartListening_mD9C59DC7A6C2C2C61AB5A4137E03531704AA5EB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranscriptionRequestEvents_1_get_OnStopListening_m9AD3AED265F5EBB43BBF3845BE8B8398E31F108B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnCancel_m93EF162482A866C17FEA71230F2A67314F27CA79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnComplete_mCF88D3B32BB971E0CDD460436A604C337B58ABA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnDownloadProgressChange_m0752D4341E1C858A84B6A49F92AB49DB51152D49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnFailed_mD9FA83DC2035E8D5C5EA84AF7E7EAC9F2D7AE4C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnInit_m02F0C353A1306EBC0F79EB6C6F1990CBE892D1B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnSend_m6436A95B91606C3B15CB57C5E3591E0230A29CBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnStateChange_mD1D19967DB9E5AD4FE0DFEC8A2E0F2298FAC16C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnSuccess_mFE8C133667AE3019A85E73A5117971DA76BD35FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnUploadProgressChange_mBC40C133A0BD578D98DE0D5E8B227373C09EE05C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _events.OnCancel.RemoveListener(HandleCancel);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_0 = __this->____events_7;
		NullCheck(L_0);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_1;
		L_1 = VoiceRequestEvents_1_get_OnCancel_m93EF162482A866C17FEA71230F2A67314F27CA79_inline(L_0, VoiceRequestEvents_1_get_OnCancel_m93EF162482A866C17FEA71230F2A67314F27CA79_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_2 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_2, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleCancel_mE9738C8FB5BBA3DF129C55B3091F3E7D25AD1879_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(L_1, L_2, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		// _events.OnComplete.RemoveListener(HandleComplete);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_3 = __this->____events_7;
		NullCheck(L_3);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_4;
		L_4 = VoiceRequestEvents_1_get_OnComplete_mCF88D3B32BB971E0CDD460436A604C337B58ABA9_inline(L_3, VoiceRequestEvents_1_get_OnComplete_mCF88D3B32BB971E0CDD460436A604C337B58ABA9_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_5 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_5, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleComplete_m2C32B1683D6E7F6CB84E1BA5A8B9883404251285_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(L_4, L_5, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		// _events.OnFailed.RemoveListener(HandleFailed);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_6 = __this->____events_7;
		NullCheck(L_6);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_7;
		L_7 = VoiceRequestEvents_1_get_OnFailed_mD9FA83DC2035E8D5C5EA84AF7E7EAC9F2D7AE4C2_inline(L_6, VoiceRequestEvents_1_get_OnFailed_mD9FA83DC2035E8D5C5EA84AF7E7EAC9F2D7AE4C2_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_8 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_8, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleFailed_m287A00E51235F0AC174758D4999F771703CF09EE_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(L_7, L_8, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		// _events.OnInit.RemoveListener(HandleInit);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_9 = __this->____events_7;
		NullCheck(L_9);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_10;
		L_10 = VoiceRequestEvents_1_get_OnInit_m02F0C353A1306EBC0F79EB6C6F1990CBE892D1B7_inline(L_9, VoiceRequestEvents_1_get_OnInit_m02F0C353A1306EBC0F79EB6C6F1990CBE892D1B7_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_11 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_11, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleInit_mFA162C04A84507EFC384B5C3D5CF51FB4B59CE8D_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(L_10, L_11, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		// _events.OnSend.RemoveListener(HandleSend);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_12 = __this->____events_7;
		NullCheck(L_12);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_13;
		L_13 = VoiceRequestEvents_1_get_OnSend_m6436A95B91606C3B15CB57C5E3591E0230A29CBD_inline(L_12, VoiceRequestEvents_1_get_OnSend_m6436A95B91606C3B15CB57C5E3591E0230A29CBD_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_14 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_14, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleSend_mFB1A58D232AB4EB0097A4BC19CF7FD43876B540A_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(L_13, L_14, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		// _events.OnSuccess.RemoveListener(HandleSuccess);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_15 = __this->____events_7;
		NullCheck(L_15);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_16;
		L_16 = VoiceRequestEvents_1_get_OnSuccess_mFE8C133667AE3019A85E73A5117971DA76BD35FF_inline(L_15, VoiceRequestEvents_1_get_OnSuccess_mFE8C133667AE3019A85E73A5117971DA76BD35FF_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_17 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_17, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleSuccess_m91E7A91D3B6827030CD431747AB4198FC6C72568_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(L_16, L_17, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		// _events.OnAudioActivation.RemoveListener(HandleAudioActivation);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_18 = __this->____events_7;
		NullCheck(L_18);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_19;
		L_19 = TranscriptionRequestEvents_1_get_OnAudioActivation_m813715AE17139B19DED8A67BD243BCAD21852545_inline(L_18, TranscriptionRequestEvents_1_get_OnAudioActivation_m813715AE17139B19DED8A67BD243BCAD21852545_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_20 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_20, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleAudioActivation_mDCE09C403DB4C47EACF0D682222B5612AAC2401A_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(L_19, L_20, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		// _events.OnAudioDeactivation.RemoveListener(HandleAudioDeactivation);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_21 = __this->____events_7;
		NullCheck(L_21);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_22;
		L_22 = TranscriptionRequestEvents_1_get_OnAudioDeactivation_m2A0E42CD4A4BE3A28DF8C2DA5EBC6E1A75AC1541_inline(L_21, TranscriptionRequestEvents_1_get_OnAudioDeactivation_m2A0E42CD4A4BE3A28DF8C2DA5EBC6E1A75AC1541_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_23 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_23, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleAudioDeactivation_m6279EA99537432DA17968FAA4BDBBED9714AD0D4_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(L_22, L_23, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		// _events.OnFullTranscription.RemoveListener(HandleFullTranscription);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_24 = __this->____events_7;
		NullCheck(L_24);
		TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE* L_25;
		L_25 = TranscriptionRequestEvents_1_get_OnFullTranscription_m8DCC37FE078DDDE599940178F24793A948734050_inline(L_24, TranscriptionRequestEvents_1_get_OnFullTranscription_m8DCC37FE078DDDE599940178F24793A948734050_RuntimeMethod_var);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_26 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_26, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleFullTranscription_m4715FACF6F73A80B00599F0CE9B6D4D885487670_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F(L_25, L_26, UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var);
		// _events.OnPartialTranscription.RemoveListener(HandlePartialTranscription);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_27 = __this->____events_7;
		NullCheck(L_27);
		TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE* L_28;
		L_28 = TranscriptionRequestEvents_1_get_OnPartialTranscription_mFC81596B72E31A12519D70AC2182360C8DDA69D5_inline(L_27, TranscriptionRequestEvents_1_get_OnPartialTranscription_mFC81596B72E31A12519D70AC2182360C8DDA69D5_RuntimeMethod_var);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_29 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_29, __this, (intptr_t)((void*)ObjectVoiceExperience_HandlePartialTranscription_m45DBE1F53C66F3B42DCAA2A76D592D4B35580B7B_RuntimeMethod_var), NULL);
		NullCheck(L_28);
		UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F(L_28, L_29, UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var);
		// _events.OnStateChange.RemoveListener(HandleStateChange);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_30 = __this->____events_7;
		NullCheck(L_30);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_31;
		L_31 = VoiceRequestEvents_1_get_OnStateChange_mD1D19967DB9E5AD4FE0DFEC8A2E0F2298FAC16C2_inline(L_30, VoiceRequestEvents_1_get_OnStateChange_mD1D19967DB9E5AD4FE0DFEC8A2E0F2298FAC16C2_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_32 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_32, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleStateChange_m33E50B948D82473ACC0084F0F06E738F24D3A17A_RuntimeMethod_var), NULL);
		NullCheck(L_31);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(L_31, L_32, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		// _events.OnStartListening.RemoveListener(HandleStartListening);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_33 = __this->____events_7;
		NullCheck(L_33);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_34;
		L_34 = TranscriptionRequestEvents_1_get_OnStartListening_mD9C59DC7A6C2C2C61AB5A4137E03531704AA5EB6_inline(L_33, TranscriptionRequestEvents_1_get_OnStartListening_mD9C59DC7A6C2C2C61AB5A4137E03531704AA5EB6_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_35 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_35, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleStartListening_mDDC63B6207D74D4B28F4AD6C56EE9902CC53FB17_RuntimeMethod_var), NULL);
		NullCheck(L_34);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(L_34, L_35, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		// _events.OnStopListening.RemoveListener(HandleStopListening);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_36 = __this->____events_7;
		NullCheck(L_36);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_37;
		L_37 = TranscriptionRequestEvents_1_get_OnStopListening_m9AD3AED265F5EBB43BBF3845BE8B8398E31F108B_inline(L_36, TranscriptionRequestEvents_1_get_OnStopListening_m9AD3AED265F5EBB43BBF3845BE8B8398E31F108B_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_38 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_38, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleStopListening_m37B2F847D882DDE51C61FD3EFA93AC2CDAA243BB_RuntimeMethod_var), NULL);
		NullCheck(L_37);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(L_37, L_38, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		// _events.OnDownloadProgressChange.RemoveListener(HandleDownloadProgressChange);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_39 = __this->____events_7;
		NullCheck(L_39);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_40;
		L_40 = VoiceRequestEvents_1_get_OnDownloadProgressChange_m0752D4341E1C858A84B6A49F92AB49DB51152D49_inline(L_39, VoiceRequestEvents_1_get_OnDownloadProgressChange_m0752D4341E1C858A84B6A49F92AB49DB51152D49_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_41 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_41, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleDownloadProgressChange_m9734CE103A003552FC7A81D9E84491D6A86D2843_RuntimeMethod_var), NULL);
		NullCheck(L_40);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(L_40, L_41, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		// _events.OnUploadProgressChange.RemoveListener(HandleUploadProgressChange);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_42 = __this->____events_7;
		NullCheck(L_42);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_43;
		L_43 = VoiceRequestEvents_1_get_OnUploadProgressChange_mBC40C133A0BD578D98DE0D5E8B227373C09EE05C_inline(L_42, VoiceRequestEvents_1_get_OnUploadProgressChange_mBC40C133A0BD578D98DE0D5E8B227373C09EE05C_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_44 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_44, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleUploadProgressChange_m2400CA40DD77ADDACB5C4FF68F958E7A5F65CC24_RuntimeMethod_var), NULL);
		NullCheck(L_43);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(L_43, L_44, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		// _events.OnAudioInputStateChange.RemoveListener(HandleAudioInputStateChange);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_45 = __this->____events_7;
		NullCheck(L_45);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_46;
		L_46 = TranscriptionRequestEvents_1_get_OnAudioInputStateChange_mF5C332349C5A2F5D34FB2A88A1BCEB000E408AF3_inline(L_45, TranscriptionRequestEvents_1_get_OnAudioInputStateChange_mF5C332349C5A2F5D34FB2A88A1BCEB000E408AF3_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_47 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_47, __this, (intptr_t)((void*)ObjectVoiceExperience_HandleAudioInputStateChange_m4381855B0B7F007431E8DF27C3F016D6FC942640_RuntimeMethod_var), NULL);
		NullCheck(L_46);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(L_46, L_47, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.ObjectVoiceExperience::HandleAudioInputStateChange(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectVoiceExperience_HandleAudioInputStateChange_m4381855B0B7F007431E8DF27C3F016D6FC942640 (ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DCA7ABB7665F39A2018B81163C1408CAD7D1078);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMessage("OnAudioInputStateChange", request, SendMessageOptions.DontRequireReceiver);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_0 = ___request0;
		Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459(__this, _stringLiteral7DCA7ABB7665F39A2018B81163C1408CAD7D1078, L_0, 1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.ObjectVoiceExperience::HandleUploadProgressChange(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectVoiceExperience_HandleUploadProgressChange_m2400CA40DD77ADDACB5C4FF68F958E7A5F65CC24 (ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5F5BF1922B226E3D4630BD3232DEBE4F927C7DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMessage("OnUploadProgressChange", request, SendMessageOptions.DontRequireReceiver);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_0 = ___request0;
		Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459(__this, _stringLiteralA5F5BF1922B226E3D4630BD3232DEBE4F927C7DE, L_0, 1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.ObjectVoiceExperience::HandleDownloadProgressChange(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectVoiceExperience_HandleDownloadProgressChange_m9734CE103A003552FC7A81D9E84491D6A86D2843 (ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE7B62EEB89F8DE61743260B194DFADDDC2372C1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMessage("OnDownloadProgressChange", request, SendMessageOptions.DontRequireReceiver);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_0 = ___request0;
		Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459(__this, _stringLiteralAE7B62EEB89F8DE61743260B194DFADDDC2372C1, L_0, 1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.ObjectVoiceExperience::HandleStopListening(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectVoiceExperience_HandleStopListening_m37B2F847D882DDE51C61FD3EFA93AC2CDAA243BB (ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD279B34956BA7F8E34C5C3AFF65333266E085D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMessage("OnStopListening", request, SendMessageOptions.DontRequireReceiver);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_0 = ___request0;
		Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459(__this, _stringLiteralBD279B34956BA7F8E34C5C3AFF65333266E085D6, L_0, 1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.ObjectVoiceExperience::HandleStartListening(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectVoiceExperience_HandleStartListening_mDDC63B6207D74D4B28F4AD6C56EE9902CC53FB17 (ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD4F4E562E3D5D78A8F85CA721593F333654CFCE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMessage("OnStartListening", request, SendMessageOptions.DontRequireReceiver);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_0 = ___request0;
		Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459(__this, _stringLiteralFD4F4E562E3D5D78A8F85CA721593F333654CFCE, L_0, 1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.ObjectVoiceExperience::HandleStateChange(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectVoiceExperience_HandleStateChange_m33E50B948D82473ACC0084F0F06E738F24D3A17A (ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral112AEE07A72CC5B0BD54135F5BEBD553BC960DCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMessage("OnStateChange", request, SendMessageOptions.DontRequireReceiver);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_0 = ___request0;
		Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459(__this, _stringLiteral112AEE07A72CC5B0BD54135F5BEBD553BC960DCC, L_0, 1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.ObjectVoiceExperience::HandleFullTranscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectVoiceExperience_HandleFullTranscription_m4715FACF6F73A80B00599F0CE9B6D4D885487670 (ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827* __this, String_t* ___transcription0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92880054127C75525C53DE67A3AC1E56944CD8F5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMessage("OnFullTranscription", transcription, SendMessageOptions.DontRequireReceiver);
		String_t* L_0 = ___transcription0;
		Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459(__this, _stringLiteral92880054127C75525C53DE67A3AC1E56944CD8F5, L_0, 1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.ObjectVoiceExperience::HandlePartialTranscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectVoiceExperience_HandlePartialTranscription_m45DBE1F53C66F3B42DCAA2A76D592D4B35580B7B (ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827* __this, String_t* ___transcription0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60B5F0B94F9F43FCA0CB9E41D3FA61B9254BDC05);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMessage("OnPartialTranscription", transcription, SendMessageOptions.DontRequireReceiver);
		String_t* L_0 = ___transcription0;
		Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459(__this, _stringLiteral60B5F0B94F9F43FCA0CB9E41D3FA61B9254BDC05, L_0, 1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.ObjectVoiceExperience::HandleAudioDeactivation(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectVoiceExperience_HandleAudioDeactivation_m6279EA99537432DA17968FAA4BDBBED9714AD0D4 (ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DFEA97252D648F4EA2A6B771F82146E5CED7D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMessage("OnAudioDeactivation", request, SendMessageOptions.DontRequireReceiver);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_0 = ___request0;
		Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459(__this, _stringLiteral23DFEA97252D648F4EA2A6B771F82146E5CED7D8, L_0, 1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.ObjectVoiceExperience::HandleAudioActivation(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectVoiceExperience_HandleAudioActivation_mDCE09C403DB4C47EACF0D682222B5612AAC2401A (ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FA7542A896F56F6303AD171587806AB0CDBD95D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMessage("OnAudioActivation", request, SendMessageOptions.DontRequireReceiver);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_0 = ___request0;
		Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459(__this, _stringLiteral8FA7542A896F56F6303AD171587806AB0CDBD95D, L_0, 1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.ObjectVoiceExperience::HandleSuccess(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectVoiceExperience_HandleSuccess_m91E7A91D3B6827030CD431747AB4198FC6C72568 (ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E3E2576A59667A5ADD34DEA55FAAF0634D3379E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMessage("OnSuccess", request, SendMessageOptions.DontRequireReceiver);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_0 = ___request0;
		Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459(__this, _stringLiteral5E3E2576A59667A5ADD34DEA55FAAF0634D3379E, L_0, 1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.ObjectVoiceExperience::HandleSend(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectVoiceExperience_HandleSend_mFB1A58D232AB4EB0097A4BC19CF7FD43876B540A (ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CFC2EF3D9EDDF6FCDC092F234CE3CD4452F0038);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMessage("OnSend", request, SendMessageOptions.DontRequireReceiver);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_0 = ___request0;
		Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459(__this, _stringLiteral3CFC2EF3D9EDDF6FCDC092F234CE3CD4452F0038, L_0, 1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.ObjectVoiceExperience::HandleInit(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectVoiceExperience_HandleInit_mFA162C04A84507EFC384B5C3D5CF51FB4B59CE8D (ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58E6C2EC507A286B7251F62BDC9CAE9A390FC260);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMessage("OnInit", request, SendMessageOptions.DontRequireReceiver);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_0 = ___request0;
		Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459(__this, _stringLiteral58E6C2EC507A286B7251F62BDC9CAE9A390FC260, L_0, 1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.ObjectVoiceExperience::HandleFailed(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectVoiceExperience_HandleFailed_m287A00E51235F0AC174758D4999F771703CF09EE (ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1843B1E941F6A3C0E4110772113431741BE3E061);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SendMessage("OnFailed", request, SendMessageOptions.DontRequireReceiver);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_0 = ___request0;
		Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459(__this, _stringLiteral1843B1E941F6A3C0E4110772113431741BE3E061, L_0, 1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.ObjectVoiceExperience::HandleComplete(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectVoiceExperience_HandleComplete_m2C32B1683D6E7F6CB84E1BA5A8B9883404251285 (ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m8CED891B50C804B13259BD552FD7621CFF6CF7E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44B2D05B30930277A76F515F28030129C61E365D);
		s_Il2CppMethodInitialized = true;
	}
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* G_B2_0 = NULL;
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* G_B1_0 = NULL;
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B4_0 = NULL;
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B3_0 = NULL;
	{
		// _voiceEvents?.OnComplete?.Invoke(request);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_0 = __this->____voiceEvents_4;
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_001d;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_2;
		L_2 = SpeechEvents_get_OnComplete_m9FD0FF1FDEA3E57022FA443D9D27A91108EC4BB9_inline(G_B2_0, NULL);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0017;
		}
	}
	{
		goto IL_001d;
	}

IL_0017:
	{
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_4 = ___request0;
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_m8CED891B50C804B13259BD552FD7621CFF6CF7E5(G_B4_0, L_4, UnityEvent_1_Invoke_m8CED891B50C804B13259BD552FD7621CFF6CF7E5_RuntimeMethod_var);
	}

IL_001d:
	{
		// SendMessage("OnComplete", request, SendMessageOptions.DontRequireReceiver);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_5 = ___request0;
		Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459(__this, _stringLiteral44B2D05B30930277A76F515F28030129C61E365D, L_5, 1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.ObjectVoiceExperience::HandleCancel(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectVoiceExperience_HandleCancel_mE9738C8FB5BBA3DF129C55B3091F3E7D25AD1879 (ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99F5492A05A8C160F59C1B0615E2B0A504E56678);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* G_B2_0 = NULL;
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* G_B1_0 = NULL;
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* G_B4_0 = NULL;
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* G_B3_0 = NULL;
	{
		// _voiceEvents?.OnCanceled?.Invoke("");
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_0 = __this->____voiceEvents_4;
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0021;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_2;
		L_2 = SpeechEvents_get_OnCanceled_mC99F35015A99C7E082341B8E8DA65FAF1E5B7D6C_inline(G_B2_0, NULL);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0017;
		}
	}
	{
		goto IL_0021;
	}

IL_0017:
	{
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B4_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_0021:
	{
		// SendMessage("OnCancel", request, SendMessageOptions.DontRequireReceiver);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_4 = ___request0;
		Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459(__this, _stringLiteral99F5492A05A8C160F59C1B0615E2B0A504E56678, L_4, 1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.ObjectVoiceExperience::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectVoiceExperience_Activate_m563E3E5554C85EDD109A8FC9067133D7611E9A97 (ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _activation = _voice.Activate(new WitRequestOptions(), _events);
		AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* L_0 = __this->____voice_5;
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_1 = (WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483*)il2cpp_codegen_object_new(WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WitRequestOptions__ctor_mE0690E218F01FC193447FCFACBD3A3BFF60AADCF(L_1, NULL);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_2 = __this->____events_7;
		NullCheck(L_0);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_3;
		L_3 = VirtualFuncInvoker2< VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536*, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483*, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* >::Invoke(43 /* Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.VoiceService::Activate(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents) */, L_0, L_1, L_2);
		__this->____activation_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activation_6), (void*)L_3);
		// }
		return;
	}
}
// System.Void Oculus.Voice.ObjectVoiceExperience::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectVoiceExperience_Deactivate_mA7FD9801052D4ABED413FF169BD6C6317F0BC5A5 (ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC1A73A406A2B8A6BA7CDD3AE6E608083E7333CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _activation.Cancel();
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_0 = __this->____activation_6;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(27 /* System.Void Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::Cancel(System.String) */, L_0, _stringLiteralBC1A73A406A2B8A6BA7CDD3AE6E608083E7333CC);
		// }
		return;
	}
}
// System.Void Oculus.Voice.ObjectVoiceExperience::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectVoiceExperience__ctor_mD5361ED635E44EB4C460882EA10AEA56CEAE732B (ObjectVoiceExperience_t339F01109124CA1ACBC8AD389BC62D206EC1D827* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private VoiceEvents _voiceEvents = new VoiceEvents();
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_0 = (VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9*)il2cpp_codegen_object_new(VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		VoiceEvents__ctor_m08A9CD5D70F02629DAD941C6F045D838E3E7D619(L_0, NULL);
		__this->____voiceEvents_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____voiceEvents_4), (void*)L_0);
		// private VoiceServiceRequestEvents _events = new VoiceServiceRequestEvents();
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_1 = (VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838*)il2cpp_codegen_object_new(VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		VoiceServiceRequestEvents__ctor_mC421AD9C8287440D1C67B9D33B14E25C8AA9DBD8(L_1, NULL);
		__this->____events_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____events_7), (void*)L_1);
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
// System.Void Oculus.Voice.VoiceSDKConstants::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKConstants__cctor_m3E006C11E3876C36B8F4508A49FD4C973E5811F1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral548DD7D06577C4334EC607D75585201092F56682);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool _isInitialized = false;
		((VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_StaticFields*)il2cpp_codegen_static_fields_for(VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var))->____isInitialized_0 = (bool)0;
		// private static string _sdkVersion = "56.0.0.170.155";
		((VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_StaticFields*)il2cpp_codegen_static_fields_for(VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var))->____sdkVersion_1 = _stringLiteral548DD7D06577C4334EC607D75585201092F56682;
		Il2CppCodeGenWriteBarrier((void**)(&((VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_StaticFields*)il2cpp_codegen_static_fields_for(VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var))->____sdkVersion_1), (void*)_stringLiteral548DD7D06577C4334EC607D75585201092F56682);
		// Init();
		VoiceSDKConstants_Init_m6ADBE1F6E5E2A03F39AC50BF2E55095F356D82F2(NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.VoiceSDKConstants::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKConstants_Init_m6ADBE1F6E5E2A03F39AC50BF2E55095F356D82F2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKConstants_OnCustomUserAgent_m0811AEC65F29CC362B219BDC9F99CCA2E2E077E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isInitialized)
		il2cpp_codegen_runtime_class_init_inline(VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var);
		bool L_0 = ((VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_StaticFields*)il2cpp_codegen_static_fields_for(VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var))->____isInitialized_0;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// _isInitialized = true;
		il2cpp_codegen_runtime_class_init_inline(VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var);
		((VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_StaticFields*)il2cpp_codegen_static_fields_for(VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var))->____isInitialized_0 = (bool)1;
		// WitVRequest.OnProvideCustomUserAgent += OnCustomUserAgent;
		Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6* L_1 = (Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6*)il2cpp_codegen_object_new(Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m1540C8C2516AEA9F0AEE87470E2815CA36C560C7(L_1, NULL, (intptr_t)((void*)VoiceSDKConstants_OnCustomUserAgent_m0811AEC65F29CC362B219BDC9F99CCA2E2E077E1_RuntimeMethod_var), NULL);
		WitVRequest_add_OnProvideCustomUserAgent_m0ADDFB64122A96484E3714F6C73F60B9E120175F(L_1, NULL);
		// }
		return;
	}
}
// System.String Oculus.Voice.VoiceSDKConstants::get_SdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VoiceSDKConstants_get_SdkVersion_mF133D85DC043FBC29879693987576EA9D6371F28 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2894440BAEB414CE20DA9ED3F006FA5CDAC39A0A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(_sdkVersion))
		il2cpp_codegen_runtime_class_init_inline(VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var);
		String_t* L_0 = ((VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_StaticFields*)il2cpp_codegen_static_fields_for(VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var))->____sdkVersion_1;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// _sdkVersion = WitConstants.SDK_VERSION;
		il2cpp_codegen_runtime_class_init_inline(VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var);
		((VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_StaticFields*)il2cpp_codegen_static_fields_for(VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var))->____sdkVersion_1 = _stringLiteral2894440BAEB414CE20DA9ED3F006FA5CDAC39A0A;
		Il2CppCodeGenWriteBarrier((void**)(&((VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_StaticFields*)il2cpp_codegen_static_fields_for(VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var))->____sdkVersion_1), (void*)_stringLiteral2894440BAEB414CE20DA9ED3F006FA5CDAC39A0A);
	}

IL_0016:
	{
		// return _sdkVersion;
		il2cpp_codegen_runtime_class_init_inline(VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var);
		String_t* L_2 = ((VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_StaticFields*)il2cpp_codegen_static_fields_for(VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var))->____sdkVersion_1;
		return L_2;
	}
}
// System.Void Oculus.Voice.VoiceSDKConstants::OnCustomUserAgent(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKConstants_OnCustomUserAgent_m0811AEC65F29CC362B219BDC9F99CCA2E2E077E1 (StringBuilder_t* ___sb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8091E2D2F6CED8F44D831FBF9A846D40850FA72);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!sb.ToString().StartsWith(_userAgentPrefix))
		StringBuilder_t* L_0 = ___sb0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		NullCheck(L_1);
		bool L_2;
		L_2 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_1, _stringLiteralC8091E2D2F6CED8F44D831FBF9A846D40850FA72, NULL);
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// sb.Insert(0, $"{_userAgentPrefix}{SdkVersion},");
		StringBuilder_t* L_3 = ___sb0;
		il2cpp_codegen_runtime_class_init_inline(VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = VoiceSDKConstants_get_SdkVersion_mF133D85DC043FBC29879693987576EA9D6371F28(NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC8091E2D2F6CED8F44D831FBF9A846D40850FA72, L_4, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Insert_mEA426100381DD65FB6A891BA28B5F1208BEDDD29(L_3, 0, L_5, NULL);
	}

IL_002e:
	{
		// }
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
// Meta.WitAi.TTS.TTSService Oculus.Voice.Logging.TTSServiceLogging::get_Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8 (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, const RuntimeMethod* method) 
{
	{
		// public TTSService Service { get; private set; }
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0 = __this->___U3CServiceU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Oculus.Voice.Logging.TTSServiceLogging::set_Service(Meta.WitAi.TTS.TTSService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_set_Service_mE541F5CC89C9F314DE22FA23B1FB58B6FACBAE83 (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* ___value0, const RuntimeMethod* method) 
{
	{
		// public TTSService Service { get; private set; }
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0 = ___value0;
		__this->___U3CServiceU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CServiceU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Voice.Logging.TTSServiceLogging::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_Awake_mDD95A9EF575944FB477B292C18654D4346377194 (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_m87A41B25D0955A50171FAB790A096BB0B9102DD5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Service = gameObject.GetComponent<TTSService>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_1;
		L_1 = GameObject_GetComponent_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_m87A41B25D0955A50171FAB790A096BB0B9102DD5(L_0, GameObject_GetComponent_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_m87A41B25D0955A50171FAB790A096BB0B9102DD5_RuntimeMethod_var);
		TTSServiceLogging_set_Service_mE541F5CC89C9F314DE22FA23B1FB58B6FACBAE83_inline(__this, L_1, NULL);
		// InitLogger();
		TTSServiceLogging_InitLogger_m69B656F2FAFC204C20B4168657477443489C7613(__this, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Logging.TTSServiceLogging::InitLogger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_InitLogger_m69B656F2FAFC204C20B4168657477443489C7613 (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIWitConfigurationProvider_t10F6E96EFD591280386EEE382C0B2E94325333C3_m5E35E768F44DAAA094DC5C1B3C6F30B23A6080DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWitConfigurationProvider_t10F6E96EFD591280386EEE382C0B2E94325333C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993* V_0 = NULL;
	WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* V_1 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* G_B3_0 = NULL;
	{
		// var loggerImpl = new VoiceSDKPlatformLoggerImpl();
		VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993* L_0 = (VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993*)il2cpp_codegen_object_new(VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		VoiceSDKPlatformLoggerImpl__ctor_mB98388D0B9F59FF41DA4D886AF2BE550F914E2DF(L_0, NULL);
		V_0 = L_0;
		// loggerImpl.Connect(VoiceSDKConstants.SdkVersion);
		VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(VoiceSDKConstants_t27DC9ADECBF643878C5C04C1E2AD1B915A47D823_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = VoiceSDKConstants_get_SdkVersion_mF133D85DC043FBC29879693987576EA9D6371F28(NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(4 /* System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKLoggerBinding>::Connect(System.String) */, L_1, L_2);
		// _voiceSDKLoggerImpl = loggerImpl;
		VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993* L_3 = V_0;
		__this->____voiceSDKLoggerImpl_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____voiceSDKLoggerImpl_6), (void*)L_3);
		// WitConfiguration witConfig = Service.GetComponent<IWitConfigurationProvider>()?.Configuration;
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_4;
		L_4 = TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = Component_GetComponent_TisIWitConfigurationProvider_t10F6E96EFD591280386EEE382C0B2E94325333C3_m5E35E768F44DAAA094DC5C1B3C6F30B23A6080DF(L_4, Component_GetComponent_TisIWitConfigurationProvider_t10F6E96EFD591280386EEE382C0B2E94325333C3_m5E35E768F44DAAA094DC5C1B3C6F30B23A6080DF_RuntimeMethod_var);
		RuntimeObject* L_6 = L_5;
		G_B1_0 = L_6;
		if (L_6)
		{
			G_B2_0 = L_6;
			goto IL_002a;
		}
	}
	{
		G_B3_0 = ((WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E*)(NULL));
		goto IL_002f;
	}

IL_002a:
	{
		NullCheck(G_B2_0);
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_7;
		L_7 = InterfaceFuncInvoker0< WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* >::Invoke(0 /* Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.Interfaces.IWitConfigurationProvider::get_Configuration() */, IWitConfigurationProvider_t10F6E96EFD591280386EEE382C0B2E94325333C3_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_7;
	}

IL_002f:
	{
		V_1 = G_B3_0;
		// if (witConfig != null)
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_004a;
		}
	}
	{
		// _voiceSDKLoggerImpl.WitApplication = witConfig.GetLoggerAppId();
		RuntimeObject* L_10 = __this->____voiceSDKLoggerImpl_6;
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_11 = V_1;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = WitConfiguration_GetLoggerAppId_m320C33D2DC3EF5956C053F588C67CF7154F04728(L_11, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::set_WitApplication(System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_10, L_12);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Logging.TTSServiceLogging::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_OnEnable_mB5761CBB8EA224E5E6DCA63AE465B287D64472B5 (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSServiceLogging_OnRequestBegin_m556775CDF19AF575A878B1CB76A02F34E3933245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSServiceLogging_OnRequestCancel_m8BE61F8D30DFFC9A8B3A84AC3D39865448609331_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSServiceLogging_OnRequestComplete_m9550AE3127C6B5786C71229DFA2FCA59C3D1E602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSServiceLogging_OnRequestError_mF6C261823983A6ACA3A7B245931079B00F812AFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSServiceLogging_OnRequestFirstResponse_m407B49045E82665355331C61A1DC5F375A3C20D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSServiceLogging_OnRequestReady_m2C33A60627A914B3A79B51E047B405B25FD65173_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_voiceSDKLoggerImpl != null)
		RuntimeObject* L_0 = __this->____voiceSDKLoggerImpl_6;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// _voiceSDKLoggerImpl.ShouldLogToConsole = EnableConsoleLogging;
		RuntimeObject* L_1 = __this->____voiceSDKLoggerImpl_6;
		bool L_2 = __this->___EnableConsoleLogging_4;
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::set_ShouldLogToConsole(System.Boolean) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0019:
	{
		// if (Service)
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_3;
		L_3 = TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_010d;
		}
	}
	{
		// Service.Events.WebRequest.OnRequestBegin.AddListener(OnRequestBegin);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_5;
		L_5 = TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline(__this, NULL);
		NullCheck(L_5);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_6;
		L_6 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(L_5, NULL);
		NullCheck(L_6);
		TTSWebRequestEvents_tC4FECDF01945794BF9C37C4448B61EE0134CC1E5* L_7 = L_6->___WebRequest_2;
		NullCheck(L_7);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_8 = L_7->___OnRequestBegin_0;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_9 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_9, __this, (intptr_t)((void*)TTSServiceLogging_OnRequestBegin_m556775CDF19AF575A878B1CB76A02F34E3933245_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_8, L_9, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		// Service.Events.WebRequest.OnRequestCancel.AddListener(OnRequestCancel);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_10;
		L_10 = TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline(__this, NULL);
		NullCheck(L_10);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_11;
		L_11 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(L_10, NULL);
		NullCheck(L_11);
		TTSWebRequestEvents_tC4FECDF01945794BF9C37C4448B61EE0134CC1E5* L_12 = L_11->___WebRequest_2;
		NullCheck(L_12);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_13 = L_12->___OnRequestCancel_1;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_14 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_14, __this, (intptr_t)((void*)TTSServiceLogging_OnRequestCancel_m8BE61F8D30DFFC9A8B3A84AC3D39865448609331_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_13, L_14, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		// Service.Events.WebRequest.OnRequestError.AddListener(OnRequestError);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_15;
		L_15 = TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline(__this, NULL);
		NullCheck(L_15);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_16;
		L_16 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(L_15, NULL);
		NullCheck(L_16);
		TTSWebRequestEvents_tC4FECDF01945794BF9C37C4448B61EE0134CC1E5* L_17 = L_16->___WebRequest_2;
		NullCheck(L_17);
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_18 = L_17->___OnRequestError_2;
		UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* L_19 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*)il2cpp_codegen_object_new(UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3(L_19, __this, (intptr_t)((void*)TTSServiceLogging_OnRequestError_mF6C261823983A6ACA3A7B245931079B00F812AFD_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183(L_18, L_19, UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183_RuntimeMethod_var);
		// Service.Events.WebRequest.OnRequestFirstResponse.AddListener(OnRequestFirstResponse);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_20;
		L_20 = TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline(__this, NULL);
		NullCheck(L_20);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_21;
		L_21 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(L_20, NULL);
		NullCheck(L_21);
		TTSWebRequestEvents_tC4FECDF01945794BF9C37C4448B61EE0134CC1E5* L_22 = L_21->___WebRequest_2;
		NullCheck(L_22);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_23 = L_22->___OnRequestFirstResponse_3;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_24 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_24, __this, (intptr_t)((void*)TTSServiceLogging_OnRequestFirstResponse_m407B49045E82665355331C61A1DC5F375A3C20D3_RuntimeMethod_var), NULL);
		NullCheck(L_23);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_23, L_24, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		// Service.Events.WebRequest.OnRequestReady.AddListener(OnRequestReady);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_25;
		L_25 = TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline(__this, NULL);
		NullCheck(L_25);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_26;
		L_26 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(L_25, NULL);
		NullCheck(L_26);
		TTSWebRequestEvents_tC4FECDF01945794BF9C37C4448B61EE0134CC1E5* L_27 = L_26->___WebRequest_2;
		NullCheck(L_27);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_28 = L_27->___OnRequestReady_4;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_29 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_29, __this, (intptr_t)((void*)TTSServiceLogging_OnRequestReady_m2C33A60627A914B3A79B51E047B405B25FD65173_RuntimeMethod_var), NULL);
		NullCheck(L_28);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_28, L_29, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		// Service.Events.WebRequest.OnRequestComplete.AddListener(OnRequestComplete);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_30;
		L_30 = TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline(__this, NULL);
		NullCheck(L_30);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_31;
		L_31 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(L_30, NULL);
		NullCheck(L_31);
		TTSWebRequestEvents_tC4FECDF01945794BF9C37C4448B61EE0134CC1E5* L_32 = L_31->___WebRequest_2;
		NullCheck(L_32);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_33 = L_32->___OnRequestComplete_5;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_34 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_34, __this, (intptr_t)((void*)TTSServiceLogging_OnRequestComplete_m9550AE3127C6B5786C71229DFA2FCA59C3D1E602_RuntimeMethod_var), NULL);
		NullCheck(L_33);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_33, L_34, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Logging.TTSServiceLogging::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_OnDisable_m601C4CDFD9637AEE2B2CB4B950E056EE337436F1 (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSServiceLogging_OnRequestBegin_m556775CDF19AF575A878B1CB76A02F34E3933245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSServiceLogging_OnRequestCancel_m8BE61F8D30DFFC9A8B3A84AC3D39865448609331_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSServiceLogging_OnRequestComplete_m9550AE3127C6B5786C71229DFA2FCA59C3D1E602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSServiceLogging_OnRequestError_mF6C261823983A6ACA3A7B245931079B00F812AFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSServiceLogging_OnRequestFirstResponse_m407B49045E82665355331C61A1DC5F375A3C20D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSServiceLogging_OnRequestReady_m2C33A60627A914B3A79B51E047B405B25FD65173_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Service)
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0;
		L_0 = TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_00f4;
		}
	}
	{
		// Service.Events.WebRequest.OnRequestBegin.RemoveListener(OnRequestBegin);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_2;
		L_2 = TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline(__this, NULL);
		NullCheck(L_2);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_3;
		L_3 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(L_2, NULL);
		NullCheck(L_3);
		TTSWebRequestEvents_tC4FECDF01945794BF9C37C4448B61EE0134CC1E5* L_4 = L_3->___WebRequest_2;
		NullCheck(L_4);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_5 = L_4->___OnRequestBegin_0;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_6 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_6, __this, (intptr_t)((void*)TTSServiceLogging_OnRequestBegin_m556775CDF19AF575A878B1CB76A02F34E3933245_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_5, L_6, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		// Service.Events.WebRequest.OnRequestCancel.RemoveListener(OnRequestCancel);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_7;
		L_7 = TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline(__this, NULL);
		NullCheck(L_7);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_8;
		L_8 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(L_7, NULL);
		NullCheck(L_8);
		TTSWebRequestEvents_tC4FECDF01945794BF9C37C4448B61EE0134CC1E5* L_9 = L_8->___WebRequest_2;
		NullCheck(L_9);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_10 = L_9->___OnRequestCancel_1;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_11 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_11, __this, (intptr_t)((void*)TTSServiceLogging_OnRequestCancel_m8BE61F8D30DFFC9A8B3A84AC3D39865448609331_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_10, L_11, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		// Service.Events.WebRequest.OnRequestError.RemoveListener(OnRequestError);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_12;
		L_12 = TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline(__this, NULL);
		NullCheck(L_12);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_13;
		L_13 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(L_12, NULL);
		NullCheck(L_13);
		TTSWebRequestEvents_tC4FECDF01945794BF9C37C4448B61EE0134CC1E5* L_14 = L_13->___WebRequest_2;
		NullCheck(L_14);
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_15 = L_14->___OnRequestError_2;
		UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* L_16 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*)il2cpp_codegen_object_new(UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3(L_16, __this, (intptr_t)((void*)TTSServiceLogging_OnRequestError_mF6C261823983A6ACA3A7B245931079B00F812AFD_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C(L_15, L_16, UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C_RuntimeMethod_var);
		// Service.Events.WebRequest.OnRequestFirstResponse.RemoveListener(OnRequestFirstResponse);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_17;
		L_17 = TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline(__this, NULL);
		NullCheck(L_17);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_18;
		L_18 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(L_17, NULL);
		NullCheck(L_18);
		TTSWebRequestEvents_tC4FECDF01945794BF9C37C4448B61EE0134CC1E5* L_19 = L_18->___WebRequest_2;
		NullCheck(L_19);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_20 = L_19->___OnRequestFirstResponse_3;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_21 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_21, __this, (intptr_t)((void*)TTSServiceLogging_OnRequestFirstResponse_m407B49045E82665355331C61A1DC5F375A3C20D3_RuntimeMethod_var), NULL);
		NullCheck(L_20);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_20, L_21, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		// Service.Events.WebRequest.OnRequestReady.RemoveListener(OnRequestReady);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_22;
		L_22 = TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline(__this, NULL);
		NullCheck(L_22);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_23;
		L_23 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(L_22, NULL);
		NullCheck(L_23);
		TTSWebRequestEvents_tC4FECDF01945794BF9C37C4448B61EE0134CC1E5* L_24 = L_23->___WebRequest_2;
		NullCheck(L_24);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_25 = L_24->___OnRequestReady_4;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_26 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_26, __this, (intptr_t)((void*)TTSServiceLogging_OnRequestReady_m2C33A60627A914B3A79B51E047B405B25FD65173_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_25, L_26, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		// Service.Events.WebRequest.OnRequestComplete.RemoveListener(OnRequestComplete);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_27;
		L_27 = TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline(__this, NULL);
		NullCheck(L_27);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_28;
		L_28 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(L_27, NULL);
		NullCheck(L_28);
		TTSWebRequestEvents_tC4FECDF01945794BF9C37C4448B61EE0134CC1E5* L_29 = L_28->___WebRequest_2;
		NullCheck(L_29);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_30 = L_29->___OnRequestComplete_5;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_31 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_31, __this, (intptr_t)((void*)TTSServiceLogging_OnRequestComplete_m9550AE3127C6B5786C71229DFA2FCA59C3D1E602_RuntimeMethod_var), NULL);
		NullCheck(L_30);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_30, L_31, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
	}

IL_00f4:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Logging.TTSServiceLogging::OnRequestBegin(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_OnRequestBegin_m556775CDF19AF575A878B1CB76A02F34E3933245 (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	{
		// LogStart(clipData);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		TTSServiceLogging_LogStart_m81A77CE30006988BAAF6E37F96A75EA3A478CAE0(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Logging.TTSServiceLogging::OnRequestCancel(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_OnRequestCancel_m8BE61F8D30DFFC9A8B3A84AC3D39865448609331 (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FFEE78AE9B9B70D02D981D757BDC5718500A44C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LogComplete(clipData, "aborted");
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		TTSServiceLogging_LogComplete_mDBB8DA4B5B839BD5C58BA45BEB5EBC89BC28E9CF(__this, L_0, _stringLiteral0FFEE78AE9B9B70D02D981D757BDC5718500A44C, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Logging.TTSServiceLogging::OnRequestError(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_OnRequestError_mF6C261823983A6ACA3A7B245931079B00F812AFD (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, String_t* ___error1, const RuntimeMethod* method) 
{
	{
		// LogComplete(clipData, error);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		String_t* L_1 = ___error1;
		TTSServiceLogging_LogComplete_mDBB8DA4B5B839BD5C58BA45BEB5EBC89BC28E9CF(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Logging.TTSServiceLogging::OnRequestFirstResponse(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_OnRequestFirstResponse_m407B49045E82665355331C61A1DC5F375A3C20D3 (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFDD8635A33F297BE7CCE3F542CD9461E76FF3B7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LogTimestamp(clipData, TTS_FIRST_TIME_ANNOTATION);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		TTSServiceLogging_LogTimestamp_m0CA674CF4E8EDF89EBBCF92428921784DC5AB129(__this, L_0, _stringLiteralEFDD8635A33F297BE7CCE3F542CD9461E76FF3B7, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Logging.TTSServiceLogging::OnRequestReady(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_OnRequestReady_m2C33A60627A914B3A79B51E047B405B25FD65173 (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44F8CF1DD153763D204008F1F37945C204372AE8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LogTimestamp(clipData, TTS_READY_TIME_ANNOTATION);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		TTSServiceLogging_LogTimestamp_m0CA674CF4E8EDF89EBBCF92428921784DC5AB129(__this, L_0, _stringLiteral44F8CF1DD153763D204008F1F37945C204372AE8, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Logging.TTSServiceLogging::OnRequestComplete(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_OnRequestComplete_m9550AE3127C6B5786C71229DFA2FCA59C3D1E602 (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	{
		// LogComplete(clipData);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		TTSServiceLogging_LogComplete_mDBB8DA4B5B839BD5C58BA45BEB5EBC89BC28E9CF(__this, L_0, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Logging.TTSServiceLogging::LogStart(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_LogStart_m81A77CE30006988BAAF6E37F96A75EA3A478CAE0 (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioStreamDecodeType_tAB620C01ABB5A19964D7DFE66F2856B9C2B5F7C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5AF46713421C1F94BB11EFFCF0D56D8682E7B06B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral752699A52EB197527BED33C5B99BC4ECEA6CA2C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6AEA7FDCC06A3ECCEE1AF1AF5703BFDA86CD244);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD5890B382C18CBAC2E6BD9433A9A1E32BBDECC0);
		s_Il2CppMethodInitialized = true;
	}
	TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// TTSServiceRequestLog requestData = GetRequestData(clipData);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 L_1;
		L_1 = TTSServiceLogging_GetRequestData_mFCE10C18536F7D5AF25C86EE51980EEB2D77CA6D(__this, L_0, NULL);
		V_0 = L_1;
		// requestData.startTime = DateTime.Now;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		(&V_0)->___startTime_0 = L_2;
		// requestData.annotations = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_3, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		(&V_0)->___annotations_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___annotations_1), (void*)L_3);
		// LogTimestamp(requestData, TTS_START_TIME_ANNOTATION);
		TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 L_4 = V_0;
		TTSServiceLogging_LogTimestamp_m298121CFE42985DBEA970723ACCA552F2DDF64F3(__this, L_4, _stringLiteral752699A52EB197527BED33C5B99BC4ECEA6CA2C5, NULL);
		// LogAnnotate(requestData, TTS_FILETYPE_ANNOTATION, AudioStreamHandler.GetDecodeType(clipData.audioType).ToString());
		TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 L_5 = V_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_6 = ___clipData0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___audioType_2;
		int32_t L_8;
		L_8 = AudioStreamHandler_GetDecodeType_mBF4EE600D82D113CD600FA77380F913FE78A3D43(L_7, NULL);
		V_1 = L_8;
		Il2CppFakeBox<int32_t> L_9(AudioStreamDecodeType_tAB620C01ABB5A19964D7DFE66F2856B9C2B5F7C7_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_10;
		L_10 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_9), NULL);
		TTSServiceLogging_LogAnnotate_mCCEDCC63E21B4A0C5C60563E6FD252A1191AB3F8(__this, L_5, _stringLiteralFD5890B382C18CBAC2E6BD9433A9A1E32BBDECC0, L_10, NULL);
		// LogAnnotate(requestData, TTS_FILESTREAM_ANNOTATION, clipData.queryStream.ToString(CultureInfo.InvariantCulture));
		TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 L_11 = V_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_12 = ___clipData0;
		NullCheck(L_12);
		bool* L_13 = (&L_12->___queryStream_6);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
		L_14 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_15;
		L_15 = Boolean_ToString_m8A8E8910575F649AA72E01649BACE16F0F362FF4(L_13, L_14, NULL);
		TTSServiceLogging_LogAnnotate_mCCEDCC63E21B4A0C5C60563E6FD252A1191AB3F8(__this, L_11, _stringLiteralC6AEA7FDCC06A3ECCEE1AF1AF5703BFDA86CD244, L_15, NULL);
		// _requests[clipData.queryRequestId] = requestData;
		Dictionary_2_t4C79FFD3DA8950C7EDEA3B63EBC17CDF35765011* L_16 = __this->____requests_7;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_17 = ___clipData0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = TTSClipData_get_queryRequestId_m6930268D572D60661944AF7D43A4BA77108882E7_inline(L_17, NULL);
		TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 L_19 = V_0;
		NullCheck(L_16);
		Dictionary_2_set_Item_m5AF46713421C1F94BB11EFFCF0D56D8682E7B06B(L_16, L_18, L_19, Dictionary_2_set_Item_m5AF46713421C1F94BB11EFFCF0D56D8682E7B06B_RuntimeMethod_var);
		// }
		return;
	}
}
// Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog Oculus.Voice.Logging.TTSServiceLogging::GetRequestData(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 TTSServiceLogging_GetRequestData_mFCE10C18536F7D5AF25C86EE51980EEB2D77CA6D (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m38C6401E811ABEFA847926B7653D33164A5DBF2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m96809BA36D32F4A59571E3C7FB63D7614F61C0B2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_requests.ContainsKey(clipData.queryRequestId))
		Dictionary_2_t4C79FFD3DA8950C7EDEA3B63EBC17CDF35765011* L_0 = __this->____requests_7;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___clipData0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = TTSClipData_get_queryRequestId_m6930268D572D60661944AF7D43A4BA77108882E7_inline(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m38C6401E811ABEFA847926B7653D33164A5DBF2D(L_0, L_2, Dictionary_2_ContainsKey_m38C6401E811ABEFA847926B7653D33164A5DBF2D_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// return _requests[clipData.queryRequestId];
		Dictionary_2_t4C79FFD3DA8950C7EDEA3B63EBC17CDF35765011* L_4 = __this->____requests_7;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5 = ___clipData0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = TTSClipData_get_queryRequestId_m6930268D572D60661944AF7D43A4BA77108882E7_inline(L_5, NULL);
		NullCheck(L_4);
		TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 L_7;
		L_7 = Dictionary_2_get_Item_m96809BA36D32F4A59571E3C7FB63D7614F61C0B2(L_4, L_6, Dictionary_2_get_Item_m96809BA36D32F4A59571E3C7FB63D7614F61C0B2_RuntimeMethod_var);
		return L_7;
	}

IL_0025:
	{
		// return new TTSServiceRequestLog();
		il2cpp_codegen_initobj((&V_0), sizeof(TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2));
		TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 L_8 = V_0;
		return L_8;
	}
}
// System.Void Oculus.Voice.Logging.TTSServiceLogging::LogTimestamp(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_LogTimestamp_m0CA674CF4E8EDF89EBBCF92428921784DC5AB129 (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, String_t* ___key1, const RuntimeMethod* method) 
{
	{
		// LogTimestamp(GetRequestData(clipData), key);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 L_1;
		L_1 = TTSServiceLogging_GetRequestData_mFCE10C18536F7D5AF25C86EE51980EEB2D77CA6D(__this, L_0, NULL);
		String_t* L_2 = ___key1;
		TTSServiceLogging_LogTimestamp_m298121CFE42985DBEA970723ACCA552F2DDF64F3(__this, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Logging.TTSServiceLogging::LogTimestamp(Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_LogTimestamp_m298121CFE42985DBEA970723ACCA552F2DDF64F3 (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 ___requestData0, String_t* ___key1, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		// LogAnnotate(requestData, key, DateTimeUtility.ElapsedMilliseconds.ToString());
		TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 L_0 = ___requestData0;
		String_t* L_1 = ___key1;
		int64_t L_2;
		L_2 = DateTimeUtility_get_ElapsedMilliseconds_mFCCD79CB27652B45BB76D679824C381809226602(NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&V_0), NULL);
		TTSServiceLogging_LogAnnotate_mCCEDCC63E21B4A0C5C60563E6FD252A1191AB3F8(__this, L_0, L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Logging.TTSServiceLogging::LogAnnotate(Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_LogAnnotate_mCCEDCC63E21B4A0C5C60563E6FD252A1191AB3F8 (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 ___requestData0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (requestData.annotations != null)
		TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 L_0 = ___requestData0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = L_0.___annotations_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// requestData.annotations[key] = value;
		TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 L_2 = ___requestData0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = L_2.___annotations_1;
		String_t* L_4 = ___key1;
		String_t* L_5 = ___value2;
		NullCheck(L_3);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_3, L_4, L_5, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Logging.TTSServiceLogging::LogComplete(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_LogComplete_mDBB8DA4B5B839BD5C58BA45BEB5EBC89BC28E9CF (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, String_t* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m738809F2B7C254B544E989D865C5E6C02AFB7404_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42803C53AA4A1E97C977D23B6151233E4358454F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BF2D245939E3F8C5FCC94859405A931946FD428);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB4F3A484ED3991575D8B729EC5A620357A4A41B);
		s_Il2CppMethodInitialized = true;
	}
	TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		// TTSServiceRequestLog requestData = GetRequestData(clipData);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 L_1;
		L_1 = TTSServiceLogging_GetRequestData_mFCE10C18536F7D5AF25C86EE51980EEB2D77CA6D(__this, L_0, NULL);
		V_0 = L_1;
		// if (requestData.annotations == null)
		TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 L_2 = V_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = L_2.___annotations_1;
		if (L_3)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// if (!string.IsNullOrEmpty(error))
		String_t* L_4 = ___error1;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		// LogAnnotate(requestData, TTS_ERROR_ANNOTATION, error);
		TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 L_6 = V_0;
		String_t* L_7 = ___error1;
		TTSServiceLogging_LogAnnotate_mCCEDCC63E21B4A0C5C60563E6FD252A1191AB3F8(__this, L_6, _stringLiteral42803C53AA4A1E97C977D23B6151233E4358454F, L_7, NULL);
	}

IL_0026:
	{
		// LogTimestamp(requestData, TTS_FINISH_TIME_ANNOTATION);
		TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 L_8 = V_0;
		TTSServiceLogging_LogTimestamp_m298121CFE42985DBEA970723ACCA552F2DDF64F3(__this, L_8, _stringLiteral4BF2D245939E3F8C5FCC94859405A931946FD428, NULL);
		// if (_voiceSDKLoggerImpl != null)
		RuntimeObject* L_9 = __this->____voiceSDKLoggerImpl_6;
		if (!L_9)
		{
			goto IL_00c0;
		}
	}
	{
		// _voiceSDKLoggerImpl.LogInteractionStart(clipData.queryRequestId, WitConstants.ENDPOINT_TTS);
		RuntimeObject* L_10 = __this->____voiceSDKLoggerImpl_6;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_11 = ___clipData0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = TTSClipData_get_queryRequestId_m6930268D572D60661944AF7D43A4BA77108882E7_inline(L_11, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(6 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionStart(System.String,System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_10, L_12, _stringLiteralAB4F3A484ED3991575D8B729EC5A620357A4A41B);
		// foreach (var key in requestData.annotations.Keys)
		TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 L_13 = V_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14 = L_13.___annotations_1;
		NullCheck(L_14);
		KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* L_15;
		L_15 = Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9(L_14, Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		NullCheck(L_15);
		Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 L_16;
		L_16 = KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22(L_15, KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		V_1 = L_16;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0091:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A((&V_1), Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0086_1;
			}

IL_0066_1:
			{
				// foreach (var key in requestData.annotations.Keys)
				String_t* L_17;
				L_17 = Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_inline((&V_1), Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
				V_2 = L_17;
				// _voiceSDKLoggerImpl.LogAnnotation(key, requestData.annotations[key]);
				RuntimeObject* L_18 = __this->____voiceSDKLoggerImpl_6;
				String_t* L_19 = V_2;
				TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2 L_20 = V_0;
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_21 = L_20.___annotations_1;
				String_t* L_22 = V_2;
				NullCheck(L_21);
				String_t* L_23;
				L_23 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_21, L_22, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
				NullCheck(L_18);
				InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogAnnotation(System.String,System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_18, L_19, L_23);
			}

IL_0086_1:
			{
				// foreach (var key in requestData.annotations.Keys)
				bool L_24;
				L_24 = Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283((&V_1), Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0066_1;
				}
			}
			{
				goto IL_009f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009f:
	{
		// if (string.IsNullOrEmpty(error))
		String_t* L_25 = ___error1;
		bool L_26;
		L_26 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_25, NULL);
		if (!L_26)
		{
			goto IL_00b4;
		}
	}
	{
		// _voiceSDKLoggerImpl.LogInteractionEndSuccess();
		RuntimeObject* L_27 = __this->____voiceSDKLoggerImpl_6;
		NullCheck(L_27);
		InterfaceActionInvoker0::Invoke(7 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionEndSuccess() */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_27);
		goto IL_00c0;
	}

IL_00b4:
	{
		// _voiceSDKLoggerImpl.LogInteractionEndFailure(error);
		RuntimeObject* L_28 = __this->____voiceSDKLoggerImpl_6;
		String_t* L_29 = ___error1;
		NullCheck(L_28);
		InterfaceActionInvoker1< String_t* >::Invoke(8 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionEndFailure(System.String) */, IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var, L_28, L_29);
	}

IL_00c0:
	{
		// _requests.Remove(clipData.queryRequestId);
		Dictionary_2_t4C79FFD3DA8950C7EDEA3B63EBC17CDF35765011* L_30 = __this->____requests_7;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_31 = ___clipData0;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = TTSClipData_get_queryRequestId_m6930268D572D60661944AF7D43A4BA77108882E7_inline(L_31, NULL);
		NullCheck(L_30);
		bool L_33;
		L_33 = Dictionary_2_Remove_m738809F2B7C254B544E989D865C5E6C02AFB7404(L_30, L_32, Dictionary_2_Remove_m738809F2B7C254B544E989D865C5E6C02AFB7404_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Logging.TTSServiceLogging::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_Init_m8D1117457A8654F29A3253BC31AA35125064D080 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t57277DB1A2C96FE1786EC8F434F38C04936E8D55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSServiceLogging_OnServiceStart_m302D7452463FD93C90C6B8214A7229767C382445_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_initialized)
		bool L_0 = ((TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7_StaticFields*)il2cpp_codegen_static_fields_for(TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7_il2cpp_TypeInfo_var))->____initialized_15;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// _initialized = true;
		((TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7_StaticFields*)il2cpp_codegen_static_fields_for(TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7_il2cpp_TypeInfo_var))->____initialized_15 = (bool)1;
		// TTSService.OnServiceStart += OnServiceStart;
		Action_1_t57277DB1A2C96FE1786EC8F434F38C04936E8D55* L_1 = (Action_1_t57277DB1A2C96FE1786EC8F434F38C04936E8D55*)il2cpp_codegen_object_new(Action_1_t57277DB1A2C96FE1786EC8F434F38C04936E8D55_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mCF49CAA81BB5F8BED6F41C37FAB01DA863C380DA(L_1, NULL, (intptr_t)((void*)TTSServiceLogging_OnServiceStart_m302D7452463FD93C90C6B8214A7229767C382445_RuntimeMethod_var), NULL);
		TTSService_add_OnServiceStart_m0463D8971A25A6572CB0F669A8BA02DF45D301EB(L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Logging.TTSServiceLogging::OnServiceStart(Meta.WitAi.TTS.TTSService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging_OnServiceStart_m302D7452463FD93C90C6B8214A7229767C382445 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* ___service0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7_m71B5CF48056A53AB4BDC0F936A72793532AA72C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7_m4E02C9E1D05C9E2DBBE1477A28F14618682BAEC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (service != null && service.GetComponent<TTSServiceLogging>() == null)
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0 = ___service0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_2 = ___service0;
		NullCheck(L_2);
		TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* L_3;
		L_3 = Component_GetComponent_TisTTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7_m71B5CF48056A53AB4BDC0F936A72793532AA72C9(L_2, Component_GetComponent_TisTTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7_m71B5CF48056A53AB4BDC0F936A72793532AA72C9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// service.gameObject.AddComponent<TTSServiceLogging>();
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_5 = ___service0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* L_7;
		L_7 = GameObject_AddComponent_TisTTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7_m4E02C9E1D05C9E2DBBE1477A28F14618682BAEC7(L_6, GameObject_AddComponent_TisTTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7_m4E02C9E1D05C9E2DBBE1477A28F14618682BAEC7_RuntimeMethod_var);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Logging.TTSServiceLogging::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceLogging__ctor_m5DC35E6FFBEF952C35A19B29423934960C89F2D1 (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m36954781460815A63FB8A357AD7235F87C00969B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t4C79FFD3DA8950C7EDEA3B63EBC17CDF35765011_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<string, TTSServiceRequestLog> _requests = new Dictionary<string, TTSServiceRequestLog>();
		Dictionary_2_t4C79FFD3DA8950C7EDEA3B63EBC17CDF35765011* L_0 = (Dictionary_2_t4C79FFD3DA8950C7EDEA3B63EBC17CDF35765011*)il2cpp_codegen_object_new(Dictionary_2_t4C79FFD3DA8950C7EDEA3B63EBC17CDF35765011_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m36954781460815A63FB8A357AD7235F87C00969B(L_0, Dictionary_2__ctor_m36954781460815A63FB8A357AD7235F87C00969B_RuntimeMethod_var);
		__this->____requests_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____requests_7), (void*)L_0);
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
// Conversion methods for marshalling of: Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog
IL2CPP_EXTERN_C void TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2_marshal_pinvoke(const TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2& unmarshaled, TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2_marshaled_pinvoke& marshaled)
{
	Exception_t* ___startTime_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'startTime' of type 'TTSServiceRequestLog'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___startTime_0Exception, NULL);
}
IL2CPP_EXTERN_C void TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2_marshal_pinvoke_back(const TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2_marshaled_pinvoke& marshaled, TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2& unmarshaled)
{
	Exception_t* ___startTime_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'startTime' of type 'TTSServiceRequestLog'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___startTime_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog
IL2CPP_EXTERN_C void TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2_marshal_pinvoke_cleanup(TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog
IL2CPP_EXTERN_C void TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2_marshal_com(const TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2& unmarshaled, TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2_marshaled_com& marshaled)
{
	Exception_t* ___startTime_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'startTime' of type 'TTSServiceRequestLog'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___startTime_0Exception, NULL);
}
IL2CPP_EXTERN_C void TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2_marshal_com_back(const TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2_marshaled_com& marshaled, TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2& unmarshaled)
{
	Exception_t* ___startTime_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'startTime' of type 'TTSServiceRequestLog'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___startTime_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog
IL2CPP_EXTERN_C void TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2_marshal_com_cleanup(TTSServiceRequestLog_t554FC489602EAA1F95725198600067806137E3D2_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding__ctor_m3001B3D10803F447B38489ABE06384CB11F7D65C (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___sdkInstance0, const RuntimeMethod* method) 
{
	{
		// public VoiceSDKBinding(AndroidJavaObject sdkInstance) : base(sdkInstance)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___sdkInstance0;
		BaseServiceBinding__ctor_m22F1D7EDB34C2C3349D5678957D925793DAB1D20(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_Active_mD3DC2E21C48504508A4BA471D90DF2A72601D172 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A9AEFD32E63F4C4FEAE65BF93199A9A35785D51);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool Active => binding.Call<bool>("isActive");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral5A9AEFD32E63F4C4FEAE65BF93199A9A35785D51, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_IsRequestActive_mB32B7327F5F82796F4D6358164028E53686903DC (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AD681F3CCA95D9E6DBE642350F27A4677186DCE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsRequestActive => binding.Call<bool>("isRequestActive");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral0AD681F3CCA95D9E6DBE642350F27A4677186DCE, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_MicActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_MicActive_m9489251FE1B2A59DE39FA58F94C95C8628F56219 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FCACA7D51404EF06FCE5239D8C92E6191ABA80F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool MicActive => binding.Call<bool>("isMicActive");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral6FCACA7D51404EF06FCE5239D8C92E6191ABA80F, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_PlatformSupportsWit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_PlatformSupportsWit_m19DB6531CDA2434ADABE06C5310FA94A370C5F18 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E376700E58DD3581CFBE1F901798D5C61E52BA0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool PlatformSupportsWit => binding.Call<bool>("isSupported");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral6E376700E58DD3581CFBE1F901798D5C61E52BA0, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Activate(System.String,Meta.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Activate_m4F67A04DBD5D731C2F6CEF75D547B81D591B616E (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, String_t* ___text0, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("activate", text, options.ToJsonString());
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___text0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_5 = ___options1;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = WitRequestOptions_ToJsonString_m903548928E6DE6B8A677661C17899BC42E1B0134(L_5, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605, L_4, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Activate(Meta.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Activate_m2B9D589F386A31D807C30E522DC49F644D203754 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___options0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("activate", options.ToJsonString());
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_3 = ___options0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = WitRequestOptions_ToJsonString_m903548928E6DE6B8A677661C17899BC42E1B0134(L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_ActivateImmediately_mAE77E654195172665EA423332C5287AFA9D6FA03 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___options0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73D8E11C6B0DFF5D3141AFDA853D918DD590FE66);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("activateImmediately", options.ToJsonString());
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_3 = ___options0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = WitRequestOptions_ToJsonString_m903548928E6DE6B8A677661C17899BC42E1B0134(L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral73D8E11C6B0DFF5D3141AFDA853D918DD590FE66, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Deactivate_mB0F3CE4FF5E8579CEAC78F717250E951B5DEEF71 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral654BFE537B0ADB16C92A45895BD6054F35C69AC2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("deactivate");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral654BFE537B0ADB16C92A45895BD6054F35C69AC2, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::DeactivateAndAbortRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_DeactivateAndAbortRequest_m84DF1F32E12D4FF53F50C0680F684256537761BC (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D5A4764C731B021A048CFC139A82DD3DA9BD940);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("deactivateAndAbortRequest");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral5D5A4764C731B021A048CFC139A82DD3DA9BD940, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::SetRuntimeConfiguration(Meta.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_SetRuntimeConfiguration_mBE9EBF99296D727EB3DDBB03D4AAA31AE5DAE615 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* ___configuration0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKConfigBinding_t63C6CC95097F3A3384FB2132417E196693144DBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral361CDD76EEF3F6E43190EA2E6D184590B6545659);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("setRuntimeConfig", new VoiceSDKConfigBinding(configuration).ToJavaObject());
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_3 = ___configuration0;
		VoiceSDKConfigBinding_t63C6CC95097F3A3384FB2132417E196693144DBB* L_4 = (VoiceSDKConfigBinding_t63C6CC95097F3A3384FB2132417E196693144DBB*)il2cpp_codegen_object_new(VoiceSDKConfigBinding_t63C6CC95097F3A3384FB2132417E196693144DBB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		VoiceSDKConfigBinding__ctor_m53E48B597E269C75F5C7D2ECC39B54419D1EA544(L_4, L_3, NULL);
		NullCheck(L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = VoiceSDKConfigBinding_ToJavaObject_m861460742482EB29DF6B5BB913D5C55EFD17A4BA(L_4, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral361CDD76EEF3F6E43190EA2E6D184590B6545659, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::SetListener(Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_SetListener_mECA88A4F2258C2C48FBB5B245222EC4E42A2FBB5 (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("setListener", listener);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* L_3 = ___listener0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Connect_m98EB7BC47E670145423665DB7E2A23BB84BB05AF (VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FD7B3C1033C1EF1C45607B35492B62E1CFC7C11);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call<bool>("connect");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01*)__this)->___binding_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral0FD7B3C1033C1EF1C45607B35492B62E1CFC7C11, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		// }
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
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding::.ctor(Meta.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKConfigBinding__ctor_m53E48B597E269C75F5C7D2ECC39B54419D1EA544 (VoiceSDKConfigBinding_t63C6CC95097F3A3384FB2132417E196693144DBB* __this, WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* ___config0, const RuntimeMethod* method) 
{
	{
		// public VoiceSDKConfigBinding(WitRuntimeConfiguration config)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// configuration = config;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_0 = ___config0;
		__this->___configuration_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___configuration_0), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.AndroidJavaObject Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding::ToJavaObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* VoiceSDKConfigBinding_ToJavaObject_m861460742482EB29DF6B5BB913D5C55EFD17A4BA (VoiceSDKConfigBinding_t63C6CC95097F3A3384FB2132417E196693144DBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1C70D480560CA0D0C171727EB7B1FF4C1F267F15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4BE09BF2FD0695C38B40120A43296C6808B0F31F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B4C9B994D78DE3313E2AEE4DF0964592BF389FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C8E84E39D0E62D31544DE3953FDF92C5BAB60EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21916927D1C2A23DD6DA3C2E7FE2F3D6317F563A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2887437BCA2B9747807C22BD44376772EBBE4F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52BB1AD0DD3A85E7F05A9AEA98E0EEB98B478F6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral540FC1C9BFCBBB4FA1B5B7948321692AACB9CE7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5756AECEA7064F13CC9765BE1F87065EA5B3D18E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58AE457A2E7C031E4E4EADC82BC37330A84838AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60DB2D6C7D1E32BCBAC4811B3E7978364FFC0102);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90299BFCD00E6E29A61209F375686A81B96665F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0C6FF001ADF1824C2B6266A303671C2386842C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3691F02FF1D37B1190812560F0848EC71261DA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC73D661602F46A092AF190767F8E68241BB314F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD4104677145B876F292A0DE0E3D05E4D6B15066);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE760573AA7D8A67A8B2068119D02E73882BC4A43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC992C951DB0BC53E8B3C5900205297E72E6E965);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5F89232B0CDE6B0E7076884EA8579F8F38D88C1);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// AndroidJavaObject witConfig =
		//     new AndroidJavaObject("com.oculus.assistant.api.voicesdk.immersivevoicecommands.WitConfiguration");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_1, _stringLiteral5756AECEA7064F13CC9765BE1F87065EA5B3D18E, L_0, NULL);
		V_0 = L_1;
		// witConfig.Set("clientAccessToken", configuration.witConfiguration.GetClientAccessToken());
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_3 = __this->___configuration_0;
		NullCheck(L_3);
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_4 = L_3->___witConfiguration_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = WitConfiguration_GetClientAccessToken_m619DD2445232CA6A5C168763814741B3C75DCF47_inline(L_4, NULL);
		NullCheck(L_2);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_2, _stringLiteralEC992C951DB0BC53E8B3C5900205297E72E6E965, L_5, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		// AndroidJavaObject witRuntimeConfig = new AndroidJavaObject("com.oculus.assistant.api.voicesdk.immersivevoicecommands.WitRuntimeConfiguration");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_7, _stringLiteralAC73D661602F46A092AF190767F8E68241BB314F, L_6, NULL);
		// witRuntimeConfig.Set("witConfiguration", witConfig);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = L_7;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_0;
		NullCheck(L_8);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_8, _stringLiteral0C8E84E39D0E62D31544DE3953FDF92C5BAB60EB, L_9, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
		// witRuntimeConfig.Set("minKeepAliveVolume", configuration.minKeepAliveVolume);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = L_8;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_11 = __this->___configuration_0;
		NullCheck(L_11);
		float L_12 = L_11->___minKeepAliveVolume_1;
		NullCheck(L_10);
		AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5(L_10, _stringLiteral60DB2D6C7D1E32BCBAC4811B3E7978364FFC0102, L_12, AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5_RuntimeMethod_var);
		// witRuntimeConfig.Set("minKeepAliveTimeInSeconds",
		//     configuration.minKeepAliveTimeInSeconds);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = L_10;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_14 = __this->___configuration_0;
		NullCheck(L_14);
		float L_15 = L_14->___minKeepAliveTimeInSeconds_2;
		NullCheck(L_13);
		AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5(L_13, _stringLiteral58AE457A2E7C031E4E4EADC82BC37330A84838AD, L_15, AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5_RuntimeMethod_var);
		// witRuntimeConfig.Set("minTranscriptionKeepAliveTimeInSeconds",
		//     configuration.minTranscriptionKeepAliveTimeInSeconds);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = L_13;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_17 = __this->___configuration_0;
		NullCheck(L_17);
		float L_18 = L_17->___minTranscriptionKeepAliveTimeInSeconds_3;
		NullCheck(L_16);
		AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5(L_16, _stringLiteralF5F89232B0CDE6B0E7076884EA8579F8F38D88C1, L_18, AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5_RuntimeMethod_var);
		// witRuntimeConfig.Set("maxRecordingTime",
		//     configuration.maxRecordingTime);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_19 = L_16;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_20 = __this->___configuration_0;
		NullCheck(L_20);
		float L_21 = L_20->___maxRecordingTime_4;
		NullCheck(L_19);
		AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5(L_19, _stringLiteralDD4104677145B876F292A0DE0E3D05E4D6B15066, L_21, AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5_RuntimeMethod_var);
		// witRuntimeConfig.Set("soundWakeThreshold",
		//     configuration.soundWakeThreshold);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_22 = L_19;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_23 = __this->___configuration_0;
		NullCheck(L_23);
		float L_24 = L_23->___soundWakeThreshold_5;
		NullCheck(L_22);
		AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5(L_22, _stringLiteral90299BFCD00E6E29A61209F375686A81B96665F6, L_24, AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5_RuntimeMethod_var);
		// witRuntimeConfig.Set("sampleLengthInMs",
		//     configuration.sampleLengthInMs);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_25 = L_22;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_26 = __this->___configuration_0;
		NullCheck(L_26);
		int32_t L_27 = L_26->___sampleLengthInMs_6;
		NullCheck(L_25);
		AndroidJavaObject_Set_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4BE09BF2FD0695C38B40120A43296C6808B0F31F(L_25, _stringLiteral52BB1AD0DD3A85E7F05A9AEA98E0EEB98B478F6D, L_27, AndroidJavaObject_Set_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4BE09BF2FD0695C38B40120A43296C6808B0F31F_RuntimeMethod_var);
		// witRuntimeConfig.Set("micBufferLengthInSeconds",
		//     configuration.micBufferLengthInSeconds);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_28 = L_25;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_29 = __this->___configuration_0;
		NullCheck(L_29);
		float L_30 = L_29->___micBufferLengthInSeconds_7;
		NullCheck(L_28);
		AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5(L_28, _stringLiteralA0C6FF001ADF1824C2B6266A303671C2386842C6, L_30, AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5_RuntimeMethod_var);
		// witRuntimeConfig.Set("sendAudioToWit",
		//     configuration.sendAudioToWit);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_31 = L_28;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_32 = __this->___configuration_0;
		NullCheck(L_32);
		bool L_33 = L_32->___sendAudioToWit_9;
		NullCheck(L_31);
		AndroidJavaObject_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1C70D480560CA0D0C171727EB7B1FF4C1F267F15(L_31, _stringLiteral21916927D1C2A23DD6DA3C2E7FE2F3D6317F563A, L_33, AndroidJavaObject_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1C70D480560CA0D0C171727EB7B1FF4C1F267F15_RuntimeMethod_var);
		// witRuntimeConfig.Set("preferredActivationOffset",
		//     configuration.preferredActivationOffset);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_34 = L_31;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_35 = __this->___configuration_0;
		NullCheck(L_35);
		float L_36 = L_35->___preferredActivationOffset_12;
		NullCheck(L_34);
		AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5(L_34, _stringLiteral0B4C9B994D78DE3313E2AEE4DF0964592BF389FE, L_36, AndroidJavaObject_Set_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFF5C549692C48861BC5397B09E7CB34767F40B5_RuntimeMethod_var);
		// witRuntimeConfig.Set("clientName",
		//     WitConstants.CLIENT_NAME);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_37 = L_34;
		NullCheck(L_37);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_37, _stringLiteralE760573AA7D8A67A8B2068119D02E73882BC4A43, _stringLiteral2887437BCA2B9747807C22BD44376772EBBE4F62, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		// witRuntimeConfig.Set("serverVersion",
		//     WitConstants.API_VERSION);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_38 = L_37;
		NullCheck(L_38);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_38, _stringLiteral540FC1C9BFCBBB4FA1B5B7948321692AACB9CE7A, _stringLiteralA3691F02FF1D37B1190812560F0848EC71261DA2, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		// return witRuntimeConfig;
		return L_38;
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
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::.ctor(Meta.WitAi.IVoiceService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl__ctor_mD8291C1EFF4C31FB498CF4322A2AFE3F6FB854BF (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, RuntimeObject* ___baseVoiceService0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseAndroidConnectionImpl_1__ctor_mF468E5CB91C72482F571B497B147F08542E8CC80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m7599E6C0496CE36BC943F965522F13EEE6303F23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9198612C1E03878B69FB53EDEFD1E20C986857B4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool _isServiceAvailable = true;
		__this->____isServiceAvailable_3 = (bool)1;
		// public HashSet<VoiceServiceRequest> Requests { get; } = new HashSet<VoiceServiceRequest>();
		HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* L_0 = (HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE*)il2cpp_codegen_object_new(HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m7599E6C0496CE36BC943F965522F13EEE6303F23(L_0, HashSet_1__ctor_m7599E6C0496CE36BC943F965522F13EEE6303F23_RuntimeMethod_var);
		__this->___U3CRequestsU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRequestsU3Ek__BackingField_8), (void*)L_0);
		// public VoiceSDKImpl(IVoiceService baseVoiceService) : base(
		//     "com.oculus.assistant.api.unity.immersivevoicecommands.UnityIVCServiceFragment")
		BaseAndroidConnectionImpl_1__ctor_mF468E5CB91C72482F571B497B147F08542E8CC80(__this, _stringLiteral9198612C1E03878B69FB53EDEFD1E20C986857B4, BaseAndroidConnectionImpl_1__ctor_mF468E5CB91C72482F571B497B147F08542E8CC80_RuntimeMethod_var);
		// _baseVoiceService = baseVoiceService;
		RuntimeObject* L_1 = ___baseVoiceService0;
		__this->____baseVoiceService_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____baseVoiceService_5), (void*)L_1);
		// }
		return;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_PlatformSupportsWit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKImpl_get_PlatformSupportsWit_m372E01C4FEBDC063566D099A673EAFC2702A197E (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	{
		// public bool PlatformSupportsWit => service.PlatformSupportsWit && _isServiceAvailable;
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = ((BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*)__this)->___service_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = VoiceSDKBinding_get_PlatformSupportsWit_m19DB6531CDA2434ADABE06C5310FA94A370C5F18(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		bool L_2 = __this->____isServiceAvailable_3;
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKImpl_get_Active_mD70FF7EB6F3FBB20F5FF3F4BAC05929AC7157A6D (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	{
		// public bool Active => service.Active && _isActive;
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = ((BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*)__this)->___service_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = VoiceSDKBinding_get_Active_mD3DC2E21C48504508A4BA471D90DF2A72601D172(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		bool L_2 = __this->____isActive_6;
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKImpl_get_IsRequestActive_mE5EB744C7A66DD53FE4B7B5F1653743462C63091 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsRequestActive => service.IsRequestActive;
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = ((BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*)__this)->___service_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = VoiceSDKBinding_get_IsRequestActive_mB32B7327F5F82796F4D6358164028E53686903DC(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_MicActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKImpl_get_MicActive_mDADE398985B2374337F470B77F5D10197CDAEC25 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	{
		// public bool MicActive => service.MicActive;
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = ((BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*)__this)->___service_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = VoiceSDKBinding_get_MicActive_m9489251FE1B2A59DE39FA58F94C95C8628F56219(L_0, NULL);
		return L_1;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::SetRuntimeConfiguration(Meta.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_SetRuntimeConfiguration_mC6E588389CBBAE86514843C164EE79FA972A6945 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* ___configuration0, const RuntimeMethod* method) 
{
	{
		// service.SetRuntimeConfiguration(configuration);
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = ((BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*)__this)->___service_1;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_1 = ___configuration0;
		NullCheck(L_0);
		VoiceSDKBinding_SetRuntimeConfiguration_mBE9EBF99296D727EB3DDBB03D4AAA31AE5DAE615(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest> Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_Requests()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* VoiceSDKImpl_get_Requests_m4D22091B386178D74B5C67275BB3CB9CD8C3DAA9 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	{
		// public HashSet<VoiceServiceRequest> Requests { get; } = new HashSet<VoiceServiceRequest>();
		HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* L_0 = __this->___U3CRequestsU3Ek__BackingField_8;
		return L_0;
	}
}
// Meta.WitAi.Interfaces.ITranscriptionProvider Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_TranscriptionProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VoiceSDKImpl_get_TranscriptionProvider_m738E79B7A1237393A12BB7AEE11BC580060FA11A (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	{
		// public ITranscriptionProvider TranscriptionProvider { get; set; }
		RuntimeObject* L_0 = __this->___U3CTranscriptionProviderU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::set_TranscriptionProvider(Meta.WitAi.Interfaces.ITranscriptionProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_set_TranscriptionProvider_m0102B6883426A7932EE8ED5DDE397428AA5A0274 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public ITranscriptionProvider TranscriptionProvider { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CTranscriptionProviderU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTranscriptionProviderU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImpl::CanActivateAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKImpl_CanActivateAudio_m7F95C1883AD0F54A74BD39B1E6E71AA9B9630312 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImpl::CanSend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKImpl_CanSend_m409C05C76E82C8C45B08856FA2CE4F62C4149AEE (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::Connect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_Connect_m492C4ABE14DBCF5C3B89C11AFEB5FCE1CA524398 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, String_t* ___version0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseAndroidConnectionImpl_1_Connect_m98AC713280FE00772A276E37AC3442A77B465CEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImpl_OnStoppedListening_mA1756BD9180B56077E95BCC85BCB126D14A6BFD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47DA4AFC29222C9791B731DF4DADD99DC88F94B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral734D834219E25F6AC949E3C4A33AA80BB578DC1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9611837DC9F59CE850732A48008AE16B5242C6BE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// base.Connect(version);
		String_t* L_0 = ___version0;
		BaseAndroidConnectionImpl_1_Connect_m98AC713280FE00772A276E37AC3442A77B465CEC(__this, L_0, BaseAndroidConnectionImpl_1_Connect_m98AC713280FE00772A276E37AC3442A77B465CEC_RuntimeMethod_var);
		// eventBinding = new VoiceSDKListenerBinding(this, this);
		VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* L_1 = (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4*)il2cpp_codegen_object_new(VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		VoiceSDKListenerBinding__ctor_m924FD698201D96E8364328E105232FA2EDD9AF3E(L_1, __this, __this, NULL);
		__this->___eventBinding_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventBinding_7), (void*)L_1);
		// eventBinding.VoiceEvents.OnStoppedListening.AddListener(OnStoppedListening);
		VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* L_2 = __this->___eventBinding_7;
		NullCheck(L_2);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_3;
		L_3 = VoiceSDKListenerBinding_get_VoiceEvents_mB57DC862894B65506C815C301C5631E195C83847(L_2, NULL);
		NullCheck(L_3);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4;
		L_4 = SpeechEvents_get_OnStoppedListening_mB59F3490B5F895B311DA82A0288DC2AEACF87586_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)VoiceSDKImpl_OnStoppedListening_mA1756BD9180B56077E95BCC85BCB126D14A6BFD2_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// service.SetListener(eventBinding);
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_6 = ((BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*)__this)->___service_1;
		VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* L_7 = __this->___eventBinding_7;
		NullCheck(L_6);
		VoiceSDKBinding_SetListener_mECA88A4F2258C2C48FBB5B245222EC4E42A2FBB5(L_6, L_7, NULL);
		// service.Connect();
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_8 = ((BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*)__this)->___service_1;
		NullCheck(L_8);
		VoiceSDKBinding_Connect_m98EB7BC47E670145423665DB7E2A23BB84BB05AF(L_8, NULL);
		// Debug.Log(
		//     $"Platform integration initialization complete. Platform integrations are {(PlatformSupportsWit ? "active" : "inactive")}");
		bool L_9;
		L_9 = VoiceSDKImpl_get_PlatformSupportsWit_m372E01C4FEBDC063566D099A673EAFC2702A197E(__this, NULL);
		G_B1_0 = _stringLiteral47DA4AFC29222C9791B731DF4DADD99DC88F94B0;
		if (L_9)
		{
			G_B2_0 = _stringLiteral47DA4AFC29222C9791B731DF4DADD99DC88F94B0;
			goto IL_0065;
		}
	}
	{
		G_B3_0 = _stringLiteral9611837DC9F59CE850732A48008AE16B5242C6BE;
		G_B3_1 = G_B1_0;
		goto IL_006a;
	}

IL_0065:
	{
		G_B3_0 = _stringLiteral734D834219E25F6AC949E3C4A33AA80BB578DC1A;
		G_B3_1 = G_B2_0;
	}

IL_006a:
	{
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_1, G_B3_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_Disconnect_mE3A608B8E60189BA2F5B3898107928B65EF5E0FF (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseAndroidConnectionImpl_1_Disconnect_mA5F161E6B61246B5919266A3C4A151C31092189D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImpl_OnStoppedListening_mA1756BD9180B56077E95BCC85BCB126D14A6BFD2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Disconnect();
		BaseAndroidConnectionImpl_1_Disconnect_mA5F161E6B61246B5919266A3C4A151C31092189D(__this, BaseAndroidConnectionImpl_1_Disconnect_mA5F161E6B61246B5919266A3C4A151C31092189D_RuntimeMethod_var);
		// if (null != eventBinding)
		VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* L_0 = __this->___eventBinding_7;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// eventBinding.VoiceEvents.OnStoppedListening.RemoveListener(OnStoppedListening);
		VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* L_1 = __this->___eventBinding_7;
		NullCheck(L_1);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_2;
		L_2 = VoiceSDKListenerBinding_get_VoiceEvents_mB57DC862894B65506C815C301C5631E195C83847(L_1, NULL);
		NullCheck(L_2);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3;
		L_3 = SpeechEvents_get_OnStoppedListening_mB59F3490B5F895B311DA82A0288DC2AEACF87586_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)VoiceSDKImpl_OnStoppedListening_mA1756BD9180B56077E95BCC85BCB126D14A6BFD2_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_3, L_4, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::OnStoppedListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_OnStoppedListening_mA1756BD9180B56077E95BCC85BCB126D14A6BFD2 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	{
		// _isActive = false;
		__this->____isActive_6 = (bool)0;
		// }
		return;
	}
}
// Meta.WitAi.Requests.VoiceServiceRequest Oculus.Voice.Bindings.Android.VoiceSDKImpl::Activate(System.String,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* VoiceSDKImpl_Activate_m4928AF85DBCCAD5BDADBD39CCDA5CD422270DF19 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, String_t* ___text0, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___requestOptions1, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___requestEvents2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NLPRequest_4_Send_m543F669E5C9AE067D7B57E0C12B0053A418D4872_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m3B94A53C1F1B0E7C93061F3651DE1E716127DEF0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* G_B2_0 = NULL;
	WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* G_B1_0 = NULL;
	{
		// eventBinding.VoiceEvents.OnRequestOptionSetup?.Invoke(requestOptions);
		VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* L_0 = __this->___eventBinding_7;
		NullCheck(L_0);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_1;
		L_1 = VoiceSDKListenerBinding_get_VoiceEvents_mB57DC862894B65506C815C301C5631E195C83847(L_0, NULL);
		NullCheck(L_1);
		WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* L_2;
		L_2 = SpeechEvents_get_OnRequestOptionSetup_mDD48B5E524783E2376629F4ABA5985A85C1CC24C_inline(L_1, NULL);
		WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0016;
		}
	}
	{
		goto IL_001c;
	}

IL_0016:
	{
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_4 = ___requestOptions1;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m3B94A53C1F1B0E7C93061F3651DE1E716127DEF0(G_B2_0, L_4, UnityEvent_1_Invoke_m3B94A53C1F1B0E7C93061F3651DE1E716127DEF0_RuntimeMethod_var);
	}

IL_001c:
	{
		// VoiceServiceRequest request = GetRequest(requestOptions, requestEvents, NLPRequestInputType.Text);
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_5 = ___requestOptions1;
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_6 = ___requestEvents2;
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_7;
		L_7 = VoiceSDKImpl_GetRequest_m67190CD71C0B72E8DDCF935CED2AFB424DB385B0(__this, L_5, L_6, 0, (bool)0, NULL);
		// request.Send(text);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_8 = L_7;
		String_t* L_9 = ___text0;
		NullCheck(L_8);
		NLPRequest_4_Send_m543F669E5C9AE067D7B57E0C12B0053A418D4872(L_8, L_9, NLPRequest_4_Send_m543F669E5C9AE067D7B57E0C12B0053A418D4872_RuntimeMethod_var);
		// return request;
		return L_8;
	}
}
// Meta.WitAi.Requests.VoiceServiceRequest Oculus.Voice.Bindings.Android.VoiceSDKImpl::Activate(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* VoiceSDKImpl_Activate_m5F9679F762570C2B2CF7252ED648936F1301DA7F (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___requestOptions0, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___requestEvents1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m3B94A53C1F1B0E7C93061F3651DE1E716127DEF0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* G_B4_0 = NULL;
	WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* G_B3_0 = NULL;
	{
		// if (_isActive) return null;
		bool L_0 = __this->____isActive_6;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (_isActive) return null;
		return (VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536*)NULL;
	}

IL_000a:
	{
		// _isActive = true;
		__this->____isActive_6 = (bool)1;
		// eventBinding.VoiceEvents.OnRequestOptionSetup?.Invoke(requestOptions);
		VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* L_1 = __this->___eventBinding_7;
		NullCheck(L_1);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_2;
		L_2 = VoiceSDKListenerBinding_get_VoiceEvents_mB57DC862894B65506C815C301C5631E195C83847(L_1, NULL);
		NullCheck(L_2);
		WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* L_3;
		L_3 = SpeechEvents_get_OnRequestOptionSetup_mDD48B5E524783E2376629F4ABA5985A85C1CC24C_inline(L_2, NULL);
		WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0027;
		}
	}
	{
		goto IL_002d;
	}

IL_0027:
	{
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_5 = ___requestOptions0;
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_m3B94A53C1F1B0E7C93061F3651DE1E716127DEF0(G_B4_0, L_5, UnityEvent_1_Invoke_m3B94A53C1F1B0E7C93061F3651DE1E716127DEF0_RuntimeMethod_var);
	}

IL_002d:
	{
		// VoiceServiceRequest request = GetRequest(requestOptions, requestEvents, NLPRequestInputType.Audio);
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_6 = ___requestOptions0;
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_7 = ___requestEvents1;
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_8;
		L_8 = VoiceSDKImpl_GetRequest_m67190CD71C0B72E8DDCF935CED2AFB424DB385B0(__this, L_6, L_7, 1, (bool)0, NULL);
		// request.ActivateAudio();
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_9 = L_8;
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(42 /* System.Void Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::ActivateAudio() */, L_9);
		// return request;
		return L_9;
	}
}
// Meta.WitAi.Requests.VoiceServiceRequest Oculus.Voice.Bindings.Android.VoiceSDKImpl::ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* VoiceSDKImpl_ActivateImmediately_m75F28D8ACC4EAEF4113D452B9C80300FEBE2C632 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___requestOptions0, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___requestEvents1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m3B94A53C1F1B0E7C93061F3651DE1E716127DEF0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* G_B4_0 = NULL;
	WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* G_B3_0 = NULL;
	{
		// if (_isActive) return null;
		bool L_0 = __this->____isActive_6;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (_isActive) return null;
		return (VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536*)NULL;
	}

IL_000a:
	{
		// _isActive = true;
		__this->____isActive_6 = (bool)1;
		// eventBinding.VoiceEvents.OnRequestOptionSetup?.Invoke(requestOptions);
		VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* L_1 = __this->___eventBinding_7;
		NullCheck(L_1);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_2;
		L_2 = VoiceSDKListenerBinding_get_VoiceEvents_mB57DC862894B65506C815C301C5631E195C83847(L_1, NULL);
		NullCheck(L_2);
		WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* L_3;
		L_3 = SpeechEvents_get_OnRequestOptionSetup_mDD48B5E524783E2376629F4ABA5985A85C1CC24C_inline(L_2, NULL);
		WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0027;
		}
	}
	{
		goto IL_002d;
	}

IL_0027:
	{
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_5 = ___requestOptions0;
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_m3B94A53C1F1B0E7C93061F3651DE1E716127DEF0(G_B4_0, L_5, UnityEvent_1_Invoke_m3B94A53C1F1B0E7C93061F3651DE1E716127DEF0_RuntimeMethod_var);
	}

IL_002d:
	{
		// VoiceServiceRequest request = GetRequest(requestOptions, requestEvents, NLPRequestInputType.Audio, true);
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_6 = ___requestOptions0;
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_7 = ___requestEvents1;
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_8;
		L_8 = VoiceSDKImpl_GetRequest_m67190CD71C0B72E8DDCF935CED2AFB424DB385B0(__this, L_6, L_7, 1, (bool)1, NULL);
		// request.ActivateAudio();
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_9 = L_8;
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(42 /* System.Void Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::ActivateAudio() */, L_9);
		// return request;
		return L_9;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_Deactivate_m2482B0524373AEFFBB3781A998EFB66EABF1BDA3 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1717C5902C12395F339137E7C859B070DC3E4AC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7726F1B66F3C91BA3CC742401FCBE2D36717D8D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAB1C5F19EA9209F72A2F2543713CEA1A7CCF29EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m5CB1CFB26B2AE6689AC3D812FBD04752E0F5E469_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t238229FA78C36CE2AB25DB5A0A3638F0B1E1DBE2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* V_1 = NULL;
	{
		// _isActive = false;
		__this->____isActive_6 = (bool)0;
		// foreach (var request in Requests)
		HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* L_0;
		L_0 = VoiceSDKImpl_get_Requests_m4D22091B386178D74B5C67275BB3CB9CD8C3DAA9_inline(__this, NULL);
		NullCheck(L_0);
		Enumerator_t238229FA78C36CE2AB25DB5A0A3638F0B1E1DBE2 L_1;
		L_1 = HashSet_1_GetEnumerator_m5CB1CFB26B2AE6689AC3D812FBD04752E0F5E469(L_0, HashSet_1_GetEnumerator_m5CB1CFB26B2AE6689AC3D812FBD04752E0F5E469_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0037:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1717C5902C12395F339137E7C859B070DC3E4AC8((&V_0), Enumerator_Dispose_m1717C5902C12395F339137E7C859B070DC3E4AC8_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002c_1;
			}

IL_0015_1:
			{
				// foreach (var request in Requests)
				VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_2;
				L_2 = Enumerator_get_Current_mAB1C5F19EA9209F72A2F2543713CEA1A7CCF29EE_inline((&V_0), Enumerator_get_Current_mAB1C5F19EA9209F72A2F2543713CEA1A7CCF29EE_RuntimeMethod_var);
				V_1 = L_2;
				// if (request.InputType == NLPRequestInputType.Audio)
				VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_3 = V_1;
				NullCheck(L_3);
				int32_t L_4;
				L_4 = NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_inline(L_3, NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_RuntimeMethod_var);
				if ((!(((uint32_t)L_4) == ((uint32_t)1))))
				{
					goto IL_002c_1;
				}
			}
			{
				// request.DeactivateAudio();
				VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_5 = V_1;
				NullCheck(L_5);
				VirtualActionInvoker0::Invoke(46 /* System.Void Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::DeactivateAudio() */, L_5);
			}

IL_002c_1:
			{
				// foreach (var request in Requests)
				bool L_6;
				L_6 = Enumerator_MoveNext_m7726F1B66F3C91BA3CC742401FCBE2D36717D8D0((&V_0), Enumerator_MoveNext_m7726F1B66F3C91BA3CC742401FCBE2D36717D8D0_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0045;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::DeactivateAndAbortRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_DeactivateAndAbortRequest_mD696A792F89B36284EA106562440B571FD176E4C (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1717C5902C12395F339137E7C859B070DC3E4AC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7726F1B66F3C91BA3CC742401FCBE2D36717D8D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAB1C5F19EA9209F72A2F2543713CEA1A7CCF29EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m5CB1CFB26B2AE6689AC3D812FBD04752E0F5E469_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC1A73A406A2B8A6BA7CDD3AE6E608083E7333CC);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t238229FA78C36CE2AB25DB5A0A3638F0B1E1DBE2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* V_1 = NULL;
	{
		// _isActive = false;
		__this->____isActive_6 = (bool)0;
		// foreach (var request in Requests)
		HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* L_0;
		L_0 = VoiceSDKImpl_get_Requests_m4D22091B386178D74B5C67275BB3CB9CD8C3DAA9_inline(__this, NULL);
		NullCheck(L_0);
		Enumerator_t238229FA78C36CE2AB25DB5A0A3638F0B1E1DBE2 L_1;
		L_1 = HashSet_1_GetEnumerator_m5CB1CFB26B2AE6689AC3D812FBD04752E0F5E469(L_0, HashSet_1_GetEnumerator_m5CB1CFB26B2AE6689AC3D812FBD04752E0F5E469_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1717C5902C12395F339137E7C859B070DC3E4AC8((&V_0), Enumerator_Dispose_m1717C5902C12395F339137E7C859B070DC3E4AC8_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0031_1;
			}

IL_0015_1:
			{
				// foreach (var request in Requests)
				VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_2;
				L_2 = Enumerator_get_Current_mAB1C5F19EA9209F72A2F2543713CEA1A7CCF29EE_inline((&V_0), Enumerator_get_Current_mAB1C5F19EA9209F72A2F2543713CEA1A7CCF29EE_RuntimeMethod_var);
				V_1 = L_2;
				// if (request.InputType == NLPRequestInputType.Audio)
				VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_3 = V_1;
				NullCheck(L_3);
				int32_t L_4;
				L_4 = NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_inline(L_3, NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_RuntimeMethod_var);
				if ((!(((uint32_t)L_4) == ((uint32_t)1))))
				{
					goto IL_0031_1;
				}
			}
			{
				// request.Cancel();
				VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_5 = V_1;
				NullCheck(L_5);
				VirtualActionInvoker1< String_t* >::Invoke(27 /* System.Void Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::Cancel(System.String) */, L_5, _stringLiteralBC1A73A406A2B8A6BA7CDD3AE6E608083E7333CC);
			}

IL_0031_1:
			{
				// foreach (var request in Requests)
				bool L_6;
				L_6 = Enumerator_MoveNext_m7726F1B66F3C91BA3CC742401FCBE2D36717D8D0((&V_0), Enumerator_MoveNext_m7726F1B66F3C91BA3CC742401FCBE2D36717D8D0_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_004a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::DeactivateAndAbortRequest(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_DeactivateAndAbortRequest_mF747F9B995C116F0E7F1AA5C6F3A529DE99B87EE (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m16F3F7420AE65B74DBA459919C8EE4CDDD67B377_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC1A73A406A2B8A6BA7CDD3AE6E608083E7333CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Requests.Contains(request))
		HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* L_0;
		L_0 = VoiceSDKImpl_get_Requests_m4D22091B386178D74B5C67275BB3CB9CD8C3DAA9_inline(__this, NULL);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_1 = ___request0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_m16F3F7420AE65B74DBA459919C8EE4CDDD67B377(L_0, L_1, HashSet_1_Contains_m16F3F7420AE65B74DBA459919C8EE4CDDD67B377_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// request.Cancel();
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_3 = ___request0;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(27 /* System.Void Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::Cancel(System.String) */, L_3, _stringLiteralBC1A73A406A2B8A6BA7CDD3AE6E608083E7333CC);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::OnServiceNotAvailable(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_OnServiceNotAvailable_m238DC4A14BA880DF4ED69D9BFF6773B349A92821 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, String_t* ___error0, String_t* ___message1, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// _isActive = false;
		__this->____isActive_6 = (bool)0;
		// _isServiceAvailable = false;
		__this->____isServiceAvailable_3 = (bool)0;
		// OnServiceNotAvailableEvent?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnServiceNotAvailableEvent_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// Meta.WitAi.Events.VoiceEvents Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_VoiceEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* VoiceSDKImpl_get_VoiceEvents_mDB22DE6A42BBC0225E1F1C498D83E97E23F1D7CC (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => _baseVoiceService.VoiceEvents;
		RuntimeObject* L_0 = __this->____baseVoiceService_5;
		NullCheck(L_0);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_1;
		L_1 = InterfaceFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(3 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.IVoiceService::get_VoiceEvents() */, IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::set_VoiceEvents(Meta.WitAi.Events.VoiceEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_set_VoiceEvents_m0EA2822B762AED14534DF0BA27964EECC4B74A80 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => _baseVoiceService.VoiceEvents = value;
		RuntimeObject* L_0 = __this->____baseVoiceService_5;
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(4 /* System.Void Meta.WitAi.IVoiceService::set_VoiceEvents(Meta.WitAi.Events.VoiceEvents) */, IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// Meta.WitAi.Events.TelemetryEvents Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_TelemetryEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* VoiceSDKImpl_get_TelemetryEvents_m52E9471EDE00F2EB963FB81F46CC784D03746D13 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => _baseVoiceService.TelemetryEvents;
		RuntimeObject* L_0 = __this->____baseVoiceService_5;
		NullCheck(L_0);
		TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* L_1;
		L_1 = InterfaceFuncInvoker0< TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* >::Invoke(5 /* Meta.WitAi.Events.TelemetryEvents Meta.WitAi.IVoiceService::get_TelemetryEvents() */, IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::set_TelemetryEvents(Meta.WitAi.Events.TelemetryEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_set_TelemetryEvents_mF9211ECF3E2B88300C4E70704D832400E6B50ED8 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => _baseVoiceService.TelemetryEvents = value;
		RuntimeObject* L_0 = __this->____baseVoiceService_5;
		TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* >::Invoke(6 /* System.Void Meta.WitAi.IVoiceService::set_TelemetryEvents(Meta.WitAi.Events.TelemetryEvents) */, IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// Meta.WitAi.Requests.VoiceServiceRequest Oculus.Voice.Bindings.Android.VoiceSDKImpl::GetRequest(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.Voice.NLPRequestInputType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* VoiceSDKImpl_GetRequest_m67190CD71C0B72E8DDCF935CED2AFB424DB385B0 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___requestOptions0, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___requestEvents1, int32_t ___inputType2, bool ___audioImmediate3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m3CA5C7394243399E85AD48B66709FF22C685473D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m8CED891B50C804B13259BD552FD7621CFF6CF7E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnCancel_m93EF162482A866C17FEA71230F2A67314F27CA79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnComplete_mCF88D3B32BB971E0CDD460436A604C337B58ABA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnFailed_mD9FA83DC2035E8D5C5EA84AF7E7EAC9F2D7AE4C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnSuccess_mFE8C133667AE3019A85E73A5117971DA76BD35FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequest_4_get_Events_m203351D7CF3E967C106C1CB5FA57C03D3754A132_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImpl_OnRequestCanceled_mBB992A0F8696098849503C93541DA919095C345A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImpl_OnRequestComplete_m3B8EFE630D402FD3C8507AB10156CC6AE48BBEE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImpl_OnRequestFailed_m72F77F4D52E0EE70152F3EA1B80D1E3E91FB8556_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImpl_OnRequestSuccess_mD093D6DFA88EBC48610BF589608DB53359E66870_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* V_0 = NULL;
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* G_B2_0 = NULL;
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* G_B1_0 = NULL;
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B4_0 = NULL;
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B3_0 = NULL;
	{
		// VoiceSDKImplRequest request = new VoiceSDKImplRequest(service, inputType, audioImmediate, requestOptions, requestEvents);
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = ((BaseAndroidConnectionImpl_1_tFA27FD159EEF37A733DA17D57174F130D689DFAF*)__this)->___service_1;
		int32_t L_1 = ___inputType2;
		bool L_2 = ___audioImmediate3;
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_3 = ___requestOptions0;
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_4 = ___requestEvents1;
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_5 = (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75*)il2cpp_codegen_object_new(VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		VoiceSDKImplRequest__ctor_m2FD6E677E01ED0BDD25CA84EFDD0C3143C55A33E(L_5, L_0, L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		// Requests.Add(request);
		HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* L_6;
		L_6 = VoiceSDKImpl_get_Requests_m4D22091B386178D74B5C67275BB3CB9CD8C3DAA9_inline(__this, NULL);
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = HashSet_1_Add_m3CA5C7394243399E85AD48B66709FF22C685473D(L_6, L_7, HashSet_1_Add_m3CA5C7394243399E85AD48B66709FF22C685473D_RuntimeMethod_var);
		// request.Events.OnCancel.AddListener(OnRequestCanceled);
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_9 = V_0;
		NullCheck(L_9);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_10;
		L_10 = VoiceRequest_4_get_Events_m203351D7CF3E967C106C1CB5FA57C03D3754A132_inline(L_9, VoiceRequest_4_get_Events_m203351D7CF3E967C106C1CB5FA57C03D3754A132_RuntimeMethod_var);
		NullCheck(L_10);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_11;
		L_11 = VoiceRequestEvents_1_get_OnCancel_m93EF162482A866C17FEA71230F2A67314F27CA79_inline(L_10, VoiceRequestEvents_1_get_OnCancel_m93EF162482A866C17FEA71230F2A67314F27CA79_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_12 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_12, __this, (intptr_t)((void*)VoiceSDKImpl_OnRequestCanceled_mBB992A0F8696098849503C93541DA919095C345A_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_11, L_12, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		// request.Events.OnFailed.AddListener(OnRequestFailed);
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_13 = V_0;
		NullCheck(L_13);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_14;
		L_14 = VoiceRequest_4_get_Events_m203351D7CF3E967C106C1CB5FA57C03D3754A132_inline(L_13, VoiceRequest_4_get_Events_m203351D7CF3E967C106C1CB5FA57C03D3754A132_RuntimeMethod_var);
		NullCheck(L_14);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_15;
		L_15 = VoiceRequestEvents_1_get_OnFailed_mD9FA83DC2035E8D5C5EA84AF7E7EAC9F2D7AE4C2_inline(L_14, VoiceRequestEvents_1_get_OnFailed_mD9FA83DC2035E8D5C5EA84AF7E7EAC9F2D7AE4C2_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_16 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_16, __this, (intptr_t)((void*)VoiceSDKImpl_OnRequestFailed_m72F77F4D52E0EE70152F3EA1B80D1E3E91FB8556_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_15, L_16, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		// request.Events.OnSuccess.AddListener(OnRequestSuccess);
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_17 = V_0;
		NullCheck(L_17);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_18;
		L_18 = VoiceRequest_4_get_Events_m203351D7CF3E967C106C1CB5FA57C03D3754A132_inline(L_17, VoiceRequest_4_get_Events_m203351D7CF3E967C106C1CB5FA57C03D3754A132_RuntimeMethod_var);
		NullCheck(L_18);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_19;
		L_19 = VoiceRequestEvents_1_get_OnSuccess_mFE8C133667AE3019A85E73A5117971DA76BD35FF_inline(L_18, VoiceRequestEvents_1_get_OnSuccess_mFE8C133667AE3019A85E73A5117971DA76BD35FF_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_20 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_20, __this, (intptr_t)((void*)VoiceSDKImpl_OnRequestSuccess_mD093D6DFA88EBC48610BF589608DB53359E66870_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_19, L_20, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		// request.Events.OnComplete.AddListener(OnRequestComplete);
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_21 = V_0;
		NullCheck(L_21);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_22;
		L_22 = VoiceRequest_4_get_Events_m203351D7CF3E967C106C1CB5FA57C03D3754A132_inline(L_21, VoiceRequest_4_get_Events_m203351D7CF3E967C106C1CB5FA57C03D3754A132_RuntimeMethod_var);
		NullCheck(L_22);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_23;
		L_23 = VoiceRequestEvents_1_get_OnComplete_mCF88D3B32BB971E0CDD460436A604C337B58ABA9_inline(L_22, VoiceRequestEvents_1_get_OnComplete_mCF88D3B32BB971E0CDD460436A604C337B58ABA9_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_24 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_24, __this, (intptr_t)((void*)VoiceSDKImpl_OnRequestComplete_m3B8EFE630D402FD3C8507AB10156CC6AE48BBEE6_RuntimeMethod_var), NULL);
		NullCheck(L_23);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_23, L_24, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		// VoiceEvents?.OnRequestInitialized?.Invoke(request);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_25;
		L_25 = VoiceSDKImpl_get_VoiceEvents_mDB22DE6A42BBC0225E1F1C498D83E97E23F1D7CC(__this, NULL);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_26 = L_25;
		G_B1_0 = L_26;
		if (L_26)
		{
			G_B2_0 = L_26;
			goto IL_009a;
		}
	}
	{
		goto IL_00ab;
	}

IL_009a:
	{
		NullCheck(G_B2_0);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_27;
		L_27 = SpeechEvents_get_OnRequestInitialized_mDF97BA996E91AC80EDEFA571B39D2ECD09C97A09_inline(G_B2_0, NULL);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_28 = L_27;
		G_B3_0 = L_28;
		if (L_28)
		{
			G_B4_0 = L_28;
			goto IL_00a5;
		}
	}
	{
		goto IL_00ab;
	}

IL_00a5:
	{
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_29 = V_0;
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_m8CED891B50C804B13259BD552FD7621CFF6CF7E5(G_B4_0, L_29, UnityEvent_1_Invoke_m8CED891B50C804B13259BD552FD7621CFF6CF7E5_RuntimeMethod_var);
	}

IL_00ab:
	{
		// return request;
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_30 = V_0;
		return L_30;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::OnRequestCanceled(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_OnRequestCanceled_mBB992A0F8696098849503C93541DA919095C345A (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m16F3F7420AE65B74DBA459919C8EE4CDDD67B377_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758539BAB55F46D4BBF114C2EFD7959EAC1D4F74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3D4075FEE3A6553252231D0D9D36146556637A3);
		s_Il2CppMethodInitialized = true;
	}
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* G_B4_0 = NULL;
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* G_B3_0 = NULL;
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* G_B6_0 = NULL;
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* G_B5_0 = NULL;
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* G_B10_0 = NULL;
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* G_B9_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B12_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B11_0 = NULL;
	{
		// if (!Requests.Contains(request))
		HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* L_0;
		L_0 = VoiceSDKImpl_get_Requests_m4D22091B386178D74B5C67275BB3CB9CD8C3DAA9_inline(__this, NULL);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_1 = ___request0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_m16F3F7420AE65B74DBA459919C8EE4CDDD67B377(L_0, L_1, HashSet_1_Contains_m16F3F7420AE65B74DBA459919C8EE4CDDD67B377_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// VLog.D($"Request Canceled\nReason: {request.Results.Message}");
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_3 = ___request0;
		NullCheck(L_3);
		VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* L_4;
		L_4 = VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_inline(L_3, VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VoiceServiceRequestResults_get_Message_mB5D3F7451AC4CE7DA64F7CAD1C9E8A856B7E2188_inline(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF3D4075FEE3A6553252231D0D9D36146556637A3, L_5, NULL);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_6, NULL);
		// VoiceEvents?.OnCanceled?.Invoke(request.Results.Message);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_7;
		L_7 = VoiceSDKImpl_get_VoiceEvents_mDB22DE6A42BBC0225E1F1C498D83E97E23F1D7CC(__this, NULL);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_8 = L_7;
		G_B3_0 = L_8;
		if (L_8)
		{
			G_B4_0 = L_8;
			goto IL_0035;
		}
	}
	{
		goto IL_0050;
	}

IL_0035:
	{
		NullCheck(G_B4_0);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_9;
		L_9 = SpeechEvents_get_OnCanceled_mC99F35015A99C7E082341B8E8DA65FAF1E5B7D6C_inline(G_B4_0, NULL);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_10 = L_9;
		G_B5_0 = L_10;
		if (L_10)
		{
			G_B6_0 = L_10;
			goto IL_0040;
		}
	}
	{
		goto IL_0050;
	}

IL_0040:
	{
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_11 = ___request0;
		NullCheck(L_11);
		VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* L_12;
		L_12 = VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_inline(L_11, VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VoiceServiceRequestResults_get_Message_mB5D3F7451AC4CE7DA64F7CAD1C9E8A856B7E2188_inline(L_12, NULL);
		NullCheck(G_B6_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B6_0, L_13, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_0050:
	{
		// if (!string.Equals(request.Results.Message, WitConstants.CANCEL_MESSAGE_PRE_SEND))
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_14 = ___request0;
		NullCheck(L_14);
		VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* L_15;
		L_15 = VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_inline(L_14, VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_RuntimeMethod_var);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VoiceServiceRequestResults_get_Message_mB5D3F7451AC4CE7DA64F7CAD1C9E8A856B7E2188_inline(L_15, NULL);
		bool L_17;
		L_17 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_16, _stringLiteral758539BAB55F46D4BBF114C2EFD7959EAC1D4F74, NULL);
		if (L_17)
		{
			goto IL_0081;
		}
	}
	{
		// VoiceEvents?.OnAborted?.Invoke();
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_18;
		L_18 = VoiceSDKImpl_get_VoiceEvents_mDB22DE6A42BBC0225E1F1C498D83E97E23F1D7CC(__this, NULL);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0072;
		}
	}
	{
		return;
	}

IL_0072:
	{
		NullCheck(G_B10_0);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_20;
		L_20 = SpeechEvents_get_OnAborted_m1BF160D6FBB7602D71BB7E262F7FFCF868C0DFF0_inline(G_B10_0, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_21 = L_20;
		G_B11_0 = L_21;
		if (L_21)
		{
			G_B12_0 = L_21;
			goto IL_007c;
		}
	}
	{
		return;
	}

IL_007c:
	{
		NullCheck(G_B12_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B12_0, NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::OnRequestFailed(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_OnRequestFailed_m72F77F4D52E0EE70152F3EA1B80D1E3E91FB8556 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m16F3F7420AE65B74DBA459919C8EE4CDDD67B377_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m40308708481154EFE4E59A5787D5CB02DC8B5645_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70D7A6B6F07D06B84D969116AFFEF4306B8E5C76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE7DD99E85C227059851B0EE97AE932456AEF7DC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* G_B4_0 = NULL;
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* G_B3_0 = NULL;
	WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* G_B6_0 = NULL;
	WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* G_B5_0 = NULL;
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* G_B9_0 = NULL;
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* G_B8_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B11_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B10_0 = NULL;
	{
		// if (!Requests.Contains(request))
		HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* L_0;
		L_0 = VoiceSDKImpl_get_Requests_m4D22091B386178D74B5C67275BB3CB9CD8C3DAA9_inline(__this, NULL);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_1 = ___request0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_m16F3F7420AE65B74DBA459919C8EE4CDDD67B377(L_0, L_1, HashSet_1_Contains_m16F3F7420AE65B74DBA459919C8EE4CDDD67B377_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// VLog.D($"Request Failed\nError: {request.Results.Message}");
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_3 = ___request0;
		NullCheck(L_3);
		VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* L_4;
		L_4 = VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_inline(L_3, VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VoiceServiceRequestResults_get_Message_mB5D3F7451AC4CE7DA64F7CAD1C9E8A856B7E2188_inline(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral70D7A6B6F07D06B84D969116AFFEF4306B8E5C76, L_5, NULL);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_6, NULL);
		// VoiceEvents?.OnError?.Invoke("HTTP Error " + request.Results.StatusCode, request.Results.Message);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_7;
		L_7 = VoiceSDKImpl_get_VoiceEvents_mDB22DE6A42BBC0225E1F1C498D83E97E23F1D7CC(__this, NULL);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_8 = L_7;
		G_B3_0 = L_8;
		if (L_8)
		{
			G_B4_0 = L_8;
			goto IL_0035;
		}
	}
	{
		goto IL_006d;
	}

IL_0035:
	{
		NullCheck(G_B4_0);
		WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* L_9;
		L_9 = SpeechEvents_get_OnError_mCB052EBA347C9125964E56DD0BD6CC0264796421_inline(G_B4_0, NULL);
		WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* L_10 = L_9;
		G_B5_0 = L_10;
		if (L_10)
		{
			G_B6_0 = L_10;
			goto IL_0040;
		}
	}
	{
		goto IL_006d;
	}

IL_0040:
	{
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_11 = ___request0;
		NullCheck(L_11);
		VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* L_12;
		L_12 = VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_inline(L_11, VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_RuntimeMethod_var);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VoiceServiceRequestResults_get_StatusCode_m3C210912FC433548965F049249DF0CDD46C41732_inline(L_12, NULL);
		V_0 = L_13;
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBE7DD99E85C227059851B0EE97AE932456AEF7DC, L_14, NULL);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_16 = ___request0;
		NullCheck(L_16);
		VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* L_17;
		L_17 = VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_inline(L_16, VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_RuntimeMethod_var);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VoiceServiceRequestResults_get_Message_mB5D3F7451AC4CE7DA64F7CAD1C9E8A856B7E2188_inline(L_17, NULL);
		NullCheck(G_B6_0);
		UnityEvent_2_Invoke_m40308708481154EFE4E59A5787D5CB02DC8B5645(G_B6_0, L_15, L_18, UnityEvent_2_Invoke_m40308708481154EFE4E59A5787D5CB02DC8B5645_RuntimeMethod_var);
	}

IL_006d:
	{
		// VoiceEvents?.OnRequestCompleted?.Invoke();
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_19;
		L_19 = VoiceSDKImpl_get_VoiceEvents_mDB22DE6A42BBC0225E1F1C498D83E97E23F1D7CC(__this, NULL);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_20 = L_19;
		G_B8_0 = L_20;
		if (L_20)
		{
			G_B9_0 = L_20;
			goto IL_0078;
		}
	}
	{
		return;
	}

IL_0078:
	{
		NullCheck(G_B9_0);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_21;
		L_21 = SpeechEvents_get_OnRequestCompleted_m4FDD273CC7D87CE80A18BBC2E3107BF81CBF4CBB_inline(G_B9_0, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_22 = L_21;
		G_B10_0 = L_22;
		if (L_22)
		{
			G_B11_0 = L_22;
			goto IL_0082;
		}
	}
	{
		return;
	}

IL_0082:
	{
		NullCheck(G_B11_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B11_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::OnRequestSuccess(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_OnRequestSuccess_mD093D6DFA88EBC48610BF589608DB53359E66870 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m16F3F7420AE65B74DBA459919C8EE4CDDD67B377_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m29A1E14E6C4E7BD2AA1810F34C1F79A2D1A6B2CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3071111457D2E6DE5F1B14C4FAB682F6E0FFAB70);
		s_Il2CppMethodInitialized = true;
	}
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* G_B4_0 = NULL;
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* G_B3_0 = NULL;
	WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* G_B6_0 = NULL;
	WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* G_B5_0 = NULL;
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* G_B9_0 = NULL;
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* G_B8_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B11_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B10_0 = NULL;
	{
		// if (!Requests.Contains(request))
		HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* L_0;
		L_0 = VoiceSDKImpl_get_Requests_m4D22091B386178D74B5C67275BB3CB9CD8C3DAA9_inline(__this, NULL);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_1 = ___request0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_m16F3F7420AE65B74DBA459919C8EE4CDDD67B377(L_0, L_1, HashSet_1_Contains_m16F3F7420AE65B74DBA459919C8EE4CDDD67B377_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// VLog.D("Request Success");
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(_stringLiteral3071111457D2E6DE5F1B14C4FAB682F6E0FFAB70, NULL);
		// VoiceEvents?.OnResponse?.Invoke(request.Results.ResponseData);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_3;
		L_3 = VoiceSDKImpl_get_VoiceEvents_mDB22DE6A42BBC0225E1F1C498D83E97E23F1D7CC(__this, NULL);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0025;
		}
	}
	{
		goto IL_0040;
	}

IL_0025:
	{
		NullCheck(G_B4_0);
		WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* L_5;
		L_5 = SpeechEvents_get_OnResponse_m35A479475B9CCCE66CDA4028A0A6AE6343E50400_inline(G_B4_0, NULL);
		WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* L_6 = L_5;
		G_B5_0 = L_6;
		if (L_6)
		{
			G_B6_0 = L_6;
			goto IL_0030;
		}
	}
	{
		goto IL_0040;
	}

IL_0030:
	{
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_7 = ___request0;
		NullCheck(L_7);
		VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* L_8;
		L_8 = VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_inline(L_7, VoiceRequest_4_get_Results_mE1D47894138EB5113E78689B7F8CB4B354E617F5_RuntimeMethod_var);
		NullCheck(L_8);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_9;
		L_9 = VoiceServiceRequestResults_get_ResponseData_m799C34130B5FB50CA3C0EC9B0D437997AFA483A7_inline(L_8, NULL);
		NullCheck(G_B6_0);
		UnityEvent_1_Invoke_m29A1E14E6C4E7BD2AA1810F34C1F79A2D1A6B2CC(G_B6_0, L_9, UnityEvent_1_Invoke_m29A1E14E6C4E7BD2AA1810F34C1F79A2D1A6B2CC_RuntimeMethod_var);
	}

IL_0040:
	{
		// VoiceEvents?.OnRequestCompleted?.Invoke();
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_10;
		L_10 = VoiceSDKImpl_get_VoiceEvents_mDB22DE6A42BBC0225E1F1C498D83E97E23F1D7CC(__this, NULL);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_11 = L_10;
		G_B8_0 = L_11;
		if (L_11)
		{
			G_B9_0 = L_11;
			goto IL_004b;
		}
	}
	{
		return;
	}

IL_004b:
	{
		NullCheck(G_B9_0);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12;
		L_12 = SpeechEvents_get_OnRequestCompleted_m4FDD273CC7D87CE80A18BBC2E3107BF81CBF4CBB_inline(G_B9_0, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_13 = L_12;
		G_B10_0 = L_13;
		if (L_13)
		{
			G_B11_0 = L_13;
			goto IL_0055;
		}
	}
	{
		return;
	}

IL_0055:
	{
		NullCheck(G_B11_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B11_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::OnRequestComplete(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_OnRequestComplete_m3B8EFE630D402FD3C8507AB10156CC6AE48BBEE6 (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m16F3F7420AE65B74DBA459919C8EE4CDDD67B377_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m8FBC2DC239E52D1082A0E433EC2F46FFD7AE5D6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m8CED891B50C804B13259BD552FD7621CFF6CF7E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnCancel_m93EF162482A866C17FEA71230F2A67314F27CA79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnComplete_mCF88D3B32BB971E0CDD460436A604C337B58ABA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnFailed_mD9FA83DC2035E8D5C5EA84AF7E7EAC9F2D7AE4C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequestEvents_1_get_OnSuccess_mFE8C133667AE3019A85E73A5117971DA76BD35FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequest_4_get_Events_m203351D7CF3E967C106C1CB5FA57C03D3754A132_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImpl_OnRequestCanceled_mBB992A0F8696098849503C93541DA919095C345A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImpl_OnRequestComplete_m3B8EFE630D402FD3C8507AB10156CC6AE48BBEE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImpl_OnRequestFailed_m72F77F4D52E0EE70152F3EA1B80D1E3E91FB8556_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImpl_OnRequestSuccess_mD093D6DFA88EBC48610BF589608DB53359E66870_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* G_B4_0 = NULL;
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* G_B3_0 = NULL;
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B6_0 = NULL;
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B5_0 = NULL;
	{
		// if (!Requests.Contains(request))
		HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* L_0;
		L_0 = VoiceSDKImpl_get_Requests_m4D22091B386178D74B5C67275BB3CB9CD8C3DAA9_inline(__this, NULL);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_1 = ___request0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_m16F3F7420AE65B74DBA459919C8EE4CDDD67B377(L_0, L_1, HashSet_1_Contains_m16F3F7420AE65B74DBA459919C8EE4CDDD67B377_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// request.Events.OnCancel.RemoveListener(OnRequestCanceled);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_3 = ___request0;
		NullCheck(L_3);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_4;
		L_4 = VoiceRequest_4_get_Events_m203351D7CF3E967C106C1CB5FA57C03D3754A132_inline(L_3, VoiceRequest_4_get_Events_m203351D7CF3E967C106C1CB5FA57C03D3754A132_RuntimeMethod_var);
		NullCheck(L_4);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_5;
		L_5 = VoiceRequestEvents_1_get_OnCancel_m93EF162482A866C17FEA71230F2A67314F27CA79_inline(L_4, VoiceRequestEvents_1_get_OnCancel_m93EF162482A866C17FEA71230F2A67314F27CA79_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_6 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_6, __this, (intptr_t)((void*)VoiceSDKImpl_OnRequestCanceled_mBB992A0F8696098849503C93541DA919095C345A_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(L_5, L_6, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		// request.Events.OnFailed.RemoveListener(OnRequestFailed);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_7 = ___request0;
		NullCheck(L_7);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_8;
		L_8 = VoiceRequest_4_get_Events_m203351D7CF3E967C106C1CB5FA57C03D3754A132_inline(L_7, VoiceRequest_4_get_Events_m203351D7CF3E967C106C1CB5FA57C03D3754A132_RuntimeMethod_var);
		NullCheck(L_8);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_9;
		L_9 = VoiceRequestEvents_1_get_OnFailed_mD9FA83DC2035E8D5C5EA84AF7E7EAC9F2D7AE4C2_inline(L_8, VoiceRequestEvents_1_get_OnFailed_mD9FA83DC2035E8D5C5EA84AF7E7EAC9F2D7AE4C2_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_10 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_10, __this, (intptr_t)((void*)VoiceSDKImpl_OnRequestFailed_m72F77F4D52E0EE70152F3EA1B80D1E3E91FB8556_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(L_9, L_10, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		// request.Events.OnSuccess.RemoveListener(OnRequestSuccess);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_11 = ___request0;
		NullCheck(L_11);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_12;
		L_12 = VoiceRequest_4_get_Events_m203351D7CF3E967C106C1CB5FA57C03D3754A132_inline(L_11, VoiceRequest_4_get_Events_m203351D7CF3E967C106C1CB5FA57C03D3754A132_RuntimeMethod_var);
		NullCheck(L_12);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_13;
		L_13 = VoiceRequestEvents_1_get_OnSuccess_mFE8C133667AE3019A85E73A5117971DA76BD35FF_inline(L_12, VoiceRequestEvents_1_get_OnSuccess_mFE8C133667AE3019A85E73A5117971DA76BD35FF_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_14 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_14, __this, (intptr_t)((void*)VoiceSDKImpl_OnRequestSuccess_mD093D6DFA88EBC48610BF589608DB53359E66870_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(L_13, L_14, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		// request.Events.OnComplete.RemoveListener(OnRequestComplete);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_15 = ___request0;
		NullCheck(L_15);
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_16;
		L_16 = VoiceRequest_4_get_Events_m203351D7CF3E967C106C1CB5FA57C03D3754A132_inline(L_15, VoiceRequest_4_get_Events_m203351D7CF3E967C106C1CB5FA57C03D3754A132_RuntimeMethod_var);
		NullCheck(L_16);
		VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* L_17;
		L_17 = VoiceRequestEvents_1_get_OnComplete_mCF88D3B32BB971E0CDD460436A604C337B58ABA9_inline(L_16, VoiceRequestEvents_1_get_OnComplete_mCF88D3B32BB971E0CDD460436A604C337B58ABA9_RuntimeMethod_var);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_18 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_18, __this, (intptr_t)((void*)VoiceSDKImpl_OnRequestComplete_m3B8EFE630D402FD3C8507AB10156CC6AE48BBEE6_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(L_17, L_18, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		// Requests.Remove(request);
		HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* L_19;
		L_19 = VoiceSDKImpl_get_Requests_m4D22091B386178D74B5C67275BB3CB9CD8C3DAA9_inline(__this, NULL);
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_20 = ___request0;
		NullCheck(L_19);
		bool L_21;
		L_21 = HashSet_1_Remove_m8FBC2DC239E52D1082A0E433EC2F46FFD7AE5D6A(L_19, L_20, HashSet_1_Remove_m8FBC2DC239E52D1082A0E433EC2F46FFD7AE5D6A_RuntimeMethod_var);
		// VoiceEvents?.OnComplete?.Invoke(request);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_22;
		L_22 = VoiceSDKImpl_get_VoiceEvents_mDB22DE6A42BBC0225E1F1C498D83E97E23F1D7CC(__this, NULL);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_23 = L_22;
		G_B3_0 = L_23;
		if (L_23)
		{
			G_B4_0 = L_23;
			goto IL_0097;
		}
	}
	{
		return;
	}

IL_0097:
	{
		NullCheck(G_B4_0);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_24;
		L_24 = SpeechEvents_get_OnComplete_m9FD0FF1FDEA3E57022FA443D9D27A91108EC4BB9_inline(G_B4_0, NULL);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_25 = L_24;
		G_B5_0 = L_25;
		if (L_25)
		{
			G_B6_0 = L_25;
			goto IL_00a1;
		}
	}
	{
		return;
	}

IL_00a1:
	{
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_26 = ___request0;
		NullCheck(G_B6_0);
		UnityEvent_1_Invoke_m8CED891B50C804B13259BD552FD7621CFF6CF7E5(G_B6_0, L_26, UnityEvent_1_Invoke_m8CED891B50C804B13259BD552FD7621CFF6CF7E5_RuntimeMethod_var);
		// }
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
// Oculus.Voice.Bindings.Android.VoiceSDKBinding Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::get_Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* VoiceSDKImplRequest_get_Service_m24E53E1F349FD4BA62C846C1D53D92081E977DCF (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, const RuntimeMethod* method) 
{
	{
		// public VoiceSDKBinding Service { get; private set; }
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = __this->___U3CServiceU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::set_Service(Oculus.Voice.Bindings.Android.VoiceSDKBinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_set_Service_mA724B1BFE746287B14AFE494B068E6E58955B9C9 (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* ___value0, const RuntimeMethod* method) 
{
	{
		// public VoiceSDKBinding Service { get; private set; }
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = ___value0;
		__this->___U3CServiceU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CServiceU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::get_Immediately()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKImplRequest_get_Immediately_mA18C4F628A92860FD6C255A0A6731DE6486721FA (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, const RuntimeMethod* method) 
{
	{
		// public bool Immediately { get; private set; }
		bool L_0 = __this->___U3CImmediatelyU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::set_Immediately(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_set_Immediately_m356B48CE913A084BCE771141AD004F93CF037FFC (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Immediately { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CImmediatelyU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::.ctor(Oculus.Voice.Bindings.Android.VoiceSDKBinding,Meta.Voice.NLPRequestInputType,System.Boolean,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest__ctor_m2FD6E677E01ED0BDD25CA84EFDD0C3143C55A33E (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* ___newService0, int32_t ___newInputType1, bool ___newImmediately2, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___newOptions3, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___newEvents4, const RuntimeMethod* method) 
{
	{
		// VoiceServiceRequestEvents newEvents) : base(newInputType, newOptions, newEvents)
		int32_t L_0 = ___newInputType1;
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_1 = ___newOptions3;
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_2 = ___newEvents4;
		VoiceServiceRequest__ctor_m082596AC2C0139EA1BF90D3AE4848CF86082C2FD(__this, L_0, L_1, L_2, NULL);
		// Service = newService;
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_3 = ___newService0;
		VoiceSDKImplRequest_set_Service_mA724B1BFE746287B14AFE494B068E6E58955B9C9_inline(__this, L_3, NULL);
		// Immediately = newImmediately;
		bool L_4 = ___newImmediately2;
		VoiceSDKImplRequest_set_Immediately_m356B48CE913A084BCE771141AD004F93CF037FFC_inline(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::HandleAudioActivation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_HandleAudioActivation_mB8C2EF1AE63239CEF55CBA3874D9A7161CDA1F33 (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Immediately)
		bool L_0;
		L_0 = VoiceSDKImplRequest_get_Immediately_mA18C4F628A92860FD6C255A0A6731DE6486721FA_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// Service.ActivateImmediately(Options);
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_1;
		L_1 = VoiceSDKImplRequest_get_Service_m24E53E1F349FD4BA62C846C1D53D92081E977DCF_inline(__this, NULL);
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_2;
		L_2 = VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_inline(__this, VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_RuntimeMethod_var);
		NullCheck(L_1);
		VoiceSDKBinding_ActivateImmediately_mAE77E654195172665EA423332C5287AFA9D6FA03(L_1, L_2, NULL);
		return;
	}

IL_001a:
	{
		// Service.Activate(Options);
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_3;
		L_3 = VoiceSDKImplRequest_get_Service_m24E53E1F349FD4BA62C846C1D53D92081E977DCF_inline(__this, NULL);
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_4;
		L_4 = VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_inline(__this, VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_RuntimeMethod_var);
		NullCheck(L_3);
		VoiceSDKBinding_Activate_m2B9D589F386A31D807C30E522DC49F644D203754(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::HandleAudioDeactivation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_HandleAudioDeactivation_mC9C0318BEEB63FA8440EEC41943FC95136B25E7B (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, const RuntimeMethod* method) 
{
	{
		// Service.Deactivate();
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0;
		L_0 = VoiceSDKImplRequest_get_Service_m24E53E1F349FD4BA62C846C1D53D92081E977DCF_inline(__this, NULL);
		NullCheck(L_0);
		VoiceSDKBinding_Deactivate_mB0F3CE4FF5E8579CEAC78F717250E951B5DEEF71(L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::HandleSend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_HandleSend_mA31892E201CDE4E05027D63F218ED60C6AB35553 (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (InputType == NLPRequestInputType.Text)
		int32_t L_0;
		L_0 = NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_inline(__this, NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// Service.Activate(Options.Text, Options);
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_1;
		L_1 = VoiceSDKImplRequest_get_Service_m24E53E1F349FD4BA62C846C1D53D92081E977DCF_inline(__this, NULL);
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_2;
		L_2 = VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_inline(__this, VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VoiceServiceRequestOptions_get_Text_m78FC14117147FF7042E92666EBC0633FA4BD8AD0_inline(L_2, NULL);
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_4;
		L_4 = VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_inline(__this, VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_RuntimeMethod_var);
		NullCheck(L_1);
		VoiceSDKBinding_Activate_m4F67A04DBD5D731C2F6CEF75D547B81D591B616E(L_1, L_3, L_4, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::HandleCancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_HandleCancel_m38DC8F6A7F3A180CC18A1D58DB7F7BC3C4A69731 (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, const RuntimeMethod* method) 
{
	{
		// Service.DeactivateAndAbortRequest();
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0;
		L_0 = VoiceSDKImplRequest_get_Service_m24E53E1F349FD4BA62C846C1D53D92081E977DCF_inline(__this, NULL);
		NullCheck(L_0);
		VoiceSDKBinding_DeactivateAndAbortRequest_m84DF1F32E12D4FF53F50C0680F684256537761BC(L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::HandleStartListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_HandleStartListening_m1FD6806C473255305D5BE76A688554ACEA469DC1 (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, const RuntimeMethod* method) 
{
	{
		// SetAudioInputState(VoiceAudioInputState.On);
		VirtualActionInvoker1< int32_t >::Invoke(38 /* System.Void Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::SetAudioInputState(Meta.Voice.VoiceAudioInputState) */, __this, 2);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::HandleStopListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_HandleStopListening_mF37B951F9B14CD8BF8CE8CC4985EDBC6E1967D23 (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, const RuntimeMethod* method) 
{
	{
		// SetAudioInputState(VoiceAudioInputState.Off);
		VirtualActionInvoker1< int32_t >::Invoke(38 /* System.Void Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::SetAudioInputState(Meta.Voice.VoiceAudioInputState) */, __this, 0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::HandlePartialResponse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_HandlePartialResponse_m2CF78E9E0B83F6C9C85D8A88FC6917B36836E84F (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, String_t* ___responseJson0, const RuntimeMethod* method) 
{
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* V_0 = NULL;
	{
		// WitResponseNode responseData = WitResponseNode.Parse(responseJson);
		String_t* L_0 = ___responseJson0;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1;
		L_1 = WitResponseNode_Parse_m7FC8CFF3EFB9D3B0F1BD5F6F0757035F86252542(L_0, NULL);
		V_0 = L_1;
		// HandlePartialNlpResponse(responseData);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_2 = V_0;
		VirtualActionInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(50 /* System.Void Meta.Voice.NLPAudioRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::HandlePartialNlpResponse(Meta.WitAi.Json.WitResponseNode) */, __this, L_2);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::HandlePartialTranscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_HandlePartialTranscription_mE5CAE9D79A3F05D2B6E52E5F0E954CBBB63142C9 (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, String_t* ___transcription0, const RuntimeMethod* method) 
{
	{
		// ApplyTranscription(transcription, false);
		String_t* L_0 = ___transcription0;
		VirtualActionInvoker2< String_t*, bool >::Invoke(39 /* System.Void Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::ApplyTranscription(System.String,System.Boolean) */, __this, L_0, (bool)0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::HandleFullTranscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_HandleFullTranscription_m58435396486B84E64D6A49545FF2257E816E603D (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, String_t* ___transcription0, const RuntimeMethod* method) 
{
	{
		// ApplyTranscription(transcription, true);
		String_t* L_0 = ___transcription0;
		VirtualActionInvoker2< String_t*, bool >::Invoke(39 /* System.Void Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::ApplyTranscription(System.String,System.Boolean) */, __this, L_0, (bool)1);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::HandleTransmissionBegan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_HandleTransmissionBegan_m840C22E2C5DEC52141DEA4AB63507609F5FE279D (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (InputType == NLPRequestInputType.Audio)
		int32_t L_0;
		L_0 = NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_inline(__this, NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_RuntimeMethod_var);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000f;
		}
	}
	{
		// Send();
		VirtualActionInvoker0::Invoke(18 /* System.Void Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::Send() */, __this);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::HandleCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_HandleCanceled_m64F4142836CC611D42DD65ADD5424DD2CE72C60A (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, const RuntimeMethod* method) 
{
	{
		// HandleCancel();
		VirtualActionInvoker0::Invoke(28 /* System.Void Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::HandleCancel() */, __this);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::HandleError(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_HandleError_m16F17C2F85EB7A4C5EBE53AA28DF202A1DFA5CC5 (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, String_t* ___error0, String_t* ___message1, String_t* ___errorBody2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HandleFailure($"{error} - {message}");
		String_t* L_0 = ___error0;
		String_t* L_1 = ___message1;
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62, L_1, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(22 /* System.Void Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::HandleFailure(System.String) */, __this, L_2);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImplRequest::HandleResponse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_HandleResponse_m7852E12CDCB3AE6B5E94AFFCE77DFAC6C223A593 (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, String_t* ___responseJson0, const RuntimeMethod* method) 
{
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* V_0 = NULL;
	{
		// WitResponseNode responseData = WitResponseNode.Parse(responseJson);
		String_t* L_0 = ___responseJson0;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1;
		L_1 = WitResponseNode_Parse_m7FC8CFF3EFB9D3B0F1BD5F6F0757035F86252542(L_0, NULL);
		V_0 = L_1;
		// HandleFinalNlpResponse(responseData, null);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_2 = V_0;
		VirtualActionInvoker2< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(53 /* System.Void Meta.Voice.NLPAudioRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::HandleFinalNlpResponse(Meta.WitAi.Json.WitResponseNode,System.String) */, __this, L_2, (String_t*)NULL);
		// }
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
// Meta.WitAi.Events.VoiceEvents Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::get_VoiceEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* VoiceSDKListenerBinding_get_VoiceEvents_mB57DC862894B65506C815C301C5631E195C83847 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VoiceEvents VoiceEvents => _voiceService.VoiceEvents;
		RuntimeObject* L_0 = __this->____voiceService_4;
		NullCheck(L_0);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_1;
		L_1 = InterfaceFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(3 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.IVoiceService::get_VoiceEvents() */, IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Meta.WitAi.Events.TelemetryEvents Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::get_TelemetryEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* VoiceSDKListenerBinding_get_TelemetryEvents_m72B4328D72C40D781FEF1668138B63CDD3F89B0F (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TelemetryEvents TelemetryEvents => _voiceService.TelemetryEvents;
		RuntimeObject* L_0 = __this->____voiceService_4;
		NullCheck(L_0);
		TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* L_1;
		L_1 = InterfaceFuncInvoker0< TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* >::Invoke(5 /* Meta.WitAi.Events.TelemetryEvents Meta.WitAi.IVoiceService::get_TelemetryEvents() */, IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::.ctor(Meta.WitAi.IVoiceService,Oculus.Voice.Bindings.Android.IVCBindingEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding__ctor_m924FD698201D96E8364328E105232FA2EDD9AF3E (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, RuntimeObject* ___voiceService0, RuntimeObject* ___bindingEvents1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52CCE57FBBB435D24E1DD8F182FA0BDA2750C166);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VoiceSDKListenerBinding(IVoiceService voiceService, IVCBindingEvents bindingEvents) : base(
		//     "com.oculus.assistant.api.voicesdk.immersivevoicecommands.IVCEventsListener")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral52CCE57FBBB435D24E1DD8F182FA0BDA2750C166, NULL);
		// _voiceService = voiceService;
		RuntimeObject* L_0 = ___voiceService0;
		__this->____voiceService_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____voiceService_4), (void*)L_0);
		// _bindingEvents = bindingEvents;
		RuntimeObject* L_1 = ___bindingEvents1;
		__this->____bindingEvents_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bindingEvents_5), (void*)L_1);
		// }
		return;
	}
}
// Meta.WitAi.Requests.VoiceServiceRequest Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::GetRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* VoiceSDKListenerBinding_GetRequest_m38136DF758A0E38BAE4F571F67D5AE7BA8B14EDF (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___requestId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisVoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536_mF12222DC4CEBF5BCC6CA2AD209B9D539E30DAAE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1717C5902C12395F339137E7C859B070DC3E4AC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7726F1B66F3C91BA3CC742401FCBE2D36717D8D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAB1C5F19EA9209F72A2F2543713CEA1A7CCF29EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m5CB1CFB26B2AE6689AC3D812FBD04752E0F5E469_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_mDE40B5AA383E622BEFDF2028B2668F3A199C9772_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* V_0 = NULL;
	Enumerator_t238229FA78C36CE2AB25DB5A0A3638F0B1E1DBE2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* V_2 = NULL;
	String_t* V_3 = NULL;
	VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* V_4 = NULL;
	String_t* G_B10_0 = NULL;
	WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* G_B9_0 = NULL;
	WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* G_B8_0 = NULL;
	{
		// HashSet<VoiceServiceRequest> requests = _voiceService.Requests;
		RuntimeObject* L_0 = __this->____voiceService_4;
		NullCheck(L_0);
		HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* L_1;
		L_1 = InterfaceFuncInvoker0< HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* >::Invoke(1 /* System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest> Meta.WitAi.IVoiceService::get_Requests() */, IVoiceService_tBE4EA1093329BBF0E76D5E8DDC3373199C630FEC_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// if (requests == null || requests.Count == 0)
		HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = HashSet_1_get_Count_mDE40B5AA383E622BEFDF2028B2668F3A199C9772_inline(L_3, HashSet_1_get_Count_mDE40B5AA383E622BEFDF2028B2668F3A199C9772_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0019;
		}
	}

IL_0017:
	{
		// return null;
		return (VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536*)NULL;
	}

IL_0019:
	{
		// foreach (var request in requests)
		HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* L_5 = V_0;
		NullCheck(L_5);
		Enumerator_t238229FA78C36CE2AB25DB5A0A3638F0B1E1DBE2 L_6;
		L_6 = HashSet_1_GetEnumerator_m5CB1CFB26B2AE6689AC3D812FBD04752E0F5E469(L_5, HashSet_1_GetEnumerator_m5CB1CFB26B2AE6689AC3D812FBD04752E0F5E469_RuntimeMethod_var);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1717C5902C12395F339137E7C859B070DC3E4AC8((&V_1), Enumerator_Dispose_m1717C5902C12395F339137E7C859B070DC3E4AC8_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0051_1;
			}

IL_0022_1:
			{
				// foreach (var request in requests)
				VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_7;
				L_7 = Enumerator_get_Current_mAB1C5F19EA9209F72A2F2543713CEA1A7CCF29EE_inline((&V_1), Enumerator_get_Current_mAB1C5F19EA9209F72A2F2543713CEA1A7CCF29EE_RuntimeMethod_var);
				V_2 = L_7;
				// string checkRequestId = request?.Options?.RequestId;
				VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_8 = V_2;
				if (L_8)
				{
					goto IL_0030_1;
				}
			}
			{
				G_B10_0 = ((String_t*)(NULL));
				goto IL_0042_1;
			}

IL_0030_1:
			{
				VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_9 = V_2;
				NullCheck(L_9);
				WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_10;
				L_10 = VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_inline(L_9, VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_RuntimeMethod_var);
				WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_11 = L_10;
				G_B8_0 = L_11;
				if (L_11)
				{
					G_B9_0 = L_11;
					goto IL_003d_1;
				}
			}
			{
				G_B10_0 = ((String_t*)(NULL));
				goto IL_0042_1;
			}

IL_003d_1:
			{
				NullCheck(G_B9_0);
				String_t* L_12;
				L_12 = VoiceServiceRequestOptions_get_RequestId_mC465590B47E4B5F542BD3E9BED1074D032C1446F_inline(G_B9_0, NULL);
				G_B10_0 = L_12;
			}

IL_0042_1:
			{
				V_3 = G_B10_0;
				// if (string.Equals(requestId, checkRequestId))
				String_t* L_13 = ___requestId0;
				String_t* L_14 = V_3;
				bool L_15;
				L_15 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_13, L_14, NULL);
				if (!L_15)
				{
					goto IL_0051_1;
				}
			}
			{
				// return request;
				VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_16 = V_2;
				V_4 = L_16;
				goto IL_0071;
			}

IL_0051_1:
			{
				// foreach (var request in requests)
				bool L_17;
				L_17 = Enumerator_MoveNext_m7726F1B66F3C91BA3CC742401FCBE2D36717D8D0((&V_1), Enumerator_MoveNext_m7726F1B66F3C91BA3CC742401FCBE2D36717D8D0_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_0022_1;
				}
			}
			{
				goto IL_006a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
		// return requests.First();
		HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* L_18 = V_0;
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_19;
		L_19 = Enumerable_First_TisVoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536_mF12222DC4CEBF5BCC6CA2AD209B9D539E30DAAE5(L_18, Enumerable_First_TisVoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536_mF12222DC4CEBF5BCC6CA2AD209B9D539E30DAAE5_RuntimeMethod_var);
		return L_19;
	}

IL_0071:
	{
		// }
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_20 = V_4;
		return L_20;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onStartListening(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onStartListening_m13BD037635C5126FF7863C7B8C7E0F8DEB32AF5E (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___requestId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* V_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B4_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B3_0 = NULL;
	{
		// var request = GetRequest(requestId);
		String_t* L_0 = ___requestId0;
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_1;
		L_1 = VoiceSDKListenerBinding_GetRequest_m38136DF758A0E38BAE4F571F67D5AE7BA8B14EDF(__this, L_0, NULL);
		// if (request is VoiceSDKImplRequest implRequest)
		V_0 = ((VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75*)IsInstClass((RuntimeObject*)L_1, VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75_il2cpp_TypeInfo_var));
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// implRequest.HandleStartListening();
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_3 = V_0;
		NullCheck(L_3);
		VoiceSDKImplRequest_HandleStartListening_m1FD6806C473255305D5BE76A688554ACEA469DC1(L_3, NULL);
	}

IL_0016:
	{
		// VoiceEvents.OnStartListening?.Invoke();
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_4;
		L_4 = VoiceSDKListenerBinding_get_VoiceEvents_mB57DC862894B65506C815C301C5631E195C83847(__this, NULL);
		NullCheck(L_4);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_5;
		L_5 = SpeechEvents_get_OnStartListening_m1AE66AF56C8A79496E386C26CCB815E99EBB4DA7_inline(L_4, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_6 = L_5;
		G_B3_0 = L_6;
		if (L_6)
		{
			G_B4_0 = L_6;
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		NullCheck(G_B4_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B4_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onStartListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onStartListening_mE352EEB55023FF09AF82AB90FE1E9FA5549EA70F (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, const RuntimeMethod* method) 
{
	{
		// public void onStartListening() => onStartListening(null);
		VoiceSDKListenerBinding_onStartListening_m13BD037635C5126FF7863C7B8C7E0F8DEB32AF5E(__this, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onStoppedListening(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onStoppedListening_mEBA9CDB24CD1028952612BC8245CC71CCB8558FE (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, int32_t ___reason0, String_t* ___requestId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* V_0 = NULL;
	int32_t V_1 = 0;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B4_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B3_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B9_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B8_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B12_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B11_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B15_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B14_0 = NULL;
	{
		// var request = GetRequest(requestId);
		String_t* L_0 = ___requestId1;
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_1;
		L_1 = VoiceSDKListenerBinding_GetRequest_m38136DF758A0E38BAE4F571F67D5AE7BA8B14EDF(__this, L_0, NULL);
		// if (request is VoiceSDKImplRequest implRequest)
		V_0 = ((VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75*)IsInstClass((RuntimeObject*)L_1, VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75_il2cpp_TypeInfo_var));
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// implRequest.HandleStopListening();
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_3 = V_0;
		NullCheck(L_3);
		VoiceSDKImplRequest_HandleStopListening_mF37B951F9B14CD8BF8CE8CC4985EDBC6E1967D23(L_3, NULL);
	}

IL_0016:
	{
		// VoiceEvents.OnStoppedListening?.Invoke();
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_4;
		L_4 = VoiceSDKListenerBinding_get_VoiceEvents_mB57DC862894B65506C815C301C5631E195C83847(__this, NULL);
		NullCheck(L_4);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_5;
		L_5 = SpeechEvents_get_OnStoppedListening_mB59F3490B5F895B311DA82A0288DC2AEACF87586_inline(L_4, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_6 = L_5;
		G_B3_0 = L_6;
		if (L_6)
		{
			G_B4_0 = L_6;
			goto IL_0027;
		}
	}
	{
		goto IL_002c;
	}

IL_0027:
	{
		NullCheck(G_B4_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B4_0, NULL);
	}

IL_002c:
	{
		// switch((StoppedListeningReason)reason){
		int32_t L_7 = ___reason0;
		V_1 = L_7;
		int32_t L_8 = V_1;
		switch (L_8)
		{
			case 0:
			{
				goto IL_0086;
			}
			case 1:
			{
				goto IL_0045;
			}
			case 2:
			{
				goto IL_005b;
			}
			case 3:
			{
				goto IL_0071;
			}
		}
	}
	{
		return;
	}

IL_0045:
	{
		// VoiceEvents.OnStoppedListeningDueToInactivity?.Invoke();
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_9;
		L_9 = VoiceSDKListenerBinding_get_VoiceEvents_mB57DC862894B65506C815C301C5631E195C83847(__this, NULL);
		NullCheck(L_9);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_10;
		L_10 = SpeechEvents_get_OnStoppedListeningDueToInactivity_mDB9EB1C53F62E85CE682C58725EFE2ED98FCED59_inline(L_9, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_11 = L_10;
		G_B8_0 = L_11;
		if (L_11)
		{
			G_B9_0 = L_11;
			goto IL_0055;
		}
	}
	{
		return;
	}

IL_0055:
	{
		NullCheck(G_B9_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B9_0, NULL);
		// break;
		return;
	}

IL_005b:
	{
		// VoiceEvents.OnStoppedListeningDueToTimeout?.Invoke();
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_12;
		L_12 = VoiceSDKListenerBinding_get_VoiceEvents_mB57DC862894B65506C815C301C5631E195C83847(__this, NULL);
		NullCheck(L_12);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_13;
		L_13 = SpeechEvents_get_OnStoppedListeningDueToTimeout_m09ED39D18AEAD2C383D62452353161EF4400DF70_inline(L_12, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_14 = L_13;
		G_B11_0 = L_14;
		if (L_14)
		{
			G_B12_0 = L_14;
			goto IL_006b;
		}
	}
	{
		return;
	}

IL_006b:
	{
		NullCheck(G_B12_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B12_0, NULL);
		// break;
		return;
	}

IL_0071:
	{
		// VoiceEvents.OnStoppedListeningDueToDeactivation?.Invoke();
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_15;
		L_15 = VoiceSDKListenerBinding_get_VoiceEvents_mB57DC862894B65506C815C301C5631E195C83847(__this, NULL);
		NullCheck(L_15);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_16;
		L_16 = SpeechEvents_get_OnStoppedListeningDueToDeactivation_mBEF3FA3D000697DED97B1738FED177B46F7E5629_inline(L_15, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_17 = L_16;
		G_B14_0 = L_17;
		if (L_17)
		{
			G_B15_0 = L_17;
			goto IL_0081;
		}
	}
	{
		return;
	}

IL_0081:
	{
		NullCheck(G_B15_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B15_0, NULL);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onStoppedListening(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onStoppedListening_m32C92667EF3FD0350B528898375ED90B37A1CCE6 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, int32_t ___reason0, const RuntimeMethod* method) 
{
	{
		// public void onStoppedListening(int reason) => onStoppedListening(reason, null);
		int32_t L_0 = ___reason0;
		VoiceSDKListenerBinding_onStoppedListening_mEBA9CDB24CD1028952612BC8245CC71CCB8558FE(__this, L_0, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onRequestCreated(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onRequestCreated_m5B45DC0F288EE2466490F8C475729C82AE4AF5EB (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___requestId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m75F136A134251EC0553FA93A8F6DB17C273F2D25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m8CED891B50C804B13259BD552FD7621CFF6CF7E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* V_0 = NULL;
	WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B* G_B4_0 = NULL;
	WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B* G_B3_0 = NULL;
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B7_0 = NULL;
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B6_0 = NULL;
	{
		// var request = GetRequest(requestId);
		String_t* L_0 = ___requestId0;
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_1;
		L_1 = VoiceSDKListenerBinding_GetRequest_m38136DF758A0E38BAE4F571F67D5AE7BA8B14EDF(__this, L_0, NULL);
		// if (request is VoiceSDKImplRequest implRequest)
		V_0 = ((VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75*)IsInstClass((RuntimeObject*)L_1, VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75_il2cpp_TypeInfo_var));
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// implRequest.HandleTransmissionBegan();
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_3 = V_0;
		NullCheck(L_3);
		VoiceSDKImplRequest_HandleTransmissionBegan_m840C22E2C5DEC52141DEA4AB63507609F5FE279D(L_3, NULL);
	}

IL_0016:
	{
		// VoiceEvents.OnRequestCreated?.Invoke(null);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_4;
		L_4 = VoiceSDKListenerBinding_get_VoiceEvents_mB57DC862894B65506C815C301C5631E195C83847(__this, NULL);
		NullCheck(L_4);
		WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B* L_5;
		L_5 = SpeechEvents_get_OnRequestCreated_mDB1CAA325BD1348FDF861A84E45F47FF84D15C63_inline(L_4, NULL);
		WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B* L_6 = L_5;
		G_B3_0 = L_6;
		if (L_6)
		{
			G_B4_0 = L_6;
			goto IL_0027;
		}
	}
	{
		goto IL_002d;
	}

IL_0027:
	{
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_m75F136A134251EC0553FA93A8F6DB17C273F2D25(G_B4_0, (WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900*)NULL, UnityEvent_1_Invoke_m75F136A134251EC0553FA93A8F6DB17C273F2D25_RuntimeMethod_var);
	}

IL_002d:
	{
		// VoiceEvents.OnSend?.Invoke(null);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_7;
		L_7 = VoiceSDKListenerBinding_get_VoiceEvents_mB57DC862894B65506C815C301C5631E195C83847(__this, NULL);
		NullCheck(L_7);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_8;
		L_8 = SpeechEvents_get_OnSend_m848D965F028D864B6175BA77425848BA86153A13_inline(L_7, NULL);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_9 = L_8;
		G_B6_0 = L_9;
		if (L_9)
		{
			G_B7_0 = L_9;
			goto IL_003d;
		}
	}
	{
		return;
	}

IL_003d:
	{
		NullCheck(G_B7_0);
		UnityEvent_1_Invoke_m8CED891B50C804B13259BD552FD7621CFF6CF7E5(G_B7_0, (VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536*)NULL, UnityEvent_1_Invoke_m8CED891B50C804B13259BD552FD7621CFF6CF7E5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onRequestCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onRequestCreated_m7808F18247655B82620251AFD14640CE80C39D54 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, const RuntimeMethod* method) 
{
	{
		// private void onRequestCreated() => onRequestCreated(null);
		VoiceSDKListenerBinding_onRequestCreated_m5B45DC0F288EE2466490F8C475729C82AE4AF5EB(__this, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onPartialTranscription(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onPartialTranscription_m57DB1000AA7D19B583506B28018619E912553C1B (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___transcription0, String_t* ___requestId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* V_0 = NULL;
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* G_B4_0 = NULL;
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* G_B3_0 = NULL;
	{
		// var request = GetRequest(requestId);
		String_t* L_0 = ___requestId1;
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_1;
		L_1 = VoiceSDKListenerBinding_GetRequest_m38136DF758A0E38BAE4F571F67D5AE7BA8B14EDF(__this, L_0, NULL);
		// if (request is VoiceSDKImplRequest implRequest)
		V_0 = ((VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75*)IsInstClass((RuntimeObject*)L_1, VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75_il2cpp_TypeInfo_var));
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// implRequest.HandlePartialTranscription(transcription);
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_3 = V_0;
		String_t* L_4 = ___transcription0;
		NullCheck(L_3);
		VoiceSDKImplRequest_HandlePartialTranscription_mE5CAE9D79A3F05D2B6E52E5F0E954CBBB63142C9(L_3, L_4, NULL);
	}

IL_0017:
	{
		// VoiceEvents.OnPartialTranscription?.Invoke(transcription);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_5;
		L_5 = VoiceSDKListenerBinding_get_VoiceEvents_mB57DC862894B65506C815C301C5631E195C83847(__this, NULL);
		NullCheck(L_5);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_6;
		L_6 = SpeechEvents_get_OnPartialTranscription_m0BA26BCC13243D100712E20D4A6AE8DD56C64B18_inline(L_5, NULL);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_0027;
		}
	}
	{
		return;
	}

IL_0027:
	{
		String_t* L_8 = ___transcription0;
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B4_0, L_8, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onPartialTranscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onPartialTranscription_mBFD041B8FBC8A77436A557355259313BEAF5BFA9 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___transcription0, const RuntimeMethod* method) 
{
	{
		// public void onPartialTranscription(string transcription) => onPartialTranscription(transcription, null);
		String_t* L_0 = ___transcription0;
		VoiceSDKListenerBinding_onPartialTranscription_m57DB1000AA7D19B583506B28018619E912553C1B(__this, L_0, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onFullTranscription(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onFullTranscription_m827443E15C97C8297417DDD90ADC5B23A663A820 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___transcription0, String_t* ___requestId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* V_0 = NULL;
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* G_B4_0 = NULL;
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* G_B3_0 = NULL;
	{
		// var request = GetRequest(requestId);
		String_t* L_0 = ___requestId1;
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_1;
		L_1 = VoiceSDKListenerBinding_GetRequest_m38136DF758A0E38BAE4F571F67D5AE7BA8B14EDF(__this, L_0, NULL);
		// if (request is VoiceSDKImplRequest implRequest)
		V_0 = ((VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75*)IsInstClass((RuntimeObject*)L_1, VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75_il2cpp_TypeInfo_var));
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// implRequest.HandleFullTranscription(transcription);
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_3 = V_0;
		String_t* L_4 = ___transcription0;
		NullCheck(L_3);
		VoiceSDKImplRequest_HandleFullTranscription_m58435396486B84E64D6A49545FF2257E816E603D(L_3, L_4, NULL);
	}

IL_0017:
	{
		// VoiceEvents.OnFullTranscription?.Invoke(transcription);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_5;
		L_5 = VoiceSDKListenerBinding_get_VoiceEvents_mB57DC862894B65506C815C301C5631E195C83847(__this, NULL);
		NullCheck(L_5);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_6;
		L_6 = SpeechEvents_get_OnFullTranscription_m72C7935CDD9EBD2FCAC9C0ECADC2830417512065_inline(L_5, NULL);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_0027;
		}
	}
	{
		return;
	}

IL_0027:
	{
		String_t* L_8 = ___transcription0;
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B4_0, L_8, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onFullTranscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onFullTranscription_mCAFD20DB9F2788E0279048D6B8EFD67BA893A7D6 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___transcription0, const RuntimeMethod* method) 
{
	{
		// public void onFullTranscription(string transcription) => onFullTranscription(transcription, null);
		String_t* L_0 = ___transcription0;
		VoiceSDKListenerBinding_onFullTranscription_m827443E15C97C8297417DDD90ADC5B23A663A820(__this, L_0, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onPartialResponse(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onPartialResponse_m0201E2D4266DC1F102FAC93339DF19D643C0D666 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___responseJson0, String_t* ___requestId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* V_0 = NULL;
	{
		// var request = GetRequest(requestId);
		String_t* L_0 = ___requestId1;
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_1;
		L_1 = VoiceSDKListenerBinding_GetRequest_m38136DF758A0E38BAE4F571F67D5AE7BA8B14EDF(__this, L_0, NULL);
		// if (request is VoiceSDKImplRequest implRequest)
		V_0 = ((VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75*)IsInstClass((RuntimeObject*)L_1, VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75_il2cpp_TypeInfo_var));
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// implRequest.HandlePartialResponse(responseJson);
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_3 = V_0;
		String_t* L_4 = ___responseJson0;
		NullCheck(L_3);
		VoiceSDKImplRequest_HandlePartialResponse_m2CF78E9E0B83F6C9C85D8A88FC6917B36836E84F(L_3, L_4, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onPartialResponse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onPartialResponse_m14C71A04CFE12D0FFDB9CB276F0C86B8C82CA447 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___responseJson0, const RuntimeMethod* method) 
{
	{
		// public void onPartialResponse(string responseJson) => onPartialResponse(responseJson, null);
		String_t* L_0 = ___responseJson0;
		VoiceSDKListenerBinding_onPartialResponse_m0201E2D4266DC1F102FAC93339DF19D643C0D666(__this, L_0, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onAborted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onAborted_m1EC89D14C80CDA0AE1E0640772C4F84D355D93A4 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___requestId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* V_0 = NULL;
	{
		// var request = GetRequest(requestId);
		String_t* L_0 = ___requestId0;
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_1;
		L_1 = VoiceSDKListenerBinding_GetRequest_m38136DF758A0E38BAE4F571F67D5AE7BA8B14EDF(__this, L_0, NULL);
		// if (request is VoiceSDKImplRequest implRequest)
		V_0 = ((VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75*)IsInstClass((RuntimeObject*)L_1, VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75_il2cpp_TypeInfo_var));
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// implRequest.HandleCanceled();
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_3 = V_0;
		NullCheck(L_3);
		VoiceSDKImplRequest_HandleCanceled_m64F4142836CC611D42DD65ADD5424DD2CE72C60A(L_3, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onAborted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onAborted_mABAEED54682B187403E66B01299D78E0373A32E1 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, const RuntimeMethod* method) 
{
	{
		// public void onAborted() => onAborted(null);
		VoiceSDKListenerBinding_onAborted_m1EC89D14C80CDA0AE1E0640772C4F84D355D93A4(__this, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onError(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onError_m61AFC56BFA2D447CA1A321E9740620CD3C0DB9CD (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___error0, String_t* ___message1, String_t* ___errorBody2, String_t* ___requestId3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* V_0 = NULL;
	{
		// var request = GetRequest(requestId);
		String_t* L_0 = ___requestId3;
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_1;
		L_1 = VoiceSDKListenerBinding_GetRequest_m38136DF758A0E38BAE4F571F67D5AE7BA8B14EDF(__this, L_0, NULL);
		// if (request is VoiceSDKImplRequest implRequest)
		V_0 = ((VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75*)IsInstClass((RuntimeObject*)L_1, VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75_il2cpp_TypeInfo_var));
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// implRequest.HandleError(error, message, errorBody);
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_3 = V_0;
		String_t* L_4 = ___error0;
		String_t* L_5 = ___message1;
		String_t* L_6 = ___errorBody2;
		NullCheck(L_3);
		VoiceSDKImplRequest_HandleError_m16F17C2F85EB7A4C5EBE53AA28DF202A1DFA5CC5(L_3, L_4, L_5, L_6, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onError(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onError_m4F8174D0631069422F374E3CF898F9CE466741B0 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___error0, String_t* ___message1, String_t* ___errorBody2, const RuntimeMethod* method) 
{
	{
		// public void onError(string error, string message, string errorBody) => onError(error, message, errorBody, null);
		String_t* L_0 = ___error0;
		String_t* L_1 = ___message1;
		String_t* L_2 = ___errorBody2;
		VoiceSDKListenerBinding_onError_m61AFC56BFA2D447CA1A321E9740620CD3C0DB9CD(__this, L_0, L_1, L_2, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onResponse(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onResponse_m07DDC9A69B1EDAABBC1C737CFB1FCBC7015F6AF5 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___responseJson0, String_t* ___requestId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* V_0 = NULL;
	{
		// var request = GetRequest(requestId);
		String_t* L_0 = ___requestId1;
		VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* L_1;
		L_1 = VoiceSDKListenerBinding_GetRequest_m38136DF758A0E38BAE4F571F67D5AE7BA8B14EDF(__this, L_0, NULL);
		// if (request is VoiceSDKImplRequest implRequest)
		V_0 = ((VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75*)IsInstClass((RuntimeObject*)L_1, VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75_il2cpp_TypeInfo_var));
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// implRequest.HandleResponse(responseJson);
		VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* L_3 = V_0;
		String_t* L_4 = ___responseJson0;
		NullCheck(L_3);
		VoiceSDKImplRequest_HandleResponse_m7852E12CDCB3AE6B5E94AFFCE77DFAC6C223A593(L_3, L_4, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onResponse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onResponse_mCD954E5E2AF77EC1AE5C0B3D55C9A76BD6F8EFE8 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___responseJson0, const RuntimeMethod* method) 
{
	{
		// public void onResponse(string responseJson) => onResponse(responseJson, null);
		String_t* L_0 = ___responseJson0;
		VoiceSDKListenerBinding_onResponse_m07DDC9A69B1EDAABBC1C737CFB1FCBC7015F6AF5(__this, L_0, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onMicLevelChanged(System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onMicLevelChanged_mA83DDA2437B013319AE1FAC3F1B8BDE55F13E41F (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, float ___level0, String_t* ___requestId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* G_B2_0 = NULL;
	WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* G_B1_0 = NULL;
	{
		// VoiceEvents.OnMicLevelChanged?.Invoke(level);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_0;
		L_0 = VoiceSDKListenerBinding_get_VoiceEvents_mB57DC862894B65506C815C301C5631E195C83847(__this, NULL);
		NullCheck(L_0);
		WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* L_1;
		L_1 = SpeechEvents_get_OnMicLevelChanged_mF6437F7C9C8E60935C01C02C57CDFE62741F8CE8_inline(L_0, NULL);
		WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		float L_3 = ___level0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(G_B2_0, L_3, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onMicLevelChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onMicLevelChanged_m43C06324CBCBD1C2692A9C72DB61113A0040999B (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, float ___level0, const RuntimeMethod* method) 
{
	{
		// public void onMicLevelChanged(float level) => onMicLevelChanged(level, null);
		float L_0 = ___level0;
		VoiceSDKListenerBinding_onMicLevelChanged_mA83DDA2437B013319AE1FAC3F1B8BDE55F13E41F(__this, L_0, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onMicDataSent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onMicDataSent_m340FADE99562E5C9BDA41B07FE043B6AD8E67A6C (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___requestId0, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// VoiceEvents.OnMicDataSent?.Invoke();
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_0;
		L_0 = VoiceSDKListenerBinding_get_VoiceEvents_mB57DC862894B65506C815C301C5631E195C83847(__this, NULL);
		NullCheck(L_0);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1;
		L_1 = SpeechEvents_get_OnMicDataSent_mAA598367D126F79A9BC611B95D6779CAD18C6874_inline(L_0, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onMicDataSent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onMicDataSent_m282D8BA4BFC3A94A9FD04385FB284CB976499B47 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, const RuntimeMethod* method) 
{
	{
		// public void onMicDataSent() => onMicDataSent(null);
		VoiceSDKListenerBinding_onMicDataSent_m340FADE99562E5C9BDA41B07FE043B6AD8E67A6C(__this, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onMinimumWakeThresholdHit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onMinimumWakeThresholdHit_m0A05075FC98025A0DEB1DBA73F072542C97BA5B4 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___requestId0, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// VoiceEvents.OnMinimumWakeThresholdHit?.Invoke();
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_0;
		L_0 = VoiceSDKListenerBinding_get_VoiceEvents_mB57DC862894B65506C815C301C5631E195C83847(__this, NULL);
		NullCheck(L_0);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1;
		L_1 = SpeechEvents_get_OnMinimumWakeThresholdHit_m1C3C6112F4B81CA7AB4092C679CB1F0A0897AF41_inline(L_0, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onMinimumWakeThresholdHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onMinimumWakeThresholdHit_m5CE35BC05074FA0E58D2D919517CB4B8AA8DBCDF (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, const RuntimeMethod* method) 
{
	{
		// public void onMinimumWakeThresholdHit() => onMinimumWakeThresholdHit(null);
		VoiceSDKListenerBinding_onMinimumWakeThresholdHit_m0A05075FC98025A0DEB1DBA73F072542C97BA5B4(__this, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onRequestCompleted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onRequestCompleted_mE2C1F72CF44A6B813ADB8249F833253BCA1FE3ED (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___requestId0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onRequestCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onRequestCompleted_mE1483543C7B5C5CB3E55F6D8F414E1FFCF39B67E (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, const RuntimeMethod* method) 
{
	{
		// public void onRequestCompleted() => onRequestCompleted(null);
		VoiceSDKListenerBinding_onRequestCompleted_mE2C1F72CF44A6B813ADB8249F833253BCA1FE3ED(__this, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onServiceNotAvailable(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onServiceNotAvailable_mC60311EA03923B7E893C71665737A3FDCF20B336 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, String_t* ___error0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVCBindingEvents_tCAE3B3E0378C6B68FF50642AB9BBF4851AD1A5C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD6C5540AB43FA5EAE750894E23E2E250DD5E7B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VLog.W($"Platform service is not available: {error} - {message}");
		String_t* L_0 = ___error0;
		String_t* L_1 = ___message1;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralDD6C5540AB43FA5EAE750894E23E2E250DD5E7B1, L_0, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62, L_1, NULL);
		VLog_W_m7943297ED32FD0E92544C324E6793089056A2344(L_2, NULL);
		// _bindingEvents.OnServiceNotAvailable(error, message);
		RuntimeObject* L_3 = __this->____bindingEvents_5;
		String_t* L_4 = ___error0;
		String_t* L_5 = ___message1;
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(0 /* System.Void Oculus.Voice.Bindings.Android.IVCBindingEvents::OnServiceNotAvailable(System.String,System.String) */, IVCBindingEvents_tCAE3B3E0378C6B68FF50642AB9BBF4851AD1A5C4_il2cpp_TypeInfo_var, L_3, L_4, L_5);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onAudioDurationTrackerFinished(System.Int64,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onAudioDurationTrackerFinished_m4EF241BBAACE874C2CE7E331AE6A8A08E267C17B (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, int64_t ___timestamp0, double ___duration1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_mE12D8B1489A72A3AD9E7E020A64138B0AD806DFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647* G_B2_0 = NULL;
	AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647* G_B1_0 = NULL;
	{
		// long ticksElapsed = NativeTimestampToDateTime(timestamp).Ticks / TimeSpan.TicksPerMillisecond;
		int64_t L_0 = ___timestamp0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = VoiceSDKListenerBinding_NativeTimestampToDateTime_mB7471BF6D0FBF304DB543C5080101CFE3451D0A4(__this, L_0, NULL);
		V_1 = L_1;
		int64_t L_2;
		L_2 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&V_1), NULL);
		V_0 = ((int64_t)(L_2/((int64_t)((int32_t)10000))));
		// TelemetryEvents.OnAudioTrackerFinished?.Invoke(ticksElapsed, duration);
		TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* L_3;
		L_3 = VoiceSDKListenerBinding_get_TelemetryEvents_m72B4328D72C40D781FEF1668138B63CDD3F89B0F(__this, NULL);
		NullCheck(L_3);
		AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647* L_4 = L_3->___OnAudioTrackerFinished_0;
		AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0027;
		}
	}
	{
		return;
	}

IL_0027:
	{
		int64_t L_6 = V_0;
		double L_7 = ___duration1;
		NullCheck(G_B2_0);
		UnityEvent_2_Invoke_mE12D8B1489A72A3AD9E7E020A64138B0AD806DFB(G_B2_0, L_6, L_7, UnityEvent_2_Invoke_mE12D8B1489A72A3AD9E7E020A64138B0AD806DFB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.DateTime Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::NativeTimestampToDateTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D VoiceSDKListenerBinding_NativeTimestampToDateTime_mB7471BF6D0FBF304DB543C5080101CFE3451D0A4 (VoiceSDKListenerBinding_t30997F28BDBC1D5E0513252605FC518F84D42BB4* __this, int64_t ___javaTimestamp0, const RuntimeMethod* method) 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// DateTime dateTime = new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
		DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, NULL);
		// return dateTime.AddMilliseconds(javaTimestamp);
		int64_t L_0 = ___javaTimestamp0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_AddMilliseconds_mEF44A0EE635A478B7B0CDAA438D2240C14C88D05((&V_0), ((double)L_0), NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* SpeechEvents_get_OnPartialTranscription_m0BA26BCC13243D100712E20D4A6AE8DD56C64B18_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitTranscriptionEvent OnPartialTranscription => _onPartialTranscription;
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_0 = __this->____onPartialTranscription_28;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* SpeechEvents_get_OnFullTranscription_m72C7935CDD9EBD2FCAC9C0ECADC2830417512065_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitTranscriptionEvent OnFullTranscription => _onFullTranscription;
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_0 = __this->____onFullTranscription_29;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* SpeechEvents_get_OnComplete_m9FD0FF1FDEA3E57022FA443D9D27A91108EC4BB9_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public VoiceServiceRequestEvent OnComplete => _onComplete;
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_0 = __this->____onComplete_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_UsePlatformIntegrations_mC70DA709801F2D03B7CE13BC18546D37AFB79050_inline (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	{
		// get => usePlatformServices;
		bool L_0 = __this->___usePlatformServices_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* AppVoiceExperience_get_RuntimeConfiguration_mD24F0877CFC8E672244CFF3BD79930F04401A704_inline (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	{
		// get => witRuntimeConfiguration;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_0 = __this->___witRuntimeConfiguration_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Wit_set_RuntimeConfiguration_m187D7E162FC1D1EC0C02D33202EE2B5FD2E8C8DB_inline (Wit_tB9F35FF1077BBD2C3F0E14EE0ACBFEE7351A5B81* __this, WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* ___value0, const RuntimeMethod* method) 
{
	{
		// set => witRuntimeConfiguration = value;
		WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* L_0 = ___value0;
		__this->___witRuntimeConfiguration_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___witRuntimeConfiguration_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_EnableConsoleLogging_mA4FAB753C46C4F0D7291C255D8F5C4E3152EC151_inline (AppVoiceExperience_t73F120132FB3DCEDD1AD48085A8A8D77419E60EF* __this, const RuntimeMethod* method) 
{
	{
		// public bool EnableConsoleLogging => enableConsoleLogging;
		bool L_0 = __this->___enableConsoleLogging_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* SpeechEvents_get_OnRequestInitialized_mDF97BA996E91AC80EDEFA571B39D2ECD09C97A09_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public VoiceServiceRequestEvent OnRequestInitialized => _onRequestInitialized;
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_0 = __this->____onRequestInitialized_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnMinimumWakeThresholdHit_m1C3C6112F4B81CA7AB4092C679CB1F0A0897AF41_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnMinimumWakeThresholdHit => _onMinimumWakeThresholdHit;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onMinimumWakeThresholdHit_8;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnMicDataSent_mAA598367D126F79A9BC611B95D6779CAD18C6874_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnMicDataSent => _onMicDataSent;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onMicDataSent_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* SpeechEvents_get_OnSend_m848D965F028D864B6175BA77425848BA86153A13_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public VoiceServiceRequestEvent OnSend => _onSend;
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_0 = __this->____onSend_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnStoppedListeningDueToTimeout_m09ED39D18AEAD2C383D62452353161EF4400DF70_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnStoppedListeningDueToTimeout => _onStoppedListeningDueToTimeout;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onStoppedListeningDueToTimeout_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnStoppedListeningDueToInactivity_mDB9EB1C53F62E85CE682C58725EFE2ED98FCED59_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnStoppedListeningDueToInactivity => _onStoppedListeningDueToInactivity;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onStoppedListeningDueToInactivity_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnStoppedListeningDueToDeactivation_mBEF3FA3D000697DED97B1738FED177B46F7E5629_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnStoppedListeningDueToDeactivation => _onStoppedListeningDueToDeactivation;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onStoppedListeningDueToDeactivation_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VoiceServiceRequestOptions_get_RequestId_mC465590B47E4B5F542BD3E9BED1074D032C1446F_inline (VoiceServiceRequestOptions_tBB80C39F5D734638F03442F09F4F106BD5F20EE4* __this, const RuntimeMethod* method) 
{
	{
		// public string RequestId { get; private set; }
		String_t* L_0 = __this->___U3CRequestIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VoiceServiceRequestResults_get_Message_mB5D3F7451AC4CE7DA64F7CAD1C9E8A856B7E2188_inline (VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* __this, const RuntimeMethod* method) 
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* VoiceServiceRequestResults_get_ResponseData_m799C34130B5FB50CA3C0EC9B0D437997AFA483A7_inline (VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* __this, const RuntimeMethod* method) 
{
	{
		// public WitResponseNode ResponseData { get; internal set; }
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = __this->___U3CResponseDataU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* SpeechEvents_get_OnCanceled_mC99F35015A99C7E082341B8E8DA65FAF1E5B7D6C_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitTranscriptionEvent OnCanceled => _onCanceled;
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_0 = __this->____onCanceled_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TTSServiceLogging_set_Service_mE541F5CC89C9F314DE22FA23B1FB58B6FACBAE83_inline (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* ___value0, const RuntimeMethod* method) 
{
	{
		// public TTSService Service { get; private set; }
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0 = ___value0;
		__this->___U3CServiceU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CServiceU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7* __this, const RuntimeMethod* method) 
{
	{
		// public TTSService Service { get; private set; }
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0 = __this->___U3CServiceU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	{
		// public TTSServiceEvents Events => _events;
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_0 = __this->____events_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TTSClipData_get_queryRequestId_m6930268D572D60661944AF7D43A4BA77108882E7_inline (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* __this, const RuntimeMethod* method) 
{
	{
		// public string queryRequestId => _queryRequestId;
		String_t* L_0 = __this->____queryRequestId_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WitConfiguration_GetClientAccessToken_m619DD2445232CA6A5C168763814741B3C75DCF47_inline (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	{
		// return _clientAccessToken;
		String_t* L_0 = __this->____clientAccessToken_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* SpeechEvents_get_OnRequestOptionSetup_mDD48B5E524783E2376629F4ABA5985A85C1CC24C_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitRequestOptionsEvent OnRequestOptionSetup => _onRequestOptionSetup;
		WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* L_0 = __this->____onRequestOptionSetup_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* VoiceSDKImpl_get_Requests_m4D22091B386178D74B5C67275BB3CB9CD8C3DAA9_inline (VoiceSDKImpl_t1DBC3014F4C111EF0C536D8DA5C3E10639D0F40A* __this, const RuntimeMethod* method) 
{
	{
		// public HashSet<VoiceServiceRequest> Requests { get; } = new HashSet<VoiceServiceRequest>();
		HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* L_0 = __this->___U3CRequestsU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnAborted_m1BF160D6FBB7602D71BB7E262F7FFCF868C0DFF0_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnAborted => _onAborted;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onAborted_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceServiceRequestResults_get_StatusCode_m3C210912FC433548965F049249DF0CDD46C41732_inline (VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* __this, const RuntimeMethod* method) 
{
	{
		// public int StatusCode { get; internal set; }
		int32_t L_0 = __this->___U3CStatusCodeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnRequestCompleted_m4FDD273CC7D87CE80A18BBC2E3107BF81CBF4CBB_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnRequestCompleted => _onRequestCompleted;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onRequestCompleted_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_set_Service_mA724B1BFE746287B14AFE494B068E6E58955B9C9_inline (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* ___value0, const RuntimeMethod* method) 
{
	{
		// public VoiceSDKBinding Service { get; private set; }
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = ___value0;
		__this->___U3CServiceU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CServiceU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VoiceSDKImplRequest_set_Immediately_m356B48CE913A084BCE771141AD004F93CF037FFC_inline (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Immediately { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CImmediatelyU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceSDKImplRequest_get_Immediately_mA18C4F628A92860FD6C255A0A6731DE6486721FA_inline (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, const RuntimeMethod* method) 
{
	{
		// public bool Immediately { get; private set; }
		bool L_0 = __this->___U3CImmediatelyU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* VoiceSDKImplRequest_get_Service_m24E53E1F349FD4BA62C846C1D53D92081E977DCF_inline (VoiceSDKImplRequest_t7A66947386AA5CB72D0FF6468E921FB31C3FAB75* __this, const RuntimeMethod* method) 
{
	{
		// public VoiceSDKBinding Service { get; private set; }
		VoiceSDKBinding_tA9F9337E1F9969F81CDA14A71BE69D5E9A48FCF1* L_0 = __this->___U3CServiceU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VoiceServiceRequestOptions_get_Text_m78FC14117147FF7042E92666EBC0633FA4BD8AD0_inline (VoiceServiceRequestOptions_tBB80C39F5D734638F03442F09F4F106BD5F20EE4* __this, const RuntimeMethod* method) 
{
	{
		// public string Text { get; set; }
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B* SpeechEvents_get_OnRequestCreated_mDB1CAA325BD1348FDF861A84E45F47FF84D15C63_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitRequestCreatedEvent OnRequestCreated => _onRequestCreated;
		WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B* L_0 = __this->____onRequestCreated_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequestEvents_1_get_OnInit_mD16A4E0CDE110585286DEE879DAF664B951AD181_gshared_inline (VoiceRequestEvents_1_t95DA2E7D5D393B0FC5B3C7D3D276186681278DD7* __this, const RuntimeMethod* method) 
{
	{
		// public TUnityEvent OnInit => _onInit;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____onInit_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequestEvents_1_get_OnComplete_mE8880E39823C62FB3B515437C888D993F6812496_gshared_inline (VoiceRequestEvents_1_t95DA2E7D5D393B0FC5B3C7D3D276186681278DD7* __this, const RuntimeMethod* method) 
{
	{
		// public TUnityEvent OnComplete => _onComplete;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____onComplete_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequest_4_get_Options_m9E49C7F16D2A38536F351223A546E161B86E6F1A_gshared_inline (VoiceRequest_4_t6799EEA3F92FAD2873D8E4F7650667AA90E2F95B* __this, const RuntimeMethod* method) 
{
	{
		// public TOptions Options { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3COptionsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NLPRequest_4_get_InputType_mC9E0344101339A2209EA096521A03EF91B035FA7_gshared_inline (NLPRequest_4_t79F59B9AB3FBFADB04B729AEF19245FE89658855* __this, const RuntimeMethod* method) 
{
	{
		// public NLPRequestInputType InputType { get; private set; }
		int32_t L_0 = (int32_t)__this->___U3CInputTypeU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceRequest_4_get_State_m9C2C1AE81703B1D55383F0845B1CBE4EBFCAF8BF_gshared_inline (VoiceRequest_4_t6799EEA3F92FAD2873D8E4F7650667AA90E2F95B* __this, const RuntimeMethod* method) 
{
	{
		// public VoiceRequestState State { get; private set; } = (VoiceRequestState) (-1);
		int32_t L_0 = (int32_t)__this->___U3CStateU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequest_4_get_Results_m421B3F006357D4059C51FCAD88D18C39FB74FC3C_gshared_inline (VoiceRequest_4_t6799EEA3F92FAD2873D8E4F7650667AA90E2F95B* __this, const RuntimeMethod* method) 
{
	{
		// public TResults Results { get; protected set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CResultsU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequestEvents_1_get_OnCancel_m92A9B76615DA4A60670A7FEAD8162D0E90009E0E_gshared_inline (VoiceRequestEvents_1_t95DA2E7D5D393B0FC5B3C7D3D276186681278DD7* __this, const RuntimeMethod* method) 
{
	{
		// public TUnityEvent OnCancel => _onCancel;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____onCancel_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequestEvents_1_get_OnFailed_m2568FBA483CE0E294CD637F6E77961AA26304D45_gshared_inline (VoiceRequestEvents_1_t95DA2E7D5D393B0FC5B3C7D3D276186681278DD7* __this, const RuntimeMethod* method) 
{
	{
		// public TUnityEvent OnFailed => _onFailed;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____onFailed_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequestEvents_1_get_OnSend_m40187362FE431DEF3020310731533CA077133813_gshared_inline (VoiceRequestEvents_1_t95DA2E7D5D393B0FC5B3C7D3D276186681278DD7* __this, const RuntimeMethod* method) 
{
	{
		// public TUnityEvent OnSend => _onSend;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____onSend_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequestEvents_1_get_OnSuccess_mEE0DC7E6BB4304286D480498ED35552AF529AE1F_gshared_inline (VoiceRequestEvents_1_t95DA2E7D5D393B0FC5B3C7D3D276186681278DD7* __this, const RuntimeMethod* method) 
{
	{
		// public TUnityEvent OnSuccess => _onSuccess;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____onSuccess_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TranscriptionRequestEvents_1_get_OnAudioActivation_m93DEC1525A3C1129D12750A9DF9FD6D4AA9A25C9_gshared_inline (TranscriptionRequestEvents_1_tC4E9654F32479322C2B15FB336483473AA337067* __this, const RuntimeMethod* method) 
{
	{
		// public TUnityEvent OnAudioActivation => _onAudioActivation;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____onAudioActivation_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TranscriptionRequestEvents_1_get_OnAudioDeactivation_m3668B55A958A520333067CA690F21F4257EFD92B_gshared_inline (TranscriptionRequestEvents_1_tC4E9654F32479322C2B15FB336483473AA337067* __this, const RuntimeMethod* method) 
{
	{
		// public TUnityEvent OnAudioDeactivation => _onAudioDeactivation;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____onAudioDeactivation_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE* TranscriptionRequestEvents_1_get_OnPartialTranscription_mDC0299035D9C0726B927AE02EC97D0A495741ACD_gshared_inline (TranscriptionRequestEvents_1_tC4E9654F32479322C2B15FB336483473AA337067* __this, const RuntimeMethod* method) 
{
	{
		// public TranscriptionRequestEvent OnPartialTranscription => _onPartialTranscription;
		TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE* L_0 = (TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE*)__this->____onPartialTranscription_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE* TranscriptionRequestEvents_1_get_OnFullTranscription_m49066F9C62F1CE73A68706507468E8DFD1FBB4E0_gshared_inline (TranscriptionRequestEvents_1_tC4E9654F32479322C2B15FB336483473AA337067* __this, const RuntimeMethod* method) 
{
	{
		// public TranscriptionRequestEvent OnFullTranscription => _onFullTranscription;
		TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE* L_0 = (TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE*)__this->____onFullTranscription_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequestEvents_1_get_OnStateChange_mD81AE20E08B1D5A10EBB4AE8C1648C756BF32272_gshared_inline (VoiceRequestEvents_1_t95DA2E7D5D393B0FC5B3C7D3D276186681278DD7* __this, const RuntimeMethod* method) 
{
	{
		// public TUnityEvent OnStateChange => _onStateChange;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____onStateChange_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TranscriptionRequestEvents_1_get_OnStartListening_m36C14EAD5CEA72F6BC19E86A2DEFDF769DEC7875_gshared_inline (TranscriptionRequestEvents_1_tC4E9654F32479322C2B15FB336483473AA337067* __this, const RuntimeMethod* method) 
{
	{
		// public TUnityEvent OnStartListening => _onStartListening;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____onStartListening_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TranscriptionRequestEvents_1_get_OnStopListening_mBD56C7A3CB0DD51DA1DAD76D0E0702184597D76A_gshared_inline (TranscriptionRequestEvents_1_tC4E9654F32479322C2B15FB336483473AA337067* __this, const RuntimeMethod* method) 
{
	{
		// public TUnityEvent OnStopListening => _onStopListening;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____onStopListening_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequestEvents_1_get_OnDownloadProgressChange_mED95A76837856E7EBCEC1AAE087DB94E13405BE4_gshared_inline (VoiceRequestEvents_1_t95DA2E7D5D393B0FC5B3C7D3D276186681278DD7* __this, const RuntimeMethod* method) 
{
	{
		// public TUnityEvent OnDownloadProgressChange => _onDownloadProgressChange;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____onDownloadProgressChange_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequestEvents_1_get_OnUploadProgressChange_m30D6491FB945605F64FA83B9C3B61E58588FCA6E_gshared_inline (VoiceRequestEvents_1_t95DA2E7D5D393B0FC5B3C7D3D276186681278DD7* __this, const RuntimeMethod* method) 
{
	{
		// public TUnityEvent OnUploadProgressChange => _onUploadProgressChange;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____onUploadProgressChange_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TranscriptionRequestEvents_1_get_OnAudioInputStateChange_m26013C6F2CC275C2889BA929CD0BE9FD36B52EF3_gshared_inline (TranscriptionRequestEvents_1_tC4E9654F32479322C2B15FB336483473AA337067* __this, const RuntimeMethod* method) 
{
	{
		// public TUnityEvent OnAudioInputStateChange => _onAudioInputStateChange;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____onAudioInputStateChange_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentKey_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequest_4_get_Events_mA3586B456290E5A77E164E735BF2996EA5AD909C_gshared_inline (VoiceRequest_4_t6799EEA3F92FAD2873D8E4F7650667AA90E2F95B* __this, const RuntimeMethod* method) 
{
	{
		// public TEvents Events { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CEventsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
