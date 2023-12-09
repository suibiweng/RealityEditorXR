#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379;
// System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>
struct Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36;
// System.Collections.Generic.Dictionary`2<System.Object,System.Char>
struct Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>
struct Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>
struct Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4;
// System.Collections.Generic.EqualityComparer`1<System.Char>
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>
struct EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>
struct EqualityComparer_1_tA8B0C386D0E8B1489A359D8F072D612DA34C00B3;
// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
// System.Collections.Generic.EqualityComparer`1<System.Int64>
struct EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504;
// System.Collections.Generic.EqualityComparer`1<OVRSpace>
struct EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_tA15C88CD562D52ED6B4D981EC7F4A5558BD52C6A;
// System.Collections.Generic.ICollection`1<System.Char>
struct ICollection_1_tC9B15468F509008C580ED71459A502B60CE0346B;
// System.Collections.Generic.ICollection`1<UnityEngine.Color>
struct ICollection_1_tFC51DD83E1437529AA19214EFADD5EE83B73CD6E;
// System.Collections.Generic.ICollection`1<UnityEngine.Color32>
struct ICollection_1_t0A0C5E4FD9B3D4D8D7D9CAC8060ABF55752BBE71;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>
struct IDictionary_2_tE19B4E8A6D9CC46B0967A83BAE6AFD7880B5D3E8;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Object>
struct IDictionary_2_tE90C23F749325A3FC4A286DC80C6BFF0D9013BF7;
// System.Collections.Generic.IDictionary`2<OVRSpace,System.Int32>
struct IDictionary_2_t03F5AA87B1B3A2B7370FB9BFCAC4A1FD94531774;
// System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>
struct IDictionary_2_t880CD44A8D6D8FE691C7045C3C7FFD42DD729B1A;
// System.Collections.Generic.IDictionary`2<System.Object,System.Char>
struct IDictionary_2_tE8E1292E89B67809919526C388E82F7239FC3DD4;
// System.Collections.Generic.IDictionary`2<System.Object,UnityEngine.Color>
struct IDictionary_2_tC534E71646F2A88F6030C04727007E17A77525AC;
// System.Collections.Generic.IDictionary`2<System.Object,UnityEngine.Color32>
struct IDictionary_2_tF7378C44071956DE9793C45A26E2244F6B0AFF70;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6;
// System.Collections.Generic.IEnumerable`1<System.Char>
struct IEnumerable_1_t9CC3C47C67E4184F7F1B8B0AFAEF692B9EDDDF05;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Color>
struct IEnumerable_1_t30FBA3F0775777FD15679FBAE44B692629C5E6BB;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Color32>
struct IEnumerable_1_t74AB238056DDD2D001FD687C66A06CF5599C0B1B;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>
struct IEnumerator_1_tA61C5E24E80782C814032316A5B2472B6D793E32;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct IEnumerator_1_t219B3417533E1DB79D9F41337C12C71CAC188902;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<OVRSpace,System.Int32>>
struct IEnumerator_1_t527673BB10B13A4B9823A6FF50F496979AAA9417;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t219B6CDC6BCDE713F92DBFE76942F60999C67C97;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>
struct IEnumerator_1_tE343411EDD8CAF7CAA8A061ECDD3190F990FC6BF;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>>
struct IEnumerator_1_t8D2DFC2C5BA18F3D9D4202EB039DDB8D403A6A4F;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color32>>
struct IEnumerator_1_t281171F69AF846F20A39D0E330D15B1F652E3A85;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_tDBA96AAC21C7C21D26B68A9F19E6AE4E015D2316;
// System.Collections.Generic.IEqualityComparer`1<OVRSpace>
struct IEqualityComparer_1_t5DCC2C7045E09CB24332A2327A496D13C7189BAD;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>
struct KeyCollection_t2C52E4DB6113DF8997EAAB971893026399E1976D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_tF80FCEB145ECE3DFBF875A28D07E9842E5997DF1;
// System.Collections.Generic.Dictionary`2/KeyCollection<OVRSpace,System.Int32>
struct KeyCollection_t67731FF19A7FCEDAF720FC7B2B0B908A23C8902D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Char>
struct KeyCollection_t078AFF8246B6F376CFAFE41DA411A2C57486B535;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.Color>
struct KeyCollection_t6F47CD885650F1C3D409DC8E66A9EFFEB16E306C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.Color32>
struct KeyCollection_t43B519AE49EC272CAF6E177CBCC5352F83DC44AE;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>
struct ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>
struct ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB;
// System.Collections.Generic.Dictionary`2/ValueCollection<OVRSpace,System.Int32>
struct ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Char>
struct ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.Color>
struct ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.Color32>
struct ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C;
// System.Collections.Generic.Dictionary`2/Entry<System.Int64,System.Int32>[]
struct EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F;
// System.Collections.Generic.Dictionary`2/Entry<System.Int64,System.Object>[]
struct EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1;
// System.Collections.Generic.Dictionary`2/Entry<OVRSpace,System.Int32>[]
struct EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Boolean>[]
struct EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Char>[]
struct EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Color>[]
struct EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Color32>[]
struct EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>[]
struct KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>[]
struct KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21;
// System.Collections.Generic.KeyValuePair`2<OVRSpace,System.Int32>[]
struct KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>[]
struct KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>[]
struct KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color32>[]
struct KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Runtime.CompilerServices.Ephemeron[]
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F;
struct EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1;
struct EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD;
struct EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B;
struct EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A;
struct EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52;
struct EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF;
struct KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D;
struct KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21;
struct KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179;
struct KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7;
struct KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF;
struct KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC;
struct KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject* ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;
};

// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* ____entries_1;
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
	KeyCollection_t2C52E4DB6113DF8997EAAB971893026399E1976D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* ____entries_1;
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
	KeyCollection_tF80FCEB145ECE3DFBF875A28D07E9842E5997DF1* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>
struct Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* ____entries_1;
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
	KeyCollection_t67731FF19A7FCEDAF720FC7B2B0B908A23C8902D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* ____entries_1;
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
	KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Char>
struct Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* ____entries_1;
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
	KeyCollection_t078AFF8246B6F376CFAFE41DA411A2C57486B535* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>
struct Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* ____entries_1;
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
	KeyCollection_t6F47CD885650F1C3D409DC8E66A9EFFEB16E306C* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>
struct Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* ____entries_1;
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
	KeyCollection_t43B519AE49EC272CAF6E177CBCC5352F83DC44AE* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.Char>
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>
struct EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>
struct EqualityComparer_1_tA8B0C386D0E8B1489A359D8F072D612DA34C00B3  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.Int64>
struct EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<OVRSpace>
struct EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>
struct KeyCollection_t2C52E4DB6113DF8997EAAB971893026399E1976D  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_tF80FCEB145ECE3DFBF875A28D07E9842E5997DF1  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<OVRSpace,System.Int32>
struct KeyCollection_t67731FF19A7FCEDAF720FC7B2B0B908A23C8902D  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Char>
struct KeyCollection_t078AFF8246B6F376CFAFE41DA411A2C57486B535  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.Color>
struct KeyCollection_t6F47CD885650F1C3D409DC8E66A9EFFEB16E306C  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.Color32>
struct KeyCollection_t43B519AE49EC272CAF6E177CBCC5352F83DC44AE  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>
struct ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>
struct ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<OVRSpace,System.Int32>
struct ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Char>
struct ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.Color>
struct ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.Color32>
struct ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* ____dictionary_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// System.Collections.Generic.Dictionary`2/Entry<System.Int64,System.Int32>
struct Entry_t878F128262B6E54068FBD871206860894DE4CAFE 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	int64_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	int32_t ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Int64,System.Object>
struct Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	int64_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	RuntimeObject* ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Boolean>
struct Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject* ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	bool ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Char>
struct Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject* ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	Il2CppChar ___value_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
struct KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
struct KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>
struct KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Il2CppChar ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject* ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject* ____value_1;
};
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
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

// OVRSpace
struct OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D 
{
	// System.UInt64 OVRSpace::<Handle>k__BackingField
	uint64_t ___U3CHandleU3Ek__BackingField_0;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
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

// System.Collections.Generic.Dictionary`2/Entry<OVRSpace,System.Int32>
struct Entry_tC24BA791374F2EC75875F72964381B01F41C4002 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	int32_t ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Color>
struct Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject* ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Color32>
struct Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject* ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___value_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
struct Enumerator_t2F1AB9A472FE2C5DC9CEA21571B182113A7F3DC0 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
struct Enumerator_t4C4D76999C59C2C8EE1ECB1779C9A5355F666161 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
struct Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Char>
struct Enumerator_t02CDFC1110A7687ADD7C4CDC61F2E59C000871DE 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.KeyValuePair`2<OVRSpace,System.Int32>
struct KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>
struct KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color32>
struct KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___value_1;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Collections.Generic.Dictionary`2/Enumerator<OVRSpace,System.Int32>
struct Enumerator_t18B53FCB7B5547D1767ADAA059D25A6D25297952 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Color>
struct Enumerator_tB8D9BCD4F0E1A3F8E046E20BF11ED672CA89BE61 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Color32>
struct Enumerator_t8C0D13C987D0C420909FBA05B487A5EA1B420643 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>

// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>

// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>

// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>

// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>

// System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>

// System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>

// System.Collections.Generic.Dictionary`2<System.Object,System.Char>

// System.Collections.Generic.Dictionary`2<System.Object,System.Char>

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>

// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Boolean>

// System.Collections.Generic.EqualityComparer`1<System.Char>
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Char>

// System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>
struct EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>

// System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>
struct EqualityComparer_1_tA8B0C386D0E8B1489A359D8F072D612DA34C00B3_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tA8B0C386D0E8B1489A359D8F072D612DA34C00B3* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>

// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Int32>

// System.Collections.Generic.EqualityComparer`1<System.Int64>
struct EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Int64>

// System.Collections.Generic.EqualityComparer`1<OVRSpace>
struct EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<OVRSpace>

// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection<OVRSpace,System.Int32>

// System.Collections.Generic.Dictionary`2/KeyCollection<OVRSpace,System.Int32>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Char>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Char>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.Color>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.Color>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.Color32>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.Color32>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection<OVRSpace,System.Int32>

// System.Collections.Generic.Dictionary`2/ValueCollection<OVRSpace,System.Int32>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Char>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Char>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.Color>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.Color>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.Color32>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.Color32>

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.Runtime.Serialization.SerializationInfo

// System.Runtime.Serialization.SerializationInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// System.Collections.Generic.Dictionary`2/Entry<System.Int64,System.Int32>

// System.Collections.Generic.Dictionary`2/Entry<System.Int64,System.Int32>

// System.Collections.Generic.Dictionary`2/Entry<System.Int64,System.Object>

// System.Collections.Generic.Dictionary`2/Entry<System.Int64,System.Object>

// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Boolean>

// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Boolean>

// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Char>

// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Char>

// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>

// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>

// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.Collections.DictionaryEntry

// System.Collections.DictionaryEntry

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// OVRSpace

// OVRSpace

// System.Runtime.Serialization.StreamingContext

// System.Runtime.Serialization.StreamingContext

// System.Void

// System.Void

// System.Collections.Generic.Dictionary`2/Entry<OVRSpace,System.Int32>

// System.Collections.Generic.Dictionary`2/Entry<OVRSpace,System.Int32>

// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Color>

// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Color>

// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Color32>

// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Color32>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Char>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Char>

// System.Collections.Generic.KeyValuePair`2<OVRSpace,System.Int32>

// System.Collections.Generic.KeyValuePair`2<OVRSpace,System.Int32>

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color32>

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color32>

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Collections.Generic.Dictionary`2/Enumerator<OVRSpace,System.Int32>

// System.Collections.Generic.Dictionary`2/Enumerator<OVRSpace,System.Int32>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Color>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Color>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Color32>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Color32>

// System.SystemException

// System.SystemException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.ArrayTypeMismatchException

// System.ArrayTypeMismatchException

// System.InvalidCastException

// System.InvalidCastException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Collections.Generic.Dictionary`2/Entry<System.Int64,System.Int32>[]
struct EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t878F128262B6E54068FBD871206860894DE4CAFE m_Items[1];

	inline Entry_t878F128262B6E54068FBD871206860894DE4CAFE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t878F128262B6E54068FBD871206860894DE4CAFE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t878F128262B6E54068FBD871206860894DE4CAFE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t878F128262B6E54068FBD871206860894DE4CAFE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t878F128262B6E54068FBD871206860894DE4CAFE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t878F128262B6E54068FBD871206860894DE4CAFE value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>[]
struct KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA m_Items[1];

	inline KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.DictionaryEntry[]
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_1), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_1), (void*)NULL);
		#endif
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
// System.Collections.Generic.Dictionary`2/Entry<System.Int64,System.Object>[]
struct EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438 m_Items[1];

	inline Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
	inline Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>[]
struct KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F m_Items[1];

	inline KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
	inline KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<OVRSpace,System.Int32>[]
struct EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tC24BA791374F2EC75875F72964381B01F41C4002 m_Items[1];

	inline Entry_tC24BA791374F2EC75875F72964381B01F41C4002 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tC24BA791374F2EC75875F72964381B01F41C4002* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tC24BA791374F2EC75875F72964381B01F41C4002 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_tC24BA791374F2EC75875F72964381B01F41C4002 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tC24BA791374F2EC75875F72964381B01F41C4002* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tC24BA791374F2EC75875F72964381B01F41C4002 value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<OVRSpace,System.Int32>[]
