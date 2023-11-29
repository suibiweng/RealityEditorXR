#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2*, T3*, T4*, T5, T6>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5 p5, T6 p6)
	{
		void* params[6] = { p1, p2, p3, p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerActionInvoker7;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerActionInvoker7<T1*, T2*, T3*, T4*, T5*, T6, T7>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6 p6, T7 p7)
	{
		void* params[7] = { p1, p2, p3, p4, p5, &p6, &p7 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3*, T4, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, p2, p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2*, T3*, T4*, T5, T6>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5 p5, T6 p6)
	{
		R ret;
		void* params[6] = { p1, p2, p3, p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.IEnumerable`1<StbImageSharp.AnimatedFrameResult>
struct IEnumerable_1_t1AE2F77037745A1D84F0EFDFD33552E66D9FE079;
// System.Collections.Generic.IEnumerator`1<StbImageSharp.AnimatedFrameResult>
struct IEnumerator_1_tAD47A96D6054C51B1B8A5C892447F8ED375BA198;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// Hebron.Runtime.UnsafeArray1D`1<System.Int32>
struct UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933;
// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__gif_lzw>
struct UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE;
// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__huffman>
struct UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA;
// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__jpeg/unnamed1>
struct UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A;
// Hebron.Runtime.UnsafeArray2D`1<System.Byte>
struct UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4;
// Hebron.Runtime.UnsafeArray2D`1<System.Int16>
struct UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794;
// Hebron.Runtime.UnsafeArray2D`1<System.UInt16>
struct UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF;
// Hebron.Runtime.UnsafeArray1D`1<System.Byte>[]
struct UnsafeArray1D_1U5BU5D_t220DC4C289564FBE7D184AE542EB9E05B037BC66;
// Hebron.Runtime.UnsafeArray1D`1<System.Int16>[]
struct UnsafeArray1D_1U5BU5D_t0821AF1CF7518A71162EF4994FBEC614A035B3A7;
// Hebron.Runtime.UnsafeArray1D`1<System.UInt16>[]
struct UnsafeArray1D_1U5BU5D_t4748D8DC93DBE63F9BDD18376ADC4866F956E9D9;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// StbImageSharp.StbImage/stbi__gif_lzw[]
struct stbi__gif_lzwU5BU5D_tB5A2B5B4D4201620767C50C204468DF525E515EA;
// StbImageSharp.StbImage/stbi__huffman[]
struct stbi__huffmanU5BU5D_tE287877D7CE84F85179E8AC62EBBEEF8C5018D7D;
// StbImageSharp.StbImage/stbi__jpeg/unnamed1[]
struct unnamed1U5BU5D_t2B4E41863CB26AD2BBF0696E3942CC235C404500;
// StbImageSharp.AnimatedFrameResult
struct AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41;
// StbImageSharp.AnimatedGifEnumerable
struct AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E;
// StbImageSharp.AnimatedGifEnumerator
struct AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// StbImageSharp.ImageResult
struct ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4;
// StbImageSharp.ImageResultFloat
struct ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB;
// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175;
// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// StbImageSharp.StbImage/delegate0
struct delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9;
// StbImageSharp.StbImage/delegate1
struct delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42;
// StbImageSharp.StbImage/delegate2
struct delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F;
// StbImageSharp.StbImage/stbi__context
struct stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7;
// StbImageSharp.StbImage/stbi__gif
struct stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4;
// StbImageSharp.StbImage/stbi__gif_lzw
struct stbi__gif_lzw_t50321AB205854CBA2DA47AAF2C14535018D79584;
// StbImageSharp.StbImage/stbi__huffman
struct stbi__huffman_t6DEAA8DAB0C7E7B906ED693F3B02A4FB88BC8D7F;
// StbImageSharp.StbImage/stbi__jpeg
struct stbi__jpeg_t783B73264C160BDD8FD99C2A40E683EBEDDB2402;
// StbImageSharp.StbImage/stbi__png
struct stbi__png_tCBD935AEB160DD127D2005952F7C0255B2FDA04F;
// StbImageSharp.StbImage/stbi__resample
struct stbi__resample_tEFE16727AD25AA174BB9F4C254785074D3FE8ED4;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// StbImageSharp.StbImage/stbi__jpeg/unnamed1
struct unnamed1_tFFCD00E633D511D08F0102AF033EAEF84DB82DF1;

IL2CPP_EXTERN_C RuntimeClass* AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2;
IL2CPP_EXTERN_C String_t* _stringLiteral183398DCEBD6A7242F3CF59B61DC81600BBF26E8;
IL2CPP_EXTERN_C String_t* _stringLiteral401602777C44EA69B5FF9AB6AB2D47AEEC89D2AA;
IL2CPP_EXTERN_C String_t* _stringLiteral47025BE0E94E1A7B34293597C96154C064A21D9F;
IL2CPP_EXTERN_C String_t* _stringLiteral6E9AEBB5505B4A1DBC166711562BE9408419A24D;
IL2CPP_EXTERN_C String_t* _stringLiteralCABEE06640F48AF21CAAB5EE9823A731DD58DD03;
IL2CPP_EXTERN_C String_t* _stringLiteralCAD8623838274740D6497489F547CE972C42A942;
IL2CPP_EXTERN_C String_t* _stringLiteralE75F4F4A9D67BC98BA7DB8DBE3C519516572DA4E;
IL2CPP_EXTERN_C String_t* _stringLiteralEC3193CD1F34C7323A6EB465B808BBAB8FAD271A;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914;
IL2CPP_EXTERN_C const RuntimeMethod* AnimatedGifEnumerator_Reset_mA8BA523F4758E19A93AD2CA8F99DD9B7187CD39E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimatedGifEnumerator__ctor_m426872B178B1C6F692C3C12ACE4FCB23BE2EACB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Half_CompareTo_m9EC79B9359AD9C276FA4F1850C015053F486058F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Half_Sign_mCDB6F804C1CE4A21C0E04A0AB5F0D33F09E691EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Half_System_IConvertible_ToChar_m7511F58D164EE1F5BEECDEAC63D7746DC7933A92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Half_System_IConvertible_ToDateTime_mF0C63EC935FD9BF89F21636569F73F046BC729AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageResultFloat_FromResult_mC0AF239322A4591986572BDF99872F49C1C81DA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageResult_FromResult_m02AAF01184911B3675D8177B3AEC2ED9FCD5CF84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m2290BB1875E64452A7C9959B7E71F75E5B39F701_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray1D_1__ctor_m742DAE97CC04FF2A5C951005E7E1DEAE976FD4B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray1D_1__ctor_m75FD4AC5FDF39ECCC52B84F34324B535D1455001_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray1D_1__ctor_m80391CAC93DAF529FDA5AC99D18457B15FD0007B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray1D_1__ctor_mF515A01BB21FA30A4F292F4417C31C5E8B88F46E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray1D_1_op_Implicit_m4D9430D6AC327C03284B4A81786AE78DCA2EF354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray1D_1_op_Implicit_m6541926AF5FCE50202474E3C045787ABE550A256_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray1D_1_op_Implicit_mC0F446E66C867587CA19A5DF4FB883EB8676D772_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray1D_1_op_Implicit_mE32AAEFB2E0B4E9E8536ECF5A2B32906DBA0AE73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray2D_1__ctor_m3A58CFC7D1EED7D3D5087499656F8833CB720624_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray2D_1__ctor_m4B656CBF9E31CBD022740B8F979CE85FDBE33B20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray2D_1__ctor_m5ED6464C063FDB0E310BC0AC417ACCE4B08D7A41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray2D_1_op_Implicit_m49A2133A13994F72DAB2CA613E74AF6C8C5F1413_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray2D_1_op_Implicit_m70B5987ED11018AA1B208A0B5BF2D3C16A07FA04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray2D_1_op_Implicit_mBEFA368E08328EEAC109432ECC9DC849C4C8CF1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* stbi__context__ctor_mC829A0366DACB27129BF977D4B90B9C2326DD40F_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t63D37A524A2DA723EE4B6332B007EEBEE9A2F22C 
{
};

// StbImageSharp.AnimatedGifEnumerable
struct AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E  : public RuntimeObject
{
	// System.IO.Stream StbImageSharp.AnimatedGifEnumerable::_input
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____input_0;
	// StbImageSharp.ColorComponents StbImageSharp.AnimatedGifEnumerable::<ColorComponents>k__BackingField
	int32_t ___U3CColorComponentsU3Ek__BackingField_1;
};

// StbImageSharp.AnimatedGifEnumerator
struct AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B  : public RuntimeObject
{
	// StbImageSharp.StbImage/stbi__context StbImageSharp.AnimatedGifEnumerator::_context
	stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ____context_0;
	// StbImageSharp.StbImage/stbi__gif StbImageSharp.AnimatedGifEnumerator::_gif
	stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* ____gif_1;
	// StbImageSharp.ColorComponents StbImageSharp.AnimatedGifEnumerator::<ColorComponents>k__BackingField
	int32_t ___U3CColorComponentsU3Ek__BackingField_2;
	// StbImageSharp.AnimatedFrameResult StbImageSharp.AnimatedGifEnumerator::<Current>k__BackingField
	AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* ___U3CCurrentU3Ek__BackingField_3;
};

// Hebron.Runtime.CRuntime
struct CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F  : public RuntimeObject
{
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

// SystemHalf.HalfHelper
struct HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C  : public RuntimeObject
{
};

// StbImageSharp.ImageResult
struct ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4  : public RuntimeObject
{
	// System.Int32 StbImageSharp.ImageResult::<Width>k__BackingField
	int32_t ___U3CWidthU3Ek__BackingField_0;
	// System.Int32 StbImageSharp.ImageResult::<Height>k__BackingField
	int32_t ___U3CHeightU3Ek__BackingField_1;
	// StbImageSharp.ColorComponents StbImageSharp.ImageResult::<SourceComp>k__BackingField
	int32_t ___U3CSourceCompU3Ek__BackingField_2;
	// StbImageSharp.ColorComponents StbImageSharp.ImageResult::<Comp>k__BackingField
	int32_t ___U3CCompU3Ek__BackingField_3;
	// System.Byte[] StbImageSharp.ImageResult::<Data>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CDataU3Ek__BackingField_4;
};

// StbImageSharp.ImageResultFloat
struct ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB  : public RuntimeObject
{
	// System.Int32 StbImageSharp.ImageResultFloat::<Width>k__BackingField
	int32_t ___U3CWidthU3Ek__BackingField_0;
	// System.Int32 StbImageSharp.ImageResultFloat::<Height>k__BackingField
	int32_t ___U3CHeightU3Ek__BackingField_1;
	// StbImageSharp.ColorComponents StbImageSharp.ImageResultFloat::<SourceComp>k__BackingField
	int32_t ___U3CSourceCompU3Ek__BackingField_2;
	// StbImageSharp.ColorComponents StbImageSharp.ImageResultFloat::<Comp>k__BackingField
	int32_t ___U3CCompU3Ek__BackingField_3;
	// System.Single[] StbImageSharp.ImageResultFloat::<Data>k__BackingField
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___U3CDataU3Ek__BackingField_4;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Hebron.Runtime.MemoryStats
struct MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E  : public RuntimeObject
{
};

// StbImageSharp.StbImage
struct StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A  : public RuntimeObject
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

// StbImageSharp.StbImage/stbi__context
struct stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7  : public RuntimeObject
{
	// System.Byte[] StbImageSharp.StbImage/stbi__context::_tempBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____tempBuffer_0;
	// System.Int32 StbImageSharp.StbImage/stbi__context::img_n
	int32_t ___img_n_1;
	// System.Int32 StbImageSharp.StbImage/stbi__context::img_out_n
	int32_t ___img_out_n_2;
	// System.UInt32 StbImageSharp.StbImage/stbi__context::img_x
	uint32_t ___img_x_3;
	// System.UInt32 StbImageSharp.StbImage/stbi__context::img_y
	uint32_t ___img_y_4;
	// System.IO.Stream StbImageSharp.StbImage/stbi__context::<Stream>k__BackingField
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___U3CStreamU3Ek__BackingField_5;
};

// StbImageSharp.StbImage/stbi__gif
struct stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4  : public RuntimeObject
{
	// System.Byte* StbImageSharp.StbImage/stbi__gif::_out_
	uint8_t* ____out__0;
	// System.Byte* StbImageSharp.StbImage/stbi__gif::background
	uint8_t* ___background_1;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::bgindex
	int32_t ___bgindex_2;
	// StbImageSharp.StbImage/stbi__gif_lzw* StbImageSharp.StbImage/stbi__gif::codes
	stbi__gif_lzw_t50321AB205854CBA2DA47AAF2C14535018D79584* ___codes_3;
	// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__gif_lzw> StbImageSharp.StbImage/stbi__gif::codesArray
	UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE* ___codesArray_4;
	// System.Byte* StbImageSharp.StbImage/stbi__gif::color_table
	uint8_t* ___color_table_5;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::cur_x
	int32_t ___cur_x_6;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::cur_y
	int32_t ___cur_y_7;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::delay
	int32_t ___delay_8;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::eflags
	int32_t ___eflags_9;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::flags
	int32_t ___flags_10;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::h
	int32_t ___h_11;
	// System.Byte* StbImageSharp.StbImage/stbi__gif::history
	uint8_t* ___history_12;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::lflags
	int32_t ___lflags_13;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::line_size
	int32_t ___line_size_14;
	// System.Byte** StbImageSharp.StbImage/stbi__gif::lpal
	uint8_t** ___lpal_15;
	// Hebron.Runtime.UnsafeArray2D`1<System.Byte> StbImageSharp.StbImage/stbi__gif::lpalArray
	UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4* ___lpalArray_16;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::max_x
	int32_t ___max_x_17;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::max_y
	int32_t ___max_y_18;
	// System.Byte** StbImageSharp.StbImage/stbi__gif::pal
	uint8_t** ___pal_19;
	// Hebron.Runtime.UnsafeArray2D`1<System.Byte> StbImageSharp.StbImage/stbi__gif::palArray
	UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4* ___palArray_20;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::parse
	int32_t ___parse_21;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::ratio
	int32_t ___ratio_22;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::start_x
	int32_t ___start_x_23;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::start_y
	int32_t ___start_y_24;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::step
	int32_t ___step_25;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::transparent
	int32_t ___transparent_26;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::w
	int32_t ___w_27;
};

// StbImageSharp.StbImage/stbi__jpeg
struct stbi__jpeg_t783B73264C160BDD8FD99C2A40E683EBEDDB2402  : public RuntimeObject
{
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::app14_color_transform
	int32_t ___app14_color_transform_0;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::code_bits
	int32_t ___code_bits_1;
	// System.UInt32 StbImageSharp.StbImage/stbi__jpeg::code_buffer
	uint32_t ___code_buffer_2;
	// System.UInt16** StbImageSharp.StbImage/stbi__jpeg::dequant
	uint16_t** ___dequant_3;
	// Hebron.Runtime.UnsafeArray2D`1<System.UInt16> StbImageSharp.StbImage/stbi__jpeg::dequantArray
	UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF* ___dequantArray_4;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::eob_run
	int32_t ___eob_run_5;
	// System.Int16** StbImageSharp.StbImage/stbi__jpeg::fast_ac
	int16_t** ___fast_ac_6;
	// Hebron.Runtime.UnsafeArray2D`1<System.Int16> StbImageSharp.StbImage/stbi__jpeg::fast_acArray
	UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794* ___fast_acArray_7;
	// StbImageSharp.StbImage/stbi__huffman* StbImageSharp.StbImage/stbi__jpeg::huff_ac
	stbi__huffman_t6DEAA8DAB0C7E7B906ED693F3B02A4FB88BC8D7F* ___huff_ac_8;
	// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__huffman> StbImageSharp.StbImage/stbi__jpeg::huff_acArray
	UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA* ___huff_acArray_9;
	// StbImageSharp.StbImage/stbi__huffman* StbImageSharp.StbImage/stbi__jpeg::huff_dc
	stbi__huffman_t6DEAA8DAB0C7E7B906ED693F3B02A4FB88BC8D7F* ___huff_dc_10;
	// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__huffman> StbImageSharp.StbImage/stbi__jpeg::huff_dcArray
	UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA* ___huff_dcArray_11;
	// StbImageSharp.StbImage/delegate0 StbImageSharp.StbImage/stbi__jpeg::idct_block_kernel
	delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* ___idct_block_kernel_12;
	// StbImageSharp.StbImage/stbi__jpeg/unnamed1* StbImageSharp.StbImage/stbi__jpeg::img_comp
	unnamed1_tFFCD00E633D511D08F0102AF033EAEF84DB82DF1* ___img_comp_13;
	// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__jpeg/unnamed1> StbImageSharp.StbImage/stbi__jpeg::img_compArray
	UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A* ___img_compArray_14;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::img_h_max
	int32_t ___img_h_max_15;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::img_mcu_h
	int32_t ___img_mcu_h_16;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::img_mcu_w
	int32_t ___img_mcu_w_17;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::img_mcu_x
	int32_t ___img_mcu_x_18;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::img_mcu_y
	int32_t ___img_mcu_y_19;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::img_v_max
	int32_t ___img_v_max_20;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::jfif
	int32_t ___jfif_21;
	// System.Byte StbImageSharp.StbImage/stbi__jpeg::marker
	uint8_t ___marker_22;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::nomore
	int32_t ___nomore_23;
	// System.Int32* StbImageSharp.StbImage/stbi__jpeg::order
	int32_t* ___order_24;
	// Hebron.Runtime.UnsafeArray1D`1<System.Int32> StbImageSharp.StbImage/stbi__jpeg::orderArray
	UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933* ___orderArray_25;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::progressive
	int32_t ___progressive_26;
	// StbImageSharp.StbImage/delegate2 StbImageSharp.StbImage/stbi__jpeg::resample_row_hv_2_kernel
	delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* ___resample_row_hv_2_kernel_27;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::restart_interval
	int32_t ___restart_interval_28;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::rgb
	int32_t ___rgb_29;
	// StbImageSharp.StbImage/stbi__context StbImageSharp.StbImage/stbi__jpeg::s
	stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ___s_30;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::scan_n
	int32_t ___scan_n_31;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::spec_end
	int32_t ___spec_end_32;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::spec_start
	int32_t ___spec_start_33;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::succ_high
	int32_t ___succ_high_34;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::succ_low
	int32_t ___succ_low_35;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::todo
	int32_t ___todo_36;
	// StbImageSharp.StbImage/delegate1 StbImageSharp.StbImage/stbi__jpeg::YCbCr_to_RGB_kernel
	delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* ___YCbCr_to_RGB_kernel_37;
};

// StbImageSharp.StbImage/stbi__png
struct stbi__png_tCBD935AEB160DD127D2005952F7C0255B2FDA04F  : public RuntimeObject
{
	// System.Byte* StbImageSharp.StbImage/stbi__png::_out_
	uint8_t* ____out__0;
	// System.Int32 StbImageSharp.StbImage/stbi__png::depth
	int32_t ___depth_1;
	// System.Byte* StbImageSharp.StbImage/stbi__png::expanded
	uint8_t* ___expanded_2;
	// System.Byte* StbImageSharp.StbImage/stbi__png::idata
	uint8_t* ___idata_3;
	// StbImageSharp.StbImage/stbi__context StbImageSharp.StbImage/stbi__png::s
	stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ___s_4;
};

// StbImageSharp.StbImage/stbi__resample
struct stbi__resample_tEFE16727AD25AA174BB9F4C254785074D3FE8ED4  : public RuntimeObject
{
	// System.Int32 StbImageSharp.StbImage/stbi__resample::hs
	int32_t ___hs_0;
	// System.Byte* StbImageSharp.StbImage/stbi__resample::line0
	uint8_t* ___line0_1;
	// System.Byte* StbImageSharp.StbImage/stbi__resample::line1
	uint8_t* ___line1_2;
	// StbImageSharp.StbImage/delegate2 StbImageSharp.StbImage/stbi__resample::resample
	delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* ___resample_3;
	// System.Int32 StbImageSharp.StbImage/stbi__resample::vs
	int32_t ___vs_4;
	// System.Int32 StbImageSharp.StbImage/stbi__resample::w_lores
	int32_t ___w_lores_5;
	// System.Int32 StbImageSharp.StbImage/stbi__resample::ypos
	int32_t ___ypos_6;
	// System.Int32 StbImageSharp.StbImage/stbi__resample::ystep
	int32_t ___ystep_7;
};

// StbImageSharp.AnimatedFrameResult
struct AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41  : public ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4
{
	// System.Int32 StbImageSharp.AnimatedFrameResult::<DelayInMs>k__BackingField
	int32_t ___U3CDelayInMsU3Ek__BackingField_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// SystemHalf.Half
struct Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 
{
	// System.UInt16 SystemHalf.Half::Value
	uint16_t ___Value_0;
};

// StbImageSharp.ImageInfo
struct ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C 
{
	// System.Int32 StbImageSharp.ImageInfo::Width
	int32_t ___Width_0;
	// System.Int32 StbImageSharp.ImageInfo::Height
	int32_t ___Height_1;
	// StbImageSharp.ColorComponents StbImageSharp.ImageInfo::ColorComponents
	int32_t ___ColorComponents_2;
	// System.Int32 StbImageSharp.ImageInfo::BitsPerChannel
	int32_t ___BitsPerChannel_3;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=124
struct __StaticArrayInitTypeSizeU3D124_t9FAD538EC11CC303C45220E1547C1E92DC5E7940 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D124_t9FAD538EC11CC303C45220E1547C1E92DC5E7940__padding[124];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_t359A8FF192786412EB0870773A023EF19E7B83DB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t359A8FF192786412EB0870773A023EF19E7B83DB__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=19
struct __StaticArrayInitTypeSizeU3D19_t5589C48E49CA054DFDADD530BD4FE5DA90E1351D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D19_t5589C48E49CA054DFDADD530BD4FE5DA90E1351D__padding[19];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288
struct __StaticArrayInitTypeSizeU3D288_tB38B4224032671F40D3AF231F6D3E9A3AB46217C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D288_tB38B4224032671F40D3AF231F6D3E9A3AB46217C__padding[288];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct __StaticArrayInitTypeSizeU3D3_t4163E34A7D06F8C964ED17C35882E1B7EFDA0894 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_t4163E34A7D06F8C964ED17C35882E1B7EFDA0894__padding[3];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tB0219EF63295A20A039D1CD892BB143A81B92541 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tB0219EF63295A20A039D1CD892BB143A81B92541__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
struct __StaticArrayInitTypeSizeU3D36_t14F4C5B2ADAF1F5BA2732D56C8B023D7F8294BCC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_t14F4C5B2ADAF1F5BA2732D56C8B023D7F8294BCC__padding[36];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5
struct __StaticArrayInitTypeSizeU3D5_tC1F6D711158DBDED87D75A12E5F8A77C529961D8 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D5_tC1F6D711158DBDED87D75A12E5F8A77C529961D8__padding[5];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
struct __StaticArrayInitTypeSizeU3D6_tB8038ACD9F5AE15D04B86955781E81EAC647325A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_tB8038ACD9F5AE15D04B86955781E81EAC647325A__padding[6];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_t47E0416979C28EDE5E725E64685E2CDE1A7866A9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t47E0416979C28EDE5E725E64685E2CDE1A7866A9__padding[64];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68
struct __StaticArrayInitTypeSizeU3D68_t2802E91BC788DD006C1DEC745A4CFC203BB19610 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D68_t2802E91BC788DD006C1DEC745A4CFC203BB19610__padding[68];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=79
struct __StaticArrayInitTypeSizeU3D79_t2115F2EF531D1799843ECBDFAA686AAC42D22093 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D79_t2115F2EF531D1799843ECBDFAA686AAC42D22093__padding[79];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct __StaticArrayInitTypeSizeU3D9_t676B9CDD70AE69DE0625C32889D961A2DC9EFCF8 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_t676B9CDD70AE69DE0625C32889D961A2DC9EFCF8__padding[9];
	};
};

// StbImageSharp.StbImage/stbi__bmp_data
struct stbi__bmp_data_tA952327F9D16C7AC3996DBB265DD9FF3CA82D660 
{
	// System.Int32 StbImageSharp.StbImage/stbi__bmp_data::bpp
	int32_t ___bpp_0;
	// System.Int32 StbImageSharp.StbImage/stbi__bmp_data::offset
	int32_t ___offset_1;
	// System.Int32 StbImageSharp.StbImage/stbi__bmp_data::hsz
	int32_t ___hsz_2;
	// System.UInt32 StbImageSharp.StbImage/stbi__bmp_data::mr
	uint32_t ___mr_3;
	// System.UInt32 StbImageSharp.StbImage/stbi__bmp_data::mg
	uint32_t ___mg_4;
	// System.UInt32 StbImageSharp.StbImage/stbi__bmp_data::mb
	uint32_t ___mb_5;
	// System.UInt32 StbImageSharp.StbImage/stbi__bmp_data::ma
	uint32_t ___ma_6;
	// System.UInt32 StbImageSharp.StbImage/stbi__bmp_data::all_a
	uint32_t ___all_a_7;
	// System.Int32 StbImageSharp.StbImage/stbi__bmp_data::extra_read
	int32_t ___extra_read_8;
};

// StbImageSharp.StbImage/stbi__gif_lzw
struct stbi__gif_lzw_t50321AB205854CBA2DA47AAF2C14535018D79584 
{
	// System.Int16 StbImageSharp.StbImage/stbi__gif_lzw::prefix
	int16_t ___prefix_0;
	// System.Byte StbImageSharp.StbImage/stbi__gif_lzw::first
	uint8_t ___first_1;
	// System.Byte StbImageSharp.StbImage/stbi__gif_lzw::suffix
	uint8_t ___suffix_2;
};

// StbImageSharp.StbImage/stbi__pngchunk
struct stbi__pngchunk_tA5306C6DF7E8387DB1380CD0BE8D47106C10CCBD 
{
	// System.UInt32 StbImageSharp.StbImage/stbi__pngchunk::length
	uint32_t ___length_0;
	// System.UInt32 StbImageSharp.StbImage/stbi__pngchunk::type
	uint32_t ___type_1;
};

// StbImageSharp.StbImage/stbi__result_info
struct stbi__result_info_tABB5BF1D89CE5A2B8B13F3002DB09380E4DCD3AA 
{
	// System.Int32 StbImageSharp.StbImage/stbi__result_info::bits_per_channel
	int32_t ___bits_per_channel_0;
	// System.Int32 StbImageSharp.StbImage/stbi__result_info::num_channels
	int32_t ___num_channels_1;
	// System.Int32 StbImageSharp.StbImage/stbi__result_info::channel_order
	int32_t ___channel_order_2;
};

// StbImageSharp.StbImage/stbi__huffman/<code>e__FixedBuffer
struct U3CcodeU3Ee__FixedBuffer_t9B85054F2DB2B1FF1901230601F73C2B7C74145A 
{
	union
	{
		struct
		{
			// System.UInt16 StbImageSharp.StbImage/stbi__huffman/<code>e__FixedBuffer::FixedElementField
			uint16_t ___FixedElementField_0;
		};
		uint8_t U3CcodeU3Ee__FixedBuffer_t9B85054F2DB2B1FF1901230601F73C2B7C74145A__padding[512];
	};
};

// StbImageSharp.StbImage/stbi__huffman/<delta>e__FixedBuffer
struct U3CdeltaU3Ee__FixedBuffer_t39D2B6970ECDC446C812EC974927FD97AF2FB121 
{
	union
	{
		struct
		{
			// System.Int32 StbImageSharp.StbImage/stbi__huffman/<delta>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CdeltaU3Ee__FixedBuffer_t39D2B6970ECDC446C812EC974927FD97AF2FB121__padding[68];
	};
};

// StbImageSharp.StbImage/stbi__huffman/<fast>e__FixedBuffer
struct U3CfastU3Ee__FixedBuffer_tB398F8437B4AA6C4ED7F9F91C64DC0FCF36BD5AB 
{
	union
	{
		struct
		{
			// System.Byte StbImageSharp.StbImage/stbi__huffman/<fast>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CfastU3Ee__FixedBuffer_tB398F8437B4AA6C4ED7F9F91C64DC0FCF36BD5AB__padding[512];
	};
};

// StbImageSharp.StbImage/stbi__huffman/<maxcode>e__FixedBuffer
struct U3CmaxcodeU3Ee__FixedBuffer_tF5B5F8EF3202690E22C890AC019F8AE88CDC8170 
{
	union
	{
		struct
		{
			// System.UInt32 StbImageSharp.StbImage/stbi__huffman/<maxcode>e__FixedBuffer::FixedElementField
			uint32_t ___FixedElementField_0;
		};
		uint8_t U3CmaxcodeU3Ee__FixedBuffer_tF5B5F8EF3202690E22C890AC019F8AE88CDC8170__padding[72];
	};
};

// StbImageSharp.StbImage/stbi__huffman/<size>e__FixedBuffer
struct U3CsizeU3Ee__FixedBuffer_tA7151F597312282204EC0213754FB0F36F1EE3CF 
{
	union
	{
		struct
		{
			// System.Byte StbImageSharp.StbImage/stbi__huffman/<size>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CsizeU3Ee__FixedBuffer_tA7151F597312282204EC0213754FB0F36F1EE3CF__padding[257];
	};
};

// StbImageSharp.StbImage/stbi__huffman/<values>e__FixedBuffer
struct U3CvaluesU3Ee__FixedBuffer_t425B4FAF4A5C0DB8559A642A11F2C944321B591E 
{
	union
	{
		struct
		{
			// System.Byte StbImageSharp.StbImage/stbi__huffman/<values>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CvaluesU3Ee__FixedBuffer_t425B4FAF4A5C0DB8559A642A11F2C944321B591E__padding[256];
	};
};

// StbImageSharp.StbImage/stbi__jpeg/unnamed1
struct unnamed1_tFFCD00E633D511D08F0102AF033EAEF84DB82DF1 
{
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::id
	int32_t ___id_0;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::h
	int32_t ___h_1;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::v
	int32_t ___v_2;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::tq
	int32_t ___tq_3;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::hd
	int32_t ___hd_4;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::ha
	int32_t ___ha_5;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::dc_pred
	int32_t ___dc_pred_6;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::x
	int32_t ___x_7;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::y
	int32_t ___y_8;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::w2
	int32_t ___w2_9;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::h2
	int32_t ___h2_10;
	// System.Byte* StbImageSharp.StbImage/stbi__jpeg/unnamed1::data
	uint8_t* ___data_11;
	// System.Void* StbImageSharp.StbImage/stbi__jpeg/unnamed1::raw_data
	void* ___raw_data_12;
	// System.Void* StbImageSharp.StbImage/stbi__jpeg/unnamed1::raw_coeff
	void* ___raw_coeff_13;
	// System.Byte* StbImageSharp.StbImage/stbi__jpeg/unnamed1::linebuf
	uint8_t* ___linebuf_14;
	// System.Int16* StbImageSharp.StbImage/stbi__jpeg/unnamed1::coeff
	int16_t* ___coeff_15;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::coeff_w
	int32_t ___coeff_w_16;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::coeff_h
	int32_t ___coeff_h_17;
};

// StbImageSharp.StbImage/stbi__zhuffman/<fast>e__FixedBuffer
struct U3CfastU3Ee__FixedBuffer_t8CE924348EA9C6FB362EBA8410C3700B92FB67CF 
{
	union
	{
		struct
		{
			// System.UInt16 StbImageSharp.StbImage/stbi__zhuffman/<fast>e__FixedBuffer::FixedElementField
			uint16_t ___FixedElementField_0;
		};
		uint8_t U3CfastU3Ee__FixedBuffer_t8CE924348EA9C6FB362EBA8410C3700B92FB67CF__padding[1024];
	};
};

// StbImageSharp.StbImage/stbi__zhuffman/<firstcode>e__FixedBuffer
struct U3CfirstcodeU3Ee__FixedBuffer_tF9DEE623EA719A686FB3E2E10A8823D7B7AC8CDD 
{
	union
	{
		struct
		{
			// System.UInt16 StbImageSharp.StbImage/stbi__zhuffman/<firstcode>e__FixedBuffer::FixedElementField
			uint16_t ___FixedElementField_0;
		};
		uint8_t U3CfirstcodeU3Ee__FixedBuffer_tF9DEE623EA719A686FB3E2E10A8823D7B7AC8CDD__padding[32];
	};
};

// StbImageSharp.StbImage/stbi__zhuffman/<firstsymbol>e__FixedBuffer
struct U3CfirstsymbolU3Ee__FixedBuffer_t58B227FFA8178B8B4F1A1A40182F7EA1043F5BC9 
{
	union
	{
		struct
		{
			// System.UInt16 StbImageSharp.StbImage/stbi__zhuffman/<firstsymbol>e__FixedBuffer::FixedElementField
			uint16_t ___FixedElementField_0;
		};
		uint8_t U3CfirstsymbolU3Ee__FixedBuffer_t58B227FFA8178B8B4F1A1A40182F7EA1043F5BC9__padding[32];
	};
};

// StbImageSharp.StbImage/stbi__zhuffman/<maxcode>e__FixedBuffer
struct U3CmaxcodeU3Ee__FixedBuffer_t2932FF58F62E5681C9E6FFE335588BD39A835813 
{
	union
	{
		struct
		{
			// System.Int32 StbImageSharp.StbImage/stbi__zhuffman/<maxcode>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CmaxcodeU3Ee__FixedBuffer_t2932FF58F62E5681C9E6FFE335588BD39A835813__padding[68];
	};
};

// StbImageSharp.StbImage/stbi__zhuffman/<size>e__FixedBuffer
struct U3CsizeU3Ee__FixedBuffer_tA5EED7AAFF5C987DEA58EF2BCB603173B5933796 
{
	union
	{
		struct
		{
			// System.Byte StbImageSharp.StbImage/stbi__zhuffman/<size>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CsizeU3Ee__FixedBuffer_tA5EED7AAFF5C987DEA58EF2BCB603173B5933796__padding[288];
	};
};

// StbImageSharp.StbImage/stbi__zhuffman/<value>e__FixedBuffer
struct U3CvalueU3Ee__FixedBuffer_t2648F8501F6C9C6C98680C65D3683DC2E8A22269 
{
	union
	{
		struct
		{
			// System.UInt16 StbImageSharp.StbImage/stbi__zhuffman/<value>e__FixedBuffer::FixedElementField
			uint16_t ___FixedElementField_0;
		};
		uint8_t U3CvalueU3Ee__FixedBuffer_t2648F8501F6C9C6C98680C65D3683DC2E8A22269__padding[576];
	};
};

// System.Nullable`1<StbImageSharp.ImageInfo>
struct Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t363C11D6C0FC38C8701B3E594E141E3E35D71537  : public RuntimeObject
{
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_14;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// StbImageSharp.StbImage/stbi__huffman
struct stbi__huffman_t6DEAA8DAB0C7E7B906ED693F3B02A4FB88BC8D7F 
{
	// StbImageSharp.StbImage/stbi__huffman/<fast>e__FixedBuffer StbImageSharp.StbImage/stbi__huffman::fast
	U3CfastU3Ee__FixedBuffer_tB398F8437B4AA6C4ED7F9F91C64DC0FCF36BD5AB ___fast_0;
	// StbImageSharp.StbImage/stbi__huffman/<code>e__FixedBuffer StbImageSharp.StbImage/stbi__huffman::code
	U3CcodeU3Ee__FixedBuffer_t9B85054F2DB2B1FF1901230601F73C2B7C74145A ___code_1;
	// StbImageSharp.StbImage/stbi__huffman/<values>e__FixedBuffer StbImageSharp.StbImage/stbi__huffman::values
	U3CvaluesU3Ee__FixedBuffer_t425B4FAF4A5C0DB8559A642A11F2C944321B591E ___values_2;
	// StbImageSharp.StbImage/stbi__huffman/<size>e__FixedBuffer StbImageSharp.StbImage/stbi__huffman::size
	U3CsizeU3Ee__FixedBuffer_tA7151F597312282204EC0213754FB0F36F1EE3CF ___size_3;
	// StbImageSharp.StbImage/stbi__huffman/<maxcode>e__FixedBuffer StbImageSharp.StbImage/stbi__huffman::maxcode
	U3CmaxcodeU3Ee__FixedBuffer_tF5B5F8EF3202690E22C890AC019F8AE88CDC8170 ___maxcode_4;
	// StbImageSharp.StbImage/stbi__huffman/<delta>e__FixedBuffer StbImageSharp.StbImage/stbi__huffman::delta
	U3CdeltaU3Ee__FixedBuffer_t39D2B6970ECDC446C812EC974927FD97AF2FB121 ___delta_5;
};

// StbImageSharp.StbImage/stbi__zhuffman
struct stbi__zhuffman_tEF89BE72EF0A393157143301325CF80E399CB2FB 
{
	// StbImageSharp.StbImage/stbi__zhuffman/<fast>e__FixedBuffer StbImageSharp.StbImage/stbi__zhuffman::fast
	U3CfastU3Ee__FixedBuffer_t8CE924348EA9C6FB362EBA8410C3700B92FB67CF ___fast_0;
	// StbImageSharp.StbImage/stbi__zhuffman/<firstcode>e__FixedBuffer StbImageSharp.StbImage/stbi__zhuffman::firstcode
	U3CfirstcodeU3Ee__FixedBuffer_tF9DEE623EA719A686FB3E2E10A8823D7B7AC8CDD ___firstcode_1;
	// StbImageSharp.StbImage/stbi__zhuffman/<maxcode>e__FixedBuffer StbImageSharp.StbImage/stbi__zhuffman::maxcode
	U3CmaxcodeU3Ee__FixedBuffer_t2932FF58F62E5681C9E6FFE335588BD39A835813 ___maxcode_2;
	// StbImageSharp.StbImage/stbi__zhuffman/<firstsymbol>e__FixedBuffer StbImageSharp.StbImage/stbi__zhuffman::firstsymbol
	U3CfirstsymbolU3Ee__FixedBuffer_t58B227FFA8178B8B4F1A1A40182F7EA1043F5BC9 ___firstsymbol_3;
	// StbImageSharp.StbImage/stbi__zhuffman/<size>e__FixedBuffer StbImageSharp.StbImage/stbi__zhuffman::size
	U3CsizeU3Ee__FixedBuffer_tA5EED7AAFF5C987DEA58EF2BCB603173B5933796 ___size_4;
	// StbImageSharp.StbImage/stbi__zhuffman/<value>e__FixedBuffer StbImageSharp.StbImage/stbi__zhuffman::value
	U3CvalueU3Ee__FixedBuffer_t2648F8501F6C9C6C98680C65D3683DC2E8A22269 ___value_5;
};

// Hebron.Runtime.UnsafeArray1D`1<System.Int32>
struct UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933  : public RuntimeObject
{
	// T[] Hebron.Runtime.UnsafeArray1D`1::_data
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____data_0;
	// System.Runtime.InteropServices.GCHandle Hebron.Runtime.UnsafeArray1D`1::_pinHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____pinHandle_1;
};

// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__gif_lzw>
struct UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE  : public RuntimeObject
{
	// T[] Hebron.Runtime.UnsafeArray1D`1::_data
	stbi__gif_lzwU5BU5D_tB5A2B5B4D4201620767C50C204468DF525E515EA* ____data_0;
	// System.Runtime.InteropServices.GCHandle Hebron.Runtime.UnsafeArray1D`1::_pinHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____pinHandle_1;
};

// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__huffman>
struct UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA  : public RuntimeObject
{
	// T[] Hebron.Runtime.UnsafeArray1D`1::_data
	stbi__huffmanU5BU5D_tE287877D7CE84F85179E8AC62EBBEEF8C5018D7D* ____data_0;
	// System.Runtime.InteropServices.GCHandle Hebron.Runtime.UnsafeArray1D`1::_pinHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____pinHandle_1;
};

// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__jpeg/unnamed1>
struct UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A  : public RuntimeObject
{
	// T[] Hebron.Runtime.UnsafeArray1D`1::_data
	unnamed1U5BU5D_t2B4E41863CB26AD2BBF0696E3942CC235C404500* ____data_0;
	// System.Runtime.InteropServices.GCHandle Hebron.Runtime.UnsafeArray1D`1::_pinHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____pinHandle_1;
};

// Hebron.Runtime.UnsafeArray2D`1<System.Byte>
struct UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4  : public RuntimeObject
{
	// Hebron.Runtime.UnsafeArray1D`1<T>[] Hebron.Runtime.UnsafeArray2D`1::_data
	UnsafeArray1D_1U5BU5D_t220DC4C289564FBE7D184AE542EB9E05B037BC66* ____data_0;
	// System.IntPtr[] Hebron.Runtime.UnsafeArray2D`1::_pinAddresses
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ____pinAddresses_1;
	// System.Runtime.InteropServices.GCHandle Hebron.Runtime.UnsafeArray2D`1::_pinAddressesHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____pinAddressesHandle_2;
};

// Hebron.Runtime.UnsafeArray2D`1<System.Int16>
struct UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794  : public RuntimeObject
{
	// Hebron.Runtime.UnsafeArray1D`1<T>[] Hebron.Runtime.UnsafeArray2D`1::_data
	UnsafeArray1D_1U5BU5D_t0821AF1CF7518A71162EF4994FBEC614A035B3A7* ____data_0;
	// System.IntPtr[] Hebron.Runtime.UnsafeArray2D`1::_pinAddresses
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ____pinAddresses_1;
	// System.Runtime.InteropServices.GCHandle Hebron.Runtime.UnsafeArray2D`1::_pinAddressesHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____pinAddressesHandle_2;
};

// Hebron.Runtime.UnsafeArray2D`1<System.UInt16>
struct UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF  : public RuntimeObject
{
	// Hebron.Runtime.UnsafeArray1D`1<T>[] Hebron.Runtime.UnsafeArray2D`1::_data
	UnsafeArray1D_1U5BU5D_t4748D8DC93DBE63F9BDD18376ADC4866F956E9D9* ____data_0;
	// System.IntPtr[] Hebron.Runtime.UnsafeArray2D`1::_pinAddresses
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ____pinAddresses_1;
	// System.Runtime.InteropServices.GCHandle Hebron.Runtime.UnsafeArray2D`1::_pinAddressesHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____pinAddressesHandle_2;
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

// StbImageSharp.StbImage/stbi__zbuf
struct stbi__zbuf_t58A44F2C744098B756F442EEDE650373216F9350 
{
	// System.Byte* StbImageSharp.StbImage/stbi__zbuf::zbuffer
	uint8_t* ___zbuffer_0;
	// System.Byte* StbImageSharp.StbImage/stbi__zbuf::zbuffer_end
	uint8_t* ___zbuffer_end_1;
	// System.Int32 StbImageSharp.StbImage/stbi__zbuf::num_bits
	int32_t ___num_bits_2;
	// System.UInt32 StbImageSharp.StbImage/stbi__zbuf::code_buffer
	uint32_t ___code_buffer_3;
	// System.SByte* StbImageSharp.StbImage/stbi__zbuf::zout
	int8_t* ___zout_4;
	// System.SByte* StbImageSharp.StbImage/stbi__zbuf::zout_start
	int8_t* ___zout_start_5;
	// System.SByte* StbImageSharp.StbImage/stbi__zbuf::zout_end
	int8_t* ___zout_end_6;
	// System.Int32 StbImageSharp.StbImage/stbi__zbuf::z_expandable
	int32_t ___z_expandable_7;
	// StbImageSharp.StbImage/stbi__zhuffman StbImageSharp.StbImage/stbi__zbuf::z_length
	stbi__zhuffman_tEF89BE72EF0A393157143301325CF80E399CB2FB ___z_length_8;
	// StbImageSharp.StbImage/stbi__zhuffman StbImageSharp.StbImage/stbi__zbuf::z_distance
	stbi__zhuffman_tEF89BE72EF0A393157143301325CF80E399CB2FB ___z_distance_9;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
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

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// StbImageSharp.StbImage/delegate0
struct delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9  : public MulticastDelegate_t
{
};

// StbImageSharp.StbImage/delegate1
struct delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42  : public MulticastDelegate_t
{
};

// StbImageSharp.StbImage/delegate2
struct delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// <Module>

// <Module>

// StbImageSharp.AnimatedGifEnumerable

// StbImageSharp.AnimatedGifEnumerable

// StbImageSharp.AnimatedGifEnumerator

// StbImageSharp.AnimatedGifEnumerator

// Hebron.Runtime.CRuntime
struct CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_StaticFields
{
	// System.String Hebron.Runtime.CRuntime::numbers
	String_t* ___numbers_0;
};

// Hebron.Runtime.CRuntime

// System.Globalization.CultureInfo
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

// System.Globalization.CultureInfo

// SystemHalf.HalfHelper
struct HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields
{
	// System.UInt32[] SystemHalf.HalfHelper::MantissaTable
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___MantissaTable_0;
	// System.UInt32[] SystemHalf.HalfHelper::ExponentTable
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ExponentTable_1;
	// System.UInt16[] SystemHalf.HalfHelper::OffsetTable
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___OffsetTable_2;
	// System.UInt16[] SystemHalf.HalfHelper::BaseTable
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___BaseTable_3;
	// System.SByte[] SystemHalf.HalfHelper::ShiftTable
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___ShiftTable_4;
};

// SystemHalf.HalfHelper

// StbImageSharp.ImageResult

// StbImageSharp.ImageResult

// StbImageSharp.ImageResultFloat

// StbImageSharp.ImageResultFloat

// System.MarshalByRefObject

// System.MarshalByRefObject

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// Hebron.Runtime.MemoryStats
struct MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E_StaticFields
{
	// System.Int32 Hebron.Runtime.MemoryStats::_allocations
	int32_t ____allocations_0;
};

// Hebron.Runtime.MemoryStats

// StbImageSharp.StbImage
struct StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_StaticFields
{
	// System.String StbImageSharp.StbImage::stbi__g_failure_reason
	String_t* ___stbi__g_failure_reason_0;
	// System.Char[] StbImageSharp.StbImage::stbi__parse_png_file_invalid_chunk
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___stbi__parse_png_file_invalid_chunk_1;
	// System.Byte[] StbImageSharp.StbImage::stbi__compute_huffman_codes_length_dezigzag
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___stbi__compute_huffman_codes_length_dezigzag_12;
	// System.Int32 StbImageSharp.StbImage::stbi__de_iphone_flag_global
	int32_t ___stbi__de_iphone_flag_global_13;
	// System.Int32 StbImageSharp.StbImage::stbi__de_iphone_flag_local
	int32_t ___stbi__de_iphone_flag_local_14;
	// System.Int32 StbImageSharp.StbImage::stbi__de_iphone_flag_set
	int32_t ___stbi__de_iphone_flag_set_15;
	// System.Single StbImageSharp.StbImage::stbi__h2l_gamma_i
	float ___stbi__h2l_gamma_i_16;
	// System.Single StbImageSharp.StbImage::stbi__h2l_scale_i
	float ___stbi__h2l_scale_i_17;
	// System.Single StbImageSharp.StbImage::stbi__l2h_gamma
	float ___stbi__l2h_gamma_18;
	// System.Single StbImageSharp.StbImage::stbi__l2h_scale
	float ___stbi__l2h_scale_19;
	// System.Byte[] StbImageSharp.StbImage::stbi__process_frame_header_rgb
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___stbi__process_frame_header_rgb_20;
	// System.Byte[] StbImageSharp.StbImage::stbi__process_marker_tag
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___stbi__process_marker_tag_21;
	// System.Int32[] StbImageSharp.StbImage::stbi__shiftsigned_mul_table
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___stbi__shiftsigned_mul_table_22;
	// System.Int32[] StbImageSharp.StbImage::stbi__shiftsigned_shift_table
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___stbi__shiftsigned_shift_table_23;
	// System.Int32 StbImageSharp.StbImage::stbi__unpremultiply_on_load_global
	int32_t ___stbi__unpremultiply_on_load_global_24;
	// System.Int32 StbImageSharp.StbImage::stbi__unpremultiply_on_load_local
	int32_t ___stbi__unpremultiply_on_load_local_25;
	// System.Int32 StbImageSharp.StbImage::stbi__unpremultiply_on_load_set
	int32_t ___stbi__unpremultiply_on_load_set_26;
	// System.Int32 StbImageSharp.StbImage::stbi__vertically_flip_on_load_global
	int32_t ___stbi__vertically_flip_on_load_global_27;
	// System.Int32 StbImageSharp.StbImage::stbi__vertically_flip_on_load_local
	int32_t ___stbi__vertically_flip_on_load_local_28;
	// System.Int32 StbImageSharp.StbImage::stbi__vertically_flip_on_load_set
	int32_t ___stbi__vertically_flip_on_load_set_29;
	// System.UInt32[] StbImageSharp.StbImage::stbi__bmask
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___stbi__bmask_30;
	// System.Int32[] StbImageSharp.StbImage::stbi__jbias
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___stbi__jbias_31;
	// System.Byte[] StbImageSharp.StbImage::stbi__jpeg_dezigzag
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___stbi__jpeg_dezigzag_32;
	// System.Byte[] StbImageSharp.StbImage::first_row_filter
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___first_row_filter_40;
	// System.Byte[] StbImageSharp.StbImage::stbi__check_png_header_png_sig
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___stbi__check_png_header_png_sig_41;
	// System.Byte[] StbImageSharp.StbImage::stbi__depth_scale_table
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___stbi__depth_scale_table_42;
	// System.Byte[] StbImageSharp.StbImage::stbi__zdefault_distance
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___stbi__zdefault_distance_43;
	// System.Byte[] StbImageSharp.StbImage::stbi__zdefault_length
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___stbi__zdefault_length_44;
	// System.Int32[] StbImageSharp.StbImage::stbi__zdist_base
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___stbi__zdist_base_45;
	// System.Int32[] StbImageSharp.StbImage::stbi__zdist_extra
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___stbi__zdist_extra_46;
	// System.Int32[] StbImageSharp.StbImage::stbi__zlength_base
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___stbi__zlength_base_47;
	// System.Int32[] StbImageSharp.StbImage::stbi__zlength_extra
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___stbi__zlength_extra_48;
};

// StbImageSharp.StbImage

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// StbImageSharp.StbImage/stbi__context

// StbImageSharp.StbImage/stbi__context

// StbImageSharp.StbImage/stbi__gif

// StbImageSharp.StbImage/stbi__gif

// StbImageSharp.StbImage/stbi__jpeg

// StbImageSharp.StbImage/stbi__jpeg

// StbImageSharp.StbImage/stbi__png

// StbImageSharp.StbImage/stbi__png

// StbImageSharp.StbImage/stbi__resample

// StbImageSharp.StbImage/stbi__resample

// StbImageSharp.AnimatedFrameResult

// StbImageSharp.AnimatedFrameResult

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.DateTime
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

// System.DateTime

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Decimal

// System.Double

// System.Double

// SystemHalf.Half
struct Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_StaticFields
{
	// SystemHalf.Half SystemHalf.Half::Epsilon
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___Epsilon_1;
	// SystemHalf.Half SystemHalf.Half::MaxValue
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___MaxValue_2;
	// SystemHalf.Half SystemHalf.Half::MinValue
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___MinValue_3;
	// SystemHalf.Half SystemHalf.Half::NaN
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___NaN_4;
	// SystemHalf.Half SystemHalf.Half::NegativeInfinity
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___NegativeInfinity_5;
	// SystemHalf.Half SystemHalf.Half::PositiveInfinity
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___PositiveInfinity_6;
};

// SystemHalf.Half

// StbImageSharp.ImageInfo

// StbImageSharp.ImageInfo

// System.Int16

// System.Int16

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

// System.SByte

// System.SByte

// System.Single

// System.Single

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=124

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=124

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=19

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=19

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=79

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=79

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9

// StbImageSharp.StbImage/stbi__bmp_data

// StbImageSharp.StbImage/stbi__bmp_data

// StbImageSharp.StbImage/stbi__gif_lzw

// StbImageSharp.StbImage/stbi__gif_lzw

// StbImageSharp.StbImage/stbi__pngchunk

// StbImageSharp.StbImage/stbi__pngchunk

// StbImageSharp.StbImage/stbi__result_info

// StbImageSharp.StbImage/stbi__result_info

// StbImageSharp.StbImage/stbi__huffman/<code>e__FixedBuffer

// StbImageSharp.StbImage/stbi__huffman/<code>e__FixedBuffer

// StbImageSharp.StbImage/stbi__huffman/<delta>e__FixedBuffer

// StbImageSharp.StbImage/stbi__huffman/<delta>e__FixedBuffer

// StbImageSharp.StbImage/stbi__huffman/<fast>e__FixedBuffer

// StbImageSharp.StbImage/stbi__huffman/<fast>e__FixedBuffer

// StbImageSharp.StbImage/stbi__huffman/<maxcode>e__FixedBuffer

// StbImageSharp.StbImage/stbi__huffman/<maxcode>e__FixedBuffer

// StbImageSharp.StbImage/stbi__huffman/<size>e__FixedBuffer

// StbImageSharp.StbImage/stbi__huffman/<size>e__FixedBuffer

// StbImageSharp.StbImage/stbi__huffman/<values>e__FixedBuffer

// StbImageSharp.StbImage/stbi__huffman/<values>e__FixedBuffer

// StbImageSharp.StbImage/stbi__jpeg/unnamed1

// StbImageSharp.StbImage/stbi__jpeg/unnamed1

// StbImageSharp.StbImage/stbi__zhuffman/<fast>e__FixedBuffer

// StbImageSharp.StbImage/stbi__zhuffman/<fast>e__FixedBuffer

// StbImageSharp.StbImage/stbi__zhuffman/<firstcode>e__FixedBuffer

// StbImageSharp.StbImage/stbi__zhuffman/<firstcode>e__FixedBuffer

// StbImageSharp.StbImage/stbi__zhuffman/<firstsymbol>e__FixedBuffer

// StbImageSharp.StbImage/stbi__zhuffman/<firstsymbol>e__FixedBuffer

// StbImageSharp.StbImage/stbi__zhuffman/<maxcode>e__FixedBuffer

// StbImageSharp.StbImage/stbi__zhuffman/<maxcode>e__FixedBuffer

// StbImageSharp.StbImage/stbi__zhuffman/<size>e__FixedBuffer

// StbImageSharp.StbImage/stbi__zhuffman/<size>e__FixedBuffer

// StbImageSharp.StbImage/stbi__zhuffman/<value>e__FixedBuffer

// StbImageSharp.StbImage/stbi__zhuffman/<value>e__FixedBuffer

// System.Nullable`1<StbImageSharp.ImageInfo>

// System.Nullable`1<StbImageSharp.ImageInfo>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t363C11D6C0FC38C8701B3E594E141E3E35D71537_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5 <PrivateImplementationDetails>::029945BAE664FE195CC5AF19BA36CCAE0B9BC5E3370C6DEF532DFEFCBCB82CAC
	__StaticArrayInitTypeSizeU3D5_tC1F6D711158DBDED87D75A12E5F8A77C529961D8 ___029945BAE664FE195CC5AF19BA36CCAE0B9BC5E3370C6DEF532DFEFCBCB82CAC_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=124 <PrivateImplementationDetails>::05DC117CB79F96DEC3B548CF4B692C39F7CCAF151BF747E24E1B794B7504AA61
	__StaticArrayInitTypeSizeU3D124_t9FAD538EC11CC303C45220E1547C1E92DC5E7940 ___05DC117CB79F96DEC3B548CF4B692C39F7CCAF151BF747E24E1B794B7504AA61_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::0C2F9E6FD2E221EA3DD3CE8CC78E50B3315BA80E0A7E33DFB4D858CAE5F1719C
	__StaticArrayInitTypeSizeU3D6_tB8038ACD9F5AE15D04B86955781E81EAC647325A ___0C2F9E6FD2E221EA3DD3CE8CC78E50B3315BA80E0A7E33DFB4D858CAE5F1719C_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=19 <PrivateImplementationDetails>::111B15B20E0428A22EEAA1E54B0D3B008A7A3E79C8F7F4E783710F569E9CEF15
	__StaticArrayInitTypeSizeU3D19_t5589C48E49CA054DFDADD530BD4FE5DA90E1351D ___111B15B20E0428A22EEAA1E54B0D3B008A7A3E79C8F7F4E783710F569E9CEF15_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::2CD5B36116DE5C704183F639C1F6531265C8EBCB4C9A5AF7833BD29CD7F027AA
	__StaticArrayInitTypeSizeU3D128_t359A8FF192786412EB0870773A023EF19E7B83DB ___2CD5B36116DE5C704183F639C1F6531265C8EBCB4C9A5AF7833BD29CD7F027AA_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::4C0A60625340FE660C27D4A2BA915E2E5AD493C57113163C76EB86F59568D77A
	__StaticArrayInitTypeSizeU3D64_t47E0416979C28EDE5E725E64685E2CDE1A7866A9 ___4C0A60625340FE660C27D4A2BA915E2E5AD493C57113163C76EB86F59568D77A_5;
	// System.Int64 <PrivateImplementationDetails>::4C4B6A3BE1314AB86138BEF4314DDE022E600960D8689A2C8F8631802D20DAB6
	int64_t ___4C4B6A3BE1314AB86138BEF4314DDE022E600960D8689A2C8F8631802D20DAB6_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=124 <PrivateImplementationDetails>::61358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1
	__StaticArrayInitTypeSizeU3D124_t9FAD538EC11CC303C45220E1547C1E92DC5E7940 ___61358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::69CFCD204139E3D59A37422A3FE25BDD6805F7E83112690162FA2B9A57CFB826
	__StaticArrayInitTypeSizeU3D128_t359A8FF192786412EB0870773A023EF19E7B83DB ___69CFCD204139E3D59A37422A3FE25BDD6805F7E83112690162FA2B9A57CFB826_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::88B5990F3FF597306BB82CF38AC0D3ECBB7117D57D7424EAB20CC938A5083BB1
	__StaticArrayInitTypeSizeU3D3_t4163E34A7D06F8C964ED17C35882E1B7EFDA0894 ___88B5990F3FF597306BB82CF38AC0D3ECBB7117D57D7424EAB20CC938A5083BB1_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::BD004F507737AFE9A5127B20A212A1A346E309DD991562336A3CFF3E941B8142
	__StaticArrayInitTypeSizeU3D36_t14F4C5B2ADAF1F5BA2732D56C8B023D7F8294BCC ___BD004F507737AFE9A5127B20A212A1A346E309DD991562336A3CFF3E941B8142_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C
	__StaticArrayInitTypeSizeU3D68_t2802E91BC788DD006C1DEC745A4CFC203BB19610 ___CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288 <PrivateImplementationDetails>::D52FF0C78190BA319C56A4004D0ED7355C78A3F4EE0491E5E47A4496D617F5AE
	__StaticArrayInitTypeSizeU3D288_tB38B4224032671F40D3AF231F6D3E9A3AB46217C ___D52FF0C78190BA319C56A4004D0ED7355C78A3F4EE0491E5E47A4496D617F5AE_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=79 <PrivateImplementationDetails>::D88A0E4B2284FD3C191AC28BD7456CA29921C0078CADDE100FDDFF90B4D66181
	__StaticArrayInitTypeSizeU3D79_t2115F2EF531D1799843ECBDFAA686AAC42D22093 ___D88A0E4B2284FD3C191AC28BD7456CA29921C0078CADDE100FDDFF90B4D66181_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::D8E2E17697CDF4DB31BB89B24FB41B19FE734E28DD8DD0B3FF7DF1B590124693
	__StaticArrayInitTypeSizeU3D9_t676B9CDD70AE69DE0625C32889D961A2DC9EFCF8 ___D8E2E17697CDF4DB31BB89B24FB41B19FE734E28DD8DD0B3FF7DF1B590124693_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::ED0CB54984A296FABC52C07AFE2E18863A2CC3A3747ECBBB6EDC5064E2286879
	__StaticArrayInitTypeSizeU3D36_t14F4C5B2ADAF1F5BA2732D56C8B023D7F8294BCC ___ED0CB54984A296FABC52C07AFE2E18863A2CC3A3747ECBBB6EDC5064E2286879_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::F849D67325FACF04177BC663B2DC544051831C589EF581D412F2EBA44834E77C
	__StaticArrayInitTypeSizeU3D32_tB0219EF63295A20A039D1CD892BB143A81B92541 ___F849D67325FACF04177BC663B2DC544051831C589EF581D412F2EBA44834E77C_16;
};

// <PrivateImplementationDetails>

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Runtime.InteropServices.GCHandle

// System.Runtime.InteropServices.GCHandle

// System.IO.MemoryStream

// System.IO.MemoryStream

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// StbImageSharp.StbImage/stbi__huffman

// StbImageSharp.StbImage/stbi__huffman

// StbImageSharp.StbImage/stbi__zhuffman

// StbImageSharp.StbImage/stbi__zhuffman

// Hebron.Runtime.UnsafeArray1D`1<System.Int32>

// Hebron.Runtime.UnsafeArray1D`1<System.Int32>

// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__gif_lzw>

// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__gif_lzw>

// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__huffman>

// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__huffman>

// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__jpeg/unnamed1>

// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__jpeg/unnamed1>

// Hebron.Runtime.UnsafeArray2D`1<System.Byte>

// Hebron.Runtime.UnsafeArray2D`1<System.Byte>

// Hebron.Runtime.UnsafeArray2D`1<System.Int16>

// Hebron.Runtime.UnsafeArray2D`1<System.Int16>

// Hebron.Runtime.UnsafeArray2D`1<System.UInt16>

// Hebron.Runtime.UnsafeArray2D`1<System.UInt16>

// System.MulticastDelegate

// System.MulticastDelegate

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

// StbImageSharp.StbImage/stbi__zbuf

// StbImageSharp.StbImage/stbi__zbuf

// System.ArgumentException

// System.ArgumentException

// System.ArithmeticException

// System.ArithmeticException

// System.AsyncCallback

// System.AsyncCallback

// System.InvalidCastException

// System.InvalidCastException

// System.InvalidOperationException

// System.InvalidOperationException

// System.NotImplementedException

// System.NotImplementedException

// StbImageSharp.StbImage/delegate0

// StbImageSharp.StbImage/delegate0

// StbImageSharp.StbImage/delegate1

// StbImageSharp.StbImage/delegate1

// StbImageSharp.StbImage/delegate2

// StbImageSharp.StbImage/delegate2

// System.ArgumentNullException

// System.ArgumentNullException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
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


// System.Void System.Nullable`1<StbImageSharp.ImageInfo>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m2290BB1875E64452A7C9959B7E71F75E5B39F701_gshared (Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A* __this, ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C ___0_value, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__gif_lzw>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeArray1D_1__ctor_m75FD4AC5FDF39ECCC52B84F34324B535D1455001_gshared (UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE* __this, int32_t ___0_size, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.UnsafeArray2D`1<System.Byte>::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeArray2D_1__ctor_m3A58CFC7D1EED7D3D5087499656F8833CB720624_gshared (UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4* __this, int32_t ___0_size1, int32_t ___1_size2, const RuntimeMethod* method) ;
// System.Void* Hebron.Runtime.UnsafeArray2D`1<System.Byte>::op_Implicit(Hebron.Runtime.UnsafeArray2D`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeArray2D_1_op_Implicit_m70B5987ED11018AA1B208A0B5BF2D3C16A07FA04_gshared (UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4* ___0_array, const RuntimeMethod* method) ;
// System.Void* Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__gif_lzw>::op_Implicit(Hebron.Runtime.UnsafeArray1D`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeArray1D_1_op_Implicit_m6541926AF5FCE50202474E3C045787ABE550A256_gshared (UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE* ___0_array, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.UnsafeArray2D`1<System.UInt16>::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeArray2D_1__ctor_m5ED6464C063FDB0E310BC0AC417ACCE4B08D7A41_gshared (UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF* __this, int32_t ___0_size1, int32_t ___1_size2, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.UnsafeArray2D`1<System.Int16>::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeArray2D_1__ctor_m4B656CBF9E31CBD022740B8F979CE85FDBE33B20_gshared (UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794* __this, int32_t ___0_size1, int32_t ___1_size2, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__huffman>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeArray1D_1__ctor_m80391CAC93DAF529FDA5AC99D18457B15FD0007B_gshared (UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA* __this, int32_t ___0_size, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__jpeg/unnamed1>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeArray1D_1__ctor_m742DAE97CC04FF2A5C951005E7E1DEAE976FD4B1_gshared (UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A* __this, int32_t ___0_size, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.UnsafeArray1D`1<System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeArray1D_1__ctor_mF515A01BB21FA30A4F292F4417C31C5E8B88F46E_gshared (UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933* __this, int32_t ___0_size, const RuntimeMethod* method) ;
// System.Void* Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__huffman>::op_Implicit(Hebron.Runtime.UnsafeArray1D`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeArray1D_1_op_Implicit_m4D9430D6AC327C03284B4A81786AE78DCA2EF354_gshared (UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA* ___0_array, const RuntimeMethod* method) ;
// System.Void* Hebron.Runtime.UnsafeArray2D`1<System.UInt16>::op_Implicit(Hebron.Runtime.UnsafeArray2D`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeArray2D_1_op_Implicit_mBEFA368E08328EEAC109432ECC9DC849C4C8CF1F_gshared (UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF* ___0_array, const RuntimeMethod* method) ;
// System.Void* Hebron.Runtime.UnsafeArray2D`1<System.Int16>::op_Implicit(Hebron.Runtime.UnsafeArray2D`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeArray2D_1_op_Implicit_m49A2133A13994F72DAB2CA613E74AF6C8C5F1413_gshared (UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794* ___0_array, const RuntimeMethod* method) ;
// System.Void* Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__jpeg/unnamed1>::op_Implicit(Hebron.Runtime.UnsafeArray1D`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeArray1D_1_op_Implicit_mC0F446E66C867587CA19A5DF4FB883EB8676D772_gshared (UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A* ___0_array, const RuntimeMethod* method) ;
// System.Void* Hebron.Runtime.UnsafeArray1D`1<System.Int32>::op_Implicit(Hebron.Runtime.UnsafeArray1D`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeArray1D_1_op_Implicit_mE32AAEFB2E0B4E9E8536ECF5A2B32906DBA0AE73_gshared (UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933* ___0_array, const RuntimeMethod* method) ;

// System.Void* Hebron.Runtime.CRuntime::malloc(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* CRuntime_malloc_mCE71AF0C12DCD31D101BF702F2BEF056E3A628A0 (int64_t ___0_size, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F (int32_t ___0_cb, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.MemoryStats::Allocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStats_Allocated_m820230A41F5D2BAE3A5FC06853FBCA5D8A26EC86 (const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9 (intptr_t ___0_hglobal, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.MemoryStats::Freed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStats_Freed_m599B82289BAC4971DFA13FA820847A162637B0DE (const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.CRuntime::memcpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_memcpy_m8EE34595CD2FEE404D89C5FD2880FBB82CBA7B6A (void* ___0_a, void* ___1_b, int64_t ___2_size, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.CRuntime::free(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_free_m9820C32B8AB5BB989140A905BE68364EDAFBD15D (void* ___0_a, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.CRuntime::memmove(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_memmove_m22740429050BBD8B24A8E6BAC4CFFE7245B54AF8 (void* ___0_a, void* ___1_b, int64_t ___2_size, const RuntimeMethod* method) ;
// System.Int32 Hebron.Runtime.CRuntime::memcmp(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRuntime_memcmp_m674D9D76BA3D282F6ADB2FC02D9FF9816F036359 (void* ___0_a, void* ___1_b, int64_t ___2_size, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.CRuntime::memset(System.Void*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_memset_m96A02F8228AC54CAA2BF576499DD73F4F4FC4022 (void* ___0_ptr, int32_t ___1_value, int64_t ___2_size, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC (intptr_t* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::ReAllocHGlobal(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_ReAllocHGlobal_mA5C1E0A9FE631E69DA8EE674B31709F0F14AA9BD (intptr_t ___0_pv, intptr_t ___1_cb, const RuntimeMethod* method) ;
// System.Void* Hebron.Runtime.CRuntime::realloc(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* CRuntime_realloc_m4AA55F39D9F49BEFDB7CA5B68BF45A5071CA7966 (void* ___0_a, int64_t ___1_newSize, const RuntimeMethod* method) ;
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265 (double ___0_x, double ___1_y, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___0_location, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Decrement(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Decrement_m6AFAD2E874CBDA373B1EF7572F11D6E91813E75D (int32_t* ___0_location, const RuntimeMethod* method) ;
// SystemHalf.Half SystemHalf.HalfHelper::SingleToHalf(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 HalfHelper_SingleToHalf_m68366D0080449E774C1158AE47AE6E37424987BF (float ___0_single, const RuntimeMethod* method) ;
// System.Void SystemHalf.Half::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void SystemHalf.Half::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_m42D93709E720FF28A18018A0CCEA6D6EFF3F6216 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void SystemHalf.Half::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_mC827819362E6EEF8763C6C3A74D479727CED4FF8 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.Void SystemHalf.Half::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_mF7BDDCB57D11ABBD813D5E8FD90C45723E4B369D (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Single System.Decimal::op_Explicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Decimal_op_Explicit_mFE383D1954522ECA8822B56A7C59794B850FE4C1 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) ;
// System.Void SystemHalf.Half::.ctor(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_m21050D141F9162158AADB10D10F9E6FBED8B9F56 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) ;
// System.Void SystemHalf.Half::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_mFD542200F7DDC2FF929D0D3480BA36452598F02B (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Void SystemHalf.Half::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_m87ABACCF15B2639C42FBFBB6E7875565BC45DCC7 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
// SystemHalf.Half SystemHalf.Half::op_UnaryNegation(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_UnaryNegation_m7996D5D75DE83A71826C05E328A5A8F4FBC73163 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) ;
// SystemHalf.Half SystemHalf.Half::op_Addition(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Addition_m09C4F202C78DA4A39AF929FF35880E59B5CCA91D (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_half2, const RuntimeMethod* method) ;
// SystemHalf.Half SystemHalf.Half::op_Subtraction(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Subtraction_m5440003E12FB156831AA9FF3C87690E9516923B3 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_half2, const RuntimeMethod* method) ;
// SystemHalf.Half SystemHalf.Half::op_Multiply(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Multiply_m1EE7C2A91976DFC42431833E2CBE6CD67F2E042A (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_half2, const RuntimeMethod* method) ;
// SystemHalf.Half SystemHalf.Half::op_Division(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Division_m294E526C62467EB392104AE0D558D0FE5A9DFCE5 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_half2, const RuntimeMethod* method) ;
// SystemHalf.Half SystemHalf.HalfHelper::Negate(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 HalfHelper_Negate_mB50E440868A2EF2A9BE134C3AE37EE69E664394E (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) ;
// System.Single SystemHalf.Half::op_Implicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_value, const RuntimeMethod* method) ;
// SystemHalf.Half SystemHalf.Half::op_Explicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Explicit_m13A3CED333F8D63339E0DDE5F852A985072A4295 (float ___0_value, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.Half::IsNaN(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_IsNaN_mBCA1A85D6E7D69E68E95A9EA2994C5D3AFE21D24 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.Half::op_Equality(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_op_Equality_m257EA083C4AED617FB589F3C14B6D0246C5800EA (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_half2, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.Half::op_LessThan(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_op_LessThan_m50285754C7CA18E84B2C5FF9BF4413729588FCF4 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_half2, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.Half::op_GreaterThan(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_op_GreaterThan_mBAB4B71D1036E2116B0403E9E65A016D65D3CE58 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_half2, const RuntimeMethod* method) ;
// System.Single SystemHalf.HalfHelper::HalfToSingle(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HalfHelper_HalfToSingle_mCC84820A87B56F63D7738618771599AE013752E2 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Explicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Explicit_m2B8355EC2618BDE4A6813C6826D9E3B996B9E22F (float ___0_value, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.Half::op_Inequality(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_op_Inequality_mF118C9405CE5761E841030EB82475D08C8F26DB2 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_half2, const RuntimeMethod* method) ;
// System.Int32 SystemHalf.Half::CompareTo(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_CompareTo_m15EFD81A7DC0E77F9B0B2B5E7FF6C43EF69FBDB4 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_other, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 SystemHalf.Half::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_CompareTo_m9EC79B9359AD9C276FA4F1850C015053F486058F (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.Half::Equals(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_Equals_mC9CCB515A296CB1D66CFCEF7BB5A6E0EFD149934 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_other, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.Half::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_Equals_m6102C810AA7FC6A7281E1BB4C5020FDA8128021F (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.UInt16::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200 (uint16_t* __this, const RuntimeMethod* method) ;
// System.Int32 SystemHalf.Half::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_GetHashCode_m97AF96A3B63244D97C77F076FD9E6A92AE6907BB (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, const RuntimeMethod* method) ;
// System.TypeCode SystemHalf.Half::GetTypeCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_GetTypeCode_m9226F693B79A65F7D0E71022B3EE1178D92E59A6 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m43CB66A3347C3482B6FB2B3FD327F5327C25E18B (uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Int16 System.BitConverter::ToInt16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t BitConverter_ToInt16_m13F278223B819C82CC647398B22C125B02FA2E61 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// SystemHalf.Half SystemHalf.Half::ToHalf(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_ToHalf_mA2110EFA584CF1F47CD6C378142674BC11978F13 (uint16_t ___0_bits, const RuntimeMethod* method) ;
// SystemHalf.Half SystemHalf.Half::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Implicit_m36B6941FE2BFF01A9B390A3EEC86A68EE6E06529 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.ArithmeticException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// SystemHalf.Half SystemHalf.HalfHelper::Abs(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 HalfHelper_Abs_m65148FFFC1BDE1B69B0EF896F004330D82E85E7E (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.HalfHelper::IsNaN(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HalfHelper_IsNaN_m903DC166FEF9ADF2C86154B4F36112FFB406F55D (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.HalfHelper::IsInfinity(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HalfHelper_IsInfinity_m34F08F5E2AD5B54E3DCC4B26A844BF33826F68ED (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.HalfHelper::IsNegativeInfinity(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HalfHelper_IsNegativeInfinity_m39C6E115010F2E434AAF8BCE2D580C814F48F602 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.HalfHelper::IsPositiveInfinity(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HalfHelper_IsPositiveInfinity_m9693C3F57B50D61600FA57843A47DF97C6223483 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_mF40465AC387D690175D63EFFF44B0E810C090786 (String_t* ___0_s, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m0E74607D17E172B4F1306E62BD12CE2905FA5638 (String_t* ___0_s, int32_t ___1_style, RuntimeObject* ___2_provider, const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423 (String_t* ___0_s, float* ___1_result, const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mFB8CC32F0016FBB6EFCB97953CF3515767EB6431 (String_t* ___0_s, int32_t ___1_style, RuntimeObject* ___2_provider, float* ___3_result, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A (float* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.String SystemHalf.Half::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Half_ToString_m0CB28AA1DCE2AB4791737E91B44AFDD23FBF5C36 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, const RuntimeMethod* method) ;
// System.String SystemHalf.Half::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Half_ToString_m42492412EEE4F705FE92EFF98EE649CC38898F5A (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_formatProvider, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE (float* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.String SystemHalf.Half::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Half_ToString_mADF7D744A0E1338340A9E419DC7DDE852229B745 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String SystemHalf.Half::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Half_ToString_m532C547BE12E95051DCEF6BB20B124C106A966F6 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) ;
// System.Single SystemHalf.Half::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Half_System_IConvertible_ToSingle_m72E1B1C02CD516A3943432B4627D169E8D59FCFD (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.TypeCode SystemHalf.Half::System.IConvertible.GetTypeCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_System_IConvertible_GetTypeCode_mD5A24F94E878C4D00F8663E17FB8ADB9D2A0CA6F (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, const RuntimeMethod* method) ;
// System.Boolean System.Convert::ToBoolean(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m73A44AA68F53847BAC4B938953612587F8FBF61B (float ___0_value, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.Half::System.IConvertible.ToBoolean(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_System_IConvertible_ToBoolean_m0684211BEBB80C8D844A264FF01084882940922C (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.Byte System.Convert::ToByte(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_m562731D7CD88E5D6A0B91E05D1B626BC9939E388 (float ___0_value, const RuntimeMethod* method) ;
// System.Byte SystemHalf.Half::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Half_System_IConvertible_ToByte_mBA58E1812B8418EF6B7D595873E32C35E6FAAB9A (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56 (RuntimeObject* ___0_provider, String_t* ___1_format, RuntimeObject* ___2_arg0, RuntimeObject* ___3_arg1, const RuntimeMethod* method) ;
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Char SystemHalf.Half::System.IConvertible.ToChar(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Half_System_IConvertible_ToChar_m7511F58D164EE1F5BEECDEAC63D7746DC7933A92 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.DateTime SystemHalf.Half::System.IConvertible.ToDateTime(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Half_System_IConvertible_ToDateTime_mF0C63EC935FD9BF89F21636569F73F046BC729AB (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.Decimal System.Convert::ToDecimal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Convert_ToDecimal_m0CECFA6799BA3F8CDB59C34287DD5BAE54CC0EBE (float ___0_value, const RuntimeMethod* method) ;
// System.Decimal SystemHalf.Half::System.IConvertible.ToDecimal(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Half_System_IConvertible_ToDecimal_mEFA406DE223C584C875D3EDBF30891EDD5DC3ED2 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mA0069B20491E14DA829FAD261C279A5143B2FAED (float ___0_value, const RuntimeMethod* method) ;
// System.Double SystemHalf.Half::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Half_System_IConvertible_ToDouble_m39C375E4CCA5796DA51C6E7023FA514DD796782A (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.Int16 System.Convert::ToInt16(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_mD3632668808F8502053A6F9FAA6803053A2500D4 (float ___0_value, const RuntimeMethod* method) ;
// System.Int16 SystemHalf.Half::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Half_System_IConvertible_ToInt16_m466A656BEFA1BC3670BC0E3BBC75D3058AC016A0 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m2DD4FF5B07C196D209F4ED8EA8E86CD19207AABE (float ___0_value, const RuntimeMethod* method) ;
// System.Int32 SystemHalf.Half::System.IConvertible.ToInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_System_IConvertible_ToInt32_m752FB024CC8958029FE914A9D81A1BFC7FB49801 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.Int64 System.Convert::ToInt64(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m1203ADC6847D3814963382077D6791E9199DA5BC (float ___0_value, const RuntimeMethod* method) ;
// System.Int64 SystemHalf.Half::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Half_System_IConvertible_ToInt64_m0215CD02A2D56FBCA38F97760CC0C0DB55CEF4A2 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.SByte System.Convert::ToSByte(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Convert_ToSByte_m56DAE9421C6CF1715E574E930F43EBDA8B9435A0 (float ___0_value, const RuntimeMethod* method) ;
// System.SByte SystemHalf.Half::System.IConvertible.ToSByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Half_System_IConvertible_ToSByte_m68A9196F2CFB9C1EC01347EB9E9A233705CE01C8 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Single,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mBFBBE2F36FF6B3235848801940FD15A17028AC70 (float ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.String SystemHalf.Half::System.IConvertible.ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Half_System_IConvertible_ToString_m6C4211CDF08BF30788A1D3ADB2ED4AD6DB69EBE9 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.Object System.Single::System.IConvertible.ToType(System.Type,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Single_System_IConvertible_ToType_m52014373BE33664D69CB4F797F0A78120267EC72 (float* __this, Type_t* ___0_type, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Object SystemHalf.Half::System.IConvertible.ToType(System.Type,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Half_System_IConvertible_ToType_m4EAC816C1ACF3317374B33EA7FC4D00CE4980DCD (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, Type_t* ___0_conversionType, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.UInt16 System.Convert::ToUInt16(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_mED633569E38E21A353AB94FAC298A72200B2BCA4 (float ___0_value, const RuntimeMethod* method) ;
// System.UInt16 SystemHalf.Half::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Half_System_IConvertible_ToUInt16_mF668A08151EFBAFF13F2019B4077F8081FCC09D5 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.UInt32 System.Convert::ToUInt32(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_m28D7D89C7B66C6DF2A88B68973D5691BF28D61CB (float ___0_value, const RuntimeMethod* method) ;
// System.UInt32 SystemHalf.Half::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Half_System_IConvertible_ToUInt32_mAF3B5AB239A3C778225747FB4C7BA0F78B3C9A93 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.UInt64 System.Convert::ToUInt64(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_mB6BD7C3C6B529271A81A86349B9C3C38ABDE6DF7 (float ___0_value, const RuntimeMethod* method) ;
// System.UInt64 SystemHalf.Half::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Half_System_IConvertible_ToUInt64_m05B76C8955DAB709F5560CEBEDF487C8F8128D51 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.UInt32 SystemHalf.HalfHelper::ConvertMantissa(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HalfHelper_ConvertMantissa_mD53E8213555E8DF762C8F0402D3DF0510C1A95B8 (int32_t ___0_i, const RuntimeMethod* method) ;
// System.UInt32[] SystemHalf.HalfHelper::GenerateMantissaTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* HalfHelper_GenerateMantissaTable_mD518335B464B56EE5CBC4026C6EFE151BECB2E4C (const RuntimeMethod* method) ;
// System.UInt32[] SystemHalf.HalfHelper::GenerateExponentTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* HalfHelper_GenerateExponentTable_m557B2F714859C147620664362C843734205B63EE (const RuntimeMethod* method) ;
// System.UInt16[] SystemHalf.HalfHelper::GenerateOffsetTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* HalfHelper_GenerateOffsetTable_mE61F49B44A1C8B7E34D12FF0999C43B9B0CE24B0 (const RuntimeMethod* method) ;
// System.UInt16[] SystemHalf.HalfHelper::GenerateBaseTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* HalfHelper_GenerateBaseTable_m92B5235476660AFC75D9A79FC8700A4DF86BB7DF (const RuntimeMethod* method) ;
// System.SByte[] SystemHalf.HalfHelper::GenerateShiftTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* HalfHelper_GenerateShiftTable_m53F61D1C0E10CF48A20C88CA195FB3BFBBD9BF8C (const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResult__ctor_mB265989B8E23404BCA3EC4E208A049E1B46B0F04 (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void StbImageSharp.StbImage/stbi__context::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stbi__context__ctor_mC829A0366DACB27129BF977D4B90B9C2326DD40F (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
// System.Int32 StbImageSharp.StbImage::stbi__gif_test(StbImageSharp.StbImage/stbi__context)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StbImage_stbi__gif_test_m1F7DD10DE25B05EED4B616773327231B48406FCC (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ___0_s, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void StbImageSharp.StbImage/stbi__gif::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stbi__gif__ctor_m4655A211D1448DD7C627AE3FA6DF636BD969DEEB (stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* __this, const RuntimeMethod* method) ;
// StbImageSharp.AnimatedFrameResult StbImageSharp.AnimatedGifEnumerator::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345_inline (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// StbImageSharp.ColorComponents StbImageSharp.AnimatedGifEnumerator::get_ColorComponents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnimatedGifEnumerator_get_ColorComponents_m59C0A0CF32749D8E565EAFC8CC201C07C53FB44C_inline (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, const RuntimeMethod* method) ;
// System.Byte* StbImageSharp.StbImage::stbi__gif_load_next(StbImageSharp.StbImage/stbi__context,StbImageSharp.StbImage/stbi__gif,System.Int32*,System.Int32,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* StbImage_stbi__gif_load_next_mE0A04A44BDBC98D4945B4426170F16952A2A3AC5 (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ___0_s, stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* ___1_g, int32_t* ___2_comp, int32_t ___3_req_comp, uint8_t* ___4_two_back, const RuntimeMethod* method) ;
// System.Void StbImageSharp.AnimatedFrameResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedFrameResult__ctor_m859CA547496DD297E7912AF87480551047370B88 (AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* __this, const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResult::set_Width(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResult_set_Width_mAE0222CF14D7CC542BE55D499D08D8B124E788E3_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResult::set_Height(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResult_set_Height_mD2E85A00BF8528F1DE5FC68CBF5FC3DD43DCD603_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResult::set_SourceComp(StbImageSharp.ColorComponents)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResult_set_SourceComp_m99F6BE4EDDAE7B80B3F316737EE9B401DDED9F0F_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResult::set_Comp(StbImageSharp.ColorComponents)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResult_set_Comp_m9EEB51B4B3BEC210CCD4ED65708867686E65175D_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void StbImageSharp.AnimatedGifEnumerator::set_Current(StbImageSharp.AnimatedFrameResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnimatedGifEnumerator_set_Current_mA895B21FF85EBAF2D6508A2C066E57DE8D3B69DF_inline (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* ___0_value, const RuntimeMethod* method) ;
// System.Int32 StbImageSharp.ImageResult::get_Width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ImageResult_get_Width_m6D3AB29E93FBE44C3F43B97D2D8DD5CDA8291270_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) ;
// System.Int32 StbImageSharp.ImageResult::get_Height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ImageResult_get_Height_m987C76BE62465224C54F30712169C963063BF7C9_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) ;
// StbImageSharp.ColorComponents StbImageSharp.ImageResult::get_Comp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ImageResult_get_Comp_mDA76ABF7DFEB671E6A506B45B110CCD516FD7A8F_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResult::set_Data(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResult_set_Data_m1DF0EE05A3AD847A12C8AE138B21E9FA5969FAA3_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
// System.Void StbImageSharp.AnimatedFrameResult::set_DelayInMs(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnimatedFrameResult_set_DelayInMs_mEC055DC8715FC67099CC3974B3981175C8B0535B_inline (AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Byte[] StbImageSharp.ImageResult::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageResult_get_Data_mBD84D1E6BD45AC125145D245EAD933D2B8E51D4B_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___0_source, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_destination, int32_t ___2_startIndex, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// StbImageSharp.ColorComponents StbImageSharp.AnimatedGifEnumerable::get_ColorComponents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnimatedGifEnumerable_get_ColorComponents_mF90D6769F0A2C038057D86AAF7FACA7482A12CBB_inline (AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E* __this, const RuntimeMethod* method) ;
// System.Void StbImageSharp.AnimatedGifEnumerator::.ctor(System.IO.Stream,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedGifEnumerator__ctor_m426872B178B1C6F692C3C12ACE4FCB23BE2EACB4 (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, int32_t ___1_colorComponents, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<StbImageSharp.AnimatedFrameResult> StbImageSharp.AnimatedGifEnumerable::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnimatedGifEnumerable_GetEnumerator_mE25641822012E135FE60531275CF98DA367A8952 (AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E* __this, const RuntimeMethod* method) ;
// System.Int32 StbImageSharp.StbImage::stbi__is_16_main(StbImageSharp.StbImage/stbi__context)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StbImage_stbi__is_16_main_m563DAEE58EF61612556A4976F1E33ECA1DA17A03 (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ___0_s, const RuntimeMethod* method) ;
// System.Void StbImageSharp.StbImage::stbi__rewind(StbImageSharp.StbImage/stbi__context)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StbImage_stbi__rewind_m8B659B2BE37553537E2EEB94131C6E88B07D14B9 (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ___0_s, const RuntimeMethod* method) ;
// System.Int32 StbImageSharp.StbImage::stbi__info_main(StbImageSharp.StbImage/stbi__context,System.Int32*,System.Int32*,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StbImage_stbi__info_main_m17AB2AA6DDD7DBE223BE78B3F5FFCB5ADEBE3E46 (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ___0_s, int32_t* ___1_x, int32_t* ___2_y, int32_t* ___3_comp, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<StbImageSharp.ImageInfo>::.ctor(T)
inline void Nullable_1__ctor_m2290BB1875E64452A7C9959B7E71F75E5B39F701 (Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A* __this, ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A*, ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C, const RuntimeMethod*))Nullable_1__ctor_m2290BB1875E64452A7C9959B7E71F75E5B39F701_gshared)(__this, ___0_value, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Byte* StbImageSharp.StbImage::stbi__load_and_postprocess_8bit(StbImageSharp.StbImage/stbi__context,System.Int32*,System.Int32*,System.Int32*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* StbImage_stbi__load_and_postprocess_8bit_m41723694DB39350A7326D3F6B68EE8C015551F7E (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ___0_s, int32_t* ___1_x, int32_t* ___2_y, int32_t* ___3_comp, int32_t ___4_req_comp, const RuntimeMethod* method) ;
// StbImageSharp.ImageResult StbImageSharp.ImageResult::FromResult(System.Byte*,System.Int32,System.Int32,StbImageSharp.ColorComponents,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* ImageResult_FromResult_m02AAF01184911B3675D8177B3AEC2ED9FCD5CF84 (uint8_t* ___0_result, int32_t ___1_width, int32_t ___2_height, int32_t ___3_comp, int32_t ___4_req_comp, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m55B1A846E0136865C4863E16D8B8002CB11296EE (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_index, int32_t ___2_count, bool ___3_writable, bool ___4_publiclyVisible, const RuntimeMethod* method) ;
// StbImageSharp.ImageResult StbImageSharp.ImageResult::FromStream(System.IO.Stream,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* ImageResult_FromStream_m824B25D04E8EA273005019ABD80F0C8CB25238FD (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_requiredComponents, const RuntimeMethod* method) ;
// System.Void StbImageSharp.AnimatedGifEnumerable::.ctor(System.IO.Stream,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedGifEnumerable__ctor_m2E24AD10C34007EBA587FA263F8F0409357A7E65 (AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, int32_t ___1_colorComponents, const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResultFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResultFloat__ctor_m95C5AABA1DA68A09A339620E529C78ACCE296027 (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResultFloat::set_Width(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResultFloat_set_Width_mD6D7B7CCB2105CCCF379F6F00C440FFC9D46F813_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResultFloat::set_Height(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResultFloat_set_Height_mB942BDF6BA0F6B439BF40B601D7082FC031F3B06_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResultFloat::set_SourceComp(StbImageSharp.ColorComponents)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResultFloat_set_SourceComp_mD18490D71AE38A87CBC39C2B362414F497B3BFDF_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResultFloat::set_Comp(StbImageSharp.ColorComponents)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResultFloat_set_Comp_m7AA2FA993B26946D1DFACB9FB23949268C880D23_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// StbImageSharp.ColorComponents StbImageSharp.ImageResultFloat::get_Comp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ImageResultFloat_get_Comp_m26180735352821C006D877A7FB0077DF0C17929C_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResultFloat::set_Data(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResultFloat_set_Data_m1DB0F811837EE95469ECEF694DA5D9EE92193985_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_value, const RuntimeMethod* method) ;
// System.Single[] StbImageSharp.ImageResultFloat::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ImageResultFloat_get_Data_mF28ABD57A9CEB2A9169DD257AB9A8C98280E6372_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775 (intptr_t ___0_source, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_destination, int32_t ___2_startIndex, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Single* StbImageSharp.StbImage::stbi__loadf_main(StbImageSharp.StbImage/stbi__context,System.Int32*,System.Int32*,System.Int32*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float* StbImage_stbi__loadf_main_m10EEF703B01E09C773F97478660C526B14E7777E (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ___0_s, int32_t* ___1_x, int32_t* ___2_y, int32_t* ___3_comp, int32_t ___4_req_comp, const RuntimeMethod* method) ;
// StbImageSharp.ImageResultFloat StbImageSharp.ImageResultFloat::FromResult(System.Single*,System.Int32,System.Int32,StbImageSharp.ColorComponents,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* ImageResultFloat_FromResult_mC0AF239322A4591986572BDF99872F49C1C81DA3 (float* ___0_result, int32_t ___1_width, int32_t ___2_height, int32_t ___3_comp, int32_t ___4_req_comp, const RuntimeMethod* method) ;
// StbImageSharp.ImageResultFloat StbImageSharp.ImageResultFloat::FromStream(System.IO.Stream,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* ImageResultFloat_FromStream_mE1911EA1BE10D2061C75D45C84BEB10E595D3989 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_requiredComponents, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__gif_lzw>::.ctor(System.Int32)
inline void UnsafeArray1D_1__ctor_m75FD4AC5FDF39ECCC52B84F34324B535D1455001 (UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE* __this, int32_t ___0_size, const RuntimeMethod* method)
{
	((  void (*) (UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE*, int32_t, const RuntimeMethod*))UnsafeArray1D_1__ctor_m75FD4AC5FDF39ECCC52B84F34324B535D1455001_gshared)(__this, ___0_size, method);
}
// System.Void Hebron.Runtime.UnsafeArray2D`1<System.Byte>::.ctor(System.Int32,System.Int32)
inline void UnsafeArray2D_1__ctor_m3A58CFC7D1EED7D3D5087499656F8833CB720624 (UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4* __this, int32_t ___0_size1, int32_t ___1_size2, const RuntimeMethod* method)
{
	((  void (*) (UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4*, int32_t, int32_t, const RuntimeMethod*))UnsafeArray2D_1__ctor_m3A58CFC7D1EED7D3D5087499656F8833CB720624_gshared)(__this, ___0_size1, ___1_size2, method);
}
// System.Void* Hebron.Runtime.UnsafeArray2D`1<System.Byte>::op_Implicit(Hebron.Runtime.UnsafeArray2D`1<T>)
inline void* UnsafeArray2D_1_op_Implicit_m70B5987ED11018AA1B208A0B5BF2D3C16A07FA04 (UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4* ___0_array, const RuntimeMethod* method)
{
	return ((  void* (*) (UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4*, const RuntimeMethod*))UnsafeArray2D_1_op_Implicit_m70B5987ED11018AA1B208A0B5BF2D3C16A07FA04_gshared)(___0_array, method);
}
// System.Void* Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__gif_lzw>::op_Implicit(Hebron.Runtime.UnsafeArray1D`1<T>)
inline void* UnsafeArray1D_1_op_Implicit_m6541926AF5FCE50202474E3C045787ABE550A256 (UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE* ___0_array, const RuntimeMethod* method)
{
	return ((  void* (*) (UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE*, const RuntimeMethod*))UnsafeArray1D_1_op_Implicit_m6541926AF5FCE50202474E3C045787ABE550A256_gshared)(___0_array, method);
}
// System.Void Hebron.Runtime.UnsafeArray2D`1<System.UInt16>::.ctor(System.Int32,System.Int32)
inline void UnsafeArray2D_1__ctor_m5ED6464C063FDB0E310BC0AC417ACCE4B08D7A41 (UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF* __this, int32_t ___0_size1, int32_t ___1_size2, const RuntimeMethod* method)
{
	((  void (*) (UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF*, int32_t, int32_t, const RuntimeMethod*))UnsafeArray2D_1__ctor_m5ED6464C063FDB0E310BC0AC417ACCE4B08D7A41_gshared)(__this, ___0_size1, ___1_size2, method);
}
// System.Void Hebron.Runtime.UnsafeArray2D`1<System.Int16>::.ctor(System.Int32,System.Int32)
inline void UnsafeArray2D_1__ctor_m4B656CBF9E31CBD022740B8F979CE85FDBE33B20 (UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794* __this, int32_t ___0_size1, int32_t ___1_size2, const RuntimeMethod* method)
{
	((  void (*) (UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794*, int32_t, int32_t, const RuntimeMethod*))UnsafeArray2D_1__ctor_m4B656CBF9E31CBD022740B8F979CE85FDBE33B20_gshared)(__this, ___0_size1, ___1_size2, method);
}
// System.Void Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__huffman>::.ctor(System.Int32)
inline void UnsafeArray1D_1__ctor_m80391CAC93DAF529FDA5AC99D18457B15FD0007B (UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA* __this, int32_t ___0_size, const RuntimeMethod* method)
{
	((  void (*) (UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA*, int32_t, const RuntimeMethod*))UnsafeArray1D_1__ctor_m80391CAC93DAF529FDA5AC99D18457B15FD0007B_gshared)(__this, ___0_size, method);
}
// System.Void Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__jpeg/unnamed1>::.ctor(System.Int32)
inline void UnsafeArray1D_1__ctor_m742DAE97CC04FF2A5C951005E7E1DEAE976FD4B1 (UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A* __this, int32_t ___0_size, const RuntimeMethod* method)
{
	((  void (*) (UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A*, int32_t, const RuntimeMethod*))UnsafeArray1D_1__ctor_m742DAE97CC04FF2A5C951005E7E1DEAE976FD4B1_gshared)(__this, ___0_size, method);
}
// System.Void Hebron.Runtime.UnsafeArray1D`1<System.Int32>::.ctor(System.Int32)
inline void UnsafeArray1D_1__ctor_mF515A01BB21FA30A4F292F4417C31C5E8B88F46E (UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933* __this, int32_t ___0_size, const RuntimeMethod* method)
{
	((  void (*) (UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933*, int32_t, const RuntimeMethod*))UnsafeArray1D_1__ctor_mF515A01BB21FA30A4F292F4417C31C5E8B88F46E_gshared)(__this, ___0_size, method);
}
// System.Void* Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__huffman>::op_Implicit(Hebron.Runtime.UnsafeArray1D`1<T>)
inline void* UnsafeArray1D_1_op_Implicit_m4D9430D6AC327C03284B4A81786AE78DCA2EF354 (UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA* ___0_array, const RuntimeMethod* method)
{
	return ((  void* (*) (UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA*, const RuntimeMethod*))UnsafeArray1D_1_op_Implicit_m4D9430D6AC327C03284B4A81786AE78DCA2EF354_gshared)(___0_array, method);
}
// System.Void* Hebron.Runtime.UnsafeArray2D`1<System.UInt16>::op_Implicit(Hebron.Runtime.UnsafeArray2D`1<T>)
inline void* UnsafeArray2D_1_op_Implicit_mBEFA368E08328EEAC109432ECC9DC849C4C8CF1F (UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF* ___0_array, const RuntimeMethod* method)
{
	return ((  void* (*) (UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF*, const RuntimeMethod*))UnsafeArray2D_1_op_Implicit_mBEFA368E08328EEAC109432ECC9DC849C4C8CF1F_gshared)(___0_array, method);
}
// System.Void* Hebron.Runtime.UnsafeArray2D`1<System.Int16>::op_Implicit(Hebron.Runtime.UnsafeArray2D`1<T>)
inline void* UnsafeArray2D_1_op_Implicit_m49A2133A13994F72DAB2CA613E74AF6C8C5F1413 (UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794* ___0_array, const RuntimeMethod* method)
{
	return ((  void* (*) (UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794*, const RuntimeMethod*))UnsafeArray2D_1_op_Implicit_m49A2133A13994F72DAB2CA613E74AF6C8C5F1413_gshared)(___0_array, method);
}
// System.Void* Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__jpeg/unnamed1>::op_Implicit(Hebron.Runtime.UnsafeArray1D`1<T>)
inline void* UnsafeArray1D_1_op_Implicit_mC0F446E66C867587CA19A5DF4FB883EB8676D772 (UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A* ___0_array, const RuntimeMethod* method)
{
	return ((  void* (*) (UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A*, const RuntimeMethod*))UnsafeArray1D_1_op_Implicit_mC0F446E66C867587CA19A5DF4FB883EB8676D772_gshared)(___0_array, method);
}
// System.Void* Hebron.Runtime.UnsafeArray1D`1<System.Int32>::op_Implicit(Hebron.Runtime.UnsafeArray1D`1<T>)
inline void* UnsafeArray1D_1_op_Implicit_mE32AAEFB2E0B4E9E8536ECF5A2B32906DBA0AE73 (UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933* ___0_array, const RuntimeMethod* method)
{
	return ((  void* (*) (UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933*, const RuntimeMethod*))UnsafeArray1D_1_op_Implicit_mE32AAEFB2E0B4E9E8536ECF5A2B32906DBA0AE73_gshared)(___0_array, method);
}
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
// System.Void* Hebron.Runtime.CRuntime::malloc(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* CRuntime_malloc_mCA89C74051CA1F7B7F57E38CB79B5F62F5B3F973 (uint64_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	{
		uint64_t L_0 = ___0_size;
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		void* L_1;
		L_1 = CRuntime_malloc_mCE71AF0C12DCD31D101BF702F2BEF056E3A628A0(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Hebron.Runtime.CRuntime::malloc(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* CRuntime_malloc_mCE71AF0C12DCD31D101BF702F2BEF056E3A628A0 (int64_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	void* V_1 = NULL;
	{
		int64_t L_0 = ___0_size;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(((int32_t)L_0), NULL);
		V_0 = L_1;
		MemoryStats_Allocated_m820230A41F5D2BAE3A5FC06853FBCA5D8A26EC86(NULL);
		void* L_2;
		L_2 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_0), NULL);
		V_1 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		void* L_3 = V_1;
		return L_3;
	}
}
// System.Void Hebron.Runtime.CRuntime::free(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_free_m9820C32B8AB5BB989140A905BE68364EDAFBD15D (void* ___0_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		void* L_0 = ___0_a;
		V_1 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0021;
	}

IL_000c:
	{
		void* L_2 = ___0_a;
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&V_0), L_2, NULL);
		intptr_t L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_3, NULL);
		MemoryStats_Freed_m599B82289BAC4971DFA13FA820847A162637B0DE(NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void Hebron.Runtime.CRuntime::memcpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_memcpy_m8EE34595CD2FEE404D89C5FD2880FBB82CBA7B6A (void* ___0_a, void* ___1_b, int64_t ___2_size, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	int64_t V_2 = 0;
	bool V_3 = false;
	{
		void* L_0 = ___0_a;
		V_0 = (uint8_t*)L_0;
		void* L_1 = ___1_b;
		V_1 = (uint8_t*)L_1;
		V_2 = ((int64_t)0);
		goto IL_001b;
	}

IL_000a:
	{
		uint8_t* L_2 = V_0;
		uint8_t* L_3 = L_2;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, 1));
		uint8_t* L_4 = V_1;
		uint8_t* L_5 = L_4;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, 1));
		int32_t L_6 = *((uint8_t*)L_5);
		*((int8_t*)L_3) = (int8_t)L_6;
		int64_t L_7 = V_2;
		V_2 = ((int64_t)il2cpp_codegen_add(L_7, ((int64_t)1)));
	}

IL_001b:
	{
		int64_t L_8 = V_2;
		int64_t L_9 = ___2_size;
		V_3 = (bool)((((int64_t)L_8) < ((int64_t)L_9))? 1 : 0);
		bool L_10 = V_3;
		if (L_10)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
// System.Void Hebron.Runtime.CRuntime::memcpy(System.Void*,System.Void*,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_memcpy_m76B9B3CCD8BE1015EAB6CDD67DAE590553E94E2B (void* ___0_a, void* ___1_b, uint64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		void* L_0 = ___0_a;
		void* L_1 = ___1_b;
		uint64_t L_2 = ___2_size;
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		CRuntime_memcpy_m8EE34595CD2FEE404D89C5FD2880FBB82CBA7B6A(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Hebron.Runtime.CRuntime::memmove(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_memmove_m22740429050BBD8B24A8E6BAC4CFFE7245B54AF8 (void* ___0_a, void* ___1_b, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	bool V_1 = false;
	{
		V_0 = (void*)((uintptr_t)0);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				{
					void* L_0 = V_0;
					V_1 = (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0035;
					}
				}
				{
					void* L_2 = V_0;
					il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
					CRuntime_free_m9820C32B8AB5BB989140A905BE68364EDAFBD15D(L_2, NULL);
				}

IL_0035:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			int64_t L_3 = ___2_size;
			il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
			void* L_4;
			L_4 = CRuntime_malloc_mCE71AF0C12DCD31D101BF702F2BEF056E3A628A0(L_3, NULL);
			V_0 = L_4;
			void* L_5 = V_0;
			void* L_6 = ___1_b;
			int64_t L_7 = ___2_size;
			CRuntime_memcpy_m8EE34595CD2FEE404D89C5FD2880FBB82CBA7B6A(L_5, L_6, L_7, NULL);
			void* L_8 = ___0_a;
			void* L_9 = V_0;
			int64_t L_10 = ___2_size;
			CRuntime_memcpy_m8EE34595CD2FEE404D89C5FD2880FBB82CBA7B6A(L_8, L_9, L_10, NULL);
			goto IL_0037;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		return;
	}
}
// System.Void Hebron.Runtime.CRuntime::memmove(System.Void*,System.Void*,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_memmove_m916A41D3ACF62CCFCF1BC8B94F88CC0EB32B831B (void* ___0_a, void* ___1_b, uint64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		void* L_0 = ___0_a;
		void* L_1 = ___1_b;
		uint64_t L_2 = ___2_size;
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		CRuntime_memmove_m22740429050BBD8B24A8E6BAC4CFFE7245B54AF8(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Int32 Hebron.Runtime.CRuntime::memcmp(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRuntime_memcmp_m674D9D76BA3D282F6ADB2FC02D9FF9816F036359 (void* ___0_a, void* ___1_b, int64_t ___2_size, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	int64_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	{
		V_0 = 0;
		void* L_0 = ___0_a;
		V_1 = (uint8_t*)L_0;
		void* L_1 = ___1_b;
		V_2 = (uint8_t*)L_1;
		V_3 = ((int64_t)0);
		goto IL_002e;
	}

IL_000c:
	{
		uint8_t* L_2 = V_1;
		int32_t L_3 = *((uint8_t*)L_2);
		uint8_t* L_4 = V_2;
		int32_t L_5 = *((uint8_t*)L_4);
		V_4 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0020:
	{
		uint8_t* L_8 = V_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, 1));
		uint8_t* L_9 = V_2;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, 1));
		int64_t L_10 = V_3;
		V_3 = ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)1)));
	}

IL_002e:
	{
		int64_t L_11 = V_3;
		int64_t L_12 = ___2_size;
		V_5 = (bool)((((int64_t)L_11) < ((int64_t)L_12))? 1 : 0);
		bool L_13 = V_5;
		if (L_13)
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_14 = V_0;
		V_6 = L_14;
		goto IL_003d;
	}

IL_003d:
	{
		int32_t L_15 = V_6;
		return L_15;
	}
}
// System.Int32 Hebron.Runtime.CRuntime::memcmp(System.Void*,System.Void*,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRuntime_memcmp_mD9C7BF5D11173B80400341C66B25188CC4EFB39D (void* ___0_a, void* ___1_b, uint64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		void* L_0 = ___0_a;
		void* L_1 = ___1_b;
		uint64_t L_2 = ___2_size;
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = CRuntime_memcmp_m674D9D76BA3D282F6ADB2FC02D9FF9816F036359(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 Hebron.Runtime.CRuntime::memcmp(System.Byte*,System.Byte[],System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRuntime_memcmp_mB2D672E356A3926AF4E65134AEFF1ABA615D82D5 (uint8_t* ___0_a, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_b, uint64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_b;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_0010;
		}
	}

IL_000b:
	{
		V_0 = (void*)((uintptr_t)0);
		goto IL_0019;
	}

IL_0010:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (void*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0019:
	{
		uint8_t* L_4 = ___0_a;
		void* L_5 = V_0;
		uint64_t L_6 = ___2_size;
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = CRuntime_memcmp_m674D9D76BA3D282F6ADB2FC02D9FF9816F036359((void*)L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_0025;
	}

IL_0025:
	{
		int32_t L_8 = V_2;
		return L_8;
	}
}
// System.Void Hebron.Runtime.CRuntime::memset(System.Void*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_memset_m96A02F8228AC54CAA2BF576499DD73F4F4FC4022 (void* ___0_ptr, int32_t ___1_value, int64_t ___2_size, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t V_1 = 0x0;
	int64_t V_2 = 0;
	bool V_3 = false;
	{
		void* L_0 = ___0_ptr;
		V_0 = (uint8_t*)L_0;
		int32_t L_1 = ___1_value;
		V_1 = (uint8_t)((int32_t)(uint8_t)L_1);
		V_2 = ((int64_t)0);
		goto IL_0017;
	}

IL_000b:
	{
		uint8_t* L_2 = V_0;
		uint8_t* L_3 = L_2;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, 1));
		uint8_t L_4 = V_1;
		*((int8_t*)L_3) = (int8_t)L_4;
		int64_t L_5 = V_2;
		V_2 = ((int64_t)il2cpp_codegen_add(L_5, ((int64_t)1)));
	}

IL_0017:
	{
		int64_t L_6 = V_2;
		int64_t L_7 = ___2_size;
		V_3 = (bool)((((int64_t)L_6) < ((int64_t)L_7))? 1 : 0);
		bool L_8 = V_3;
		if (L_8)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
// System.Void Hebron.Runtime.CRuntime::memset(System.Void*,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_memset_mEA9F5A290473D28136A2F6BCD450EA5CC90470F4 (void* ___0_ptr, int32_t ___1_value, uint64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		void* L_0 = ___0_ptr;
		int32_t L_1 = ___1_value;
		uint64_t L_2 = ___2_size;
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		CRuntime_memset_m96A02F8228AC54CAA2BF576499DD73F4F4FC4022(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.UInt32 Hebron.Runtime.CRuntime::_lrotl(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRuntime__lrotl_m4A44057B450087C3759E32CAFB261526A30ED762 (uint32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		uint32_t L_2 = ___0_x;
		int32_t L_3 = ___1_y;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_0<<((int32_t)(L_1&((int32_t)31)))))|((int32_t)((uint32_t)L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3))&((int32_t)31)))))));
		goto IL_0014;
	}

IL_0014:
	{
		uint32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void* Hebron.Runtime.CRuntime::realloc(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* CRuntime_realloc_m4AA55F39D9F49BEFDB7CA5B68BF45A5071CA7966 (void* ___0_a, int64_t ___1_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	void* V_3 = NULL;
	{
		void* L_0 = ___0_a;
		V_2 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int64_t L_2 = ___1_newSize;
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		void* L_3;
		L_3 = CRuntime_malloc_mCE71AF0C12DCD31D101BF702F2BEF056E3A628A0(L_2, NULL);
		V_3 = L_3;
		goto IL_0032;
	}

IL_0013:
	{
		void* L_4 = ___0_a;
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&V_0), L_4, NULL);
		intptr_t L_5 = V_0;
		int64_t L_6 = ___1_newSize;
		intptr_t L_7;
		memset((&L_7), 0, sizeof(L_7));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_7), L_6, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_8;
		L_8 = Marshal_ReAllocHGlobal_mA5C1E0A9FE631E69DA8EE674B31709F0F14AA9BD(L_5, L_7, NULL);
		V_1 = L_8;
		void* L_9;
		L_9 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_1), NULL);
		V_3 = L_9;
		goto IL_0032;
	}

IL_0032:
	{
		void* L_10 = V_3;
		return L_10;
	}
}
// System.Void* Hebron.Runtime.CRuntime::realloc(System.Void*,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* CRuntime_realloc_m8F9CF6FD1590D9C79382E3D35F0BE59A4365B1B9 (void* ___0_a, uint64_t ___1_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	{
		void* L_0 = ___0_a;
		uint64_t L_1 = ___1_newSize;
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = CRuntime_realloc_m4AA55F39D9F49BEFDB7CA5B68BF45A5071CA7966(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		void* L_3 = V_0;
		return L_3;
	}
}
// System.Int32 Hebron.Runtime.CRuntime::abs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRuntime_abs_m1BAC972C69B68B579878A6546646B75A6D85A265 (int32_t ___0_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_v;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = il2cpp_codegen_abs(L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Double Hebron.Runtime.CRuntime::pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CRuntime_pow_m48EA4B46B28FA9A00E857953FE4CB04A3522457D (double ___0_a, double ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		double L_0 = ___0_a;
		double L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		double L_3 = V_0;
		return L_3;
	}
}
// System.Double Hebron.Runtime.CRuntime::ldexp(System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CRuntime_ldexp_m6B69BF010E71D84265D01FE955939E7B3F462228 (double ___0_number, int32_t ___1_exponent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		double L_0 = ___0_number;
		int32_t L_1 = ___1_exponent;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265((2.0), ((double)L_1), NULL);
		V_0 = ((double)il2cpp_codegen_multiply(L_0, L_2));
		goto IL_0016;
	}

