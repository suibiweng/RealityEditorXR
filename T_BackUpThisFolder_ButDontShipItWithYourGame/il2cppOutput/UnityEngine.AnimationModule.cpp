#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>
struct IList_1_t17CB150AE927D18DEA187CD03455E6B0968C18C8;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>
struct List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>[]
struct KeyValuePair_2U5BU5D_t54A137CFF4A510BDA3ABF488A4EAAA421A24CAEC;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.HumanBone[]
struct HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.SkeletonBone[]
struct SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040;
// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174;
// UnityEngine.AnimationState
struct AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AnimatorOverrideController
struct AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// UnityEngine.Avatar
struct Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.HumanBone
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Motion
struct Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.SkeletonBone
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7;
// System.String
struct String_t;
// UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Animation/Enumerator
struct Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530;
// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
struct OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5;

IL2CPP_EXTERN_C RuntimeClass* AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HumanBodyBones_tA2A904890A05ABCFFAB7E119244E97C5EA9807E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t52BEA003F069D47A25BB7153E6DE43A372DBD56B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t17CB150AE927D18DEA187CD03455E6B0968C18C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00F97321929E0D7989E72D633D157BD761DD173A;
IL2CPP_EXTERN_C String_t* _stringLiteral1767A709DBA16BACAD77F5ED6AF9CBBD95D35D4E;
IL2CPP_EXTERN_C String_t* _stringLiteral4DEE968069F34C26613ADFCD69C41EFC29314286;
IL2CPP_EXTERN_C String_t* _stringLiteral70F65AEE81F97590F7F0901232AAFE6147B87BE4;
IL2CPP_EXTERN_C String_t* _stringLiteral860B9EA7CDAB02A8A4B38336805EAE2FBA31F09C;
IL2CPP_EXTERN_C String_t* _stringLiteral8DC2252638D84FAF2C30B95D54EC83F52FA6C630;
IL2CPP_EXTERN_C String_t* _stringLiteral98C704D69BD1A288ED31DEE4ED4E50097A2D7018;
IL2CPP_EXTERN_C String_t* _stringLiteral9A0B8F8C43A11ED8E1400C04557C40AC52384963;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C8FF345EC45846B2EE6801F84DD49340F0A9E1;
IL2CPP_EXTERN_C String_t* _stringLiteralBD022D19E88CF1C2E702FF8813F493923F8AC574;
IL2CPP_EXTERN_C String_t* _stringLiteralBF563F6FCC25CE41FFE0BF7590AF9F4475916665;
IL2CPP_EXTERN_C String_t* _stringLiteralD2435BFAEB0372E848D9BE812E3B06AB862CC3D1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE066D08B565F88D413FDACA14C42BFF008FF4EB9;
IL2CPP_EXTERN_C String_t* _stringLiteralF5510C45DDAD777CCB4893578D995C9739F990F2;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationClipPlayable__ctor_mF2EE31CC772B100F98CCAE26963059C6C722FA1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimatorOverrideController_ApplyOverrides_m4882D28731BA7F28095DC1994375E38255F2DA90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimatorOverrideController_GetOverrides_m4C9F72BECAE151033F913C00A016E7A4A8D4E860_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AvatarBuilder_BuildHumanAvatar_m4BA84E1731C8C60C700A02764C183D5FA980A411_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m991BEFFBBFBEF60300BDC3FCD7557D21C47DBE49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC04D86A491ABCCDEAB4037F4ED57AAF190E1DF1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mBCC73A23F3B2223D776741005CEDDBD9570E8585_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m29B0BF47A772F881E7501AE348CA661236F89A03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mD82F03B002DC21E8F22E75BB0357052EFE4C1FD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_m818935F26D064D53C0C4A1810E773386464B9FB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_m289F9AA70DC99F5CCDA3F7A6DDE81FC72E2E1110_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969_m9AA33A8596A6C41CAA768B0A6EF59B75658A1FB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableOutputExtensions_SetSourcePlayable_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_TisAnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969_m389C7055BB3E25FF8CC06AF5A9F6EE1BE821B43D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8;;
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com;
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com;;
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke;
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;;
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126;;
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com;
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com;;
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke;
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke;;

struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52;
struct SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t8B36B9B16FF72CF5A0EBA03D2FA162E77C86534C 
{
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>
struct List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t54A137CFF4A510BDA3ABF488A4EAAA421A24CAEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_t54A137CFF4A510BDA3ABF488A4EAAA421A24CAEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___s_emptyArray_5;
};

// UnityEngine.Animations.AnimationPlayableGraphExtensions
struct AnimationPlayableGraphExtensions_tF833C072961F30409DB4D2A1B8B1B5BAE53221B3  : public RuntimeObject
{
};

// UnityEngine.Playables.AnimationPlayableUtilities
struct AnimationPlayableUtilities_t3B493B2DC8BB7533F266D433BC25C4E82EA27A4B  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UnityEngine.AvatarBuilder
struct AvatarBuilder_t189C7366CD3C732261561022A5E9A75E2F3A1F1D  : public RuntimeObject
{
};