struct KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D m_Items[1];

	inline KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Boolean>[]
struct EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C m_Items[1];

	inline Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
	inline Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 m_Items[1];

	inline KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
	inline KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Char>[]
struct EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5 m_Items[1];

	inline Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
	inline Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>[]
struct KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556 m_Items[1];

	inline KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
	inline KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Color>[]
struct EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979 m_Items[1];

	inline Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
	inline Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>[]
struct KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055 m_Items[1];

	inline KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
	inline KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Color32>[]
struct EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8 m_Items[1];

	inline Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
	inline Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color32>[]
struct KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167 m_Items[1];

	inline KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
	inline KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
};


// TKey System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t KeyValuePair_2_get_Key_mF07F04114D1454823A6F9290C2861617ACF2AA85_gshared_inline (KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m5AAF42BD95F064BAEA516F9173DE2E73BA998D86_gshared_inline (KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m4377F88C4CA943437E9CBE2121C7DD46D690926E_gshared (KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA* __this, int64_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB8DE35031C48E27CAD6508ED98B9D8C827881F2B_gshared (Enumerator_t2F1AB9A472FE2C5DC9CEA21571B182113A7F3DC0* __this, Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t KeyValuePair_2_get_Key_mC536572F88F3FD21EED4624743F8B1CDF5C8EF60_gshared_inline (KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m168A81686A84DCA632E92D898CAB9C8EEB38396F_gshared_inline (KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mB3AC72AF7C60DA273A113EB9C837B460EDA07F2E_gshared (KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F* __this, int64_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9D3078BAC4490BC1F7701F7868588D0C950ED33C_gshared (Enumerator_t4C4D76999C59C2C8EE1ECB1779C9A5355F666161* __this, Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<OVRSpace,System.Int32>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D KeyValuePair_2_get_Key_m19728DC6A8A0980075FC4783A6964231ABD1EE03_gshared_inline (KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<OVRSpace,System.Int32>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m1FA3C65C41BD9AC00A4E11A87F97DD959398CF54_gshared_inline (KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<OVRSpace,System.Int32>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m1A4545237EF25B9BCCEA4D1D94E224715B6467F6_gshared (KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D* __this, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<OVRSpace,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m37233C48B2F948858F2B4050C267EE403936A12D_gshared (Enumerator_t18B53FCB7B5547D1767ADAA059D25A6D25297952* __this, Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_gshared_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_gshared_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m57BB84A94F6F00F1CADA0C8C921E726D8D4A4854_gshared (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, RuntimeObject* ___0_key, bool ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m53A63D389B2C13C44B85214613A9EBE6154706C8_gshared (Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B* __this, Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mC8B523B8481DA349838318048E3A91953889DD73_gshared_inline (KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar KeyValuePair_2_get_Value_m848FBDDCC485BB76A3A758E81709647070236BFA_gshared_inline (KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mAF9D831D8DB656DA967F31A08A47A0D13A9EF158_gshared (KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556* __this, RuntimeObject* ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Char>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8A4A449854EDDED1733EA4B40C499A0ED2188AA4_gshared (Enumerator_t02CDFC1110A7687ADD7C4CDC61F2E59C000871DE* __this, Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mC34BFE336212774A0174CD8DDD49A29E7C7137E4_gshared_inline (KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F KeyValuePair_2_get_Value_mF29EED4089C4263A56043B143B694C4C0FD1EE03_gshared_inline (KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m3A2344CDB19C5A1DAFA1263813759CC1BE6EB06F_gshared (KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055* __this, RuntimeObject* ___0_key, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Color>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mFF988198F66C78EC8886256025751969E177B43D_gshared (Enumerator_tB8D9BCD4F0E1A3F8E046E20BF11ED672CA89BE61* __this, Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color32>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m349ECB9834FA93169BCCC3E25D58DAB263E8AA47_gshared_inline (KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color32>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B KeyValuePair_2_get_Value_m5C908BF2976785DA003964DD0976A8581314746F_gshared_inline (KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color32>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m8D46E1EE2DFA0221F04E2F093B071CB0F5D8858E_gshared (KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167* __this, RuntimeObject* ___0_key, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Color32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m869EE3B6985313CD75D4F2168FC3A1EC081896F2_gshared (Enumerator_t8C0D13C987D0C420909FBA05B487A5EA1B420643* __this, Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>::get_Key()
inline int64_t KeyValuePair_2_get_Key_mF07F04114D1454823A6F9290C2861617ACF2AA85_inline (KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF07F04114D1454823A6F9290C2861617ACF2AA85_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>::get_Value()
inline int32_t KeyValuePair_2_get_Value_m5AAF42BD95F064BAEA516F9173DE2E73BA998D86_inline (KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA*, const RuntimeMethod*))KeyValuePair_2_get_Value_m5AAF42BD95F064BAEA516F9173DE2E73BA998D86_gshared_inline)(__this, method);
}
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.HashHelpers::get_SerializationInfoTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::Add(TKey,TValue)
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.ThrowHelper::ThrowKeyNotFoundException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowIndexArgumentOutOfRange_NeedNonNegNumException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentException(System.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m4377F88C4CA943437E9CBE2121C7DD46D690926E (KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA* __this, int64_t ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA*, int64_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m4377F88C4CA943437E9CBE2121C7DD46D690926E_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_mB8DE35031C48E27CAD6508ED98B9D8C827881F2B (Enumerator_t2F1AB9A472FE2C5DC9CEA21571B182113A7F3DC0* __this, Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2F1AB9A472FE2C5DC9CEA21571B182113A7F3DC0*, Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int32_t, const RuntimeMethod*))Enumerator__ctor_mB8DE35031C48E27CAD6508ED98B9D8C827881F2B_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
// System.Int32 System.Int64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496 (int64_t* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowInvalidOperationException_ConcurrentOperationsNotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
// System.Int32 System.Collections.HashHelpers::GetPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowAddingDuplicateWithKeyArgumentException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::TryGetValue(TKey,TValue&)
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowSerializationException(System.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___0_resource, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::Remove(TKey)
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared)(__this, ___0_key, method);
}
// System.Int32 System.Collections.HashHelpers::ExpandPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLowerBound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentException_Argument_InvalidArrayType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowWrongValueTypeArgumentException(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowWrongKeyTypeArgumentException(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___0_key, Type_t* ___1_targetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::get_Key()
inline int64_t KeyValuePair_2_get_Key_mC536572F88F3FD21EED4624743F8B1CDF5C8EF60_inline (KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F*, const RuntimeMethod*))KeyValuePair_2_get_Key_mC536572F88F3FD21EED4624743F8B1CDF5C8EF60_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m168A81686A84DCA632E92D898CAB9C8EEB38396F_inline (KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F*, const RuntimeMethod*))KeyValuePair_2_get_Value_m168A81686A84DCA632E92D898CAB9C8EEB38396F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mB3AC72AF7C60DA273A113EB9C837B460EDA07F2E (KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F* __this, int64_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F*, int64_t, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mB3AC72AF7C60DA273A113EB9C837B460EDA07F2E_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m9D3078BAC4490BC1F7701F7868588D0C950ED33C (Enumerator_t4C4D76999C59C2C8EE1ECB1779C9A5355F666161* __this, Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4C4D76999C59C2C8EE1ECB1779C9A5355F666161*, Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int32_t, const RuntimeMethod*))Enumerator__ctor_m9D3078BAC4490BC1F7701F7868588D0C950ED33C_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<OVRSpace,System.Int32>::get_Key()
inline OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D KeyValuePair_2_get_Key_m19728DC6A8A0980075FC4783A6964231ABD1EE03_inline (KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D* __this, const RuntimeMethod* method)
{
	return ((  OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D (*) (KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D*, const RuntimeMethod*))KeyValuePair_2_get_Key_m19728DC6A8A0980075FC4783A6964231ABD1EE03_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<OVRSpace,System.Int32>::get_Value()
inline int32_t KeyValuePair_2_get_Value_m1FA3C65C41BD9AC00A4E11A87F97DD959398CF54_inline (KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D*, const RuntimeMethod*))KeyValuePair_2_get_Value_m1FA3C65C41BD9AC00A4E11A87F97DD959398CF54_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<OVRSpace,System.Int32>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m1A4545237EF25B9BCCEA4D1D94E224715B6467F6 (KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D* __this, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D*, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m1A4545237EF25B9BCCEA4D1D94E224715B6467F6_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<OVRSpace,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m37233C48B2F948858F2B4050C267EE403936A12D (Enumerator_t18B53FCB7B5547D1767ADAA059D25A6D25297952* __this, Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t18B53FCB7B5547D1767ADAA059D25A6D25297952*, Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, int32_t, const RuntimeMethod*))Enumerator__ctor_m37233C48B2F948858F2B4050C267EE403936A12D_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// System.Int32 OVRSpace::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRSpace_GetHashCode_m2F902FAD8730D7B28045445D9820F0EFDB3B855D (OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
inline RuntimeObject* KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423*, const RuntimeMethod*))KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
inline bool KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m57BB84A94F6F00F1CADA0C8C921E726D8D4A4854 (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, RuntimeObject* ___0_key, bool ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423*, RuntimeObject*, bool, const RuntimeMethod*))KeyValuePair_2__ctor_m57BB84A94F6F00F1CADA0C8C921E726D8D4A4854_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m53A63D389B2C13C44B85214613A9EBE6154706C8 (Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B* __this, Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B*, Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, int32_t, const RuntimeMethod*))Enumerator__ctor_m53A63D389B2C13C44B85214613A9EBE6154706C8_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>::get_Key()
inline RuntimeObject* KeyValuePair_2_get_Key_mC8B523B8481DA349838318048E3A91953889DD73_inline (KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556*, const RuntimeMethod*))KeyValuePair_2_get_Key_mC8B523B8481DA349838318048E3A91953889DD73_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>::get_Value()
inline Il2CppChar KeyValuePair_2_get_Value_m848FBDDCC485BB76A3A758E81709647070236BFA_inline (KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556* __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556*, const RuntimeMethod*))KeyValuePair_2_get_Value_m848FBDDCC485BB76A3A758E81709647070236BFA_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mAF9D831D8DB656DA967F31A08A47A0D13A9EF158 (KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556* __this, RuntimeObject* ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556*, RuntimeObject*, Il2CppChar, const RuntimeMethod*))KeyValuePair_2__ctor_mAF9D831D8DB656DA967F31A08A47A0D13A9EF158_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Char>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m8A4A449854EDDED1733EA4B40C499A0ED2188AA4 (Enumerator_t02CDFC1110A7687ADD7C4CDC61F2E59C000871DE* __this, Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t02CDFC1110A7687ADD7C4CDC61F2E59C000871DE*, Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, int32_t, const RuntimeMethod*))Enumerator__ctor_m8A4A449854EDDED1733EA4B40C499A0ED2188AA4_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>::get_Key()
inline RuntimeObject* KeyValuePair_2_get_Key_mC34BFE336212774A0174CD8DDD49A29E7C7137E4_inline (KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055*, const RuntimeMethod*))KeyValuePair_2_get_Key_mC34BFE336212774A0174CD8DDD49A29E7C7137E4_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>::get_Value()
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F KeyValuePair_2_get_Value_mF29EED4089C4263A56043B143B694C4C0FD1EE03_inline (KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055* __this, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055*, const RuntimeMethod*))KeyValuePair_2_get_Value_mF29EED4089C4263A56043B143B694C4C0FD1EE03_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m3A2344CDB19C5A1DAFA1263813759CC1BE6EB06F (KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055* __this, RuntimeObject* ___0_key, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055*, RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))KeyValuePair_2__ctor_m3A2344CDB19C5A1DAFA1263813759CC1BE6EB06F_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Color>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_mFF988198F66C78EC8886256025751969E177B43D (Enumerator_tB8D9BCD4F0E1A3F8E046E20BF11ED672CA89BE61* __this, Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB8D9BCD4F0E1A3F8E046E20BF11ED672CA89BE61*, Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, int32_t, const RuntimeMethod*))Enumerator__ctor_mFF988198F66C78EC8886256025751969E177B43D_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color32>::get_Key()
inline RuntimeObject* KeyValuePair_2_get_Key_m349ECB9834FA93169BCCC3E25D58DAB263E8AA47_inline (KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167*, const RuntimeMethod*))KeyValuePair_2_get_Key_m349ECB9834FA93169BCCC3E25D58DAB263E8AA47_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color32>::get_Value()
inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B KeyValuePair_2_get_Value_m5C908BF2976785DA003964DD0976A8581314746F_inline (KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167* __this, const RuntimeMethod* method)
{
	return ((  Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B (*) (KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167*, const RuntimeMethod*))KeyValuePair_2_get_Value_m5C908BF2976785DA003964DD0976A8581314746F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color32>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m8D46E1EE2DFA0221F04E2F093B071CB0F5D8858E (KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167* __this, RuntimeObject* ___0_key, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167*, RuntimeObject*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, const RuntimeMethod*))KeyValuePair_2__ctor_m8D46E1EE2DFA0221F04E2F093B071CB0F5D8858E_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Color32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m869EE3B6985313CD75D4F2168FC3A1EC081896F2 (Enumerator_t8C0D13C987D0C420909FBA05B487A5EA1B420643* __this, Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8C0D13C987D0C420909FBA05B487A5EA1B420643*, Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, int32_t, const RuntimeMethod*))Enumerator__ctor_m869EE3B6985313CD75D4F2168FC3A1EC081896F2_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2B3D0BB0C3624B5DF0A962697EEAB08C6F52BEB5_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m323E5B7788A651AA78294969B6F2BCD7C266DDA2_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4ABF6B3739E93476B4A93491EA411003ECD23F48_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m61906D5AC56F48DF93549FA47C48183E5EFC5ABF_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_5;
		L_5 = ((  EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF9FF672B694E950B1BFD581DA1F1D12331ADBA34_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m08EA63DC2350AFBFE7FCA4E887B9C169F919EB6F_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* G_B2_0 = NULL;
	Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* L_11 = ((Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_13 = (EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int64_t L_19 = (int64_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int64_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				int64_t L_32;
				L_32 = KeyValuePair_2_get_Key_mF07F04114D1454823A6F9290C2861617ACF2AA85_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				int32_t L_33;
				L_33 = KeyValuePair_2_get_Value_m5AAF42BD95F064BAEA516F9173DE2E73BA998D86_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int64_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE727EB1E3BEBCAB6731A4DF85677C269158E8F43_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m5C2E9A1376F26527894DEAE38EFD0921B0F55F2A_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t2C52E4DB6113DF8997EAAB971893026399E1976D* Dictionary_2_get_Keys_mFCEE15963252AE7BF7EF8DE5C657AF21C92CA5CD_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t2C52E4DB6113DF8997EAAB971893026399E1976D* L_0 = (KeyCollection_t2C52E4DB6113DF8997EAAB971893026399E1976D*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t2C52E4DB6113DF8997EAAB971893026399E1976D* L_1 = (KeyCollection_t2C52E4DB6113DF8997EAAB971893026399E1976D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t2C52E4DB6113DF8997EAAB971893026399E1976D*, Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t2C52E4DB6113DF8997EAAB971893026399E1976D* L_2 = (KeyCollection_t2C52E4DB6113DF8997EAAB971893026399E1976D*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2* Dictionary_2_get_Values_m7DB572C4AA9BA8A2903E591DFA1544795ADE0D61_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2* L_0 = (ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2* L_1 = (ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2*, Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2* L_2 = (ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2*)__this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m30EE2E46C10FD9B43D92F89A08CA50890E57FFFE_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2* L_0 = (ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2* L_1 = (ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2*, Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2* L_2 = (ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mB1D37A97032D0CA43980D029EE4677B61FDCE198_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2* L_0 = (ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2* L_1 = (ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2*, Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2* L_2 = (ValueCollection_t48030ED3A894C47004AA9725C1E47FF8192995C2*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m28B5B97E86DADBC39FFDD046D4C6424CC79817F6_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, int64_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int64_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_3 = (EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		int64_t L_6 = ___0_key;
		int64_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m634936D213ADE86D8CD604474655F3FEC467F86A_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, int64_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int64_t, int32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mBF5CCA934181B75FB498DEDAD021EFDF3C2E8AC6_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, int64_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int64_t, int32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m650ADCFDF2C478039A4CA0AF8B33548963EABA6D_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int64_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF07F04114D1454823A6F9290C2861617ACF2AA85_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = KeyValuePair_2_get_Value_m5AAF42BD95F064BAEA516F9173DE2E73BA998D86_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int64_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m340A2E7A799B19EE0F2314BB88977A85ED830A8B_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int64_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF07F04114D1454823A6F9290C2861617ACF2AA85_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_4 = (EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m5AAF42BD95F064BAEA516F9173DE2E73BA998D86_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m94E6CC446B902B541C46D3F202E29E7871AE5CE8_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int64_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF07F04114D1454823A6F9290C2861617ACF2AA85_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_4 = (EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m5AAF42BD95F064BAEA516F9173DE2E73BA998D86_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int64_t L_9;
		L_9 = KeyValuePair_2_get_Key_mF07F04114D1454823A6F9290C2861617ACF2AA85_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m67D2EF76D7BD2CC6F80E5115F37E37B53B8DD1C1_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_4 = (EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m825FFE4523B0EF5CEB8F5B2723F7BAD85BEDC6B0_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, int64_t ___0_key, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m06D8C2B13A414751777A4821ACC7B629EE720BC8_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_0 = (EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = (int32_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_15;
		L_15 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = (int32_t)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		int32_t L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_28 = V_4;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = (int32_t)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		int32_t L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m81803BC6892584C6D24DD460C60EE9E026553BD5_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_7 = (EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int64_t L_16 = (int64_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = (int32_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m4377F88C4CA943437E9CBE2121C7DD46D690926E((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2F1AB9A472FE2C5DC9CEA21571B182113A7F3DC0 Dictionary_2_GetEnumerator_m8D86B582CD852266A325779B2D5589680F627582_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2F1AB9A472FE2C5DC9CEA21571B182113A7F3DC0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB8DE35031C48E27CAD6508ED98B9D8C827881F2B((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m92E608608FC30F4046579BD4DC11565CCE58CA08_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2F1AB9A472FE2C5DC9CEA21571B182113A7F3DC0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB8DE35031C48E27CAD6508ED98B9D8C827881F2B((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t2F1AB9A472FE2C5DC9CEA21571B182113A7F3DC0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mBA18AAC36BB2FF41BC176FF3D2B72B7FB0E4B9BA_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_6;
		L_6 = ((  EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D* L_14 = (KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D*)(KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D* L_15 = V_0;
		((  void (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mA04BECC66B9754AEDA1FBAAFD6276E90AF8F51B6_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, int64_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_2 = (EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int64_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_19;
		L_19 = ((  EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int64_t L_22 = (int64_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		int64_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int64_t, int64_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_31;
		L_31 = ((  EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_38 = V_7;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int64_t L_41 = (int64_t)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		int64_t L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, int64_t, int64_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		int64_t L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		int64_t L_67 = (int64_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		int64_t L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m1D9E076E03AEA4B98E32AD506E1E471A872288D5_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_5 = (EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F*)(EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m03EEEF95B1CCC8803CC890AFF2BF4A15A8506910_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, int64_t ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t878F128262B6E54068FBD871206860894DE4CAFE* V_10 = NULL;
	int64_t V_11 = 0;
	EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_4 = (EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int64_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int64_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_24;
		L_24 = ((  EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int64_t L_27 = (int64_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int64_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int64_t, int64_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int64_t L_35 = ___0_key;
		int64_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_44;
		L_44 = ((  EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_51 = V_12;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		int64_t L_54 = (int64_t)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		int64_t L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, int64_t, int64_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		int32_t L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		int64_t L_62 = ___0_key;
		int64_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = (int32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = (int32_t)((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		int64_t L_80 = (int64_t)((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		int64_t L_81 = ___0_key;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		int32_t L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int64_t L_88 = ___0_key;
		int64_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = (int32_t)((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = (int32_t)__this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = (int32_t)__this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_105 = (EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F*)__this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t878F128262B6E54068FBD871206860894DE4CAFE* L_114 = V_10;
		int32_t L_115 = (int32_t)L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t878F128262B6E54068FBD871206860894DE4CAFE* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t878F128262B6E54068FBD871206860894DE4CAFE* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t878F128262B6E54068FBD871206860894DE4CAFE* L_121 = V_10;
		int64_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_t878F128262B6E54068FBD871206860894DE4CAFE* L_123 = V_10;
		int32_t L_124 = ___1_value;
		L_123->___value_3 = L_124;
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m923F4339EE3324A38988FC31E67F7AA174E83503_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int64_t L_21;
		L_21 = KeyValuePair_2_get_Key_mF07F04114D1454823A6F9290C2861617ACF2AA85_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int64_t L_24;
		L_24 = KeyValuePair_2_get_Key_mF07F04114D1454823A6F9290C2861617ACF2AA85_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = KeyValuePair_2_get_Value_m5AAF42BD95F064BAEA516F9173DE2E73BA998D86_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int64_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m34745D04D06986CA32FE1B9231400F92E749E6C0_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD7B13B1AE199F066017F870E792FF1A41160DA9D_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* V_1 = NULL;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_3 = (EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F*)(EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_5 = (EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F*)__this->____entries_1;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int64_t));
		int64_t L_8 = V_3;
		int64_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int64_t* L_19 = (int64_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = (int32_t)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mA198C533EB6539AD5148AA19FDA72748E43F9A40_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, int64_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t878F128262B6E54068FBD871206860894DE4CAFE* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int64_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_13 = (EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t878F128262B6E54068FBD871206860894DE4CAFE* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_20;
		L_20 = ((  EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t878F128262B6E54068FBD871206860894DE4CAFE* L_21 = V_4;
		int64_t L_22 = (int64_t)L_21->___key_2;
		int64_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int64_t, int64_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t878F128262B6E54068FBD871206860894DE4CAFE* L_25 = V_4;
		int64_t L_26 = (int64_t)L_25->___key_2;
		int64_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t878F128262B6E54068FBD871206860894DE4CAFE* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_34 = (EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t878F128262B6E54068FBD871206860894DE4CAFE* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t878F128262B6E54068FBD871206860894DE4CAFE* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t878F128262B6E54068FBD871206860894DE4CAFE* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t878F128262B6E54068FBD871206860894DE4CAFE* L_41 = V_4;
		int64_t* L_42 = (int64_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(int64_t));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t878F128262B6E54068FBD871206860894DE4CAFE* L_43 = V_4;
		int32_t* L_44 = (int32_t*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(int32_t));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t878F128262B6E54068FBD871206860894DE4CAFE* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m22AEACA27D304E7862161E31E68B6A3DA943F4C8_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, int64_t ___0_key, int32_t* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int64_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t* L_3 = ___1_value;
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_4 = (EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(int32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		int32_t* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m4E952BED9236E8B999AD27D51A2641071C9BDBE9_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, int64_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int64_t, int32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m6F63F22A530914C26191AB1DFBCAB5E6990E7D56_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m6910DBDD338CE562B2012A4E01E4CB38BFF8CBEB_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m0838C3B2C9151F1FA9CBE1F78A4510291C7DE90A_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, KeyValuePair_2U5BU5D_tCD772FB42C107EDA9B02EF244600697B9957977D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_18 = (EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int64_t L_27 = (int64_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int64_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_28);
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = (int32_t)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = (int32_t)__this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = (int32_t)__this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_42 = (EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F*)__this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = (int32_t)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			int64_t L_51 = (int64_t)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			int32_t L_54 = (int32_t)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m4377F88C4CA943437E9CBE2121C7DD46D690926E((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31029A1DC7B2251192AB13026D7CA06B8963CA30_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2F1AB9A472FE2C5DC9CEA21571B182113A7F3DC0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB8DE35031C48E27CAD6508ED98B9D8C827881F2B((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t2F1AB9A472FE2C5DC9CEA21571B182113A7F3DC0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m6C4CE8B4DD42FB0771FAE30D98D907ED0984677D_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_mFC275C7AF6A80061DAC0F97D1D4272DA07B3D065_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t2C52E4DB6113DF8997EAAB971893026399E1976D* L_0;
		L_0 = ((  KeyCollection_t2C52E4DB6113DF8997EAAB971893026399E1976D* (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return (RuntimeObject*)L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mF475E3C63D18ADB6C708FB58B8D5E4A62B9F306E_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F* L_5 = (EntryU5BU5D_t83A4E15ECD7B467A195913B6742BA99AAD34F86F*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = (int32_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m8194E99F67BF66E1693B20D7935FE7406FCE5D77_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)))));
		}
		try
		{// begin try (depth: 2)
			int64_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int64_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_3, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m063032048FE6CD6F485432C46B728BCCE30F13E2_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m442ACC6C362D190837B14C57BE31B9824E19622C_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E*, int64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31EE6D158E88C6FC9A015201A7146B0B6F73BFF4_gshared (Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2F1AB9A472FE2C5DC9CEA21571B182113A7F3DC0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB8DE35031C48E27CAD6508ED98B9D8C827881F2B((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t2F1AB9A472FE2C5DC9CEA21571B182113A7F3DC0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6E4700E09E9816E4C0C88C90C5BB8FAF312B8481_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mED9BCD0B850D648EF31DE392D11ECF85D24F9434_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m718AF10B0822EDAC8F3A4463E75469E3F546FDA3_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6CC02A4708C55A5874736C680A998253EEF0B0AF_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_5;
		L_5 = ((  EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD6543E0781C1F77796DBC992B94E0DF77A8B9048_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF054596C000DAB29A8A53FE45BDF3FF9059EE3B1_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* G_B2_0 = NULL;
	Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* L_11 = ((Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_13 = (EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int64_t L_19 = (int64_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int64_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				int64_t L_32;
				L_32 = KeyValuePair_2_get_Key_mC536572F88F3FD21EED4624743F8B1CDF5C8EF60_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m168A81686A84DCA632E92D898CAB9C8EEB38396F_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int64_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7B82FF416B1639978B28E78ED76E10A681591862_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF62FCAE02B490CD3CA263E1578D1F37A10B4491A_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tF80FCEB145ECE3DFBF875A28D07E9842E5997DF1* Dictionary_2_get_Keys_mA94CAEA0BED0E077B773869668D9D4618A640E0C_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tF80FCEB145ECE3DFBF875A28D07E9842E5997DF1* L_0 = (KeyCollection_tF80FCEB145ECE3DFBF875A28D07E9842E5997DF1*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tF80FCEB145ECE3DFBF875A28D07E9842E5997DF1* L_1 = (KeyCollection_tF80FCEB145ECE3DFBF875A28D07E9842E5997DF1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tF80FCEB145ECE3DFBF875A28D07E9842E5997DF1*, Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tF80FCEB145ECE3DFBF875A28D07E9842E5997DF1* L_2 = (KeyCollection_tF80FCEB145ECE3DFBF875A28D07E9842E5997DF1*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB* Dictionary_2_get_Values_m08D4959355E350045D1F2B2673B420FB2EA9A04B_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB* L_0 = (ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB* L_1 = (ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB*, Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB* L_2 = (ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB*)__this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8BD2E7DF2303A25D4A4BE24577A2D6EE9AA7F1E1_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB* L_0 = (ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB* L_1 = (ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB*, Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB* L_2 = (ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mED262B2B0CDDC85D11AD4E7C3026C99A47F909C3_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB* L_0 = (ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB* L_1 = (ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB*, Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB* L_2 = (ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mAC70CA6E8EADDCD67AB1C6BA2417CC7CE49EAF0D_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, int64_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int64_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_3 = (EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = (RuntimeObject*)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		int64_t L_6 = ___0_key;
		int64_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m23FE82FCBEFBE7F889697ABC4836C193993BCE70_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, int64_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int64_t, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mF6ABB6369C9A6394AE57424BE839FE87809B4102_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, int64_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int64_t, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mDB2E1DFA993206559F47E62FC74F8C0835C0E6B3_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int64_t L_0;
		L_0 = KeyValuePair_2_get_Key_mC536572F88F3FD21EED4624743F8B1CDF5C8EF60_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m168A81686A84DCA632E92D898CAB9C8EEB38396F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int64_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mB7E99975A4C32B5CC78043DE3420DC634B99D979_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int64_t L_0;
		L_0 = KeyValuePair_2_get_Key_mC536572F88F3FD21EED4624743F8B1CDF5C8EF60_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_4 = (EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m168A81686A84DCA632E92D898CAB9C8EEB38396F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2ECCEEC9AC22C15AE412C42D54296EF94293EEAA_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int64_t L_0;
		L_0 = KeyValuePair_2_get_Key_mC536572F88F3FD21EED4624743F8B1CDF5C8EF60_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_4 = (EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m168A81686A84DCA632E92D898CAB9C8EEB38396F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int64_t L_9;
		L_9 = KeyValuePair_2_get_Key_mC536572F88F3FD21EED4624743F8B1CDF5C8EF60_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m0D4940D3E4F9E42DC6EB3C1A43CB78241A4EBABF_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_4 = (EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA1BB0DE4E26C51B6E67399D8D563FEDF5A333D36_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, int64_t ___0_key, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m9022455FE111C58974AC55285DD0DD5716A09119_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_0 = (EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1*)__this->____entries_1;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = (RuntimeObject*)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = (RuntimeObject*)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mAD34BFBE0C483D28DDB1D866E4300CCEFCC522D3_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_7 = (EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int64_t L_16 = (int64_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mB3AC72AF7C60DA273A113EB9C837B460EDA07F2E((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4C4D76999C59C2C8EE1ECB1779C9A5355F666161 Dictionary_2_GetEnumerator_mF4AA4E7332CB8313AD0FBD9EAB542A952816AD7F_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C4D76999C59C2C8EE1ECB1779C9A5355F666161 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9D3078BAC4490BC1F7701F7868588D0C950ED33C((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m0CEBE651198E28B6A7DD985DA3A21081BF6B95C2_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C4D76999C59C2C8EE1ECB1779C9A5355F666161 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9D3078BAC4490BC1F7701F7868588D0C950ED33C((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t4C4D76999C59C2C8EE1ECB1779C9A5355F666161 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mD82CBC624CDBE7DFA870E2E51E3ABCC905D46AD5_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_6;
		L_6 = ((  EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21* L_14 = (KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21*)(KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21* L_15 = V_0;
		((  void (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m9E1E645C5D775D1A26981B3D364B80CB7EA4C70D_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, int64_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_2 = (EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int64_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_19;
		L_19 = ((  EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int64_t L_22 = (int64_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		int64_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int64_t, int64_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_31;
		L_31 = ((  EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_38 = V_7;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int64_t L_41 = (int64_t)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		int64_t L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, int64_t, int64_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		int64_t L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		int64_t L_67 = (int64_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		int64_t L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m1471C183E6DACAB253B32FCF2DE1335495565CB4_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_5 = (EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1*)(EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m82D7CCBFB55E83447CDBEA8C9B0E7F09E6E5408D_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, int64_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438* V_10 = NULL;
	int64_t V_11 = 0;
	EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_4 = (EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int64_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int64_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_24;
		L_24 = ((  EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int64_t L_27 = (int64_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int64_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int64_t, int64_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int64_t L_35 = ___0_key;
		int64_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_44;
		L_44 = ((  EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_51 = V_12;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		int64_t L_54 = (int64_t)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		int64_t L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, int64_t, int64_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		RuntimeObject* L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3), (void*)L_60);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		int64_t L_62 = ___0_key;
		int64_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = (int32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = (int32_t)((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		int64_t L_80 = (int64_t)((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		int64_t L_81 = ___0_key;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		RuntimeObject* L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3), (void*)L_86);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int64_t L_88 = ___0_key;
		int64_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = (int32_t)((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = (int32_t)__this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = (int32_t)__this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_105 = (EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1*)__this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438* L_114 = V_10;
		int32_t L_115 = (int32_t)L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438* L_121 = V_10;
		int64_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438* L_123 = V_10;
		RuntimeObject* L_124 = ___1_value;
		L_123->___value_3 = L_124;
		Il2CppCodeGenWriteBarrier((void**)(&L_123->___value_3), (void*)L_124);
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m1C1644B73E91ADFA00FAE97D887023192F6AFB5C_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int64_t L_21;
		L_21 = KeyValuePair_2_get_Key_mC536572F88F3FD21EED4624743F8B1CDF5C8EF60_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int64_t L_24;
		L_24 = KeyValuePair_2_get_Key_mC536572F88F3FD21EED4624743F8B1CDF5C8EF60_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m168A81686A84DCA632E92D898CAB9C8EEB38396F_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int64_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m579F5E520C06958FA5F3DCA17D9258A67217317B_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m370AB6D5026CD5AE312EE5F77B509E8BDDB7ADD6_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* V_1 = NULL;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_3 = (EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1*)(EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_5 = (EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1*)__this->____entries_1;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int64_t));
		int64_t L_8 = V_3;
		int64_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int64_t* L_19 = (int64_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = (int32_t)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m7A61F563F380F740D8288007493B16BB0329146D_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, int64_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int64_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_13 = (EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_20;
		L_20 = ((  EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438* L_21 = V_4;
		int64_t L_22 = (int64_t)L_21->___key_2;
		int64_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int64_t, int64_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438* L_25 = V_4;
		int64_t L_26 = (int64_t)L_25->___key_2;
		int64_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_34 = (EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438* L_41 = V_4;
		int64_t* L_42 = (int64_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(int64_t));
	}

IL_00ff:
	{
		if (!true)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m9A4D60A27A7CAA492BE4A9AC1EB250802FDDF5A4_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, int64_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int64_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_4 = (EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mFB80AF07140916C4F9E7633A74D26A65655BDD64_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, int64_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int64_t, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m748382AA784DEB69812DB21D9364117B4ED85807_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m6A36D00D824C7A1136D815B69224292C06455879_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m06BE5523B2730400E82EF3501D600CB3F4254ADB_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, KeyValuePair_2U5BU5D_t2ADC9B361CD06A7E28663E978B538081E9917B21*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_18 = (EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int64_t L_27 = (int64_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int64_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_28);
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = (RuntimeObject*)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_39 = (int32_t)__this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_40 = (EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1*)__this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			int64_t L_49 = (int64_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mB3AC72AF7C60DA273A113EB9C837B460EDA07F2E((&L_53), L_49, L_52, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mDD3FDE73CBEEFB305E0F186E2B860FD05E532B3D_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C4D76999C59C2C8EE1ECB1779C9A5355F666161 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9D3078BAC4490BC1F7701F7868588D0C950ED33C((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t4C4D76999C59C2C8EE1ECB1779C9A5355F666161 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m0F00379ADC3E917B051CD75EE0A3287EB6181C64_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m38EC6D254BAD6FC49835EB56965E1BF9D85BC1A6_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tF80FCEB145ECE3DFBF875A28D07E9842E5997DF1* L_0;
		L_0 = ((  KeyCollection_tF80FCEB145ECE3DFBF875A28D07E9842E5997DF1* (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return (RuntimeObject*)L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mCB7E3AA6ECABBA86313E1BD84AB2F99319FC58C3_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1* L_5 = (EntryU5BU5D_t37A30D502FEB00D75695A63792AE99DC7C4D68D1*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mA4F86C91981A62D287C6AEA7FA4F806D8E6ED9A3_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)))));
		}
		try
		{// begin try (depth: 2)
			int64_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int64_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m42510D6AF1B52D456A19ACE8B068FD77186138DC_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m5C7492A016A4AD112D6BB1A7658FFC507672ED44_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379*, int64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24070611BEF31DE4DD20539E425FA4EC056FC22C_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C4D76999C59C2C8EE1ECB1779C9A5355F666161 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9D3078BAC4490BC1F7701F7868588D0C950ED33C((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t4C4D76999C59C2C8EE1ECB1779C9A5355F666161 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6A66A70D0CB15B986ACA2A2DB404511FD243F14B_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4A20864A8DB45CD8576FC3B0394E2A63E09F004E_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mDB7A77248A2B958F92A79E9D69DE227930F9CE33_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m56B5152A084CDD66EA5D8BCD14F8591BA029273E_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC* L_5;
		L_5 = ((  EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m25AD31DE344C1299FE84AC1673A98B8434066148_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1030AC571766F9EE8041F97A76BFF6E9739E5FC8_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* G_B2_0 = NULL;
	Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<OVRSpace,System.Int32>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* L_11 = ((Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_13 = (EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_19 = (OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<OVRSpace,System.Int32>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<OVRSpace,System.Int32>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_32;
				L_32 = KeyValuePair_2_get_Key_m19728DC6A8A0980075FC4783A6964231ABD1EE03_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				int32_t L_33;
				L_33 = KeyValuePair_2_get_Value_m1FA3C65C41BD9AC00A4E11A87F97DD959398CF54_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9ADEE13F471D3F13D559AFDB51D768C7E9C0AFBA_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m75AF06D0F5C9B72CBA8B5C864CB4805659C085D5_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t67731FF19A7FCEDAF720FC7B2B0B908A23C8902D* Dictionary_2_get_Keys_m3A0BCC459BB474F346DD3FE68D3BD56C3337A8E8_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t67731FF19A7FCEDAF720FC7B2B0B908A23C8902D* L_0 = (KeyCollection_t67731FF19A7FCEDAF720FC7B2B0B908A23C8902D*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t67731FF19A7FCEDAF720FC7B2B0B908A23C8902D* L_1 = (KeyCollection_t67731FF19A7FCEDAF720FC7B2B0B908A23C8902D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t67731FF19A7FCEDAF720FC7B2B0B908A23C8902D*, Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t67731FF19A7FCEDAF720FC7B2B0B908A23C8902D* L_2 = (KeyCollection_t67731FF19A7FCEDAF720FC7B2B0B908A23C8902D*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19* Dictionary_2_get_Values_mA441FB4709196E077FB10FAF5E22BB64F6384682_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19* L_0 = (ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19* L_1 = (ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19*, Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19* L_2 = (ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19*)__this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_mCAC493E74E361DAF3A54384E9CD507C8FF428E86_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19* L_0 = (ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19* L_1 = (ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19*, Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19* L_2 = (ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m6C54D01EF8AC6FBC90ECE32E6482C9084916C714_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19* L_0 = (ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19* L_1 = (ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19*, Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19* L_2 = (ValueCollection_tC36D9118708F2D54A52986AFA925D3EC75E5BB19*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m41520FDC6F1292A25941779E491760938B594A80_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_3 = (EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_6 = ___0_key;
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m6CE2605818C889DEC24BEA68FEA782BD2514A74B_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, int32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mD7FB11392BFE7F7163E106231A7F7320A879C917_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, int32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mAE3B2F4E4F89493771E71613D4CD0A02FAF606CC_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_0;
		L_0 = KeyValuePair_2_get_Key_m19728DC6A8A0980075FC4783A6964231ABD1EE03_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = KeyValuePair_2_get_Value_m1FA3C65C41BD9AC00A4E11A87F97DD959398CF54_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m90C841611A1A9D522B772AC8A606DDF28205D397_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_0;
		L_0 = KeyValuePair_2_get_Key_m19728DC6A8A0980075FC4783A6964231ABD1EE03_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_4 = (EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m1FA3C65C41BD9AC00A4E11A87F97DD959398CF54_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mA6F8B53FBBA6EC64E799CBE163AFBFF03C24CEA3_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_0;
		L_0 = KeyValuePair_2_get_Key_m19728DC6A8A0980075FC4783A6964231ABD1EE03_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_4 = (EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m1FA3C65C41BD9AC00A4E11A87F97DD959398CF54_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_9;
		L_9 = KeyValuePair_2_get_Key_m19728DC6A8A0980075FC4783A6964231ABD1EE03_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m942167972BA6CC578AB17DD9AFDAF4CB9E0B2BEE_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_4 = (EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4E8B7F9EE2CDBFD38D0295F8FFB3CA9716113783_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D ___0_key, const RuntimeMethod* method) 
{
	{
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mC9C77DA8667CDAD550979D3D5DD8780475F8CBFF_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_0 = (EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = (int32_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_15;
		L_15 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = (int32_t)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		int32_t L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_28 = V_4;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = (int32_t)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		int32_t L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m7F921F9E2169BD97DFE26A11F8133A515FC7B61F_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_7 = (EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_16 = (OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = (int32_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m1A4545237EF25B9BCCEA4D1D94E224715B6467F6((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t18B53FCB7B5547D1767ADAA059D25A6D25297952 Dictionary_2_GetEnumerator_m2110BF63537608E47D40F53E6B27A7EEEAD80C85_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t18B53FCB7B5547D1767ADAA059D25A6D25297952 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m37233C48B2F948858F2B4050C267EE403936A12D((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4E108663A82C3A9279A9B5ECC68F879FC5321C7F_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t18B53FCB7B5547D1767ADAA059D25A6D25297952 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m37233C48B2F948858F2B4050C267EE403936A12D((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t18B53FCB7B5547D1767ADAA059D25A6D25297952 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m41EA2A499A8E513251813A1740DCF86B192FE21E_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC* L_6;
		L_6 = ((  EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179* L_14 = (KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179*)(KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179* L_15 = V_0;
		((  void (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m5BEF45C89D61D6740750A145F7959E1CE1F6359A_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_2 = (EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = OVRSpace_GetHashCode_m2F902FAD8730D7B28045445D9820F0EFDB3B855D((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC* L_19;
		L_19 = ((  EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_22 = (OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRSpace>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC* L_31;
		L_31 = ((  EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC* L_38 = V_7;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_41 = (OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRSpace>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<OVRSpace>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_67 = (OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<OVRSpace>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mAD981AEF75B2F667205C8319968884DDF218E813_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_5 = (EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD*)(EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mDC15D989A1FA7EB673CDB5EF67DE6E04674E1E7E_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tC24BA791374F2EC75875F72964381B01F41C4002* V_10 = NULL;
	OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_4 = (EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<OVRSpace>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = OVRSpace_GetHashCode_m2F902FAD8730D7B28045445D9820F0EFDB3B855D((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC* L_24;
		L_24 = ((  EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_27 = (OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRSpace>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_35 = ___0_key;
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC* L_44;
		L_44 = ((  EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC* L_51 = V_12;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_54 = (OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRSpace>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		int32_t L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_62 = ___0_key;
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = (int32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = (int32_t)((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_80 = (OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D)((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_81 = ___0_key;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<OVRSpace>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		int32_t L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_88 = ___0_key;
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = (int32_t)((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = (int32_t)__this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = (int32_t)__this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_105 = (EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD*)__this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tC24BA791374F2EC75875F72964381B01F41C4002* L_114 = V_10;
		int32_t L_115 = (int32_t)L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_tC24BA791374F2EC75875F72964381B01F41C4002* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_tC24BA791374F2EC75875F72964381B01F41C4002* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_tC24BA791374F2EC75875F72964381B01F41C4002* L_121 = V_10;
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_tC24BA791374F2EC75875F72964381B01F41C4002* L_123 = V_10;
		int32_t L_124 = ___1_value;
		L_123->___value_3 = L_124;
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mE84269FAF86F49FFE7F8046401D7495E0028DD43_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_21;
		L_21 = KeyValuePair_2_get_Key_m19728DC6A8A0980075FC4783A6964231ABD1EE03_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_24;
		L_24 = KeyValuePair_2_get_Key_m19728DC6A8A0980075FC4783A6964231ABD1EE03_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = KeyValuePair_2_get_Value_m1FA3C65C41BD9AC00A4E11A87F97DD959398CF54_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mB839329B68A7A39DF735C7C2E5F04E9389A12896_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mAB7EA53286EA8E3F89D7EDAB3637692CAC4D7EAB_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* V_1 = NULL;
	int32_t V_2 = 0;
	OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_3 = (EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD*)(EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_5 = (EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD*)__this->____entries_1;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D));
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_8 = V_3;
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D* L_19 = (OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = OVRSpace_GetHashCode_m2F902FAD8730D7B28045445D9820F0EFDB3B855D(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = (int32_t)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mC1EC666C4536D48578DB9CCCEE3766C893B6A30A_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tC24BA791374F2EC75875F72964381B01F41C4002* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = OVRSpace_GetHashCode_m2F902FAD8730D7B28045445D9820F0EFDB3B855D((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<OVRSpace>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_13 = (EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tC24BA791374F2EC75875F72964381B01F41C4002* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC* L_20;
		L_20 = ((  EqualityComparer_1_tF321A6944EE7D790109EC086D961F7DAED0AAEBC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tC24BA791374F2EC75875F72964381B01F41C4002* L_21 = V_4;
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_22 = (OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D)L_21->___key_2;
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRSpace>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tC24BA791374F2EC75875F72964381B01F41C4002* L_25 = V_4;
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_26 = (OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D)L_25->___key_2;
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<OVRSpace>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tC24BA791374F2EC75875F72964381B01F41C4002* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_34 = (EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tC24BA791374F2EC75875F72964381B01F41C4002* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tC24BA791374F2EC75875F72964381B01F41C4002* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tC24BA791374F2EC75875F72964381B01F41C4002* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tC24BA791374F2EC75875F72964381B01F41C4002* L_41 = V_4;
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D* L_42 = (OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tC24BA791374F2EC75875F72964381B01F41C4002* L_43 = V_4;
		int32_t* L_44 = (int32_t*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(int32_t));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tC24BA791374F2EC75875F72964381B01F41C4002* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m36E05E0AF79F4D4C64614E4281A4FE2096EB32C4_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D ___0_key, int32_t* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t* L_3 = ___1_value;
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_4 = (EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(int32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		int32_t* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m36333604CBBA66F85047234473BD7466B767DAFC_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, int32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mBCCFBF52D858794C215E829E882270BCC400962C_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mD6686C87ACD393B7EC94F404CE57291056882E29_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m99917908102808363269D6BBDE82862F325BEE5C_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, KeyValuePair_2U5BU5D_t95DAD62882A41C8EBEA087D7D45B35069EACA179*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_18 = (EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_27 = (OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_28);
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = (int32_t)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = (int32_t)__this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = (int32_t)__this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_42 = (EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD*)__this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = (int32_t)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_51 = (OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			int32_t L_54 = (int32_t)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m1A4545237EF25B9BCCEA4D1D94E224715B6467F6((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mD63CCB03C5E2800F410F489C1A06E22DB8E9FB54_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t18B53FCB7B5547D1767ADAA059D25A6D25297952 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m37233C48B2F948858F2B4050C267EE403936A12D((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t18B53FCB7B5547D1767ADAA059D25A6D25297952 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m5C30ADE8EA5B34CF72A359121B87ED11C6E6352E_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::System.Collections.IDictionary.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m28D1A783FA4BEDF2DF3807AFA40517F3E0C3ED3D_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t67731FF19A7FCEDAF720FC7B2B0B908A23C8902D* L_0;
		L_0 = ((  KeyCollection_t67731FF19A7FCEDAF720FC7B2B0B908A23C8902D* (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return (RuntimeObject*)L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m1CAF46660DD93B4D6BFAAF870F0397D7C754E5C1_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((*(OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D*)((OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D*)(OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD* L_5 = (EntryU5BU5D_t56F68582BEED594363FF6C786216E8306B333CBD*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = (int32_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mA0156F15AEBB48ABE2CBF2644027F784DB658DCB_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D*)((OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D*)(OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)))));
		}
		try
		{// begin try (depth: 2)
			OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_3, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m431191EAABE694DAFCA7F273BB5C2639F4CCAECB_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m45A03A885CCD8E350ED298DEBD1A19774CB720E6_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E*, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, ((*(OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D*)((OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D*)(OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m89C2453B1F8325F36C353611383F88E75CDA5BCA_gshared (Dictionary_2_tFAF6BB8E8AD7295252D2D98408DBB1C67EBDA67E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t18B53FCB7B5547D1767ADAA059D25A6D25297952 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m37233C48B2F948858F2B4050C267EE403936A12D((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t18B53FCB7B5547D1767ADAA059D25A6D25297952 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0D0F99974D7435C4E08FE9A9A632C9E5430F8454_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0F33DA8746CDA058229FFBD24348B82A5AB46543_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m667D955954A4992414F9B70FAFA8E6F4ECF485D6_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB99E4E6717681398087293F1ED2160AAE6EB6277_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCE456DEC07CB5761FC71A4F8CC32F7733B3AC00A_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA57DB5FD768879A99843F7E15BE7D6C7D445CF2D_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* G_B2_0 = NULL;
	Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* L_11 = ((Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_13 = (EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		bool L_22 = (bool)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				RuntimeObject* L_32;
				L_32 = KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				bool L_33;
				L_33 = KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4CC5B85AEE0F24A93FDE0E5774E6005E4080F8DF_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mD5387DFB5DBC4480D0B4AE08AC25F7E44599D507_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08* Dictionary_2_get_Keys_mFDF56AF2BA76C6CCAF215187B66751FC03E474FD_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08* L_0 = (KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08* L_1 = (KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08*, Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08* L_2 = (KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD* Dictionary_2_get_Values_mE768DCAD63914CE1B11F2AF4CBC7EA821AB6BBB0_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD* L_0 = (ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD* L_1 = (ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD*, Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD* L_2 = (ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD*)__this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_mA7F4F4D782380EB28BA557745C9631BC28E622FD_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD* L_0 = (ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD* L_1 = (ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD*, Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD* L_2 = (ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mBB4F877C7A4C58A3DC124B83D0C159B3E867E4AD_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD* L_0 = (ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD* L_1 = (ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD*, Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD* L_2 = (ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_get_Item_mB8DAA0FB328D474EEE65CAF7F132DD9569BBC3A8_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_3 = (EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		bool L_5 = (bool)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___0_key;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF1A7BA3C1568A00A32A43BCD889038FE080F77BF_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, bool, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m06DE41B832D936F9A7884C491F10EC651D0EA065_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, bool, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mDFB07D4CDBB53D6A865F6709BC9B11CC2326FD0C_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_1;
		L_1 = KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21A70FEE907B195575AD8EBEC1DFABA8F6CB3C51_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3;
		L_3 = ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_4 = (EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = (bool)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		bool L_7;
		L_7 = KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mEF67FC0DDBDB6B645DF6607A00696D3749E19A86_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3;
		L_3 = ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_4 = (EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = (bool)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		bool L_7;
		L_7 = KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE0E8184DB358BEB3549E33D6EEA31FF45B89D99F_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_4 = (EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mBEDE43E001DFC228FF4DA06FBCA7CC215C8E7C73_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m52D19D04D38A8C3321E97C0DA03732484EC24798_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, bool ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_0 = (EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		bool L_7 = (bool)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(bool));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_15;
		L_15 = ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		bool L_18 = (bool)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		bool L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_24;
		L_24 = ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_28 = V_4;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		bool L_31 = (bool)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		bool L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m3548AD486A573C78C9388893FC698936157C1A7B_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_7 = (EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		bool L_19 = (bool)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m57BB84A94F6F00F1CADA0C8C921E726D8D4A4854((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B Dictionary_2_GetEnumerator_mC7827569955B8266DAC471AC8CBCADC6416AB941_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m53A63D389B2C13C44B85214613A9EBE6154706C8((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m0FD6795B500BA82978481BE8458F6FF651181570_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m53A63D389B2C13C44B85214613A9EBE6154706C8((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m3B72874D32BCC12C87F3DE2C83432B5C28263AAB_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_6;
		L_6 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_14 = (KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7*)(KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_15 = V_0;
		((  void (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m8FC34A0E3AA12E15881486F91D32A61E92D04F32_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_2 = (EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((___0_key));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___0_key));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		RuntimeObject* L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		RuntimeObject* L_41 = (RuntimeObject*)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		RuntimeObject* L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		RuntimeObject* L_67 = (RuntimeObject*)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		RuntimeObject* L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7B3CAD83EB66C3E70AEA3C83F7648CB4DABF5094_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_5 = (EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)(EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m1DBFDC04AD6D6432A7FE2AD619C38C47FB8391B1_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, bool ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_4 = (EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((___0_key));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___0_key));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		RuntimeObject* L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		bool L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = (int32_t)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next_1;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_44 = V_0;
		NullCheck(L_44);
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = (int32_t)((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode_0;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___key_2;
		RuntimeObject* L_53 = ___0_key;
		NullCheck(L_49);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___2_behavior;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		bool L_58 = ___1_value;
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value_3 = L_58;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = (int32_t)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___next_1;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_65 = V_0;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_68 = V_0;
		NullCheck(L_68);
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = (int32_t)((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode_0;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		RuntimeObject* L_76 = (RuntimeObject*)((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___key_2;
		RuntimeObject* L_77 = ___0_key;
		NullCheck(L_73);
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___2_behavior;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		bool L_82 = ___1_value;
		((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value_3 = L_82;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		int32_t L_87 = (int32_t)((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___next_1;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_89 = V_0;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = (int32_t)__this->____freeList_3;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = (int32_t)__this->____count_2;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_96 = V_0;
		NullCheck(L_96);
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_99 = (EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)__this->____entries_1;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_104);
		NullCheck(L_102);
		G_B51_0 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_105 = V_0;
		int32_t L_106 = V_8;
		NullCheck(L_105);
		V_10 = ((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_108 = V_10;
		int32_t L_109 = (int32_t)L_108->___next_1;
		__this->____freeList_3 = L_109;
	}

IL_028a:
	{
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode_0 = L_111;
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_115 = V_10;
		RuntimeObject* L_116 = ___0_key;
		L_115->___key_2 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key_2), (void*)L_116);
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_117 = V_10;
		bool L_118 = ___1_value;
		L_117->___value_3 = L_118;
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m57CFC1C9F7422F2D5158B274A42AFD012810EBA1_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		RuntimeObject* L_24;
		L_24 = KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		bool L_27;
		L_27 = KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m56A0108422EE2073011693F3BEDC09FF52072CCF_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2424A64B3333FBF16C1AD560C39FEF7FBA04222C_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_3 = (EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)(EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_5 = (EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)__this->____entries_1;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		NullCheck((*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m3410C28AE4E1AB9B3387CC479F63A8C8BF22AEEF_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		NullCheck((___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_13 = (EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_21 = V_4;
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___key_2;
		RuntimeObject* L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_25 = V_4;
		RuntimeObject* L_26 = (RuntimeObject*)L_25->___key_2;
		RuntimeObject* L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_34 = (EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!true)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_43 = V_4;
		bool* L_44 = (bool*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(bool));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m9AAE125D6298B2B6B9D2F150C841A70872BF887B_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, bool* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		bool* L_3 = ___1_value;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_4 = (EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = (bool)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(bool*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		bool* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(bool));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m60ACBE16AA02352D191EFE0B32E67F1ECD3C2EA2_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, bool, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m99871EA020E00BF898C2192309E286D7615DBF45_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9947F53A67D6ACC37C7EB5BC33C50B8A0A6244FE_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mA2E8FCBDBDF84A8929DC1C30BC692140F298C336_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, KeyValuePair_2U5BU5D_tBF6D6F778484697BCA6E3EE3B452F4A00B7117A7*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_18 = (EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		bool L_30 = (bool)((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___value_3;
		bool L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_27, L_32, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_39 = (int32_t)__this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_40 = (EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)__this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			RuntimeObject* L_49 = (RuntimeObject*)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			bool L_52 = (bool)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m57BB84A94F6F00F1CADA0C8C921E726D8D4A4854((&L_53), L_49, L_52, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m7CE150C6B190327B3EC15DD8A73EF223EDE1FFEC_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m53A63D389B2C13C44B85214613A9EBE6154706C8((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m7FF1E700FB791AC9C22BE470C1E86C24F064D12B_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_mDFF3AD40B1E082A6B66AED3FC6A3A5FAEB59AD39_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08* L_0;
		L_0 = ((  KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08* (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return (RuntimeObject*)L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mA482396977C7F14409D764CD7A1BD2130A3BE6EF_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* L_5 = (EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		bool L_7 = (bool)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		bool L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mE9929B0DB355A7C4B24232CD53F3B52EBB651CBD_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)));
		}
		try
		{// begin try (depth: 2)
			RuntimeObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_3, ((*(bool*)((bool*)(bool*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m441D7D44B88C20AA369DEFE607F6ADF27EEEDF7F_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mDC1D6CA6336B910F6E3E4C98B0FCD7FD31CA8E83_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mED1B1065726F8DBBFCCFF8EF58B3DF72FA047201_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m53A63D389B2C13C44B85214613A9EBE6154706C8((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF806375D670CDF3AD94674EEA4F4EAA746B6CC8A_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8DF1F5B842DD3E936E113E500919B81A09149873_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0EA5CE72E27016D8FD80AABE15CDF2E98D4034B9_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF7FF78F32BEAE3D537F57F5C7CDB4AAAD9D52675_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m82CC5CAC98A4EC4DFCEA3522AABE03FF150314FC_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mFF8E25F46828B377561041376A6E59437A040798_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* G_B2_0 = NULL;
	Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* L_11 = ((Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_13 = (EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Il2CppChar L_22 = (Il2CppChar)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, RuntimeObject*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				RuntimeObject* L_32;
				L_32 = KeyValuePair_2_get_Key_mC8B523B8481DA349838318048E3A91953889DD73_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				Il2CppChar L_33;
				L_33 = KeyValuePair_2_get_Value_m848FBDDCC485BB76A3A758E81709647070236BFA_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, RuntimeObject*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBD306CCE957DD155CF6330C8FD2B6E0367FBF382_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Char>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m9750E859BFCD5A2115ACA4562AA67D5B609FC8DE_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Char>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t078AFF8246B6F376CFAFE41DA411A2C57486B535* Dictionary_2_get_Keys_mBF2A5B5FF739FE2B7B6851DEF661DB25856F8D34_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t078AFF8246B6F376CFAFE41DA411A2C57486B535* L_0 = (KeyCollection_t078AFF8246B6F376CFAFE41DA411A2C57486B535*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t078AFF8246B6F376CFAFE41DA411A2C57486B535* L_1 = (KeyCollection_t078AFF8246B6F376CFAFE41DA411A2C57486B535*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t078AFF8246B6F376CFAFE41DA411A2C57486B535*, Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t078AFF8246B6F376CFAFE41DA411A2C57486B535* L_2 = (KeyCollection_t078AFF8246B6F376CFAFE41DA411A2C57486B535*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Char>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55* Dictionary_2_get_Values_m8110E137FDC9BC3434505F780EE6824ECCC8C961_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55* L_0 = (ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55* L_1 = (ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55*, Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55* L_2 = (ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55*)__this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_mF28F3212634363DC498333D2B61596A124719163_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55* L_0 = (ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55* L_1 = (ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55*, Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55* L_2 = (ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m84852D40DC45AD73B9DB52C189D8258414A94005_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55* L_0 = (ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55* L_1 = (ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55*, Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55* L_2 = (ValueCollection_tDA83F42C48236B4FB2E778AB911CA07722F6CF55*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Char>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Dictionary_2_get_Item_m370693D71BA982E89D01F9F50E1A3F14062FEC05_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_3 = (EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppChar L_5 = (Il2CppChar)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___0_key;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppChar));
		Il2CppChar L_7 = V_1;
		return L_7;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mD6D58E8EEFAC141949BDE0C63155F75A9FC1BDE7_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, RuntimeObject* ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		Il2CppChar L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, RuntimeObject*, Il2CppChar, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m1F6437CCDB7A2F0773A393593D0616B6DD0CD1B8_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, RuntimeObject* ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		Il2CppChar L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, RuntimeObject*, Il2CppChar, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mCE1DCE0D95B6154886223938C3EB84C8CC2FBCDE_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mC8B523B8481DA349838318048E3A91953889DD73_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		Il2CppChar L_1;
		L_1 = KeyValuePair_2_get_Value_m848FBDDCC485BB76A3A758E81709647070236BFA_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, RuntimeObject*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m71F9670FB56433435FEDF6760C77E6E21427FD39_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mC8B523B8481DA349838318048E3A91953889DD73_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_3;
		L_3 = ((  EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_4 = (EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppChar L_6 = (Il2CppChar)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Il2CppChar L_7;
		L_7 = KeyValuePair_2_get_Value_m848FBDDCC485BB76A3A758E81709647070236BFA_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Char>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mBF057AF00AF0E2DDBED3E22905C8867A62B9C664_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mC8B523B8481DA349838318048E3A91953889DD73_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_3;
		L_3 = ((  EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_4 = (EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppChar L_6 = (Il2CppChar)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Il2CppChar L_7;
		L_7 = KeyValuePair_2_get_Value_m848FBDDCC485BB76A3A758E81709647070236BFA_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Char>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = KeyValuePair_2_get_Key_mC8B523B8481DA349838318048E3A91953889DD73_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mC70613B5813042A250CB05AB28ABCF3C52ECD4AD_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_4 = (EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Char>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m816E43587AB82064CE1774C9CED2A588832C1949_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Char>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mF2BB776384A18E74488EC18E2C950C6012D3B582_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_0 = (EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Il2CppChar L_7 = (Il2CppChar)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppChar));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_15;
		L_15 = ((  EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Il2CppChar L_18 = (Il2CppChar)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		Il2CppChar L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Char>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_24;
		L_24 = ((  EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_28 = V_4;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Il2CppChar L_31 = (Il2CppChar)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		Il2CppChar L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Char>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB361EFB9D2E6DD977D01959EC78D19C7530929D7_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_7 = (EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Il2CppChar L_19 = (Il2CppChar)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mAF9D831D8DB656DA967F31A08A47A0D13A9EF158((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Char>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t02CDFC1110A7687ADD7C4CDC61F2E59C000871DE Dictionary_2_GetEnumerator_mB04EA0E3F23DF8E39009D28DFE2FCA0DD7D3BD24_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t02CDFC1110A7687ADD7C4CDC61F2E59C000871DE L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8A4A449854EDDED1733EA4B40C499A0ED2188AA4((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mC629165F57305400A41FCA9ACF9DBD4EECE9DA7B_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t02CDFC1110A7687ADD7C4CDC61F2E59C000871DE L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8A4A449854EDDED1733EA4B40C499A0ED2188AA4((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t02CDFC1110A7687ADD7C4CDC61F2E59C000871DE L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m30CB0E9AA07FCCC9867393853FF47D7060EFF784_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_6;
		L_6 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF* L_14 = (KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF*)(KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF* L_15 = V_0;
		((  void (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Char>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m5A0920C1912F5B99EEEAFC7C67A0CF2F1BDA6BC1_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_2 = (EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((___0_key));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___0_key));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		RuntimeObject* L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		RuntimeObject* L_41 = (RuntimeObject*)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		RuntimeObject* L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		RuntimeObject* L_67 = (RuntimeObject*)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		RuntimeObject* L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Char>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mC88C2AFE70A4BB747A6E1B4410E189F1A03D7F7D_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_5 = (EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A*)(EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Char>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA9CA27A3B005F52B5C53A8E88DCAC6EA66279727_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, RuntimeObject* ___0_key, Il2CppChar ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_4 = (EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((___0_key));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___0_key));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		RuntimeObject* L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Il2CppChar L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = (int32_t)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next_1;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_44 = V_0;
		NullCheck(L_44);
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = (int32_t)((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode_0;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___key_2;
		RuntimeObject* L_53 = ___0_key;
		NullCheck(L_49);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___2_behavior;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		Il2CppChar L_58 = ___1_value;
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value_3 = L_58;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = (int32_t)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___next_1;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_65 = V_0;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_68 = V_0;
		NullCheck(L_68);
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = (int32_t)((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode_0;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		RuntimeObject* L_76 = (RuntimeObject*)((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___key_2;
		RuntimeObject* L_77 = ___0_key;
		NullCheck(L_73);
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___2_behavior;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		Il2CppChar L_82 = ___1_value;
		((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value_3 = L_82;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		int32_t L_87 = (int32_t)((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___next_1;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_89 = V_0;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = (int32_t)__this->____freeList_3;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = (int32_t)__this->____count_2;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_96 = V_0;
		NullCheck(L_96);
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_99 = (EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A*)__this->____entries_1;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_104);
		NullCheck(L_102);
		G_B51_0 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_105 = V_0;
		int32_t L_106 = V_8;
		NullCheck(L_105);
		V_10 = ((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5* L_108 = V_10;
		int32_t L_109 = (int32_t)L_108->___next_1;
		__this->____freeList_3 = L_109;
	}

IL_028a:
	{
		Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode_0 = L_111;
		Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5* L_115 = V_10;
		RuntimeObject* L_116 = ___0_key;
		L_115->___key_2 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key_2), (void*)L_116);
		Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5* L_117 = V_10;
		Il2CppChar L_118 = ___1_value;
		L_117->___value_3 = L_118;
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mF331A429A8A1A03AB6B56DAF6D29CD6BC1173C33_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = KeyValuePair_2_get_Key_mC8B523B8481DA349838318048E3A91953889DD73_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		RuntimeObject* L_24;
		L_24 = KeyValuePair_2_get_Key_mC8B523B8481DA349838318048E3A91953889DD73_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Il2CppChar L_27;
		L_27 = KeyValuePair_2_get_Value_m848FBDDCC485BB76A3A758E81709647070236BFA_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, RuntimeObject*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m12249F884963711D7A641D58E4E24A44F88AC1AD_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mC86DC293837520F11E2AEC1F7F3AD57EC22735C0_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_3 = (EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A*)(EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_5 = (EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A*)__this->____entries_1;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		NullCheck((*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Char>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m28213BCF59A05927436CFAFC6496304E1581951B_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		NullCheck((___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_13 = (EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5* L_21 = V_4;
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___key_2;
		RuntimeObject* L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5* L_25 = V_4;
		RuntimeObject* L_26 = (RuntimeObject*)L_25->___key_2;
		RuntimeObject* L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_34 = (EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!true)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5* L_43 = V_4;
		Il2CppChar* L_44 = (Il2CppChar*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(Il2CppChar));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tED35DA491CCC2E14B461E34F72EC5B0ABFB18DC5* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Char>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m9AFAEB5C03FB8A1315052358F421C08A0700265A_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, RuntimeObject* ___0_key, Il2CppChar* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppChar* L_3 = ___1_value;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_4 = (EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppChar L_6 = (Il2CppChar)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(Il2CppChar*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		Il2CppChar* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Il2CppChar));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Char>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m39EF2D151704200E26CACA175A056E51CA778B79_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, RuntimeObject* ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		Il2CppChar L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, RuntimeObject*, Il2CppChar, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mF9CF36FAC08E076B270381BE09678DDD509CC818_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mF39EB3D31B9312A014D87A80C265F70559F81F2D_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m750DA930C3C2288CBE6013042D81E2DA46049B11_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, KeyValuePair_2U5BU5D_t6A185D3240C6CF16D5AB77F5735B1B7D174AC7DF*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_18 = (EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		Il2CppChar L_30 = (Il2CppChar)((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___value_3;
		Il2CppChar L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_27, L_32, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_39 = (int32_t)__this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_40 = (EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A*)__this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			RuntimeObject* L_49 = (RuntimeObject*)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			Il2CppChar L_52 = (Il2CppChar)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mAF9D831D8DB656DA967F31A08A47A0D13A9EF158((&L_53), L_49, L_52, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9BEEBF051D4E8A0CD65A128EA3A055EF19A5C145_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t02CDFC1110A7687ADD7C4CDC61F2E59C000871DE L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8A4A449854EDDED1733EA4B40C499A0ED2188AA4((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t02CDFC1110A7687ADD7C4CDC61F2E59C000871DE L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m7CB7A924790CEBEB6791DC6F3BF6F9DF99365CB0_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.IDictionary.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_mB8EAD467EE1FE86590C9AF69DA2FC4D219E7E0D1_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t078AFF8246B6F376CFAFE41DA411A2C57486B535* L_0;
		L_0 = ((  KeyCollection_t078AFF8246B6F376CFAFE41DA411A2C57486B535* (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return (RuntimeObject*)L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m8997A7C969CA2F1A87A41A081D8D7CE9F2B072AC_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A* L_5 = (EntryU5BU5D_t614E78C78B5D7F080F056E338D343A54809C993A*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Il2CppChar L_7 = (Il2CppChar)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		Il2CppChar L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m1CA33CFBF7D45CE7853E29B757333EB0496A0311_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)));
		}
		try
		{// begin try (depth: 2)
			RuntimeObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, RuntimeObject*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_3, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Char>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m4B368351B883ED38F9FA7763F7E0B0B429D62F2D_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m01A0454DF0E6474D807817F8DA3D4F93B5745B33_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Char>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m6189EF3D25AAEB85A2339E7AB9136962F400B94F_gshared (Dictionary_2_tFDB7CC09B8E5A363A02ECD1C80A9F4970A5DD222* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t02CDFC1110A7687ADD7C4CDC61F2E59C000871DE L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8A4A449854EDDED1733EA4B40C499A0ED2188AA4((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t02CDFC1110A7687ADD7C4CDC61F2E59C000871DE L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7CE1FD4678D8769E81090E14D0E1F13B0838A4F2_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5DD2058135640492228109F8B4A81C7C95EAAAB4_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA5A237A70ED40C807A903CA3C3CC500094AB79DE_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB67014F2CC6EAC25DB44FB84CF455627CB8393B3_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m15BBEC93AE068CD2DC390BD06CCC2107699D3C5B_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA04FCBE8017A690197FDBDFC314F7E829423D2CB_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* G_B2_0 = NULL;
	Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* L_11 = ((Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_13 = (EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				RuntimeObject* L_32;
				L_32 = KeyValuePair_2_get_Key_mC34BFE336212774A0174CD8DDD49A29E7C7137E4_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33;
				L_33 = KeyValuePair_2_get_Value_mF29EED4089C4263A56043B143B694C4C0FD1EE03_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mDAD069B5A7A475F7268AEB3B65F7CF0630E26B86_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m66A99A09D4FCA0AF68C574FD862D5E3E81E97E28_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t6F47CD885650F1C3D409DC8E66A9EFFEB16E306C* Dictionary_2_get_Keys_m1B40B95B9BF2823740BF43FCB3AF4DCEE5F02DDE_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t6F47CD885650F1C3D409DC8E66A9EFFEB16E306C* L_0 = (KeyCollection_t6F47CD885650F1C3D409DC8E66A9EFFEB16E306C*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t6F47CD885650F1C3D409DC8E66A9EFFEB16E306C* L_1 = (KeyCollection_t6F47CD885650F1C3D409DC8E66A9EFFEB16E306C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t6F47CD885650F1C3D409DC8E66A9EFFEB16E306C*, Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t6F47CD885650F1C3D409DC8E66A9EFFEB16E306C* L_2 = (KeyCollection_t6F47CD885650F1C3D409DC8E66A9EFFEB16E306C*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4* Dictionary_2_get_Values_mDBAEFD2B8064A2BEB2C82706B4EE904C9FB88E59_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4* L_0 = (ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4* L_1 = (ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4*, Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4* L_2 = (ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4*)__this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9635A05780D35AB4FC22039BBDB002A42A8A520E_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4* L_0 = (ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4* L_1 = (ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4*, Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4* L_2 = (ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mAEEB31E6A99DFCE914DEA339813CEE8407201388_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4* L_0 = (ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4* L_1 = (ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4*, Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4* L_2 = (ValueCollection_t3EA39F2A7B72835EE055E9373AD6D93C934AF3A4*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Dictionary_2_get_Item_m6A61F2742A98C5E435FCD4C0B387DA70130277CE_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_3 = (EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___0_key;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_1;
		return L_7;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m86710295E28AC1A43001334C64469679C37603F5_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, RuntimeObject* ___0_key, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mEADB396889A4A72E1663B7278E7A7622B1D15825_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, RuntimeObject* ___0_key, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mA4C8BF01E8A4E1691E40EE814F3B59A76BC87247_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mC34BFE336212774A0174CD8DDD49A29E7C7137E4_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = KeyValuePair_2_get_Value_mF29EED4089C4263A56043B143B694C4C0FD1EE03_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2AA2A4EC60DAD9102AF99746B929AE8605202C6B_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mC34BFE336212774A0174CD8DDD49A29E7C7137E4_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* L_3;
		L_3 = ((  EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_4 = (EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = KeyValuePair_2_get_Value_mF29EED4089C4263A56043B143B694C4C0FD1EE03_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mDB5CDA35BE66FE9F03FBBE816B3F06DC300C8B21_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mC34BFE336212774A0174CD8DDD49A29E7C7137E4_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* L_3;
		L_3 = ((  EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_4 = (EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = KeyValuePair_2_get_Value_mF29EED4089C4263A56043B143B694C4C0FD1EE03_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = KeyValuePair_2_get_Key_mC34BFE336212774A0174CD8DDD49A29E7C7137E4_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mEFEC420DBE340ACD38CB1C3293F2005DCE21B43A_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_4 = (EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m6719E23B5C472A0FA248B84EDA78859049511620_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m749696FA886B10DB80E296CCF27F9301221B0B27_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* V_0 = NULL;
	int32_t V_1 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_0 = (EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* L_15;
		L_15 = ((  EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* L_24;
		L_24 = ((  EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* L_28 = V_4;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m679B38B096FE62A2ACA98EBD36CE7B1DCCB75F8A_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_7 = (EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m3A2344CDB19C5A1DAFA1263813759CC1BE6EB06F((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB8D9BCD4F0E1A3F8E046E20BF11ED672CA89BE61 Dictionary_2_GetEnumerator_m505DDE64AA92FC82AA75F37D359F8A99BC856632_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB8D9BCD4F0E1A3F8E046E20BF11ED672CA89BE61 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFF988198F66C78EC8886256025751969E177B43D((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m5B8FD4D5824065A784276E3F7544A23CAC1FA928_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB8D9BCD4F0E1A3F8E046E20BF11ED672CA89BE61 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFF988198F66C78EC8886256025751969E177B43D((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_tB8D9BCD4F0E1A3F8E046E20BF11ED672CA89BE61 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mEC8BCE6613C8D0541672DAC36606B2962C524D73_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_6;
		L_6 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC* L_14 = (KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC*)(KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC* L_15 = V_0;
		((  void (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m19E5D0F849D96BD0BC13E44236B65E17762EE63A_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_2 = (EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((___0_key));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___0_key));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		RuntimeObject* L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		RuntimeObject* L_41 = (RuntimeObject*)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		RuntimeObject* L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		RuntimeObject* L_67 = (RuntimeObject*)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		RuntimeObject* L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mDDA9769156E531BCD9CA96C96283EFAF9FEC64AC_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_5 = (EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52*)(EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA918A416400EF73E33A6F7480E8D6C77BC567D9B_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, RuntimeObject* ___0_key, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_4 = (EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((___0_key));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___0_key));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		RuntimeObject* L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = (int32_t)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next_1;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_44 = V_0;
		NullCheck(L_44);
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = (int32_t)((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode_0;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___key_2;
		RuntimeObject* L_53 = ___0_key;
		NullCheck(L_49);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___2_behavior;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_58 = ___1_value;
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value_3 = L_58;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = (int32_t)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___next_1;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_65 = V_0;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_68 = V_0;
		NullCheck(L_68);
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = (int32_t)((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode_0;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		RuntimeObject* L_76 = (RuntimeObject*)((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___key_2;
		RuntimeObject* L_77 = ___0_key;
		NullCheck(L_73);
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___2_behavior;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_82 = ___1_value;
		((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value_3 = L_82;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		int32_t L_87 = (int32_t)((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___next_1;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_89 = V_0;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = (int32_t)__this->____freeList_3;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = (int32_t)__this->____count_2;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_96 = V_0;
		NullCheck(L_96);
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_99 = (EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52*)__this->____entries_1;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_104);
		NullCheck(L_102);
		G_B51_0 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_105 = V_0;
		int32_t L_106 = V_8;
		NullCheck(L_105);
		V_10 = ((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979* L_108 = V_10;
		int32_t L_109 = (int32_t)L_108->___next_1;
		__this->____freeList_3 = L_109;
	}

IL_028a:
	{
		Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode_0 = L_111;
		Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979* L_115 = V_10;
		RuntimeObject* L_116 = ___0_key;
		L_115->___key_2 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key_2), (void*)L_116);
		Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979* L_117 = V_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_118 = ___1_value;
		L_117->___value_3 = L_118;
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m1FEB7DC950B3C7FB91E0EC148DD3CAA629A45290_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = KeyValuePair_2_get_Key_mC34BFE336212774A0174CD8DDD49A29E7C7137E4_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		RuntimeObject* L_24;
		L_24 = KeyValuePair_2_get_Key_mC34BFE336212774A0174CD8DDD49A29E7C7137E4_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = KeyValuePair_2_get_Value_mF29EED4089C4263A56043B143B694C4C0FD1EE03_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDDEE80BB33FF0192B2E4909EB4A1FA50B9C47108_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mB55CF39F5EC9E314FBA048425A3643D53708F909_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_3 = (EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52*)(EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_5 = (EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52*)__this->____entries_1;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		NullCheck((*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mE09DCA66FC269F25F98C86250D45873F426FC80C_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		NullCheck((___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_13 = (EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979* L_21 = V_4;
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___key_2;
		RuntimeObject* L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979* L_25 = V_4;
		RuntimeObject* L_26 = (RuntimeObject*)L_25->___key_2;
		RuntimeObject* L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_34 = (EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!true)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979* L_43 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_44 = (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m1284BB2D90B88643E8F889F2F6D2C6802C987371_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, RuntimeObject* ___0_key, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3 = ___1_value;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_4 = (EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m155695A04E98E2CBC1DF8D8AD879C77AF03E8F70_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, RuntimeObject* ___0_key, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m43579924ECF7E4D1549F5641DD138E68D56D599C_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mA303B01B42A674F7B9724A977D859D351884E5C3_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m425F3FBC7EF2C33F7B0F03A3F4D60194C6124A69_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, KeyValuePair_2U5BU5D_tFC826CCC72086C09359F19BE438118D9BE63ABDC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_18 = (EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30 = (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___value_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_27, L_32, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_39 = (int32_t)__this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_40 = (EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52*)__this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			RuntimeObject* L_49 = (RuntimeObject*)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_52 = (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m3A2344CDB19C5A1DAFA1263813759CC1BE6EB06F((&L_53), L_49, L_52, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mB35C76B7BBD391CDF7CA888BB3289B3D420E0073_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB8D9BCD4F0E1A3F8E046E20BF11ED672CA89BE61 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFF988198F66C78EC8886256025751969E177B43D((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_tB8D9BCD4F0E1A3F8E046E20BF11ED672CA89BE61 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11212C995E0E570F8F24D81FF098A8091095F6EF_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.IDictionary.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m625B3028DBC9F3C12BF8BE541AE1DCC186337CED_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t6F47CD885650F1C3D409DC8E66A9EFFEB16E306C* L_0;
		L_0 = ((  KeyCollection_t6F47CD885650F1C3D409DC8E66A9EFFEB16E306C* (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return (RuntimeObject*)L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m8C8248BBA2391433FAA47DA9EFED6E373F63ADB2_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52* L_5 = (EntryU5BU5D_t18BFAA8ED2EF85A9E28E889798113D59575BEE52*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m8EED4A36585314162510F4EB480AD8D5CD07AD41_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)));
		}
		try
		{// begin try (depth: 2)
			RuntimeObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_3, ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mE32CCFD08300A6C7E42A7103386278792291E21B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mD883372B49237FA59E70F3AA75A948D3FF28A4C6_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m110C4EA9FB2C72FDD2EAAFB49B0F3FBE5BA34F72_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB8D9BCD4F0E1A3F8E046E20BF11ED672CA89BE61 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFF988198F66C78EC8886256025751969E177B43D((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_tB8D9BCD4F0E1A3F8E046E20BF11ED672CA89BE61 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m179EE251E43C3E5460B7BEDF28CF0BDF277E3FAA_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mDE25B27D80518D1D5499CA656DBDD2D55364CCF6_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE75BB2E7D6BCE9727FB3476B1A0A835CAD3EFC83_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m01F0C3BAB4B5A8E85EF46E3C31025E262D8C826B_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF632B36633D958984B1E5AEB3773C9BC6FCCD66A_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m93A94F51FE2408EBFB12E2A7413DDAEBA75D4EB4_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* G_B2_0 = NULL;
	Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color32>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* L_11 = ((Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_13 = (EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_22 = (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, RuntimeObject*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color32>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color32>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				RuntimeObject* L_32;
				L_32 = KeyValuePair_2_get_Key_m349ECB9834FA93169BCCC3E25D58DAB263E8AA47_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_33;
				L_33 = KeyValuePair_2_get_Value_m5C908BF2976785DA003964DD0976A8581314746F_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, RuntimeObject*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m098794CDAD0D9754CCDDF75B72377FC69DEEF323_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m6BFE09EE5E22259AE89A34154E544FE9CAD5B0F6_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t43B519AE49EC272CAF6E177CBCC5352F83DC44AE* Dictionary_2_get_Keys_mE4069D2E036D9D1CDEE123AA3D48FA7D33020CFE_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t43B519AE49EC272CAF6E177CBCC5352F83DC44AE* L_0 = (KeyCollection_t43B519AE49EC272CAF6E177CBCC5352F83DC44AE*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t43B519AE49EC272CAF6E177CBCC5352F83DC44AE* L_1 = (KeyCollection_t43B519AE49EC272CAF6E177CBCC5352F83DC44AE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t43B519AE49EC272CAF6E177CBCC5352F83DC44AE*, Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t43B519AE49EC272CAF6E177CBCC5352F83DC44AE* L_2 = (KeyCollection_t43B519AE49EC272CAF6E177CBCC5352F83DC44AE*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C* Dictionary_2_get_Values_mB660CC7C866EAE7643B75A8747BA0D451C735FCC_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C* L_0 = (ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C* L_1 = (ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C*, Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C* L_2 = (ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C*)__this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m3299FE36458EB80A331FBE23CDDCD321B581DE12_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C* L_0 = (ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C* L_1 = (ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C*, Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C* L_2 = (ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mE81E6957845FDB8ACC690A9525C1C3352103BF3A_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C* L_0 = (ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C* L_1 = (ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C*, Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C* L_2 = (ValueCollection_t247A18D119E08D284E8A914EAA60DC925CCC9F8C*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Dictionary_2_get_Item_m6418D79768A3C80D862485D6A8F37F3B8696CC33_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_3 = (EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_5 = (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___0_key;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7 = V_1;
		return L_7;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3EE0D97167734EB219D64CDD7B0FE299B9CE174B_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, RuntimeObject* ___0_key, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, RuntimeObject*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m0F526E62E4A604C03651003AF324CBFE45740710_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, RuntimeObject* ___0_key, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, RuntimeObject*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4C035A06E089CE253D7E44135D7FD906CEC896FD_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m349ECB9834FA93169BCCC3E25D58DAB263E8AA47_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1;
		L_1 = KeyValuePair_2_get_Value_m5C908BF2976785DA003964DD0976A8581314746F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, RuntimeObject*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mCE75D65AF89B2E5F05F7631ED6ACA3BD012A6D82_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m349ECB9834FA93169BCCC3E25D58DAB263E8AA47_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tA8B0C386D0E8B1489A359D8F072D612DA34C00B3* L_3;
		L_3 = ((  EqualityComparer_1_tA8B0C386D0E8B1489A359D8F072D612DA34C00B3* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_4 = (EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7;
		L_7 = KeyValuePair_2_get_Value_m5C908BF2976785DA003964DD0976A8581314746F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m194054E11AE0060A4DA242485E853493FCD8E603_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m349ECB9834FA93169BCCC3E25D58DAB263E8AA47_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tA8B0C386D0E8B1489A359D8F072D612DA34C00B3* L_3;
		L_3 = ((  EqualityComparer_1_tA8B0C386D0E8B1489A359D8F072D612DA34C00B3* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_4 = (EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7;
		L_7 = KeyValuePair_2_get_Value_m5C908BF2976785DA003964DD0976A8581314746F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = KeyValuePair_2_get_Key_m349ECB9834FA93169BCCC3E25D58DAB263E8AA47_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m176D56E201C4316A47A01BE574123510A7B31A1A_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_4 = (EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mF8BE98970ABB5ED3C0D1D59B153ABC836415A04B_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mE87DA58725E42657478ABE5A455E0D22CC634AA4_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* V_0 = NULL;
	int32_t V_1 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tA8B0C386D0E8B1489A359D8F072D612DA34C00B3* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_0 = (EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7 = (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tA8B0C386D0E8B1489A359D8F072D612DA34C00B3* L_15;
		L_15 = ((  EqualityComparer_1_tA8B0C386D0E8B1489A359D8F072D612DA34C00B3* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_18 = (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_tA8B0C386D0E8B1489A359D8F072D612DA34C00B3* L_24;
		L_24 = ((  EqualityComparer_1_tA8B0C386D0E8B1489A359D8F072D612DA34C00B3* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_tA8B0C386D0E8B1489A359D8F072D612DA34C00B3* L_28 = V_4;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_31 = (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m2243ED6412EC092A4951367F636D1003615C5561_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_7 = (EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_19 = (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m8D46E1EE2DFA0221F04E2F093B071CB0F5D8858E((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8C0D13C987D0C420909FBA05B487A5EA1B420643 Dictionary_2_GetEnumerator_m57D8E7DE28E708AD1532BE7EE4462ECAEA6802ED_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8C0D13C987D0C420909FBA05B487A5EA1B420643 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m869EE3B6985313CD75D4F2168FC3A1EC081896F2((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m43C09D4CC2EBFD8ACFFF3783282AC1DE079237D3_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8C0D13C987D0C420909FBA05B487A5EA1B420643 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m869EE3B6985313CD75D4F2168FC3A1EC081896F2((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t8C0D13C987D0C420909FBA05B487A5EA1B420643 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m621864628F4D4D24A308D9215742F464DB5D8576_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_6;
		L_6 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5* L_14 = (KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5*)(KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5* L_15 = V_0;
		((  void (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m0B92AF7217DC71ACF95D3D24EBB4F0BC73884F77_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_2 = (EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((___0_key));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___0_key));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		RuntimeObject* L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		RuntimeObject* L_41 = (RuntimeObject*)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		RuntimeObject* L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		RuntimeObject* L_67 = (RuntimeObject*)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		RuntimeObject* L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mB9723CAF00FF38F8566F103A371AA2060304296D_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_5 = (EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF*)(EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m085776D82D4ECBC65A72E9BADD7E6260B8431D75_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, RuntimeObject* ___0_key, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_4 = (EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((___0_key));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___0_key));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		RuntimeObject* L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = (int32_t)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next_1;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_44 = V_0;
		NullCheck(L_44);
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = (int32_t)((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode_0;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___key_2;
		RuntimeObject* L_53 = ___0_key;
		NullCheck(L_49);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___2_behavior;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_58 = ___1_value;
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value_3 = L_58;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = (int32_t)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___next_1;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_65 = V_0;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_68 = V_0;
		NullCheck(L_68);
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = (int32_t)((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode_0;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		RuntimeObject* L_76 = (RuntimeObject*)((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___key_2;
		RuntimeObject* L_77 = ___0_key;
		NullCheck(L_73);
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___2_behavior;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_82 = ___1_value;
		((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value_3 = L_82;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		int32_t L_87 = (int32_t)((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___next_1;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_89 = V_0;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = (int32_t)__this->____freeList_3;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = (int32_t)__this->____count_2;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_96 = V_0;
		NullCheck(L_96);
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_99 = (EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF*)__this->____entries_1;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_104);
		NullCheck(L_102);
		G_B51_0 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_105 = V_0;
		int32_t L_106 = V_8;
		NullCheck(L_105);
		V_10 = ((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8* L_108 = V_10;
		int32_t L_109 = (int32_t)L_108->___next_1;
		__this->____freeList_3 = L_109;
	}

IL_028a:
	{
		Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode_0 = L_111;
		Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8* L_115 = V_10;
		RuntimeObject* L_116 = ___0_key;
		L_115->___key_2 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key_2), (void*)L_116);
		Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8* L_117 = V_10;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_118 = ___1_value;
		L_117->___value_3 = L_118;
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mD513C6937666C0BCE9CFB571BA2B3FA557DF716E_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = KeyValuePair_2_get_Key_m349ECB9834FA93169BCCC3E25D58DAB263E8AA47_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		RuntimeObject* L_24;
		L_24 = KeyValuePair_2_get_Key_m349ECB9834FA93169BCCC3E25D58DAB263E8AA47_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_27;
		L_27 = KeyValuePair_2_get_Value_m5C908BF2976785DA003964DD0976A8581314746F_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, RuntimeObject*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m72FB83D2425CB66517B12D85CBF53797541D21F2_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m0E93669D5489BDB1D963DEFF587BBBD77C59F0FE_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_3 = (EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF*)(EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_5 = (EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF*)__this->____entries_1;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		NullCheck((*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m11BC536F7FDA5205AD0ACD6EE81B145A8B50B5F5_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		NullCheck((___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_13 = (EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8* L_21 = V_4;
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___key_2;
		RuntimeObject* L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8* L_25 = V_4;
		RuntimeObject* L_26 = (RuntimeObject*)L_25->___key_2;
		RuntimeObject* L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_34 = (EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!true)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8* L_43 = V_4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_44 = (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mAB9420011378D685342ADD3930ACA65CC8E7B7F6_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, RuntimeObject* ___0_key, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_3 = ___1_value;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_4 = (EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m465E162366043FD51941B1A20B5F1B21DEFA9360_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, RuntimeObject* ___0_key, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, RuntimeObject*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2EA75B08ABF136233B4458BC749125803F9ED0C0_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mAD6F310A24950456BCF97EF041A5AADACEC6750D_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mF2799EF9DF278A0D5593B935A1C8DD0DBEA708D8_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, KeyValuePair_2U5BU5D_t1844EDEB8CC8F42C51E6F4C8039BA9BA5BDDBFF5*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_18 = (EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_30 = (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___value_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_27, L_32, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_39 = (int32_t)__this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_40 = (EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF*)__this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			RuntimeObject* L_49 = (RuntimeObject*)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_52 = (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m8D46E1EE2DFA0221F04E2F093B071CB0F5D8858E((&L_53), L_49, L_52, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m54C2BE6796F12DB99B40895152D0E69183C9EB06_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8C0D13C987D0C420909FBA05B487A5EA1B420643 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m869EE3B6985313CD75D4F2168FC3A1EC081896F2((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t8C0D13C987D0C420909FBA05B487A5EA1B420643 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3D951EFF9EE3A2C08432EA00CA3BB729542B1DA2_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.IDictionary.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_mD1C4240D13EC1EFCC3146B2DB3546A3AB81AD9A2_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t43B519AE49EC272CAF6E177CBCC5352F83DC44AE* L_0;
		L_0 = ((  KeyCollection_t43B519AE49EC272CAF6E177CBCC5352F83DC44AE* (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return (RuntimeObject*)L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m3AEAA3766255B391629D74848DBBBA7743F67F6B_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF* L_5 = (EntryU5BU5D_tFE726D463F611E4E4A72D28490134171736CC1FF*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7 = (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mF7D2EFA833861FD65052E0C65CAA327611ED4080_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)));
		}
		try
		{// begin try (depth: 2)
			RuntimeObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, RuntimeObject*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_3, ((*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)((Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mCA0297A32C086C3A01BFE4A7EE9DC8F632E6BD83_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m074D52701C3F353CDB590B92D3710CA6DF375E13_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m5AA12E20D0B5AACF426C4ADEF6DAD52CAC6F3042_gshared (Dictionary_2_t2EDFFA8C88267125923C377EC815E642568BCCAA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8C0D13C987D0C420909FBA05B487A5EA1B420643 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m869EE3B6985313CD75D4F2168FC3A1EC081896F2((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t8C0D13C987D0C420909FBA05B487A5EA1B420643 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t KeyValuePair_2_get_Key_mF07F04114D1454823A6F9290C2861617ACF2AA85_gshared_inline (KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = (int64_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m5AAF42BD95F064BAEA516F9173DE2E73BA998D86_gshared_inline (KeyValuePair_2_t4C1BE1E30F9965FFD94DC826D07EDACC33C0B8CA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t KeyValuePair_2_get_Key_mC536572F88F3FD21EED4624743F8B1CDF5C8EF60_gshared_inline (KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = (int64_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m168A81686A84DCA632E92D898CAB9C8EEB38396F_gshared_inline (KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D KeyValuePair_2_get_Key_m19728DC6A8A0980075FC4783A6964231ABD1EE03_gshared_inline (KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D* __this, const RuntimeMethod* method) 
{
	{
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_0 = (OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m1FA3C65C41BD9AC00A4E11A87F97DD959398CF54_gshared_inline (KeyValuePair_2_t3C6298886E5C2A055CCF197A8716A2A37296119D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_gshared_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_gshared_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mC8B523B8481DA349838318048E3A91953889DD73_gshared_inline (KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar KeyValuePair_2_get_Value_m848FBDDCC485BB76A3A758E81709647070236BFA_gshared_inline (KeyValuePair_2_tECFA8C561C082CE87D892A9355E0A1BB44319556* __this, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = (Il2CppChar)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mC34BFE336212774A0174CD8DDD49A29E7C7137E4_gshared_inline (KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F KeyValuePair_2_get_Value_mF29EED4089C4263A56043B143B694C4C0FD1EE03_gshared_inline (KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055* __this, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m349ECB9834FA93169BCCC3E25D58DAB263E8AA47_gshared_inline (KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B KeyValuePair_2_get_Value_m5C908BF2976785DA003964DD0976A8581314746F_gshared_inline (KeyValuePair_2_tE15BD34F75B584F06758FD8C5E0A50897E927167* __this, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)__this->___value_1;
		return L_0;
	}
}