IL_0016:
	{
		double L_3 = V_0;
		return L_3;
	}
}
// System.Int32 Hebron.Runtime.CRuntime::strcmp(System.SByte*,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRuntime_strcmp_m92E02A9AD84F6FE8948E230E7D852608B7698B8A (int8_t* ___0_src, String_t* ___1_token, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0027;
	}

IL_0007:
	{
		int8_t* L_0 = ___0_src;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1)));
		String_t* L_3 = ___1_token;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, L_4, NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0022:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0027:
	{
		int32_t L_9 = V_1;
		String_t* L_10 = ___1_token;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		V_3 = (bool)((((int32_t)L_9) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_13 = V_0;
		V_4 = L_13;
		goto IL_0039;
	}

IL_0039:
	{
		int32_t L_14 = V_4;
		return L_14;
	}
}
// System.Int32 Hebron.Runtime.CRuntime::strncmp(System.SByte*,System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRuntime_strncmp_m20EC80E13AEF1280191ED14CA4F03E271AD27E5E (int8_t* ___0_src, String_t* ___1_token, uint64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0027;
	}

IL_0007:
	{
		int8_t* L_0 = ___0_src;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1)));
		String_t* L_3 = ___1_token;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, L_4, NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0022:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0027:
	{
		int32_t L_9 = V_1;
		String_t* L_10 = ___1_token;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		uint64_t L_12 = ___2_size;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_11, ((int32_t)L_12), NULL);
		V_3 = (bool)((((int32_t)L_9) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_15 = V_0;
		V_4 = L_15;
		goto IL_0040;
	}

IL_0040:
	{
		int32_t L_16 = V_4;
		return L_16;
	}
}
// System.Int64 Hebron.Runtime.CRuntime::strtol(System.SByte*,System.SByte**,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CRuntime_strtol_m01BCA1BEAA90367561490CEAE8C67ECE6BAC80EC (int8_t* ___0_start, int8_t** ___1_end, int32_t ___2_radix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int8_t* V_1 = NULL;
	int64_t V_2 = 0;
	bool V_3 = false;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int64_t V_8 = 0;
	{
		V_0 = 0;
		int8_t* L_0 = ___0_start;
		V_1 = L_0;
		goto IL_0011;
	}