// UnityEngine.HumanTrait
struct HumanTrait_t4EF6FC8790C40BD5BC9D36765D43202A4FAF219C  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// UnityEngine.Animation/Enumerator
struct Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530  : public RuntimeObject
{
	// UnityEngine.Animation UnityEngine.Animation/Enumerator::m_Outer
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___m_Outer_0;
	// System.Int32 UnityEngine.Animation/Enumerator::m_CurrentIndex
	int32_t ___m_CurrentIndex_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>
struct KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// UnityEngine.AnimatorClipInfo
struct AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 
{
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
};

// UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD 
{
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_FullPath
	int32_t ___m_FullPath_0;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_UserName
	int32_t ___m_UserName_1;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_Name
	int32_t ___m_Name_2;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_HasFixedDuration
	bool ___m_HasFixedDuration_3;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_Duration
	float ___m_Duration_4;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_NormalizedTime
	float ___m_NormalizedTime_5;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_AnyState
	bool ___m_AnyState_6;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_TransitionType
	int32_t ___m_TransitionType_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_pinvoke
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
};
// Native definition for COM marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_com
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
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

// UnityEngine.Animations.DiscreteEvaluationAttribute
struct DiscreteEvaluationAttribute_tF23FCB5AB01B394BF5BD84623364A965C90F8BB9  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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

// UnityEngine.HumanDescription
struct HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44 
{
	// UnityEngine.HumanBone[] UnityEngine.HumanDescription::human
	HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52* ___human_0;
	// UnityEngine.SkeletonBone[] UnityEngine.HumanDescription::skeleton
	SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85* ___skeleton_1;
	// System.Single UnityEngine.HumanDescription::m_ArmTwist
	float ___m_ArmTwist_2;
	// System.Single UnityEngine.HumanDescription::m_ForeArmTwist
	float ___m_ForeArmTwist_3;
	// System.Single UnityEngine.HumanDescription::m_UpperLegTwist
	float ___m_UpperLegTwist_4;
	// System.Single UnityEngine.HumanDescription::m_LegTwist
	float ___m_LegTwist_5;
	// System.Single UnityEngine.HumanDescription::m_ArmStretch
	float ___m_ArmStretch_6;
	// System.Single UnityEngine.HumanDescription::m_LegStretch
	float ___m_LegStretch_7;
	// System.Single UnityEngine.HumanDescription::m_FeetSpacing
	float ___m_FeetSpacing_8;
	// System.Single UnityEngine.HumanDescription::m_GlobalScale
	float ___m_GlobalScale_9;
	// System.String UnityEngine.HumanDescription::m_RootMotionBoneName
	String_t* ___m_RootMotionBoneName_10;
	// System.Boolean UnityEngine.HumanDescription::m_HasTranslationDoF
	bool ___m_HasTranslationDoF_11;
	// System.Boolean UnityEngine.HumanDescription::m_HasExtraRoot
	bool ___m_HasExtraRoot_12;
	// System.Boolean UnityEngine.HumanDescription::m_SkeletonHasParents
	bool ___m_SkeletonHasParents_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.HumanDescription
struct HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_pinvoke
{
	HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke* ___human_0;
	SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke* ___skeleton_1;
	float ___m_ArmTwist_2;
	float ___m_ForeArmTwist_3;
	float ___m_UpperLegTwist_4;
	float ___m_LegTwist_5;
	float ___m_ArmStretch_6;
	float ___m_LegStretch_7;
	float ___m_FeetSpacing_8;
	float ___m_GlobalScale_9;
	char* ___m_RootMotionBoneName_10;
	int32_t ___m_HasTranslationDoF_11;
	int32_t ___m_HasExtraRoot_12;
	int32_t ___m_SkeletonHasParents_13;
};
// Native definition for COM marshalling of UnityEngine.HumanDescription
struct HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_com
{
	HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com* ___human_0;
	SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com* ___skeleton_1;
	float ___m_ArmTwist_2;
	float ___m_ForeArmTwist_3;
	float ___m_UpperLegTwist_4;
	float ___m_LegTwist_5;
	float ___m_ArmStretch_6;
	float ___m_LegStretch_7;
	float ___m_FeetSpacing_8;
	float ___m_GlobalScale_9;
	Il2CppChar* ___m_RootMotionBoneName_10;
	int32_t ___m_HasTranslationDoF_11;
	int32_t ___m_HasExtraRoot_12;
	int32_t ___m_SkeletonHasParents_13;
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

// UnityEngine.Animations.NotKeyableAttribute
struct NotKeyableAttribute_tDDB6B25B26F649E3CED893EE1E63B6DE66844483  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.SharedBetweenAnimatorsAttribute
struct SharedBetweenAnimatorsAttribute_t44FFD5D3B5AEBB394182D66E2198FA398087449C  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
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

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Animations.AnimationHumanStream
struct AnimationHumanStream_t31E8EAD3F7C2C29CAE7B4EFB87AA84ECC6DCC6EC 
{
	// System.IntPtr UnityEngine.Animations.AnimationHumanStream::stream
	intptr_t ___stream_0;
};

// UnityEngine.Animations.AnimationStream
struct AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A 
{
	// System.UInt32 UnityEngine.Animations.AnimationStream::m_AnimatorBindingsVersion
	uint32_t ___m_AnimatorBindingsVersion_0;
	// System.IntPtr UnityEngine.Animations.AnimationStream::constant
	intptr_t ___constant_1;
	// System.IntPtr UnityEngine.Animations.AnimationStream::input
	intptr_t ___input_2;
	// System.IntPtr UnityEngine.Animations.AnimationStream::output
	intptr_t ___output_3;
	// System.IntPtr UnityEngine.Animations.AnimationStream::workspace
	intptr_t ___workspace_4;
	// System.IntPtr UnityEngine.Animations.AnimationStream::inputStreamAccessor
	intptr_t ___inputStreamAccessor_5;
	// System.IntPtr UnityEngine.Animations.AnimationStream::animationHandleBinder
	intptr_t ___animationHandleBinder_6;
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

// UnityEngine.HumanLimit
struct HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E 
{
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Min
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Min_0;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Max
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Max_1;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_2;
	// System.Single UnityEngine.HumanLimit::m_AxisLength
	float ___m_AxisLength_3;
	// System.Int32 UnityEngine.HumanLimit::m_UseDefaultValues
	int32_t ___m_UseDefaultValues_4;
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

// UnityEngine.Playables.PlayableGraph
struct PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E 
{
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
};

// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Null_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.SkeletonBone
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 
{
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// System.String UnityEngine.SkeletonBone::parentName
	String_t* ___parentName_1;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke
{
	char* ___name_0;
	char* ___parentName_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
};
// Native definition for COM marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___parentName_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
};

// UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2  : public RuntimeObject
{
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Animations.AnimationClipPlayable
struct AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174  : public RuntimeObject
{
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke
{
	float ___m_Time_0;
	char* ___m_FunctionName_1;
	char* ___m_StringParameter_2;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};
// Native definition for COM marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com
{
	float ___m_Time_0;
	Il2CppChar* ___m_FunctionName_1;
	Il2CppChar* ___m_StringParameter_2;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};

// UnityEngine.Animations.AnimationLayerMixerPlayable
struct AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_StaticFields
{
	// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::m_NullPlayable
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationMixerPlayable
struct AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_StaticFields
{
	// UnityEngine.Animations.AnimationMixerPlayable UnityEngine.Animations.AnimationMixerPlayable::m_NullPlayable
	AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationMotionXToDeltaPlayable
struct AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_StaticFields
{
	// UnityEngine.Animations.AnimationMotionXToDeltaPlayable UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_NullPlayable
	AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationOffsetPlayable
struct AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_StaticFields
{
	// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::m_NullPlayable
	AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationPlayableOutput
struct AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationPosePlayable
struct AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_StaticFields
{
	// UnityEngine.Animations.AnimationPosePlayable UnityEngine.Animations.AnimationPosePlayable::m_NullPlayable
	AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationRemoveScalePlayable
struct AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_StaticFields
{
	// UnityEngine.Animations.AnimationRemoveScalePlayable UnityEngine.Animations.AnimationRemoveScalePlayable::m_NullPlayable
	AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationScriptPlayable
struct AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_StaticFields
{
	// UnityEngine.Animations.AnimationScriptPlayable UnityEngine.Animations.AnimationScriptPlayable::m_NullPlayable
	AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 ___m_NullPlayable_1;
};

// UnityEngine.AnimationState
struct AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE  : public TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2
{
};

// UnityEngine.Animations.AnimatorControllerPlayable
struct AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_StaticFields
{
	// UnityEngine.Animations.AnimatorControllerPlayable UnityEngine.Animations.AnimatorControllerPlayable::m_NullPlayable
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___m_NullPlayable_1;
};

// UnityEngine.Avatar
struct Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.HumanBone
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 
{
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName_0;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName_1;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E ___limit_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.HumanBone
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke
{
	char* ___m_BoneName_0;
	char* ___m_HumanName_1;
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E ___limit_2;
};
// Native definition for COM marshalling of UnityEngine.HumanBone
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com
{
	Il2CppChar* ___m_BoneName_0;
	Il2CppChar* ___m_HumanName_1;
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E ___limit_2;
};

// UnityEngine.Motion
struct Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// System.Boolean UnityEngine.Motion::<isAnimatorMotion>k__BackingField
	bool ___U3CisAnimatorMotionU3Ek__BackingField_4;
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

// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712  : public Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC
{
};

// UnityEngine.AnimatorOverrideController
struct AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493  : public RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254
{
	// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback UnityEngine.AnimatorOverrideController::OnOverrideControllerDirty
	OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* ___OnOverrideControllerDirty_4;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
struct OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5  : public MulticastDelegate_t
{
};

// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.HumanBone[]
struct HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52  : public RuntimeArray
{
	ALIGN_FIELD (8) HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 m_Items[1];

	inline HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_BoneName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_HumanName_1), (void*)NULL);
		#endif
	}
	inline HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_BoneName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_HumanName_1), (void*)NULL);
		#endif
	}
};
// UnityEngine.SkeletonBone[]
struct SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85  : public RuntimeArray
{
	ALIGN_FIELD (8) SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 m_Items[1];

	inline SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___parentName_1), (void*)NULL);
		#endif
	}
	inline SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___parentName_1), (void*)NULL);
		#endif
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
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 m_Items[1];

	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_back(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_cleanup(HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_back(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_cleanup(SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com_back(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com_cleanup(HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com_back(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com_cleanup(SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled);

// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m6271FC0C165CDF09C66D50E34C9525975C466B71_gshared (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m8102AF73E5A87560D6B4DE4A1B6714C4F5972E21_gshared (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m9B6DC260339CC9A611F32C3807DE4F36A1720DE6_gshared_inline (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m8DDAFA7A565FBEEB8C312BF1E890AB978D3760AE_gshared_inline (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___item0, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableOutputExtensions::SetSourcePlayable<UnityEngine.Animations.AnimationPlayableOutput,UnityEngine.Animations.AnimationClipPlayable>(U,V)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputExtensions_SetSourcePlayable_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_TisAnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969_m389C7055BB3E25FF8CC06AF5A9F6EE1BE821B43D_gshared (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E ___output0, AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationClipPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969_m9AA33A8596A6C41CAA768B0A6EF59B75658A1FB8_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Animations.AnimationPlayableOutput>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793_gshared (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;

// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimatorOverrideController::get_overridesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorOverrideController_get_overridesCount_m4A241C738A0F2F03B7578E32F2C3342F536DE9DE (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>::get_Capacity()
inline int32_t List_1_get_Capacity_m818935F26D064D53C0C4A1810E773386464B9FB1 (List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797*, const RuntimeMethod*))List_1_get_Capacity_m6271FC0C165CDF09C66D50E34C9525975C466B71_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m289F9AA70DC99F5CCDA3F7A6DDE81FC72E2E1110 (List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m8102AF73E5A87560D6B4DE4A1B6714C4F5972E21_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>::Clear()
inline void List_1_Clear_mD82F03B002DC21E8F22E75BB0357052EFE4C1FD3_inline (List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797*, const RuntimeMethod*))List_1_Clear_m9B6DC260339CC9A611F32C3807DE4F36A1720DE6_gshared_inline)(__this, method);
}
// UnityEngine.AnimationClip UnityEngine.AnimatorOverrideController::GetOriginalClip(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimatorOverrideController_GetOriginalClip_m10DEA1312336A51EBC45B89E0D947836CAD4EAD5 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.AnimationClip UnityEngine.AnimatorOverrideController::GetOverrideClip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimatorOverrideController_GetOverrideClip_m8F7F5831ED4E5D96FC2B2EF8FD427F14BAFA2A13 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___originalClip0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m991BEFFBBFBEF60300BDC3FCD7557D21C47DBE49 (KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___key0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>::Add(T)
inline void List_1_Add_m29B0BF47A772F881E7501AE348CA661236F89A03_inline (List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* __this, KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797*, KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9, const RuntimeMethod*))List_1_Add_m8DDAFA7A565FBEEB8C312BF1E890AB978D3760AE_gshared_inline)(__this, ___item0, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>::get_Key()
inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* KeyValuePair_2_get_Key_mC04D86A491ABCCDEAB4037F4ED57AAF190E1DF1C_inline (KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9* __this, const RuntimeMethod* method)
{
	return ((  AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* (*) (KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>::get_Value()
inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* KeyValuePair_2_get_Value_mBCC73A23F3B2223D776741005CEDDBD9570E8585_inline (KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9* __this, const RuntimeMethod* method)
{
	return ((  AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* (*) (KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Void UnityEngine.AnimatorOverrideController::SetClip(UnityEngine.AnimationClip,UnityEngine.AnimationClip,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_SetClip_m5978905B5D13EE9626CE77000F7C620C26EDF025 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___originalClip0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___overrideClip1, bool ___notify2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimatorOverrideController::SendNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_SendNotification_m370030BDB9A21AF982EBF3B68012224D02D4397A (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_inline (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.HumanLimit::set_useDefaultValues(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanLimit_set_useDefaultValues_m3BD1D01F9652270133D307C7709FDD554621ADE8 (HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.HumanLimit::set_min(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanLimit_set_min_mE1EFA9D3BBB3047BF25554696FEEFF1F218A7227 (HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.HumanLimit::set_max(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanLimit_set_max_m68A852091164B5EA6CD138615DEC75EC9917DA78 (HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.HumanLimit::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanLimit_set_center_mC1C73D9F6B3EFADCF99E6906A0D464146F2FCDF8 (HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.HumanLimit::set_axisLength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanLimit_set_axisLength_m7DACA3E1AA03B9733E0C1D34051859A45D5B8FB3 (HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanBone_set_boneName_m22857CD9738A623436C8F7A31D51D1EBA4BD8F58 (HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanBone_set_humanName_m460C6620AEE45FC9601B8D05448DD6C397B12D4B (HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.HumanDescription::set_upperArmTwist(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanDescription_set_upperArmTwist_m4056390E30A30DCEB48D55D4E536F146E431E100 (HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.HumanDescription::set_lowerArmTwist(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanDescription_set_lowerArmTwist_mD24F728854AC5AD545E09D6E74CDD0B7AD6DF139 (HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.HumanDescription::set_upperLegTwist(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanDescription_set_upperLegTwist_m0552329018CAC469A2443BFBC89B83DFB5288782 (HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.HumanDescription::set_lowerLegTwist(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanDescription_set_lowerLegTwist_m477F6F9AEC4E7E3F8D6FA72B05BCBF05C02FFB19 (HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.HumanDescription::set_armStretch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanDescription_set_armStretch_m52A43854E332057B62C07306CB1663CEFDB01C71 (HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.HumanDescription::set_legStretch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanDescription_set_legStretch_m40D8FE0E122F5EF4143253814D732AF8413578DC (HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.HumanDescription::set_feetSpacing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanDescription_set_feetSpacing_mC0F12305CA30ADA53D08E987E52DE1611E9511D3 (HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.HumanDescription::set_hasTranslationDoF(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanDescription_set_hasTranslationDoF_mE5E5B11F3DC450708723875A5B1D7CFC340FD20E (HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, const RuntimeMethod* method) ;
// UnityEngine.Avatar UnityEngine.AvatarBuilder::BuildHumanAvatarInternal(UnityEngine.GameObject,UnityEngine.HumanDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* AvatarBuilder_BuildHumanAvatarInternal_m80FBC857C0DF3E09682437DDD5CBE240D9D7B90D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44 ___humanDescription1, const RuntimeMethod* method) ;
// UnityEngine.Avatar UnityEngine.AvatarBuilder::BuildHumanAvatarInternal_Injected(UnityEngine.GameObject,UnityEngine.HumanDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* AvatarBuilder_BuildHumanAvatarInternal_Injected_m1D682F8482BFE1BD78843F10FA092203609C4E85 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* ___humanDescription1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* Animation_GetState_mFE0B2A4F4BD7F3DDE2CA699D6036607F0E7259FB (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m5E86FA3D4C8C7F144565B6E3962FD5CF3E51F1C0 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, int32_t ___mode0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_PlayDefaultAnimation_mD2F0091CD4214603FE368C658A3DB28A53D6D48F (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, int32_t ___mode0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m894966605BBBE66B5D4AEEB52688BAFD7DA7DAA3 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___animation0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_CrossFade_m0DFC263F0CA45915C28C648B652A4903AE5DB9BA (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___animation0, float ___fadeLength1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_CrossFade_mA2C79723F05536F1A418DF43A06E7BA9F5D07EC3 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___animation0, float ___fadeLength1, int32_t ___mode2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_AddClip_m0DBAB71E23EA248D6A18C705B8AF0EA140D2FFDF (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip0, String_t* ___newName1, int32_t ___firstFrame2, int32_t ___lastFrame3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_AddClip_m87A5BE2BFAC7F12D7C0FE5D954E657FDB8B4A7F6 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip0, String_t* ___newName1, int32_t ___firstFrame2, int32_t ___lastFrame3, bool ___addLoopFrame4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF3FB66377864673B8DAF14A36DB6D069B98A92F4 (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* __this, Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___outer0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TrackedReference::op_Implicit(UnityEngine.TrackedReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackedReference_op_Implicit_m9CABD88EF1D3555731863047DD49B549685566B0 (TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.AnimationClip UnityEngine.AnimationState::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimationState_get_clip_mDF1793A0E862BE0534E3099FAE98CACCE8F6BF61 (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animation::GetStateCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TrackedReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedReference__ctor_m0E498FD0AD5807B7B91CB0005170E522DAE3616A (TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.HumanTrait::GetBoneIndexFromMono(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925 (int32_t ___humanId0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.HumanTrait::Internal_RequiredBone(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HumanTrait_Internal_RequiredBone_m2ACFEDF683A544288BEF76DF0A7744751194997C (int32_t ___i0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransformInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___humanBoneId0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Motion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Motion__ctor_mB6190858E566BFA1B80D2E94B65CD27920A49443 (Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___self0, const RuntimeMethod* method) ;
// UnityEngine.WrapMode UnityEngine.AnimationClip::get_wrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationClip_get_wrapMode_m7D79D3FE7785D25ECCD8C16ADF289654E9BCAC97 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationClip::SampleAnimation(UnityEngine.GameObject,UnityEngine.AnimationClip,System.Single,UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_SampleAnimation_m1707BCA02475EBB318BA0F12C857CF5503C30904 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip1, float ___inTime2, int32_t ___wrapMode3, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableGraph UnityEngine.Playables.PlayableGraph::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E PlayableGraph_Create_mCAFF6F9DA9B2E26ABA61692903EF3F454608A4A7 (const RuntimeMethod* method) ;
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::Create(UnityEngine.Playables.PlayableGraph,System.String,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E AnimationPlayableOutput_Create_m65847A70F6C74854387814C5B1D4C281B6CCCDC4 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, String_t* ___name1, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___target2, const RuntimeMethod* method) ;
// UnityEngine.Animations.AnimationClipPlayable UnityEngine.Animations.AnimationClipPlayable::Create(UnityEngine.Playables.PlayableGraph,UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 AnimationClipPlayable_Create_m034A4A30AC2642E675B95A0A7C3C384F533F5C1A (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableOutputExtensions::SetSourcePlayable<UnityEngine.Animations.AnimationPlayableOutput,UnityEngine.Animations.AnimationClipPlayable>(U,V)
inline void PlayableOutputExtensions_SetSourcePlayable_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_TisAnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969_m389C7055BB3E25FF8CC06AF5A9F6EE1BE821B43D (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E ___output0, AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 ___value1, const RuntimeMethod* method)
{
	((  void (*) (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E, AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969, const RuntimeMethod*))PlayableOutputExtensions_SetSourcePlayable_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_TisAnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969_m389C7055BB3E25FF8CC06AF5A9F6EE1BE821B43D_gshared)(___output0, ___value1, method);
}
// System.Void UnityEngine.Animations.AnimationPlayableGraphExtensions::SyncUpdateAndTimeMode(UnityEngine.Playables.PlayableGraph,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableGraphExtensions_SyncUpdateAndTimeMode_mBF6173908DA7C04947C405230A1D66F108E7F493 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableGraph::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableGraph_Play_mE2A27205C369339BB8B39B9CCBF5F5EE9B26F9A6 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_gshared)(__this, method);
}
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, const RuntimeMethod* method) ;
// System.Boolean System.ValueType::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::Equals(UnityEngine.Animations.AnimationRemoveScalePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_Equals_m0ACDD59B80103591DA8E84CB387FB10778D8C327 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD ___other0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4 (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___x0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m14125BB4CCFCDFFD098223AF20E38501BA264180 (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78 (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_Equals_mEC28392ADD4E9639EB9228D106D93E21B3587270 (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 ___other0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalSyncUpdateAndTimeMode(UnityEngine.Playables.PlayableGraph&,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableGraphExtensions_InternalSyncUpdateAndTimeMode_m7C6C30F3FC2930979C825953394E8C9F6D35E3F3 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::Equals(UnityEngine.Animations.AnimationScriptPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_Equals_mAD02E40704CBE4AB188DE0569052F8EA9864F4E4 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetSingleLayerOptimizationInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6 (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, bool ___singleLayerOptimization1, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_Equals_mA5D24E61E2DE1140B409F3B569DBA3C185751970 (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D ___other0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationClipPlayable_CreateHandle_m9804DF3694EC65E8531F6839194AB189401AE564 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationClipPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable__ctor_mF2EE31CC772B100F98CCAE26963059C6C722FA1A (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_CreateHandleInternal_mB8466F44A261B040DBCE8BA442DA8CF7153D2212 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip1, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationClipPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969_m9AA33A8596A6C41CAA768B0A6EF59B75658A1FB8 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969_m9AA33A8596A6C41CAA768B0A6EF59B75658A1FB8_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_Equals_mC5263BEA86C02CEDF93C5B14EAA168883E1DB5F4 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 ___other0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetApplyFootIKInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetApplyFootIKInternal_m57C77DC9937F7BA02885EEBF5D7CDC1CF9412DFC (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetApplyFootIK(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetApplyFootIK_m7CBA77F56815AD21784AC53D9EBDAE18AFA48507 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetApplyPlayableIKInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetApplyPlayableIKInternal_mBCA5B580834435175256C8319275DD443281DD82 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetApplyPlayableIK(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetApplyPlayableIK_m69A6F6E28EB250956E27C1720A0A842848F54DAB (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_CreateHandleInternal_Injected_m4FD6B80E5194144660D7974F13F44BA0355C6E3B (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip1, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationPosePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationPosePlayable::Equals(UnityEngine.Animations.AnimationPosePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPosePlayable_Equals_m10F1E7DD7037B2AB3F7DAE3E01A1DC843EABD0A3 (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940 (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2 (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_Equals_m7CBF3B7618EDBA4ECC2F3C2F54011248BC45CDCC (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7 (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_Equals_m6EBE215636EEEA3196A43F4D6C1FE6DD704AFA4E (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, String_t* ___name1, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___handle2, const RuntimeMethod* method) ;
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E AnimationPlayableOutput_get_Null_mDF5638798B49F3E7ACCF766C266D7F776E553900 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationPlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___handle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationPlayableOutput::SetTarget(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_SetTarget_m0F7745C4A721D76EB1E804AA48E70C9C798E0DCE (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsValid_mA94C343D72B72C3B1C7636C93A8DB5EA71691312 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Animations.AnimationPlayableOutput>()
inline bool PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, const RuntimeMethod*))PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutputHandle_get_Null_m656E8D2549FA031DA8A2EA5B39CE3B33D75B69F8 (const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AnimationPlayableOutput_GetHandle_m2A8E2A9CBD12EDCF48FC946445AB42802083338D (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___handle0, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___target1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.AnimatorOverrideController::SetClip(UnityEngine.AnimationClip,UnityEngine.AnimationClip,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_SetClip_m5978905B5D13EE9626CE77000F7C620C26EDF025 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___originalClip0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___overrideClip1, bool ___notify2, const RuntimeMethod* method) 
{
	typedef void (*AnimatorOverrideController_SetClip_m5978905B5D13EE9626CE77000F7C620C26EDF025_ftn) (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, bool);
	static AnimatorOverrideController_SetClip_m5978905B5D13EE9626CE77000F7C620C26EDF025_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorOverrideController_SetClip_m5978905B5D13EE9626CE77000F7C620C26EDF025_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimatorOverrideController::SetClip(UnityEngine.AnimationClip,UnityEngine.AnimationClip,System.Boolean)");
	_il2cpp_icall_func(__this, ___originalClip0, ___overrideClip1, ___notify2);
}
// System.Void UnityEngine.AnimatorOverrideController::SendNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_SendNotification_m370030BDB9A21AF982EBF3B68012224D02D4397A (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, const RuntimeMethod* method) 
{
	typedef void (*AnimatorOverrideController_SendNotification_m370030BDB9A21AF982EBF3B68012224D02D4397A_ftn) (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493*);
	static AnimatorOverrideController_SendNotification_m370030BDB9A21AF982EBF3B68012224D02D4397A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorOverrideController_SendNotification_m370030BDB9A21AF982EBF3B68012224D02D4397A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimatorOverrideController::SendNotification()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.AnimationClip UnityEngine.AnimatorOverrideController::GetOriginalClip(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimatorOverrideController_GetOriginalClip_m10DEA1312336A51EBC45B89E0D947836CAD4EAD5 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	typedef AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* (*AnimatorOverrideController_GetOriginalClip_m10DEA1312336A51EBC45B89E0D947836CAD4EAD5_ftn) (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493*, int32_t);
	static AnimatorOverrideController_GetOriginalClip_m10DEA1312336A51EBC45B89E0D947836CAD4EAD5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorOverrideController_GetOriginalClip_m10DEA1312336A51EBC45B89E0D947836CAD4EAD5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimatorOverrideController::GetOriginalClip(System.Int32)");
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* icallRetVal = _il2cpp_icall_func(__this, ___index0);
	return icallRetVal;
}
// UnityEngine.AnimationClip UnityEngine.AnimatorOverrideController::GetOverrideClip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimatorOverrideController_GetOverrideClip_m8F7F5831ED4E5D96FC2B2EF8FD427F14BAFA2A13 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___originalClip0, const RuntimeMethod* method) 
{
	typedef AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* (*AnimatorOverrideController_GetOverrideClip_m8F7F5831ED4E5D96FC2B2EF8FD427F14BAFA2A13_ftn) (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimatorOverrideController_GetOverrideClip_m8F7F5831ED4E5D96FC2B2EF8FD427F14BAFA2A13_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorOverrideController_GetOverrideClip_m8F7F5831ED4E5D96FC2B2EF8FD427F14BAFA2A13_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimatorOverrideController::GetOverrideClip(UnityEngine.AnimationClip)");
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* icallRetVal = _il2cpp_icall_func(__this, ___originalClip0);
	return icallRetVal;
}
// System.Int32 UnityEngine.AnimatorOverrideController::get_overridesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorOverrideController_get_overridesCount_m4A241C738A0F2F03B7578E32F2C3342F536DE9DE (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AnimatorOverrideController_get_overridesCount_m4A241C738A0F2F03B7578E32F2C3342F536DE9DE_ftn) (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493*);
	static AnimatorOverrideController_get_overridesCount_m4A241C738A0F2F03B7578E32F2C3342F536DE9DE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorOverrideController_get_overridesCount_m4A241C738A0F2F03B7578E32F2C3342F536DE9DE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimatorOverrideController::get_overridesCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimatorOverrideController::GetOverrides(System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_GetOverrides_m4C9F72BECAE151033F913C00A016E7A4A8D4E860 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* ___overrides0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m991BEFFBBFBEF60300BDC3FCD7557D21C47DBE49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m29B0BF47A772F881E7501AE348CA661236F89A03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mD82F03B002DC21E8F22E75BB0357052EFE4C1FD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_m818935F26D064D53C0C4A1810E773386464B9FB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_m289F9AA70DC99F5CCDA3F7A6DDE81FC72E2E1110_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* V_4 = NULL;
	bool V_5 = false;
	{
		List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* L_0 = ___overrides0;
		V_1 = (bool)((((RuntimeObject*)(List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral70F65AEE81F97590F7F0901232AAFE6147B87BE4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatorOverrideController_GetOverrides_m4C9F72BECAE151033F913C00A016E7A4A8D4E860_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3;
		L_3 = AnimatorOverrideController_get_overridesCount_m4A241C738A0F2F03B7578E32F2C3342F536DE9DE(__this, NULL);
		V_0 = L_3;
		List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* L_4 = ___overrides0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Capacity_m818935F26D064D53C0C4A1810E773386464B9FB1(L_4, List_1_get_Capacity_m818935F26D064D53C0C4A1810E773386464B9FB1_RuntimeMethod_var);
		int32_t L_6 = V_0;
		V_2 = (bool)((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* L_8 = ___overrides0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		List_1_set_Capacity_m289F9AA70DC99F5CCDA3F7A6DDE81FC72E2E1110(L_8, L_9, List_1_set_Capacity_m289F9AA70DC99F5CCDA3F7A6DDE81FC72E2E1110_RuntimeMethod_var);
	}

IL_0030:
	{
		List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* L_10 = ___overrides0;
		NullCheck(L_10);
		List_1_Clear_mD82F03B002DC21E8F22E75BB0357052EFE4C1FD3_inline(L_10, List_1_Clear_mD82F03B002DC21E8F22E75BB0357052EFE4C1FD3_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0060;
	}

IL_003b:
	{
		int32_t L_11 = V_3;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_12;
		L_12 = AnimatorOverrideController_GetOriginalClip_m10DEA1312336A51EBC45B89E0D947836CAD4EAD5(__this, L_11, NULL);
		V_4 = L_12;
		List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* L_13 = ___overrides0;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_14 = V_4;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_15 = V_4;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_16;
		L_16 = AnimatorOverrideController_GetOverrideClip_m8F7F5831ED4E5D96FC2B2EF8FD427F14BAFA2A13(__this, L_15, NULL);
		KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9 L_17;
		memset((&L_17), 0, sizeof(L_17));
		KeyValuePair_2__ctor_m991BEFFBBFBEF60300BDC3FCD7557D21C47DBE49((&L_17), L_14, L_16, /*hidden argument*/KeyValuePair_2__ctor_m991BEFFBBFBEF60300BDC3FCD7557D21C47DBE49_RuntimeMethod_var);
		NullCheck(L_13);
		List_1_Add_m29B0BF47A772F881E7501AE348CA661236F89A03_inline(L_13, L_17, List_1_Add_m29B0BF47A772F881E7501AE348CA661236F89A03_RuntimeMethod_var);
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0060:
	{
		int32_t L_19 = V_3;
		int32_t L_20 = V_0;
		V_5 = (bool)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (L_21)
		{
			goto IL_003b;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AnimatorOverrideController::ApplyOverrides(System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_ApplyOverrides_m4882D28731BA7F28095DC1994375E38255F2DA90 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, RuntimeObject* ___overrides0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t52BEA003F069D47A25BB7153E6DE43A372DBD56B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t17CB150AE927D18DEA187CD03455E6B0968C18C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC04D86A491ABCCDEAB4037F4ED57AAF190E1DF1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mBCC73A23F3B2223D776741005CEDDBD9570E8585_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___overrides0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral70F65AEE81F97590F7F0901232AAFE6147B87BE4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatorOverrideController_ApplyOverrides_m4882D28731BA7F28095DC1994375E38255F2DA90_RuntimeMethod_var)));
	}

IL_0014:
	{
		V_1 = 0;
		goto IL_0042;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___overrides0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9 L_5;
		L_5 = InterfaceFuncInvoker1< KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>::get_Item(System.Int32) */, IList_1_t17CB150AE927D18DEA187CD03455E6B0968C18C8_il2cpp_TypeInfo_var, L_3, L_4);
		V_2 = L_5;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_6;
		L_6 = KeyValuePair_2_get_Key_mC04D86A491ABCCDEAB4037F4ED57AAF190E1DF1C_inline((&V_2), KeyValuePair_2_get_Key_mC04D86A491ABCCDEAB4037F4ED57AAF190E1DF1C_RuntimeMethod_var);
		RuntimeObject* L_7 = ___overrides0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9 L_9;
		L_9 = InterfaceFuncInvoker1< KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>::get_Item(System.Int32) */, IList_1_t17CB150AE927D18DEA187CD03455E6B0968C18C8_il2cpp_TypeInfo_var, L_7, L_8);
		V_2 = L_9;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_10;
		L_10 = KeyValuePair_2_get_Value_mBCC73A23F3B2223D776741005CEDDBD9570E8585_inline((&V_2), KeyValuePair_2_get_Value_mBCC73A23F3B2223D776741005CEDDBD9570E8585_RuntimeMethod_var);
		AnimatorOverrideController_SetClip_m5978905B5D13EE9626CE77000F7C620C26EDF025(__this, L_6, L_10, (bool)0, NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0042:
	{
		int32_t L_12 = V_1;
		RuntimeObject* L_13 = ___overrides0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>::get_Count() */, ICollection_1_t52BEA003F069D47A25BB7153E6DE43A372DBD56B_il2cpp_TypeInfo_var, L_13);
		V_3 = (bool)((((int32_t)L_12) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0018;
		}
	}
	{
		AnimatorOverrideController_SendNotification_m370030BDB9A21AF982EBF3B68012224D02D4397A(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.AnimatorOverrideController::OnInvalidateOverrideController(UnityEngine.AnimatorOverrideController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_OnInvalidateOverrideController_mA6B0AA977505FDEFDD6BCA2E941FD3A18AE1AD23 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* ___controller0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* L_0 = ___controller0;
		NullCheck(L_0);
		OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* L_1 = L_0->___OnOverrideControllerDirty_4;
		V_0 = (bool)((!(((RuntimeObject*)(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* L_3 = ___controller0;
		NullCheck(L_3);
		OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* L_4 = L_3->___OnOverrideControllerDirty_4;
		NullCheck(L_4);
		OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_inline(L_4, NULL);
	}

IL_001a:
	{
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
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_Multicast(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* currentDelegate = reinterpret_cast<OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenInst(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenStatic(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenStaticInvoker(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_ClosedStaticInvoker(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5 (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback__ctor_mA49B11AF24CB49A9B764058DB73CE221AE54E106 (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_Multicast;
}
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___parentName_1 = il2cpp_codegen_marshal_string(unmarshaled.___parentName_1);
	marshaled.___position_2 = unmarshaled.___position_2;
	marshaled.___rotation_3 = unmarshaled.___rotation_3;
	marshaled.___scale_4 = unmarshaled.___scale_4;
}
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_back(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	unmarshaled.___parentName_1 = il2cpp_codegen_marshal_string_result(marshaled.___parentName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___parentName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___parentName_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_2;
	memset((&unmarshaledposition_temp_2), 0, sizeof(unmarshaledposition_temp_2));
	unmarshaledposition_temp_2 = marshaled.___position_2;
	unmarshaled.___position_2 = unmarshaledposition_temp_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledrotation_temp_3;
	memset((&unmarshaledrotation_temp_3), 0, sizeof(unmarshaledrotation_temp_3));
	unmarshaledrotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.___rotation_3 = unmarshaledrotation_temp_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledscale_temp_4;
	memset((&unmarshaledscale_temp_4), 0, sizeof(unmarshaledscale_temp_4));
	unmarshaledscale_temp_4 = marshaled.___scale_4;
	unmarshaled.___scale_4 = unmarshaledscale_temp_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_cleanup(SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___name_0);
	marshaled.___parentName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___parentName_1);
	marshaled.___position_2 = unmarshaled.___position_2;
	marshaled.___rotation_3 = unmarshaled.___rotation_3;
	marshaled.___scale_4 = unmarshaled.___scale_4;
}
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com_back(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	unmarshaled.___parentName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___parentName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___parentName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___parentName_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_2;
	memset((&unmarshaledposition_temp_2), 0, sizeof(unmarshaledposition_temp_2));
	unmarshaledposition_temp_2 = marshaled.___position_2;
	unmarshaled.___position_2 = unmarshaledposition_temp_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledrotation_temp_3;
	memset((&unmarshaledrotation_temp_3), 0, sizeof(unmarshaledrotation_temp_3));
	unmarshaledrotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.___rotation_3 = unmarshaledrotation_temp_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledscale_temp_4;
	memset((&unmarshaledscale_temp_4), 0, sizeof(unmarshaledscale_temp_4));
	unmarshaledscale_temp_4 = marshaled.___scale_4;
	unmarshaled.___scale_4 = unmarshaledscale_temp_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com_cleanup(SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.HumanLimit::set_useDefaultValues(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanLimit_set_useDefaultValues_m3BD1D01F9652270133D307C7709FDD554621ADE8 (HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E* __this, bool ___value0, const RuntimeMethod* method) 
{
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E* G_B2_0 = NULL;
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E* G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0009;
	}

IL_0008:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0009:
	{
		G_B3_1->___m_UseDefaultValues_4 = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void HumanLimit_set_useDefaultValues_m3BD1D01F9652270133D307C7709FDD554621ADE8_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E*>(__this + _offset);
	HumanLimit_set_useDefaultValues_m3BD1D01F9652270133D307C7709FDD554621ADE8(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.HumanLimit::set_min(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanLimit_set_min_mE1EFA9D3BBB3047BF25554696FEEFF1F218A7227 (HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_Min_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void HumanLimit_set_min_mE1EFA9D3BBB3047BF25554696FEEFF1F218A7227_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E*>(__this + _offset);
	HumanLimit_set_min_mE1EFA9D3BBB3047BF25554696FEEFF1F218A7227(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.HumanLimit::set_max(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanLimit_set_max_m68A852091164B5EA6CD138615DEC75EC9917DA78 (HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_Max_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void HumanLimit_set_max_m68A852091164B5EA6CD138615DEC75EC9917DA78_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E*>(__this + _offset);
	HumanLimit_set_max_m68A852091164B5EA6CD138615DEC75EC9917DA78(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.HumanLimit::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanLimit_set_center_mC1C73D9F6B3EFADCF99E6906A0D464146F2FCDF8 (HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_Center_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void HumanLimit_set_center_mC1C73D9F6B3EFADCF99E6906A0D464146F2FCDF8_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E*>(__this + _offset);
	HumanLimit_set_center_mC1C73D9F6B3EFADCF99E6906A0D464146F2FCDF8(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.HumanLimit::set_axisLength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanLimit_set_axisLength_m7DACA3E1AA03B9733E0C1D34051859A45D5B8FB3 (HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_AxisLength_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void HumanLimit_set_axisLength_m7DACA3E1AA03B9733E0C1D34051859A45D5B8FB3_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E*>(__this + _offset);
	HumanLimit_set_axisLength_m7DACA3E1AA03B9733E0C1D34051859A45D5B8FB3(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_back(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_BoneName_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0));
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_HumanName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1));
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E unmarshaledlimit_temp_2;
	memset((&unmarshaledlimit_temp_2), 0, sizeof(unmarshaledlimit_temp_2));
	unmarshaledlimit_temp_2 = marshaled.___limit_2;
	unmarshaled.___limit_2 = unmarshaledlimit_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_cleanup(HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com_back(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_BoneName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_BoneName_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_BoneName_0));
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_HumanName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_HumanName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_HumanName_1));
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E unmarshaledlimit_temp_2;
	memset((&unmarshaledlimit_temp_2), 0, sizeof(unmarshaledlimit_temp_2));
	unmarshaledlimit_temp_2 = marshaled.___limit_2;
	unmarshaled.___limit_2 = unmarshaledlimit_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com_cleanup(HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanBone_set_boneName_m22857CD9738A623436C8F7A31D51D1EBA4BD8F58 (HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___m_BoneName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BoneName_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void HumanBone_set_boneName_m22857CD9738A623436C8F7A31D51D1EBA4BD8F58_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8*>(__this + _offset);
	HumanBone_set_boneName_m22857CD9738A623436C8F7A31D51D1EBA4BD8F58(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanBone_set_humanName_m460C6620AEE45FC9601B8D05448DD6C397B12D4B (HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___m_HumanName_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HumanName_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void HumanBone_set_humanName_m460C6620AEE45FC9601B8D05448DD6C397B12D4B_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8*>(__this + _offset);
	HumanBone_set_humanName_m460C6620AEE45FC9601B8D05448DD6C397B12D4B(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif




// Conversion methods for marshalling of: UnityEngine.HumanDescription
IL2CPP_EXTERN_C void HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshal_pinvoke(const HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44& unmarshaled, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___human_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledhuman_Length = (unmarshaled.___human_0)->max_length;
		marshaled.___human_0 = il2cpp_codegen_marshal_allocate_array<HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke>(_unmarshaledhuman_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledhuman_Length); i++)
		{
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke((unmarshaled.___human_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___human_0)[i]);
		}
	}
	else
	{
		marshaled.___human_0 = NULL;
	}
	if (unmarshaled.___skeleton_1 != NULL)
	{
		il2cpp_array_size_t _unmarshaledskeleton_Length = (unmarshaled.___skeleton_1)->max_length;
		marshaled.___skeleton_1 = il2cpp_codegen_marshal_allocate_array<SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke>(_unmarshaledskeleton_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledskeleton_Length); i++)
		{
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke((unmarshaled.___skeleton_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___skeleton_1)[i]);
		}
	}
	else
	{
		marshaled.___skeleton_1 = NULL;
	}
	marshaled.___m_ArmTwist_2 = unmarshaled.___m_ArmTwist_2;
	marshaled.___m_ForeArmTwist_3 = unmarshaled.___m_ForeArmTwist_3;
	marshaled.___m_UpperLegTwist_4 = unmarshaled.___m_UpperLegTwist_4;
	marshaled.___m_LegTwist_5 = unmarshaled.___m_LegTwist_5;
	marshaled.___m_ArmStretch_6 = unmarshaled.___m_ArmStretch_6;
	marshaled.___m_LegStretch_7 = unmarshaled.___m_LegStretch_7;
	marshaled.___m_FeetSpacing_8 = unmarshaled.___m_FeetSpacing_8;
	marshaled.___m_GlobalScale_9 = unmarshaled.___m_GlobalScale_9;
	marshaled.___m_RootMotionBoneName_10 = il2cpp_codegen_marshal_string(unmarshaled.___m_RootMotionBoneName_10);
	marshaled.___m_HasTranslationDoF_11 = static_cast<int32_t>(unmarshaled.___m_HasTranslationDoF_11);
	marshaled.___m_HasExtraRoot_12 = static_cast<int32_t>(unmarshaled.___m_HasExtraRoot_12);
	marshaled.___m_SkeletonHasParents_13 = static_cast<int32_t>(unmarshaled.___m_SkeletonHasParents_13);
}
IL2CPP_EXTERN_C void HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshal_pinvoke_back(const HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_pinvoke& marshaled, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___human_0 != NULL)
	{
		if (unmarshaled.___human_0 == NULL)
		{
			unmarshaled.___human_0 = reinterpret_cast<HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*>((HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*)SZArrayNew(HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___human_0), (void*)reinterpret_cast<HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*>((HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*)SZArrayNew(HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___human_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 _marshaled____human_0_i__unmarshaled;
			memset((&_marshaled____human_0_i__unmarshaled), 0, sizeof(_marshaled____human_0_i__unmarshaled));
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_back((marshaled.___human_0)[i], _marshaled____human_0_i__unmarshaled);
			(unmarshaled.___human_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____human_0_i__unmarshaled);
		}
	}
	if (marshaled.___skeleton_1 != NULL)
	{
		if (unmarshaled.___skeleton_1 == NULL)
		{
			unmarshaled.___skeleton_1 = reinterpret_cast<SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*>((SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*)SZArrayNew(SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___skeleton_1), (void*)reinterpret_cast<SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*>((SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*)SZArrayNew(SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___skeleton_1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 _marshaled____skeleton_1_i__unmarshaled;
			memset((&_marshaled____skeleton_1_i__unmarshaled), 0, sizeof(_marshaled____skeleton_1_i__unmarshaled));
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_back((marshaled.___skeleton_1)[i], _marshaled____skeleton_1_i__unmarshaled);
			(unmarshaled.___skeleton_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____skeleton_1_i__unmarshaled);
		}
	}
	float unmarshaledm_ArmTwist_temp_2 = 0.0f;
	unmarshaledm_ArmTwist_temp_2 = marshaled.___m_ArmTwist_2;
	unmarshaled.___m_ArmTwist_2 = unmarshaledm_ArmTwist_temp_2;
	float unmarshaledm_ForeArmTwist_temp_3 = 0.0f;
	unmarshaledm_ForeArmTwist_temp_3 = marshaled.___m_ForeArmTwist_3;
	unmarshaled.___m_ForeArmTwist_3 = unmarshaledm_ForeArmTwist_temp_3;
	float unmarshaledm_UpperLegTwist_temp_4 = 0.0f;
	unmarshaledm_UpperLegTwist_temp_4 = marshaled.___m_UpperLegTwist_4;
	unmarshaled.___m_UpperLegTwist_4 = unmarshaledm_UpperLegTwist_temp_4;
	float unmarshaledm_LegTwist_temp_5 = 0.0f;
	unmarshaledm_LegTwist_temp_5 = marshaled.___m_LegTwist_5;
	unmarshaled.___m_LegTwist_5 = unmarshaledm_LegTwist_temp_5;
	float unmarshaledm_ArmStretch_temp_6 = 0.0f;
	unmarshaledm_ArmStretch_temp_6 = marshaled.___m_ArmStretch_6;
	unmarshaled.___m_ArmStretch_6 = unmarshaledm_ArmStretch_temp_6;
	float unmarshaledm_LegStretch_temp_7 = 0.0f;
	unmarshaledm_LegStretch_temp_7 = marshaled.___m_LegStretch_7;
	unmarshaled.___m_LegStretch_7 = unmarshaledm_LegStretch_temp_7;
	float unmarshaledm_FeetSpacing_temp_8 = 0.0f;
	unmarshaledm_FeetSpacing_temp_8 = marshaled.___m_FeetSpacing_8;
	unmarshaled.___m_FeetSpacing_8 = unmarshaledm_FeetSpacing_temp_8;
	float unmarshaledm_GlobalScale_temp_9 = 0.0f;
	unmarshaledm_GlobalScale_temp_9 = marshaled.___m_GlobalScale_9;
	unmarshaled.___m_GlobalScale_9 = unmarshaledm_GlobalScale_temp_9;
	unmarshaled.___m_RootMotionBoneName_10 = il2cpp_codegen_marshal_string_result(marshaled.___m_RootMotionBoneName_10);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_RootMotionBoneName_10), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_RootMotionBoneName_10));
	bool unmarshaledm_HasTranslationDoF_temp_11 = false;
	unmarshaledm_HasTranslationDoF_temp_11 = static_cast<bool>(marshaled.___m_HasTranslationDoF_11);
	unmarshaled.___m_HasTranslationDoF_11 = unmarshaledm_HasTranslationDoF_temp_11;
	bool unmarshaledm_HasExtraRoot_temp_12 = false;
	unmarshaledm_HasExtraRoot_temp_12 = static_cast<bool>(marshaled.___m_HasExtraRoot_12);
	unmarshaled.___m_HasExtraRoot_12 = unmarshaledm_HasExtraRoot_temp_12;
	bool unmarshaledm_SkeletonHasParents_temp_13 = false;
	unmarshaledm_SkeletonHasParents_temp_13 = static_cast<bool>(marshaled.___m_SkeletonHasParents_13);
	unmarshaled.___m_SkeletonHasParents_13 = unmarshaledm_SkeletonHasParents_temp_13;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanDescription
IL2CPP_EXTERN_C void HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshal_pinvoke_cleanup(HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_pinvoke& marshaled)
{
	if (marshaled.___human_0 != NULL)
	{
		const il2cpp_array_size_t marshaled____human_0_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____human_0_CleanupLoopCount); i++)
		{
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_cleanup((marshaled.___human_0)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___human_0);
		marshaled.___human_0 = NULL;
	}
	if (marshaled.___skeleton_1 != NULL)
	{
		const il2cpp_array_size_t marshaled____skeleton_1_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____skeleton_1_CleanupLoopCount); i++)
		{
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_cleanup((marshaled.___skeleton_1)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___skeleton_1);
		marshaled.___skeleton_1 = NULL;
	}
	il2cpp_codegen_marshal_free(marshaled.___m_RootMotionBoneName_10);
	marshaled.___m_RootMotionBoneName_10 = NULL;
}




// Conversion methods for marshalling of: UnityEngine.HumanDescription
IL2CPP_EXTERN_C void HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshal_com(const HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44& unmarshaled, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_com& marshaled)
{
	if (unmarshaled.___human_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledhuman_Length = (unmarshaled.___human_0)->max_length;
		marshaled.___human_0 = il2cpp_codegen_marshal_allocate_array<HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com>(_unmarshaledhuman_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledhuman_Length); i++)
		{
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com((unmarshaled.___human_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___human_0)[i]);
		}
	}
	else
	{
		marshaled.___human_0 = NULL;
	}
	if (unmarshaled.___skeleton_1 != NULL)
	{
		il2cpp_array_size_t _unmarshaledskeleton_Length = (unmarshaled.___skeleton_1)->max_length;
		marshaled.___skeleton_1 = il2cpp_codegen_marshal_allocate_array<SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com>(_unmarshaledskeleton_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledskeleton_Length); i++)
		{
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com((unmarshaled.___skeleton_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___skeleton_1)[i]);
		}
	}
	else
	{
		marshaled.___skeleton_1 = NULL;
	}
	marshaled.___m_ArmTwist_2 = unmarshaled.___m_ArmTwist_2;
	marshaled.___m_ForeArmTwist_3 = unmarshaled.___m_ForeArmTwist_3;
	marshaled.___m_UpperLegTwist_4 = unmarshaled.___m_UpperLegTwist_4;
	marshaled.___m_LegTwist_5 = unmarshaled.___m_LegTwist_5;
	marshaled.___m_ArmStretch_6 = unmarshaled.___m_ArmStretch_6;
	marshaled.___m_LegStretch_7 = unmarshaled.___m_LegStretch_7;
	marshaled.___m_FeetSpacing_8 = unmarshaled.___m_FeetSpacing_8;
	marshaled.___m_GlobalScale_9 = unmarshaled.___m_GlobalScale_9;
	marshaled.___m_RootMotionBoneName_10 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_RootMotionBoneName_10);
	marshaled.___m_HasTranslationDoF_11 = static_cast<int32_t>(unmarshaled.___m_HasTranslationDoF_11);
	marshaled.___m_HasExtraRoot_12 = static_cast<int32_t>(unmarshaled.___m_HasExtraRoot_12);
	marshaled.___m_SkeletonHasParents_13 = static_cast<int32_t>(unmarshaled.___m_SkeletonHasParents_13);
}
IL2CPP_EXTERN_C void HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshal_com_back(const HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_com& marshaled, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___human_0 != NULL)
	{
		if (unmarshaled.___human_0 == NULL)
		{
			unmarshaled.___human_0 = reinterpret_cast<HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*>((HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*)SZArrayNew(HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___human_0), (void*)reinterpret_cast<HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*>((HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*)SZArrayNew(HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___human_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 _marshaled____human_0_i__unmarshaled;
			memset((&_marshaled____human_0_i__unmarshaled), 0, sizeof(_marshaled____human_0_i__unmarshaled));
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com_back((marshaled.___human_0)[i], _marshaled____human_0_i__unmarshaled);
			(unmarshaled.___human_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____human_0_i__unmarshaled);
		}
	}
	if (marshaled.___skeleton_1 != NULL)
	{
		if (unmarshaled.___skeleton_1 == NULL)
		{
			unmarshaled.___skeleton_1 = reinterpret_cast<SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*>((SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*)SZArrayNew(SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___skeleton_1), (void*)reinterpret_cast<SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*>((SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*)SZArrayNew(SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___skeleton_1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 _marshaled____skeleton_1_i__unmarshaled;
			memset((&_marshaled____skeleton_1_i__unmarshaled), 0, sizeof(_marshaled____skeleton_1_i__unmarshaled));
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com_back((marshaled.___skeleton_1)[i], _marshaled____skeleton_1_i__unmarshaled);
			(unmarshaled.___skeleton_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____skeleton_1_i__unmarshaled);
		}
	}
	float unmarshaledm_ArmTwist_temp_2 = 0.0f;
	unmarshaledm_ArmTwist_temp_2 = marshaled.___m_ArmTwist_2;
	unmarshaled.___m_ArmTwist_2 = unmarshaledm_ArmTwist_temp_2;
	float unmarshaledm_ForeArmTwist_temp_3 = 0.0f;
	unmarshaledm_ForeArmTwist_temp_3 = marshaled.___m_ForeArmTwist_3;
	unmarshaled.___m_ForeArmTwist_3 = unmarshaledm_ForeArmTwist_temp_3;
	float unmarshaledm_UpperLegTwist_temp_4 = 0.0f;
	unmarshaledm_UpperLegTwist_temp_4 = marshaled.___m_UpperLegTwist_4;
	unmarshaled.___m_UpperLegTwist_4 = unmarshaledm_UpperLegTwist_temp_4;
	float unmarshaledm_LegTwist_temp_5 = 0.0f;
	unmarshaledm_LegTwist_temp_5 = marshaled.___m_LegTwist_5;
	unmarshaled.___m_LegTwist_5 = unmarshaledm_LegTwist_temp_5;
	float unmarshaledm_ArmStretch_temp_6 = 0.0f;
	unmarshaledm_ArmStretch_temp_6 = marshaled.___m_ArmStretch_6;
	unmarshaled.___m_ArmStretch_6 = unmarshaledm_ArmStretch_temp_6;
	float unmarshaledm_LegStretch_temp_7 = 0.0f;
	unmarshaledm_LegStretch_temp_7 = marshaled.___m_LegStretch_7;
	unmarshaled.___m_LegStretch_7 = unmarshaledm_LegStretch_temp_7;
	float unmarshaledm_FeetSpacing_temp_8 = 0.0f;
	unmarshaledm_FeetSpacing_temp_8 = marshaled.___m_FeetSpacing_8;
	unmarshaled.___m_FeetSpacing_8 = unmarshaledm_FeetSpacing_temp_8;
	float unmarshaledm_GlobalScale_temp_9 = 0.0f;
	unmarshaledm_GlobalScale_temp_9 = marshaled.___m_GlobalScale_9;
	unmarshaled.___m_GlobalScale_9 = unmarshaledm_GlobalScale_temp_9;
	unmarshaled.___m_RootMotionBoneName_10 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_RootMotionBoneName_10);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_RootMotionBoneName_10), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_RootMotionBoneName_10));
	bool unmarshaledm_HasTranslationDoF_temp_11 = false;
	unmarshaledm_HasTranslationDoF_temp_11 = static_cast<bool>(marshaled.___m_HasTranslationDoF_11);
	unmarshaled.___m_HasTranslationDoF_11 = unmarshaledm_HasTranslationDoF_temp_11;
	bool unmarshaledm_HasExtraRoot_temp_12 = false;
	unmarshaledm_HasExtraRoot_temp_12 = static_cast<bool>(marshaled.___m_HasExtraRoot_12);
	unmarshaled.___m_HasExtraRoot_12 = unmarshaledm_HasExtraRoot_temp_12;
	bool unmarshaledm_SkeletonHasParents_temp_13 = false;
	unmarshaledm_SkeletonHasParents_temp_13 = static_cast<bool>(marshaled.___m_SkeletonHasParents_13);
	unmarshaled.___m_SkeletonHasParents_13 = unmarshaledm_SkeletonHasParents_temp_13;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanDescription
IL2CPP_EXTERN_C void HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshal_com_cleanup(HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_com& marshaled)
{
	if (marshaled.___human_0 != NULL)
	{
		const il2cpp_array_size_t marshaled____human_0_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____human_0_CleanupLoopCount); i++)
		{
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com_cleanup((marshaled.___human_0)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___human_0);
		marshaled.___human_0 = NULL;
	}
	if (marshaled.___skeleton_1 != NULL)
	{
		const il2cpp_array_size_t marshaled____skeleton_1_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____skeleton_1_CleanupLoopCount); i++)
		{
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com_cleanup((marshaled.___skeleton_1)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___skeleton_1);
		marshaled.___skeleton_1 = NULL;
	}
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_RootMotionBoneName_10);
	marshaled.___m_RootMotionBoneName_10 = NULL;
}
// System.Void UnityEngine.HumanDescription::set_upperArmTwist(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanDescription_set_upperArmTwist_m4056390E30A30DCEB48D55D4E536F146E431E100 (HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_ArmTwist_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void HumanDescription_set_upperArmTwist_m4056390E30A30DCEB48D55D4E536F146E431E100_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44*>(__this + _offset);
	HumanDescription_set_upperArmTwist_m4056390E30A30DCEB48D55D4E536F146E431E100(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.HumanDescription::set_lowerArmTwist(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanDescription_set_lowerArmTwist_mD24F728854AC5AD545E09D6E74CDD0B7AD6DF139 (HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_ForeArmTwist_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void HumanDescription_set_lowerArmTwist_mD24F728854AC5AD545E09D6E74CDD0B7AD6DF139_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44*>(__this + _offset);
	HumanDescription_set_lowerArmTwist_mD24F728854AC5AD545E09D6E74CDD0B7AD6DF139(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.HumanDescription::set_upperLegTwist(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanDescription_set_upperLegTwist_m0552329018CAC469A2443BFBC89B83DFB5288782 (HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_UpperLegTwist_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void HumanDescription_set_upperLegTwist_m0552329018CAC469A2443BFBC89B83DFB5288782_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44*>(__this + _offset);
	HumanDescription_set_upperLegTwist_m0552329018CAC469A2443BFBC89B83DFB5288782(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.HumanDescription::set_lowerLegTwist(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanDescription_set_lowerLegTwist_m477F6F9AEC4E7E3F8D6FA72B05BCBF05C02FFB19 (HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_LegTwist_5 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void HumanDescription_set_lowerLegTwist_m477F6F9AEC4E7E3F8D6FA72B05BCBF05C02FFB19_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44*>(__this + _offset);
	HumanDescription_set_lowerLegTwist_m477F6F9AEC4E7E3F8D6FA72B05BCBF05C02FFB19(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.HumanDescription::set_armStretch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanDescription_set_armStretch_m52A43854E332057B62C07306CB1663CEFDB01C71 (HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_ArmStretch_6 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void HumanDescription_set_armStretch_m52A43854E332057B62C07306CB1663CEFDB01C71_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44*>(__this + _offset);
	HumanDescription_set_armStretch_m52A43854E332057B62C07306CB1663CEFDB01C71(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.HumanDescription::set_legStretch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanDescription_set_legStretch_m40D8FE0E122F5EF4143253814D732AF8413578DC (HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_LegStretch_7 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void HumanDescription_set_legStretch_m40D8FE0E122F5EF4143253814D732AF8413578DC_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44*>(__this + _offset);
	HumanDescription_set_legStretch_m40D8FE0E122F5EF4143253814D732AF8413578DC(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.HumanDescription::set_feetSpacing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanDescription_set_feetSpacing_mC0F12305CA30ADA53D08E987E52DE1611E9511D3 (HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_FeetSpacing_8 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void HumanDescription_set_feetSpacing_mC0F12305CA30ADA53D08E987E52DE1611E9511D3_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44*>(__this + _offset);
	HumanDescription_set_feetSpacing_mC0F12305CA30ADA53D08E987E52DE1611E9511D3(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.HumanDescription::set_hasTranslationDoF(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanDescription_set_hasTranslationDoF_mE5E5B11F3DC450708723875A5B1D7CFC340FD20E (HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___m_HasTranslationDoF_11 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void HumanDescription_set_hasTranslationDoF_mE5E5B11F3DC450708723875A5B1D7CFC340FD20E_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44*>(__this + _offset);
	HumanDescription_set_hasTranslationDoF_mE5E5B11F3DC450708723875A5B1D7CFC340FD20E(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Avatar UnityEngine.AvatarBuilder::BuildHumanAvatar(UnityEngine.GameObject,UnityEngine.HumanDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* AvatarBuilder_BuildHumanAvatar_m4BA84E1731C8C60C700A02764C183D5FA980A411 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44 ___humanDescription1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* V_1 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_3 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AvatarBuilder_BuildHumanAvatar_m4BA84E1731C8C60C700A02764C183D5FA980A411_RuntimeMethod_var)));
	}

IL_0012:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___go0;
		HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44 L_5 = ___humanDescription1;
		Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* L_6;
		L_6 = AvatarBuilder_BuildHumanAvatarInternal_m80FBC857C0DF3E09682437DDD5CBE240D9D7B90D(L_4, L_5, NULL);
		V_1 = L_6;
		goto IL_001c;
	}

IL_001c:
	{
		Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* L_7 = V_1;
		return L_7;
	}
}
// UnityEngine.Avatar UnityEngine.AvatarBuilder::BuildHumanAvatarInternal(UnityEngine.GameObject,UnityEngine.HumanDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* AvatarBuilder_BuildHumanAvatarInternal_m80FBC857C0DF3E09682437DDD5CBE240D9D7B90D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44 ___humanDescription1, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go0;
		Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* L_1;
		L_1 = AvatarBuilder_BuildHumanAvatarInternal_Injected_m1D682F8482BFE1BD78843F10FA092203609C4E85(L_0, (&___humanDescription1), NULL);
		return L_1;
	}
}
// UnityEngine.Avatar UnityEngine.AvatarBuilder::BuildGenericAvatar(UnityEngine.GameObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* AvatarBuilder_BuildGenericAvatar_mB4A1E1EE4D66D2FBBF31EAC8F05E061EE30EEF38 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, String_t* ___rootMotionTransformName1, const RuntimeMethod* method) 
{
	typedef Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* (*AvatarBuilder_BuildGenericAvatar_mB4A1E1EE4D66D2FBBF31EAC8F05E061EE30EEF38_ftn) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, String_t*);
	static AvatarBuilder_BuildGenericAvatar_mB4A1E1EE4D66D2FBBF31EAC8F05E061EE30EEF38_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AvatarBuilder_BuildGenericAvatar_mB4A1E1EE4D66D2FBBF31EAC8F05E061EE30EEF38_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AvatarBuilder::BuildGenericAvatar(UnityEngine.GameObject,System.String)");
	Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* icallRetVal = _il2cpp_icall_func(___go0, ___rootMotionTransformName1);
	return icallRetVal;
}
// UnityEngine.Avatar UnityEngine.AvatarBuilder::BuildHumanAvatarInternal_Injected(UnityEngine.GameObject,UnityEngine.HumanDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* AvatarBuilder_BuildHumanAvatarInternal_Injected_m1D682F8482BFE1BD78843F10FA092203609C4E85 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* ___humanDescription1, const RuntimeMethod* method) 
{
	typedef Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* (*AvatarBuilder_BuildHumanAvatarInternal_Injected_m1D682F8482BFE1BD78843F10FA092203609C4E85_ftn) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44*);
	static AvatarBuilder_BuildHumanAvatarInternal_Injected_m1D682F8482BFE1BD78843F10FA092203609C4E85_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AvatarBuilder_BuildHumanAvatarInternal_Injected_m1D682F8482BFE1BD78843F10FA092203609C4E85_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AvatarBuilder::BuildHumanAvatarInternal_Injected(UnityEngine.GameObject,UnityEngine.HumanDescription&)");
	Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* icallRetVal = _il2cpp_icall_func(___go0, ___humanDescription1);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Avatar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar__ctor_mA58012D9A6FD2A7BB88D05E58703B5619536E118 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Avatar::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Avatar_get_isValid_m89626D009C80028727A9C6F8F8F477C23934B94C (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, const RuntimeMethod* method) 
{
	typedef bool (*Avatar_get_isValid_m89626D009C80028727A9C6F8F8F477C23934B94C_ftn) (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F*);
	static Avatar_get_isValid_m89626D009C80028727A9C6F8F8F477C23934B94C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Avatar_get_isValid_m89626D009C80028727A9C6F8F8F477C23934B94C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Avatar::get_isValid()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.RuntimeAnimatorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeAnimatorController__ctor_m676D4538BB6C62314B256173C5F592EFCA16AAC8 (RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
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
// System.Void UnityEngine.Animation::set_clip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_set_clip_m631E1DE3F46E47782725C52E444CBB747EB83119 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animation_set_clip_m631E1DE3F46E47782725C52E444CBB747EB83119_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static Animation_set_clip_m631E1DE3F46E47782725C52E444CBB747EB83119_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_set_clip_m631E1DE3F46E47782725C52E444CBB747EB83119_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::set_clip(UnityEngine.AnimationClip)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animation::set_playAutomatically(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_set_playAutomatically_mF293663249E24B5D595F669515551F06309C96D0 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animation_set_playAutomatically_mF293663249E24B5D595F669515551F06309C96D0_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*, bool);
	static Animation_set_playAutomatically_mF293663249E24B5D595F669515551F06309C96D0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_set_playAutomatically_mF293663249E24B5D595F669515551F06309C96D0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::set_playAutomatically(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animation::set_wrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_set_wrapMode_m8910BC560328BD5541332A0737CE1F784B1B1600 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animation_set_wrapMode_m8910BC560328BD5541332A0737CE1F784B1B1600_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*, int32_t);
	static Animation_set_wrapMode_m8910BC560328BD5541332A0737CE1F784B1B1600_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_set_wrapMode_m8910BC560328BD5541332A0737CE1F784B1B1600_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::set_wrapMode(UnityEngine.WrapMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animation::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Stop_mE11F232FCFA0219EADD8080D7AD7CC626A536756 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) 
{
	typedef void (*Animation_Stop_mE11F232FCFA0219EADD8080D7AD7CC626A536756_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*);
	static Animation_Stop_mE11F232FCFA0219EADD8080D7AD7CC626A536756_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_Stop_mE11F232FCFA0219EADD8080D7AD7CC626A536756_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::Stop()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animation::Rewind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Rewind_m2DFAC82FDF28BE4531009381C5444C6A0977D51D (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) 
{
	typedef void (*Animation_Rewind_m2DFAC82FDF28BE4531009381C5444C6A0977D51D_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*);
	static Animation_Rewind_m2DFAC82FDF28BE4531009381C5444C6A0977D51D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_Rewind_m2DFAC82FDF28BE4531009381C5444C6A0977D51D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::Rewind()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animation::Sample()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Sample_m651BFFA298E1B72385B0DF85240AFFB8B7778E9C (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) 
{
	typedef void (*Animation_Sample_m651BFFA298E1B72385B0DF85240AFFB8B7778E9C_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*);
	static Animation_Sample_m651BFFA298E1B72385B0DF85240AFFB8B7778E9C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_Sample_m651BFFA298E1B72385B0DF85240AFFB8B7778E9C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::Sample()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Animation::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_get_isPlaying_mF0C19818820AF3FC7BD4B335B86D11043A64F3F9 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animation_get_isPlaying_mF0C19818820AF3FC7BD4B335B86D11043A64F3F9_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*);
	static Animation_get_isPlaying_mF0C19818820AF3FC7BD4B335B86D11043A64F3F9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_get_isPlaying_mF0C19818820AF3FC7BD4B335B86D11043A64F3F9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::get_isPlaying()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* Animation_get_Item_m60997A8CDE7F415FC55FBB0D6D3F28339C4B32E8 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* V_0 = NULL;
	{
		String_t* L_0 = ___name0;
		AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_1;
		L_1 = Animation_GetState_mFE0B2A4F4BD7F3DDE2CA699D6036607F0E7259FB(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m717560D2F561D9E12583AB3B435E6BC996448C3E (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = Animation_Play_m5E86FA3D4C8C7F144565B6E3962FD5CF3E51F1C0(__this, 0, NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m5E86FA3D4C8C7F144565B6E3962FD5CF3E51F1C0 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, int32_t ___mode0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___mode0;
		bool L_1;
		L_1 = Animation_PlayDefaultAnimation_mD2F0091CD4214603FE368C658A3DB28A53D6D48F(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_PlayDefaultAnimation_mD2F0091CD4214603FE368C658A3DB28A53D6D48F (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, int32_t ___mode0, const RuntimeMethod* method) 
{
	typedef bool (*Animation_PlayDefaultAnimation_mD2F0091CD4214603FE368C658A3DB28A53D6D48F_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*, int32_t);
	static Animation_PlayDefaultAnimation_mD2F0091CD4214603FE368C658A3DB28A53D6D48F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_PlayDefaultAnimation_mD2F0091CD4214603FE368C658A3DB28A53D6D48F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___mode0);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animation::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m95CC43633DC2B587AB3A0D1FF5F93B863A5440D5 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___animation0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		String_t* L_0 = ___animation0;
		bool L_1;
		L_1 = Animation_Play_m894966605BBBE66B5D4AEEB52688BAFD7DA7DAA3(__this, L_0, 0, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m894966605BBBE66B5D4AEEB52688BAFD7DA7DAA3 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___animation0, int32_t ___mode1, const RuntimeMethod* method) 
{
	typedef bool (*Animation_Play_m894966605BBBE66B5D4AEEB52688BAFD7DA7DAA3_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*, String_t*, int32_t);
	static Animation_Play_m894966605BBBE66B5D4AEEB52688BAFD7DA7DAA3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_Play_m894966605BBBE66B5D4AEEB52688BAFD7DA7DAA3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___animation0, ___mode1);
	return icallRetVal;
}
// System.Void UnityEngine.Animation::CrossFade(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_CrossFade_mFE7ECBC7CB8A95ADE8E1EDC3E668D014BF9B12C0 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___animation0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___animation0;
		Animation_CrossFade_m0DFC263F0CA45915C28C648B652A4903AE5DB9BA(__this, L_0, (0.300000012f), NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_CrossFade_m0DFC263F0CA45915C28C648B652A4903AE5DB9BA (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___animation0, float ___fadeLength1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___animation0;
		float L_1 = ___fadeLength1;
		Animation_CrossFade_mA2C79723F05536F1A418DF43A06E7BA9F5D07EC3(__this, L_0, L_1, 0, NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_CrossFade_mA2C79723F05536F1A418DF43A06E7BA9F5D07EC3 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___animation0, float ___fadeLength1, int32_t ___mode2, const RuntimeMethod* method) 
{
	typedef void (*Animation_CrossFade_mA2C79723F05536F1A418DF43A06E7BA9F5D07EC3_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*, String_t*, float, int32_t);
	static Animation_CrossFade_mA2C79723F05536F1A418DF43A06E7BA9F5D07EC3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_CrossFade_mA2C79723F05536F1A418DF43A06E7BA9F5D07EC3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)");
	_il2cpp_icall_func(__this, ___animation0, ___fadeLength1, ___mode2);
}
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_AddClip_m10EDEAA1060E0356379BFE9AB24F97C9EBBED1A3 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip0, String_t* ___newName1, const RuntimeMethod* method) 
{
	{
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_0 = ___clip0;
		String_t* L_1 = ___newName1;
		Animation_AddClip_m0DBAB71E23EA248D6A18C705B8AF0EA140D2FFDF(__this, L_0, L_1, ((int32_t)-2147483648LL), ((int32_t)2147483647LL), NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_AddClip_m0DBAB71E23EA248D6A18C705B8AF0EA140D2FFDF (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip0, String_t* ___newName1, int32_t ___firstFrame2, int32_t ___lastFrame3, const RuntimeMethod* method) 
{
	{
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_0 = ___clip0;
		String_t* L_1 = ___newName1;
		int32_t L_2 = ___firstFrame2;
		int32_t L_3 = ___lastFrame3;
		Animation_AddClip_m87A5BE2BFAC7F12D7C0FE5D954E657FDB8B4A7F6(__this, L_0, L_1, L_2, L_3, (bool)0, NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_AddClip_m87A5BE2BFAC7F12D7C0FE5D954E657FDB8B4A7F6 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip0, String_t* ___newName1, int32_t ___firstFrame2, int32_t ___lastFrame3, bool ___addLoopFrame4, const RuntimeMethod* method) 
{
	typedef void (*Animation_AddClip_m87A5BE2BFAC7F12D7C0FE5D954E657FDB8B4A7F6_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, String_t*, int32_t, int32_t, bool);
	static Animation_AddClip_m87A5BE2BFAC7F12D7C0FE5D954E657FDB8B4A7F6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_AddClip_m87A5BE2BFAC7F12D7C0FE5D954E657FDB8B4A7F6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___clip0, ___newName1, ___firstFrame2, ___lastFrame3, ___addLoopFrame4);
}
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Animation_GetEnumerator_m247062F212D9C579DAE25D9BC86E4921DC5719E6 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* L_0 = (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530*)il2cpp_codegen_object_new(Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Enumerator__ctor_mF3FB66377864673B8DAF14A36DB6D069B98A92F4(L_0, __this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* Animation_GetState_mFE0B2A4F4BD7F3DDE2CA699D6036607F0E7259FB (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	typedef AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* (*Animation_GetState_mFE0B2A4F4BD7F3DDE2CA699D6036607F0E7259FB_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*, String_t*);
	static Animation_GetState_mFE0B2A4F4BD7F3DDE2CA699D6036607F0E7259FB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetState_mFE0B2A4F4BD7F3DDE2CA699D6036607F0E7259FB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetState(System.String)");
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* icallRetVal = _il2cpp_icall_func(__this, ___name0);
	return icallRetVal;
}
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	typedef AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* (*Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*, int32_t);
	static Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateAtIndex(System.Int32)");
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* icallRetVal = _il2cpp_icall_func(__this, ___index0);
	return icallRetVal;
}
// System.Int32 UnityEngine.Animation::GetStateCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*);
	static Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.AnimationClip UnityEngine.Animation::GetClip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* Animation_GetClip_m566FFEC9EA0EA79DB1BAC0B79F37CD6A3A85C296 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* V_0 = NULL;
	bool V_1 = false;
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* V_2 = NULL;
	{
		String_t* L_0 = ___name0;
		AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_1;
		L_1 = Animation_GetState_mFE0B2A4F4BD7F3DDE2CA699D6036607F0E7259FB(__this, L_0, NULL);
		V_0 = L_1;
		AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_2 = V_0;
		bool L_3;
		L_3 = TrackedReference_op_Implicit_m9CABD88EF1D3555731863047DD49B549685566B0(L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_5 = V_0;
		NullCheck(L_5);
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_6;
		L_6 = AnimationState_get_clip_mDF1793A0E862BE0534E3099FAE98CACCE8F6BF61(L_5, NULL);
		V_2 = L_6;
		goto IL_0020;
	}

IL_001c:
	{
		V_2 = (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*)NULL;
		goto IL_0020;
	}

IL_0020:
	{
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_7 = V_2;
		return L_7;
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
// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF3FB66377864673B8DAF14A36DB6D069B98A92F4 (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* __this, Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___outer0, const RuntimeMethod* method) 
{
	{
		__this->___m_CurrentIndex_1 = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0 = ___outer0;
		__this->___m_Outer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Outer_0), (void*)L_0);
		return;
	}
}
// System.Object UnityEngine.Animation/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m4A17FE0020D4C8856EFC8EF531B99723FFB2B9DF (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0 = __this->___m_Outer_0;
		int32_t L_1 = __this->___m_CurrentIndex_1;
		NullCheck(L_0);
		AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_2;
		L_2 = Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Animation/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m82477C155D4F7CF98317C0EEC9F5070D196AA671 (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0 = __this->___m_Outer_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = __this->___m_CurrentIndex_1;
		__this->___m_CurrentIndex_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = __this->___m_CurrentIndex_1;
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.Animation/Enumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m687381C45ECBBD052447FAC06ECE9760FF23DA63 (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_CurrentIndex_1 = (-1);
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
// System.Void UnityEngine.AnimationState::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_set_time_m0310DBBC8065675B653D4A34019AD7CD748C4D74 (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*AnimationState_set_time_m0310DBBC8065675B653D4A34019AD7CD748C4D74_ftn) (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*, float);
	static AnimationState_set_time_m0310DBBC8065675B653D4A34019AD7CD748C4D74_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_time_m0310DBBC8065675B653D4A34019AD7CD748C4D74_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_time(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AnimationState::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationState_get_normalizedTime_m98D373BA809DD9486D7042CE236198C0C69007E3 (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, const RuntimeMethod* method) 
{
	typedef float (*AnimationState_get_normalizedTime_m98D373BA809DD9486D7042CE236198C0C69007E3_ftn) (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*);
	static AnimationState_get_normalizedTime_m98D373BA809DD9486D7042CE236198C0C69007E3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_normalizedTime_m98D373BA809DD9486D7042CE236198C0C69007E3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_normalizedTime()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.AnimationState::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationState_get_length_m67C34EA47A3715AE3B9B0B91816E31A87C8AE11C (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, const RuntimeMethod* method) 
{
	typedef float (*AnimationState_get_length_m67C34EA47A3715AE3B9B0B91816E31A87C8AE11C_ftn) (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*);
	static AnimationState_get_length_m67C34EA47A3715AE3B9B0B91816E31A87C8AE11C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_length_m67C34EA47A3715AE3B9B0B91816E31A87C8AE11C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_length()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.AnimationClip UnityEngine.AnimationState::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimationState_get_clip_mDF1793A0E862BE0534E3099FAE98CACCE8F6BF61 (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, const RuntimeMethod* method) 
{
	typedef AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* (*AnimationState_get_clip_mDF1793A0E862BE0534E3099FAE98CACCE8F6BF61_ftn) (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*);
	static AnimationState_get_clip_mDF1793A0E862BE0534E3099FAE98CACCE8F6BF61_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_clip_mDF1793A0E862BE0534E3099FAE98CACCE8F6BF61_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_clip()");
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimationState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState__ctor_mB18C82530ADA40EE3BC245AAB0673941D78B779E (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, const RuntimeMethod* method) 
{
	{
		TrackedReference__ctor_m0E498FD0AD5807B7B91CB0005170E522DAE3616A(__this, NULL);
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


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke(const AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174& unmarshaled, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_back(const AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke& marshaled, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174& unmarshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_cleanup(AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_com(const AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174& unmarshaled, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com& marshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_com_back(const AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com& marshaled, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174& unmarshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_com_cleanup(AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.AnimationEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationEvent__ctor_mBC954085B1D18B436D08E7ADE3458B91E208F3B2 (AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___m_Time_0 = (0.0f);
		__this->___m_FunctionName_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FunctionName_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___m_StringParameter_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StringParameter_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___m_ObjectReferenceParameter_3 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReferenceParameter_3), (void*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL);
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StateSender_8), (void*)(AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*)NULL);
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
// System.Void UnityEngine.Motion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Motion__ctor_mB6190858E566BFA1B80D2E94B65CD27920A49443 (Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
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
// System.Int32 UnityEngine.HumanTrait::GetBoneIndexFromMono(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925 (int32_t ___humanId0, const RuntimeMethod* method) 
{
	typedef int32_t (*HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925_ftn) (int32_t);
	static HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.HumanTrait::GetBoneIndexFromMono(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___humanId0);
	return icallRetVal;
}
// System.String[] UnityEngine.HumanTrait::get_BoneName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* HumanTrait_get_BoneName_mE16F3C9E1E21791A44E44F414CD2AABB54C13E2C (const RuntimeMethod* method) 
{
	typedef StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*HumanTrait_get_BoneName_mE16F3C9E1E21791A44E44F414CD2AABB54C13E2C_ftn) ();
	static HumanTrait_get_BoneName_mE16F3C9E1E21791A44E44F414CD2AABB54C13E2C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HumanTrait_get_BoneName_mE16F3C9E1E21791A44E44F414CD2AABB54C13E2C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.HumanTrait::get_BoneName()");
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Boolean UnityEngine.HumanTrait::RequiredBone(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HumanTrait_RequiredBone_m11642C7E78DDE522012CEFFE18622F3ECD069684 (int32_t ___i0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___i0;
		int32_t L_1;
		L_1 = HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925(L_0, NULL);
		bool L_2;
		L_2 = HumanTrait_Internal_RequiredBone_m2ACFEDF683A544288BEF76DF0A7744751194997C(L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.HumanTrait::Internal_RequiredBone(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HumanTrait_Internal_RequiredBone_m2ACFEDF683A544288BEF76DF0A7744751194997C (int32_t ___i0, const RuntimeMethod* method) 
{
	typedef bool (*HumanTrait_Internal_RequiredBone_m2ACFEDF683A544288BEF76DF0A7744751194997C_ftn) (int32_t);
	static HumanTrait_Internal_RequiredBone_m2ACFEDF683A544288BEF76DF0A7744751194997C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HumanTrait_Internal_RequiredBone_m2ACFEDF683A544288BEF76DF0A7744751194997C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.HumanTrait::Internal_RequiredBone(System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(___i0);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke(const AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD& unmarshaled, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_pinvoke& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_HasFixedDuration_3 = static_cast<int32_t>(unmarshaled.___m_HasFixedDuration_3);
	marshaled.___m_Duration_4 = unmarshaled.___m_Duration_4;
	marshaled.___m_NormalizedTime_5 = unmarshaled.___m_NormalizedTime_5;
	marshaled.___m_AnyState_6 = static_cast<int32_t>(unmarshaled.___m_AnyState_6);
	marshaled.___m_TransitionType_7 = unmarshaled.___m_TransitionType_7;
}
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_back(const AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_pinvoke& marshaled, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD& unmarshaled)
{
	int32_t unmarshaledm_FullPath_temp_0 = 0;
	unmarshaledm_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_FullPath_0 = unmarshaledm_FullPath_temp_0;
	int32_t unmarshaledm_UserName_temp_1 = 0;
	unmarshaledm_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_UserName_1 = unmarshaledm_UserName_temp_1;
	int32_t unmarshaledm_Name_temp_2 = 0;
	unmarshaledm_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.___m_Name_2 = unmarshaledm_Name_temp_2;
	bool unmarshaledm_HasFixedDuration_temp_3 = false;
	unmarshaledm_HasFixedDuration_temp_3 = static_cast<bool>(marshaled.___m_HasFixedDuration_3);
	unmarshaled.___m_HasFixedDuration_3 = unmarshaledm_HasFixedDuration_temp_3;
	float unmarshaledm_Duration_temp_4 = 0.0f;
	unmarshaledm_Duration_temp_4 = marshaled.___m_Duration_4;
	unmarshaled.___m_Duration_4 = unmarshaledm_Duration_temp_4;
	float unmarshaledm_NormalizedTime_temp_5 = 0.0f;
	unmarshaledm_NormalizedTime_temp_5 = marshaled.___m_NormalizedTime_5;
	unmarshaled.___m_NormalizedTime_5 = unmarshaledm_NormalizedTime_temp_5;
	bool unmarshaledm_AnyState_temp_6 = false;
	unmarshaledm_AnyState_temp_6 = static_cast<bool>(marshaled.___m_AnyState_6);
	unmarshaled.___m_AnyState_6 = unmarshaledm_AnyState_temp_6;
	int32_t unmarshaledm_TransitionType_temp_7 = 0;
	unmarshaledm_TransitionType_temp_7 = marshaled.___m_TransitionType_7;
	unmarshaled.___m_TransitionType_7 = unmarshaledm_TransitionType_temp_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_cleanup(AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_com(const AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD& unmarshaled, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_com& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_HasFixedDuration_3 = static_cast<int32_t>(unmarshaled.___m_HasFixedDuration_3);
	marshaled.___m_Duration_4 = unmarshaled.___m_Duration_4;
	marshaled.___m_NormalizedTime_5 = unmarshaled.___m_NormalizedTime_5;
	marshaled.___m_AnyState_6 = static_cast<int32_t>(unmarshaled.___m_AnyState_6);
	marshaled.___m_TransitionType_7 = unmarshaled.___m_TransitionType_7;
}
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_com_back(const AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_com& marshaled, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD& unmarshaled)
{
	int32_t unmarshaledm_FullPath_temp_0 = 0;
	unmarshaledm_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_FullPath_0 = unmarshaledm_FullPath_temp_0;
	int32_t unmarshaledm_UserName_temp_1 = 0;
	unmarshaledm_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_UserName_1 = unmarshaledm_UserName_temp_1;
	int32_t unmarshaledm_Name_temp_2 = 0;
	unmarshaledm_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.___m_Name_2 = unmarshaledm_Name_temp_2;
	bool unmarshaledm_HasFixedDuration_temp_3 = false;
	unmarshaledm_HasFixedDuration_temp_3 = static_cast<bool>(marshaled.___m_HasFixedDuration_3);
	unmarshaled.___m_HasFixedDuration_3 = unmarshaledm_HasFixedDuration_temp_3;
	float unmarshaledm_Duration_temp_4 = 0.0f;
	unmarshaledm_Duration_temp_4 = marshaled.___m_Duration_4;
	unmarshaled.___m_Duration_4 = unmarshaledm_Duration_temp_4;
	float unmarshaledm_NormalizedTime_temp_5 = 0.0f;
	unmarshaledm_NormalizedTime_temp_5 = marshaled.___m_NormalizedTime_5;
	unmarshaled.___m_NormalizedTime_5 = unmarshaledm_NormalizedTime_temp_5;
	bool unmarshaledm_AnyState_temp_6 = false;
	unmarshaledm_AnyState_temp_6 = static_cast<bool>(marshaled.___m_AnyState_6);
	unmarshaled.___m_AnyState_6 = unmarshaledm_AnyState_temp_6;
	int32_t unmarshaledm_TransitionType_temp_7 = 0;
	unmarshaledm_TransitionType_temp_7 = marshaled.___m_TransitionType_7;
	unmarshaled.___m_TransitionType_7 = unmarshaledm_TransitionType_temp_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_com_cleanup(AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_com& marshaled)
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
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		float L_1 = ___value1;
		Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, float ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___id0;
		float L_1 = ___value1;
		Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetInteger(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_mE823EC7492A7FB266FA723C168226D17085DF3E8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___id0;
		int32_t L_1 = ___value1;
		Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868(__this, L_0, NULL);
		return;
	}
}
// System.Int32 UnityEngine.Animator::GetLayerIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___layerName0, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetLayerIndex(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___layerName0);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, float ___weight1, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float);
	static Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___layerIndex0, ___weight1);
}
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransform(UnityEngine.HumanBodyBones)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___humanBoneId0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___humanBoneId0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___humanBoneId0;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)((int32_t)55)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		V_1 = ((int32_t)55);
		Il2CppFakeBox<int32_t> L_3(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HumanBodyBones_tA2A904890A05ABCFFAB7E119244E97C5EA9807E6_il2cpp_TypeInfo_var)), (&V_1));
		String_t* L_4;
		L_4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_3), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00F97321929E0D7989E72D633D157BD761DD173A)), L_4, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56_RuntimeMethod_var)));
	}

IL_0034:
	{
		int32_t L_7 = ___humanBoneId0;
		int32_t L_8;
		L_8 = HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857(__this, L_8, NULL);
		V_2 = L_9;
		goto IL_0043;
	}

IL_0043:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_2;
		return L_10;
	}
}
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransformInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___humanBoneId0, const RuntimeMethod* method) 
{
	typedef Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoneTransformInternal(System.Int32)");
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* icallRetVal = _il2cpp_icall_func(__this, ___humanBoneId0);
	return icallRetVal;
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* Animator_get_runtimeAnimatorController_mE10F46F893A630D1AE846EF66DC2769E3ECE5AB8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* (*Animator_get_runtimeAnimatorController_mE10F46F893A630D1AE846EF66DC2769E3ECE5AB8_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_runtimeAnimatorController_mE10F46F893A630D1AE846EF66DC2769E3ECE5AB8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_mE10F46F893A630D1AE846EF66DC2769E3ECE5AB8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254*);
	static Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Animator::get_hasBoundPlayables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_hasBoundPlayables_mA5A6132C03593851FE80D8E7490191E051E5A1C9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_hasBoundPlayables_mA5A6132C03593851FE80D8E7490191E051E5A1C9_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_hasBoundPlayables_mA5A6132C03593851FE80D8E7490191E051E5A1C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasBoundPlayables_mA5A6132C03593851FE80D8E7490191E051E5A1C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasBoundPlayables()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A (String_t* ___name0, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A_ftn) (String_t*);
	static Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(___name0);
	return icallRetVal;
}
// UnityEngine.Avatar UnityEngine.Animator::get_avatar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* Animator_get_avatar_m01E445FC754BC6F4A39639EAF68D3954580EAA67 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* (*Animator_get_avatar_m01E445FC754BC6F4A39639EAF68D3954580EAA67_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_avatar_m01E445FC754BC6F4A39639EAF68D3954580EAA67_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_avatar_m01E445FC754BC6F4A39639EAF68D3954580EAA67_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_avatar()");
	Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_avatar(UnityEngine.Avatar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_avatar_mF24D7962A24C1EBF3B949E712DDA24DB11B5DAC5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_avatar_mF24D7962A24C1EBF3B949E712DDA24DB11B5DAC5_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F*);
	static Animator_set_avatar_mF24D7962A24C1EBF3B949E712DDA24DB11B5DAC5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_avatar_mF24D7962A24C1EBF3B949E712DDA24DB11B5DAC5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_avatar(UnityEngine.Avatar)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*, float);
	static Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatString(System.String,System.Single)");
	_il2cpp_icall_func(__this, ___name0, ___value1);
}
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, float ___value1, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float);
	static Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___id0, ___value1);
}
// System.Void UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, int32_t);
	static Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___id0, ___value1);
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	typedef void (*Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AnimationClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip__ctor_m3F9B3DE671547640479DB976423EEBC689D26F79 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	{
		Motion__ctor_mB6190858E566BFA1B80D2E94B65CD27920A49443(__this, NULL);
		AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___self0, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)");
	_il2cpp_icall_func(___self0);
}
// System.Void UnityEngine.AnimationClip::SampleAnimation(UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_SampleAnimation_mD9BD020CC922D1E818D0C2163D543CF7BBAF6488 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, float ___time1, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go0;
		float L_1 = ___time1;
		int32_t L_2;
		L_2 = AnimationClip_get_wrapMode_m7D79D3FE7785D25ECCD8C16ADF289654E9BCAC97(__this, NULL);
		AnimationClip_SampleAnimation_m1707BCA02475EBB318BA0F12C857CF5503C30904(L_0, __this, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::SampleAnimation(UnityEngine.GameObject,UnityEngine.AnimationClip,System.Single,UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_SampleAnimation_m1707BCA02475EBB318BA0F12C857CF5503C30904 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip1, float ___inTime2, int32_t ___wrapMode3, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_SampleAnimation_m1707BCA02475EBB318BA0F12C857CF5503C30904_ftn) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, float, int32_t);
	static AnimationClip_SampleAnimation_m1707BCA02475EBB318BA0F12C857CF5503C30904_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_SampleAnimation_m1707BCA02475EBB318BA0F12C857CF5503C30904_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::SampleAnimation(UnityEngine.GameObject,UnityEngine.AnimationClip,System.Single,UnityEngine.WrapMode)");
	_il2cpp_icall_func(___go0, ___clip1, ___inTime2, ___wrapMode3);
}
// System.Single UnityEngine.AnimationClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationClip_get_length_mAD91A1C134662285F26886489AC2D8E0EC79AF41 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef float (*AnimationClip_get_length_mAD91A1C134662285F26886489AC2D8E0EC79AF41_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_length_mAD91A1C134662285F26886489AC2D8E0EC79AF41_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_length_mAD91A1C134662285F26886489AC2D8E0EC79AF41_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_length()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.AnimationClip::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationClip_get_frameRate_mBECE2AAD43501FB8CE2E5F4302BD2989066AF242 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef float (*AnimationClip_get_frameRate_mBECE2AAD43501FB8CE2E5F4302BD2989066AF242_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_frameRate_mBECE2AAD43501FB8CE2E5F4302BD2989066AF242_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_frameRate_mBECE2AAD43501FB8CE2E5F4302BD2989066AF242_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_frameRate()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimationClip::set_frameRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_set_frameRate_m68E3FF5D77738194EFEC9279F1B3FB1FCFEEED74 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_set_frameRate_m68E3FF5D77738194EFEC9279F1B3FB1FCFEEED74_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, float);
	static AnimationClip_set_frameRate_m68E3FF5D77738194EFEC9279F1B3FB1FCFEEED74_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_set_frameRate_m68E3FF5D77738194EFEC9279F1B3FB1FCFEEED74_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::set_frameRate(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AnimationClip::SetCurve(System.String,System.Type,System.String,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_SetCurve_mEAB88CD0C8F623EA0DEF312CF8D39DE9EB2E1555 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, String_t* ___relativePath0, Type_t* ___type1, String_t* ___propertyName2, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve3, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_SetCurve_mEAB88CD0C8F623EA0DEF312CF8D39DE9EB2E1555_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, String_t*, Type_t*, String_t*, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*);
	static AnimationClip_SetCurve_mEAB88CD0C8F623EA0DEF312CF8D39DE9EB2E1555_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_SetCurve_mEAB88CD0C8F623EA0DEF312CF8D39DE9EB2E1555_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::SetCurve(System.String,System.Type,System.String,UnityEngine.AnimationCurve)");
	_il2cpp_icall_func(__this, ___relativePath0, ___type1, ___propertyName2, ___curve3);
}
// System.Void UnityEngine.AnimationClip::EnsureQuaternionContinuity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_EnsureQuaternionContinuity_m9D02889DCA683AA8B285BD6A26A44B8FD615A5EF (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_EnsureQuaternionContinuity_m9D02889DCA683AA8B285BD6A26A44B8FD615A5EF_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_EnsureQuaternionContinuity_m9D02889DCA683AA8B285BD6A26A44B8FD615A5EF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_EnsureQuaternionContinuity_m9D02889DCA683AA8B285BD6A26A44B8FD615A5EF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::EnsureQuaternionContinuity()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.WrapMode UnityEngine.AnimationClip::get_wrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationClip_get_wrapMode_m7D79D3FE7785D25ECCD8C16ADF289654E9BCAC97 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AnimationClip_get_wrapMode_m7D79D3FE7785D25ECCD8C16ADF289654E9BCAC97_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_wrapMode_m7D79D3FE7785D25ECCD8C16ADF289654E9BCAC97_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_wrapMode_m7D79D3FE7785D25ECCD8C16ADF289654E9BCAC97_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_wrapMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimationClip::set_legacy(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_set_legacy_mA24DEDCB86CB9439005B71B6916C09C751731377 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_set_legacy_mA24DEDCB86CB9439005B71B6916C09C751731377_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, bool);
	static AnimationClip_set_legacy_mA24DEDCB86CB9439005B71B6916C09C751731377_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_set_legacy_mA24DEDCB86CB9439005B71B6916C09C751731377_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::set_legacy(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateEnter_mB618EFE75A50CBAA3EE6471E64A3E2CA2A2C90FD (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateUpdate_mC1A83A4F693AF3AB51BC592A0CE525CE4F320D6B (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateExit_mC113F0B2F53847F9A6755B82D0AC53C971171CFD (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMove_m7229D5EFBA432665B9046FC3C21D463FFD281978 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateIK_m310C17694D8D1B9D60D549259A39837F22FD3240 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineEnter_m0CEFF9E4946BFDC4F7066BEB4C961169DBC5073F (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, int32_t ___stateMachinePathHash1, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineExit_m384B808E3961C6C2C375DF7487EF2B49E44E6CD7 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, int32_t ___stateMachinePathHash1, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateEnter_m491D81A9A64DE4AE02415A5909B74AE947EAE1B9 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___controller3, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateUpdate_mF3130BE7BDD7C8B2470303FB1986A336E47CC98C (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___controller3, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateExit_mD47A506ACE251A6341115CBE5607D05C01747127 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___controller3, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMove_m1A01C10E754426572C7BBA7AA13044FDA372FDFC (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___controller3, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateIK_mCE3B4C71868B564EE6BE4B8663535058705C3B72 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___controller3, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineEnter_m0399B12419A4F990F41BD589C833E2D2C0076762 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, int32_t ___stateMachinePathHash1, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___controller2, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineExit_mF8BB1A8851B0699FC1D85F538E16EF12C08BBB93 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, int32_t ___stateMachinePathHash1, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___controller2, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour__ctor_m9663A75D1016E16D7E3A48E2D4E6466A041A00AB (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// UnityEngine.Animations.AnimationClipPlayable UnityEngine.Playables.AnimationPlayableUtilities::PlayClip(UnityEngine.Animator,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 AnimationPlayableUtilities_PlayClip_mC82BC4ABA6B41BDFAC321707E019FDDF713CFC0F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip1, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputExtensions_SetSourcePlayable_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_TisAnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969_m389C7055BB3E25FF8CC06AF5A9F6EE1BE821B43D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A0B8F8C43A11ED8E1400C04557C40AC52384963);
		s_Il2CppMethodInitialized = true;
	}
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 V_1;
	memset((&V_1), 0, sizeof(V_1));
	AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* L_0 = ___graph2;
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_1;
		L_1 = PlayableGraph_Create_mCAFF6F9DA9B2E26ABA61692903EF3F454608A4A7(NULL);
		*(PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*)L_0 = L_1;
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* L_2 = ___graph2;
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_3 = (*(PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*)L_2);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = ___animator0;
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_5;
		L_5 = AnimationPlayableOutput_Create_m65847A70F6C74854387814C5B1D4C281B6CCCDC4(L_3, _stringLiteral9A0B8F8C43A11ED8E1400C04557C40AC52384963, L_4, NULL);
		V_0 = L_5;
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* L_6 = ___graph2;
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_7 = (*(PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*)L_6);
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_8 = ___clip1;
		AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 L_9;
		L_9 = AnimationClipPlayable_Create_m034A4A30AC2642E675B95A0A7C3C384F533F5C1A(L_7, L_8, NULL);
		V_1 = L_9;
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_10 = V_0;
		AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 L_11 = V_1;
		PlayableOutputExtensions_SetSourcePlayable_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_TisAnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969_m389C7055BB3E25FF8CC06AF5A9F6EE1BE821B43D(L_10, L_11, PlayableOutputExtensions_SetSourcePlayable_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_TisAnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969_m389C7055BB3E25FF8CC06AF5A9F6EE1BE821B43D_RuntimeMethod_var);
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* L_12 = ___graph2;
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_13 = (*(PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*)L_12);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = ___animator0;
		AnimationPlayableGraphExtensions_SyncUpdateAndTimeMode_mBF6173908DA7C04947C405230A1D66F108E7F493(L_13, L_14, NULL);
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* L_15 = ___graph2;
		PlayableGraph_Play_mE2A27205C369339BB8B39B9CCBF5F5EE9B26F9A6(L_15, NULL);
		AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 L_16 = V_1;
		V_2 = L_16;
		goto IL_004b;
	}

IL_004b:
	{
		AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 L_17 = V_2;
		return L_17;
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
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___handle0), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971((&___handle0), PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral98C704D69BD1A288ED31DEE4ED4E50097A2D7018)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___handle0;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method)
{
	AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD*>(__this + _offset);
	AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::Equals(UnityEngine.Animations.AnimationRemoveScalePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_Equals_m0ACDD59B80103591DA8E84CB387FB10778D8C327 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6((&___other0), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = L_0;
		RuntimeObject* L_2 = Box(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var, &L_1);
		Il2CppFakeBox<AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD> L_3(AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var, __this);
		bool L_4;
		L_4 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_3), L_2, NULL);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationRemoveScalePlayable_Equals_m0ACDD59B80103591DA8E84CB387FB10778D8C327_AdjustorThunk (RuntimeObject* __this, AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD ___other0, const RuntimeMethod* method)
{
	AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationRemoveScalePlayable_Equals_m0ACDD59B80103591DA8E84CB387FB10778D8C327(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__cctor_m42E614B0B33898D92DFE06CA6045698BE94DE633 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_StaticFields*)il2cpp_codegen_static_fields_for(AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		__this->___m_Handle_0 = L_0;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = ___handle0;
		AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A*>(__this + _offset);
	AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4 (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (&__this->___m_Handle_0);
		bool L_1;
		L_1 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF563F6FCC25CE41FFE0BF7590AF9F4475916665)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4_RuntimeMethod_var)));
	}

IL_001b:
	{
		bool L_4;
		L_4 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___handle0), NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		bool L_6;
		L_6 = PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70((&___handle0), PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_8 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5510C45DDAD777CCB4893578D995C9739F990F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4_RuntimeMethod_var)));
	}

IL_0040:
	{
	}

IL_0041:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_9 = ___handle0;
		__this->___m_Handle_0 = L_9;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A*>(__this + _offset);
	AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4(_thisAdjusted, ___handle0, method);
}
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m14125BB4CCFCDFFD098223AF20E38501BA264180 (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimatorControllerPlayable_Equals_m14125BB4CCFCDFFD098223AF20E38501BA264180_AdjustorThunk (RuntimeObject* __this, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___other0, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimatorControllerPlayable_Equals_m14125BB4CCFCDFFD098223AF20E38501BA264180(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__cctor_m88506D1B15D609B818DFDC6B2BCFF42ABB41B090 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE((&L_1), L_0, /*hidden argument*/NULL);
		((AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_StaticFields*)il2cpp_codegen_static_fields_for(AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___handle0), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12((&___handle0), PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3C8FF345EC45846B2EE6801F84DD49340F0A9E1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___handle0;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4*>(__this + _offset);
	AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78 (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_Equals_mEC28392ADD4E9639EB9228D106D93E21B3587270 (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78((&___other0), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = L_0;
		RuntimeObject* L_2 = Box(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var, &L_1);
		Il2CppFakeBox<AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4> L_3(AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var, __this);
		bool L_4;
		L_4 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_3), L_2, NULL);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationOffsetPlayable_Equals_mEC28392ADD4E9639EB9228D106D93E21B3587270_AdjustorThunk (RuntimeObject* __this, AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 ___other0, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationOffsetPlayable_Equals_mEC28392ADD4E9639EB9228D106D93E21B3587270(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__cctor_m6F50D35CE1FAF52BD587DD3B440CBDE34A76B096 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_StaticFields*)il2cpp_codegen_static_fields_for(AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// System.Void UnityEngine.Animations.AnimationPlayableGraphExtensions::SyncUpdateAndTimeMode(UnityEngine.Playables.PlayableGraph,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableGraphExtensions_SyncUpdateAndTimeMode_mBF6173908DA7C04947C405230A1D66F108E7F493 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator1, const RuntimeMethod* method) 
{
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___animator1;
		AnimationPlayableGraphExtensions_InternalSyncUpdateAndTimeMode_m7C6C30F3FC2930979C825953394E8C9F6D35E3F3((&___graph0), L_0, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, String_t* ___name1, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___handle2, const RuntimeMethod* method) 
{
	typedef bool (*AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, String_t*, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*);
	static AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___graph0, ___name1, ___handle2);
	return icallRetVal;
}
// System.Void UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalSyncUpdateAndTimeMode(UnityEngine.Playables.PlayableGraph&,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableGraphExtensions_InternalSyncUpdateAndTimeMode_m7C6C30F3FC2930979C825953394E8C9F6D35E3F3 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator1, const RuntimeMethod* method) 
{
	typedef void (*AnimationPlayableGraphExtensions_InternalSyncUpdateAndTimeMode_m7C6C30F3FC2930979C825953394E8C9F6D35E3F3_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static AnimationPlayableGraphExtensions_InternalSyncUpdateAndTimeMode_m7C6C30F3FC2930979C825953394E8C9F6D35E3F3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableGraphExtensions_InternalSyncUpdateAndTimeMode_m7C6C30F3FC2930979C825953394E8C9F6D35E3F3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalSyncUpdateAndTimeMode(UnityEngine.Playables.PlayableGraph&,UnityEngine.Animator)");
	_il2cpp_icall_func(___graph0, ___animator1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___handle0), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E((&___handle0), PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral860B9EA7CDAB02A8A4B38336805EAE2FBA31F09C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___handle0;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method)
{
	AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127*>(__this + _offset);
	AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::Equals(UnityEngine.Animations.AnimationScriptPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_Equals_mAD02E40704CBE4AB188DE0569052F8EA9864F4E4 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationScriptPlayable_Equals_mAD02E40704CBE4AB188DE0569052F8EA9864F4E4_AdjustorThunk (RuntimeObject* __this, AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 ___other0, const RuntimeMethod* method)
{
	AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationScriptPlayable_Equals_mAD02E40704CBE4AB188DE0569052F8EA9864F4E4(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__cctor_m5ED4D3FC06BC7A51D3A48B5611F759CB00F7CF54 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_StaticFields*)il2cpp_codegen_static_fields_for(AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6 (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, bool ___singleLayerOptimization1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___handle0), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321((&___handle0), PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD2435BFAEB0372E848D9BE812E3B06AB862CC3D1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6_RuntimeMethod_var)));
	}

IL_0026:
	{
		bool L_5 = ___singleLayerOptimization1;
		il2cpp_codegen_runtime_class_init_inline(AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB((&___handle0), L_5, NULL);
	}

IL_0030:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_6 = ___handle0;
		__this->___m_Handle_0 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, bool ___singleLayerOptimization1, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D*>(__this + _offset);
	AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6(_thisAdjusted, ___handle0, ___singleLayerOptimization1, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_Equals_mA5D24E61E2DE1140B409F3B569DBA3C185751970 (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationLayerMixerPlayable_Equals_mA5D24E61E2DE1140B409F3B569DBA3C185751970_AdjustorThunk (RuntimeObject* __this, AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D ___other0, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationLayerMixerPlayable_Equals_mA5D24E61E2DE1140B409F3B569DBA3C185751970(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetSingleLayerOptimizationInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle0, bool ___value1, const RuntimeMethod* method) 
{
	typedef void (*AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, bool);
	static AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationLayerMixerPlayable::SetSingleLayerOptimizationInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___handle0, ___value1);
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__cctor_m27A78F2EB8840FFCC84901AB4E916ACCE8D8E49B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6((&L_1), L_0, (bool)1, /*hidden argument*/NULL);
		((AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_StaticFields*)il2cpp_codegen_static_fields_for(AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// UnityEngine.Animations.AnimationClipPlayable UnityEngine.Animations.AnimationClipPlayable::Create(UnityEngine.Playables.PlayableGraph,UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 AnimationClipPlayable_Create_m034A4A30AC2642E675B95A0A7C3C384F533F5C1A (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip1, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___graph0;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_1 = ___clip1;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_2;
		L_2 = AnimationClipPlayable_CreateHandle_m9804DF3694EC65E8531F6839194AB189401AE564(L_0, L_1, NULL);
		V_0 = L_2;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_3 = V_0;
		AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 L_4;
		memset((&L_4), 0, sizeof(L_4));
		AnimationClipPlayable__ctor_mF2EE31CC772B100F98CCAE26963059C6C722FA1A((&L_4), L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationClipPlayable_CreateHandle_m9804DF3694EC65E8531F6839194AB189401AE564 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		V_0 = L_0;
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_1 = ___graph0;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_2 = ___clip1;
		bool L_3;
		L_3 = AnimationClipPlayable_CreateHandleInternal_mB8466F44A261B040DBCE8BA442DA8CF7153D2212(L_1, L_2, (&V_0), NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5;
		L_5 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		V_2 = L_5;
		goto IL_0023;
	}

IL_001f:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_6 = V_0;
		V_2 = L_6;
		goto IL_0023;
	}

IL_0023:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_7 = V_2;
		return L_7;
	}
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable__ctor_mF2EE31CC772B100F98CCAE26963059C6C722FA1A (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969_m9AA33A8596A6C41CAA768B0A6EF59B75658A1FB8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___handle0), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969_m9AA33A8596A6C41CAA768B0A6EF59B75658A1FB8((&___handle0), PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969_m9AA33A8596A6C41CAA768B0A6EF59B75658A1FB8_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD022D19E88CF1C2E702FF8813F493923F8AC574)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationClipPlayable__ctor_mF2EE31CC772B100F98CCAE26963059C6C722FA1A_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___handle0;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationClipPlayable__ctor_mF2EE31CC772B100F98CCAE26963059C6C722FA1A_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method)
{
	AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969*>(__this + _offset);
	AnimationClipPlayable__ctor_mF2EE31CC772B100F98CCAE26963059C6C722FA1A(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_Equals_mC5263BEA86C02CEDF93C5B14EAA168883E1DB5F4 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationClipPlayable_Equals_mC5263BEA86C02CEDF93C5B14EAA168883E1DB5F4_AdjustorThunk (RuntimeObject* __this, AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 ___other0, const RuntimeMethod* method)
{
	AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationClipPlayable_Equals_mC5263BEA86C02CEDF93C5B14EAA168883E1DB5F4(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetApplyFootIK(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetApplyFootIK_m7CBA77F56815AD21784AC53D9EBDAE18AFA48507 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (&__this->___m_Handle_0);
		bool L_1 = ___value0;
		AnimationClipPlayable_SetApplyFootIKInternal_m57C77DC9937F7BA02885EEBF5D7CDC1CF9412DFC(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationClipPlayable_SetApplyFootIK_m7CBA77F56815AD21784AC53D9EBDAE18AFA48507_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969*>(__this + _offset);
	AnimationClipPlayable_SetApplyFootIK_m7CBA77F56815AD21784AC53D9EBDAE18AFA48507(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetApplyPlayableIK(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetApplyPlayableIK_m69A6F6E28EB250956E27C1720A0A842848F54DAB (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (&__this->___m_Handle_0);
		bool L_1 = ___value0;
		AnimationClipPlayable_SetApplyPlayableIKInternal_mBCA5B580834435175256C8319275DD443281DD82(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationClipPlayable_SetApplyPlayableIK_m69A6F6E28EB250956E27C1720A0A842848F54DAB_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969*>(__this + _offset);
	AnimationClipPlayable_SetApplyPlayableIK_m69A6F6E28EB250956E27C1720A0A842848F54DAB(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_CreateHandleInternal_mB8466F44A261B040DBCE8BA442DA8CF7153D2212 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip1, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle2, const RuntimeMethod* method) 
{
	{
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_0 = ___clip1;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_1 = ___handle2;
		bool L_2;
		L_2 = AnimationClipPlayable_CreateHandleInternal_Injected_m4FD6B80E5194144660D7974F13F44BA0355C6E3B((&___graph0), L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetApplyFootIKInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetApplyFootIKInternal_m57C77DC9937F7BA02885EEBF5D7CDC1CF9412DFC (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle0, bool ___value1, const RuntimeMethod* method) 
{
	typedef void (*AnimationClipPlayable_SetApplyFootIKInternal_m57C77DC9937F7BA02885EEBF5D7CDC1CF9412DFC_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, bool);
	static AnimationClipPlayable_SetApplyFootIKInternal_m57C77DC9937F7BA02885EEBF5D7CDC1CF9412DFC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClipPlayable_SetApplyFootIKInternal_m57C77DC9937F7BA02885EEBF5D7CDC1CF9412DFC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationClipPlayable::SetApplyFootIKInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___handle0, ___value1);
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetApplyPlayableIKInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetApplyPlayableIKInternal_mBCA5B580834435175256C8319275DD443281DD82 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle0, bool ___value1, const RuntimeMethod* method) 
{
	typedef void (*AnimationClipPlayable_SetApplyPlayableIKInternal_mBCA5B580834435175256C8319275DD443281DD82_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, bool);
	static AnimationClipPlayable_SetApplyPlayableIKInternal_mBCA5B580834435175256C8319275DD443281DD82_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClipPlayable_SetApplyPlayableIKInternal_mBCA5B580834435175256C8319275DD443281DD82_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationClipPlayable::SetApplyPlayableIKInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___handle0, ___value1);
}
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_CreateHandleInternal_Injected_m4FD6B80E5194144660D7974F13F44BA0355C6E3B (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip1, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle2, const RuntimeMethod* method) 
{
	typedef bool (*AnimationClipPlayable_CreateHandleInternal_Injected_m4FD6B80E5194144660D7974F13F44BA0355C6E3B_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static AnimationClipPlayable_CreateHandleInternal_Injected_m4FD6B80E5194144660D7974F13F44BA0355C6E3B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClipPlayable_CreateHandleInternal_Injected_m4FD6B80E5194144660D7974F13F44BA0355C6E3B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationClipPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___graph0, ___clip1, ___handle2);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.Animations.AnimationPosePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___handle0), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6((&___handle0), PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE066D08B565F88D413FDACA14C42BFF008FF4EB9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___handle0;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method)
{
	AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C*>(__this + _offset);
	AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationPosePlayable::Equals(UnityEngine.Animations.AnimationPosePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPosePlayable_Equals_m10F1E7DD7037B2AB3F7DAE3E01A1DC843EABD0A3 (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B((&___other0), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = L_0;
		RuntimeObject* L_2 = Box(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var, &L_1);
		Il2CppFakeBox<AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C> L_3(AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var, __this);
		bool L_4;
		L_4 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_3), L_2, NULL);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationPosePlayable_Equals_m10F1E7DD7037B2AB3F7DAE3E01A1DC843EABD0A3_AdjustorThunk (RuntimeObject* __this, AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C ___other0, const RuntimeMethod* method)
{
	AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationPosePlayable_Equals_m10F1E7DD7037B2AB3F7DAE3E01A1DC843EABD0A3(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationPosePlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__cctor_mFA5FE84F06C8E9A89C07190055BC898525F897C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_StaticFields*)il2cpp_codegen_static_fields_for(AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940 (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___handle0), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF((&___handle0), PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8DC2252638D84FAF2C30B95D54EC83F52FA6C630)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___handle0;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method)
{
	AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18*>(__this + _offset);
	AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2 (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_Equals_m7CBF3B7618EDBA4ECC2F3C2F54011248BC45CDCC (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationMotionXToDeltaPlayable_Equals_m7CBF3B7618EDBA4ECC2F3C2F54011248BC45CDCC_AdjustorThunk (RuntimeObject* __this, AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 ___other0, const RuntimeMethod* method)
{
	AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationMotionXToDeltaPlayable_Equals_m7CBF3B7618EDBA4ECC2F3C2F54011248BC45CDCC(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__cctor_m4FC582F607F00D5E2A6B97219D2D4150AFA42AF1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_StaticFields*)il2cpp_codegen_static_fields_for(AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7 (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___handle0), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED((&___handle0), PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DEE968069F34C26613ADFCD69C41EFC29314286)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___handle0;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method)
{
	AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0*>(__this + _offset);
	AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_Equals_m6EBE215636EEEA3196A43F4D6C1FE6DD704AFA4E (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationMixerPlayable_Equals_m6EBE215636EEEA3196A43F4D6C1FE6DD704AFA4E_AdjustorThunk (RuntimeObject* __this, AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 ___other0, const RuntimeMethod* method)
{
	AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationMixerPlayable_Equals_m6EBE215636EEEA3196A43F4D6C1FE6DD704AFA4E(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__cctor_m7D67E8E778387293AF1ACB1FDBE6ADA3E456A969 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_StaticFields*)il2cpp_codegen_static_fields_for(AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::Create(UnityEngine.Playables.PlayableGraph,System.String,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E AnimationPlayableOutput_Create_m65847A70F6C74854387814C5B1D4C281B6CCCDC4 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, String_t* ___name1, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___target2, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		String_t* L_0 = ___name1;
		bool L_1;
		L_1 = AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49((&___graph0), L_0, (&V_0), NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_3;
		L_3 = AnimationPlayableOutput_get_Null_mDF5638798B49F3E7ACCF766C266D7F776E553900(NULL);
		V_3 = L_3;
		goto IL_002f;
	}

IL_001a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_4 = V_0;
		AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A((&V_1), L_4, NULL);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = ___target2;
		AnimationPlayableOutput_SetTarget_m0F7745C4A721D76EB1E804AA48E70C9C798E0DCE((&V_1), L_5, NULL);
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_6 = V_1;
		V_3 = L_6;
		goto IL_002f;
	}

IL_002f:
	{
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_7 = V_3;
		return L_7;
	}
}
// System.Void UnityEngine.Animations.AnimationPlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableOutputHandle_IsValid_mA94C343D72B72C3B1C7636C93A8DB5EA71691312((&___handle0), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793((&___handle0), PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1767A709DBA16BACAD77F5ED6AF9CBBD95D35D4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_5 = ___handle0;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A_AdjustorThunk (RuntimeObject* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___handle0, const RuntimeMethod* method)
{
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E*>(__this + _offset);
	AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E AnimationPlayableOutput_get_Null_mDF5638798B49F3E7ACCF766C266D7F776E553900 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutputHandle_get_Null_m656E8D2549FA031DA8A2EA5B39CE3B33D75B69F8(NULL);
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AnimationPlayableOutput_GetHandle_m2A8E2A9CBD12EDCF48FC946445AB42802083338D (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AnimationPlayableOutput_GetHandle_m2A8E2A9CBD12EDCF48FC946445AB42802083338D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E*>(__this + _offset);
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 _returnValue;
	_returnValue = AnimationPlayableOutput_GetHandle_m2A8E2A9CBD12EDCF48FC946445AB42802083338D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationPlayableOutput::SetTarget(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_SetTarget_m0F7745C4A721D76EB1E804AA48E70C9C798E0DCE (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___value0, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* L_0 = (&__this->___m_Handle_0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = ___value0;
		AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPlayableOutput_SetTarget_m0F7745C4A721D76EB1E804AA48E70C9C798E0DCE_AdjustorThunk (RuntimeObject* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___value0, const RuntimeMethod* method)
{
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E*>(__this + _offset);
	AnimationPlayableOutput_SetTarget_m0F7745C4A721D76EB1E804AA48E70C9C798E0DCE(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___handle0, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___target1, const RuntimeMethod* method) 
{
	typedef void (*AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)");
	_il2cpp_icall_func(___handle0, ___target1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_inline (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m9B6DC260339CC9A611F32C3807DE4F36A1720DE6_gshared_inline (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_3 = (KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m8DDAFA7A565FBEEB8C312BF1E890AB978D3760AE_gshared_inline (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___item0, const RuntimeMethod* method) 
{
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_1 = (KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_6 = V_0;
		int32_t L_7 = V_1;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)L_8);
		return;
	}

IL_0034:
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_9 = ___item0;
		((  void (*) (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