IL_0007:
	{
		int8_t* L_1 = V_1;
		V_1 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_1, 1));
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0011:
	{
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		String_t* L_3 = ((CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_StaticFields*)il2cpp_codegen_static_fields_for(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var))->___numbers_0;
		int8_t* L_4 = V_1;
		int32_t L_5 = *((int8_t*)L_4);
		NullCheck(L_3);
		int32_t L_6;
		L_6 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_3, ((int32_t)(uint16_t)L_5), NULL);
		V_3 = (bool)((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (L_7)
		{
			goto IL_0007;
		}
	}
	{
		V_2 = ((int64_t)0);
		int8_t* L_8 = ___0_start;
		V_1 = L_8;
		goto IL_0066;
	}

IL_002f:
	{
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		String_t* L_9 = ((CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_StaticFields*)il2cpp_codegen_static_fields_for(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var))->___numbers_0;
		int8_t* L_10 = V_1;
		int32_t L_11 = *((int8_t*)L_10);
		NullCheck(L_9);
		int32_t L_12;
		L_12 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_9, ((int32_t)(uint16_t)L_11), NULL);
		V_4 = ((int64_t)L_12);
		int32_t L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_14;
		L_14 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265((10.0), ((double)((int32_t)il2cpp_codegen_subtract(L_13, 1))), NULL);
		V_5 = il2cpp_codegen_cast_double_to_int<int64_t>(L_14);
		int64_t L_15 = V_2;
		int64_t L_16 = V_4;
		int64_t L_17 = V_5;
		V_2 = ((int64_t)il2cpp_codegen_add(L_15, ((int64_t)il2cpp_codegen_multiply(L_16, L_17))));
		int8_t* L_18 = V_1;
		V_1 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_18, 1));
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_0066:
	{
		int32_t L_20 = V_0;
		V_6 = (bool)((((int32_t)L_20) > ((int32_t)0))? 1 : 0);
		bool L_21 = V_6;
		if (L_21)
		{
			goto IL_002f;
		}
	}
	{
		int8_t** L_22 = ___1_end;
		V_7 = (bool)((((int32_t)((((intptr_t)L_22) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_0083;
		}
	}
	{
		int8_t** L_24 = ___1_end;
		int8_t* L_25 = V_1;
		*((intptr_t*)L_24) = (intptr_t)L_25;
	}

IL_0083:
	{
		int64_t L_26 = V_2;
		V_8 = L_26;
		goto IL_0088;
	}

IL_0088:
	{
		int64_t L_27 = V_8;
		return L_27;
	}
}
// System.Void Hebron.Runtime.CRuntime::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime__cctor_m4A6F0B06B539EBD28B582192DFA31F6147FEE8E3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAD8623838274740D6497489F547CE972C42A942);
		s_Il2CppMethodInitialized = true;
	}
	{
		((CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_StaticFields*)il2cpp_codegen_static_fields_for(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var))->___numbers_0 = _stringLiteralCAD8623838274740D6497489F547CE972C42A942;
		Il2CppCodeGenWriteBarrier((void**)(&((CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_StaticFields*)il2cpp_codegen_static_fields_for(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var))->___numbers_0), (void*)_stringLiteralCAD8623838274740D6497489F547CE972C42A942);
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
// System.Int32 Hebron.Runtime.MemoryStats::get_Allocations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryStats_get_Allocations_mEC94DFB06B89D801FF99E545A153E6A08D5E0A85 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ((MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E_StaticFields*)il2cpp_codegen_static_fields_for(MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E_il2cpp_TypeInfo_var))->____allocations_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Hebron.Runtime.MemoryStats::Allocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStats_Allocated_m820230A41F5D2BAE3A5FC06853FBCA5D8A26EC86 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((&((MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E_StaticFields*)il2cpp_codegen_static_fields_for(MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E_il2cpp_TypeInfo_var))->____allocations_0), NULL);
		return;
	}
}
// System.Void Hebron.Runtime.MemoryStats::Freed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStats_Freed_m599B82289BAC4971DFA13FA820847A162637B0DE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Interlocked_Decrement_m6AFAD2E874CBDA373B1EF7572F11D6E91813E75D((&((MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E_StaticFields*)il2cpp_codegen_static_fields_for(MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E_il2cpp_TypeInfo_var))->____allocations_0), NULL);
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
// System.Void SystemHalf.Half::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		L_1 = HalfHelper_SingleToHalf_m68366D0080449E774C1158AE47AE6E37424987BF(L_0, NULL);
		*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA(_thisAdjusted, ___0_value, method);
}
// System.Void SystemHalf.Half::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_m42D93709E720FF28A18018A0CCEA6D6EFF3F6216 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA(__this, ((float)L_0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Half__ctor_m42D93709E720FF28A18018A0CCEA6D6EFF3F6216_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	Half__ctor_m42D93709E720FF28A18018A0CCEA6D6EFF3F6216(_thisAdjusted, ___0_value, method);
}
// System.Void SystemHalf.Half::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_mC827819362E6EEF8763C6C3A74D479727CED4FF8 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA(__this, ((float)L_0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Half__ctor_mC827819362E6EEF8763C6C3A74D479727CED4FF8_AdjustorThunk (RuntimeObject* __this, int64_t ___0_value, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	Half__ctor_mC827819362E6EEF8763C6C3A74D479727CED4FF8(_thisAdjusted, ___0_value, method);
}
// System.Void SystemHalf.Half::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_mF7BDDCB57D11ABBD813D5E8FD90C45723E4B369D (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA(__this, ((float)L_0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Half__ctor_mF7BDDCB57D11ABBD813D5E8FD90C45723E4B369D_AdjustorThunk (RuntimeObject* __this, double ___0_value, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	Half__ctor_mF7BDDCB57D11ABBD813D5E8FD90C45723E4B369D(_thisAdjusted, ___0_value, method);
}
// System.Void SystemHalf.Half::.ctor(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_m21050D141F9162158AADB10D10F9E6FBED8B9F56 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Decimal_op_Explicit_mFE383D1954522ECA8822B56A7C59794B850FE4C1(L_0, NULL);
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA(__this, ((float)L_1), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Half__ctor_m21050D141F9162158AADB10D10F9E6FBED8B9F56_AdjustorThunk (RuntimeObject* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	Half__ctor_m21050D141F9162158AADB10D10F9E6FBED8B9F56(_thisAdjusted, ___0_value, method);
}
// System.Void SystemHalf.Half::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_mFD542200F7DDC2FF929D0D3480BA36452598F02B (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA(__this, ((float)((double)(uint32_t)L_0)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Half__ctor_mFD542200F7DDC2FF929D0D3480BA36452598F02B_AdjustorThunk (RuntimeObject* __this, uint32_t ___0_value, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	Half__ctor_mFD542200F7DDC2FF929D0D3480BA36452598F02B(_thisAdjusted, ___0_value, method);
}
// System.Void SystemHalf.Half::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_m87ABACCF15B2639C42FBFBB6E7875565BC45DCC7 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_value;
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA(__this, ((float)((double)(uint64_t)L_0)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Half__ctor_m87ABACCF15B2639C42FBFBB6E7875565BC45DCC7_AdjustorThunk (RuntimeObject* __this, uint64_t ___0_value, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	Half__ctor_m87ABACCF15B2639C42FBFBB6E7875565BC45DCC7(_thisAdjusted, ___0_value, method);
}
// SystemHalf.Half SystemHalf.Half::Negate(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Negate_m6007E4F3637C3B926E04D7C04AA7746ECAE76091 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		L_1 = Half_op_UnaryNegation_m7996D5D75DE83A71826C05E328A5A8F4FBC73163(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = V_0;
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.Half::Add(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Add_m5A721353C6DCCD14F645EEF7430AC6627141BF0B (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_half2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half1;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = ___1_half2;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2;
		L_2 = Half_op_Addition_m09C4F202C78DA4A39AF929FF35880E59B5CCA91D(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = V_0;
		return L_3;
	}
}
// SystemHalf.Half SystemHalf.Half::Subtract(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Subtract_m8D091357B7CFEB0F205846D03B6743006611EB2E (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_half2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half1;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = ___1_half2;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2;
		L_2 = Half_op_Subtraction_m5440003E12FB156831AA9FF3C87690E9516923B3(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = V_0;
		return L_3;
	}
}
// SystemHalf.Half SystemHalf.Half::Multiply(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Multiply_m2CAED6B100C1B8735600B6358FE6758AD7DBA663 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_half2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half1;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = ___1_half2;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2;
		L_2 = Half_op_Multiply_m1EE7C2A91976DFC42431833E2CBE6CD67F2E042A(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = V_0;
		return L_3;
	}
}
// SystemHalf.Half SystemHalf.Half::Divide(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Divide_m57BF353329896D42DC9DBE7CCCCCD5238074EA22 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_half2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half1;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = ___1_half2;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2;
		L_2 = Half_op_Division_m294E526C62467EB392104AE0D558D0FE5A9DFCE5(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = V_0;
		return L_3;
	}
}
// SystemHalf.Half SystemHalf.Half::op_UnaryPlus(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_UnaryPlus_mA0DBDE309CDA0CA876783C206D091717E3D67C74 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) 
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = V_0;
		return L_1;
	}
}
// SystemHalf.Half SystemHalf.Half::op_UnaryNegation(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_UnaryNegation_m7996D5D75DE83A71826C05E328A5A8F4FBC73163 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half;
		il2cpp_codegen_runtime_class_init_inline(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		L_1 = HalfHelper_Negate_mB50E440868A2EF2A9BE134C3AE37EE69E664394E(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = V_0;
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Increment(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Increment_m87DA74D74B1A63AAF026A22D3EB0A228E034EC3C (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2;
		L_2 = Half_op_Explicit_m13A3CED333F8D63339E0DDE5F852A985072A4295(((float)il2cpp_codegen_add(L_1, (1.0f))), NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = V_0;
		return L_3;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Decrement(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Decrement_m98EB6AFFC7A40FDF7D5E4E1E21B0474654D3EAF5 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2;
		L_2 = Half_op_Explicit_m13A3CED333F8D63339E0DDE5F852A985072A4295(((float)il2cpp_codegen_subtract(L_1, (1.0f))), NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = V_0;
		return L_3;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Addition(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Addition_m09C4F202C78DA4A39AF929FF35880E59B5CCA91D (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_half2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half1;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = ___1_half2;
		float L_3;
		L_3 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_2, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4;
		L_4 = Half_op_Explicit_m13A3CED333F8D63339E0DDE5F852A985072A4295(((float)il2cpp_codegen_add(L_1, ((float)L_3))), NULL);
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_5 = V_0;
		return L_5;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Subtraction(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Subtraction_m5440003E12FB156831AA9FF3C87690E9516923B3 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_half2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half1;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = ___1_half2;
		float L_3;
		L_3 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_2, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4;
		L_4 = Half_op_Explicit_m13A3CED333F8D63339E0DDE5F852A985072A4295(((float)il2cpp_codegen_subtract(L_1, ((float)L_3))), NULL);
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_5 = V_0;
		return L_5;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Multiply(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Multiply_m1EE7C2A91976DFC42431833E2CBE6CD67F2E042A (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_half2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half1;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = ___1_half2;
		float L_3;
		L_3 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_2, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4;
		L_4 = Half_op_Explicit_m13A3CED333F8D63339E0DDE5F852A985072A4295(((float)il2cpp_codegen_multiply(L_1, ((float)L_3))), NULL);
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_5 = V_0;
		return L_5;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Division(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Division_m294E526C62467EB392104AE0D558D0FE5A9DFCE5 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_half2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half1;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = ___1_half2;
		float L_3;
		L_3 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_2, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4;
		L_4 = Half_op_Explicit_m13A3CED333F8D63339E0DDE5F852A985072A4295(((float)(L_1/((float)L_3))), NULL);
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_5 = V_0;
		return L_5;
	}
}
// System.Boolean SystemHalf.Half::op_Equality(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_op_Equality_m257EA083C4AED617FB589F3C14B6D0246C5800EA (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_half2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half1;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Half_IsNaN_mBCA1A85D6E7D69E68E95A9EA2994C5D3AFE21D24(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = ___0_half1;
		uint16_t L_3 = L_2.___Value_0;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4 = ___1_half2;
		uint16_t L_5 = L_4.___Value_0;
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean SystemHalf.Half::op_Inequality(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_op_Inequality_mF118C9405CE5761E841030EB82475D08C8F26DB2 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_half2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half1;
		uint16_t L_1 = L_0.___Value_0;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = ___1_half2;
		uint16_t L_3 = L_2.___Value_0;
		V_0 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean SystemHalf.Half::op_LessThan(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_op_LessThan_m50285754C7CA18E84B2C5FF9BF4413729588FCF4 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_half2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half1;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = ___1_half2;
		float L_3;
		L_3 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_2, NULL);
		V_0 = (bool)((((float)L_1) < ((float)((float)L_3)))? 1 : 0);
		goto IL_0013;
	}

IL_0013:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean SystemHalf.Half::op_GreaterThan(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_op_GreaterThan_mBAB4B71D1036E2116B0403E9E65A016D65D3CE58 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_half2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half1;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = ___1_half2;
		float L_3;
		L_3 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_2, NULL);
		V_0 = (bool)((((float)L_1) > ((float)((float)L_3)))? 1 : 0);
		goto IL_0013;
	}

IL_0013:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean SystemHalf.Half::op_LessThanOrEqual(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_op_LessThanOrEqual_m546965898FC28971C3FF12E65A7240BEB6D3D573 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_half2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half1;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = ___1_half2;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Half_op_Equality_m257EA083C4AED617FB589F3C14B6D0246C5800EA(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = ___0_half1;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4 = ___1_half2;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Half_op_LessThan_m50285754C7CA18E84B2C5FF9BF4413729588FCF4(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean SystemHalf.Half::op_GreaterThanOrEqual(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_op_GreaterThanOrEqual_mD301DBF1F456F240B71917FBEA49F0A3C9E0E8BE (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_half2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half1;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = ___1_half2;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Half_op_Equality_m257EA083C4AED617FB589F3C14B6D0246C5800EA(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = ___0_half1;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4 = ___1_half2;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Half_op_GreaterThan_mBAB4B71D1036E2116B0403E9E65A016D65D3CE58(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Implicit(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Implicit_mDA7C3EFC0A01476B3A98454335053928D05CD0B9 (uint8_t ___0_value, const RuntimeMethod* method) 
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uint8_t L_0 = ___0_value;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_1), ((float)L_0), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = V_0;
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Implicit(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Implicit_m6A32C183093891ACDD1F35CDE94BE799B0F7210E (int16_t ___0_value, const RuntimeMethod* method) 
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int16_t L_0 = ___0_value;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_1), ((float)L_0), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = V_0;
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Implicit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Implicit_m1C0D248C8FDDC1FDFC626A14F5E924C5C104000C (Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppChar L_0 = ___0_value;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_1), ((float)L_0), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = V_0;
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Implicit_m36B6941FE2BFF01A9B390A3EEC86A68EE6E06529 (int32_t ___0_value, const RuntimeMethod* method) 
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_value;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_1), ((float)L_0), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = V_0;
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Implicit_m81E7624998C54F49943947C8D065AEE561F5A9F8 (int64_t ___0_value, const RuntimeMethod* method) 
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int64_t L_0 = ___0_value;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_1), ((float)L_0), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = V_0;
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Explicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Explicit_m13A3CED333F8D63339E0DDE5F852A985072A4295 (float ___0_value, const RuntimeMethod* method) 
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_value;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = V_0;
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Explicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Explicit_mE28EFE7EEEA1B98EA3421A37AD5538F6A63FCB21 (double ___0_value, const RuntimeMethod* method) 
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		double L_0 = ___0_value;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_1), ((float)L_0), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = V_0;
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Explicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Explicit_m713E397685FEB9BA8612D447728819E1D5C64E9D (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Decimal_op_Explicit_mFE383D1954522ECA8822B56A7C59794B850FE4C1(L_0, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_2), ((float)L_1), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = V_0;
		return L_3;
	}
}
// System.Byte SystemHalf.Half::op_Explicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Half_op_Explicit_m8D27940EF1A2E92C575BCF8AA2056A58D778FAC8 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		V_0 = (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)L_1));
		goto IL_000c;
	}

IL_000c:
	{
		uint8_t L_2 = V_0;
		return L_2;
	}
}
// System.Char SystemHalf.Half::op_Explicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Half_op_Explicit_mCC0D83480739F3309E08DAB0EEEFEEF60E530081 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		V_0 = il2cpp_codegen_cast_floating_point<uint16_t, int32_t, float>(((float)L_1));
		goto IL_000c;
	}

IL_000c:
	{
		Il2CppChar L_2 = V_0;
		return L_2;
	}
}
// System.Int16 SystemHalf.Half::op_Explicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Half_op_Explicit_m2D0D805BD44429D30FDF30C2675B44E00CFF24A1 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int16_t V_0 = 0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int16_t>(((float)L_1));
		goto IL_000c;
	}

IL_000c:
	{
		int16_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 SystemHalf.Half::op_Explicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_op_Explicit_m030BB5DE05FA92442A6CAB9707C330CF72EE937F (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)L_1));
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int64 SystemHalf.Half::op_Explicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Half_op_Explicit_m28B9BAD9D63F2F394C0873F266D12A64AB83C813 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int64_t>(((float)L_1));
		goto IL_000c;
	}

IL_000c:
	{
		int64_t L_2 = V_0;
		return L_2;
	}
}
// System.Single SystemHalf.Half::op_Implicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = HalfHelper_HalfToSingle_mCC84820A87B56F63D7738618771599AE013752E2(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Double SystemHalf.Half::op_Implicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Half_op_Implicit_m1C09DB417B3CE5BEE702306052FA104C0ACCCFEA (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		V_0 = ((double)((float)L_1));
		goto IL_000c;
	}

IL_000c:
	{
		double L_2 = V_0;
		return L_2;
	}
}
// System.Decimal SystemHalf.Half::op_Explicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Half_op_Explicit_mBA9A937E486AEB0FA24CDD1A891223F17B396E69 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2;
		L_2 = Decimal_op_Explicit_m2B8355EC2618BDE4A6813C6826D9E3B996B9E22F(((float)L_1), NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3 = V_0;
		return L_3;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Implicit(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Implicit_m51A709B3F44E5993A2DE9962A5D4BB24036199E2 (int8_t ___0_value, const RuntimeMethod* method) 
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int8_t L_0 = ___0_value;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_1), ((float)L_0), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = V_0;
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Implicit(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Implicit_m11B334E1418EC94DCD937DB803A1CF354CBBF8F2 (uint16_t ___0_value, const RuntimeMethod* method) 
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uint16_t L_0 = ___0_value;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_1), ((float)L_0), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = V_0;
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Implicit(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Implicit_mDBB3A6CBFF2380E23F6BACD8FF137266B9A7E3F9 (uint32_t ___0_value, const RuntimeMethod* method) 
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uint32_t L_0 = ___0_value;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_1), ((float)((double)(uint32_t)L_0)), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = V_0;
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Implicit(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Implicit_mB153C3EF259A268F952FFC5B6954CE028B59CBB4 (uint64_t ___0_value, const RuntimeMethod* method) 
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uint64_t L_0 = ___0_value;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_1), ((float)((double)(uint64_t)L_0)), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = V_0;
		return L_2;
	}
}
// System.SByte SystemHalf.Half::op_Explicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Half_op_Explicit_mC4D67F670804BAA8E8C22F365DF876BBC5450275 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int8_t V_0 = 0x0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int8_t>(((float)L_1));
		goto IL_000c;
	}

IL_000c:
	{
		int8_t L_2 = V_0;
		return L_2;
	}
}
// System.UInt16 SystemHalf.Half::op_Explicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Half_op_Explicit_mA60736ACD2470625C5AC0232C29B81DF0B659F15 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		V_0 = (uint16_t)il2cpp_codegen_cast_floating_point<uint16_t, int32_t, float>(((float)L_1));
		goto IL_000c;
	}

IL_000c:
	{
		uint16_t L_2 = V_0;
		return L_2;
	}
}
// System.UInt32 SystemHalf.Half::op_Explicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Half_op_Explicit_mF0883495D3852167889F4B591F94B99614044867 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		V_0 = il2cpp_codegen_cast_floating_point<uint32_t, int32_t, float>(((float)L_1));
		goto IL_000c;
	}

IL_000c:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
// System.UInt64 SystemHalf.Half::op_Explicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Half_op_Explicit_mC989B5D992A48F835929B26C1FFF4D3F628790A9 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		V_0 = il2cpp_codegen_cast_floating_point<uint64_t, int64_t, float>(((float)L_1));
		goto IL_000c;
	}

IL_000c:
	{
		uint64_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 SystemHalf.Half::CompareTo(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_CompareTo_m15EFD81A7DC0E77F9B0B2B5E7FF6C43EF69FBDB4 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	{
		V_0 = 0;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = ___0_other;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Half_op_LessThan_m50285754C7CA18E84B2C5FF9BF4413729588FCF4(L_0, L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		V_0 = (-1);
		goto IL_006e;
	}

IL_0019:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_5 = ___0_other;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Half_op_GreaterThan_mBAB4B71D1036E2116B0403E9E65A016D65D3CE58(L_4, L_5, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		V_0 = 1;
		goto IL_006e;
	}

IL_002f:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_8 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_9 = ___0_other;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Half_op_Inequality_mF118C9405CE5761E841030EB82475D08C8F26DB2(L_8, L_9, NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_006e;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_12 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Half_IsNaN_mBCA1A85D6E7D69E68E95A9EA2994C5D3AFE21D24(L_12, NULL);
		V_4 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_005a;
		}
	}
	{
		V_0 = 1;
		goto IL_006d;
	}

IL_005a:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_15 = ___0_other;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Half_IsNaN_mBCA1A85D6E7D69E68E95A9EA2994C5D3AFE21D24(L_15, NULL);
		V_5 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_006d;
		}
	}
	{
		V_0 = (-1);
	}

IL_006d:
	{
	}

IL_006e:
	{
		int32_t L_18 = V_0;
		V_6 = L_18;
		goto IL_0073;
	}

IL_0073:
	{
		int32_t L_19 = V_6;
		return L_19;
	}
}
IL2CPP_EXTERN_C  int32_t Half_CompareTo_m15EFD81A7DC0E77F9B0B2B5E7FF6C43EF69FBDB4_AdjustorThunk (RuntimeObject* __this, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_other, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Half_CompareTo_m15EFD81A7DC0E77F9B0B2B5E7FF6C43EF69FBDB4(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Int32 SystemHalf.Half::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_CompareTo_m9EC79B9359AD9C276FA4F1850C015053F486058F (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		RuntimeObject* L_0 = ___0_obj;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		V_0 = 1;
		goto IL_003d;
	}

IL_0011:
	{
		RuntimeObject* L_2 = ___0_obj;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_4 = ___0_obj;
		int32_t L_5;
		L_5 = Half_CompareTo_m15EFD81A7DC0E77F9B0B2B5E7FF6C43EF69FBDB4(__this, ((*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)((Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)UnBox(L_4, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var)))), NULL);
		V_0 = L_5;
		goto IL_003c;
	}

IL_0030:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEC3193CD1F34C7323A6EB465B808BBAB8FAD271A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Half_CompareTo_m9EC79B9359AD9C276FA4F1850C015053F486058F_RuntimeMethod_var)));
	}

IL_003c:
	{
	}

IL_003d:
	{
		int32_t L_7 = V_0;
		V_3 = L_7;
		goto IL_0041;
	}

IL_0041:
	{
		int32_t L_8 = V_3;
		return L_8;
	}
}
IL2CPP_EXTERN_C  int32_t Half_CompareTo_m9EC79B9359AD9C276FA4F1850C015053F486058F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Half_CompareTo_m9EC79B9359AD9C276FA4F1850C015053F486058F(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean SystemHalf.Half::Equals(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_Equals_mC9CCB515A296CB1D66CFCEF7BB5A6E0EFD149934 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_other;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Half_op_Equality_m257EA083C4AED617FB589F3C14B6D0246C5800EA(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = ___0_other;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Half_IsNaN_mBCA1A85D6E7D69E68E95A9EA2994C5D3AFE21D24(L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_5 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Half_IsNaN_mBCA1A85D6E7D69E68E95A9EA2994C5D3AFE21D24(L_5, NULL);
		G_B4_0 = ((int32_t)(L_6));
		goto IL_0025;
	}

IL_0024:
	{
		G_B4_0 = 0;
	}

IL_0025:
	{
		G_B6_0 = G_B4_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B6_0 = 1;
	}

IL_0028:
	{
		V_0 = (bool)G_B6_0;
		goto IL_002b;
	}

IL_002b:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool Half_Equals_mC9CCB515A296CB1D66CFCEF7BB5A6E0EFD149934_AdjustorThunk (RuntimeObject* __this, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_other, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	bool _returnValue;
	_returnValue = Half_Equals_mC9CCB515A296CB1D66CFCEF7BB5A6E0EFD149934(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean SystemHalf.Half::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_Equals_m6102C810AA7FC6A7281E1BB4C5020FDA8128021F (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	{
		V_0 = (bool)0;
		RuntimeObject* L_0 = ___0_obj;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_2 = ___0_obj;
		V_2 = ((*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)((Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)UnBox(L_2, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var))));
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = V_2;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Half_op_Equality_m257EA083C4AED617FB589F3C14B6D0246C5800EA(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_003e;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_6 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Half_IsNaN_mBCA1A85D6E7D69E68E95A9EA2994C5D3AFE21D24(L_6, NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_8 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Half_IsNaN_mBCA1A85D6E7D69E68E95A9EA2994C5D3AFE21D24(L_8, NULL);
		G_B5_0 = ((int32_t)(L_9));
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		G_B7_0 = G_B5_0;
		goto IL_003f;
	}

IL_003e:
	{
		G_B7_0 = 1;
	}

IL_003f:
	{
		V_3 = (bool)G_B7_0;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0047;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0047:
	{
	}

IL_0048:
	{
		bool L_11 = V_0;
		V_4 = L_11;
		goto IL_004d;
	}

IL_004d:
	{
		bool L_12 = V_4;
		return L_12;
	}
}
IL2CPP_EXTERN_C  bool Half_Equals_m6102C810AA7FC6A7281E1BB4C5020FDA8128021F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	bool _returnValue;
	_returnValue = Half_Equals_m6102C810AA7FC6A7281E1BB4C5020FDA8128021F(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 SystemHalf.Half::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_GetHashCode_m97AF96A3B63244D97C77F076FD9E6A92AE6907BB (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint16_t* L_0 = (&__this->___Value_0);
		int32_t L_1;
		L_1 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t Half_GetHashCode_m97AF96A3B63244D97C77F076FD9E6A92AE6907BB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Half_GetHashCode_m97AF96A3B63244D97C77F076FD9E6A92AE6907BB(_thisAdjusted, method);
	return _returnValue;
}
// System.TypeCode SystemHalf.Half::GetTypeCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_GetTypeCode_m9226F693B79A65F7D0E71022B3EE1178D92E59A6 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)255);
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Half_GetTypeCode_m9226F693B79A65F7D0E71022B3EE1178D92E59A6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Half_GetTypeCode_m9226F693B79A65F7D0E71022B3EE1178D92E59A6(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] SystemHalf.Half::GetBytes(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Half_GetBytes_m26A3243B0396106EE20BCE6DE914B7EEC86F0D26 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_value;
		uint16_t L_1 = L_0.___Value_0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_m43CB66A3347C3482B6FB2B3FD327F5327C25E18B(L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		return L_3;
	}
}
// System.UInt16 SystemHalf.Half::GetBits(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Half_GetBits_mAFBD6ADA335DB38264FB9714FADB572A0A6C9869 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_value, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_value;
		uint16_t L_1 = L_0.___Value_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_2 = V_0;
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.Half::ToHalf(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_ToHalf_mB0FE666A92092E750BD7B861F9926DDD359404D3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		int32_t L_1 = ___1_startIndex;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int16_t L_2;
		L_2 = BitConverter_ToInt16_m13F278223B819C82CC647398B22C125B02FA2E61(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3;
		L_3 = Half_ToHalf_mA2110EFA584CF1F47CD6C378142674BC11978F13((uint16_t)((int32_t)(uint16_t)L_2), NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4 = V_0;
		return L_4;
	}
}
// SystemHalf.Half SystemHalf.Half::ToHalf(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_ToHalf_mA2110EFA584CF1F47CD6C378142674BC11978F13 (uint16_t ___0_bits, const RuntimeMethod* method) 
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6));
		uint16_t L_0 = ___0_bits;
		(&V_0)->___Value_0 = L_0;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = V_0;
		V_1 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = V_1;
		return L_2;
	}
}
// System.Int32 SystemHalf.Half::Sign(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_Sign_mCDB6F804C1CE4A21C0E04A0AB5F0D33F09E691EE (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		L_1 = Half_op_Implicit_m36B6941FE2BFF01A9B390A3EEC86A68EE6E06529(0, NULL);
		bool L_2;
		L_2 = Half_op_LessThan_m50285754C7CA18E84B2C5FF9BF4413729588FCF4(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		V_1 = (-1);
		goto IL_004d;
	}

IL_0016:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_5;
		L_5 = Half_op_Implicit_m36B6941FE2BFF01A9B390A3EEC86A68EE6E06529(0, NULL);
		bool L_6;
		L_6 = Half_op_GreaterThan_mBAB4B71D1036E2116B0403E9E65A016D65D3CE58(L_4, L_5, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		V_1 = 1;
		goto IL_004d;
	}

IL_002b:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_8 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_9;
		L_9 = Half_op_Implicit_m36B6941FE2BFF01A9B390A3EEC86A68EE6E06529(0, NULL);
		bool L_10;
		L_10 = Half_op_Inequality_mF118C9405CE5761E841030EB82475D08C8F26DB2(L_8, L_9, NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0048;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_12 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral183398DCEBD6A7242F3CF59B61DC81600BBF26E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Half_Sign_mCDB6F804C1CE4A21C0E04A0AB5F0D33F09E691EE_RuntimeMethod_var)));
	}

IL_0048:
	{
		V_1 = 0;
		goto IL_004d;
	}

IL_004d:
	{
		int32_t L_13 = V_1;
		return L_13;
	}
}
// SystemHalf.Half SystemHalf.Half::Abs(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Abs_mF746D9574CD69C4B21E2FCE4990AA5852E2BB221 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		L_1 = HalfHelper_Abs_m65148FFFC1BDE1B69B0EF896F004330D82E85E7E(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = V_0;
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.Half::Max(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Max_m6919DBB6D674ED36386C6CFEFD6C1DFFB034811C (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_value1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_value1;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = ___1_value2;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Half_op_LessThan_m50285754C7CA18E84B2C5FF9BF4413729588FCF4(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = ___0_value1;
		G_B3_0 = L_3;
		goto IL_000e;
	}

IL_000d:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4 = ___1_value2;
		G_B3_0 = L_4;
	}

IL_000e:
	{
		V_0 = G_B3_0;
		goto IL_0011;
	}

IL_0011:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_5 = V_0;
		return L_5;
	}
}
// SystemHalf.Half SystemHalf.Half::Min(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Min_m3E2BC8877AB31F0AFFF3395A58F929755BE38523 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_value1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___1_value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_value1;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = ___1_value2;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Half_op_LessThan_m50285754C7CA18E84B2C5FF9BF4413729588FCF4(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = ___1_value2;
		G_B3_0 = L_3;
		goto IL_000e;
	}

IL_000d:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4 = ___0_value1;
		G_B3_0 = L_4;
	}

IL_000e:
	{
		V_0 = G_B3_0;
		goto IL_0011;
	}

IL_0011:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_5 = V_0;
		return L_5;
	}
}
// System.Boolean SystemHalf.Half::IsNaN(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_IsNaN_mBCA1A85D6E7D69E68E95A9EA2994C5D3AFE21D24 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half;
		il2cpp_codegen_runtime_class_init_inline(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = HalfHelper_IsNaN_m903DC166FEF9ADF2C86154B4F36112FFB406F55D(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean SystemHalf.Half::IsInfinity(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_IsInfinity_mAAB6C5D236B2245DF4DAB9999B7AE6B8603878A6 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half;
		il2cpp_codegen_runtime_class_init_inline(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = HalfHelper_IsInfinity_m34F08F5E2AD5B54E3DCC4B26A844BF33826F68ED(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean SystemHalf.Half::IsNegativeInfinity(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_IsNegativeInfinity_mBD79352E20246FA473841B7FA22B0B66D694DE15 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half;
		il2cpp_codegen_runtime_class_init_inline(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = HalfHelper_IsNegativeInfinity_m39C6E115010F2E434AAF8BCE2D580C814F48F602(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean SystemHalf.Half::IsPositiveInfinity(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_IsPositiveInfinity_m6F04184CE6AB023F186338AF01A7AEC404E9AE34 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half;
		il2cpp_codegen_runtime_class_init_inline(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = HalfHelper_IsPositiveInfinity_m9693C3F57B50D61600FA57843A47DF97C6223483(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.Half::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Parse_mA976EF8286EC04A47A1BCB19258156B97A09D81B (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		float L_2;
		L_2 = Single_Parse_mF40465AC387D690175D63EFFF44B0E810C090786(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3;
		L_3 = Half_op_Explicit_m13A3CED333F8D63339E0DDE5F852A985072A4295(L_2, NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4 = V_0;
		return L_4;
	}
}
// SystemHalf.Half SystemHalf.Half::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Parse_m43C2DA1662A839B433E609A753B4E9AFD1598974 (String_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_value;
		RuntimeObject* L_1 = ___1_provider;
		float L_2;
		L_2 = Single_Parse_mF40465AC387D690175D63EFFF44B0E810C090786(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3;
		L_3 = Half_op_Explicit_m13A3CED333F8D63339E0DDE5F852A985072A4295(L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4 = V_0;
		return L_4;
	}
}
// SystemHalf.Half SystemHalf.Half::Parse(System.String,System.Globalization.NumberStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Parse_mB57B47DCCC786A0C54D2D491246E0A37E0CD770D (String_t* ___0_value, int32_t ___1_style, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_value;
		int32_t L_1 = ___1_style;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		float L_3;
		L_3 = Single_Parse_m0E74607D17E172B4F1306E62BD12CE2905FA5638(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4;
		L_4 = Half_op_Explicit_m13A3CED333F8D63339E0DDE5F852A985072A4295(L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_5 = V_0;
		return L_5;
	}
}
// SystemHalf.Half SystemHalf.Half::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Parse_mC3F6E15C8C8F8D9335C4D497CB7A0636226360DC (String_t* ___0_value, int32_t ___1_style, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_value;
		int32_t L_1 = ___1_style;
		RuntimeObject* L_2 = ___2_provider;
		float L_3;
		L_3 = Single_Parse_m0E74607D17E172B4F1306E62BD12CE2905FA5638(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4;
		L_4 = Half_op_Explicit_m13A3CED333F8D63339E0DDE5F852A985072A4295(L_3, NULL);
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_5 = V_0;
		return L_5;
	}
}
// System.Boolean SystemHalf.Half::TryParse(System.String,SystemHalf.Half&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_TryParse_mC0E89456AF9516AE87304780413DEB44BEDAD94D (String_t* ___0_value, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* ___1_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	{
		String_t* L_0 = ___0_value;
		bool L_1;
		L_1 = Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423(L_0, (&V_0), NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* L_3 = ___1_result;
		float L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_5;
		L_5 = Half_op_Explicit_m13A3CED333F8D63339E0DDE5F852A985072A4295(L_4, NULL);
		*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)L_3 = L_5;
		V_2 = (bool)1;
		goto IL_0029;
	}

IL_001e:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* L_6 = ___1_result;
		il2cpp_codegen_initobj(L_6, sizeof(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6));
		V_2 = (bool)0;
		goto IL_0029;
	}

IL_0029:
	{
		bool L_7 = V_2;
		return L_7;
	}
}
// System.Boolean SystemHalf.Half::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,SystemHalf.Half&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_TryParse_m86625232DF338D1E39237083DD7DB74A249F2E94 (String_t* ___0_value, int32_t ___1_style, RuntimeObject* ___2_provider, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* ___3_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = (bool)0;
		String_t* L_0 = ___0_value;
		int32_t L_1 = ___1_style;
		RuntimeObject* L_2 = ___2_provider;
		bool L_3;
		L_3 = Single_TryParse_mFB8CC32F0016FBB6EFCB97953CF3515767EB6431(L_0, L_1, L_2, (&V_1), NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* L_5 = ___3_result;
		float L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_7;
		L_7 = Half_op_Explicit_m13A3CED333F8D63339E0DDE5F852A985072A4295(L_6, NULL);
		*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)L_5 = L_7;
		V_0 = (bool)1;
		goto IL_002c;
	}

IL_0023:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* L_8 = ___3_result;
		il2cpp_codegen_initobj(L_8, sizeof(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6));
	}

IL_002c:
	{
		bool L_9 = V_0;
		V_3 = L_9;
		goto IL_0030;
	}

IL_0030:
	{
		bool L_10 = V_3;
		return L_10;
	}
}
// System.String SystemHalf.Half::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Half_ToString_m0CB28AA1DCE2AB4791737E91B44AFDD23FBF5C36 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	String_t* V_1 = NULL;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		V_0 = ((float)L_1);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_3;
		L_3 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&V_0), L_2, NULL);
		V_1 = L_3;
		goto IL_001d;
	}

IL_001d:
	{
		String_t* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* Half_ToString_m0CB28AA1DCE2AB4791737E91B44AFDD23FBF5C36_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Half_ToString_m0CB28AA1DCE2AB4791737E91B44AFDD23FBF5C36(_thisAdjusted, method);
	return _returnValue;
}
// System.String SystemHalf.Half::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Half_ToString_m42492412EEE4F705FE92EFF98EE649CC38898F5A (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_formatProvider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	String_t* V_1 = NULL;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		V_0 = ((float)L_1);
		RuntimeObject* L_2 = ___0_formatProvider;
		String_t* L_3;
		L_3 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&V_0), L_2, NULL);
		V_1 = L_3;
		goto IL_0019;
	}

IL_0019:
	{
		String_t* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* Half_ToString_m42492412EEE4F705FE92EFF98EE649CC38898F5A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_formatProvider, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Half_ToString_m42492412EEE4F705FE92EFF98EE649CC38898F5A(_thisAdjusted, ___0_formatProvider, method);
	return _returnValue;
}
// System.String SystemHalf.Half::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Half_ToString_mADF7D744A0E1338340A9E419DC7DDE852229B745 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, String_t* ___0_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	String_t* V_1 = NULL;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		V_0 = ((float)L_1);
		String_t* L_2 = ___0_format;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3;
		L_3 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_4;
		L_4 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE((&V_0), L_2, L_3, NULL);
		V_1 = L_4;
		goto IL_001e;
	}

IL_001e:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  String_t* Half_ToString_mADF7D744A0E1338340A9E419DC7DDE852229B745_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Half_ToString_mADF7D744A0E1338340A9E419DC7DDE852229B745(_thisAdjusted, ___0_format, method);
	return _returnValue;
}
// System.String SystemHalf.Half::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Half_ToString_m532C547BE12E95051DCEF6BB20B124C106A966F6 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	String_t* V_1 = NULL;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		V_0 = ((float)L_1);
		String_t* L_2 = ___0_format;
		RuntimeObject* L_3 = ___1_formatProvider;
		String_t* L_4;
		L_4 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE((&V_0), L_2, L_3, NULL);
		V_1 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  String_t* Half_ToString_m532C547BE12E95051DCEF6BB20B124C106A966F6_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Half_ToString_m532C547BE12E95051DCEF6BB20B124C106A966F6(_thisAdjusted, ___0_format, ___1_formatProvider, method);
	return _returnValue;
}
// System.Single SystemHalf.Half::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Half_System_IConvertible_ToSingle_m72E1B1C02CD516A3943432B4627D169E8D59FCFD (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  float Half_System_IConvertible_ToSingle_m72E1B1C02CD516A3943432B4627D169E8D59FCFD_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	float _returnValue;
	_returnValue = Half_System_IConvertible_ToSingle_m72E1B1C02CD516A3943432B4627D169E8D59FCFD(_thisAdjusted, ___0_provider, method);
	return _returnValue;
}
// System.TypeCode SystemHalf.Half::System.IConvertible.GetTypeCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_System_IConvertible_GetTypeCode_mD5A24F94E878C4D00F8663E17FB8ADB9D2A0CA6F (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Half_GetTypeCode_m9226F693B79A65F7D0E71022B3EE1178D92E59A6(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t Half_System_IConvertible_GetTypeCode_mD5A24F94E878C4D00F8663E17FB8ADB9D2A0CA6F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Half_System_IConvertible_GetTypeCode_mD5A24F94E878C4D00F8663E17FB8ADB9D2A0CA6F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean SystemHalf.Half::System.IConvertible.ToBoolean(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_System_IConvertible_ToBoolean_m0684211BEBB80C8D844A264FF01084882940922C (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Convert_ToBoolean_m73A44AA68F53847BAC4B938953612587F8FBF61B(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool Half_System_IConvertible_ToBoolean_m0684211BEBB80C8D844A264FF01084882940922C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	bool _returnValue;
	_returnValue = Half_System_IConvertible_ToBoolean_m0684211BEBB80C8D844A264FF01084882940922C(_thisAdjusted, ___0_provider, method);
	return _returnValue;
}
// System.Byte SystemHalf.Half::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Half_System_IConvertible_ToByte_mBA58E1812B8418EF6B7D595873E32C35E6FAAB9A (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint8_t L_2;
		L_2 = Convert_ToByte_m562731D7CD88E5D6A0B91E05D1B626BC9939E388(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		uint8_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  uint8_t Half_System_IConvertible_ToByte_mBA58E1812B8418EF6B7D595873E32C35E6FAAB9A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = Half_System_IConvertible_ToByte_mBA58E1812B8418EF6B7D595873E32C35E6FAAB9A(_thisAdjusted, ___0_provider, method);
	return _returnValue;
}
// System.Char SystemHalf.Half::System.IConvertible.ToChar(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Half_System_IConvertible_ToChar_m7511F58D164EE1F5BEECDEAC63D7746DC7933A92 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_1;
		L_1 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E9AEBB5505B4A1DBC166711562BE9408419A24D)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCABEE06640F48AF21CAAB5EE9823A731DD58DD03)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE75F4F4A9D67BC98BA7DB8DBE3C519516572DA4E)), NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Half_System_IConvertible_ToChar_m7511F58D164EE1F5BEECDEAC63D7746DC7933A92_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  Il2CppChar Half_System_IConvertible_ToChar_m7511F58D164EE1F5BEECDEAC63D7746DC7933A92_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	Il2CppChar _returnValue;
	_returnValue = Half_System_IConvertible_ToChar_m7511F58D164EE1F5BEECDEAC63D7746DC7933A92(_thisAdjusted, ___0_provider, method);
	return _returnValue;
}
// System.DateTime SystemHalf.Half::System.IConvertible.ToDateTime(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Half_System_IConvertible_ToDateTime_mF0C63EC935FD9BF89F21636569F73F046BC729AB (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_1;
		L_1 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E9AEBB5505B4A1DBC166711562BE9408419A24D)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCABEE06640F48AF21CAAB5EE9823A731DD58DD03)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral401602777C44EA69B5FF9AB6AB2D47AEEC89D2AA)), NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Half_System_IConvertible_ToDateTime_mF0C63EC935FD9BF89F21636569F73F046BC729AB_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Half_System_IConvertible_ToDateTime_mF0C63EC935FD9BF89F21636569F73F046BC729AB_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D _returnValue;
	_returnValue = Half_System_IConvertible_ToDateTime_mF0C63EC935FD9BF89F21636569F73F046BC729AB(_thisAdjusted, ___0_provider, method);
	return _returnValue;
}
// System.Decimal SystemHalf.Half::System.IConvertible.ToDecimal(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Half_System_IConvertible_ToDecimal_mEFA406DE223C584C875D3EDBF30891EDD5DC3ED2 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2;
		L_2 = Convert_ToDecimal_m0CECFA6799BA3F8CDB59C34287DD5BAE54CC0EBE(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Half_System_IConvertible_ToDecimal_mEFA406DE223C584C875D3EDBF30891EDD5DC3ED2_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F _returnValue;
	_returnValue = Half_System_IConvertible_ToDecimal_mEFA406DE223C584C875D3EDBF30891EDD5DC3ED2(_thisAdjusted, ___0_provider, method);
	return _returnValue;
}
// System.Double SystemHalf.Half::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Half_System_IConvertible_ToDouble_m39C375E4CCA5796DA51C6E7023FA514DD796782A (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Convert_ToDouble_mA0069B20491E14DA829FAD261C279A5143B2FAED(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		double L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  double Half_System_IConvertible_ToDouble_m39C375E4CCA5796DA51C6E7023FA514DD796782A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	double _returnValue;
	_returnValue = Half_System_IConvertible_ToDouble_m39C375E4CCA5796DA51C6E7023FA514DD796782A(_thisAdjusted, ___0_provider, method);
	return _returnValue;
}
// System.Int16 SystemHalf.Half::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Half_System_IConvertible_ToInt16_m466A656BEFA1BC3670BC0E3BBC75D3058AC016A0 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int16_t V_0 = 0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int16_t L_2;
		L_2 = Convert_ToInt16_mD3632668808F8502053A6F9FAA6803053A2500D4(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		int16_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int16_t Half_System_IConvertible_ToInt16_m466A656BEFA1BC3670BC0E3BBC75D3058AC016A0_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	int16_t _returnValue;
	_returnValue = Half_System_IConvertible_ToInt16_m466A656BEFA1BC3670BC0E3BBC75D3058AC016A0(_thisAdjusted, ___0_provider, method);
	return _returnValue;
}
// System.Int32 SystemHalf.Half::System.IConvertible.ToInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_System_IConvertible_ToInt32_m752FB024CC8958029FE914A9D81A1BFC7FB49801 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_m2DD4FF5B07C196D209F4ED8EA8E86CD19207AABE(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t Half_System_IConvertible_ToInt32_m752FB024CC8958029FE914A9D81A1BFC7FB49801_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Half_System_IConvertible_ToInt32_m752FB024CC8958029FE914A9D81A1BFC7FB49801(_thisAdjusted, ___0_provider, method);
	return _returnValue;
}
// System.Int64 SystemHalf.Half::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Half_System_IConvertible_ToInt64_m0215CD02A2D56FBCA38F97760CC0C0DB55CEF4A2 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = Convert_ToInt64_m1203ADC6847D3814963382077D6791E9199DA5BC(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		int64_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int64_t Half_System_IConvertible_ToInt64_m0215CD02A2D56FBCA38F97760CC0C0DB55CEF4A2_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = Half_System_IConvertible_ToInt64_m0215CD02A2D56FBCA38F97760CC0C0DB55CEF4A2(_thisAdjusted, ___0_provider, method);
	return _returnValue;
}
// System.SByte SystemHalf.Half::System.IConvertible.ToSByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Half_System_IConvertible_ToSByte_m68A9196F2CFB9C1EC01347EB9E9A233705CE01C8 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int8_t V_0 = 0x0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int8_t L_2;
		L_2 = Convert_ToSByte_m56DAE9421C6CF1715E574E930F43EBDA8B9435A0(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		int8_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int8_t Half_System_IConvertible_ToSByte_m68A9196F2CFB9C1EC01347EB9E9A233705CE01C8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	int8_t _returnValue;
	_returnValue = Half_System_IConvertible_ToSByte_m68A9196F2CFB9C1EC01347EB9E9A233705CE01C8(_thisAdjusted, ___0_provider, method);
	return _returnValue;
}
// System.String SystemHalf.Half::System.IConvertible.ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Half_System_IConvertible_ToString_m6C4211CDF08BF30788A1D3ADB2ED4AD6DB69EBE9 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Convert_ToString_mBFBBE2F36FF6B3235848801940FD15A17028AC70(L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0019;
	}

IL_0019:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* Half_System_IConvertible_ToString_m6C4211CDF08BF30788A1D3ADB2ED4AD6DB69EBE9_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Half_System_IConvertible_ToString_m6C4211CDF08BF30788A1D3ADB2ED4AD6DB69EBE9(_thisAdjusted, ___0_provider, method);
	return _returnValue;
}
// System.Object SystemHalf.Half::System.IConvertible.ToType(System.Type,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Half_System_IConvertible_ToType_m4EAC816C1ACF3317374B33EA7FC4D00CE4980DCD (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, Type_t* ___0_conversionType, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		float L_2 = ((float)L_1);
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		Type_t* L_4 = ___0_conversionType;
		RuntimeObject* L_5 = ___1_provider;
		RuntimeObject* L_6;
		L_6 = Single_System_IConvertible_ToType_m52014373BE33664D69CB4F797F0A78120267EC72((float*)UnBox(L_3, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var), L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001c;
	}

IL_001c:
	{
		RuntimeObject* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Half_System_IConvertible_ToType_m4EAC816C1ACF3317374B33EA7FC4D00CE4980DCD_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_conversionType, RuntimeObject* ___1_provider, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = Half_System_IConvertible_ToType_m4EAC816C1ACF3317374B33EA7FC4D00CE4980DCD(_thisAdjusted, ___0_conversionType, ___1_provider, method);
	return _returnValue;
}
// System.UInt16 SystemHalf.Half::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Half_System_IConvertible_ToUInt16_mF668A08151EFBAFF13F2019B4077F8081FCC09D5 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint16_t L_2;
		L_2 = Convert_ToUInt16_mED633569E38E21A353AB94FAC298A72200B2BCA4(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		uint16_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  uint16_t Half_System_IConvertible_ToUInt16_mF668A08151EFBAFF13F2019B4077F8081FCC09D5_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	uint16_t _returnValue;
	_returnValue = Half_System_IConvertible_ToUInt16_mF668A08151EFBAFF13F2019B4077F8081FCC09D5(_thisAdjusted, ___0_provider, method);
	return _returnValue;
}
// System.UInt32 SystemHalf.Half::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Half_System_IConvertible_ToUInt32_mAF3B5AB239A3C778225747FB4C7BA0F78B3C9A93 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = Convert_ToUInt32_m28D7D89C7B66C6DF2A88B68973D5691BF28D61CB(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		uint32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  uint32_t Half_System_IConvertible_ToUInt32_mAF3B5AB239A3C778225747FB4C7BA0F78B3C9A93_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = Half_System_IConvertible_ToUInt32_mAF3B5AB239A3C778225747FB4C7BA0F78B3C9A93(_thisAdjusted, ___0_provider, method);
	return _returnValue;
}
// System.UInt64 SystemHalf.Half::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Half_System_IConvertible_ToUInt64_m05B76C8955DAB709F5560CEBEDF487C8F8128D51 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m86508B51A76F2B060908E4C172CD9E923FDBD380(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = Convert_ToUInt64_mB6BD7C3C6B529271A81A86349B9C3C38ABDE6DF7(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		uint64_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  uint64_t Half_System_IConvertible_ToUInt64_m05B76C8955DAB709F5560CEBEDF487C8F8128D51_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = Half_System_IConvertible_ToUInt64_m05B76C8955DAB709F5560CEBEDF487C8F8128D51(_thisAdjusted, ___0_provider, method);
	return _returnValue;
}
// System.Void SystemHalf.Half::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__cctor_m3E15787CDC6965B6C15104FA7089BFB6303DD7BA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0;
		L_0 = Half_ToHalf_mA2110EFA584CF1F47CD6C378142674BC11978F13((uint16_t)1, NULL);
		((Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_StaticFields*)il2cpp_codegen_static_fields_for(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var))->___Epsilon_1 = L_0;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		L_1 = Half_ToHalf_mA2110EFA584CF1F47CD6C378142674BC11978F13((uint16_t)((int32_t)31743), NULL);
		((Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_StaticFields*)il2cpp_codegen_static_fields_for(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var))->___MaxValue_2 = L_1;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2;
		L_2 = Half_ToHalf_mA2110EFA584CF1F47CD6C378142674BC11978F13((uint16_t)((int32_t)64511), NULL);
		((Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_StaticFields*)il2cpp_codegen_static_fields_for(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var))->___MinValue_3 = L_2;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3;
		L_3 = Half_ToHalf_mA2110EFA584CF1F47CD6C378142674BC11978F13((uint16_t)((int32_t)65024), NULL);
		((Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_StaticFields*)il2cpp_codegen_static_fields_for(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var))->___NaN_4 = L_3;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4;
		L_4 = Half_ToHalf_mA2110EFA584CF1F47CD6C378142674BC11978F13((uint16_t)((int32_t)64512), NULL);
		((Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_StaticFields*)il2cpp_codegen_static_fields_for(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var))->___NegativeInfinity_5 = L_4;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_5;
		L_5 = Half_ToHalf_mA2110EFA584CF1F47CD6C378142674BC11978F13((uint16_t)((int32_t)31744), NULL);
		((Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_StaticFields*)il2cpp_codegen_static_fields_for(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var))->___PositiveInfinity_6 = L_5;
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
// System.UInt32 SystemHalf.HalfHelper::ConvertMantissa(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HalfHelper_ConvertMantissa_mD53E8213555E8DF762C8F0402D3DF0510C1A95B8 (int32_t ___0_i, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	uint32_t V_3 = 0;
	{
		int32_t L_0 = ___0_i;
		V_0 = ((int32_t)(L_0<<((int32_t)13)));
		V_1 = 0;
		goto IL_0018;
	}

IL_000a:
	{
		uint32_t L_1 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, ((int32_t)8388608)));
		uint32_t L_2 = V_0;
		V_0 = ((int32_t)((int32_t)L_2<<1));
	}

IL_0018:
	{
		uint32_t L_3 = V_0;
		V_2 = (bool)((((int32_t)((int32_t)((int32_t)L_3&((int32_t)8388608)))) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (L_4)
		{
			goto IL_000a;
		}
	}
	{
		uint32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5&((int32_t)-8388609)));
		uint32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, ((int32_t)947912704)));
		uint32_t L_7 = V_0;
		uint32_t L_8 = V_1;
		V_3 = ((int32_t)((int32_t)L_7|(int32_t)L_8));
		goto IL_003c;
	}

IL_003c:
	{
		uint32_t L_9 = V_3;
		return L_9;
	}
}
// System.UInt32[] SystemHalf.HalfHelper::GenerateMantissaTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* HalfHelper_GenerateMantissaTable_mD518335B464B56EE5CBC4026C6EFE151BECB2E4C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2048));
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)0);
		V_1 = 1;
		goto IL_0023;
	}

IL_0014:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		uint32_t L_5;
		L_5 = HalfHelper_ConvertMantissa_mD53E8213555E8DF762C8F0402D3DF0510C1A95B8(L_4, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0023:
	{
		int32_t L_7 = V_1;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)((int32_t)1024)))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0014;
		}
	}
	{
		V_3 = ((int32_t)1024);
		goto IL_0050;
	}

IL_0037:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_0;
		int32_t L_10 = V_3;
		int32_t L_11 = V_3;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)939524096), ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)1024)))<<((int32_t)13))))));
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0050:
	{
		int32_t L_13 = V_3;
		V_4 = (bool)((((int32_t)L_13) < ((int32_t)((int32_t)2048)))? 1 : 0);
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_0037;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_0;
		V_5 = L_15;
		goto IL_0063;
	}

IL_0063:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_5;
		return L_16;
	}
}
// System.UInt32[] SystemHalf.HalfHelper::GenerateExponentTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* HalfHelper_GenerateExponentTable_m557B2F714859C147620664362C843734205B63EE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)0);
		V_1 = 1;
		goto IL_001e;
	}

IL_0011:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = V_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)((int32_t)(L_4<<((int32_t)23))));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001e:
	{
		int32_t L_6 = V_1;
		V_2 = (bool)((((int32_t)L_6) < ((int32_t)((int32_t)31)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_0011;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (uint32_t)((int32_t)1199570944));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (uint32_t)((int32_t)-2147483648LL));
		V_3 = ((int32_t)33);
		goto IL_0057;
	}

IL_003e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_0;
		int32_t L_11 = V_3;
		int32_t L_12 = V_3;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)(uint32_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)((int32_t)-2147483648LL))), ((int64_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(L_12, ((int32_t)32)))<<((int32_t)23))))))));
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0057:
	{
		int32_t L_14 = V_3;
		V_4 = (bool)((((int32_t)L_14) < ((int32_t)((int32_t)63)))? 1 : 0);
		bool L_15 = V_4;
		if (L_15)
		{
			goto IL_003e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_0;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)63)), (uint32_t)((int32_t)-947912704));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_0;
		V_5 = L_17;
		goto IL_0070;
	}

IL_0070:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_5;
		return L_18;
	}
}
// System.UInt16[] SystemHalf.HalfHelper::GenerateOffsetTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* HalfHelper_GenerateOffsetTable_mE61F49B44A1C8B7E34D12FF0999C43B9B0CE24B0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_5 = NULL;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_0 = L_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)0);
		V_1 = 1;
		goto IL_001f;
	}

IL_0011:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint16_t)((int32_t)1024));
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001f:
	{
		int32_t L_5 = V_1;
		V_2 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_6 = V_2;
		if (L_6)
		{
			goto IL_0011;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_7 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (uint16_t)0);
		V_3 = ((int32_t)33);
		goto IL_0040;
	}

IL_0032:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint16_t)((int32_t)1024));
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0040:
	{
		int32_t L_11 = V_3;
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)((int32_t)64)))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0032;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_13 = V_0;
		V_5 = L_13;
		goto IL_0050;
	}

IL_0050:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_14 = V_5;
		return L_14;
	}
}
// System.UInt16[] SystemHalf.HalfHelper::GenerateBaseTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* HalfHelper_GenerateBaseTable_m92B5235476660AFC75D9A79FC8700A4DF86BB7DF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_0 = NULL;
	int32_t V_1 = 0;
	int8_t V_2 = 0x0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_8 = NULL;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		V_0 = L_0;
		V_1 = 0;
		goto IL_00f9;
	}

IL_0013:
	{
		int32_t L_1 = V_1;
		V_2 = ((int8_t)((int32_t)il2cpp_codegen_subtract(((int32_t)127), L_1)));
		int8_t L_2 = V_2;
		V_3 = (bool)((((int32_t)L_2) > ((int32_t)((int32_t)24)))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5|0))), (uint16_t)0);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_7|((int32_t)256)))), (uint16_t)((int32_t)32768));
		goto IL_00f4;
	}

IL_003e:
	{
		int8_t L_8 = V_2;
		V_4 = (bool)((((int32_t)L_8) > ((int32_t)((int32_t)14)))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_007d;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_10 = V_0;
		int32_t L_11 = V_1;
		int8_t L_12 = V_2;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11|0))), (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)1024)>>((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)18), (int32_t)L_12))&((int32_t)31)))))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_13 = V_0;
		int32_t L_14 = V_1;
		int8_t L_15 = V_2;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_14|((int32_t)256)))), (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)(((int32_t)1024)>>((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)18), (int32_t)L_15))&((int32_t)31)))))|((int32_t)32768)))));
		goto IL_00f4;
	}

IL_007d:
	{
		int8_t L_16 = V_2;
		V_5 = (bool)((((int32_t)((((int32_t)L_16) < ((int32_t)((int32_t)-15)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_00b3;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_18 = V_0;
		int32_t L_19 = V_1;
		int8_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_19|0))), (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)15), (int32_t)L_20))<<((int32_t)10)))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_21 = V_0;
		int32_t L_22 = V_1;
		int8_t L_23 = V_2;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_22|((int32_t)256)))), (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)15), (int32_t)L_23))<<((int32_t)10)))|((int32_t)32768)))));
		goto IL_00f4;
	}

IL_00b3:
	{
		int8_t L_24 = V_2;
		V_6 = (bool)((((int32_t)L_24) > ((int32_t)((int32_t)-128)))? 1 : 0);
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_00da;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_26 = V_0;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_27|0))), (uint16_t)((int32_t)31744));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_28 = V_0;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_29|((int32_t)256)))), (uint16_t)((int32_t)64512));
		goto IL_00f4;
	}

IL_00da:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_30 = V_0;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_31|0))), (uint16_t)((int32_t)31744));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_32 = V_0;
		int32_t L_33 = V_1;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_33|((int32_t)256)))), (uint16_t)((int32_t)64512));
	}

IL_00f4:
	{
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00f9:
	{
		int32_t L_35 = V_1;
		V_7 = (bool)((((int32_t)L_35) < ((int32_t)((int32_t)256)))? 1 : 0);
		bool L_36 = V_7;
		if (L_36)
		{
			goto IL_0013;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_37 = V_0;
		V_8 = L_37;
		goto IL_010f;
	}

IL_010f:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_38 = V_8;
		return L_38;
	}
}
// System.SByte[] SystemHalf.HalfHelper::GenerateShiftTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* HalfHelper_GenerateShiftTable_m53F61D1C0E10CF48A20C88CA195FB3BFBBD9BF8C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_0 = NULL;
	int32_t V_1 = 0;
	int8_t V_2 = 0x0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_8 = NULL;
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		V_0 = L_0;
		V_1 = 0;
		goto IL_00bc;
	}

IL_0013:
	{
		int32_t L_1 = V_1;
		V_2 = ((int8_t)((int32_t)il2cpp_codegen_subtract(((int32_t)127), L_1)));
		int8_t L_2 = V_2;
		V_3 = (bool)((((int32_t)L_2) > ((int32_t)((int32_t)24)))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5|0))), (int8_t)((int32_t)24));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_7|((int32_t)256)))), (int8_t)((int32_t)24));
		goto IL_00b7;
	}

IL_0039:
	{
		int8_t L_8 = V_2;
		V_4 = (bool)((((int32_t)L_8) > ((int32_t)((int32_t)14)))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_10 = V_0;
		int32_t L_11 = V_1;
		int8_t L_12 = V_2;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11|0))), (int8_t)((int8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 1))));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_13 = V_0;
		int32_t L_14 = V_1;
		int8_t L_15 = V_2;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_14|((int32_t)256)))), (int8_t)((int8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, 1))));
		goto IL_00b7;
	}

IL_005e:
	{
		int8_t L_16 = V_2;
		V_5 = (bool)((((int32_t)((((int32_t)L_16) < ((int32_t)((int32_t)-15)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_0082;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_18 = V_0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_19|0))), (int8_t)((int32_t)13));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_21|((int32_t)256)))), (int8_t)((int32_t)13));
		goto IL_00b7;
	}

IL_0082:
	{
		int8_t L_22 = V_2;
		V_6 = (bool)((((int32_t)L_22) > ((int32_t)((int32_t)-128)))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_24 = V_0;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_25|0))), (int8_t)((int32_t)24));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_26 = V_0;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_27|((int32_t)256)))), (int8_t)((int32_t)24));
		goto IL_00b7;
	}

IL_00a3:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_28 = V_0;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_29|0))), (int8_t)((int32_t)13));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_30 = V_0;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_31|((int32_t)256)))), (int8_t)((int32_t)13));
	}

IL_00b7:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00bc:
	{
		int32_t L_33 = V_1;
		V_7 = (bool)((((int32_t)L_33) < ((int32_t)((int32_t)256)))? 1 : 0);
		bool L_34 = V_7;
		if (L_34)
		{
			goto IL_0013;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_35 = V_0;
		V_8 = L_35;
		goto IL_00d2;
	}

IL_00d2:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_36 = V_8;
		return L_36;
	}
}
// System.Single SystemHalf.HalfHelper::HalfToSingle(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HalfHelper_HalfToSingle_mCC84820A87B56F63D7738618771599AE013752E2 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		il2cpp_codegen_runtime_class_init_inline(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___MantissaTable_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = ((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___OffsetTable_2;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = ___0_half;
		uint16_t L_3 = L_2.___Value_0;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)((int32_t)L_3>>((int32_t)10)));
		uint16_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_6 = ___0_half;
		uint16_t L_7 = L_6.___Value_0;
		NullCheck(L_0);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, ((int32_t)((int32_t)L_7&((int32_t)1023)))));
		uint32_t L_9 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___ExponentTable_1;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_11 = ___0_half;
		uint16_t L_12 = L_11.___Value_0;
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)((int32_t)L_12>>((int32_t)10)));
		uint32_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_14));
		float L_15 = *((float*)((uintptr_t)(&V_0)));
		V_1 = L_15;
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_1;
		return L_16;
	}
}
// SystemHalf.Half SystemHalf.HalfHelper::SingleToHalf(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 HalfHelper_SingleToHalf_m68366D0080449E774C1158AE47AE6E37424987BF (float ___0_single, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint16_t V_1 = 0;
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = *((uint32_t*)((uintptr_t)(&___0_single)));
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = ((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___BaseTable_3;
		uint32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)(((int32_t)((uint32_t)L_2>>((int32_t)23)))&((int32_t)511)));
		uint16_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		uint32_t L_5 = V_0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_6 = ((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___ShiftTable_4;
		uint32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)((uint32_t)L_7>>((int32_t)23)));
		int8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, ((int32_t)((uint32_t)((int32_t)((int32_t)L_5&((int32_t)8388607)))>>((int32_t)((int32_t)L_9&((int32_t)31))))))));
		uint16_t L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_11;
		L_11 = Half_ToHalf_mA2110EFA584CF1F47CD6C378142674BC11978F13(L_10, NULL);
		V_2 = L_11;
		goto IL_0037;
	}

IL_0037:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_12 = V_2;
		return L_12;
	}
}
// SystemHalf.Half SystemHalf.HalfHelper::Negate(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 HalfHelper_Negate_mB50E440868A2EF2A9BE134C3AE37EE69E664394E (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half;
		uint16_t L_1 = L_0.___Value_0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2;
		L_2 = Half_ToHalf_mA2110EFA584CF1F47CD6C378142674BC11978F13((uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_1^((int32_t)32768)))), NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = V_0;
		return L_3;
	}
}
// SystemHalf.Half SystemHalf.HalfHelper::Abs(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 HalfHelper_Abs_m65148FFFC1BDE1B69B0EF896F004330D82E85E7E (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half;
		uint16_t L_1 = L_0.___Value_0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2;
		L_2 = Half_ToHalf_mA2110EFA584CF1F47CD6C378142674BC11978F13((uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_1&((int32_t)32767)))), NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = V_0;
		return L_3;
	}
}
// System.Boolean SystemHalf.HalfHelper::IsNaN(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HalfHelper_IsNaN_m903DC166FEF9ADF2C86154B4F36112FFB406F55D (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half;
		uint16_t L_1 = L_0.___Value_0;
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)L_1&((int32_t)32767)))) > ((int32_t)((int32_t)31744)))? 1 : 0);
		goto IL_0017;
	}

IL_0017:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean SystemHalf.HalfHelper::IsInfinity(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HalfHelper_IsInfinity_m34F08F5E2AD5B54E3DCC4B26A844BF33826F68ED (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half;
		uint16_t L_1 = L_0.___Value_0;
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)L_1&((int32_t)32767)))) == ((int32_t)((int32_t)31744)))? 1 : 0);
		goto IL_0017;
	}

IL_0017:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean SystemHalf.HalfHelper::IsPositiveInfinity(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HalfHelper_IsPositiveInfinity_m9693C3F57B50D61600FA57843A47DF97C6223483 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half;
		uint16_t L_1 = L_0.___Value_0;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)31744)))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean SystemHalf.HalfHelper::IsNegativeInfinity(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HalfHelper_IsNegativeInfinity_m39C6E115010F2E434AAF8BCE2D580C814F48F602 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___0_half, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___0_half;
		uint16_t L_1 = L_0.___Value_0;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)64512)))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void SystemHalf.HalfHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HalfHelper__cctor_m847A090492728116062C03361FF0B61D9C13F6CD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = HalfHelper_GenerateMantissaTable_mD518335B464B56EE5CBC4026C6EFE151BECB2E4C(NULL);
		((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___MantissaTable_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___MantissaTable_0), (void*)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = HalfHelper_GenerateExponentTable_m557B2F714859C147620664362C843734205B63EE(NULL);
		((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___ExponentTable_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___ExponentTable_1), (void*)L_1);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2;
		L_2 = HalfHelper_GenerateOffsetTable_mE61F49B44A1C8B7E34D12FF0999C43B9B0CE24B0(NULL);
		((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___OffsetTable_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___OffsetTable_2), (void*)L_2);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3;
		L_3 = HalfHelper_GenerateBaseTable_m92B5235476660AFC75D9A79FC8700A4DF86BB7DF(NULL);
		((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___BaseTable_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___BaseTable_3), (void*)L_3);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4;
		L_4 = HalfHelper_GenerateShiftTable_m53F61D1C0E10CF48A20C88CA195FB3BFBBD9BF8C(NULL);
		((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___ShiftTable_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___ShiftTable_4), (void*)L_4);
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
// System.Int32 StbImageSharp.AnimatedFrameResult::get_DelayInMs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatedFrameResult_get_DelayInMs_m2205C96AEEA08BC776A1E882B1EFC6BD6785A08F (AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDelayInMsU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void StbImageSharp.AnimatedFrameResult::set_DelayInMs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedFrameResult_set_DelayInMs_mEC055DC8715FC67099CC3974B3981175C8B0535B (AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CDelayInMsU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void StbImageSharp.AnimatedFrameResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedFrameResult__ctor_m859CA547496DD297E7912AF87480551047370B88 (AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* __this, const RuntimeMethod* method) 
{
	{
		ImageResult__ctor_mB265989B8E23404BCA3EC4E208A049E1B46B0F04(__this, NULL);
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
// System.Void StbImageSharp.AnimatedGifEnumerator::.ctor(System.IO.Stream,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedGifEnumerator__ctor_m426872B178B1C6F692C3C12ACE4FCB23BE2EACB4 (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, int32_t ___1_colorComponents, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_input;
		V_0 = (bool)((((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatedGifEnumerator__ctor_m426872B178B1C6F692C3C12ACE4FCB23BE2EACB4_RuntimeMethod_var)));
	}

IL_001b:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___0_input;
		stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_4 = (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7*)il2cpp_codegen_object_new(stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		stbi__context__ctor_mC829A0366DACB27129BF977D4B90B9C2326DD40F(L_4, L_3, NULL);
		__this->____context_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____context_0), (void*)L_4);
		stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_5 = __this->____context_0;
		il2cpp_codegen_runtime_class_init_inline(StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = StbImage_stbi__gif_test_m1F7DD10DE25B05EED4B616773327231B48406FCC(L_5, NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral47025BE0E94E1A7B34293597C96154C064A21D9F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatedGifEnumerator__ctor_m426872B178B1C6F692C3C12ACE4FCB23BE2EACB4_RuntimeMethod_var)));
	}

IL_0044:
	{
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_9 = (stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4*)il2cpp_codegen_object_new(stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		stbi__gif__ctor_m4655A211D1448DD7C627AE3FA6DF636BD969DEEB(L_9, NULL);
		__this->____gif_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gif_1), (void*)L_9);
		int32_t L_10 = ___1_colorComponents;
		__this->___U3CColorComponentsU3Ek__BackingField_2 = L_10;
		return;
	}
}
// StbImageSharp.ColorComponents StbImageSharp.AnimatedGifEnumerator::get_ColorComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatedGifEnumerator_get_ColorComponents_m59C0A0CF32749D8E565EAFC8CC201C07C53FB44C (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CColorComponentsU3Ek__BackingField_2;
		return L_0;
	}
}
// StbImageSharp.AnimatedFrameResult StbImageSharp.AnimatedGifEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345 (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, const RuntimeMethod* method) 
{
	{
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_0 = __this->___U3CCurrentU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void StbImageSharp.AnimatedGifEnumerator::set_Current(StbImageSharp.AnimatedFrameResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedGifEnumerator_set_Current_mA895B21FF85EBAF2D6508A2C066E57DE8D3B69DF (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* ___0_value, const RuntimeMethod* method) 
{
	{
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Object StbImageSharp.AnimatedGifEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnimatedGifEnumerator_System_Collections_IEnumerator_get_Current_m0931A15FACFBFD9B0816C561D93A467B60785721 (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, const RuntimeMethod* method) 
{
	{
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_0;
		L_0 = AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345_inline(__this, NULL);
		return L_0;
	}
}
// System.Void StbImageSharp.AnimatedGifEnumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedGifEnumerator_Dispose_m99C13CB070D1A7E9C7993078D56DA1CD96AC336D (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(9 /* System.Void StbImageSharp.AnimatedGifEnumerator::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Boolean StbImageSharp.AnimatedGifEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatedGifEnumerator_MoveNext_mDC4944E7F440C646EF92B3393574B6465A59BC9D (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	uint8_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* G_B5_0 = NULL;
	AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* G_B5_1 = NULL;
	AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* G_B5_2 = NULL;
	AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* G_B4_0 = NULL;
	AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* G_B4_1 = NULL;
	AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* G_B4_2 = NULL;
	int32_t G_B6_0 = 0;
	AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* G_B6_1 = NULL;
	AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* G_B6_2 = NULL;
	AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* G_B6_3 = NULL;
	{
		stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_0 = __this->____context_0;
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_1 = __this->____gif_1;
		int32_t L_2;
		L_2 = AnimatedGifEnumerator_get_ColorComponents_m59C0A0CF32749D8E565EAFC8CC201C07C53FB44C_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
		uint8_t* L_3;
		L_3 = StbImage_stbi__gif_load_next_mE0A04A44BDBC98D4945B4426170F16952A2A3AC5(L_0, L_1, (int32_t*)((uintptr_t)(&V_0)), L_2, (uint8_t*)((uintptr_t)(&V_1)), NULL);
		V_2 = L_3;
		uint8_t* L_4 = V_2;
		V_3 = (bool)((((intptr_t)L_4) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_0109;
	}

IL_0030:
	{
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_6;
		L_6 = AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345_inline(__this, NULL);
		V_5 = (bool)((((RuntimeObject*)(AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_00c8;
		}
	}
	{
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_8 = (AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41*)il2cpp_codegen_object_new(AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		AnimatedFrameResult__ctor_m859CA547496DD297E7912AF87480551047370B88(L_8, NULL);
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_9 = L_8;
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_10 = __this->____gif_1;
		NullCheck(L_10);
		int32_t L_11 = L_10->___w_27;
		NullCheck(L_9);
		ImageResult_set_Width_mAE0222CF14D7CC542BE55D499D08D8B124E788E3_inline(L_9, L_11, NULL);
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_12 = L_9;
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_13 = __this->____gif_1;
		NullCheck(L_13);
		int32_t L_14 = L_13->___h_11;
		NullCheck(L_12);
		ImageResult_set_Height_mD2E85A00BF8528F1DE5FC68CBF5FC3DD43DCD603_inline(L_12, L_14, NULL);
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_15 = L_12;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		ImageResult_set_SourceComp_m99F6BE4EDDAE7B80B3F316737EE9B401DDED9F0F_inline(L_15, L_16, NULL);
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_17 = L_15;
		int32_t L_18;
		L_18 = AnimatedGifEnumerator_get_ColorComponents_m59C0A0CF32749D8E565EAFC8CC201C07C53FB44C_inline(__this, NULL);
		G_B4_0 = L_17;
		G_B4_1 = L_17;
		G_B4_2 = __this;
		if (!L_18)
		{
			G_B5_0 = L_17;
			G_B5_1 = L_17;
			G_B5_2 = __this;
			goto IL_0086;
		}
	}
	{
		int32_t L_19;
		L_19 = AnimatedGifEnumerator_get_ColorComponents_m59C0A0CF32749D8E565EAFC8CC201C07C53FB44C_inline(__this, NULL);
		G_B6_0 = ((int32_t)(L_19));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0087;
	}

IL_0086:
	{
		int32_t L_20 = V_0;
		G_B6_0 = L_20;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0087:
	{
		NullCheck(G_B6_1);
		ImageResult_set_Comp_m9EEB51B4B3BEC210CCD4ED65708867686E65175D_inline(G_B6_1, G_B6_0, NULL);
		NullCheck(G_B6_3);
		AnimatedGifEnumerator_set_Current_mA895B21FF85EBAF2D6508A2C066E57DE8D3B69DF_inline(G_B6_3, G_B6_2, NULL);
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_21;
		L_21 = AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345_inline(__this, NULL);
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_22;
		L_22 = AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345_inline(__this, NULL);
		NullCheck(L_22);
		int32_t L_23;
		L_23 = ImageResult_get_Width_m6D3AB29E93FBE44C3F43B97D2D8DD5CDA8291270_inline(L_22, NULL);
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_24;
		L_24 = AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345_inline(__this, NULL);
		NullCheck(L_24);
		int32_t L_25;
		L_25 = ImageResult_get_Height_m987C76BE62465224C54F30712169C963063BF7C9_inline(L_24, NULL);
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_26;
		L_26 = AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345_inline(__this, NULL);
		NullCheck(L_26);
		int32_t L_27;
		L_27 = ImageResult_get_Comp_mDA76ABF7DFEB671E6A506B45B110CCD516FD7A8F_inline(L_26, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_23, L_25)), (int32_t)L_27)));
		NullCheck(L_21);
		ImageResult_set_Data_m1DF0EE05A3AD847A12C8AE138B21E9FA5969FAA3_inline(L_21, L_28, NULL);
	}

IL_00c8:
	{
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_29;
		L_29 = AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345_inline(__this, NULL);
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_30 = __this->____gif_1;
		NullCheck(L_30);
		int32_t L_31 = L_30->___delay_8;
		NullCheck(L_29);
		AnimatedFrameResult_set_DelayInMs_mEC055DC8715FC67099CC3974B3981175C8B0535B_inline(L_29, L_31, NULL);
		uint8_t* L_32 = V_2;
		intptr_t L_33;
		memset((&L_33), 0, sizeof(L_33));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_33), (void*)L_32, /*hidden argument*/NULL);
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_34;
		L_34 = AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345_inline(__this, NULL);
		NullCheck(L_34);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
		L_35 = ImageResult_get_Data_mBD84D1E6BD45AC125145D245EAD933D2B8E51D4B_inline(L_34, NULL);
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_36;
		L_36 = AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345_inline(__this, NULL);
		NullCheck(L_36);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37;
		L_37 = ImageResult_get_Data_mBD84D1E6BD45AC125145D245EAD933D2B8E51D4B_inline(L_36, NULL);
		NullCheck(L_37);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_33, L_35, 0, ((int32_t)(((RuntimeArray*)L_37)->max_length)), NULL);
		V_4 = (bool)1;
		goto IL_0109;
	}

IL_0109:
	{
		bool L_38 = V_4;
		return L_38;
	}
}
// System.Void StbImageSharp.AnimatedGifEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedGifEnumerator_Reset_mA8BA523F4758E19A93AD2CA8F99DD9B7187CD39E (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatedGifEnumerator_Reset_mA8BA523F4758E19A93AD2CA8F99DD9B7187CD39E_RuntimeMethod_var)));
	}
}
// System.Void StbImageSharp.AnimatedGifEnumerator::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedGifEnumerator_Finalize_mAE185D1EF7D602DD994B2F0804823FB26673BAFD (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(9 /* System.Void StbImageSharp.AnimatedGifEnumerator::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// System.Void StbImageSharp.AnimatedGifEnumerator::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedGifEnumerator_Dispose_m8665EB6C8E57DD728AC7627280FED3D4D4213F48 (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		bool L_0 = ___0_disposing;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00c8;
		}
	}
	{
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_2 = __this->____gif_1;
		V_1 = (bool)((!(((RuntimeObject*)(stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00c7;
		}
	}
	{
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_4 = __this->____gif_1;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->____out__0;
		V_2 = (bool)((((int32_t)((((intptr_t)L_5) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_7 = __this->____gif_1;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->____out__0;
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		CRuntime_free_m9820C32B8AB5BB989140A905BE68364EDAFBD15D((void*)L_8, NULL);
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_9 = __this->____gif_1;
		NullCheck(L_9);
		L_9->____out__0 = (uint8_t*)((uintptr_t)0);
	}

IL_0051:
	{
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_10 = __this->____gif_1;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___history_12;
		V_3 = (bool)((((int32_t)((((intptr_t)L_11) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0087;
		}
	}
	{
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_13 = __this->____gif_1;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___history_12;
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		CRuntime_free_m9820C32B8AB5BB989140A905BE68364EDAFBD15D((void*)L_14, NULL);
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_15 = __this->____gif_1;
		NullCheck(L_15);
		L_15->___history_12 = (uint8_t*)((uintptr_t)0);
	}

IL_0087:
	{
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_16 = __this->____gif_1;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___background_1;
		V_4 = (bool)((((int32_t)((((intptr_t)L_17) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_00bf;
		}
	}
	{
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_19 = __this->____gif_1;
		NullCheck(L_19);
		uint8_t* L_20 = L_19->___background_1;
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		CRuntime_free_m9820C32B8AB5BB989140A905BE68364EDAFBD15D((void*)L_20, NULL);
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_21 = __this->____gif_1;
		NullCheck(L_21);
		L_21->___background_1 = (uint8_t*)((uintptr_t)0);
	}

IL_00bf:
	{
		__this->____gif_1 = (stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gif_1), (void*)(stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4*)NULL);
	}

IL_00c7:
	{
	}

IL_00c8:
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
// System.Void StbImageSharp.AnimatedGifEnumerable::.ctor(System.IO.Stream,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedGifEnumerable__ctor_m2E24AD10C34007EBA587FA263F8F0409357A7E65 (AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, int32_t ___1_colorComponents, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_input;
		__this->____input_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____input_0), (void*)L_0);
		int32_t L_1 = ___1_colorComponents;
		__this->___U3CColorComponentsU3Ek__BackingField_1 = L_1;
		return;
	}
}
// StbImageSharp.ColorComponents StbImageSharp.AnimatedGifEnumerable::get_ColorComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatedGifEnumerable_get_ColorComponents_mF90D6769F0A2C038057D86AAF7FACA7482A12CBB (AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CColorComponentsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<StbImageSharp.AnimatedFrameResult> StbImageSharp.AnimatedGifEnumerable::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnimatedGifEnumerable_GetEnumerator_mE25641822012E135FE60531275CF98DA367A8952 (AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____input_0;
		int32_t L_1;
		L_1 = AnimatedGifEnumerable_get_ColorComponents_mF90D6769F0A2C038057D86AAF7FACA7482A12CBB_inline(__this, NULL);
		AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* L_2 = (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B*)il2cpp_codegen_object_new(AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AnimatedGifEnumerator__ctor_m426872B178B1C6F692C3C12ACE4FCB23BE2EACB4(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Collections.IEnumerator StbImageSharp.AnimatedGifEnumerable::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnimatedGifEnumerable_System_Collections_IEnumerable_GetEnumerator_m7A4E79B676AB77DA5A919C2A93BE0F601F8F0852 (AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = AnimatedGifEnumerable_GetEnumerator_mE25641822012E135FE60531275CF98DA367A8952(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
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
// System.Nullable`1<StbImageSharp.ImageInfo> StbImageSharp.ImageInfo::FromStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A ImageInfo_FromStream_m6235964F45A8A7C0AAB2046E9016131BC3325567 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m2290BB1875E64452A7C9959B7E71F75E5B39F701_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A V_7;
	memset((&V_7), 0, sizeof(V_7));
	Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A V_8;
	memset((&V_8), 0, sizeof(V_8));
	ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C V_9;
	memset((&V_9), 0, sizeof(V_9));
	ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C* G_B4_0 = NULL;
	ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C* G_B5_1 = NULL;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_1 = (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7*)il2cpp_codegen_object_new(stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		stbi__context__ctor_mC829A0366DACB27129BF977D4B90B9C2326DD40F(L_1, L_0, NULL);
		V_3 = L_1;
		stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_2 = V_3;
		il2cpp_codegen_runtime_class_init_inline(StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = StbImage_stbi__is_16_main_m563DAEE58EF61612556A4976F1E33ECA1DA17A03(L_2, NULL);
		V_4 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_4 = V_3;
		StbImage_stbi__rewind_m8B659B2BE37553537E2EEB94131C6E88B07D14B9(L_4, NULL);
		stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_5 = V_3;
		int32_t L_6;
		L_6 = StbImage_stbi__info_main_m17AB2AA6DDD7DBE223BE78B3F5FFCB5ADEBE3E46(L_5, (int32_t*)((uintptr_t)(&V_0)), (int32_t*)((uintptr_t)(&V_1)), (int32_t*)((uintptr_t)(&V_2)), NULL);
		V_5 = L_6;
		stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_7 = V_3;
		StbImage_stbi__rewind_m8B659B2BE37553537E2EEB94131C6E88B07D14B9(L_7, NULL);
		int32_t L_8 = V_5;
		V_6 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_6;
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A));
		Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A L_10 = V_7;
		V_8 = L_10;
		goto IL_0086;
	}

IL_004b:
	{
		il2cpp_codegen_initobj((&V_9), sizeof(ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C));
		int32_t L_11 = V_0;
		(&V_9)->___Width_0 = L_11;
		int32_t L_12 = V_1;
		(&V_9)->___Height_1 = L_12;
		int32_t L_13 = V_2;
		(&V_9)->___ColorComponents_2 = L_13;
		bool L_14 = V_4;
		G_B3_0 = (&V_9);
		if (L_14)
		{
			G_B4_0 = (&V_9);
			goto IL_0074;
		}
	}
	{
		G_B5_0 = 8;
		G_B5_1 = G_B3_0;
		goto IL_0076;
	}

IL_0074:
	{
		G_B5_0 = ((int32_t)16);
		G_B5_1 = G_B4_0;
	}

IL_0076:
	{
		G_B5_1->___BitsPerChannel_3 = G_B5_0;
		ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C L_15 = V_9;
		Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A L_16;
		memset((&L_16), 0, sizeof(L_16));
		Nullable_1__ctor_m2290BB1875E64452A7C9959B7E71F75E5B39F701((&L_16), L_15, /*hidden argument*/Nullable_1__ctor_m2290BB1875E64452A7C9959B7E71F75E5B39F701_RuntimeMethod_var);
		V_8 = L_16;
		goto IL_0086;
	}

IL_0086:
	{
		Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A L_17 = V_8;
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
// System.Int32 StbImageSharp.ImageResult::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageResult_get_Width_m6D3AB29E93FBE44C3F43B97D2D8DD5CDA8291270 (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CWidthU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void StbImageSharp.ImageResult::set_Width(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResult_set_Width_mAE0222CF14D7CC542BE55D499D08D8B124E788E3 (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CWidthU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int32 StbImageSharp.ImageResult::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageResult_get_Height_m987C76BE62465224C54F30712169C963063BF7C9 (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CHeightU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void StbImageSharp.ImageResult::set_Height(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResult_set_Height_mD2E85A00BF8528F1DE5FC68CBF5FC3DD43DCD603 (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CHeightU3Ek__BackingField_1 = L_0;
		return;
	}
}
// StbImageSharp.ColorComponents StbImageSharp.ImageResult::get_SourceComp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageResult_get_SourceComp_m3A6303FE7CE21FB12F7ED9379B796CC5D66D3556 (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSourceCompU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void StbImageSharp.ImageResult::set_SourceComp(StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResult_set_SourceComp_m99F6BE4EDDAE7B80B3F316737EE9B401DDED9F0F (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSourceCompU3Ek__BackingField_2 = L_0;
		return;
	}
}
// StbImageSharp.ColorComponents StbImageSharp.ImageResult::get_Comp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageResult_get_Comp_mDA76ABF7DFEB671E6A506B45B110CCD516FD7A8F (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCompU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void StbImageSharp.ImageResult::set_Comp(StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResult_set_Comp_m9EEB51B4B3BEC210CCD4ED65708867686E65175D (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCompU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Byte[] StbImageSharp.ImageResult::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageResult_get_Data_mBD84D1E6BD45AC125145D245EAD933D2B8E51D4B (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CDataU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void StbImageSharp.ImageResult::set_Data(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResult_set_Data_m1DF0EE05A3AD847A12C8AE138B21E9FA5969FAA3 (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// StbImageSharp.ImageResult StbImageSharp.ImageResult::FromResult(System.Byte*,System.Int32,System.Int32,StbImageSharp.ColorComponents,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* ImageResult_FromResult_m02AAF01184911B3675D8177B3AEC2ED9FCD5CF84 (uint8_t* ___0_result, int32_t ___1_width, int32_t ___2_height, int32_t ___3_comp, int32_t ___4_req_comp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* V_0 = NULL;
	bool V_1 = false;
	ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* V_2 = NULL;
	ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* G_B4_0 = NULL;
	ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* G_B4_1 = NULL;
	ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* G_B3_0 = NULL;
	ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* G_B5_1 = NULL;
	ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* G_B5_2 = NULL;
	{
		uint8_t* L_0 = ___0_result;
		V_1 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var)));
		String_t* L_2 = ((StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var))))->___stbi__g_failure_reason_0;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImageResult_FromResult_m02AAF01184911B3675D8177B3AEC2ED9FCD5CF84_RuntimeMethod_var)));
	}

IL_0015:
	{
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_4 = (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4*)il2cpp_codegen_object_new(ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ImageResult__ctor_mB265989B8E23404BCA3EC4E208A049E1B46B0F04(L_4, NULL);
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_5 = L_4;
		int32_t L_6 = ___1_width;
		NullCheck(L_5);
		ImageResult_set_Width_mAE0222CF14D7CC542BE55D499D08D8B124E788E3_inline(L_5, L_6, NULL);
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_7 = L_5;
		int32_t L_8 = ___2_height;
		NullCheck(L_7);
		ImageResult_set_Height_mD2E85A00BF8528F1DE5FC68CBF5FC3DD43DCD603_inline(L_7, L_8, NULL);
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_9 = L_7;
		int32_t L_10 = ___3_comp;
		NullCheck(L_9);
		ImageResult_set_SourceComp_m99F6BE4EDDAE7B80B3F316737EE9B401DDED9F0F_inline(L_9, L_10, NULL);
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_11 = L_9;
		int32_t L_12 = ___4_req_comp;
		G_B3_0 = L_11;
		G_B3_1 = L_11;
		if (!L_12)
		{
			G_B4_0 = L_11;
			G_B4_1 = L_11;
			goto IL_003b;
		}
	}
	{
		int32_t L_13 = ___4_req_comp;
		G_B5_0 = L_13;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_003c;
	}

IL_003b:
	{
		int32_t L_14 = ___3_comp;
		G_B5_0 = L_14;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_003c:
	{
		NullCheck(G_B5_1);
		ImageResult_set_Comp_m9EEB51B4B3BEC210CCD4ED65708867686E65175D_inline(G_B5_1, G_B5_0, NULL);
		V_0 = G_B5_2;
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_15 = V_0;
		int32_t L_16 = ___1_width;
		int32_t L_17 = ___2_height;
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = ImageResult_get_Comp_mDA76ABF7DFEB671E6A506B45B110CCD516FD7A8F_inline(L_18, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_16, L_17)), (int32_t)L_19)));
		NullCheck(L_15);
		ImageResult_set_Data_m1DF0EE05A3AD847A12C8AE138B21E9FA5969FAA3_inline(L_15, L_20, NULL);
		uint8_t* L_21 = ___0_result;
		intptr_t L_22;
		memset((&L_22), 0, sizeof(L_22));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_22), (void*)L_21, /*hidden argument*/NULL);
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_23 = V_0;
		NullCheck(L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = ImageResult_get_Data_mBD84D1E6BD45AC125145D245EAD933D2B8E51D4B_inline(L_23, NULL);
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_25 = V_0;
		NullCheck(L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = ImageResult_get_Data_mBD84D1E6BD45AC125145D245EAD933D2B8E51D4B_inline(L_25, NULL);
		NullCheck(L_26);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_22, L_24, 0, ((int32_t)(((RuntimeArray*)L_26)->max_length)), NULL);
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_27 = V_0;
		V_2 = L_27;
		goto IL_0078;
	}

IL_0078:
	{
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_28 = V_2;
		return L_28;
	}
}
// StbImageSharp.ImageResult StbImageSharp.ImageResult::FromStream(System.IO.Stream,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* ImageResult_FromStream_m824B25D04E8EA273005019ABD80F0C8CB25238FD (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_requiredComponents, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* V_4 = NULL;
	ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* V_5 = NULL;
	bool V_6 = false;
	{
		V_0 = (uint8_t*)((uintptr_t)0);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				{
					uint8_t* L_0 = V_0;
					V_6 = (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					bool L_1 = V_6;
					if (!L_1)
					{
						goto IL_0043;
					}
				}
				{
					uint8_t* L_2 = V_0;
					il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
					CRuntime_free_m9820C32B8AB5BB989140A905BE68364EDAFBD15D((void*)L_2, NULL);
				}

IL_0043:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___0_stream;
			stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_4 = (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7*)il2cpp_codegen_object_new(stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			stbi__context__ctor_mC829A0366DACB27129BF977D4B90B9C2326DD40F(L_4, L_3, NULL);
			V_4 = L_4;
			stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_5 = V_4;
			int32_t L_6 = ___1_requiredComponents;
			il2cpp_codegen_runtime_class_init_inline(StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
			uint8_t* L_7;
			L_7 = StbImage_stbi__load_and_postprocess_8bit_m41723694DB39350A7326D3F6B68EE8C015551F7E(L_5, (int32_t*)((uintptr_t)(&V_1)), (int32_t*)((uintptr_t)(&V_2)), (int32_t*)((uintptr_t)(&V_3)), L_6, NULL);
			V_0 = L_7;
			uint8_t* L_8 = V_0;
			int32_t L_9 = V_1;
			int32_t L_10 = V_2;
			int32_t L_11 = V_3;
			int32_t L_12 = ___1_requiredComponents;
			ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_13;
			L_13 = ImageResult_FromResult_m02AAF01184911B3675D8177B3AEC2ED9FCD5CF84(L_8, L_9, L_10, L_11, L_12, NULL);
			V_5 = L_13;
			goto IL_0045;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_14 = V_5;
		return L_14;
	}
}
// StbImageSharp.ImageResult StbImageSharp.ImageResult::FromMemory(System.Byte[],StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* ImageResult_FromMemory_mDC4B757CD6B8F81A0D76EB8C3D4108803FDD23AB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_requiredComponents, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_data;
		NullCheck(L_1);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MemoryStream__ctor_m55B1A846E0136865C4863E16D8B8002CB11296EE(L_2, L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), (bool)1, (bool)1, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0019:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0023;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0023:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_0;
			int32_t L_6 = ___1_requiredComponents;
			ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_7;
			L_7 = ImageResult_FromStream_m824B25D04E8EA273005019ABD80F0C8CB25238FD(L_5, L_6, NULL);
			V_1 = L_7;
			goto IL_0024;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0024:
	{
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_8 = V_1;
		return L_8;
	}
}
// System.Collections.Generic.IEnumerable`1<StbImageSharp.AnimatedFrameResult> StbImageSharp.ImageResult::AnimatedGifFramesFromStream(System.IO.Stream,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImageResult_AnimatedGifFramesFromStream_mC3056A9D29FE37955A3EE14F80CC38F9A41F1CE6 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_requiredComponents, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		int32_t L_1 = ___1_requiredComponents;
		AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E* L_2 = (AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E*)il2cpp_codegen_object_new(AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AnimatedGifEnumerable__ctor_m2E24AD10C34007EBA587FA263F8F0409357A7E65(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Void StbImageSharp.ImageResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResult__ctor_mB265989B8E23404BCA3EC4E208A049E1B46B0F04 (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Int32 StbImageSharp.ImageResultFloat::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageResultFloat_get_Width_m2883249CD467CD0D08006DA5FA8E89EB25B5A732 (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CWidthU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void StbImageSharp.ImageResultFloat::set_Width(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResultFloat_set_Width_mD6D7B7CCB2105CCCF379F6F00C440FFC9D46F813 (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CWidthU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int32 StbImageSharp.ImageResultFloat::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageResultFloat_get_Height_m60F03675ECA500FCE65594A9BF580A1F18C6D541 (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CHeightU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void StbImageSharp.ImageResultFloat::set_Height(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResultFloat_set_Height_mB942BDF6BA0F6B439BF40B601D7082FC031F3B06 (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CHeightU3Ek__BackingField_1 = L_0;
		return;
	}
}
// StbImageSharp.ColorComponents StbImageSharp.ImageResultFloat::get_SourceComp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageResultFloat_get_SourceComp_m071C9D66AC411568573C83508E1B504E2F161AA4 (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSourceCompU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void StbImageSharp.ImageResultFloat::set_SourceComp(StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResultFloat_set_SourceComp_mD18490D71AE38A87CBC39C2B362414F497B3BFDF (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSourceCompU3Ek__BackingField_2 = L_0;
		return;
	}
}
// StbImageSharp.ColorComponents StbImageSharp.ImageResultFloat::get_Comp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageResultFloat_get_Comp_m26180735352821C006D877A7FB0077DF0C17929C (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCompU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void StbImageSharp.ImageResultFloat::set_Comp(StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResultFloat_set_Comp_m7AA2FA993B26946D1DFACB9FB23949268C880D23 (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCompU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Single[] StbImageSharp.ImageResultFloat::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ImageResultFloat_get_Data_mF28ABD57A9CEB2A9169DD257AB9A8C98280E6372 (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___U3CDataU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void StbImageSharp.ImageResultFloat::set_Data(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResultFloat_set_Data_m1DB0F811837EE95469ECEF694DA5D9EE92193985 (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_value, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// StbImageSharp.ImageResultFloat StbImageSharp.ImageResultFloat::FromResult(System.Single*,System.Int32,System.Int32,StbImageSharp.ColorComponents,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* ImageResultFloat_FromResult_mC0AF239322A4591986572BDF99872F49C1C81DA3 (float* ___0_result, int32_t ___1_width, int32_t ___2_height, int32_t ___3_comp, int32_t ___4_req_comp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* V_0 = NULL;
	bool V_1 = false;
	ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* V_2 = NULL;
	ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* G_B4_0 = NULL;
	ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* G_B4_1 = NULL;
	ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* G_B3_0 = NULL;
	ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* G_B5_1 = NULL;
	ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* G_B5_2 = NULL;
	{
		float* L_0 = ___0_result;
		V_1 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var)));
		String_t* L_2 = ((StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var))))->___stbi__g_failure_reason_0;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImageResultFloat_FromResult_mC0AF239322A4591986572BDF99872F49C1C81DA3_RuntimeMethod_var)));
	}

IL_0015:
	{
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_4 = (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB*)il2cpp_codegen_object_new(ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ImageResultFloat__ctor_m95C5AABA1DA68A09A339620E529C78ACCE296027(L_4, NULL);
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_5 = L_4;
		int32_t L_6 = ___1_width;
		NullCheck(L_5);
		ImageResultFloat_set_Width_mD6D7B7CCB2105CCCF379F6F00C440FFC9D46F813_inline(L_5, L_6, NULL);
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_7 = L_5;
		int32_t L_8 = ___2_height;
		NullCheck(L_7);
		ImageResultFloat_set_Height_mB942BDF6BA0F6B439BF40B601D7082FC031F3B06_inline(L_7, L_8, NULL);
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_9 = L_7;
		int32_t L_10 = ___3_comp;
		NullCheck(L_9);
		ImageResultFloat_set_SourceComp_mD18490D71AE38A87CBC39C2B362414F497B3BFDF_inline(L_9, L_10, NULL);
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_11 = L_9;
		int32_t L_12 = ___4_req_comp;
		G_B3_0 = L_11;
		G_B3_1 = L_11;
		if (!L_12)
		{
			G_B4_0 = L_11;
			G_B4_1 = L_11;
			goto IL_003b;
		}
	}
	{
		int32_t L_13 = ___4_req_comp;
		G_B5_0 = L_13;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_003c;
	}

IL_003b:
	{
		int32_t L_14 = ___3_comp;
		G_B5_0 = L_14;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_003c:
	{
		NullCheck(G_B5_1);
		ImageResultFloat_set_Comp_m7AA2FA993B26946D1DFACB9FB23949268C880D23_inline(G_B5_1, G_B5_0, NULL);
		V_0 = G_B5_2;
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_15 = V_0;
		int32_t L_16 = ___1_width;
		int32_t L_17 = ___2_height;
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = ImageResultFloat_get_Comp_m26180735352821C006D877A7FB0077DF0C17929C_inline(L_18, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_16, L_17)), (int32_t)L_19)));
		NullCheck(L_15);
		ImageResultFloat_set_Data_m1DB0F811837EE95469ECEF694DA5D9EE92193985_inline(L_15, L_20, NULL);
		float* L_21 = ___0_result;
		intptr_t L_22;
		memset((&L_22), 0, sizeof(L_22));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_22), (void*)L_21, /*hidden argument*/NULL);
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_23 = V_0;
		NullCheck(L_23);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24;
		L_24 = ImageResultFloat_get_Data_mF28ABD57A9CEB2A9169DD257AB9A8C98280E6372_inline(L_23, NULL);
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_25 = V_0;
		NullCheck(L_25);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_26;
		L_26 = ImageResultFloat_get_Data_mF28ABD57A9CEB2A9169DD257AB9A8C98280E6372_inline(L_25, NULL);
		NullCheck(L_26);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775(L_22, L_24, 0, ((int32_t)(((RuntimeArray*)L_26)->max_length)), NULL);
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_27 = V_0;
		V_2 = L_27;
		goto IL_0078;
	}

IL_0078:
	{
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_28 = V_2;
		return L_28;
	}
}
// StbImageSharp.ImageResultFloat StbImageSharp.ImageResultFloat::FromStream(System.IO.Stream,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* ImageResultFloat_FromStream_mE1911EA1BE10D2061C75D45C84BEB10E595D3989 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_requiredComponents, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* V_4 = NULL;
	ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* V_5 = NULL;
	bool V_6 = false;
	{
		V_0 = (float*)((uintptr_t)0);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				{
					float* L_0 = V_0;
					V_6 = (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					bool L_1 = V_6;
					if (!L_1)
					{
						goto IL_0043;
					}
				}
				{
					float* L_2 = V_0;
					il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
					CRuntime_free_m9820C32B8AB5BB989140A905BE68364EDAFBD15D((void*)L_2, NULL);
				}

IL_0043:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___0_stream;
			stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_4 = (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7*)il2cpp_codegen_object_new(stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			stbi__context__ctor_mC829A0366DACB27129BF977D4B90B9C2326DD40F(L_4, L_3, NULL);
			V_4 = L_4;
			stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_5 = V_4;
			int32_t L_6 = ___1_requiredComponents;
			il2cpp_codegen_runtime_class_init_inline(StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
			float* L_7;
			L_7 = StbImage_stbi__loadf_main_m10EEF703B01E09C773F97478660C526B14E7777E(L_5, (int32_t*)((uintptr_t)(&V_1)), (int32_t*)((uintptr_t)(&V_2)), (int32_t*)((uintptr_t)(&V_3)), L_6, NULL);
			V_0 = L_7;
			float* L_8 = V_0;
			int32_t L_9 = V_1;
			int32_t L_10 = V_2;
			int32_t L_11 = V_3;
			int32_t L_12 = ___1_requiredComponents;
			ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_13;
			L_13 = ImageResultFloat_FromResult_mC0AF239322A4591986572BDF99872F49C1C81DA3(L_8, L_9, L_10, L_11, L_12, NULL);
			V_5 = L_13;
			goto IL_0045;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_14 = V_5;
		return L_14;
	}
}
// StbImageSharp.ImageResultFloat StbImageSharp.ImageResultFloat::FromMemory(System.Byte[],StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* ImageResultFloat_FromMemory_m13F21406996A8AE51CD89722462E7DE09ED2E980 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_requiredComponents, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_data;
		NullCheck(L_1);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MemoryStream__ctor_m55B1A846E0136865C4863E16D8B8002CB11296EE(L_2, L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), (bool)1, (bool)1, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0019:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0023;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0023:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_0;
			int32_t L_6 = ___1_requiredComponents;
			ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_7;
			L_7 = ImageResultFloat_FromStream_mE1911EA1BE10D2061C75D45C84BEB10E595D3989(L_5, L_6, NULL);
			V_1 = L_7;
			goto IL_0024;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0024:
	{
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_8 = V_1;
		return L_8;
	}
}
// System.Void StbImageSharp.ImageResultFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResultFloat__ctor_m95C5AABA1DA68A09A339620E529C78ACCE296027 (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void StbImageSharp.StbImage/stbi__context::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stbi__context__ctor_mC829A0366DACB27129BF977D4B90B9C2326DD40F (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		__this->___img_n_1 = 0;
		__this->___img_out_n_2 = 0;
		__this->___img_x_3 = 0;
		__this->___img_y_4 = 0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		V_0 = (bool)((((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&stbi__context__ctor_mC829A0366DACB27129BF977D4B90B9C2326DD40F_RuntimeMethod_var)));
	}

IL_0037:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___0_stream;
		__this->___U3CStreamU3Ek__BackingField_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStreamU3Ek__BackingField_5), (void*)L_3);
		return;
	}
}
// System.IO.Stream StbImageSharp.StbImage/stbi__context::get_Stream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* stbi__context_get_Stream_m58F3540EF3F1F0326F1210E78B31F2A582178134 (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___U3CStreamU3Ek__BackingField_5;
		return L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StbImageSharp.StbImage/stbi__gif::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stbi__gif__ctor_m4655A211D1448DD7C627AE3FA6DF636BD969DEEB (stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1__ctor_m75FD4AC5FDF39ECCC52B84F34324B535D1455001_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1_op_Implicit_m6541926AF5FCE50202474E3C045787ABE550A256_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray2D_1__ctor_m3A58CFC7D1EED7D3D5087499656F8833CB720624_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray2D_1_op_Implicit_m70B5987ED11018AA1B208A0B5BF2D3C16A07FA04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE* L_0 = (UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE*)il2cpp_codegen_object_new(UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnsafeArray1D_1__ctor_m75FD4AC5FDF39ECCC52B84F34324B535D1455001(L_0, ((int32_t)8192), UnsafeArray1D_1__ctor_m75FD4AC5FDF39ECCC52B84F34324B535D1455001_RuntimeMethod_var);
		__this->___codesArray_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___codesArray_4), (void*)L_0);
		UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4* L_1 = (UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4*)il2cpp_codegen_object_new(UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnsafeArray2D_1__ctor_m3A58CFC7D1EED7D3D5087499656F8833CB720624(L_1, ((int32_t)256), 4, UnsafeArray2D_1__ctor_m3A58CFC7D1EED7D3D5087499656F8833CB720624_RuntimeMethod_var);
		__this->___lpalArray_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lpalArray_16), (void*)L_1);
		UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4* L_2 = (UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4*)il2cpp_codegen_object_new(UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnsafeArray2D_1__ctor_m3A58CFC7D1EED7D3D5087499656F8833CB720624(L_2, ((int32_t)256), 4, UnsafeArray2D_1__ctor_m3A58CFC7D1EED7D3D5087499656F8833CB720624_RuntimeMethod_var);
		__this->___palArray_20 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___palArray_20), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4* L_3 = __this->___palArray_20;
		void* L_4;
		L_4 = UnsafeArray2D_1_op_Implicit_m70B5987ED11018AA1B208A0B5BF2D3C16A07FA04(L_3, UnsafeArray2D_1_op_Implicit_m70B5987ED11018AA1B208A0B5BF2D3C16A07FA04_RuntimeMethod_var);
		__this->___pal_19 = (uint8_t**)L_4;
		UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4* L_5 = __this->___lpalArray_16;
		void* L_6;
		L_6 = UnsafeArray2D_1_op_Implicit_m70B5987ED11018AA1B208A0B5BF2D3C16A07FA04(L_5, UnsafeArray2D_1_op_Implicit_m70B5987ED11018AA1B208A0B5BF2D3C16A07FA04_RuntimeMethod_var);
		__this->___lpal_15 = (uint8_t**)L_6;
		UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE* L_7 = __this->___codesArray_4;
		void* L_8;
		L_8 = UnsafeArray1D_1_op_Implicit_m6541926AF5FCE50202474E3C045787ABE550A256(L_7, UnsafeArray1D_1_op_Implicit_m6541926AF5FCE50202474E3C045787ABE550A256_RuntimeMethod_var);
		__this->___codes_3 = (stbi__gif_lzw_t50321AB205854CBA2DA47AAF2C14535018D79584*)L_8;
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
void delegate0_Invoke_m37235E30A5928755B0FD04A5DDB2567B1E97ED4F_Multicast(delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* __this, uint8_t* ___0_arg0, int32_t ___1_arg1, int16_t* ___2_arg2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* currentDelegate = reinterpret_cast<delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, uint8_t*, int32_t, int16_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg0, ___1_arg1, ___2_arg2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void delegate0_Invoke_m37235E30A5928755B0FD04A5DDB2567B1E97ED4F_OpenInst(delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* __this, uint8_t* ___0_arg0, int32_t ___1_arg1, int16_t* ___2_arg2, const RuntimeMethod* method)
{
	NullCheck(___0_arg0);
	typedef void (*FunctionPointerType) (uint8_t*, int32_t, int16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_arg0, ___1_arg1, ___2_arg2, method);
}
void delegate0_Invoke_m37235E30A5928755B0FD04A5DDB2567B1E97ED4F_OpenStatic(delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* __this, uint8_t* ___0_arg0, int32_t ___1_arg1, int16_t* ___2_arg2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (uint8_t*, int32_t, int16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_arg0, ___1_arg1, ___2_arg2, method);
}
void delegate0_Invoke_m37235E30A5928755B0FD04A5DDB2567B1E97ED4F_OpenStaticInvoker(delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* __this, uint8_t* ___0_arg0, int32_t ___1_arg1, int16_t* ___2_arg2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< uint8_t*, int32_t, int16_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_arg0, ___1_arg1, ___2_arg2);
}
void delegate0_Invoke_m37235E30A5928755B0FD04A5DDB2567B1E97ED4F_ClosedStaticInvoker(delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* __this, uint8_t* ___0_arg0, int32_t ___1_arg1, int16_t* ___2_arg2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, uint8_t*, int32_t, int16_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg0, ___1_arg1, ___2_arg2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9 (delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* __this, uint8_t* ___0_arg0, int32_t ___1_arg1, int16_t* ___2_arg2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*, int32_t, int16_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_arg0, ___1_arg1, ___2_arg2);

}
// System.Void StbImageSharp.StbImage/delegate0::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate0__ctor_m0AF38915FF0F5132E782B90701002BCACDC1D5FB (delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate0_Invoke_m37235E30A5928755B0FD04A5DDB2567B1E97ED4F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&delegate0_Invoke_m37235E30A5928755B0FD04A5DDB2567B1E97ED4F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate0_Invoke_m37235E30A5928755B0FD04A5DDB2567B1E97ED4F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&delegate0_Invoke_m37235E30A5928755B0FD04A5DDB2567B1E97ED4F_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&delegate0_Invoke_m37235E30A5928755B0FD04A5DDB2567B1E97ED4F_Multicast;
}
// System.Void StbImageSharp.StbImage/delegate0::Invoke(System.Byte*,System.Int32,System.Int16*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate0_Invoke_m37235E30A5928755B0FD04A5DDB2567B1E97ED4F (delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* __this, uint8_t* ___0_arg0, int32_t ___1_arg1, int16_t* ___2_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, uint8_t*, int32_t, int16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg0, ___1_arg1, ___2_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult StbImageSharp.StbImage/delegate0::BeginInvoke(System.Byte*,System.Int32,System.Int16*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* delegate0_BeginInvoke_m09CC6E51FFCD219866BFC3805D10594A84E53B49 (delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* __this, uint8_t* ___0_arg0, int32_t ___1_arg1, int16_t* ___2_arg2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_arg0;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_arg1);
	__d_args[2] = ___2_arg2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void StbImageSharp.StbImage/delegate0::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate0_EndInvoke_m14104A9197C7DC27F43A5C1FA12BE07553E8FDA4 (delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void delegate1_Invoke_m8CAD5EF59306FDE189B1F32958DB56E5D1BA69F2_Multicast(delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* __this, uint8_t* ___0_arg0, uint8_t* ___1_arg1, uint8_t* ___2_arg2, uint8_t* ___3_arg3, int32_t ___4_arg4, int32_t ___5_arg5, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* currentDelegate = reinterpret_cast<delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, uint8_t*, uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, ___4_arg4, ___5_arg5, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void delegate1_Invoke_m8CAD5EF59306FDE189B1F32958DB56E5D1BA69F2_OpenInst(delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* __this, uint8_t* ___0_arg0, uint8_t* ___1_arg1, uint8_t* ___2_arg2, uint8_t* ___3_arg3, int32_t ___4_arg4, int32_t ___5_arg5, const RuntimeMethod* method)
{
	NullCheck(___0_arg0);
	typedef void (*FunctionPointerType) (uint8_t*, uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, ___4_arg4, ___5_arg5, method);
}
void delegate1_Invoke_m8CAD5EF59306FDE189B1F32958DB56E5D1BA69F2_OpenStatic(delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* __this, uint8_t* ___0_arg0, uint8_t* ___1_arg1, uint8_t* ___2_arg2, uint8_t* ___3_arg3, int32_t ___4_arg4, int32_t ___5_arg5, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (uint8_t*, uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, ___4_arg4, ___5_arg5, method);
}
void delegate1_Invoke_m8CAD5EF59306FDE189B1F32958DB56E5D1BA69F2_OpenStaticInvoker(delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* __this, uint8_t* ___0_arg0, uint8_t* ___1_arg1, uint8_t* ___2_arg2, uint8_t* ___3_arg3, int32_t ___4_arg4, int32_t ___5_arg5, const RuntimeMethod* method)
{
	InvokerActionInvoker6< uint8_t*, uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, ___4_arg4, ___5_arg5);
}
void delegate1_Invoke_m8CAD5EF59306FDE189B1F32958DB56E5D1BA69F2_ClosedStaticInvoker(delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* __this, uint8_t* ___0_arg0, uint8_t* ___1_arg1, uint8_t* ___2_arg2, uint8_t* ___3_arg3, int32_t ___4_arg4, int32_t ___5_arg5, const RuntimeMethod* method)
{
	InvokerActionInvoker7< RuntimeObject*, uint8_t*, uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, ___4_arg4, ___5_arg5);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42 (delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* __this, uint8_t* ___0_arg0, uint8_t* ___1_arg1, uint8_t* ___2_arg2, uint8_t* ___3_arg3, int32_t ___4_arg4, int32_t ___5_arg5, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*, uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, ___4_arg4, ___5_arg5);

}
// System.Void StbImageSharp.StbImage/delegate1::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate1__ctor_mA57476943A3DE980D0FECD01D322B4F4BDF4D7D3 (delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 6;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate1_Invoke_m8CAD5EF59306FDE189B1F32958DB56E5D1BA69F2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&delegate1_Invoke_m8CAD5EF59306FDE189B1F32958DB56E5D1BA69F2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate1_Invoke_m8CAD5EF59306FDE189B1F32958DB56E5D1BA69F2_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&delegate1_Invoke_m8CAD5EF59306FDE189B1F32958DB56E5D1BA69F2_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&delegate1_Invoke_m8CAD5EF59306FDE189B1F32958DB56E5D1BA69F2_Multicast;
}
// System.Void StbImageSharp.StbImage/delegate1::Invoke(System.Byte*,System.Byte*,System.Byte*,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate1_Invoke_m8CAD5EF59306FDE189B1F32958DB56E5D1BA69F2 (delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* __this, uint8_t* ___0_arg0, uint8_t* ___1_arg1, uint8_t* ___2_arg2, uint8_t* ___3_arg3, int32_t ___4_arg4, int32_t ___5_arg5, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, uint8_t*, uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, ___4_arg4, ___5_arg5, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult StbImageSharp.StbImage/delegate1::BeginInvoke(System.Byte*,System.Byte*,System.Byte*,System.Byte*,System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* delegate1_BeginInvoke_m5A2A74287D0A8621F02E98DA70AF9645A5BBB632 (delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* __this, uint8_t* ___0_arg0, uint8_t* ___1_arg1, uint8_t* ___2_arg2, uint8_t* ___3_arg3, int32_t ___4_arg4, int32_t ___5_arg5, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___6_callback, RuntimeObject* ___7_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = ___0_arg0;
	__d_args[1] = ___1_arg1;
	__d_args[2] = ___2_arg2;
	__d_args[3] = ___3_arg3;
	__d_args[4] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___4_arg4);
	__d_args[5] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___5_arg5);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___6_callback, (RuntimeObject*)___7_object);
}
// System.Void StbImageSharp.StbImage/delegate1::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate1_EndInvoke_m79CEEE2F7453575E3BDBB9A50CDE523EC46576C6 (delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
uint8_t* delegate2_Invoke_m2CC52FAB743EE8280C050142C5ECDDB6789082A1_Multicast(delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* __this, uint8_t* ___0_arg0, uint8_t* ___1_arg1, uint8_t* ___2_arg2, int32_t ___3_arg3, int32_t ___4_arg4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	uint8_t* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* currentDelegate = reinterpret_cast<delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F*>(delegatesToInvoke[i]);
		typedef uint8_t* (*FunctionPointerType) (RuntimeObject*, uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, ___4_arg4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
uint8_t* delegate2_Invoke_m2CC52FAB743EE8280C050142C5ECDDB6789082A1_OpenInst(delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* __this, uint8_t* ___0_arg0, uint8_t* ___1_arg1, uint8_t* ___2_arg2, int32_t ___3_arg3, int32_t ___4_arg4, const RuntimeMethod* method)
{
	NullCheck(___0_arg0);
	typedef uint8_t* (*FunctionPointerType) (uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, ___4_arg4, method);
}
uint8_t* delegate2_Invoke_m2CC52FAB743EE8280C050142C5ECDDB6789082A1_OpenStatic(delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* __this, uint8_t* ___0_arg0, uint8_t* ___1_arg1, uint8_t* ___2_arg2, int32_t ___3_arg3, int32_t ___4_arg4, const RuntimeMethod* method)
{
	typedef uint8_t* (*FunctionPointerType) (uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, ___4_arg4, method);
}
uint8_t* delegate2_Invoke_m2CC52FAB743EE8280C050142C5ECDDB6789082A1_OpenStaticInvoker(delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* __this, uint8_t* ___0_arg0, uint8_t* ___1_arg1, uint8_t* ___2_arg2, int32_t ___3_arg3, int32_t ___4_arg4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< uint8_t*, uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, ___4_arg4);
}
uint8_t* delegate2_Invoke_m2CC52FAB743EE8280C050142C5ECDDB6789082A1_ClosedStaticInvoker(delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* __this, uint8_t* ___0_arg0, uint8_t* ___1_arg1, uint8_t* ___2_arg2, int32_t ___3_arg3, int32_t ___4_arg4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< uint8_t*, RuntimeObject*, uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, ___4_arg4);
}
IL2CPP_EXTERN_C  uint8_t* DelegatePInvokeWrapper_delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F (delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* __this, uint8_t* ___0_arg0, uint8_t* ___1_arg1, uint8_t* ___2_arg2, int32_t ___3_arg3, int32_t ___4_arg4, const RuntimeMethod* method)
{
	typedef uint8_t* (DEFAULT_CALL *PInvokeFunc)(uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	uint8_t* returnValue = il2cppPInvokeFunc(___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, ___4_arg4);

	return returnValue;
}
// System.Void StbImageSharp.StbImage/delegate2::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate2__ctor_m399087F5232C1E9BED7C8CC1B0743681F7D99E20 (delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate2_Invoke_m2CC52FAB743EE8280C050142C5ECDDB6789082A1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&delegate2_Invoke_m2CC52FAB743EE8280C050142C5ECDDB6789082A1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate2_Invoke_m2CC52FAB743EE8280C050142C5ECDDB6789082A1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&delegate2_Invoke_m2CC52FAB743EE8280C050142C5ECDDB6789082A1_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&delegate2_Invoke_m2CC52FAB743EE8280C050142C5ECDDB6789082A1_Multicast;
}
// System.Byte* StbImageSharp.StbImage/delegate2::Invoke(System.Byte*,System.Byte*,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* delegate2_Invoke_m2CC52FAB743EE8280C050142C5ECDDB6789082A1 (delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* __this, uint8_t* ___0_arg0, uint8_t* ___1_arg1, uint8_t* ___2_arg2, int32_t ___3_arg3, int32_t ___4_arg4, const RuntimeMethod* method) 
{
	typedef uint8_t* (*FunctionPointerType) (RuntimeObject*, uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, ___4_arg4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult StbImageSharp.StbImage/delegate2::BeginInvoke(System.Byte*,System.Byte*,System.Byte*,System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* delegate2_BeginInvoke_m31BADE0E36614C087D7C2F72492AFFB2AC14A15D (delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* __this, uint8_t* ___0_arg0, uint8_t* ___1_arg1, uint8_t* ___2_arg2, int32_t ___3_arg3, int32_t ___4_arg4, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___0_arg0;
	__d_args[1] = ___1_arg1;
	__d_args[2] = ___2_arg2;
	__d_args[3] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___3_arg3);
	__d_args[4] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___4_arg4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
// System.Byte* StbImageSharp.StbImage/delegate2::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* delegate2_EndInvoke_m5FF86B25F6025F2E1A98A529C35F501BD61B0C82 (delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (uint8_t*)__result;
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
// System.Void StbImageSharp.StbImage/stbi__jpeg::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stbi__jpeg__ctor_m15D5D6EFC502290230477ACB3F3FA56829E4FA32 (stbi__jpeg_t783B73264C160BDD8FD99C2A40E683EBEDDB2402* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1__ctor_m742DAE97CC04FF2A5C951005E7E1DEAE976FD4B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1__ctor_m80391CAC93DAF529FDA5AC99D18457B15FD0007B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1__ctor_mF515A01BB21FA30A4F292F4417C31C5E8B88F46E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1_op_Implicit_m4D9430D6AC327C03284B4A81786AE78DCA2EF354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1_op_Implicit_mC0F446E66C867587CA19A5DF4FB883EB8676D772_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1_op_Implicit_mE32AAEFB2E0B4E9E8536ECF5A2B32906DBA0AE73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray2D_1__ctor_m4B656CBF9E31CBD022740B8F979CE85FDBE33B20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray2D_1__ctor_m5ED6464C063FDB0E310BC0AC417ACCE4B08D7A41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray2D_1_op_Implicit_m49A2133A13994F72DAB2CA613E74AF6C8C5F1413_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray2D_1_op_Implicit_mBEFA368E08328EEAC109432ECC9DC849C4C8CF1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF* L_0 = (UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF*)il2cpp_codegen_object_new(UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnsafeArray2D_1__ctor_m5ED6464C063FDB0E310BC0AC417ACCE4B08D7A41(L_0, 4, ((int32_t)64), UnsafeArray2D_1__ctor_m5ED6464C063FDB0E310BC0AC417ACCE4B08D7A41_RuntimeMethod_var);
		__this->___dequantArray_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dequantArray_4), (void*)L_0);
		UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794* L_1 = (UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794*)il2cpp_codegen_object_new(UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnsafeArray2D_1__ctor_m4B656CBF9E31CBD022740B8F979CE85FDBE33B20(L_1, 4, ((int32_t)512), UnsafeArray2D_1__ctor_m4B656CBF9E31CBD022740B8F979CE85FDBE33B20_RuntimeMethod_var);
		__this->___fast_acArray_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fast_acArray_7), (void*)L_1);
		UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA* L_2 = (UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA*)il2cpp_codegen_object_new(UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnsafeArray1D_1__ctor_m80391CAC93DAF529FDA5AC99D18457B15FD0007B(L_2, 4, UnsafeArray1D_1__ctor_m80391CAC93DAF529FDA5AC99D18457B15FD0007B_RuntimeMethod_var);
		__this->___huff_acArray_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___huff_acArray_9), (void*)L_2);
		UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA* L_3 = (UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA*)il2cpp_codegen_object_new(UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnsafeArray1D_1__ctor_m80391CAC93DAF529FDA5AC99D18457B15FD0007B(L_3, 4, UnsafeArray1D_1__ctor_m80391CAC93DAF529FDA5AC99D18457B15FD0007B_RuntimeMethod_var);
		__this->___huff_dcArray_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___huff_dcArray_11), (void*)L_3);
		UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A* L_4 = (UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A*)il2cpp_codegen_object_new(UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnsafeArray1D_1__ctor_m742DAE97CC04FF2A5C951005E7E1DEAE976FD4B1(L_4, 4, UnsafeArray1D_1__ctor_m742DAE97CC04FF2A5C951005E7E1DEAE976FD4B1_RuntimeMethod_var);
		__this->___img_compArray_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___img_compArray_14), (void*)L_4);
		UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933* L_5 = (UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933*)il2cpp_codegen_object_new(UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnsafeArray1D_1__ctor_mF515A01BB21FA30A4F292F4417C31C5E8B88F46E(L_5, 4, UnsafeArray1D_1__ctor_mF515A01BB21FA30A4F292F4417C31C5E8B88F46E_RuntimeMethod_var);
		__this->___orderArray_25 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___orderArray_25), (void*)L_5);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA* L_6 = __this->___huff_dcArray_11;
		void* L_7;
		L_7 = UnsafeArray1D_1_op_Implicit_m4D9430D6AC327C03284B4A81786AE78DCA2EF354(L_6, UnsafeArray1D_1_op_Implicit_m4D9430D6AC327C03284B4A81786AE78DCA2EF354_RuntimeMethod_var);
		__this->___huff_dc_10 = (stbi__huffman_t6DEAA8DAB0C7E7B906ED693F3B02A4FB88BC8D7F*)L_7;
		UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA* L_8 = __this->___huff_acArray_9;
		void* L_9;
		L_9 = UnsafeArray1D_1_op_Implicit_m4D9430D6AC327C03284B4A81786AE78DCA2EF354(L_8, UnsafeArray1D_1_op_Implicit_m4D9430D6AC327C03284B4A81786AE78DCA2EF354_RuntimeMethod_var);
		__this->___huff_ac_8 = (stbi__huffman_t6DEAA8DAB0C7E7B906ED693F3B02A4FB88BC8D7F*)L_9;
		UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF* L_10 = __this->___dequantArray_4;
		void* L_11;
		L_11 = UnsafeArray2D_1_op_Implicit_mBEFA368E08328EEAC109432ECC9DC849C4C8CF1F(L_10, UnsafeArray2D_1_op_Implicit_mBEFA368E08328EEAC109432ECC9DC849C4C8CF1F_RuntimeMethod_var);
		__this->___dequant_3 = (uint16_t**)L_11;
		UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794* L_12 = __this->___fast_acArray_7;
		void* L_13;
		L_13 = UnsafeArray2D_1_op_Implicit_m49A2133A13994F72DAB2CA613E74AF6C8C5F1413(L_12, UnsafeArray2D_1_op_Implicit_m49A2133A13994F72DAB2CA613E74AF6C8C5F1413_RuntimeMethod_var);
		__this->___fast_ac_6 = (int16_t**)L_13;
		UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A* L_14 = __this->___img_compArray_14;
		void* L_15;
		L_15 = UnsafeArray1D_1_op_Implicit_mC0F446E66C867587CA19A5DF4FB883EB8676D772(L_14, UnsafeArray1D_1_op_Implicit_mC0F446E66C867587CA19A5DF4FB883EB8676D772_RuntimeMethod_var);
		__this->___img_comp_13 = (unnamed1_tFFCD00E633D511D08F0102AF033EAEF84DB82DF1*)L_15;
		UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933* L_16 = __this->___orderArray_25;
		void* L_17;
		L_17 = UnsafeArray1D_1_op_Implicit_mE32AAEFB2E0B4E9E8536ECF5A2B32906DBA0AE73(L_16, UnsafeArray1D_1_op_Implicit_mE32AAEFB2E0B4E9E8536ECF5A2B32906DBA0AE73_RuntimeMethod_var);
		__this->___order_24 = (int32_t*)L_17;
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
// System.Void StbImageSharp.StbImage/stbi__resample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stbi__resample__ctor_m32EF21FD452C9E3F17A7A6F127FA8B0DCEEF828C (stbi__resample_tEFE16727AD25AA174BB9F4C254785074D3FE8ED4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void StbImageSharp.StbImage/stbi__png::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stbi__png__ctor_m7A4E1AB32C5485FCF3E6F22A72022F7A0111D8AF (stbi__png_tCBD935AEB160DD127D2005952F7C0255B2FDA04F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_value;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345_inline (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, const RuntimeMethod* method) 
{
	{
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_0 = __this->___U3CCurrentU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnimatedGifEnumerator_get_ColorComponents_m59C0A0CF32749D8E565EAFC8CC201C07C53FB44C_inline (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CColorComponentsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResult_set_Width_mAE0222CF14D7CC542BE55D499D08D8B124E788E3_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CWidthU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResult_set_Height_mD2E85A00BF8528F1DE5FC68CBF5FC3DD43DCD603_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CHeightU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResult_set_SourceComp_m99F6BE4EDDAE7B80B3F316737EE9B401DDED9F0F_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSourceCompU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResult_set_Comp_m9EEB51B4B3BEC210CCD4ED65708867686E65175D_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCompU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnimatedGifEnumerator_set_Current_mA895B21FF85EBAF2D6508A2C066E57DE8D3B69DF_inline (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* ___0_value, const RuntimeMethod* method) 
{
	{
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ImageResult_get_Width_m6D3AB29E93FBE44C3F43B97D2D8DD5CDA8291270_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CWidthU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ImageResult_get_Height_m987C76BE62465224C54F30712169C963063BF7C9_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CHeightU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ImageResult_get_Comp_mDA76ABF7DFEB671E6A506B45B110CCD516FD7A8F_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCompU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResult_set_Data_m1DF0EE05A3AD847A12C8AE138B21E9FA5969FAA3_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnimatedFrameResult_set_DelayInMs_mEC055DC8715FC67099CC3974B3981175C8B0535B_inline (AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CDelayInMsU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageResult_get_Data_mBD84D1E6BD45AC125145D245EAD933D2B8E51D4B_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CDataU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnimatedGifEnumerable_get_ColorComponents_mF90D6769F0A2C038057D86AAF7FACA7482A12CBB_inline (AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CColorComponentsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResultFloat_set_Width_mD6D7B7CCB2105CCCF379F6F00C440FFC9D46F813_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CWidthU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResultFloat_set_Height_mB942BDF6BA0F6B439BF40B601D7082FC031F3B06_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CHeightU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResultFloat_set_SourceComp_mD18490D71AE38A87CBC39C2B362414F497B3BFDF_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSourceCompU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResultFloat_set_Comp_m7AA2FA993B26946D1DFACB9FB23949268C880D23_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCompU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ImageResultFloat_get_Comp_m26180735352821C006D877A7FB0077DF0C17929C_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCompU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResultFloat_set_Data_m1DB0F811837EE95469ECEF694DA5D9EE92193985_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_value, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ImageResultFloat_get_Data_mF28ABD57A9CEB2A9169DD257AB9A8C98280E6372_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___U3CDataU3Ek__BackingField_4;
		return L_0;
	}
}
