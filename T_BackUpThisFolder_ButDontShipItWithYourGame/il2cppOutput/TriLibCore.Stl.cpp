#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<TriLibCore.AssetLoaderContext>
struct Action_1_tD39AE6C0C913B7D513756AFCD7E9F0539538D226;
// System.Action`1<TriLibCore.IContextualizedError>
struct Action_1_t3B6442C6168F6F5364512C62A54645843CF93C30;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<TriLibCore.AssetLoaderContext,System.Single>
struct Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD;
// System.Action`4<System.String,System.String,System.TimeSpan,System.Int64>
struct Action_4_tA3594528C5AC13E7A27B50D19223DC951CD1E8B2;
// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.General.CompoundMaterialKey,TriLibCore.TextureLoadingContext>
struct ConcurrentDictionary_2_t94764B51655C4F04FDAE59E1A6327AFEE05EA292;
// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.IMaterial,System.Collections.Generic.List`1<TriLibCore.MaterialRendererContext>>
struct ConcurrentDictionary_2_tA783589C825EB0CEA850D32094AAEFFBB3FD5D82;
// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.IMaterial,UnityEngine.Material>
struct ConcurrentDictionary_2_t3C2E41F7177FE1C1CDEBF4CACA510701BAF4AEF2;
// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.ITexture,TriLibCore.TextureLoadingContext>
struct ConcurrentDictionary_2_tBB5915FD91B3F65141A8C3EC64A14F14EEA3905B;
// TriLibCore.General.ConcurrentDictionary`2<System.String,System.String>
struct ConcurrentDictionary_2_tCF44E0035FB42A2A1DF508A4CE0B233163C23F1E;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,TriLibCore.Interfaces.IModel>
struct Dictionary_2_tE704ACFE7C32537A046D8577F8299D1B52ED0C00;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.String>
struct Dictionary_2_t15A9DEF843D5DA84170CD8536BA0EBB039EB4ADF;
// System.Collections.Generic.Dictionary`2<TriLibCore.Interfaces.IModel,UnityEngine.GameObject>
struct Dictionary_2_tADE1FC3F6C786CACD6652C2C7275C3A0FD274A9C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Byte[]>
struct Dictionary_2_t23C2BC333CAB1901F8EC82B59264ED8D028DD1AB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IGeometryGroup>
struct Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983;
// System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IModel>
struct Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.HashSet`1<UnityEngine.Texture>
struct HashSet_1_t70836788BCAF42568800A162B9F23937F5309AE8;
// System.Collections.Generic.HashSet`1<UnityEngine.Rendering.VertexAttribute>
struct HashSet_1_t17CC6C8527489146D9154E22DE059EF4A4550640;
// System.Collections.Generic.IEnumerable`1<TriLibCore.Interfaces.IGeometryGroup>
struct IEnumerable_1_tAA0F967AC7C9F8C5F11D399E14AA456425FBE910;
// System.Collections.Generic.IEnumerable`1<TriLibCore.Interfaces.IModel>
struct IEnumerable_1_t03C6D7F3A96DA6FAE16E0D510D08496F01435357;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Rendering.VertexAttribute>
struct IEqualityComparer_1_tCB8B04D567BFC1D22CB3A6BEBC86439C73A31734;
// System.Collections.Generic.IList`1<System.Char>
struct IList_1_tF23041AC58956CDAA98A1DA3D23002DBE4EBE278;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation>
struct IList_1_t7A16CD7EF0938B36E4D20182185F284ECA5F93A2;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ICamera>
struct IList_1_t13EA3E1B6894AF8023B793D65EA2E1ED596B6E82;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup>
struct IList_1_t54EA2EAA8FF287B3E144BC90047C3E635336CB4C;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ILight>
struct IList_1_t95B0FF72887258CDC012A1B81E66B66AF3BBE38E;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial>
struct IList_1_t0662D113B996C51F1676FFC848F7B3448D818DB7;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>
struct IList_1_tBAC2F9CBFB365F17F69446225AF2802DEF7B2956;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture>
struct IList_1_t2988C79E2C0A953B91ACE72118B299F94ECFEB62;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,TriLibCore.Interfaces.IGeometryGroup>
struct KeyCollection_t5F67525E552F59FDDBF77225ACD1AFE445BAE65E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,TriLibCore.Interfaces.IModel>
struct KeyCollection_tE72CD5B28675345F9BF175796FBC9BC6302E5275;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<System.IDisposable>
struct List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551;
// System.Collections.Generic.Queue`1<TriLibCore.Interfaces.IContextualizedAction>
struct Queue_1_t952DE88AF42216B755D09647735E4235DA7138D4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TriLibCore.Interfaces.IGeometryGroup>
struct ValueCollection_tCCCE4A1A9D973B131015A437780697A2155EAACD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TriLibCore.Interfaces.IModel>
struct ValueCollection_t52D0D70A98CDE4A09BB9B7D39C2159B31ECAE027;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,TriLibCore.Interfaces.IGeometryGroup>[]
struct EntryU5BU5D_t54FF245C9871CCC2E71905AABD358B1A89642802;
// System.Collections.Generic.Dictionary`2/Entry<System.String,TriLibCore.Interfaces.IModel>[]
struct EntryU5BU5D_t97D3428B6A02CD680A2D45BF34F1488CADFC7A7E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Rendering.VertexAttribute>[]
struct SlotU5BU5D_tAE07F08746129C3374BC8C791AAFFE4C832AFB2A;
// TriLibCore.Mappers.AnimationClipMapper[]
struct AnimationClipMapperU5BU5D_t8E00A18562A07FD65A6E731D8BA6FF48D80BBFD8;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TriLibCore.Interfaces.IGeometryGroup[]
struct IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711;
// TriLibCore.Interfaces.IModel[]
struct IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// TriLibCore.Mappers.LipSyncMapper[]
struct LipSyncMapperU5BU5D_t32748FDCB493E8E7550A88244C1CBBB79E54C18A;
// TriLibCore.Mappers.MaterialMapper[]
struct MaterialMapperU5BU5D_tBD3B26C68148AE48AD6F3B44795C7B7B3EE2257B;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TriLibCore.Mappers.TextureMapper[]
struct TextureMapperU5BU5D_t35F575F1D951980713D2A9E7D85F6AE82ABEA79C;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TriLibCore.AssetLoaderContext
struct AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C;
// TriLibCore.AssetLoaderOptions
struct AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6;
// UnityEngine.Avatar
struct Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// TriLibCore.Mappers.ExternalDataMapper
struct ExternalDataMapper_t809726D72207DAF57227F4A5D67B9D01394B760A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// TriLibCore.Geometries.Geometry
struct Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147;
// TriLibCore.General.HumanDescription
struct HumanDescription_t0BD271EF43944EC6940A10C164E94F8C7E750481;
// TriLibCore.Mappers.HumanoidAvatarMapper
struct HumanoidAvatarMapper_t691E00A2CE4455F03562FF79A586CC717D38FB09;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// TriLibCore.Interfaces.IGeometryGroup
struct IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262;
// TriLibCore.Interfaces.IModel
struct IModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB;
// TriLibCore.Interfaces.IRootModel
struct IRootModel_t83ED40397FD23448FC9A99336523CC7DE8A841BB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// TriLibCore.ReaderBase
struct ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449;
// TriLibCore.Mappers.RootBoneMapper
struct RootBoneMapper_t64AE3E33364A832EE1B74D8B65BC9AA7B448DDA2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Collections.Stack
struct Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47;
// TriLibCore.Stl.StlGeometry
struct StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF;
// TriLibCore.Stl.StlModel
struct StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA;
// TriLibCore.Stl.StlProcessor
struct StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0;
// TriLibCore.Stl.Reader.StlReader
struct StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A;
// TriLibCore.Stl.StlRootModel
struct StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142;
// TriLibCore.Stl.StlStreamReader
struct StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// TriLibCore.Mappers.TextureMapper
struct TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD;
// System.Type
struct Type_t;
// TriLibCore.Mappers.UserPropertiesMapper
struct UserPropertiesMapper_t8437A569EBEB9E02E364D9951BE31F9601C55714;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37
struct U3CParseASCII_CoroutineU3Ed__37_t2025851D54681DED612B7A7309F1BB0236E5CD89;
// TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36
struct U3CParseBinary_CoroutineU3Ed__36_t9316974EF4D1C437F9E5335DFC9AD7528F2976F3;
// TriLibCore.Stl.StlProcessor/<Process_Coroutine>d__35
struct U3CProcess_CoroutineU3Ed__35_tC5008D73142E8CB387527E2710DD67853C659773;
// TriLibCore.Stl.Reader.StlReader/<ReadStream_Coroutine>d__12
struct U3CReadStream_CoroutineU3Ed__12_t47E2ED2CC72C13AA1ABAC957297E3E9858D1E9ED;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRootModel_t83ED40397FD23448FC9A99336523CC7DE8A841BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CParseASCII_CoroutineU3Ed__37_t2025851D54681DED612B7A7309F1BB0236E5CD89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CParseBinary_CoroutineU3Ed__36_t9316974EF4D1C437F9E5335DFC9AD7528F2976F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CProcess_CoroutineU3Ed__35_tC5008D73142E8CB387527E2710DD67853C659773_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReadStream_CoroutineU3Ed__12_t47E2ED2CC72C13AA1ABAC957297E3E9858D1E9ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3063F5F4FAEA0002A9B169DA0D12D52AC6312C1A;
IL2CPP_EXTERN_C String_t* _stringLiteral4F4B57D5A155D08E686DEA8A1E7C1992F9C3675B;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
IL2CPP_EXTERN_C String_t* _stringLiteral795FA97334306AE47C0C9744A2642732E6FED22D;
IL2CPP_EXTERN_C String_t* _stringLiteral8E84C7CBF5EA8FD2E1EDA86178896A7CB3F34B81;
IL2CPP_EXTERN_C String_t* _stringLiteralB0F9A5767B5106090414D118D94D8CC4F1F188C6;
IL2CPP_EXTERN_C String_t* _stringLiteralC3007E4D4C9A026A571CD47422BE823D8A32DC2A;
IL2CPP_EXTERN_C String_t* _stringLiteralE21886A8FD3908720B58122F94229E548DD3A51F;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m53D84560875155F383C73DA9027DE4CC7AC985D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mEF9914E7A716EC8B3A7FB701A93B07E83F4C798B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mEF0435E0E1DE72962810AC3082B1AF39B3951155_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m16C7DB0395DCD9EF714A07CDB8934C3FCAE7F50C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5F5C68AF90E49C38EB7E07DDE14E85B7C3875390_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m2CEBA9C111276D8D06435752E5C5B3598E722CBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m56D477CD7C6E64384E53F8B4C44C151CB9CADA48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisIGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_m8A9221E5C3D95DC2EDD7FC163B30C1A3A3929D1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisIModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_m8A288987F91069D02641D435D479CADC11764605_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IGeometryGroup_GetGeometry_TisStlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF_m4B86DA0DDE54E5F1A22E224B3A37C7316E2ACA27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StlProcessor_ParseASCII_m297D902C12F8D0B07F75397F81C1BA6A82B918ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StlStreamReader_ReadTokenAsFloat_m30C508ABFBF8FF2F47629BCFFB53C042F4B7F551_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CParseASCII_CoroutineU3Ed__37_MoveNext_mFD03B1BA77B49CAC8EF6DD82A3D8F82CF9197E28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CParseASCII_CoroutineU3Ed__37_System_Collections_IEnumerator_Reset_m8C0BA189A26DD87C3F8C84739159726E5417E7A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CParseBinary_CoroutineU3Ed__36_System_Collections_IEnumerator_Reset_mDF7382AFAC6A29591FB0CE6DB51DFA753000ACDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CProcess_CoroutineU3Ed__35_System_Collections_IEnumerator_Reset_m1A3748A65C94B94D29214A9A182D1A6E624A10F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReadStream_CoroutineU3Ed__12_System_Collections_IEnumerator_Reset_m19DE58B7F32F3F24DDD4E926574C36B54891DE58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ProcessingSteps_t0ED2265911192A39BA3686E081CB2D9F4DA68078_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711;
struct IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t02941931EB822FCAB52150CDE43126D44ACC9F7D 
{
};

// System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IGeometryGroup>
struct Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t54FF245C9871CCC2E71905AABD358B1A89642802* ____entries_1;
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
	KeyCollection_t5F67525E552F59FDDBF77225ACD1AFE445BAE65E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCCCE4A1A9D973B131015A437780697A2155EAACD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IModel>
struct Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t97D3428B6A02CD680A2D45BF34F1488CADFC7A7E* ____entries_1;
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
	KeyCollection_tE72CD5B28675345F9BF175796FBC9BC6302E5275* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t52D0D70A98CDE4A09BB9B7D39C2159B31ECAE027* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<UnityEngine.Rendering.VertexAttribute>
struct HashSet_1_t17CC6C8527489146D9154E22DE059EF4A4550640  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tAE07F08746129C3374BC8C791AAFFE4C832AFB2A* ____slots_8;
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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TriLibCore.Interfaces.IGeometryGroup>
struct ValueCollection_tCCCE4A1A9D973B131015A437780697A2155EAACD  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TriLibCore.Interfaces.IModel>
struct ValueCollection_t52D0D70A98CDE4A09BB9B7D39C2159B31ECAE027  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* ____dictionary_0;
};
struct Il2CppArrayBounds;

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
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

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_61;
};

// TriLibCore.Geometries.Geometry
struct Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Geometries.Geometry::<OriginalVertexIndices>k__BackingField
	RuntimeObject* ___U3COriginalVertexIndicesU3Ek__BackingField_0;
	// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Geometries.Geometry::<VertexDataIndices>k__BackingField
	RuntimeObject* ___U3CVertexDataIndicesU3Ek__BackingField_1;
	// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Geometries.Geometry::<GeometryGroup>k__BackingField
	RuntimeObject* ___U3CGeometryGroupU3Ek__BackingField_2;
	// System.Int32 TriLibCore.Geometries.Geometry::<MaterialIndex>k__BackingField
	int32_t ___U3CMaterialIndexU3Ek__BackingField_3;
	// System.Boolean TriLibCore.Geometries.Geometry::<IsQuad>k__BackingField
	bool ___U3CIsQuadU3Ek__BackingField_4;
	// System.Int32 TriLibCore.Geometries.Geometry::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_5;
	// System.Int32 TriLibCore.Geometries.Geometry::<OriginalIndex>k__BackingField
	int32_t ___U3COriginalIndexU3Ek__BackingField_6;
	// System.Boolean TriLibCore.Geometries.Geometry::_disposed
	bool ____disposed_7;
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

// TriLibCore.ReaderBase
struct ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449  : public RuntimeObject
{
	// System.String[] TriLibCore.ReaderBase::_loadingStepEnumNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____loadingStepEnumNames_1;
	// TriLibCore.AssetLoaderContext TriLibCore.ReaderBase::<AssetLoaderContext>k__BackingField
	AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___U3CAssetLoaderContextU3Ek__BackingField_2;
	// System.String TriLibCore.ReaderBase::_filename
	String_t* ____filename_3;
	// System.Action`2<TriLibCore.AssetLoaderContext,System.Single> TriLibCore.ReaderBase::_onProgress
	Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ____onProgress_4;
	// System.Int32 TriLibCore.ReaderBase::_nameCounter
	int32_t ____nameCounter_5;
	// System.Int32 TriLibCore.ReaderBase::_materialCounter
	int32_t ____materialCounter_6;
	// System.Int32 TriLibCore.ReaderBase::_textureCounter
	int32_t ____textureCounter_7;
	// System.Int32 TriLibCore.ReaderBase::_geometryGroupCounter
	int32_t ____geometryGroupCounter_8;
	// System.Int32 TriLibCore.ReaderBase::_animationCounter
	int32_t ____animationCounter_9;
};

struct ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449_StaticFields
{
	// System.Action`4<System.String,System.String,System.TimeSpan,System.Int64> TriLibCore.ReaderBase::ProfileStepCallback
	Action_4_tA3594528C5AC13E7A27B50D19223DC951CD1E8B2* ___ProfileStepCallback_0;
};

// System.Collections.Stack
struct Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47  : public RuntimeObject
{
	// System.Object[] System.Collections.Stack::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Stack::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Stack::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack::_syncRoot
	RuntimeObject* ____syncRoot_3;
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

// TriLibCore.Stl.StlProcessor/<Process_Coroutine>d__35
struct U3CProcess_CoroutineU3Ed__35_tC5008D73142E8CB387527E2710DD67853C659773  : public RuntimeObject
{
	// System.Int32 TriLibCore.Stl.StlProcessor/<Process_Coroutine>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TriLibCore.Stl.StlProcessor/<Process_Coroutine>d__35::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TriLibCore.AssetLoaderContext TriLibCore.Stl.StlProcessor/<Process_Coroutine>d__35::_assetLoaderContext
	AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ____assetLoaderContext_2;
	// TriLibCore.Stl.Reader.StlReader TriLibCore.Stl.StlProcessor/<Process_Coroutine>d__35::stlReader
	StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* ___stlReader_3;
	// System.IO.Stream TriLibCore.Stl.StlProcessor/<Process_Coroutine>d__35::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_4;
	// TriLibCore.Stl.StlProcessor TriLibCore.Stl.StlProcessor/<Process_Coroutine>d__35::<>4__this
	StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* ___U3CU3E4__this_5;
	// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.StlProcessor/<Process_Coroutine>d__35::<rootModel>5__1
	RuntimeObject* ___U3CrootModelU3E5__1_6;
	// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.StlProcessor/<Process_Coroutine>d__35::<rootModel>5__2
	RuntimeObject* ___U3CrootModelU3E5__2_7;
};

// TriLibCore.Stl.Reader.StlReader/<ReadStream_Coroutine>d__12
struct U3CReadStream_CoroutineU3Ed__12_t47E2ED2CC72C13AA1ABAC957297E3E9858D1E9ED  : public RuntimeObject
{
	// System.Int32 TriLibCore.Stl.Reader.StlReader/<ReadStream_Coroutine>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TriLibCore.Stl.Reader.StlReader/<ReadStream_Coroutine>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.IO.Stream TriLibCore.Stl.Reader.StlReader/<ReadStream_Coroutine>d__12::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_2;
	// TriLibCore.AssetLoaderContext TriLibCore.Stl.Reader.StlReader/<ReadStream_Coroutine>d__12::assetLoaderContext
	AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext_3;
	// System.String TriLibCore.Stl.Reader.StlReader/<ReadStream_Coroutine>d__12::filename
	String_t* ___filename_4;
	// System.Action`2<TriLibCore.AssetLoaderContext,System.Single> TriLibCore.Stl.Reader.StlReader/<ReadStream_Coroutine>d__12::onProgress
	Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___onProgress_5;
	// TriLibCore.Stl.Reader.StlReader TriLibCore.Stl.Reader.StlReader/<ReadStream_Coroutine>d__12::<>4__this
	StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* ___U3CU3E4__this_6;
	// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.Reader.StlReader/<ReadStream_Coroutine>d__12::<model>5__1
	RuntimeObject* ___U3CmodelU3E5__1_7;
};

// UnityEngine.BoneWeight
struct BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F 
{
	// System.Single UnityEngine.BoneWeight::m_Weight0
	float ___m_Weight0_0;
	// System.Single UnityEngine.BoneWeight::m_Weight1
	float ___m_Weight1_1;
	// System.Single UnityEngine.BoneWeight::m_Weight2
	float ___m_Weight2_2;
	// System.Single UnityEngine.BoneWeight::m_Weight3
	float ___m_Weight3_3;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex0
	int32_t ___m_BoneIndex0_4;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex1
	int32_t ___m_BoneIndex1_5;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex2
	int32_t ___m_BoneIndex2_6;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex3
	int32_t ___m_BoneIndex3_7;
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

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TriLibCore.Stl.StlGeometry
struct StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF  : public Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147
{
};

// TriLibCore.Stl.Reader.StlReader
struct StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A  : public ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449
{
};

struct StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields
{
	// System.Boolean TriLibCore.Stl.Reader.StlReader::FixInfacingNormals
	bool ___FixInfacingNormals_10;
	// System.Boolean TriLibCore.Stl.Reader.StlReader::LoadWithYUp
	bool ___LoadWithYUp_11;
	// System.Boolean TriLibCore.Stl.Reader.StlReader::StoreTriangleIndexInTexCoord0
	bool ___StoreTriangleIndexInTexCoord0_12;
	// System.Boolean TriLibCore.Stl.Reader.StlReader::ImportNormals
	bool ___ImportNormals_13;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

// TriLibCore.AssetLoaderContext
struct AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Byte[]> TriLibCore.AssetLoaderContext::_bufferPool
	Dictionary_2_t23C2BC333CAB1901F8EC82B59264ED8D028DD1AB* ____bufferPool_0;
	// System.Collections.Generic.List`1<System.IDisposable> TriLibCore.AssetLoaderContext::_nativeArrays
	List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* ____nativeArrays_1;
	// System.Collections.Generic.List`1<UnityEngine.Object> TriLibCore.AssetLoaderContext::Allocations
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___Allocations_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.String> TriLibCore.AssetLoaderContext::GameObjectPaths
	Dictionary_2_t15A9DEF843D5DA84170CD8536BA0EBB039EB4ADF* ___GameObjectPaths_3;
	// System.Collections.Generic.Dictionary`2<TriLibCore.Interfaces.IModel,UnityEngine.GameObject> TriLibCore.AssetLoaderContext::GameObjects
	Dictionary_2_tADE1FC3F6C786CACD6652C2C7275C3A0FD274A9C* ___GameObjects_4;
	// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.IMaterial,UnityEngine.Material> TriLibCore.AssetLoaderContext::GeneratedMaterials
	ConcurrentDictionary_2_t3C2E41F7177FE1C1CDEBF4CACA510701BAF4AEF2* ___GeneratedMaterials_5;
	// TriLibCore.General.ConcurrentDictionary`2<System.String,System.String> TriLibCore.AssetLoaderContext::LoadedExternalData
	ConcurrentDictionary_2_tCF44E0035FB42A2A1DF508A4CE0B233163C23F1E* ___LoadedExternalData_6;
	// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.IMaterial,UnityEngine.Material> TriLibCore.AssetLoaderContext::LoadedMaterials
	ConcurrentDictionary_2_t3C2E41F7177FE1C1CDEBF4CACA510701BAF4AEF2* ___LoadedMaterials_7;
	// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.ITexture,TriLibCore.TextureLoadingContext> TriLibCore.AssetLoaderContext::LoadedTextures
	ConcurrentDictionary_2_tBB5915FD91B3F65141A8C3EC64A14F14EEA3905B* ___LoadedTextures_8;
	// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.IMaterial,System.Collections.Generic.List`1<TriLibCore.MaterialRendererContext>> TriLibCore.AssetLoaderContext::MaterialRenderers
	ConcurrentDictionary_2_tA783589C825EB0CEA850D32094AAEFFBB3FD5D82* ___MaterialRenderers_9;
	// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.General.CompoundMaterialKey,TriLibCore.TextureLoadingContext> TriLibCore.AssetLoaderContext::MaterialTextures
	ConcurrentDictionary_2_t94764B51655C4F04FDAE59E1A6327AFEE05EA292* ___MaterialTextures_10;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,TriLibCore.Interfaces.IModel> TriLibCore.AssetLoaderContext::Models
	Dictionary_2_tE704ACFE7C32537A046D8577F8299D1B52ED0C00* ___Models_11;
	// System.Collections.Generic.HashSet`1<UnityEngine.Texture> TriLibCore.AssetLoaderContext::UsedTextures
	HashSet_1_t70836788BCAF42568800A162B9F23937F5309AE8* ___UsedTextures_12;
	// System.Int64 TriLibCore.AssetLoaderContext::_lastTimeCheck
	int64_t ____lastTimeCheck_13;
	// System.Diagnostics.Stopwatch TriLibCore.AssetLoaderContext::_stopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ____stopwatch_14;
	// System.Boolean TriLibCore.AssetLoaderContext::AppliedDoubleSidedMaterials
	bool ___AppliedDoubleSidedMaterials_15;
	// System.Boolean TriLibCore.AssetLoaderContext::Async
	bool ___Async_16;
	// System.String TriLibCore.AssetLoaderContext::BasePath
	String_t* ___BasePath_17;
	// System.Threading.CancellationToken TriLibCore.AssetLoaderContext::CancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___CancellationToken_18;
	// System.Threading.CancellationTokenSource TriLibCore.AssetLoaderContext::CancellationTokenSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___CancellationTokenSource_19;
	// System.Object TriLibCore.AssetLoaderContext::CustomData
	RuntimeObject* ___CustomData_20;
	// System.String TriLibCore.AssetLoaderContext::FileExtension
	String_t* ___FileExtension_21;
	// System.String TriLibCore.AssetLoaderContext::Filename
	String_t* ___Filename_22;
	// System.Boolean TriLibCore.AssetLoaderContext::HaltTasks
	bool ___HaltTasks_23;
	// System.Action`1<TriLibCore.IContextualizedError> TriLibCore.AssetLoaderContext::HandleError
	Action_1_t3B6442C6168F6F5364512C62A54645843CF93C30* ___HandleError_24;
	// System.Boolean TriLibCore.AssetLoaderContext::IsZipFile
	bool ___IsZipFile_25;
	// System.Single TriLibCore.AssetLoaderContext::LoadingProgress
	float ___LoadingProgress_26;
	// System.Int32 TriLibCore.AssetLoaderContext::LoadingStep
	int32_t ___LoadingStep_27;
	// System.String TriLibCore.AssetLoaderContext::ModificationDate
	String_t* ___ModificationDate_28;
	// System.Action`1<TriLibCore.IContextualizedError> TriLibCore.AssetLoaderContext::OnError
	Action_1_t3B6442C6168F6F5364512C62A54645843CF93C30* ___OnError_29;
	// System.Action`1<TriLibCore.AssetLoaderContext> TriLibCore.AssetLoaderContext::OnLoad
	Action_1_tD39AE6C0C913B7D513756AFCD7E9F0539538D226* ___OnLoad_30;
	// System.Action`1<TriLibCore.AssetLoaderContext> TriLibCore.AssetLoaderContext::OnMaterialsLoad
	Action_1_tD39AE6C0C913B7D513756AFCD7E9F0539538D226* ___OnMaterialsLoad_31;
	// System.Action`1<TriLibCore.AssetLoaderContext> TriLibCore.AssetLoaderContext::OnPreLoad
	Action_1_tD39AE6C0C913B7D513756AFCD7E9F0539538D226* ___OnPreLoad_32;
	// System.Action`2<TriLibCore.AssetLoaderContext,System.Single> TriLibCore.AssetLoaderContext::OnProgress
	Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___OnProgress_33;
	// TriLibCore.AssetLoaderOptions TriLibCore.AssetLoaderContext::Options
	AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* ___Options_34;
	// System.Int32 TriLibCore.AssetLoaderContext::PreviousLoadingStep
	int32_t ___PreviousLoadingStep_35;
	// TriLibCore.ReaderBase TriLibCore.AssetLoaderContext::Reader
	ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* ___Reader_36;
	// UnityEngine.GameObject TriLibCore.AssetLoaderContext::RootGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___RootGameObject_37;
	// TriLibCore.Interfaces.IRootModel TriLibCore.AssetLoaderContext::RootModel
	RuntimeObject* ___RootModel_38;
	// System.Collections.Stack TriLibCore.AssetLoaderContext::Stack
	Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* ___Stack_39;
	// System.IO.Stream TriLibCore.AssetLoaderContext::Stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Stream_40;
	// System.Threading.Tasks.Task TriLibCore.AssetLoaderContext::Task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___Task_41;
	// System.Collections.Generic.List`1<System.Threading.Tasks.Task> TriLibCore.AssetLoaderContext::Tasks
	List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551* ___Tasks_42;
	// UnityEngine.GameObject TriLibCore.AssetLoaderContext::WrapperGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___WrapperGameObject_43;
	// System.String TriLibCore.AssetLoaderContext::<PersistentDataPath>k__BackingField
	String_t* ___U3CPersistentDataPathU3Ek__BackingField_44;
	// System.Collections.Generic.Queue`1<TriLibCore.Interfaces.IContextualizedAction> TriLibCore.AssetLoaderContext::<CustomDispatcherQueue>k__BackingField
	Queue_1_t952DE88AF42216B755D09647735E4235DA7138D4* ___U3CCustomDispatcherQueueU3Ek__BackingField_45;
	// System.Boolean TriLibCore.AssetLoaderContext::<Completed>k__BackingField
	bool ___U3CCompletedU3Ek__BackingField_46;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// TriLibCore.Stl.StlModel
struct StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA  : public RuntimeObject
{
	// System.String TriLibCore.Stl.StlModel::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Boolean TriLibCore.Stl.StlModel::<Used>k__BackingField
	bool ___U3CUsedU3Ek__BackingField_1;
	// UnityEngine.Vector3 TriLibCore.Stl.StlModel::<Pivot>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPivotU3Ek__BackingField_2;
	// UnityEngine.Vector3 TriLibCore.Stl.StlModel::<LocalPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CLocalPositionU3Ek__BackingField_3;
	// UnityEngine.Quaternion TriLibCore.Stl.StlModel::<LocalRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CLocalRotationU3Ek__BackingField_4;
	// UnityEngine.Vector3 TriLibCore.Stl.StlModel::<LocalScale>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CLocalScaleU3Ek__BackingField_5;
	// System.Boolean TriLibCore.Stl.StlModel::<Visibility>k__BackingField
	bool ___U3CVisibilityU3Ek__BackingField_6;
	// TriLibCore.Interfaces.IModel TriLibCore.Stl.StlModel::<Parent>k__BackingField
	RuntimeObject* ___U3CParentU3Ek__BackingField_7;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Stl.StlModel::<Children>k__BackingField
	RuntimeObject* ___U3CChildrenU3Ek__BackingField_8;
	// System.Boolean TriLibCore.Stl.StlModel::<IsBone>k__BackingField
	bool ___U3CIsBoneU3Ek__BackingField_9;
	// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Stl.StlModel::<GeometryGroup>k__BackingField
	RuntimeObject* ___U3CGeometryGroupU3Ek__BackingField_10;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Stl.StlModel::<Bones>k__BackingField
	RuntimeObject* ___U3CBonesU3Ek__BackingField_11;
	// UnityEngine.Matrix4x4[] TriLibCore.Stl.StlModel::<BindPoses>k__BackingField
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___U3CBindPosesU3Ek__BackingField_12;
	// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Stl.StlModel::<MaterialIndices>k__BackingField
	RuntimeObject* ___U3CMaterialIndicesU3Ek__BackingField_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> TriLibCore.Stl.StlModel::<UserProperties>k__BackingField
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___U3CUserPropertiesU3Ek__BackingField_14;
	// System.Boolean TriLibCore.Stl.StlModel::<HasCustomPivot>k__BackingField
	bool ___U3CHasCustomPivotU3Ek__BackingField_15;
	// UnityEngine.Matrix4x4 TriLibCore.Stl.StlModel::<OriginalGlobalMatrix>k__BackingField
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___U3COriginalGlobalMatrixU3Ek__BackingField_16;
};

// TriLibCore.Stl.StlProcessor
struct StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IGeometryGroup> TriLibCore.Stl.StlProcessor::_geometryGroups
	Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983* ____geometryGroups_3;
	// System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IModel> TriLibCore.Stl.StlProcessor::_models
	Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* ____models_4;
	// TriLibCore.Stl.Reader.StlReader TriLibCore.Stl.StlProcessor::_reader
	StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* ____reader_5;
	// System.String TriLibCore.Stl.StlProcessor::_groupName
	String_t* ____groupName_6;
	// System.String TriLibCore.Stl.StlProcessor::_lastGeometryGroupName
	String_t* ____lastGeometryGroupName_7;
	// System.Int32 TriLibCore.Stl.StlProcessor::_lastLoopNumber
	int32_t ____lastLoopNumber_8;
	// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Stl.StlProcessor::_activeGeometryGroup
	RuntimeObject* ____activeGeometryGroup_9;
	// TriLibCore.Stl.StlGeometry TriLibCore.Stl.StlProcessor::_activeGeometry
	StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* ____activeGeometry_10;
	// System.Int32 TriLibCore.Stl.StlProcessor::_loopNumber
	int32_t ____loopNumber_11;
	// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor::_facetNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____facetNormal_12;
	// UnityEngine.Color TriLibCore.Stl.StlProcessor::_partColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____partColor_21;
	// UnityEngine.Color TriLibCore.Stl.StlProcessor::_facetColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____facetColor_22;
	// System.Collections.Generic.HashSet`1<UnityEngine.Rendering.VertexAttribute> TriLibCore.Stl.StlProcessor::_vertexAttributes
	HashSet_1_t17CC6C8527489146D9154E22DE059EF4A4550640* ____vertexAttributes_23;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37
struct U3CParseASCII_CoroutineU3Ed__37_t2025851D54681DED612B7A7309F1BB0236E5CD89  : public RuntimeObject
{
	// System.Int32 TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TriLibCore.AssetLoaderContext TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::_assetLoaderContext
	AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ____assetLoaderContext_2;
	// System.IO.Stream TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_3;
	// TriLibCore.Stl.StlProcessor TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::<>4__this
	StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* ___U3CU3E4__this_4;
	// TriLibCore.Stl.StlStreamReader TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::<stlStreamReader>5__1
	StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* ___U3CstlStreamReaderU3E5__1_5;
	// System.Int32 TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::<vertexIndex>5__2
	int32_t ___U3CvertexIndexU3E5__2_6;
	// UnityEngine.Vector3[] TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::<tempVertices>5__3
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___U3CtempVerticesU3E5__3_7;
	// System.Boolean TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::<modelAdded>5__4
	bool ___U3CmodelAddedU3E5__4_8;
	// TriLibCore.Stl.StlRootModel TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::<rootModel>5__5
	StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* ___U3CrootModelU3E5__5_9;
	// System.Single TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::<lastPerc>5__6
	float ___U3ClastPercU3E5__6_10;
	// System.Int64 TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::<command>5__7
	int64_t ___U3CcommandU3E5__7_11;
	// System.Single TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::<perc>5__8
	float ___U3CpercU3E5__8_12;
	// System.Int64 TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::<>s__9
	int64_t ___U3CU3Es__9_13;
	// System.Int64 TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::<normal>5__10
	int64_t ___U3CnormalU3E5__10_14;
	// System.Int64 TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::<loop>5__11
	int64_t ___U3CloopU3E5__11_15;
	// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::<value>5__12
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CvalueU3E5__12_16;
	// System.Single TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::<scale>5__13
	float ___U3CscaleU3E5__13_17;
	// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::<geometryGroup>5__14
	RuntimeObject* ___U3CgeometryGroupU3E5__14_18;
	// System.Int32 TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::<finalIndex>5__15
	int32_t ___U3CfinalIndexU3E5__15_19;
	// System.Int32 TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::<index0>5__16
	int32_t ___U3Cindex0U3E5__16_20;
	// System.Int32 TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::<index1>5__17
	int32_t ___U3Cindex1U3E5__17_21;
	// System.Int32 TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::<index2>5__18
	int32_t ___U3Cindex2U3E5__18_22;
	// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::<calculatedNormal>5__19
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CcalculatedNormalU3E5__19_23;
};

// TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36
struct U3CParseBinary_CoroutineU3Ed__36_t9316974EF4D1C437F9E5335DFC9AD7528F2976F3  : public RuntimeObject
{
	// System.Int32 TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TriLibCore.AssetLoaderContext TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::_assetLoaderContext
	AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ____assetLoaderContext_2;
	// System.IO.Stream TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_3;
	// TriLibCore.Stl.StlProcessor TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<>4__this
	StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* ___U3CU3E4__this_4;
	// System.Boolean TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<isMaterialise>5__1
	bool ___U3CisMaterialiseU3E5__1_5;
	// System.IO.BinaryReader TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<binaryReader>5__2
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___U3CbinaryReaderU3E5__2_6;
	// System.String TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<color>5__3
	String_t* ___U3CcolorU3E5__3_7;
	// System.Int32 TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<triangleCount>5__4
	int32_t ___U3CtriangleCountU3E5__4_8;
	// System.Single TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<scale>5__5
	float ___U3CscaleU3E5__5_9;
	// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<geometryGroup>5__6
	RuntimeObject* ___U3CgeometryGroupU3E5__6_10;
	// TriLibCore.Stl.StlRootModel TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<rootModel>5__7
	StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* ___U3CrootModelU3E5__7_11;
	// TriLibCore.Stl.StlModel TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<model>5__8
	StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* ___U3CmodelU3E5__8_12;
	// System.Byte TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<r>5__9
	uint8_t ___U3CrU3E5__9_13;
	// System.Byte TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<g>5__10
	uint8_t ___U3CgU3E5__10_14;
	// System.Byte TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<b>5__11
	uint8_t ___U3CbU3E5__11_15;
	// System.Byte TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<a>5__12
	uint8_t ___U3CaU3E5__12_16;
	// System.Int32 TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<i>5__13
	int32_t ___U3CiU3E5__13_17;
	// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<vertexA>5__14
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CvertexAU3E5__14_18;
	// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<vertexB>5__15
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CvertexBU3E5__15_19;
	// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<vertexC>5__16
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CvertexCU3E5__16_20;
	// System.Int16 TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<attributes>5__17
	int16_t ___U3CattributesU3E5__17_21;
	// System.Int32 TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<r>5__18
	int32_t ___U3CrU3E5__18_22;
	// System.Int32 TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<g>5__19
	int32_t ___U3CgU3E5__19_23;
	// System.Int32 TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<b>5__20
	int32_t ___U3CbU3E5__20_24;
	// System.Boolean TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<use>5__21
	bool ___U3CuseU3E5__21_25;
	// System.Int32 TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<baseIndex>5__22
	int32_t ___U3CbaseIndexU3E5__22_26;
	// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::<calculatedNormal>5__23
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CcalculatedNormalU3E5__23_27;
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

// TriLibCore.Stl.StlRootModel
struct StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142  : public StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA
{
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Stl.StlRootModel::<AllModels>k__BackingField
	RuntimeObject* ___U3CAllModelsU3Ek__BackingField_17;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup> TriLibCore.Stl.StlRootModel::<AllGeometryGroups>k__BackingField
	RuntimeObject* ___U3CAllGeometryGroupsU3Ek__BackingField_18;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation> TriLibCore.Stl.StlRootModel::<AllAnimations>k__BackingField
	RuntimeObject* ___U3CAllAnimationsU3Ek__BackingField_19;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial> TriLibCore.Stl.StlRootModel::<AllMaterials>k__BackingField
	RuntimeObject* ___U3CAllMaterialsU3Ek__BackingField_20;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture> TriLibCore.Stl.StlRootModel::<AllTextures>k__BackingField
	RuntimeObject* ___U3CAllTexturesU3Ek__BackingField_21;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ICamera> TriLibCore.Stl.StlRootModel::<AllCameras>k__BackingField
	RuntimeObject* ___U3CAllCamerasU3Ek__BackingField_22;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ILight> TriLibCore.Stl.StlRootModel::<AllLights>k__BackingField
	RuntimeObject* ___U3CAllLightsU3Ek__BackingField_23;
};

// TriLibCore.Stl.StlStreamReader
struct StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5  : public StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B
{
	// System.Int32 TriLibCore.Stl.StlStreamReader::_endOfLinePointer
	int32_t ____endOfLinePointer_22;
	// System.Char[] TriLibCore.Stl.StlStreamReader::_charStream
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charStream_24;
	// System.String TriLibCore.Stl.StlStreamReader::_charString
	String_t* ____charString_25;
	// System.Int32 TriLibCore.Stl.StlStreamReader::_charPosition
	int32_t ____charPosition_26;
	// System.Int32 TriLibCore.Stl.StlStreamReader::<Line>k__BackingField
	int32_t ___U3CLineU3Ek__BackingField_27;
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

// System.Action`2<TriLibCore.AssetLoaderContext,System.Single>
struct Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD  : public MulticastDelegate_t
{
};

// TriLibCore.AssetLoaderOptions
struct AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean TriLibCore.AssetLoaderOptions::UseFileScale
	bool ___UseFileScale_4;
	// System.Single TriLibCore.AssetLoaderOptions::ScaleFactor
	float ___ScaleFactor_5;
	// System.Boolean TriLibCore.AssetLoaderOptions::SortHierarchyByName
	bool ___SortHierarchyByName_6;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportVisibility
	bool ___ImportVisibility_7;
	// System.Boolean TriLibCore.AssetLoaderOptions::Static
	bool ___Static_8;
	// System.Boolean TriLibCore.AssetLoaderOptions::AddAssetUnloader
	bool ___AddAssetUnloader_9;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportMeshes
	bool ___ImportMeshes_10;
	// System.Boolean TriLibCore.AssetLoaderOptions::LimitBoneWeights
	bool ___LimitBoneWeights_11;
	// System.Boolean TriLibCore.AssetLoaderOptions::ReadEnabled
	bool ___ReadEnabled_12;
	// System.Boolean TriLibCore.AssetLoaderOptions::ReadAndWriteEnabled
	bool ___ReadAndWriteEnabled_13;
	// System.Boolean TriLibCore.AssetLoaderOptions::MarkMeshesAsDynamic
	bool ___MarkMeshesAsDynamic_14;
	// System.Boolean TriLibCore.AssetLoaderOptions::OptimizeMeshes
	bool ___OptimizeMeshes_15;
	// System.Boolean TriLibCore.AssetLoaderOptions::GenerateColliders
	bool ___GenerateColliders_16;
	// System.Boolean TriLibCore.AssetLoaderOptions::ConvexColliders
	bool ___ConvexColliders_17;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportBlendShapes
	bool ___ImportBlendShapes_18;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportColors
	bool ___ImportColors_19;
	// UnityEngine.Rendering.IndexFormat TriLibCore.AssetLoaderOptions::IndexFormat
	int32_t ___IndexFormat_20;
	// System.Single TriLibCore.AssetLoaderOptions::LODScreenRelativeTransitionHeightBase
	float ___LODScreenRelativeTransitionHeightBase_21;
	// System.Boolean TriLibCore.AssetLoaderOptions::KeepQuads
	bool ___KeepQuads_22;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportNormals
	bool ___ImportNormals_23;
	// System.Boolean TriLibCore.AssetLoaderOptions::GenerateNormals
	bool ___GenerateNormals_24;
	// System.Boolean TriLibCore.AssetLoaderOptions::GenerateTangents
	bool ___GenerateTangents_25;
	// System.Single TriLibCore.AssetLoaderOptions::SmoothingAngle
	float ___SmoothingAngle_26;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportBlendShapeNormals
	bool ___ImportBlendShapeNormals_27;
	// System.Boolean TriLibCore.AssetLoaderOptions::CalculateBlendShapeNormals
	bool ___CalculateBlendShapeNormals_28;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportTangents
	bool ___ImportTangents_29;
	// System.Boolean TriLibCore.AssetLoaderOptions::SwapUVs
	bool ___SwapUVs_30;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportMaterials
	bool ___ImportMaterials_31;
	// TriLibCore.Mappers.MaterialMapper[] TriLibCore.AssetLoaderOptions::MaterialMappers
	MaterialMapperU5BU5D_tBD3B26C68148AE48AD6F3B44795C7B7B3EE2257B* ___MaterialMappers_32;
	// System.Boolean TriLibCore.AssetLoaderOptions::AddSecondAlphaMaterial
	bool ___AddSecondAlphaMaterial_33;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportTextures
	bool ___ImportTextures_34;
	// System.Boolean TriLibCore.AssetLoaderOptions::Enforce16BitsTextures
	bool ___Enforce16BitsTextures_35;
	// System.Boolean TriLibCore.AssetLoaderOptions::ScanForAlphaPixels
	bool ___ScanForAlphaPixels_36;
	// System.Boolean TriLibCore.AssetLoaderOptions::UseAlphaMaterials
	bool ___UseAlphaMaterials_37;
	// TriLibCore.General.AlphaMaterialMode TriLibCore.AssetLoaderOptions::AlphaMaterialMode
	int32_t ___AlphaMaterialMode_38;
	// System.Boolean TriLibCore.AssetLoaderOptions::DoubleSidedMaterials
	bool ___DoubleSidedMaterials_39;
	// TriLibCore.Mappers.TextureMapper TriLibCore.AssetLoaderOptions::TextureMapper
	TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD* ___TextureMapper_40;
	// TriLibCore.Mappers.TextureMapper[] TriLibCore.AssetLoaderOptions::TextureMappers
	TextureMapperU5BU5D_t35F575F1D951980713D2A9E7D85F6AE82ABEA79C* ___TextureMappers_41;
	// TriLibCore.General.TextureCompressionQuality TriLibCore.AssetLoaderOptions::TextureCompressionQuality
	int32_t ___TextureCompressionQuality_42;
	// System.Boolean TriLibCore.AssetLoaderOptions::GenerateMipmaps
	bool ___GenerateMipmaps_43;
	// System.Boolean TriLibCore.AssetLoaderOptions::FixNormalMaps
	bool ___FixNormalMaps_44;
	// TriLibCore.General.AnimationType TriLibCore.AssetLoaderOptions::AnimationType
	int32_t ___AnimationType_45;
	// System.Boolean TriLibCore.AssetLoaderOptions::SimplifyAnimations
	bool ___SimplifyAnimations_46;
	// System.Single TriLibCore.AssetLoaderOptions::PositionThreshold
	float ___PositionThreshold_47;
	// System.Single TriLibCore.AssetLoaderOptions::RotationThreshold
	float ___RotationThreshold_48;
	// System.Single TriLibCore.AssetLoaderOptions::ScaleThreshold
	float ___ScaleThreshold_49;
	// TriLibCore.General.AvatarDefinitionType TriLibCore.AssetLoaderOptions::AvatarDefinition
	int32_t ___AvatarDefinition_50;
	// UnityEngine.Avatar TriLibCore.AssetLoaderOptions::Avatar
	Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* ___Avatar_51;
	// TriLibCore.General.HumanDescription TriLibCore.AssetLoaderOptions::HumanDescription
	HumanDescription_t0BD271EF43944EC6940A10C164E94F8C7E750481* ___HumanDescription_52;
	// TriLibCore.Mappers.RootBoneMapper TriLibCore.AssetLoaderOptions::RootBoneMapper
	RootBoneMapper_t64AE3E33364A832EE1B74D8B65BC9AA7B448DDA2* ___RootBoneMapper_53;
	// TriLibCore.Mappers.HumanoidAvatarMapper TriLibCore.AssetLoaderOptions::HumanoidAvatarMapper
	HumanoidAvatarMapper_t691E00A2CE4455F03562FF79A586CC717D38FB09* ___HumanoidAvatarMapper_54;
	// TriLibCore.Mappers.LipSyncMapper[] TriLibCore.AssetLoaderOptions::LipSyncMappers
	LipSyncMapperU5BU5D_t32748FDCB493E8E7550A88244C1CBBB79E54C18A* ___LipSyncMappers_55;
	// System.Boolean TriLibCore.AssetLoaderOptions::SampleBindPose
	bool ___SampleBindPose_56;
	// System.Boolean TriLibCore.AssetLoaderOptions::EnforceTPose
	bool ___EnforceTPose_57;
	// System.Boolean TriLibCore.AssetLoaderOptions::ResampleAnimations
	bool ___ResampleAnimations_58;
	// System.Boolean TriLibCore.AssetLoaderOptions::EnforceAnimatorWithLegacyAnimations
	bool ___EnforceAnimatorWithLegacyAnimations_59;
	// System.Boolean TriLibCore.AssetLoaderOptions::AutomaticallyPlayLegacyAnimations
	bool ___AutomaticallyPlayLegacyAnimations_60;
	// System.Single TriLibCore.AssetLoaderOptions::ResampleFrequency
	float ___ResampleFrequency_61;
	// UnityEngine.WrapMode TriLibCore.AssetLoaderOptions::AnimationWrapMode
	int32_t ___AnimationWrapMode_62;
	// TriLibCore.Mappers.AnimationClipMapper[] TriLibCore.AssetLoaderOptions::AnimationClipMappers
	AnimationClipMapperU5BU5D_t8E00A18562A07FD65A6E731D8BA6FF48D80BBFD8* ___AnimationClipMappers_63;
	// TriLibCore.Mappers.ExternalDataMapper TriLibCore.AssetLoaderOptions::ExternalDataMapper
	ExternalDataMapper_t809726D72207DAF57227F4A5D67B9D01394B760A* ___ExternalDataMapper_64;
	// System.Boolean TriLibCore.AssetLoaderOptions::ShowLoadingWarnings
	bool ___ShowLoadingWarnings_65;
	// System.Boolean TriLibCore.AssetLoaderOptions::CloseStreamAutomatically
	bool ___CloseStreamAutomatically_66;
	// System.Int32 TriLibCore.AssetLoaderOptions::Timeout
	int32_t ___Timeout_67;
	// System.Boolean TriLibCore.AssetLoaderOptions::DestroyOnError
	bool ___DestroyOnError_68;
	// System.Boolean TriLibCore.AssetLoaderOptions::EnsureQuaternionContinuity
	bool ___EnsureQuaternionContinuity_69;
	// System.Boolean TriLibCore.AssetLoaderOptions::UseMaterialKeywords
	bool ___UseMaterialKeywords_70;
	// System.Boolean TriLibCore.AssetLoaderOptions::ForceGCCollectionWhileLoading
	bool ___ForceGCCollectionWhileLoading_71;
	// System.Boolean TriLibCore.AssetLoaderOptions::MergeVertices
	bool ___MergeVertices_72;
	// System.Boolean TriLibCore.AssetLoaderOptions::MarkTexturesNoLongerReadable
	bool ___MarkTexturesNoLongerReadable_73;
	// System.Boolean TriLibCore.AssetLoaderOptions::UseUnityNativeNormalCalculator
	bool ___UseUnityNativeNormalCalculator_74;
	// System.Single TriLibCore.AssetLoaderOptions::GCHelperCollectionInterval
	float ___GCHelperCollectionInterval_75;
	// System.Boolean TriLibCore.AssetLoaderOptions::ApplyGammaCurveToMaterialColors
	bool ___ApplyGammaCurveToMaterialColors_76;
	// System.Boolean TriLibCore.AssetLoaderOptions::LoadTexturesAsSRGB
	bool ___LoadTexturesAsSRGB_77;
	// TriLibCore.Mappers.UserPropertiesMapper TriLibCore.AssetLoaderOptions::UserPropertiesMapper
	UserPropertiesMapper_t8437A569EBEB9E02E364D9951BE31F9601C55714* ___UserPropertiesMapper_78;
	// System.Boolean TriLibCore.AssetLoaderOptions::ApplyTexturesOffsetAndScaling
	bool ___ApplyTexturesOffsetAndScaling_79;
	// System.Boolean TriLibCore.AssetLoaderOptions::UseAutodeskInteractiveMaterials
	bool ___UseAutodeskInteractiveMaterials_80;
	// System.Boolean TriLibCore.AssetLoaderOptions::DiscardUnusedTextures
	bool ___DiscardUnusedTextures_81;
	// TriLibCore.General.PivotPosition TriLibCore.AssetLoaderOptions::PivotPosition
	int32_t ___PivotPosition_82;
	// System.Boolean TriLibCore.AssetLoaderOptions::ForcePowerOfTwoTextures
	bool ___ForcePowerOfTwoTextures_83;
	// System.Int32 TriLibCore.AssetLoaderOptions::MaxTexturesResolution
	int32_t ___MaxTexturesResolution_84;
	// System.Boolean TriLibCore.AssetLoaderOptions::EnableProfiler
	bool ___EnableProfiler_85;
	// System.Boolean TriLibCore.AssetLoaderOptions::UseUnityNativeTextureLoader
	bool ___UseUnityNativeTextureLoader_86;
	// System.Boolean TriLibCore.AssetLoaderOptions::LoadMaterialsProgressively
	bool ___LoadMaterialsProgressively_87;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportCameras
	bool ___ImportCameras_88;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportLights
	bool ___ImportLights_89;
	// System.Boolean TriLibCore.AssetLoaderOptions::DisableObjectsRenaming
	bool ___DisableObjectsRenaming_90;
	// System.Boolean TriLibCore.AssetLoaderOptions::MergeSingleChild
	bool ___MergeSingleChild_91;
	// System.Boolean TriLibCore.AssetLoaderOptions::SetUnusedTexturePropertiesToNull
	bool ___SetUnusedTexturePropertiesToNull_92;
	// System.Boolean TriLibCore.AssetLoaderOptions::LoadPointClouds
	bool ___LoadPointClouds_93;
	// System.Boolean TriLibCore.AssetLoaderOptions::CreateVerticesAsNativeLists
	bool ___CreateVerticesAsNativeLists_94;
	// System.Boolean TriLibCore.AssetLoaderOptions::CompressMeshes
	bool ___CompressMeshes_95;
	// System.Boolean TriLibCore.AssetLoaderOptions::ExtractEmbeddedData
	bool ___ExtractEmbeddedData_96;
	// System.String TriLibCore.AssetLoaderOptions::EmbeddedDataExtractionPath
	String_t* ___EmbeddedDataExtractionPath_97;
	// System.Collections.Generic.List`1<UnityEngine.Object> TriLibCore.AssetLoaderOptions::FixedAllocations
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___FixedAllocations_98;
	// TriLibCore.FileBufferingMode TriLibCore.AssetLoaderOptions::BufferizeFiles
	int32_t ___BufferizeFiles_99;
	// System.Boolean TriLibCore.AssetLoaderOptions::ConvertMaterialTextures
	bool ___ConvertMaterialTextures_100;
	// System.Boolean TriLibCore.AssetLoaderOptions::ConvertMaterialTexturesUsingHalfRes
	bool ___ConvertMaterialTexturesUsingHalfRes_101;
	// System.Boolean TriLibCore.AssetLoaderOptions::DisableTesselation
	bool ___DisableTesselation_102;
	// System.Boolean TriLibCore.AssetLoaderOptions::UseCoroutines
	bool ___UseCoroutines_103;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// TriLibCore.Interfaces.IModel[]
struct IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76  : public RuntimeArray
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
// TriLibCore.Interfaces.IGeometryGroup[]
struct IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711  : public RuntimeArray
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
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


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;

// System.Void TriLibCore.Geometries.Geometry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geometry__ctor_m0F5EBDDAEEB9ED6F66946F16F31BAB22BE44D193 (Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147* __this, const RuntimeMethod* method) ;
// System.String TriLibCore.Stl.StlModel::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StlModel_get_Name_m25E9B99DE29E6200C71933B5E52D158E28DCD941_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IGeometryGroup>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mEF0435E0E1DE72962810AC3082B1AF39B3951155 (Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983* __this, String_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983*, String_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// TriLibCore.AssetLoaderContext TriLibCore.ReaderBase::get_AssetLoaderContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Geometries.FlexibleVertexDataUtils::BuildStreamGeometryGroup(System.Collections.Generic.HashSet`1<UnityEngine.Rendering.VertexAttribute>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FlexibleVertexDataUtils_BuildStreamGeometryGroup_m0F6D3B1AB6D5BD9A088B41AB49C1CC3CCF5E38F3 (HashSet_1_t17CC6C8527489146D9154E22DE059EF4A4550640* ___vertexAttributes0, bool ___useHalfPrecision1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IGeometryGroup>::Add(TKey,TValue)
inline void Dictionary_2_Add_mEF9914E7A716EC8B3A7FB701A93B07E83F4C798B (Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.HashSet`1<UnityEngine.Rendering.VertexAttribute> TriLibCore.Geometries.FlexibleVertexDataUtils::BuildVertexAttributesDictionary(TriLibCore.AssetLoaderContext,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t17CC6C8527489146D9154E22DE059EF4A4550640* FlexibleVertexDataUtils_BuildVertexAttributesDictionary_mE29022A53EA93BE64B2E15C35DEDECAEBE16DCC1 (AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext0, bool ___hasPosition1, bool ___hasNormal2, bool ___hasTangent3, bool ___hasColor4, bool ___hasUV05, bool ___hasUV16, bool ___hasUV27, bool ___hasUV38, bool ___hasBoneWeight9, bool ___useHalfPrecision10, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Stl.StlProcessor::IsBinary(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlProcessor_IsBinary_m4A82EE25ADBA42AEB6202DCBA35C3A72B239D920 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.StlProcessor::ParseBinary(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_ParseBinary_m15DAD2962CF54D1F8C652CD1F69C56EDD19A991A (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.StlProcessor::ParseASCII(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_ParseASCII_m297D902C12F8D0B07F75397F81C1BA6A82B918ED (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Stl.StlProcessor::GetActiveGeometryGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_GetActiveGeometryGroup_m7383FCD039100A7331EF5BD0528FCE078F143CDE (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlRootModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlRootModel__ctor_mF3CCCD9F9A1339A398A4FA1EAA0D00B3AD7BB737 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel__ctor_m6E2FE456538DB2C0EB1C98D3144C193CF6157D1C (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlModel::set_LocalScale(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_LocalScale_m0709587074F69EEB1DCF2F639318F4C9BE86D840_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlModel::set_LocalRotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_LocalRotation_mE9C27ACA9705C49C2EEEEC359CF9195A0EADF5B9_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlModel::set_GeometryGroup(TriLibCore.Interfaces.IGeometryGroup)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_GeometryGroup_m32211C6B2E30C396961F21D3E5E81B925AAA444E_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlModel::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_Name_mF8213C9BAD85BC9320C876C41ABBF594327F2814_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlModel::set_Visibility(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_Visibility_m635AB4624DB7C9E08470800B07ABABD332AF0E01_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlModel::set_Parent(TriLibCore.Interfaces.IModel)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_Parent_m5FFEE1518EF3F12F1378AECEAEB41466CCA20DCE_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IModel>::Add(TKey,TValue)
inline void Dictionary_2_Add_m53D84560875155F383C73DA9027DE4CC7AC985D5 (Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor::ReadVector3(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StlProcessor_ReadVector3_m08382B6430274ECDE456A6119A9E608EB5F92F87 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___binaryReader0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor::GetNormal(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StlProcessor_GetNormal_mAEB43873CA99A50EFBEE382491E9C211BF3AEDC4 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___c2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlProcessor::AddOutputVertex(TriLibCore.Interfaces.IGeometryGroup,System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7 (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, RuntimeObject* ___geometryGroup0, int32_t ___vertexIndex1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vertex2, const RuntimeMethod* method) ;
// System.Void TriLibCore.ReaderBase::UpdateLoadingPercentage(System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, float ___value0, int32_t ___step1, float ___maxValue2, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IModel>::get_Values()
inline ValueCollection_t52D0D70A98CDE4A09BB9B7D39C2159B31ECAE027* Dictionary_2_get_Values_m56D477CD7C6E64384E53F8B4C44C151CB9CADA48 (Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t52D0D70A98CDE4A09BB9B7D39C2159B31ECAE027* (*) (Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// TSource[] System.Linq.Enumerable::ToArray<TriLibCore.Interfaces.IModel>(System.Collections.Generic.IEnumerable`1<TSource>)
inline IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76* Enumerable_ToArray_TisIModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_m8A288987F91069D02641D435D479CADC11764605 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.Void TriLibCore.Stl.StlModel::set_Children(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_Children_m8C26332902AFB18940DAB4060807171A0364EA1E_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IGeometryGroup>::get_Values()
inline ValueCollection_tCCCE4A1A9D973B131015A437780697A2155EAACD* Dictionary_2_get_Values_m2CEBA9C111276D8D06435752E5C5B3598E722CBE (Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tCCCE4A1A9D973B131015A437780697A2155EAACD* (*) (Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// TSource[] System.Linq.Enumerable::ToArray<TriLibCore.Interfaces.IGeometryGroup>(System.Collections.Generic.IEnumerable`1<TSource>)
inline IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711* Enumerable_ToArray_TisIGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_m8A9221E5C3D95DC2EDD7FC163B30C1A3A3929D1A (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.Void TriLibCore.Stl.StlRootModel::set_AllGeometryGroups(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlRootModel_set_AllGeometryGroups_m6754461757172DBEB0986B7A916BBBFFDAD9E173_inline (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Stl.StlModel::get_Children()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* StlModel_get_Children_mCC99BF668D976265E2897D884E1080A14B8219BB_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlRootModel::set_AllModels(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlRootModel_set_AllModels_mED5ABBDE53F3952C9E492CC70CADE0692BA9A7BF_inline (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// TriLibCore.Stl.StlGeometry TriLibCore.Stl.StlProcessor::GetActiveGeometry(TriLibCore.Interfaces.IGeometryGroup,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* StlProcessor_GetActiveGeometry_m077EF6775E2A48555E67F72AD3A8E322A2182863 (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, RuntimeObject* ___geometryGroup0, bool ___isQuad1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.FlexibleVertexDataUtils::BuildAndAddFlexibleVertexData(TriLibCore.Interfaces.IGeometryGroup,TriLibCore.AssetLoaderContext,System.Int32,TriLibCore.Geometries.Geometry,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector4,UnityEngine.Color,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.BoneWeight)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleVertexDataUtils_BuildAndAddFlexibleVertexData_mC35367A0F41EE78D0D41CB73484C229156CC532F (RuntimeObject* ___geometryGroup0, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext1, int32_t ___vertexIndex2, Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147* ___geometry3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal5, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent6, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv08, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv19, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv210, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv311, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F ___boneWeight12, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single TriLibCore.Stl.StlStreamReader::ReadTokenAsFloat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StlStreamReader_ReadTokenAsFloat_m30C508ABFBF8FF2F47629BCFFB53C042F4B7F551 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, bool ___required0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_m1DC2CC738B9E91B86FE02E6BFD2FA36770C08BE2 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Int64 TriLibCore.Stl.StlStreamReader::ReadToken(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, bool ___required0, bool ___ignoreSpaces1, const RuntimeMethod* method) ;
// System.String TriLibCore.Stl.StlStreamReader::ReadTokenAsString(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StlStreamReader_ReadTokenAsString_m48318F7F8AD205DB62D73904EDFFD9EED1C7396D (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, bool ___required0, bool ___ignoreSpaces1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor::ReadVector3(TriLibCore.Stl.StlStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StlProcessor_ReadVector3_mD41B92963A4FC7C7BA2170A47130B00B0A6B1973 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* ___stlStreamReader0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlProcessor::AddModel(TriLibCore.Interfaces.IModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlProcessor_AddModel_mD074A15E2C251A343E4D0B955563EE85DE37FAF8 (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, RuntimeObject* ___parent0, const RuntimeMethod* method) ;
// System.Boolean System.IO.StreamReader::get_EndOfStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamReader_get_EndOfStream_mAE054431BF21158178EAA2A6872F14A9ED6A3C3E (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlProcessor/<Process_Coroutine>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcess_CoroutineU3Ed__35__ctor_m21918F42D289C8109FA0DE78809C610718B8E69E (U3CProcess_CoroutineU3Ed__35_tC5008D73142E8CB387527E2710DD67853C659773* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseBinary_CoroutineU3Ed__36__ctor_m2E4A7EB319DCF322A7E14719553205AE4DA475FC (U3CParseBinary_CoroutineU3Ed__36_t9316974EF4D1C437F9E5335DFC9AD7528F2976F3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseASCII_CoroutineU3Ed__37__ctor_m1AA0B0409D4E8B3230EC1552FAF1D3B7F59F53ED (U3CParseASCII_CoroutineU3Ed__37_t2025851D54681DED612B7A7309F1BB0236E5CD89* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IGeometryGroup>::.ctor()
inline void Dictionary_2__ctor_m16C7DB0395DCD9EF714A07CDB8934C3FCAE7F50C (Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IModel>::.ctor()
inline void Dictionary_2__ctor_m5F5C68AF90E49C38EB7E07DDE14E85B7C3875390 (Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Boolean TriLibCore.AssetLoaderContext::get_MainThreadStall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AssetLoaderContext_get_MainThreadStall_m053EBE09FC53155F1737B7291186187FD61CBFAE (AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TriLibCore.Stl.StlProcessor::ParseBinary_Coroutine(TriLibCore.AssetLoaderContext,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_ParseBinary_Coroutine_m45A8201A38497E973F10C1CDA2C99FEBA4641D03 (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ____assetLoaderContext0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TriLibCore.Stl.StlProcessor::ParseASCII_Coroutine(TriLibCore.AssetLoaderContext,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_ParseASCII_Coroutine_m79A91F30728603BF4A3A7A83A827DCE37F525A4A (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ____assetLoaderContext0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream1, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Stl.StlStreamReader::GetTokenAsFloat(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlStreamReader_GetTokenAsFloat_mAA1D75FACB25386AF1A9ED7210239ED0369EDD3F (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, float* ___value0, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Stl.StlStreamReader::get_Line()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StlStreamReader_get_Line_mE94255EEFEFED4D8DED8AE024CE752F78FD174EC_inline (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Stl.StlStreamReader::get_Column()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StlStreamReader_get_Column_m78B316197DD99FD46120765F960B450AA0260A91 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String TriLibCore.Stl.StlStreamReader::GetTokenAsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StlStreamReader_GetTokenAsString_m3B5F90A8A2E6492B1F50E55127380D3CB334E611 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlStreamReader::UpdateStringFromCharString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader_UpdateStringFromCharString_m807C6BD8C68A20014717D4ED10E7A9A92F431C0D (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mFB8CC32F0016FBB6EFCB97953CF3515767EB6431 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, float* ___result3, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mB8E246A7D6D6308EF36DE3473643BDE4CF8F71FF (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int32_t* ___result3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Int64 TriLibCore.Utils.HashUtils::GetHash(System.Collections.Generic.IList`1<System.Char>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t HashUtils_GetHash_mA8618222D626B54CD67FF88D56037B6D8024453E (RuntimeObject* ___chars0, int32_t ___count1, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m8ADB6C6B363A2B58B9BC3CB1939A1BABE0BF064A (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, bool ___detectEncodingFromByteOrderMarks1, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m7712DDC735E99B6833E2666ADFD8A06CB96A58B1 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mE4095A4D9B6E2E82E95CE884443A51635849A740 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, bool ___detectEncodingFromByteOrderMarks2, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mD3E001CD426B3FE451FFA32E7070E34AC1756673 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, bool ___detectEncodingFromByteOrderMarks2, int32_t ___bufferSize3, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m08BA7049EACE030ACE06AB8A8F2CDF2E2AFB55C6 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m0AD738DDCB9A0DE0DFD3DB6B2FE44A41C1EAE677 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, String_t* ___path0, bool ___detectEncodingFromByteOrderMarks1, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m3C693DE567FB306355ECD44489F58699105DDE43 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, String_t* ___path0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mB946592899E393BDD06A093CA3BB87180A590449 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, String_t* ___path0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, bool ___detectEncodingFromByteOrderMarks2, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mA95373EEF162CF396A1A20CDF039B29AA2D634EF (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, String_t* ___path0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, bool ___detectEncodingFromByteOrderMarks2, int32_t ___bufferSize3, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IRootModel TriLibCore.ReaderBase::ReadStream(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReaderBase_ReadStream_m725378DF096B29E0DB3BE3FB9E5F1E37747883F4 (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext1, String_t* ___filename2, Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___onProgress3, const RuntimeMethod* method) ;
// System.Void TriLibCore.ReaderBase::SetupStream(System.IO.Stream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase_SetupStream_mCDC78453E3657CB3FBB713C40FB50B4941455942 (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE** ___stream0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlProcessor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlProcessor__ctor_m900A44553FC03D3F3F05833E176C5456FF72A390 (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.StlProcessor::Process(TriLibCore.Stl.Reader.StlReader,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_Process_mE9579D6B475D44423897704E91BD2A780B6405CF (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* ___stlReader0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream1, const RuntimeMethod* method) ;
// System.Void TriLibCore.ReaderBase::PostProcessModel(TriLibCore.Interfaces.IRootModel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase_PostProcessModel_mD3BB953DE8BEB5FCA65077455BDA0750F740C667 (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, RuntimeObject** ___model0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.Reader.StlReader/<ReadStream_Coroutine>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadStream_CoroutineU3Ed__12__ctor_m96E417AB31C2ADD608E42A65445F8805391DA0B6 (U3CReadStream_CoroutineU3Ed__12_t47E2ED2CC72C13AA1ABAC957297E3E9858D1E9ED* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void TriLibCore.ReaderBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase__ctor_m5C4FE7A4BC205B65DAB56FF3CC5202D0B04937DA (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.Reader.StlReader::<>n__0(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlReader_U3CU3En__0_m24D36B0B8EB0F3D9123BEF38BE42A550EEB9F4B6 (StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext1, String_t* ___filename2, Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___onProgress3, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TriLibCore.Stl.StlProcessor::Process_Coroutine(TriLibCore.AssetLoaderContext,TriLibCore.Stl.Reader.StlReader,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_Process_Coroutine_m9CA1D10D853020C43766103AFE7A02E44142CB88 (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ____assetLoaderContext0, StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* ___stlReader1, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
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
// System.Void TriLibCore.Stl.StlGeometry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlGeometry__ctor_m2776540496DA7C76A11B318FB88BB6C62734EE5D (StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* __this, const RuntimeMethod* method) 
{
	{
		Geometry__ctor_m0F5EBDDAEEB9ED6F66946F16F31BAB22BE44D193(__this, NULL);
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
// System.String TriLibCore.Stl.StlModel::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StlModel_get_Name_m25E9B99DE29E6200C71933B5E52D158E28DCD941 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_Name_mF8213C9BAD85BC9320C876C41ABBF594327F2814 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean TriLibCore.Stl.StlModel::get_Used()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlModel_get_Used_m1335C33D3F280C7BA81A4EB230C7F933DA6CAAE3 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CUsedU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_Used(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_Used_m73B3A1C81CF7F18D6D2F4B4ADC0F6819331261C2 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CUsedU3Ek__BackingField_1 = L_0;
		return;
	}
}
// UnityEngine.Vector3 TriLibCore.Stl.StlModel::get_Pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StlModel_get_Pivot_m53775FEC2EE42D3BB41AFE130B4CFE7B5AA7026A (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CPivotU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_Pivot(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_Pivot_m70ED0120EA4E7A465AEFD2606C024C6C34F7D0E6 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CPivotU3Ek__BackingField_2 = L_0;
		return;
	}
}
// UnityEngine.Vector3 TriLibCore.Stl.StlModel::get_LocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StlModel_get_LocalPosition_mCB155A00E906835D4ED2E42681E71F93637B720E (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CLocalPositionU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_LocalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_LocalPosition_m5AF9262F57B556B40B23C967CF09785E3BD44C52 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CLocalPositionU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Quaternion TriLibCore.Stl.StlModel::get_LocalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 StlModel_get_LocalRotation_mC94B5254507082EEF78E62C751A40BA2BE0AF3EF (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CLocalRotationU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_LocalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_LocalRotation_mE9C27ACA9705C49C2EEEEC359CF9195A0EADF5B9 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		__this->___U3CLocalRotationU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.Vector3 TriLibCore.Stl.StlModel::get_LocalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StlModel_get_LocalScale_mA9317004E928DF3BDFC6DF9B17B203B66FC4723B (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CLocalScaleU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_LocalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_LocalScale_m0709587074F69EEB1DCF2F639318F4C9BE86D840 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CLocalScaleU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean TriLibCore.Stl.StlModel::get_Visibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlModel_get_Visibility_m41D73429568E441CDE8E96D86EEE88D70D1AB266 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CVisibilityU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_Visibility(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_Visibility_m635AB4624DB7C9E08470800B07ABABD332AF0E01 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CVisibilityU3Ek__BackingField_6 = L_0;
		return;
	}
}
// TriLibCore.Interfaces.IModel TriLibCore.Stl.StlModel::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlModel_get_Parent_m86D1711C2B33FFB6A7C9B150E9F614718B18E237 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CParentU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_Parent(TriLibCore.Interfaces.IModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_Parent_m5FFEE1518EF3F12F1378AECEAEB41466CCA20DCE (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CParentU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParentU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Stl.StlModel::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlModel_get_Children_mCC99BF668D976265E2897D884E1080A14B8219BB (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CChildrenU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_Children(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_Children_m8C26332902AFB18940DAB4060807171A0364EA1E (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CChildrenU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CChildrenU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Boolean TriLibCore.Stl.StlModel::get_IsBone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlModel_get_IsBone_mE00017B8AD0B85CFC52CECB34E77BFD5BB7E96D6 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsBoneU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_IsBone(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_IsBone_m3A3DC56944ED27BAF11B1AC1634FA26D80DA09E2 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIsBoneU3Ek__BackingField_9 = L_0;
		return;
	}
}
// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Stl.StlModel::get_GeometryGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlModel_get_GeometryGroup_mD1F5B1F396068F485FAB980C35ED2DD19989C80F (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CGeometryGroupU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_GeometryGroup(TriLibCore.Interfaces.IGeometryGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_GeometryGroup_m32211C6B2E30C396961F21D3E5E81B925AAA444E (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CGeometryGroupU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGeometryGroupU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Stl.StlModel::get_Bones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlModel_get_Bones_m684557BC45E7AC791A1B30DCE1DB803CD1408BE2 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CBonesU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_Bones(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_Bones_mAA6178D9689B8D839332F71C57A59EA360C5E231 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CBonesU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBonesU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
// UnityEngine.Matrix4x4[] TriLibCore.Stl.StlModel::get_BindPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* StlModel_get_BindPoses_m9E24FE74C24EFC85B8A8582B108D2CBB119421DB (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = __this->___U3CBindPosesU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_BindPoses(UnityEngine.Matrix4x4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_BindPoses_m3E51722DF32A7EC854623CB8CC82D115AB230193 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___value0, const RuntimeMethod* method) 
{
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = ___value0;
		__this->___U3CBindPosesU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBindPosesU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Stl.StlModel::get_MaterialIndices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlModel_get_MaterialIndices_m140AFBF45A10411222E47FB5B22AB03D0897EEEC (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMaterialIndicesU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_MaterialIndices(System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_MaterialIndices_m324F349E20CBDA15FD0D369642D5AE3D89332281 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CMaterialIndicesU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMaterialIndicesU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> TriLibCore.Stl.StlModel::get_UserProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* StlModel_get_UserProperties_mFC87C1859174342787C4379A620AAD8177E1BB6B (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___U3CUserPropertiesU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_UserProperties(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_UserProperties_m33ADB762D7FA9D10967DDD33FA5CE6825CCE1748 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___value0;
		__this->___U3CUserPropertiesU3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserPropertiesU3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
// System.Boolean TriLibCore.Stl.StlModel::get_HasCustomPivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlModel_get_HasCustomPivot_mC1AFEB03564604DB929705620C5F9E584951B903 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CHasCustomPivotU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_HasCustomPivot(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_HasCustomPivot_mC35F9B5063502EB37D3170208D1D286929D7EECD (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CHasCustomPivotU3Ek__BackingField_15 = L_0;
		return;
	}
}
// UnityEngine.Matrix4x4 TriLibCore.Stl.StlModel::get_OriginalGlobalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 StlModel_get_OriginalGlobalMatrix_m52465D059027AFFAC755DA7865D31652539F721E (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = __this->___U3COriginalGlobalMatrixU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_OriginalGlobalMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_OriginalGlobalMatrix_m6605DE7DC6B4D2B1142FC33382F0ADA41D0DA9D5 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___value0;
		__this->___U3COriginalGlobalMatrixU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.String TriLibCore.Stl.StlModel::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StlModel_ToString_m4565A071E9352293402EE92115472BD57BEFB879 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = StlModel_get_Name_m25E9B99DE29E6200C71933B5E52D158E28DCD941_inline(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void TriLibCore.Stl.StlModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel__ctor_m6E2FE456538DB2C0EB1C98D3144C193CF6157D1C (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
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
// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Stl.StlProcessor::GetActiveGeometryGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_GetActiveGeometryGroup_m7383FCD039100A7331EF5BD0528FCE078F143CDE (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mEF9914E7A716EC8B3A7FB701A93B07E83F4C798B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mEF0435E0E1DE72962810AC3082B1AF39B3951155_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	{
		String_t* L_0 = __this->____groupName_6;
		V_0 = L_0;
		String_t* L_1 = V_0;
		String_t* L_2 = __this->____lastGeometryGroupName_7;
		bool L_3;
		L_3 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_1, L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_008c;
		}
	}
	{
		Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983* L_5 = __this->____geometryGroups_3;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_mEF0435E0E1DE72962810AC3082B1AF39B3951155(L_5, L_6, (&V_2), Dictionary_2_TryGetValue_mEF0435E0E1DE72962810AC3082B1AF39B3951155_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_007d;
		}
	}
	{
		HashSet_1_t17CC6C8527489146D9154E22DE059EF4A4550640* L_9 = __this->____vertexAttributes_23;
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_10 = __this->____reader_5;
		NullCheck(L_10);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_11;
		L_11 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_10, NULL);
		NullCheck(L_11);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_12 = L_11->___Options_34;
		NullCheck(L_12);
		bool L_13 = L_12->___CompressMeshes_95;
		RuntimeObject* L_14;
		L_14 = FlexibleVertexDataUtils_BuildStreamGeometryGroup_m0F6D3B1AB6D5BD9A088B41AB49C1CC3CCF5E38F3(L_9, L_13, NULL);
		V_2 = L_14;
		RuntimeObject* L_15 = V_2;
		String_t* L_16 = V_0;
		NullCheck(L_15);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void TriLibCore.Interfaces.IObject::set_Name(System.String) */, IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var, L_15, L_16);
		RuntimeObject* L_17 = V_2;
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_18 = __this->____reader_5;
		NullCheck(L_18);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_19;
		L_19 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_18, NULL);
		NullCheck(L_17);
		InterfaceActionInvoker4< AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C*, int32_t, int32_t, int32_t >::Invoke(6 /* System.Void TriLibCore.Interfaces.IGeometryGroup::Setup(TriLibCore.AssetLoaderContext,System.Int32,System.Int32,System.Int32) */, IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_il2cpp_TypeInfo_var, L_17, L_19, 3, ((int32_t)32), 0);
		Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983* L_20 = __this->____geometryGroups_3;
		String_t* L_21 = V_0;
		RuntimeObject* L_22 = V_2;
		NullCheck(L_20);
		Dictionary_2_Add_mEF9914E7A716EC8B3A7FB701A93B07E83F4C798B(L_20, L_21, L_22, Dictionary_2_Add_mEF9914E7A716EC8B3A7FB701A93B07E83F4C798B_RuntimeMethod_var);
	}

IL_007d:
	{
		RuntimeObject* L_23 = V_2;
		__this->____activeGeometryGroup_9 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeGeometryGroup_9), (void*)L_23);
		String_t* L_24 = V_0;
		__this->____lastGeometryGroupName_7 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lastGeometryGroupName_7), (void*)L_24);
	}

IL_008c:
	{
		RuntimeObject* L_25 = __this->____activeGeometryGroup_9;
		V_4 = L_25;
		goto IL_0096;
	}

IL_0096:
	{
		RuntimeObject* L_26 = V_4;
		return L_26;
	}
}
// TriLibCore.Stl.StlGeometry TriLibCore.Stl.StlProcessor::GetActiveGeometry(TriLibCore.Interfaces.IGeometryGroup,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* StlProcessor_GetActiveGeometry_m077EF6775E2A48555E67F72AD3A8E322A2182863 (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, RuntimeObject* ___geometryGroup0, bool ___isQuad1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGeometryGroup_GetGeometry_TisStlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF_m4B86DA0DDE54E5F1A22E224B3A37C7316E2ACA27_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* V_1 = NULL;
	{
		int32_t L_0 = __this->____loopNumber_11;
		int32_t L_1 = __this->____lastLoopNumber_8;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_3 = ___geometryGroup0;
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_4 = __this->____reader_5;
		NullCheck(L_4);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_5;
		L_5 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_4, NULL);
		int32_t L_6 = __this->____loopNumber_11;
		bool L_7 = ___isQuad1;
		NullCheck(L_3);
		StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* L_8;
		L_8 = GenericInterfaceFuncInvoker3< StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF*, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C*, int32_t, bool >::Invoke(IGeometryGroup_GetGeometry_TisStlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF_m4B86DA0DDE54E5F1A22E224B3A37C7316E2ACA27_RuntimeMethod_var, L_3, L_5, L_6, L_7);
		__this->____activeGeometry_10 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeGeometry_10), (void*)L_8);
		int32_t L_9 = __this->____loopNumber_11;
		__this->____lastLoopNumber_8 = L_9;
	}

IL_0042:
	{
		StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* L_10 = __this->____activeGeometry_10;
		V_1 = L_10;
		goto IL_004b;
	}

IL_004b:
	{
		StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* L_11 = V_1;
		return L_11;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.StlProcessor::Process(TriLibCore.Stl.Reader.StlReader,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_Process_mE9579D6B475D44423897704E91BD2A780B6405CF (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* ___stlReader0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_0 = ___stlReader0;
		__this->____reader_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reader_5), (void*)L_0);
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_1 = __this->____reader_5;
		NullCheck(L_1);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_2;
		L_2 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		bool L_3 = ((StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields*)il2cpp_codegen_static_fields_for(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var))->___ImportNormals_13;
		bool L_4 = ((StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields*)il2cpp_codegen_static_fields_for(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var))->___StoreTriangleIndexInTexCoord0_12;
		HashSet_1_t17CC6C8527489146D9154E22DE059EF4A4550640* L_5;
		L_5 = FlexibleVertexDataUtils_BuildVertexAttributesDictionary_mE29022A53EA93BE64B2E15C35DEDECAEBE16DCC1(L_2, (bool)1, L_3, (bool)0, (bool)0, L_4, (bool)0, (bool)0, (bool)0, (bool)0, (bool)0, NULL);
		__this->____vertexAttributes_23 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertexAttributes_23), (void*)L_5);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___stream1;
		bool L_7;
		L_7 = StlProcessor_IsBinary_m4A82EE25ADBA42AEB6202DCBA35C3A72B239D920(L_6, NULL);
		V_0 = L_7;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = ___stream1;
		RuntimeObject* L_10;
		L_10 = StlProcessor_ParseBinary_m15DAD2962CF54D1F8C652CD1F69C56EDD19A991A(__this, L_9, NULL);
		V_1 = L_10;
		RuntimeObject* L_11 = V_1;
		V_2 = L_11;
		goto IL_0054;
	}

IL_0047:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = ___stream1;
		RuntimeObject* L_13;
		L_13 = StlProcessor_ParseASCII_m297D902C12F8D0B07F75397F81C1BA6A82B918ED(__this, L_12, NULL);
		V_3 = L_13;
		RuntimeObject* L_14 = V_3;
		V_2 = L_14;
		goto IL_0054;
	}

IL_0054:
	{
		RuntimeObject* L_15 = V_2;
		return L_15;
	}
}
// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor::GetNormal(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StlProcessor_GetNormal_mAEB43873CA99A50EFBEE382491E9C211BF3AEDC4 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___c2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___b1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___a0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___c2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_4, NULL);
		V_1 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_6, L_7, NULL);
		V_2 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		V_3 = L_9;
		goto IL_0023;
	}

IL_0023:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_3;
		return L_10;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.StlProcessor::ParseBinary(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_ParseBinary_m15DAD2962CF54D1F8C652CD1F69C56EDD19A991A (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m53D84560875155F383C73DA9027DE4CC7AC985D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m2CEBA9C111276D8D06435752E5C5B3598E722CBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m56D477CD7C6E64384E53F8B4C44C151CB9CADA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisIGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_m8A9221E5C3D95DC2EDD7FC163B30C1A3A3929D1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisIModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_m8A288987F91069D02641D435D479CADC11764605_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F4B57D5A155D08E686DEA8A1E7C1992F9C3675B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	RuntimeObject* V_5 = NULL;
	StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* V_6 = NULL;
	StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* V_7 = NULL;
	bool V_8 = false;
	uint8_t V_9 = 0x0;
	uint8_t V_10 = 0x0;
	uint8_t V_11 = 0x0;
	uint8_t V_12 = 0x0;
	int32_t V_13 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_16;
	memset((&V_16), 0, sizeof(V_16));
	int16_t V_17 = 0;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	int32_t V_27 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_28;
	memset((&V_28), 0, sizeof(V_28));
	bool V_29 = false;
	bool V_30 = false;
	RuntimeObject* V_31 = NULL;
	int32_t G_B3_0 = 0;
	StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* G_B18_0 = NULL;
	StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* G_B17_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* G_B19_1 = NULL;
	int32_t G_B24_0 = 0;
	{
		V_0 = (bool)0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_1, L_0, NULL);
		V_1 = L_1;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = V_1;
		NullCheck(L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3;
		L_3 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(25 /* System.Char[] System.IO.BinaryReader::ReadChars(System.Int32) */, L_2, 6);
		String_t* L_4;
		L_4 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_3, NULL);
		V_2 = L_4;
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_5 = __this->____reader_5;
		NullCheck(L_5);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_6;
		L_6 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_5, NULL);
		NullCheck(L_6);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_7 = L_6->___Options_34;
		NullCheck(L_7);
		bool L_8 = L_7->___ImportColors_19;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral4F4B57D5A155D08E686DEA8A1E7C1992F9C3675B, NULL);
		G_B3_0 = ((int32_t)(L_10));
		goto IL_003c;
	}

IL_003b:
	{
		G_B3_0 = 0;
	}

IL_003c:
	{
		V_8 = (bool)G_B3_0;
		bool L_11 = V_8;
		if (!L_11)
		{
			goto IL_00a1;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_12 = V_1;
		NullCheck(L_12);
		uint8_t L_13;
		L_13 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_12);
		V_9 = L_13;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_14 = V_1;
		NullCheck(L_14);
		uint8_t L_15;
		L_15 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_14);
		V_10 = L_15;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_16 = V_1;
		NullCheck(L_16);
		uint8_t L_17;
		L_17 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_16);
		V_11 = L_17;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_18 = V_1;
		NullCheck(L_18);
		uint8_t L_19;
		L_19 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_18);
		V_12 = L_19;
		uint8_t L_20 = V_9;
		uint8_t L_21 = V_10;
		uint8_t L_22 = V_11;
		uint8_t L_23 = V_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		memset((&L_24), 0, sizeof(L_24));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_24), ((float)(((float)L_20)/(255.0f))), ((float)(((float)L_21)/(255.0f))), ((float)(((float)L_22)/(255.0f))), ((float)(((float)L_23)/(255.0f))), /*hidden argument*/NULL);
		__this->____partColor_21 = L_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = __this->____partColor_21;
		__this->____facetColor_22 = L_25;
		V_0 = (bool)1;
	}

IL_00a1:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_26 = ___stream0;
		NullCheck(L_26);
		int64_t L_27;
		L_27 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(30 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_26, ((int64_t)((int32_t)80)), 0);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_28);
		V_3 = L_29;
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_30 = __this->____reader_5;
		NullCheck(L_30);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_31;
		L_31 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_30, NULL);
		NullCheck(L_31);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_32 = L_31->___Options_34;
		NullCheck(L_32);
		float L_33 = L_32->___ScaleFactor_5;
		V_4 = L_33;
		RuntimeObject* L_34;
		L_34 = StlProcessor_GetActiveGeometryGroup_m7383FCD039100A7331EF5BD0528FCE078F143CDE(__this, NULL);
		V_5 = L_34;
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_35 = (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142*)il2cpp_codegen_object_new(StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		StlRootModel__ctor_mF3CCCD9F9A1339A398A4FA1EAA0D00B3AD7BB737(L_35, NULL);
		V_6 = L_35;
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_36 = (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA*)il2cpp_codegen_object_new(StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		StlModel__ctor_m6E2FE456538DB2C0EB1C98D3144C193CF6157D1C(L_36, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_37 = L_36;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_37);
		StlModel_set_LocalScale_m0709587074F69EEB1DCF2F639318F4C9BE86D840_inline(L_37, L_38, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_39 = L_37;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40;
		L_40 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_39);
		StlModel_set_LocalRotation_mE9C27ACA9705C49C2EEEEC359CF9195A0EADF5B9_inline(L_39, L_40, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_41 = L_39;
		RuntimeObject* L_42 = V_5;
		NullCheck(L_41);
		StlModel_set_GeometryGroup_m32211C6B2E30C396961F21D3E5E81B925AAA444E_inline(L_41, L_42, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_43 = L_41;
		RuntimeObject* L_44 = V_5;
		NullCheck(L_44);
		String_t* L_45;
		L_45 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String TriLibCore.Interfaces.IObject::get_Name() */, IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var, L_44);
		NullCheck(L_43);
		StlModel_set_Name_mF8213C9BAD85BC9320C876C41ABBF594327F2814_inline(L_43, L_45, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_46 = L_43;
		NullCheck(L_46);
		StlModel_set_Visibility_m635AB4624DB7C9E08470800B07ABABD332AF0E01_inline(L_46, (bool)1, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_47 = L_46;
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_48 = V_6;
		NullCheck(L_47);
		StlModel_set_Parent_m5FFEE1518EF3F12F1378AECEAEB41466CCA20DCE_inline(L_47, L_48, NULL);
		V_7 = L_47;
		Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* L_49 = __this->____models_4;
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_50 = V_7;
		NullCheck(L_50);
		String_t* L_51;
		L_51 = StlModel_get_Name_m25E9B99DE29E6200C71933B5E52D158E28DCD941_inline(L_50, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_52 = V_7;
		NullCheck(L_49);
		Dictionary_2_Add_m53D84560875155F383C73DA9027DE4CC7AC985D5(L_49, L_51, L_52, Dictionary_2_Add_m53D84560875155F383C73DA9027DE4CC7AC985D5_RuntimeMethod_var);
		V_13 = 0;
		goto IL_035e;
	}

IL_013d:
	{
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_53 = __this->____reader_5;
		NullCheck(L_53);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_54;
		L_54 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_53, NULL);
		NullCheck(L_54);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_55 = L_54->___Options_34;
		NullCheck(L_55);
		bool L_56 = L_55->___ImportNormals_23;
		V_18 = L_56;
		bool L_57 = V_18;
		if (!L_57)
		{
			goto IL_0169;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_58 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = StlProcessor_ReadVector3_m08382B6430274ECDE456A6119A9E608EB5F92F87(L_58, NULL);
		__this->____facetNormal_12 = L_59;
		goto IL_017d;
	}

IL_0169:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_60 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = StlProcessor_ReadVector3_m08382B6430274ECDE456A6119A9E608EB5F92F87(L_60, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->____facetNormal_12 = L_62;
	}

IL_017d:
	{
		il2cpp_codegen_runtime_class_init_inline(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		bool L_63 = ((StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields*)il2cpp_codegen_static_fields_for(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var))->___LoadWithYUp_11;
		V_19 = L_63;
		bool L_64 = V_19;
		if (!L_64)
		{
			goto IL_01b9;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_65 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = StlProcessor_ReadVector3_m08382B6430274ECDE456A6119A9E608EB5F92F87(L_65, NULL);
		float L_67 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_66, L_67, NULL);
		V_16 = L_68;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_69 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = StlProcessor_ReadVector3_m08382B6430274ECDE456A6119A9E608EB5F92F87(L_69, NULL);
		float L_71 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_70, L_71, NULL);
		V_15 = L_72;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_73 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = StlProcessor_ReadVector3_m08382B6430274ECDE456A6119A9E608EB5F92F87(L_73, NULL);
		float L_75 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_74, L_75, NULL);
		V_14 = L_76;
		goto IL_01e8;
	}

IL_01b9:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_77 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = StlProcessor_ReadVector3_m08382B6430274ECDE456A6119A9E608EB5F92F87(L_77, NULL);
		float L_79 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_78, L_79, NULL);
		V_14 = L_80;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_81 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = StlProcessor_ReadVector3_m08382B6430274ECDE456A6119A9E608EB5F92F87(L_81, NULL);
		float L_83 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_82, L_83, NULL);
		V_15 = L_84;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_85 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = StlProcessor_ReadVector3_m08382B6430274ECDE456A6119A9E608EB5F92F87(L_85, NULL);
		float L_87 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_86, L_87, NULL);
		V_16 = L_88;
	}

IL_01e8:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_89 = V_1;
		NullCheck(L_89);
		int16_t L_90;
		L_90 = VirtualFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_89);
		V_17 = L_90;
		int16_t L_91 = V_17;
		V_20 = (bool)((!(((uint32_t)L_91) <= ((uint32_t)0)))? 1 : 0);
		bool L_92 = V_20;
		if (!L_92)
		{
			goto IL_02a4;
		}
	}
	{
		bool L_93 = V_0;
		V_25 = L_93;
		bool L_94 = V_25;
		if (!L_94)
		{
			goto IL_023a;
		}
	}
	{
		int16_t L_95 = V_17;
		V_21 = ((int32_t)((int32_t)L_95&((int32_t)31)));
		int16_t L_96 = V_17;
		V_22 = ((int32_t)(((int32_t)((int32_t)L_96&((int32_t)992)))>>5));
		int16_t L_97 = V_17;
		V_23 = ((int32_t)(((int32_t)((int32_t)L_97&((int32_t)31744)))>>((int32_t)10)));
		int16_t L_98 = V_17;
		V_24 = (bool)((((int32_t)((int32_t)(((int32_t)((int32_t)L_98&((int32_t)32768)))>>((int32_t)15)))) == ((int32_t)0))? 1 : 0);
		goto IL_026c;
	}

IL_023a:
	{
		int16_t L_99 = V_17;
		V_23 = ((int32_t)(((int32_t)((int32_t)L_99&((int32_t)31744)))>>((int32_t)10)));
		int16_t L_100 = V_17;
		V_22 = ((int32_t)(((int32_t)((int32_t)L_100&((int32_t)992)))>>5));
		int16_t L_101 = V_17;
		V_21 = ((int32_t)((int32_t)L_101&((int32_t)31)));
		int16_t L_102 = V_17;
		V_24 = (bool)((((int32_t)((int32_t)(((int32_t)((int32_t)L_102&((int32_t)32768)))>>((int32_t)15)))) == ((int32_t)1))? 1 : 0);
	}

IL_026c:
	{
		bool L_103 = V_24;
		G_B17_0 = __this;
		if (L_103)
		{
			G_B18_0 = __this;
			goto IL_0279;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_104 = __this->____partColor_21;
		G_B19_0 = L_104;
		G_B19_1 = G_B17_0;
		goto IL_029e;
	}

IL_0279:
	{
		int32_t L_105 = V_21;
		int32_t L_106 = V_22;
		int32_t L_107 = V_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_108;
		memset((&L_108), 0, sizeof(L_108));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_108), ((float)(((float)L_105)/(32.0f))), ((float)(((float)L_106)/(32.0f))), ((float)(((float)L_107)/(32.0f))), (1.0f), /*hidden argument*/NULL);
		G_B19_0 = L_108;
		G_B19_1 = G_B18_0;
	}

IL_029e:
	{
		NullCheck(G_B19_1);
		G_B19_1->____facetColor_22 = G_B19_0;
	}

IL_02a4:
	{
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_109 = __this->____reader_5;
		NullCheck(L_109);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_110;
		L_110 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_109, NULL);
		NullCheck(L_110);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_111 = L_110->___Options_34;
		NullCheck(L_111);
		bool L_112 = L_111->___ImportMeshes_10;
		V_26 = L_112;
		bool L_113 = V_26;
		if (!L_113)
		{
			goto IL_0357;
		}
	}
	{
		int32_t L_114 = V_13;
		V_27 = ((int32_t)il2cpp_codegen_multiply(L_114, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117 = V_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
		L_118 = StlProcessor_GetNormal_mAEB43873CA99A50EFBEE382491E9C211BF3AEDC4(L_115, L_116, L_117, NULL);
		V_28 = L_118;
		il2cpp_codegen_runtime_class_init_inline(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		bool L_119 = ((StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields*)il2cpp_codegen_static_fields_for(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var))->___FixInfacingNormals_10;
		if (!L_119)
		{
			goto IL_02f3;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120 = __this->____facetNormal_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121 = V_28;
		float L_122;
		L_122 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_120, L_121, NULL);
		G_B24_0 = ((((float)L_122) > ((float)(0.0f)))? 1 : 0);
		goto IL_02f4;
	}

IL_02f3:
	{
		G_B24_0 = 1;
	}

IL_02f4:
	{
		V_29 = (bool)G_B24_0;
		bool L_123 = V_29;
		if (!L_123)
		{
			goto IL_0329;
		}
	}
	{
		RuntimeObject* L_124 = V_5;
		int32_t L_125 = V_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126 = V_16;
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(__this, L_124, L_125, L_126, NULL);
		RuntimeObject* L_127 = V_5;
		int32_t L_128 = V_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129 = V_15;
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(__this, L_127, ((int32_t)il2cpp_codegen_add(L_128, 1)), L_129, NULL);
		RuntimeObject* L_130 = V_5;
		int32_t L_131 = V_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132 = V_14;
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(__this, L_130, ((int32_t)il2cpp_codegen_add(L_131, 2)), L_132, NULL);
		goto IL_0356;
	}

IL_0329:
	{
		RuntimeObject* L_133 = V_5;
		int32_t L_134 = V_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135 = V_14;
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(__this, L_133, ((int32_t)il2cpp_codegen_add(L_134, 2)), L_135, NULL);
		RuntimeObject* L_136 = V_5;
		int32_t L_137 = V_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138 = V_15;
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(__this, L_136, ((int32_t)il2cpp_codegen_add(L_137, 1)), L_138, NULL);
		RuntimeObject* L_139 = V_5;
		int32_t L_140 = V_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141 = V_16;
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(__this, L_139, L_140, L_141, NULL);
	}

IL_0356:
	{
	}

IL_0357:
	{
		int32_t L_142 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_142, 1));
	}

IL_035e:
	{
		int32_t L_143 = V_13;
		int32_t L_144 = V_3;
		V_30 = (bool)((((int32_t)L_143) < ((int32_t)L_144))? 1 : 0);
		bool L_145 = V_30;
		if (L_145)
		{
			goto IL_013d;
		}
	}
	{
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_146 = __this->____reader_5;
		int32_t L_147 = V_3;
		NullCheck(L_146);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_146, (1.0f), 1, ((float)L_147), NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_148 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
		L_149 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_148);
		StlModel_set_LocalScale_m0709587074F69EEB1DCF2F639318F4C9BE86D840_inline(L_148, L_149, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_150 = V_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_151;
		L_151 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_150);
		StlModel_set_LocalRotation_mE9C27ACA9705C49C2EEEEC359CF9195A0EADF5B9_inline(L_150, L_151, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_152 = V_6;
		NullCheck(L_152);
		StlModel_set_Visibility_m635AB4624DB7C9E08470800B07ABABD332AF0E01_inline(L_152, (bool)1, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_153 = V_6;
		Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* L_154 = __this->____models_4;
		NullCheck(L_154);
		ValueCollection_t52D0D70A98CDE4A09BB9B7D39C2159B31ECAE027* L_155;
		L_155 = Dictionary_2_get_Values_m56D477CD7C6E64384E53F8B4C44C151CB9CADA48(L_154, Dictionary_2_get_Values_m56D477CD7C6E64384E53F8B4C44C151CB9CADA48_RuntimeMethod_var);
		IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76* L_156;
		L_156 = Enumerable_ToArray_TisIModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_m8A288987F91069D02641D435D479CADC11764605(L_155, Enumerable_ToArray_TisIModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_m8A288987F91069D02641D435D479CADC11764605_RuntimeMethod_var);
		NullCheck(L_153);
		StlModel_set_Children_m8C26332902AFB18940DAB4060807171A0364EA1E_inline(L_153, (RuntimeObject*)L_156, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_157 = V_6;
		Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983* L_158 = __this->____geometryGroups_3;
		NullCheck(L_158);
		ValueCollection_tCCCE4A1A9D973B131015A437780697A2155EAACD* L_159;
		L_159 = Dictionary_2_get_Values_m2CEBA9C111276D8D06435752E5C5B3598E722CBE(L_158, Dictionary_2_get_Values_m2CEBA9C111276D8D06435752E5C5B3598E722CBE_RuntimeMethod_var);
		IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711* L_160;
		L_160 = Enumerable_ToArray_TisIGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_m8A9221E5C3D95DC2EDD7FC163B30C1A3A3929D1A(L_159, Enumerable_ToArray_TisIGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_m8A9221E5C3D95DC2EDD7FC163B30C1A3A3929D1A_RuntimeMethod_var);
		NullCheck(L_157);
		StlRootModel_set_AllGeometryGroups_m6754461757172DBEB0986B7A916BBBFFDAD9E173_inline(L_157, (RuntimeObject*)L_160, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_161 = V_6;
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_162 = V_6;
		NullCheck(L_162);
		RuntimeObject* L_163;
		L_163 = StlModel_get_Children_mCC99BF668D976265E2897D884E1080A14B8219BB_inline(L_162, NULL);
		NullCheck(L_161);
		StlRootModel_set_AllModels_mED5ABBDE53F3952C9E492CC70CADE0692BA9A7BF_inline(L_161, L_163, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_164 = V_6;
		V_31 = L_164;
		goto IL_03e8;
	}

IL_03e8:
	{
		RuntimeObject* L_165 = V_31;
		return L_165;
	}
}
// System.Void TriLibCore.Stl.StlProcessor::AddOutputVertex(TriLibCore.Interfaces.IGeometryGroup,System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7 (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, RuntimeObject* ___geometryGroup0, int32_t ___vertexIndex1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vertex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* G_B2_1 = NULL;
	int32_t G_B2_2 = 0;
	AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* G_B2_3 = NULL;
	RuntimeObject* G_B2_4 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* G_B1_1 = NULL;
	int32_t G_B1_2 = 0;
	AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* G_B1_3 = NULL;
	RuntimeObject* G_B1_4 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* G_B3_2 = NULL;
	int32_t G_B3_3 = 0;
	AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* G_B3_4 = NULL;
	RuntimeObject* G_B3_5 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_2;
	memset((&G_B5_2), 0, sizeof(G_B5_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_3;
	memset((&G_B5_3), 0, sizeof(G_B5_3));
	StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* G_B5_4 = NULL;
	int32_t G_B5_5 = 0;
	AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* G_B5_6 = NULL;
	RuntimeObject* G_B5_7 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 G_B4_1;
	memset((&G_B4_1), 0, sizeof(G_B4_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_2;
	memset((&G_B4_2), 0, sizeof(G_B4_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_3;
	memset((&G_B4_3), 0, sizeof(G_B4_3));
	StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* G_B4_4 = NULL;
	int32_t G_B4_5 = 0;
	AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* G_B4_6 = NULL;
	RuntimeObject* G_B4_7 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 G_B6_2;
	memset((&G_B6_2), 0, sizeof(G_B6_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B6_3;
	memset((&G_B6_3), 0, sizeof(G_B6_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B6_4;
	memset((&G_B6_4), 0, sizeof(G_B6_4));
	StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* G_B6_5 = NULL;
	int32_t G_B6_6 = 0;
	AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* G_B6_7 = NULL;
	RuntimeObject* G_B6_8 = NULL;
	{
		RuntimeObject* L_0 = ___geometryGroup0;
		StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* L_1;
		L_1 = StlProcessor_GetActiveGeometry_m077EF6775E2A48555E67F72AD3A8E322A2182863(__this, L_0, (bool)0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = ___geometryGroup0;
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_3 = __this->____reader_5;
		NullCheck(L_3);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_4;
		L_4 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_3, NULL);
		int32_t L_5 = ___vertexIndex1;
		StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vertex2;
		il2cpp_codegen_runtime_class_init_inline(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		bool L_8 = ((StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields*)il2cpp_codegen_static_fields_for(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var))->___ImportNormals_13;
		G_B1_0 = L_7;
		G_B1_1 = L_6;
		G_B1_2 = L_5;
		G_B1_3 = L_4;
		G_B1_4 = L_2;
		if (L_8)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_6;
			G_B2_2 = L_5;
			G_B2_3 = L_4;
			G_B2_4 = L_2;
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		G_B3_0 = L_9;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0031;
	}

IL_002b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->____facetNormal_12;
		G_B3_0 = L_10;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0031:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = __this->____facetColor_22;
		il2cpp_codegen_runtime_class_init_inline(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		bool L_13 = ((StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields*)il2cpp_codegen_static_fields_for(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var))->___StoreTriangleIndexInTexCoord0_12;
		G_B4_0 = L_12;
		G_B4_1 = L_11;
		G_B4_2 = G_B3_0;
		G_B4_3 = G_B3_1;
		G_B4_4 = G_B3_2;
		G_B4_5 = G_B3_3;
		G_B4_6 = G_B3_4;
		G_B4_7 = G_B3_5;
		if (L_13)
		{
			G_B5_0 = L_12;
			G_B5_1 = L_11;
			G_B5_2 = G_B3_0;
			G_B5_3 = G_B3_1;
			G_B5_4 = G_B3_2;
			G_B5_5 = G_B3_3;
			G_B5_6 = G_B3_4;
			G_B5_7 = G_B3_5;
			goto IL_0052;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_3;
		G_B6_0 = L_14;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		G_B6_6 = G_B4_5;
		G_B6_7 = G_B4_6;
		G_B6_8 = G_B4_7;
		goto IL_0060;
	}

IL_0052:
	{
		int32_t L_15 = ___vertexIndex1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)((int32_t)(L_15/3))), (0.0f), /*hidden argument*/NULL);
		G_B6_0 = L_16;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
		G_B6_6 = G_B5_5;
		G_B6_7 = G_B5_6;
		G_B6_8 = G_B5_7;
	}

IL_0060:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_3;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_3;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_3;
		il2cpp_codegen_initobj((&V_4), sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_20 = V_4;
		FlexibleVertexDataUtils_BuildAndAddFlexibleVertexData_mC35367A0F41EE78D0D41CB73484C229156CC532F(G_B6_8, G_B6_7, G_B6_6, G_B6_5, G_B6_4, G_B6_3, G_B6_2, G_B6_1, G_B6_0, L_17, L_18, L_19, L_20, NULL);
		return;
	}
}
// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor::ReadVector3(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StlProcessor_ReadVector3_m08382B6430274ECDE456A6119A9E608EB5F92F87 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___binaryReader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___binaryReader0;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_0);
		V_0 = L_1;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = ___binaryReader0;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_2);
		V_1 = L_3;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = ___binaryReader0;
		NullCheck(L_4);
		float L_5;
		L_5 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_4);
		V_2 = L_5;
		il2cpp_codegen_runtime_class_init_inline(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		bool L_6 = ((StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields*)il2cpp_codegen_static_fields_for(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var))->___LoadWithYUp_11;
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		float L_8 = V_0;
		float L_9 = V_1;
		float L_10 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_8, L_9, L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		goto IL_0038;
	}

IL_002c:
	{
		float L_12 = V_0;
		float L_13 = V_2;
		float L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), L_12, L_13, L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		goto IL_0038;
	}

IL_0038:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_4;
		return L_16;
	}
}
// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor::ReadVector3(TriLibCore.Stl.StlStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StlProcessor_ReadVector3_mD41B92963A4FC7C7BA2170A47130B00B0A6B1973 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* ___stlStreamReader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_0 = ___stlStreamReader0;
		NullCheck(L_0);
		float L_1;
		L_1 = StlStreamReader_ReadTokenAsFloat_m30C508ABFBF8FF2F47629BCFFB53C042F4B7F551(L_0, (bool)1, NULL);
		V_0 = L_1;
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_2 = ___stlStreamReader0;
		NullCheck(L_2);
		float L_3;
		L_3 = StlStreamReader_ReadTokenAsFloat_m30C508ABFBF8FF2F47629BCFFB53C042F4B7F551(L_2, (bool)1, NULL);
		V_1 = L_3;
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_4 = ___stlStreamReader0;
		NullCheck(L_4);
		float L_5;
		L_5 = StlStreamReader_ReadTokenAsFloat_m30C508ABFBF8FF2F47629BCFFB53C042F4B7F551(L_4, (bool)1, NULL);
		V_2 = L_5;
		il2cpp_codegen_runtime_class_init_inline(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		bool L_6 = ((StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields*)il2cpp_codegen_static_fields_for(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var))->___LoadWithYUp_11;
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		float L_8 = V_0;
		float L_9 = V_1;
		float L_10 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_8, L_9, L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		goto IL_003b;
	}

IL_002f:
	{
		float L_12 = V_0;
		float L_13 = V_2;
		float L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), L_12, L_13, L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		goto IL_003b;
	}

IL_003b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_4;
		return L_16;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.StlProcessor::ParseASCII(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_ParseASCII_m297D902C12F8D0B07F75397F81C1BA6A82B918ED (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m2CEBA9C111276D8D06435752E5C5B3598E722CBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m56D477CD7C6E64384E53F8B4C44C151CB9CADA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisIGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_m8A9221E5C3D95DC2EDD7FC163B30C1A3A3929D1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisIModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_m8A288987F91069D02641D435D479CADC11764605_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		s_Il2CppMethodInitialized = true;
	}
	StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* V_0 = NULL;
	int32_t V_1 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	bool V_3 = false;
	StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* V_4 = NULL;
	float V_5 = 0.0f;
	int64_t V_6 = 0;
	float V_7 = 0.0f;
	int64_t V_8 = 0;
	int64_t V_9 = 0;
	int64_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	int64_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_17;
	memset((&V_17), 0, sizeof(V_17));
	float V_18 = 0.0f;
	RuntimeObject* V_19 = NULL;
	int32_t V_20 = 0;
	bool V_21 = false;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_25;
	memset((&V_25), 0, sizeof(V_25));
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	bool V_31 = false;
	RuntimeObject* V_32 = NULL;
	String_t* G_B16_0 = NULL;
	StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* G_B16_1 = NULL;
	String_t* G_B15_0 = NULL;
	StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* G_B15_1 = NULL;
	int32_t G_B38_0 = 0;
	{
		__this->____loopNumber_11 = 0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_1 = (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5*)il2cpp_codegen_object_new(StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StlStreamReader__ctor_m1DC2CC738B9E91B86FE02E6BFD2FA36770C08BE2(L_1, L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)3);
		V_2 = L_2;
		V_3 = (bool)0;
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_3 = (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142*)il2cpp_codegen_object_new(StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StlRootModel__ctor_mF3CCCD9F9A1339A398A4FA1EAA0D00B3AD7BB737(L_3, NULL);
		V_4 = L_3;
		V_5 = (0.0f);
		goto IL_0395;
	}

IL_002d:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_4 = V_0;
		NullCheck(L_4);
		int64_t L_5;
		L_5 = StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822(L_4, (bool)0, (bool)0, NULL);
		V_6 = L_5;
		int64_t L_6 = V_6;
		V_9 = L_6;
		int64_t L_7 = V_9;
		V_8 = L_7;
		int64_t L_8 = V_8;
		if ((((int64_t)L_8) > ((int64_t)((int64_t)-1367968407301361207LL))))
		{
			goto IL_0086;
		}
	}
	{
		int64_t L_9 = V_8;
		if ((((int64_t)L_9) == ((int64_t)((int64_t)-5513532493766152582LL))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_005f;
	}

IL_005f:
	{
		int64_t L_10 = V_8;
		if ((((int64_t)L_10) == ((int64_t)((int64_t)-4898810643358303851LL))))
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0071;
	}

IL_0071:
	{
		int64_t L_11 = V_8;
		if ((((int64_t)L_11) == ((int64_t)((int64_t)-1367968407301361207LL))))
		{
			goto IL_01c3;
		}
	}
	{
		goto IL_0330;
	}

IL_0086:
	{
		int64_t L_12 = V_8;
		if ((((int64_t)L_12) == ((int64_t)((int64_t)7096547112153259250LL))))
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		int64_t L_13 = V_8;
		if ((((int64_t)L_13) == ((int64_t)((int64_t)7096547112162183094LL))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_00a7;
	}

IL_00a7:
	{
		int64_t L_14 = V_8;
		if ((((int64_t)L_14) == ((int64_t)((int64_t)7096547112165690854LL))))
		{
			goto IL_00b9;
		}
	}
	{
		goto IL_0330;
	}

IL_00b9:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = StlStreamReader_ReadTokenAsString_m48318F7F8AD205DB62D73904EDFFD9EED1C7396D(L_15, (bool)0, (bool)1, NULL);
		String_t* L_17 = L_16;
		G_B15_0 = L_17;
		G_B15_1 = __this;
		if (L_17)
		{
			G_B16_0 = L_17;
			G_B16_1 = __this;
			goto IL_00cc;
		}
	}
	{
		G_B16_0 = _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
		G_B16_1 = G_B15_1;
	}

IL_00cc:
	{
		NullCheck(G_B16_1);
		G_B16_1->____groupName_6 = G_B16_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B16_1->____groupName_6), (void*)G_B16_0);
		V_3 = (bool)0;
		goto IL_034d;
	}

IL_00d8:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_18 = V_0;
		NullCheck(L_18);
		int64_t L_19;
		L_19 = StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822(L_18, (bool)1, (bool)0, NULL);
		V_10 = L_19;
		int64_t L_20 = V_10;
		V_11 = (bool)((((int32_t)((((int64_t)L_20) == ((int64_t)((int64_t)-1367968407521166068LL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_11;
		if (!L_21)
		{
			goto IL_0105;
		}
	}
	{
		Exception_t* L_22 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE21886A8FD3908720B58122F94229E548DD3A51F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StlProcessor_ParseASCII_m297D902C12F8D0B07F75397F81C1BA6A82B918ED_RuntimeMethod_var)));
	}

IL_0105:
	{
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_23 = __this->____reader_5;
		NullCheck(L_23);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_24;
		L_24 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_23, NULL);
		NullCheck(L_24);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_25 = L_24->___Options_34;
		NullCheck(L_25);
		bool L_26 = L_25->___ImportNormals_23;
		V_12 = L_26;
		bool L_27 = V_12;
		if (!L_27)
		{
			goto IL_0130;
		}
	}
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_28 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = StlProcessor_ReadVector3_mD41B92963A4FC7C7BA2170A47130B00B0A6B1973(L_28, NULL);
		__this->____facetNormal_12 = L_29;
		goto IL_0144;
	}

IL_0130:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_30 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = StlProcessor_ReadVector3_mD41B92963A4FC7C7BA2170A47130B00B0A6B1973(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->____facetNormal_12 = L_32;
	}

IL_0144:
	{
		goto IL_034d;
	}

IL_0149:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_33 = V_0;
		NullCheck(L_33);
		int64_t L_34;
		L_34 = StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822(L_33, (bool)1, (bool)0, NULL);
		V_13 = L_34;
		int64_t L_35 = V_13;
		V_14 = (bool)((((int32_t)((((int64_t)L_35) == ((int64_t)((int64_t)6774539739450461193LL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_14;
		if (!L_36)
		{
			goto IL_0176;
		}
	}
	{
		Exception_t* L_37 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_37);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_37, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral795FA97334306AE47C0C9744A2642732E6FED22D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StlProcessor_ParseASCII_m297D902C12F8D0B07F75397F81C1BA6A82B918ED_RuntimeMethod_var)));
	}

IL_0176:
	{
		int32_t L_38 = __this->____loopNumber_11;
		__this->____loopNumber_11 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		goto IL_034d;
	}

IL_0189:
	{
		int32_t L_39 = __this->____loopNumber_11;
		__this->____loopNumber_11 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
		goto IL_034d;
	}

IL_019d:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_40 = V_0;
		NullCheck(L_40);
		int64_t L_41;
		L_41 = StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822(L_40, (bool)0, (bool)0, NULL);
		bool L_42 = V_3;
		V_15 = (bool)((((int32_t)L_42) == ((int32_t)0))? 1 : 0);
		bool L_43 = V_15;
		if (!L_43)
		{
			goto IL_01be;
		}
	}
	{
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_44 = V_4;
		StlProcessor_AddModel_mD074A15E2C251A343E4D0B955563EE85DE37FAF8(__this, L_44, NULL);
		V_3 = (bool)1;
	}

IL_01be:
	{
		goto IL_034d;
	}

IL_01c3:
	{
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_45 = __this->____reader_5;
		NullCheck(L_45);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_46;
		L_46 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_45, NULL);
		NullCheck(L_46);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_47 = L_46->___Options_34;
		NullCheck(L_47);
		bool L_48 = L_47->___ImportMeshes_10;
		V_16 = L_48;
		bool L_49 = V_16;
		if (!L_49)
		{
			goto IL_032e;
		}
	}
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_50 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = StlProcessor_ReadVector3_mD41B92963A4FC7C7BA2170A47130B00B0A6B1973(L_50, NULL);
		V_17 = L_51;
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_52 = __this->____reader_5;
		NullCheck(L_52);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_53;
		L_53 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_52, NULL);
		NullCheck(L_53);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_54 = L_53->___Options_34;
		NullCheck(L_54);
		float L_55 = L_54->___ScaleFactor_5;
		V_18 = L_55;
		RuntimeObject* L_56;
		L_56 = StlProcessor_GetActiveGeometryGroup_m7383FCD039100A7331EF5BD0528FCE078F143CDE(__this, NULL);
		V_19 = L_56;
		int32_t L_57 = V_1;
		int32_t L_58 = L_57;
		V_1 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		V_20 = ((int32_t)(L_58%3));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_59 = V_2;
		int32_t L_60 = V_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_17;
		float L_62 = V_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_61, L_62, NULL);
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_63);
		int32_t L_64 = V_20;
		V_21 = (bool)((((int32_t)L_64) == ((int32_t)2))? 1 : 0);
		bool L_65 = V_21;
		if (!L_65)
		{
			goto IL_032d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		bool L_66 = ((StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields*)il2cpp_codegen_static_fields_for(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var))->___LoadWithYUp_11;
		V_26 = L_66;
		bool L_67 = V_26;
		if (!L_67)
		{
			goto IL_024b;
		}
	}
	{
		V_22 = 2;
		V_23 = 1;
		V_24 = 0;
		goto IL_0256;
	}

IL_024b:
	{
		V_22 = 0;
		V_23 = 1;
		V_24 = 2;
	}

IL_0256:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_68 = V_2;
		NullCheck(L_68);
		int32_t L_69 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_71 = V_2;
		NullCheck(L_71);
		int32_t L_72 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_74 = V_2;
		NullCheck(L_74);
		int32_t L_75 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = StlProcessor_GetNormal_mAEB43873CA99A50EFBEE382491E9C211BF3AEDC4(L_70, L_73, L_76, NULL);
		V_25 = L_77;
		il2cpp_codegen_runtime_class_init_inline(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		bool L_78 = ((StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields*)il2cpp_codegen_static_fields_for(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var))->___FixInfacingNormals_10;
		if (!L_78)
		{
			goto IL_028f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = __this->____facetNormal_12;
		float L_81;
		L_81 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_79, L_80, NULL);
		G_B38_0 = ((((float)L_81) > ((float)(0.0f)))? 1 : 0);
		goto IL_0290;
	}

IL_028f:
	{
		G_B38_0 = 1;
	}

IL_0290:
	{
		V_27 = (bool)G_B38_0;
		bool L_82 = V_27;
		if (!L_82)
		{
			goto IL_02e2;
		}
	}
	{
		RuntimeObject* L_83 = V_19;
		RuntimeObject* L_84 = V_19;
		NullCheck(L_84);
		int32_t L_85;
		L_85 = InterfaceFuncInvoker0< int32_t >::Invoke(46 /* System.Int32 TriLibCore.Interfaces.IGeometryGroup::get_VerticesDataCount() */, IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_il2cpp_TypeInfo_var, L_84);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_86 = V_2;
		int32_t L_87 = V_24;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(__this, L_83, L_85, L_89, NULL);
		RuntimeObject* L_90 = V_19;
		RuntimeObject* L_91 = V_19;
		NullCheck(L_91);
		int32_t L_92;
		L_92 = InterfaceFuncInvoker0< int32_t >::Invoke(46 /* System.Int32 TriLibCore.Interfaces.IGeometryGroup::get_VerticesDataCount() */, IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_il2cpp_TypeInfo_var, L_91);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_93 = V_2;
		int32_t L_94 = V_23;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(__this, L_90, L_92, L_96, NULL);
		RuntimeObject* L_97 = V_19;
		RuntimeObject* L_98 = V_19;
		NullCheck(L_98);
		int32_t L_99;
		L_99 = InterfaceFuncInvoker0< int32_t >::Invoke(46 /* System.Int32 TriLibCore.Interfaces.IGeometryGroup::get_VerticesDataCount() */, IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_il2cpp_TypeInfo_var, L_98);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_100 = V_2;
		int32_t L_101 = V_22;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(__this, L_97, L_99, L_103, NULL);
		goto IL_032c;
	}

IL_02e2:
	{
		RuntimeObject* L_104 = V_19;
		RuntimeObject* L_105 = V_19;
		NullCheck(L_105);
		int32_t L_106;
		L_106 = InterfaceFuncInvoker0< int32_t >::Invoke(46 /* System.Int32 TriLibCore.Interfaces.IGeometryGroup::get_VerticesDataCount() */, IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_il2cpp_TypeInfo_var, L_105);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_107 = V_2;
		int32_t L_108 = V_22;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(__this, L_104, L_106, L_110, NULL);
		RuntimeObject* L_111 = V_19;
		RuntimeObject* L_112 = V_19;
		NullCheck(L_112);
		int32_t L_113;
		L_113 = InterfaceFuncInvoker0< int32_t >::Invoke(46 /* System.Int32 TriLibCore.Interfaces.IGeometryGroup::get_VerticesDataCount() */, IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_il2cpp_TypeInfo_var, L_112);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_114 = V_2;
		int32_t L_115 = V_23;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(__this, L_111, L_113, L_117, NULL);
		RuntimeObject* L_118 = V_19;
		RuntimeObject* L_119 = V_19;
		NullCheck(L_119);
		int32_t L_120;
		L_120 = InterfaceFuncInvoker0< int32_t >::Invoke(46 /* System.Int32 TriLibCore.Interfaces.IGeometryGroup::get_VerticesDataCount() */, IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_il2cpp_TypeInfo_var, L_119);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_121 = V_2;
		int32_t L_122 = V_24;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(__this, L_118, L_120, L_124, NULL);
	}

IL_032c:
	{
	}

IL_032d:
	{
	}

IL_032e:
	{
		goto IL_034d;
	}

IL_0330:
	{
		goto IL_033f;
	}

IL_0333:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_125 = V_0;
		NullCheck(L_125);
		int64_t L_126;
		L_126 = StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822(L_125, (bool)0, (bool)0, NULL);
		V_6 = L_126;
	}

IL_033f:
	{
		int64_t L_127 = V_6;
		V_28 = (bool)((!(((uint64_t)L_127) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_128 = V_28;
		if (L_128)
		{
			goto IL_0333;
		}
	}
	{
		goto IL_034d;
	}

IL_034d:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_129 = V_0;
		NullCheck(L_129);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_130;
		L_130 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(15 /* System.IO.Stream System.IO.StreamReader::get_BaseStream() */, L_129);
		NullCheck(L_130);
		int64_t L_131;
		L_131 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_130);
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_132 = V_0;
		NullCheck(L_132);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_133;
		L_133 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(15 /* System.IO.Stream System.IO.StreamReader::get_BaseStream() */, L_132);
		NullCheck(L_133);
		int64_t L_134;
		L_134 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_133);
		V_7 = ((float)(((float)L_131)/((float)L_134)));
		float L_135 = V_7;
		float L_136 = V_5;
		V_29 = (bool)((((float)L_135) > ((float)((float)il2cpp_codegen_add(L_136, (0.330000013f)))))? 1 : 0);
		bool L_137 = V_29;
		if (!L_137)
		{
			goto IL_0394;
		}
	}
	{
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_138 = __this->____reader_5;
		float L_139 = V_7;
		NullCheck(L_138);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_138, L_139, 0, (0.0f), NULL);
		float L_140 = V_7;
		V_5 = L_140;
	}

IL_0394:
	{
	}

IL_0395:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_141 = V_0;
		NullCheck(L_141);
		bool L_142;
		L_142 = StreamReader_get_EndOfStream_mAE054431BF21158178EAA2A6872F14A9ED6A3C3E(L_141, NULL);
		V_30 = (bool)((((int32_t)L_142) == ((int32_t)0))? 1 : 0);
		bool L_143 = V_30;
		if (L_143)
		{
			goto IL_002d;
		}
	}
	{
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_144 = __this->____reader_5;
		NullCheck(L_144);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_144, (1.0f), 0, (0.0f), NULL);
		bool L_145 = V_3;
		V_31 = (bool)((((int32_t)L_145) == ((int32_t)0))? 1 : 0);
		bool L_146 = V_31;
		if (!L_146)
		{
			goto IL_03d3;
		}
	}
	{
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_147 = V_4;
		StlProcessor_AddModel_mD074A15E2C251A343E4D0B955563EE85DE37FAF8(__this, L_147, NULL);
	}

IL_03d3:
	{
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_148 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
		L_149 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_148);
		StlModel_set_LocalScale_m0709587074F69EEB1DCF2F639318F4C9BE86D840_inline(L_148, L_149, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_150 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_151;
		L_151 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_150);
		StlModel_set_LocalRotation_mE9C27ACA9705C49C2EEEEC359CF9195A0EADF5B9_inline(L_150, L_151, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_152 = V_4;
		NullCheck(L_152);
		StlModel_set_Visibility_m635AB4624DB7C9E08470800B07ABABD332AF0E01_inline(L_152, (bool)1, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_153 = V_4;
		Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* L_154 = __this->____models_4;
		NullCheck(L_154);
		ValueCollection_t52D0D70A98CDE4A09BB9B7D39C2159B31ECAE027* L_155;
		L_155 = Dictionary_2_get_Values_m56D477CD7C6E64384E53F8B4C44C151CB9CADA48(L_154, Dictionary_2_get_Values_m56D477CD7C6E64384E53F8B4C44C151CB9CADA48_RuntimeMethod_var);
		IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76* L_156;
		L_156 = Enumerable_ToArray_TisIModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_m8A288987F91069D02641D435D479CADC11764605(L_155, Enumerable_ToArray_TisIModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_m8A288987F91069D02641D435D479CADC11764605_RuntimeMethod_var);
		NullCheck(L_153);
		StlModel_set_Children_m8C26332902AFB18940DAB4060807171A0364EA1E_inline(L_153, (RuntimeObject*)L_156, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_157 = V_4;
		Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983* L_158 = __this->____geometryGroups_3;
		NullCheck(L_158);
		ValueCollection_tCCCE4A1A9D973B131015A437780697A2155EAACD* L_159;
		L_159 = Dictionary_2_get_Values_m2CEBA9C111276D8D06435752E5C5B3598E722CBE(L_158, Dictionary_2_get_Values_m2CEBA9C111276D8D06435752E5C5B3598E722CBE_RuntimeMethod_var);
		IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711* L_160;
		L_160 = Enumerable_ToArray_TisIGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_m8A9221E5C3D95DC2EDD7FC163B30C1A3A3929D1A(L_159, Enumerable_ToArray_TisIGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_m8A9221E5C3D95DC2EDD7FC163B30C1A3A3929D1A_RuntimeMethod_var);
		NullCheck(L_157);
		StlRootModel_set_AllGeometryGroups_m6754461757172DBEB0986B7A916BBBFFDAD9E173_inline(L_157, (RuntimeObject*)L_160, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_161 = V_4;
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_162 = V_4;
		NullCheck(L_162);
		RuntimeObject* L_163;
		L_163 = StlModel_get_Children_mCC99BF668D976265E2897D884E1080A14B8219BB_inline(L_162, NULL);
		NullCheck(L_161);
		StlRootModel_set_AllModels_mED5ABBDE53F3952C9E492CC70CADE0692BA9A7BF_inline(L_161, L_163, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_164 = V_4;
		V_32 = L_164;
		goto IL_043b;
	}

IL_043b:
	{
		RuntimeObject* L_165 = V_32;
		return L_165;
	}
}
// System.Void TriLibCore.Stl.StlProcessor::AddModel(TriLibCore.Interfaces.IModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlProcessor_AddModel_mD074A15E2C251A343E4D0B955563EE85DE37FAF8 (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, RuntimeObject* ___parent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m53D84560875155F383C73DA9027DE4CC7AC985D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* V_1 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = StlProcessor_GetActiveGeometryGroup_m7383FCD039100A7331EF5BD0528FCE078F143CDE(__this, NULL);
		V_0 = L_0;
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_1 = (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA*)il2cpp_codegen_object_new(StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StlModel__ctor_m6E2FE456538DB2C0EB1C98D3144C193CF6157D1C(L_1, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_2);
		StlModel_set_LocalScale_m0709587074F69EEB1DCF2F639318F4C9BE86D840_inline(L_2, L_3, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_4 = L_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_4);
		StlModel_set_LocalRotation_mE9C27ACA9705C49C2EEEEC359CF9195A0EADF5B9_inline(L_4, L_5, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_6 = L_4;
		RuntimeObject* L_7 = V_0;
		NullCheck(L_6);
		StlModel_set_GeometryGroup_m32211C6B2E30C396961F21D3E5E81B925AAA444E_inline(L_6, L_7, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_8 = L_6;
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String TriLibCore.Interfaces.IObject::get_Name() */, IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_8);
		StlModel_set_Name_mF8213C9BAD85BC9320C876C41ABBF594327F2814_inline(L_8, L_10, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_11 = L_8;
		NullCheck(L_11);
		StlModel_set_Visibility_m635AB4624DB7C9E08470800B07ABABD332AF0E01_inline(L_11, (bool)1, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_12 = L_11;
		RuntimeObject* L_13 = ___parent0;
		NullCheck(L_12);
		StlModel_set_Parent_m5FFEE1518EF3F12F1378AECEAEB41466CCA20DCE_inline(L_12, L_13, NULL);
		V_1 = L_12;
		Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* L_14 = __this->____models_4;
		String_t* L_15 = __this->____groupName_6;
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_16 = V_1;
		NullCheck(L_14);
		Dictionary_2_Add_m53D84560875155F383C73DA9027DE4CC7AC985D5(L_14, L_15, L_16, Dictionary_2_Add_m53D84560875155F383C73DA9027DE4CC7AC985D5_RuntimeMethod_var);
		return;
	}
}
// System.Boolean TriLibCore.Stl.StlProcessor::IsBinary(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlProcessor_IsBinary_m4A82EE25ADBA42AEB6202DCBA35C3A72B239D920 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B8_0 = 0;
	{
		V_0 = (bool)0;
		goto IL_003c;
	}

IL_0005:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		goto IL_0041;
	}

IL_0018:
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)32))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)13))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)10))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_7 = V_1;
		G_B8_0 = ((((int32_t)((((int32_t)L_7) == ((int32_t)((int32_t)9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0032;
	}

IL_0031:
	{
		G_B8_0 = 0;
	}

IL_0032:
	{
		V_3 = (bool)G_B8_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_0041;
	}

IL_003b:
	{
	}

IL_003c:
	{
		V_4 = (bool)1;
		goto IL_0005;
	}

IL_0041:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = ___stream0;
		NullCheck(L_9);
		int64_t L_10;
		L_10 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(30 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_9, ((int64_t)0), 0);
		bool L_11 = V_0;
		V_5 = L_11;
		goto IL_0050;
	}

IL_0050:
	{
		bool L_12 = V_5;
		return L_12;
	}
}
// System.Collections.IEnumerator TriLibCore.Stl.StlProcessor::Process_Coroutine(TriLibCore.AssetLoaderContext,TriLibCore.Stl.Reader.StlReader,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_Process_Coroutine_m9CA1D10D853020C43766103AFE7A02E44142CB88 (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ____assetLoaderContext0, StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* ___stlReader1, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CProcess_CoroutineU3Ed__35_tC5008D73142E8CB387527E2710DD67853C659773_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CProcess_CoroutineU3Ed__35_tC5008D73142E8CB387527E2710DD67853C659773* L_0 = (U3CProcess_CoroutineU3Ed__35_tC5008D73142E8CB387527E2710DD67853C659773*)il2cpp_codegen_object_new(U3CProcess_CoroutineU3Ed__35_tC5008D73142E8CB387527E2710DD67853C659773_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CProcess_CoroutineU3Ed__35__ctor_m21918F42D289C8109FA0DE78809C610718B8E69E(L_0, 0, NULL);
		U3CProcess_CoroutineU3Ed__35_tC5008D73142E8CB387527E2710DD67853C659773* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_5), (void*)__this);
		U3CProcess_CoroutineU3Ed__35_tC5008D73142E8CB387527E2710DD67853C659773* L_2 = L_1;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_3 = ____assetLoaderContext0;
		NullCheck(L_2);
		L_2->____assetLoaderContext_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____assetLoaderContext_2), (void*)L_3);
		U3CProcess_CoroutineU3Ed__35_tC5008D73142E8CB387527E2710DD67853C659773* L_4 = L_2;
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_5 = ___stlReader1;
		NullCheck(L_4);
		L_4->___stlReader_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___stlReader_3), (void*)L_5);
		U3CProcess_CoroutineU3Ed__35_tC5008D73142E8CB387527E2710DD67853C659773* L_6 = L_4;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = ___stream2;
		NullCheck(L_6);
		L_6->___stream_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___stream_4), (void*)L_7);
		return L_6;
	}
}
// System.Collections.IEnumerator TriLibCore.Stl.StlProcessor::ParseBinary_Coroutine(TriLibCore.AssetLoaderContext,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_ParseBinary_Coroutine_m45A8201A38497E973F10C1CDA2C99FEBA4641D03 (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ____assetLoaderContext0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CParseBinary_CoroutineU3Ed__36_t9316974EF4D1C437F9E5335DFC9AD7528F2976F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CParseBinary_CoroutineU3Ed__36_t9316974EF4D1C437F9E5335DFC9AD7528F2976F3* L_0 = (U3CParseBinary_CoroutineU3Ed__36_t9316974EF4D1C437F9E5335DFC9AD7528F2976F3*)il2cpp_codegen_object_new(U3CParseBinary_CoroutineU3Ed__36_t9316974EF4D1C437F9E5335DFC9AD7528F2976F3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CParseBinary_CoroutineU3Ed__36__ctor_m2E4A7EB319DCF322A7E14719553205AE4DA475FC(L_0, 0, NULL);
		U3CParseBinary_CoroutineU3Ed__36_t9316974EF4D1C437F9E5335DFC9AD7528F2976F3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_4), (void*)__this);
		U3CParseBinary_CoroutineU3Ed__36_t9316974EF4D1C437F9E5335DFC9AD7528F2976F3* L_2 = L_1;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_3 = ____assetLoaderContext0;
		NullCheck(L_2);
		L_2->____assetLoaderContext_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____assetLoaderContext_2), (void*)L_3);
		U3CParseBinary_CoroutineU3Ed__36_t9316974EF4D1C437F9E5335DFC9AD7528F2976F3* L_4 = L_2;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = ___stream1;
		NullCheck(L_4);
		L_4->___stream_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___stream_3), (void*)L_5);
		return L_4;
	}
}
// System.Collections.IEnumerator TriLibCore.Stl.StlProcessor::ParseASCII_Coroutine(TriLibCore.AssetLoaderContext,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_ParseASCII_Coroutine_m79A91F30728603BF4A3A7A83A827DCE37F525A4A (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ____assetLoaderContext0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CParseASCII_CoroutineU3Ed__37_t2025851D54681DED612B7A7309F1BB0236E5CD89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CParseASCII_CoroutineU3Ed__37_t2025851D54681DED612B7A7309F1BB0236E5CD89* L_0 = (U3CParseASCII_CoroutineU3Ed__37_t2025851D54681DED612B7A7309F1BB0236E5CD89*)il2cpp_codegen_object_new(U3CParseASCII_CoroutineU3Ed__37_t2025851D54681DED612B7A7309F1BB0236E5CD89_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CParseASCII_CoroutineU3Ed__37__ctor_m1AA0B0409D4E8B3230EC1552FAF1D3B7F59F53ED(L_0, 0, NULL);
		U3CParseASCII_CoroutineU3Ed__37_t2025851D54681DED612B7A7309F1BB0236E5CD89* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_4), (void*)__this);
		U3CParseASCII_CoroutineU3Ed__37_t2025851D54681DED612B7A7309F1BB0236E5CD89* L_2 = L_1;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_3 = ____assetLoaderContext0;
		NullCheck(L_2);
		L_2->____assetLoaderContext_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____assetLoaderContext_2), (void*)L_3);
		U3CParseASCII_CoroutineU3Ed__37_t2025851D54681DED612B7A7309F1BB0236E5CD89* L_4 = L_2;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = ___stream1;
		NullCheck(L_4);
		L_4->___stream_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___stream_3), (void*)L_5);
		return L_4;
	}
}
// System.Void TriLibCore.Stl.StlProcessor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlProcessor__ctor_m900A44553FC03D3F3F05833E176C5456FF72A390 (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m16C7DB0395DCD9EF714A07CDB8934C3FCAE7F50C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5F5C68AF90E49C38EB7E07DDE14E85B7C3875390_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983* L_0 = (Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983*)il2cpp_codegen_object_new(Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m16C7DB0395DCD9EF714A07CDB8934C3FCAE7F50C(L_0, Dictionary_2__ctor_m16C7DB0395DCD9EF714A07CDB8934C3FCAE7F50C_RuntimeMethod_var);
		__this->____geometryGroups_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____geometryGroups_3), (void*)L_0);
		Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* L_1 = (Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B*)il2cpp_codegen_object_new(Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m5F5C68AF90E49C38EB7E07DDE14E85B7C3875390(L_1, Dictionary_2__ctor_m5F5C68AF90E49C38EB7E07DDE14E85B7C3875390_RuntimeMethod_var);
		__this->____models_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____models_4), (void*)L_1);
		__this->____groupName_6 = _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____groupName_6), (void*)_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		__this->____lastLoopNumber_8 = (-1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->____partColor_21 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->____facetColor_22 = L_3;
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
// System.Void TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseASCII_CoroutineU3Ed__37__ctor_m1AA0B0409D4E8B3230EC1552FAF1D3B7F59F53ED (U3CParseASCII_CoroutineU3Ed__37_t2025851D54681DED612B7A7309F1BB0236E5CD89* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseASCII_CoroutineU3Ed__37_System_IDisposable_Dispose_mA4051438B1C4EBA36D4BB64A39B72268C1FA9815 (U3CParseASCII_CoroutineU3Ed__37_t2025851D54681DED612B7A7309F1BB0236E5CD89* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CParseASCII_CoroutineU3Ed__37_MoveNext_mFD03B1BA77B49CAC8EF6DD82A3D8F82CF9197E28 (U3CParseASCII_CoroutineU3Ed__37_t2025851D54681DED612B7A7309F1BB0236E5CD89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m2CEBA9C111276D8D06435752E5C5B3598E722CBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m56D477CD7C6E64384E53F8B4C44C151CB9CADA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisIGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_m8A9221E5C3D95DC2EDD7FC163B30C1A3A3929D1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisIModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_m8A288987F91069D02641D435D479CADC11764605_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	String_t* G_B23_0 = NULL;
	StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* G_B23_1 = NULL;
	String_t* G_B22_0 = NULL;
	StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* G_B22_1 = NULL;
	int32_t G_B45_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_05a8;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_3 = __this->___U3CU3E4__this_4;
		NullCheck(L_3);
		L_3->____loopNumber_11 = 0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___stream_3;
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_5 = (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5*)il2cpp_codegen_object_new(StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		StlStreamReader__ctor_m1DC2CC738B9E91B86FE02E6BFD2FA36770C08BE2(L_5, L_4, NULL);
		__this->___U3CstlStreamReaderU3E5__1_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstlStreamReaderU3E5__1_5), (void*)L_5);
		__this->___U3CvertexIndexU3E5__2_6 = 0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___U3CtempVerticesU3E5__3_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtempVerticesU3E5__3_7), (void*)L_6);
		__this->___U3CmodelAddedU3E5__4_8 = (bool)0;
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_7 = (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142*)il2cpp_codegen_object_new(StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		StlRootModel__ctor_mF3CCCD9F9A1339A398A4FA1EAA0D00B3AD7BB737(L_7, NULL);
		__this->___U3CrootModelU3E5__5_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrootModelU3E5__5_9), (void*)L_7);
		__this->___U3ClastPercU3E5__6_10 = (0.0f);
		goto IL_05db;
	}

IL_0075:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_8 = __this->___U3CstlStreamReaderU3E5__1_5;
		NullCheck(L_8);
		int64_t L_9;
		L_9 = StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822(L_8, (bool)0, (bool)0, NULL);
		__this->___U3CcommandU3E5__7_11 = L_9;
		int64_t L_10 = __this->___U3CcommandU3E5__7_11;
		V_1 = L_10;
		int64_t L_11 = V_1;
		__this->___U3CU3Es__9_13 = L_11;
		int64_t L_12 = __this->___U3CU3Es__9_13;
		V_2 = L_12;
		int64_t L_13 = V_2;
		if ((((int64_t)L_13) > ((int64_t)((int64_t)-1367968407301361207LL))))
		{
			goto IL_00e0;
		}
	}
	{
		int64_t L_14 = V_2;
		if ((((int64_t)L_14) == ((int64_t)((int64_t)-5513532493766152582LL))))
		{
			goto IL_022a;
		}
	}
	{
		goto IL_00bb;
	}

IL_00bb:
	{
		int64_t L_15 = V_2;
		if ((((int64_t)L_15) == ((int64_t)((int64_t)-4898810643358303851LL))))
		{
			goto IL_0248;
		}
	}
	{
		goto IL_00cc;
	}

IL_00cc:
	{
		int64_t L_16 = V_2;
		if ((((int64_t)L_16) == ((int64_t)((int64_t)-1367968407301361207LL))))
		{
			goto IL_0286;
		}
	}
	{
		goto IL_0518;
	}

IL_00e0:
	{
		int64_t L_17 = V_2;
		if ((((int64_t)L_17) == ((int64_t)((int64_t)7096547112153259250LL))))
		{
			goto IL_013e;
		}
	}
	{
		goto IL_00ee;
	}

IL_00ee:
	{
		int64_t L_18 = V_2;
		if ((((int64_t)L_18) == ((int64_t)((int64_t)7096547112162183094LL))))
		{
			goto IL_01d3;
		}
	}
	{
		goto IL_00ff;
	}

IL_00ff:
	{
		int64_t L_19 = V_2;
		if ((((int64_t)L_19) == ((int64_t)((int64_t)7096547112165690854LL))))
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0518;
	}

IL_0110:
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_20 = __this->___U3CU3E4__this_4;
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_21 = __this->___U3CstlStreamReaderU3E5__1_5;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = StlStreamReader_ReadTokenAsString_m48318F7F8AD205DB62D73904EDFFD9EED1C7396D(L_21, (bool)0, (bool)1, NULL);
		String_t* L_23 = L_22;
		G_B22_0 = L_23;
		G_B22_1 = L_20;
		if (L_23)
		{
			G_B23_0 = L_23;
			G_B23_1 = L_20;
			goto IL_012d;
		}
	}
	{
		G_B23_0 = _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
		G_B23_1 = G_B22_1;
	}

IL_012d:
	{
		NullCheck(G_B23_1);
		G_B23_1->____groupName_6 = G_B23_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B23_1->____groupName_6), (void*)G_B23_0);
		__this->___U3CmodelAddedU3E5__4_8 = (bool)0;
		goto IL_0542;
	}

IL_013e:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_24 = __this->___U3CstlStreamReaderU3E5__1_5;
		NullCheck(L_24);
		int64_t L_25;
		L_25 = StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822(L_24, (bool)1, (bool)0, NULL);
		__this->___U3CnormalU3E5__10_14 = L_25;
		int64_t L_26 = __this->___U3CnormalU3E5__10_14;
		V_3 = (bool)((((int32_t)((((int64_t)L_26) == ((int64_t)((int64_t)-1367968407521166068LL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_0176;
		}
	}
	{
		Exception_t* L_28 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_28);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE21886A8FD3908720B58122F94229E548DD3A51F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CParseASCII_CoroutineU3Ed__37_MoveNext_mFD03B1BA77B49CAC8EF6DD82A3D8F82CF9197E28_RuntimeMethod_var)));
	}

IL_0176:
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_29 = __this->___U3CU3E4__this_4;
		NullCheck(L_29);
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_30 = L_29->____reader_5;
		NullCheck(L_30);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_31;
		L_31 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_30, NULL);
		NullCheck(L_31);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_32 = L_31->___Options_34;
		NullCheck(L_32);
		bool L_33 = L_32->___ImportNormals_23;
		V_4 = L_33;
		bool L_34 = V_4;
		if (!L_34)
		{
			goto IL_01b0;
		}
	}
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_35 = __this->___U3CU3E4__this_4;
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_36 = __this->___U3CstlStreamReaderU3E5__1_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = StlProcessor_ReadVector3_mD41B92963A4FC7C7BA2170A47130B00B0A6B1973(L_36, NULL);
		NullCheck(L_35);
		L_35->____facetNormal_12 = L_37;
		goto IL_01ce;
	}

IL_01b0:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_38 = __this->___U3CstlStreamReaderU3E5__1_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = StlProcessor_ReadVector3_mD41B92963A4FC7C7BA2170A47130B00B0A6B1973(L_38, NULL);
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_40 = __this->___U3CU3E4__this_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_40);
		L_40->____facetNormal_12 = L_41;
	}

IL_01ce:
	{
		goto IL_0542;
	}

IL_01d3:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_42 = __this->___U3CstlStreamReaderU3E5__1_5;
		NullCheck(L_42);
		int64_t L_43;
		L_43 = StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822(L_42, (bool)1, (bool)0, NULL);
		__this->___U3CloopU3E5__11_15 = L_43;
		int64_t L_44 = __this->___U3CloopU3E5__11_15;
		V_5 = (bool)((((int32_t)((((int64_t)L_44) == ((int64_t)((int64_t)6774539739450461193LL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_5;
		if (!L_45)
		{
			goto IL_020d;
		}
	}
	{
		Exception_t* L_46 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_46);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_46, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral795FA97334306AE47C0C9744A2642732E6FED22D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CParseASCII_CoroutineU3Ed__37_MoveNext_mFD03B1BA77B49CAC8EF6DD82A3D8F82CF9197E28_RuntimeMethod_var)));
	}

IL_020d:
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_47 = __this->___U3CU3E4__this_4;
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_48 = __this->___U3CU3E4__this_4;
		NullCheck(L_48);
		int32_t L_49 = L_48->____loopNumber_11;
		NullCheck(L_47);
		L_47->____loopNumber_11 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_0542;
	}

IL_022a:
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_50 = __this->___U3CU3E4__this_4;
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_51 = __this->___U3CU3E4__this_4;
		NullCheck(L_51);
		int32_t L_52 = L_51->____loopNumber_11;
		NullCheck(L_50);
		L_50->____loopNumber_11 = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		goto IL_0542;
	}

IL_0248:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_53 = __this->___U3CstlStreamReaderU3E5__1_5;
		NullCheck(L_53);
		int64_t L_54;
		L_54 = StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822(L_53, (bool)0, (bool)0, NULL);
		bool L_55 = __this->___U3CmodelAddedU3E5__4_8;
		V_6 = (bool)((((int32_t)L_55) == ((int32_t)0))? 1 : 0);
		bool L_56 = V_6;
		if (!L_56)
		{
			goto IL_0281;
		}
	}
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_57 = __this->___U3CU3E4__this_4;
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_58 = __this->___U3CrootModelU3E5__5_9;
		NullCheck(L_57);
		StlProcessor_AddModel_mD074A15E2C251A343E4D0B955563EE85DE37FAF8(L_57, L_58, NULL);
		__this->___U3CmodelAddedU3E5__4_8 = (bool)1;
	}

IL_0281:
	{
		goto IL_0542;
	}

IL_0286:
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_59 = __this->___U3CU3E4__this_4;
		NullCheck(L_59);
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_60 = L_59->____reader_5;
		NullCheck(L_60);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_61;
		L_61 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_60, NULL);
		NullCheck(L_61);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_62 = L_61->___Options_34;
		NullCheck(L_62);
		bool L_63 = L_62->___ImportMeshes_10;
		V_7 = L_63;
		bool L_64 = V_7;
		if (!L_64)
		{
			goto IL_0516;
		}
	}
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_65 = __this->___U3CstlStreamReaderU3E5__1_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = StlProcessor_ReadVector3_mD41B92963A4FC7C7BA2170A47130B00B0A6B1973(L_65, NULL);
		__this->___U3CvalueU3E5__12_16 = L_66;
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_67 = __this->___U3CU3E4__this_4;
		NullCheck(L_67);
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_68 = L_67->____reader_5;
		NullCheck(L_68);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_69;
		L_69 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_68, NULL);
		NullCheck(L_69);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_70 = L_69->___Options_34;
		NullCheck(L_70);
		float L_71 = L_70->___ScaleFactor_5;
		__this->___U3CscaleU3E5__13_17 = L_71;
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_72 = __this->___U3CU3E4__this_4;
		NullCheck(L_72);
		RuntimeObject* L_73;
		L_73 = StlProcessor_GetActiveGeometryGroup_m7383FCD039100A7331EF5BD0528FCE078F143CDE(L_72, NULL);
		__this->___U3CgeometryGroupU3E5__14_18 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgeometryGroupU3E5__14_18), (void*)L_73);
		int32_t L_74 = __this->___U3CvertexIndexU3E5__2_6;
		V_8 = L_74;
		int32_t L_75 = V_8;
		__this->___U3CvertexIndexU3E5__2_6 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		int32_t L_76 = V_8;
		__this->___U3CfinalIndexU3E5__15_19 = ((int32_t)(L_76%3));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_77 = __this->___U3CtempVerticesU3E5__3_7;
		int32_t L_78 = __this->___U3CfinalIndexU3E5__15_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = __this->___U3CvalueU3E5__12_16;
		float L_80 = __this->___U3CscaleU3E5__13_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_79, L_80, NULL);
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(L_78), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_81);
		int32_t L_82 = __this->___U3CfinalIndexU3E5__15_19;
		V_9 = (bool)((((int32_t)L_82) == ((int32_t)2))? 1 : 0);
		bool L_83 = V_9;
		if (!L_83)
		{
			goto IL_0502;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		bool L_84 = ((StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields*)il2cpp_codegen_static_fields_for(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var))->___LoadWithYUp_11;
		V_10 = L_84;
		bool L_85 = V_10;
		if (!L_85)
		{
			goto IL_0362;
		}
	}
	{
		__this->___U3Cindex0U3E5__16_20 = 2;
		__this->___U3Cindex1U3E5__17_21 = 1;
		__this->___U3Cindex2U3E5__18_22 = 0;
		goto IL_0379;
	}

IL_0362:
	{
		__this->___U3Cindex0U3E5__16_20 = 0;
		__this->___U3Cindex1U3E5__17_21 = 1;
		__this->___U3Cindex2U3E5__18_22 = 2;
	}

IL_0379:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_86 = __this->___U3CtempVerticesU3E5__3_7;
		NullCheck(L_86);
		int32_t L_87 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_89 = __this->___U3CtempVerticesU3E5__3_7;
		NullCheck(L_89);
		int32_t L_90 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_92 = __this->___U3CtempVerticesU3E5__3_7;
		NullCheck(L_92);
		int32_t L_93 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = StlProcessor_GetNormal_mAEB43873CA99A50EFBEE382491E9C211BF3AEDC4(L_88, L_91, L_94, NULL);
		__this->___U3CcalculatedNormalU3E5__19_23 = L_95;
		il2cpp_codegen_runtime_class_init_inline(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		bool L_96 = ((StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields*)il2cpp_codegen_static_fields_for(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var))->___FixInfacingNormals_10;
		if (!L_96)
		{
			goto IL_03ce;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = __this->___U3CcalculatedNormalU3E5__19_23;
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_98 = __this->___U3CU3E4__this_4;
		NullCheck(L_98);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99 = L_98->____facetNormal_12;
		float L_100;
		L_100 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_97, L_99, NULL);
		G_B45_0 = ((((float)L_100) > ((float)(0.0f)))? 1 : 0);
		goto IL_03cf;
	}

IL_03ce:
	{
		G_B45_0 = 1;
	}

IL_03cf:
	{
		V_11 = (bool)G_B45_0;
		bool L_101 = V_11;
		if (!L_101)
		{
			goto IL_0469;
		}
	}
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_102 = __this->___U3CU3E4__this_4;
		RuntimeObject* L_103 = __this->___U3CgeometryGroupU3E5__14_18;
		RuntimeObject* L_104 = __this->___U3CgeometryGroupU3E5__14_18;
		NullCheck(L_104);
		int32_t L_105;
		L_105 = InterfaceFuncInvoker0< int32_t >::Invoke(46 /* System.Int32 TriLibCore.Interfaces.IGeometryGroup::get_VerticesDataCount() */, IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_il2cpp_TypeInfo_var, L_104);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_106 = __this->___U3CtempVerticesU3E5__3_7;
		int32_t L_107 = __this->___U3Cindex2U3E5__18_22;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		NullCheck(L_102);
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(L_102, L_103, L_105, L_109, NULL);
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_110 = __this->___U3CU3E4__this_4;
		RuntimeObject* L_111 = __this->___U3CgeometryGroupU3E5__14_18;
		RuntimeObject* L_112 = __this->___U3CgeometryGroupU3E5__14_18;
		NullCheck(L_112);
		int32_t L_113;
		L_113 = InterfaceFuncInvoker0< int32_t >::Invoke(46 /* System.Int32 TriLibCore.Interfaces.IGeometryGroup::get_VerticesDataCount() */, IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_il2cpp_TypeInfo_var, L_112);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_114 = __this->___U3CtempVerticesU3E5__3_7;
		int32_t L_115 = __this->___U3Cindex1U3E5__17_21;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		NullCheck(L_110);
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(L_110, L_111, L_113, L_117, NULL);
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_118 = __this->___U3CU3E4__this_4;
		RuntimeObject* L_119 = __this->___U3CgeometryGroupU3E5__14_18;
		RuntimeObject* L_120 = __this->___U3CgeometryGroupU3E5__14_18;
		NullCheck(L_120);
		int32_t L_121;
		L_121 = InterfaceFuncInvoker0< int32_t >::Invoke(46 /* System.Int32 TriLibCore.Interfaces.IGeometryGroup::get_VerticesDataCount() */, IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_il2cpp_TypeInfo_var, L_120);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_122 = __this->___U3CtempVerticesU3E5__3_7;
		int32_t L_123 = __this->___U3Cindex0U3E5__16_20;
		NullCheck(L_122);
		int32_t L_124 = L_123;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		NullCheck(L_118);
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(L_118, L_119, L_121, L_125, NULL);
		goto IL_04f5;
	}

IL_0469:
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_126 = __this->___U3CU3E4__this_4;
		RuntimeObject* L_127 = __this->___U3CgeometryGroupU3E5__14_18;
		RuntimeObject* L_128 = __this->___U3CgeometryGroupU3E5__14_18;
		NullCheck(L_128);
		int32_t L_129;
		L_129 = InterfaceFuncInvoker0< int32_t >::Invoke(46 /* System.Int32 TriLibCore.Interfaces.IGeometryGroup::get_VerticesDataCount() */, IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_il2cpp_TypeInfo_var, L_128);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_130 = __this->___U3CtempVerticesU3E5__3_7;
		int32_t L_131 = __this->___U3Cindex0U3E5__16_20;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		NullCheck(L_126);
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(L_126, L_127, L_129, L_133, NULL);
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_134 = __this->___U3CU3E4__this_4;
		RuntimeObject* L_135 = __this->___U3CgeometryGroupU3E5__14_18;
		RuntimeObject* L_136 = __this->___U3CgeometryGroupU3E5__14_18;
		NullCheck(L_136);
		int32_t L_137;
		L_137 = InterfaceFuncInvoker0< int32_t >::Invoke(46 /* System.Int32 TriLibCore.Interfaces.IGeometryGroup::get_VerticesDataCount() */, IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_il2cpp_TypeInfo_var, L_136);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_138 = __this->___U3CtempVerticesU3E5__3_7;
		int32_t L_139 = __this->___U3Cindex1U3E5__17_21;
		NullCheck(L_138);
		int32_t L_140 = L_139;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		NullCheck(L_134);
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(L_134, L_135, L_137, L_141, NULL);
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_142 = __this->___U3CU3E4__this_4;
		RuntimeObject* L_143 = __this->___U3CgeometryGroupU3E5__14_18;
		RuntimeObject* L_144 = __this->___U3CgeometryGroupU3E5__14_18;
		NullCheck(L_144);
		int32_t L_145;
		L_145 = InterfaceFuncInvoker0< int32_t >::Invoke(46 /* System.Int32 TriLibCore.Interfaces.IGeometryGroup::get_VerticesDataCount() */, IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_il2cpp_TypeInfo_var, L_144);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_146 = __this->___U3CtempVerticesU3E5__3_7;
		int32_t L_147 = __this->___U3Cindex2U3E5__18_22;
		NullCheck(L_146);
		int32_t L_148 = L_147;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		NullCheck(L_142);
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(L_142, L_143, L_145, L_149, NULL);
	}

IL_04f5:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_150 = (&__this->___U3CcalculatedNormalU3E5__19_23);
		il2cpp_codegen_initobj(L_150, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
	}

IL_0502:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_151 = (&__this->___U3CvalueU3E5__12_16);
		il2cpp_codegen_initobj(L_151, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		__this->___U3CgeometryGroupU3E5__14_18 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgeometryGroupU3E5__14_18), (void*)(RuntimeObject*)NULL);
	}

IL_0516:
	{
		goto IL_0542;
	}

IL_0518:
	{
		goto IL_0530;
	}

IL_051b:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_152 = __this->___U3CstlStreamReaderU3E5__1_5;
		NullCheck(L_152);
		int64_t L_153;
		L_153 = StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822(L_152, (bool)0, (bool)0, NULL);
		__this->___U3CcommandU3E5__7_11 = L_153;
	}

IL_0530:
	{
		int64_t L_154 = __this->___U3CcommandU3E5__7_11;
		V_12 = (bool)((!(((uint64_t)L_154) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_155 = V_12;
		if (L_155)
		{
			goto IL_051b;
		}
	}
	{
		goto IL_0542;
	}

IL_0542:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_156 = __this->___U3CstlStreamReaderU3E5__1_5;
		NullCheck(L_156);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_157;
		L_157 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(15 /* System.IO.Stream System.IO.StreamReader::get_BaseStream() */, L_156);
		NullCheck(L_157);
		int64_t L_158;
		L_158 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_157);
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_159 = __this->___U3CstlStreamReaderU3E5__1_5;
		NullCheck(L_159);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_160;
		L_160 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(15 /* System.IO.Stream System.IO.StreamReader::get_BaseStream() */, L_159);
		NullCheck(L_160);
		int64_t L_161;
		L_161 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_160);
		__this->___U3CpercU3E5__8_12 = ((float)(((float)L_158)/((float)L_161)));
		float L_162 = __this->___U3CpercU3E5__8_12;
		float L_163 = __this->___U3ClastPercU3E5__6_10;
		V_13 = (bool)((((float)L_162) > ((float)((float)il2cpp_codegen_add(L_163, (0.330000013f)))))? 1 : 0);
		bool L_164 = V_13;
		if (!L_164)
		{
			goto IL_05da;
		}
	}
	{
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_165 = __this->____assetLoaderContext_2;
		NullCheck(L_165);
		bool L_166;
		L_166 = AssetLoaderContext_get_MainThreadStall_m053EBE09FC53155F1737B7291186187FD61CBFAE(L_165, NULL);
		V_14 = L_166;
		bool L_167 = V_14;
		if (!L_167)
		{
			goto IL_05b0;
		}
	}
	{
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_05a8:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_05b0:
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_168 = __this->___U3CU3E4__this_4;
		NullCheck(L_168);
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_169 = L_168->____reader_5;
		float L_170 = __this->___U3CpercU3E5__8_12;
		NullCheck(L_169);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_169, L_170, 0, (0.0f), NULL);
		float L_171 = __this->___U3CpercU3E5__8_12;
		__this->___U3ClastPercU3E5__6_10 = L_171;
	}

IL_05da:
	{
	}

IL_05db:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_172 = __this->___U3CstlStreamReaderU3E5__1_5;
		NullCheck(L_172);
		bool L_173;
		L_173 = StreamReader_get_EndOfStream_mAE054431BF21158178EAA2A6872F14A9ED6A3C3E(L_172, NULL);
		V_15 = (bool)((((int32_t)L_173) == ((int32_t)0))? 1 : 0);
		bool L_174 = V_15;
		if (L_174)
		{
			goto IL_0075;
		}
	}
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_175 = __this->___U3CU3E4__this_4;
		NullCheck(L_175);
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_176 = L_175->____reader_5;
		NullCheck(L_176);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_176, (1.0f), 0, (0.0f), NULL);
		bool L_177 = __this->___U3CmodelAddedU3E5__4_8;
		V_16 = (bool)((((int32_t)L_177) == ((int32_t)0))? 1 : 0);
		bool L_178 = V_16;
		if (!L_178)
		{
			goto IL_0631;
		}
	}
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_179 = __this->___U3CU3E4__this_4;
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_180 = __this->___U3CrootModelU3E5__5_9;
		NullCheck(L_179);
		StlProcessor_AddModel_mD074A15E2C251A343E4D0B955563EE85DE37FAF8(L_179, L_180, NULL);
	}

IL_0631:
	{
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_181 = __this->___U3CrootModelU3E5__5_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_182;
		L_182 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_181);
		StlModel_set_LocalScale_m0709587074F69EEB1DCF2F639318F4C9BE86D840_inline(L_181, L_182, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_183 = __this->___U3CrootModelU3E5__5_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_184;
		L_184 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_183);
		StlModel_set_LocalRotation_mE9C27ACA9705C49C2EEEEC359CF9195A0EADF5B9_inline(L_183, L_184, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_185 = __this->___U3CrootModelU3E5__5_9;
		NullCheck(L_185);
		StlModel_set_Visibility_m635AB4624DB7C9E08470800B07ABABD332AF0E01_inline(L_185, (bool)1, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_186 = __this->___U3CrootModelU3E5__5_9;
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_187 = __this->___U3CU3E4__this_4;
		NullCheck(L_187);
		Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* L_188 = L_187->____models_4;
		NullCheck(L_188);
		ValueCollection_t52D0D70A98CDE4A09BB9B7D39C2159B31ECAE027* L_189;
		L_189 = Dictionary_2_get_Values_m56D477CD7C6E64384E53F8B4C44C151CB9CADA48(L_188, Dictionary_2_get_Values_m56D477CD7C6E64384E53F8B4C44C151CB9CADA48_RuntimeMethod_var);
		IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76* L_190;
		L_190 = Enumerable_ToArray_TisIModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_m8A288987F91069D02641D435D479CADC11764605(L_189, Enumerable_ToArray_TisIModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_m8A288987F91069D02641D435D479CADC11764605_RuntimeMethod_var);
		NullCheck(L_186);
		StlModel_set_Children_m8C26332902AFB18940DAB4060807171A0364EA1E_inline(L_186, (RuntimeObject*)L_190, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_191 = __this->___U3CrootModelU3E5__5_9;
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_192 = __this->___U3CU3E4__this_4;
		NullCheck(L_192);
		Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983* L_193 = L_192->____geometryGroups_3;
		NullCheck(L_193);
		ValueCollection_tCCCE4A1A9D973B131015A437780697A2155EAACD* L_194;
		L_194 = Dictionary_2_get_Values_m2CEBA9C111276D8D06435752E5C5B3598E722CBE(L_193, Dictionary_2_get_Values_m2CEBA9C111276D8D06435752E5C5B3598E722CBE_RuntimeMethod_var);
		IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711* L_195;
		L_195 = Enumerable_ToArray_TisIGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_m8A9221E5C3D95DC2EDD7FC163B30C1A3A3929D1A(L_194, Enumerable_ToArray_TisIGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_m8A9221E5C3D95DC2EDD7FC163B30C1A3A3929D1A_RuntimeMethod_var);
		NullCheck(L_191);
		StlRootModel_set_AllGeometryGroups_m6754461757172DBEB0986B7A916BBBFFDAD9E173_inline(L_191, (RuntimeObject*)L_195, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_196 = __this->___U3CrootModelU3E5__5_9;
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_197 = __this->___U3CrootModelU3E5__5_9;
		NullCheck(L_197);
		RuntimeObject* L_198;
		L_198 = StlModel_get_Children_mCC99BF668D976265E2897D884E1080A14B8219BB_inline(L_197, NULL);
		NullCheck(L_196);
		StlRootModel_set_AllModels_mED5ABBDE53F3952C9E492CC70CADE0692BA9A7BF_inline(L_196, L_198, NULL);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_199 = __this->____assetLoaderContext_2;
		NullCheck(L_199);
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* L_200 = L_199->___Stack_39;
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_201 = __this->___U3CrootModelU3E5__5_9;
		NullCheck(L_200);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_200, L_201);
		return (bool)0;
	}
}
// System.Object TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CParseASCII_CoroutineU3Ed__37_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m569D67FA949662EC13279B20FF0FC25508610A83 (U3CParseASCII_CoroutineU3Ed__37_t2025851D54681DED612B7A7309F1BB0236E5CD89* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseASCII_CoroutineU3Ed__37_System_Collections_IEnumerator_Reset_m8C0BA189A26DD87C3F8C84739159726E5417E7A4 (U3CParseASCII_CoroutineU3Ed__37_t2025851D54681DED612B7A7309F1BB0236E5CD89* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CParseASCII_CoroutineU3Ed__37_System_Collections_IEnumerator_Reset_m8C0BA189A26DD87C3F8C84739159726E5417E7A4_RuntimeMethod_var)));
	}
}
// System.Object TriLibCore.Stl.StlProcessor/<ParseASCII_Coroutine>d__37::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CParseASCII_CoroutineU3Ed__37_System_Collections_IEnumerator_get_Current_mCD13507089881F44B1A6C718B12F43B58640F24C (U3CParseASCII_CoroutineU3Ed__37_t2025851D54681DED612B7A7309F1BB0236E5CD89* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseBinary_CoroutineU3Ed__36__ctor_m2E4A7EB319DCF322A7E14719553205AE4DA475FC (U3CParseBinary_CoroutineU3Ed__36_t9316974EF4D1C437F9E5335DFC9AD7528F2976F3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseBinary_CoroutineU3Ed__36_System_IDisposable_Dispose_mE1F4AC34A5428BCE240D5DD7AC5A7DE42529D5E5 (U3CParseBinary_CoroutineU3Ed__36_t9316974EF4D1C437F9E5335DFC9AD7528F2976F3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CParseBinary_CoroutineU3Ed__36_MoveNext_mD983B34654838E9E1D8841401B04AECFB19614E1 (U3CParseBinary_CoroutineU3Ed__36_t9316974EF4D1C437F9E5335DFC9AD7528F2976F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m53D84560875155F383C73DA9027DE4CC7AC985D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m2CEBA9C111276D8D06435752E5C5B3598E722CBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m56D477CD7C6E64384E53F8B4C44C151CB9CADA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisIGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_m8A9221E5C3D95DC2EDD7FC163B30C1A3A3929D1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisIModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_m8A288987F91069D02641D435D479CADC11764605_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F4B57D5A155D08E686DEA8A1E7C1992F9C3675B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B10_0 = 0;
	StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* G_B25_0 = NULL;
	StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* G_B24_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B26_0;
	memset((&G_B26_0), 0, sizeof(G_B26_0));
	StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* G_B26_1 = NULL;
	int32_t G_B31_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_0602;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		__this->___U3CisMaterialiseU3E5__1_5 = (bool)0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->___stream_3;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_4, L_3, NULL);
		__this->___U3CbinaryReaderU3E5__2_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbinaryReaderU3E5__2_6), (void*)L_4);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_5 = __this->___U3CbinaryReaderU3E5__2_6;
		NullCheck(L_5);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6;
		L_6 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(25 /* System.Char[] System.IO.BinaryReader::ReadChars(System.Int32) */, L_5, 6);
		String_t* L_7;
		L_7 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_6, NULL);
		__this->___U3CcolorU3E5__3_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcolorU3E5__3_7), (void*)L_7);
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_8 = __this->___U3CU3E4__this_4;
		NullCheck(L_8);
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_9 = L_8->____reader_5;
		NullCheck(L_9);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_10;
		L_10 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_9, NULL);
		NullCheck(L_10);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_11 = L_10->___Options_34;
		NullCheck(L_11);
		bool L_12 = L_11->___ImportColors_19;
		if (!L_12)
		{
			goto IL_0080;
		}
	}
	{
		String_t* L_13 = __this->___U3CcolorU3E5__3_7;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral4F4B57D5A155D08E686DEA8A1E7C1992F9C3675B, NULL);
		G_B10_0 = ((int32_t)(L_14));
		goto IL_0081;
	}

IL_0080:
	{
		G_B10_0 = 0;
	}

IL_0081:
	{
		V_1 = (bool)G_B10_0;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_012f;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_16 = __this->___U3CbinaryReaderU3E5__2_6;
		NullCheck(L_16);
		uint8_t L_17;
		L_17 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_16);
		__this->___U3CrU3E5__9_13 = L_17;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_18 = __this->___U3CbinaryReaderU3E5__2_6;
		NullCheck(L_18);
		uint8_t L_19;
		L_19 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_18);
		__this->___U3CgU3E5__10_14 = L_19;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_20 = __this->___U3CbinaryReaderU3E5__2_6;
		NullCheck(L_20);
		uint8_t L_21;
		L_21 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_20);
		__this->___U3CbU3E5__11_15 = L_21;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_22 = __this->___U3CbinaryReaderU3E5__2_6;
		NullCheck(L_22);
		uint8_t L_23;
		L_23 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_22);
		__this->___U3CaU3E5__12_16 = L_23;
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_24 = __this->___U3CU3E4__this_4;
		uint8_t L_25 = __this->___U3CrU3E5__9_13;
		uint8_t L_26 = __this->___U3CgU3E5__10_14;
		uint8_t L_27 = __this->___U3CbU3E5__11_15;
		uint8_t L_28 = __this->___U3CaU3E5__12_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29;
		memset((&L_29), 0, sizeof(L_29));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_29), ((float)(((float)L_25)/(255.0f))), ((float)(((float)L_26)/(255.0f))), ((float)(((float)L_27)/(255.0f))), ((float)(((float)L_28)/(255.0f))), /*hidden argument*/NULL);
		NullCheck(L_24);
		L_24->____partColor_21 = L_29;
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_30 = __this->___U3CU3E4__this_4;
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_31 = __this->___U3CU3E4__this_4;
		NullCheck(L_31);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32 = L_31->____partColor_21;
		NullCheck(L_30);
		L_30->____facetColor_22 = L_32;
		__this->___U3CisMaterialiseU3E5__1_5 = (bool)1;
	}

IL_012f:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_33 = __this->___stream_3;
		NullCheck(L_33);
		int64_t L_34;
		L_34 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(30 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_33, ((int64_t)((int32_t)80)), 0);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_35 = __this->___U3CbinaryReaderU3E5__2_6;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_35);
		__this->___U3CtriangleCountU3E5__4_8 = L_36;
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_37 = __this->___U3CU3E4__this_4;
		NullCheck(L_37);
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_38 = L_37->____reader_5;
		NullCheck(L_38);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_39;
		L_39 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_38, NULL);
		NullCheck(L_39);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_40 = L_39->___Options_34;
		NullCheck(L_40);
		float L_41 = L_40->___ScaleFactor_5;
		__this->___U3CscaleU3E5__5_9 = L_41;
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_42 = __this->___U3CU3E4__this_4;
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = StlProcessor_GetActiveGeometryGroup_m7383FCD039100A7331EF5BD0528FCE078F143CDE(L_42, NULL);
		__this->___U3CgeometryGroupU3E5__6_10 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgeometryGroupU3E5__6_10), (void*)L_43);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_44 = (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142*)il2cpp_codegen_object_new(StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		StlRootModel__ctor_mF3CCCD9F9A1339A398A4FA1EAA0D00B3AD7BB737(L_44, NULL);
		__this->___U3CrootModelU3E5__7_11 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrootModelU3E5__7_11), (void*)L_44);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_45 = (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA*)il2cpp_codegen_object_new(StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		StlModel__ctor_m6E2FE456538DB2C0EB1C98D3144C193CF6157D1C(L_45, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_46 = L_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_46);
		StlModel_set_LocalScale_m0709587074F69EEB1DCF2F639318F4C9BE86D840_inline(L_46, L_47, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_48 = L_46;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49;
		L_49 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_48);
		StlModel_set_LocalRotation_mE9C27ACA9705C49C2EEEEC359CF9195A0EADF5B9_inline(L_48, L_49, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_50 = L_48;
		RuntimeObject* L_51 = __this->___U3CgeometryGroupU3E5__6_10;
		NullCheck(L_50);
		StlModel_set_GeometryGroup_m32211C6B2E30C396961F21D3E5E81B925AAA444E_inline(L_50, L_51, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_52 = L_50;
		RuntimeObject* L_53 = __this->___U3CgeometryGroupU3E5__6_10;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String TriLibCore.Interfaces.IObject::get_Name() */, IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var, L_53);
		NullCheck(L_52);
		StlModel_set_Name_mF8213C9BAD85BC9320C876C41ABBF594327F2814_inline(L_52, L_54, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_55 = L_52;
		NullCheck(L_55);
		StlModel_set_Visibility_m635AB4624DB7C9E08470800B07ABABD332AF0E01_inline(L_55, (bool)1, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_56 = L_55;
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_57 = __this->___U3CrootModelU3E5__7_11;
		NullCheck(L_56);
		StlModel_set_Parent_m5FFEE1518EF3F12F1378AECEAEB41466CCA20DCE_inline(L_56, L_57, NULL);
		__this->___U3CmodelU3E5__8_12 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmodelU3E5__8_12), (void*)L_56);
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_58 = __this->___U3CU3E4__this_4;
		NullCheck(L_58);
		Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* L_59 = L_58->____models_4;
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_60 = __this->___U3CmodelU3E5__8_12;
		NullCheck(L_60);
		String_t* L_61;
		L_61 = StlModel_get_Name_m25E9B99DE29E6200C71933B5E52D158E28DCD941_inline(L_60, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_62 = __this->___U3CmodelU3E5__8_12;
		NullCheck(L_59);
		Dictionary_2_Add_m53D84560875155F383C73DA9027DE4CC7AC985D5(L_59, L_61, L_62, Dictionary_2_Add_m53D84560875155F383C73DA9027DE4CC7AC985D5_RuntimeMethod_var);
		__this->___U3CiU3E5__13_17 = 0;
		goto IL_05c9;
	}

IL_0211:
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_63 = __this->___U3CU3E4__this_4;
		NullCheck(L_63);
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_64 = L_63->____reader_5;
		NullCheck(L_64);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_65;
		L_65 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_64, NULL);
		NullCheck(L_65);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_66 = L_65->___Options_34;
		NullCheck(L_66);
		bool L_67 = L_66->___ImportNormals_23;
		V_2 = L_67;
		bool L_68 = V_2;
		if (!L_68)
		{
			goto IL_024a;
		}
	}
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_69 = __this->___U3CU3E4__this_4;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_70 = __this->___U3CbinaryReaderU3E5__2_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = StlProcessor_ReadVector3_m08382B6430274ECDE456A6119A9E608EB5F92F87(L_70, NULL);
		NullCheck(L_69);
		L_69->____facetNormal_12 = L_71;
		goto IL_0268;
	}

IL_024a:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_72 = __this->___U3CbinaryReaderU3E5__2_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = StlProcessor_ReadVector3_m08382B6430274ECDE456A6119A9E608EB5F92F87(L_72, NULL);
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_74 = __this->___U3CU3E4__this_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_74);
		L_74->____facetNormal_12 = L_75;
	}

IL_0268:
	{
		il2cpp_codegen_runtime_class_init_inline(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		bool L_76 = ((StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields*)il2cpp_codegen_static_fields_for(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var))->___LoadWithYUp_11;
		V_3 = L_76;
		bool L_77 = V_3;
		if (!L_77)
		{
			goto IL_02c9;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_78 = __this->___U3CbinaryReaderU3E5__2_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = StlProcessor_ReadVector3_m08382B6430274ECDE456A6119A9E608EB5F92F87(L_78, NULL);
		float L_80 = __this->___U3CscaleU3E5__5_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_79, L_80, NULL);
		__this->___U3CvertexCU3E5__16_20 = L_81;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_82 = __this->___U3CbinaryReaderU3E5__2_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = StlProcessor_ReadVector3_m08382B6430274ECDE456A6119A9E608EB5F92F87(L_82, NULL);
		float L_84 = __this->___U3CscaleU3E5__5_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_83, L_84, NULL);
		__this->___U3CvertexBU3E5__15_19 = L_85;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_86 = __this->___U3CbinaryReaderU3E5__2_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = StlProcessor_ReadVector3_m08382B6430274ECDE456A6119A9E608EB5F92F87(L_86, NULL);
		float L_88 = __this->___U3CscaleU3E5__5_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_87, L_88, NULL);
		__this->___U3CvertexAU3E5__14_18 = L_89;
		goto IL_031f;
	}

IL_02c9:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_90 = __this->___U3CbinaryReaderU3E5__2_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = StlProcessor_ReadVector3_m08382B6430274ECDE456A6119A9E608EB5F92F87(L_90, NULL);
		float L_92 = __this->___U3CscaleU3E5__5_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_91, L_92, NULL);
		__this->___U3CvertexAU3E5__14_18 = L_93;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_94 = __this->___U3CbinaryReaderU3E5__2_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = StlProcessor_ReadVector3_m08382B6430274ECDE456A6119A9E608EB5F92F87(L_94, NULL);
		float L_96 = __this->___U3CscaleU3E5__5_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_95, L_96, NULL);
		__this->___U3CvertexBU3E5__15_19 = L_97;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_98 = __this->___U3CbinaryReaderU3E5__2_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = StlProcessor_ReadVector3_m08382B6430274ECDE456A6119A9E608EB5F92F87(L_98, NULL);
		float L_100 = __this->___U3CscaleU3E5__5_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_99, L_100, NULL);
		__this->___U3CvertexCU3E5__16_20 = L_101;
	}

IL_031f:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_102 = __this->___U3CbinaryReaderU3E5__2_6;
		NullCheck(L_102);
		int16_t L_103;
		L_103 = VirtualFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_102);
		__this->___U3CattributesU3E5__17_21 = L_103;
		int16_t L_104 = __this->___U3CattributesU3E5__17_21;
		V_4 = (bool)((!(((uint32_t)L_104) <= ((uint32_t)0)))? 1 : 0);
		bool L_105 = V_4;
		if (!L_105)
		{
			goto IL_0447;
		}
	}
	{
		bool L_106 = __this->___U3CisMaterialiseU3E5__1_5;
		V_5 = L_106;
		bool L_107 = V_5;
		if (!L_107)
		{
			goto IL_03a3;
		}
	}
	{
		int16_t L_108 = __this->___U3CattributesU3E5__17_21;
		__this->___U3CrU3E5__18_22 = ((int32_t)((int32_t)L_108&((int32_t)31)));
		int16_t L_109 = __this->___U3CattributesU3E5__17_21;
		__this->___U3CgU3E5__19_23 = ((int32_t)(((int32_t)((int32_t)L_109&((int32_t)992)))>>5));
		int16_t L_110 = __this->___U3CattributesU3E5__17_21;
		__this->___U3CbU3E5__20_24 = ((int32_t)(((int32_t)((int32_t)L_110&((int32_t)31744)))>>((int32_t)10)));
		int16_t L_111 = __this->___U3CattributesU3E5__17_21;
		__this->___U3CuseU3E5__21_25 = (bool)((((int32_t)((int32_t)(((int32_t)((int32_t)L_111&((int32_t)32768)))>>((int32_t)15)))) == ((int32_t)0))? 1 : 0);
		goto IL_03f5;
	}

IL_03a3:
	{
		int16_t L_112 = __this->___U3CattributesU3E5__17_21;
		__this->___U3CbU3E5__20_24 = ((int32_t)(((int32_t)((int32_t)L_112&((int32_t)31744)))>>((int32_t)10)));
		int16_t L_113 = __this->___U3CattributesU3E5__17_21;
		__this->___U3CgU3E5__19_23 = ((int32_t)(((int32_t)((int32_t)L_113&((int32_t)992)))>>5));
		int16_t L_114 = __this->___U3CattributesU3E5__17_21;
		__this->___U3CrU3E5__18_22 = ((int32_t)((int32_t)L_114&((int32_t)31)));
		int16_t L_115 = __this->___U3CattributesU3E5__17_21;
		__this->___U3CuseU3E5__21_25 = (bool)((((int32_t)((int32_t)(((int32_t)((int32_t)L_115&((int32_t)32768)))>>((int32_t)15)))) == ((int32_t)1))? 1 : 0);
	}

IL_03f5:
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_116 = __this->___U3CU3E4__this_4;
		bool L_117 = __this->___U3CuseU3E5__21_25;
		G_B24_0 = L_116;
		if (L_117)
		{
			G_B25_0 = L_116;
			goto IL_0410;
		}
	}
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_118 = __this->___U3CU3E4__this_4;
		NullCheck(L_118);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_119 = L_118->____partColor_21;
		G_B26_0 = L_119;
		G_B26_1 = G_B24_0;
		goto IL_0441;
	}

IL_0410:
	{
		int32_t L_120 = __this->___U3CrU3E5__18_22;
		int32_t L_121 = __this->___U3CgU3E5__19_23;
		int32_t L_122 = __this->___U3CbU3E5__20_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_123;
		memset((&L_123), 0, sizeof(L_123));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_123), ((float)(((float)L_120)/(32.0f))), ((float)(((float)L_121)/(32.0f))), ((float)(((float)L_122)/(32.0f))), (1.0f), /*hidden argument*/NULL);
		G_B26_0 = L_123;
		G_B26_1 = G_B25_0;
	}

IL_0441:
	{
		NullCheck(G_B26_1);
		G_B26_1->____facetColor_22 = G_B26_0;
	}

IL_0447:
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_124 = __this->___U3CU3E4__this_4;
		NullCheck(L_124);
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_125 = L_124->____reader_5;
		NullCheck(L_125);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_126;
		L_126 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_125, NULL);
		NullCheck(L_126);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_127 = L_126->___Options_34;
		NullCheck(L_127);
		bool L_128 = L_127->___ImportMeshes_10;
		V_6 = L_128;
		bool L_129 = V_6;
		if (!L_129)
		{
			goto IL_0592;
		}
	}
	{
		int32_t L_130 = __this->___U3CiU3E5__13_17;
		__this->___U3CbaseIndexU3E5__22_26 = ((int32_t)il2cpp_codegen_multiply(L_130, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131 = __this->___U3CvertexAU3E5__14_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132 = __this->___U3CvertexBU3E5__15_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133 = __this->___U3CvertexCU3E5__16_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134;
		L_134 = StlProcessor_GetNormal_mAEB43873CA99A50EFBEE382491E9C211BF3AEDC4(L_131, L_132, L_133, NULL);
		__this->___U3CcalculatedNormalU3E5__23_27 = L_134;
		il2cpp_codegen_runtime_class_init_inline(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		bool L_135 = ((StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields*)il2cpp_codegen_static_fields_for(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var))->___FixInfacingNormals_10;
		if (!L_135)
		{
			goto IL_04bc;
		}
	}
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_136 = __this->___U3CU3E4__this_4;
		NullCheck(L_136);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137 = L_136->____facetNormal_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138 = __this->___U3CcalculatedNormalU3E5__23_27;
		float L_139;
		L_139 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_137, L_138, NULL);
		G_B31_0 = ((((float)L_139) > ((float)(0.0f)))? 1 : 0);
		goto IL_04bd;
	}

IL_04bc:
	{
		G_B31_0 = 1;
	}

IL_04bd:
	{
		V_7 = (bool)G_B31_0;
		bool L_140 = V_7;
		if (!L_140)
		{
			goto IL_0525;
		}
	}
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_141 = __this->___U3CU3E4__this_4;
		RuntimeObject* L_142 = __this->___U3CgeometryGroupU3E5__6_10;
		int32_t L_143 = __this->___U3CbaseIndexU3E5__22_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144 = __this->___U3CvertexCU3E5__16_20;
		NullCheck(L_141);
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(L_141, L_142, L_143, L_144, NULL);
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_145 = __this->___U3CU3E4__this_4;
		RuntimeObject* L_146 = __this->___U3CgeometryGroupU3E5__6_10;
		int32_t L_147 = __this->___U3CbaseIndexU3E5__22_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148 = __this->___U3CvertexBU3E5__15_19;
		NullCheck(L_145);
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(L_145, L_146, ((int32_t)il2cpp_codegen_add(L_147, 1)), L_148, NULL);
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_149 = __this->___U3CU3E4__this_4;
		RuntimeObject* L_150 = __this->___U3CgeometryGroupU3E5__6_10;
		int32_t L_151 = __this->___U3CbaseIndexU3E5__22_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152 = __this->___U3CvertexAU3E5__14_18;
		NullCheck(L_149);
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(L_149, L_150, ((int32_t)il2cpp_codegen_add(L_151, 2)), L_152, NULL);
		goto IL_0585;
	}

IL_0525:
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_153 = __this->___U3CU3E4__this_4;
		RuntimeObject* L_154 = __this->___U3CgeometryGroupU3E5__6_10;
		int32_t L_155 = __this->___U3CbaseIndexU3E5__22_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_156 = __this->___U3CvertexAU3E5__14_18;
		NullCheck(L_153);
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(L_153, L_154, ((int32_t)il2cpp_codegen_add(L_155, 2)), L_156, NULL);
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_157 = __this->___U3CU3E4__this_4;
		RuntimeObject* L_158 = __this->___U3CgeometryGroupU3E5__6_10;
		int32_t L_159 = __this->___U3CbaseIndexU3E5__22_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_160 = __this->___U3CvertexBU3E5__15_19;
		NullCheck(L_157);
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(L_157, L_158, ((int32_t)il2cpp_codegen_add(L_159, 1)), L_160, NULL);
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_161 = __this->___U3CU3E4__this_4;
		RuntimeObject* L_162 = __this->___U3CgeometryGroupU3E5__6_10;
		int32_t L_163 = __this->___U3CbaseIndexU3E5__22_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_164 = __this->___U3CvertexCU3E5__16_20;
		NullCheck(L_161);
		StlProcessor_AddOutputVertex_m2625465CC93BE0B4E82EBC175F8CAAD8248D8DB7(L_161, L_162, L_163, L_164, NULL);
	}

IL_0585:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_165 = (&__this->___U3CcalculatedNormalU3E5__23_27);
		il2cpp_codegen_initobj(L_165, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
	}

IL_0592:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_166 = (&__this->___U3CvertexAU3E5__14_18);
		il2cpp_codegen_initobj(L_166, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_167 = (&__this->___U3CvertexBU3E5__15_19);
		il2cpp_codegen_initobj(L_167, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_168 = (&__this->___U3CvertexCU3E5__16_20);
		il2cpp_codegen_initobj(L_168, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		int32_t L_169 = __this->___U3CiU3E5__13_17;
		V_8 = L_169;
		int32_t L_170 = V_8;
		__this->___U3CiU3E5__13_17 = ((int32_t)il2cpp_codegen_add(L_170, 1));
	}

IL_05c9:
	{
		int32_t L_171 = __this->___U3CiU3E5__13_17;
		int32_t L_172 = __this->___U3CtriangleCountU3E5__4_8;
		V_9 = (bool)((((int32_t)L_171) < ((int32_t)L_172))? 1 : 0);
		bool L_173 = V_9;
		if (L_173)
		{
			goto IL_0211;
		}
	}
	{
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_174 = __this->____assetLoaderContext_2;
		NullCheck(L_174);
		bool L_175;
		L_175 = AssetLoaderContext_get_MainThreadStall_m053EBE09FC53155F1737B7291186187FD61CBFAE(L_174, NULL);
		V_10 = L_175;
		bool L_176 = V_10;
		if (!L_176)
		{
			goto IL_060a;
		}
	}
	{
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0602:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_060a:
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_177 = __this->___U3CU3E4__this_4;
		NullCheck(L_177);
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_178 = L_177->____reader_5;
		int32_t L_179 = __this->___U3CtriangleCountU3E5__4_8;
		NullCheck(L_178);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_178, (1.0f), 1, ((float)L_179), NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_180 = __this->___U3CrootModelU3E5__7_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_181;
		L_181 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_180);
		StlModel_set_LocalScale_m0709587074F69EEB1DCF2F639318F4C9BE86D840_inline(L_180, L_181, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_182 = __this->___U3CrootModelU3E5__7_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_183;
		L_183 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_182);
		StlModel_set_LocalRotation_mE9C27ACA9705C49C2EEEEC359CF9195A0EADF5B9_inline(L_182, L_183, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_184 = __this->___U3CrootModelU3E5__7_11;
		NullCheck(L_184);
		StlModel_set_Visibility_m635AB4624DB7C9E08470800B07ABABD332AF0E01_inline(L_184, (bool)1, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_185 = __this->___U3CrootModelU3E5__7_11;
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_186 = __this->___U3CU3E4__this_4;
		NullCheck(L_186);
		Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* L_187 = L_186->____models_4;
		NullCheck(L_187);
		ValueCollection_t52D0D70A98CDE4A09BB9B7D39C2159B31ECAE027* L_188;
		L_188 = Dictionary_2_get_Values_m56D477CD7C6E64384E53F8B4C44C151CB9CADA48(L_187, Dictionary_2_get_Values_m56D477CD7C6E64384E53F8B4C44C151CB9CADA48_RuntimeMethod_var);
		IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76* L_189;
		L_189 = Enumerable_ToArray_TisIModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_m8A288987F91069D02641D435D479CADC11764605(L_188, Enumerable_ToArray_TisIModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_m8A288987F91069D02641D435D479CADC11764605_RuntimeMethod_var);
		NullCheck(L_185);
		StlModel_set_Children_m8C26332902AFB18940DAB4060807171A0364EA1E_inline(L_185, (RuntimeObject*)L_189, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_190 = __this->___U3CrootModelU3E5__7_11;
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_191 = __this->___U3CU3E4__this_4;
		NullCheck(L_191);
		Dictionary_2_t11F334CD06F0CA7F4E6DAC18D5282192E1803983* L_192 = L_191->____geometryGroups_3;
		NullCheck(L_192);
		ValueCollection_tCCCE4A1A9D973B131015A437780697A2155EAACD* L_193;
		L_193 = Dictionary_2_get_Values_m2CEBA9C111276D8D06435752E5C5B3598E722CBE(L_192, Dictionary_2_get_Values_m2CEBA9C111276D8D06435752E5C5B3598E722CBE_RuntimeMethod_var);
		IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711* L_194;
		L_194 = Enumerable_ToArray_TisIGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_m8A9221E5C3D95DC2EDD7FC163B30C1A3A3929D1A(L_193, Enumerable_ToArray_TisIGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_m8A9221E5C3D95DC2EDD7FC163B30C1A3A3929D1A_RuntimeMethod_var);
		NullCheck(L_190);
		StlRootModel_set_AllGeometryGroups_m6754461757172DBEB0986B7A916BBBFFDAD9E173_inline(L_190, (RuntimeObject*)L_194, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_195 = __this->___U3CrootModelU3E5__7_11;
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_196 = __this->___U3CrootModelU3E5__7_11;
		NullCheck(L_196);
		RuntimeObject* L_197;
		L_197 = StlModel_get_Children_mCC99BF668D976265E2897D884E1080A14B8219BB_inline(L_196, NULL);
		NullCheck(L_195);
		StlRootModel_set_AllModels_mED5ABBDE53F3952C9E492CC70CADE0692BA9A7BF_inline(L_195, L_197, NULL);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_198 = __this->____assetLoaderContext_2;
		NullCheck(L_198);
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* L_199 = L_198->___Stack_39;
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_200 = __this->___U3CrootModelU3E5__7_11;
		NullCheck(L_199);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_199, L_200);
		return (bool)0;
	}
}
// System.Object TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CParseBinary_CoroutineU3Ed__36_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEDD482DBDB991C18B7A6B8507DE7ED50D201B169 (U3CParseBinary_CoroutineU3Ed__36_t9316974EF4D1C437F9E5335DFC9AD7528F2976F3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseBinary_CoroutineU3Ed__36_System_Collections_IEnumerator_Reset_mDF7382AFAC6A29591FB0CE6DB51DFA753000ACDC (U3CParseBinary_CoroutineU3Ed__36_t9316974EF4D1C437F9E5335DFC9AD7528F2976F3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CParseBinary_CoroutineU3Ed__36_System_Collections_IEnumerator_Reset_mDF7382AFAC6A29591FB0CE6DB51DFA753000ACDC_RuntimeMethod_var)));
	}
}
// System.Object TriLibCore.Stl.StlProcessor/<ParseBinary_Coroutine>d__36::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CParseBinary_CoroutineU3Ed__36_System_Collections_IEnumerator_get_Current_mE83ECD01F3E563DFC0C88E4888D47D93911EA61A (U3CParseBinary_CoroutineU3Ed__36_t9316974EF4D1C437F9E5335DFC9AD7528F2976F3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void TriLibCore.Stl.StlProcessor/<Process_Coroutine>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcess_CoroutineU3Ed__35__ctor_m21918F42D289C8109FA0DE78809C610718B8E69E (U3CProcess_CoroutineU3Ed__35_tC5008D73142E8CB387527E2710DD67853C659773* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TriLibCore.Stl.StlProcessor/<Process_Coroutine>d__35::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcess_CoroutineU3Ed__35_System_IDisposable_Dispose_mCC5F88FD2C3C4B71901B61E862A315BDCEC5B5BF (U3CProcess_CoroutineU3Ed__35_tC5008D73142E8CB387527E2710DD67853C659773* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TriLibCore.Stl.StlProcessor/<Process_Coroutine>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CProcess_CoroutineU3Ed__35_MoveNext_m3697D30A89766A9BEC083AE982DA10CC93C4A6C3 (U3CProcess_CoroutineU3Ed__35_tC5008D73142E8CB387527E2710DD67853C659773* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRootModel_t83ED40397FD23448FC9A99336523CC7DE8A841BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_00aa;
	}

IL_0022:
	{
		goto IL_010c;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->___U3CU3E1__state_0 = (-1);
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_2 = __this->___U3CU3E4__this_5;
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_3 = __this->___stlReader_3;
		NullCheck(L_2);
		L_2->____reader_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____reader_5), (void*)L_3);
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_4 = __this->___U3CU3E4__this_5;
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_5 = __this->___U3CU3E4__this_5;
		NullCheck(L_5);
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_6 = L_5->____reader_5;
		NullCheck(L_6);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_7;
		L_7 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		bool L_8 = ((StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields*)il2cpp_codegen_static_fields_for(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var))->___ImportNormals_13;
		bool L_9 = ((StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields*)il2cpp_codegen_static_fields_for(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var))->___StoreTriangleIndexInTexCoord0_12;
		HashSet_1_t17CC6C8527489146D9154E22DE059EF4A4550640* L_10;
		L_10 = FlexibleVertexDataUtils_BuildVertexAttributesDictionary_mE29022A53EA93BE64B2E15C35DEDECAEBE16DCC1(L_7, (bool)1, L_8, (bool)0, (bool)0, L_9, (bool)0, (bool)0, (bool)0, (bool)0, (bool)0, NULL);
		NullCheck(L_4);
		L_4->____vertexAttributes_23 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____vertexAttributes_23), (void*)L_10);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = __this->___stream_4;
		bool L_12;
		L_12 = StlProcessor_IsBinary_m4A82EE25ADBA42AEB6202DCBA35C3A72B239D920(L_11, NULL);
		V_1 = L_12;
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_00e5;
		}
	}
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_14 = __this->___U3CU3E4__this_5;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_15 = __this->____assetLoaderContext_2;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16 = __this->___stream_4;
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = StlProcessor_ParseBinary_Coroutine_m45A8201A38497E973F10C1CDA2C99FEBA4641D03(L_14, L_15, L_16, NULL);
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00aa:
	{
		__this->___U3CU3E1__state_0 = (-1);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_18 = __this->____assetLoaderContext_2;
		NullCheck(L_18);
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* L_19 = L_18->___Stack_39;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(16 /* System.Object System.Collections.Stack::Pop() */, L_19);
		__this->___U3CrootModelU3E5__1_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_20, IRootModel_t83ED40397FD23448FC9A99336523CC7DE8A841BB_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrootModelU3E5__1_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_20, IRootModel_t83ED40397FD23448FC9A99336523CC7DE8A841BB_il2cpp_TypeInfo_var)));
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_21 = __this->____assetLoaderContext_2;
		NullCheck(L_21);
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* L_22 = L_21->___Stack_39;
		RuntimeObject* L_23 = __this->___U3CrootModelU3E5__1_6;
		NullCheck(L_22);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_22, L_23);
		return (bool)0;
	}

IL_00e5:
	{
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_24 = __this->___U3CU3E4__this_5;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_25 = __this->____assetLoaderContext_2;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_26 = __this->___stream_4;
		NullCheck(L_24);
		RuntimeObject* L_27;
		L_27 = StlProcessor_ParseASCII_Coroutine_m79A91F30728603BF4A3A7A83A827DCE37F525A4A(L_24, L_25, L_26, NULL);
		__this->___U3CU3E2__current_1 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_27);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_010c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_28 = __this->____assetLoaderContext_2;
		NullCheck(L_28);
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* L_29 = L_28->___Stack_39;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(16 /* System.Object System.Collections.Stack::Pop() */, L_29);
		__this->___U3CrootModelU3E5__2_7 = ((RuntimeObject*)Castclass((RuntimeObject*)L_30, IRootModel_t83ED40397FD23448FC9A99336523CC7DE8A841BB_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrootModelU3E5__2_7), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_30, IRootModel_t83ED40397FD23448FC9A99336523CC7DE8A841BB_il2cpp_TypeInfo_var)));
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_31 = __this->____assetLoaderContext_2;
		NullCheck(L_31);
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* L_32 = L_31->___Stack_39;
		RuntimeObject* L_33 = __this->___U3CrootModelU3E5__2_7;
		NullCheck(L_32);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_32, L_33);
		return (bool)0;
	}
}
// System.Object TriLibCore.Stl.StlProcessor/<Process_Coroutine>d__35::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CProcess_CoroutineU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0F6466C66D8AE4D06BCE2F1C40B0D6C9305E87DB (U3CProcess_CoroutineU3Ed__35_tC5008D73142E8CB387527E2710DD67853C659773* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlProcessor/<Process_Coroutine>d__35::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcess_CoroutineU3Ed__35_System_Collections_IEnumerator_Reset_m1A3748A65C94B94D29214A9A182D1A6E624A10F4 (U3CProcess_CoroutineU3Ed__35_tC5008D73142E8CB387527E2710DD67853C659773* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CProcess_CoroutineU3Ed__35_System_Collections_IEnumerator_Reset_m1A3748A65C94B94D29214A9A182D1A6E624A10F4_RuntimeMethod_var)));
	}
}
// System.Object TriLibCore.Stl.StlProcessor/<Process_Coroutine>d__35::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CProcess_CoroutineU3Ed__35_System_Collections_IEnumerator_get_Current_mA03AB85A3F6B5DA3C1D8E8564C170A6AEB3E504A (U3CProcess_CoroutineU3Ed__35_tC5008D73142E8CB387527E2710DD67853C659773* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Stl.StlRootModel::get_AllModels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlRootModel_get_AllModels_m7B400E2A938FBA1B713F5B638F4D4E5DD1F41320 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllModelsU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlRootModel::set_AllModels(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlRootModel_set_AllModels_mED5ABBDE53F3952C9E492CC70CADE0692BA9A7BF (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllModelsU3Ek__BackingField_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllModelsU3Ek__BackingField_17), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup> TriLibCore.Stl.StlRootModel::get_AllGeometryGroups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlRootModel_get_AllGeometryGroups_m894A6349DF34C591526ED2C3C6E518769A460D57 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllGeometryGroupsU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlRootModel::set_AllGeometryGroups(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlRootModel_set_AllGeometryGroups_m6754461757172DBEB0986B7A916BBBFFDAD9E173 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllGeometryGroupsU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllGeometryGroupsU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation> TriLibCore.Stl.StlRootModel::get_AllAnimations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlRootModel_get_AllAnimations_m983D6197DF21C9AFC9C4ED531E3C3D15CE29A43F (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllAnimationsU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlRootModel::set_AllAnimations(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlRootModel_set_AllAnimations_mF3974A24AAF1B9E02553DB61087FC2B444AB6B16 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllAnimationsU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllAnimationsU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial> TriLibCore.Stl.StlRootModel::get_AllMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlRootModel_get_AllMaterials_m369A2E061EEEBB5FA02C4C55D3E6CAC8536D4677 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllMaterialsU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlRootModel::set_AllMaterials(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlRootModel_set_AllMaterials_mB225832F17CF5D1032E1916BB6FACA683EDB2E84 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllMaterialsU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllMaterialsU3Ek__BackingField_20), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture> TriLibCore.Stl.StlRootModel::get_AllTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlRootModel_get_AllTextures_m43171DBA9C24AB03600029495AF55C695B14C930 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllTexturesU3Ek__BackingField_21;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlRootModel::set_AllTextures(System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlRootModel_set_AllTextures_mC60F360CDA417F4354120731CD90A23491BDA6C3 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllTexturesU3Ek__BackingField_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllTexturesU3Ek__BackingField_21), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ICamera> TriLibCore.Stl.StlRootModel::get_AllCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlRootModel_get_AllCameras_m75A7DE8FE24C05CA5C891F1CED351704E86CB7BF (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllCamerasU3Ek__BackingField_22;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlRootModel::set_AllCameras(System.Collections.Generic.IList`1<TriLibCore.Interfaces.ICamera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlRootModel_set_AllCameras_m2E66426E7AB81C6911695E7B947735D484DB9431 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllCamerasU3Ek__BackingField_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllCamerasU3Ek__BackingField_22), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ILight> TriLibCore.Stl.StlRootModel::get_AllLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlRootModel_get_AllLights_m2BE07C476BA4C56E4167C5C2A1D7449E6F60AEBD (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllLightsU3Ek__BackingField_23;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlRootModel::set_AllLights(System.Collections.Generic.IList`1<TriLibCore.Interfaces.ILight>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlRootModel_set_AllLights_m44C346619F80A9FCFA5979F3BF8033F020FE68A2 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllLightsU3Ek__BackingField_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllLightsU3Ek__BackingField_23), (void*)L_0);
		return;
	}
}
// System.Void TriLibCore.Stl.StlRootModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlRootModel__ctor_mF3CCCD9F9A1339A398A4FA1EAA0D00B3AD7BB737 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, const RuntimeMethod* method) 
{
	{
		StlModel__ctor_m6E2FE456538DB2C0EB1C98D3144C193CF6157D1C(__this, NULL);
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
// System.Int32 TriLibCore.Stl.StlStreamReader::get_Line()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StlStreamReader_get_Line_mE94255EEFEFED4D8DED8AE024CE752F78FD174EC (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLineU3Ek__BackingField_27;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::set_Line(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader_set_Line_mBAF946CC6C4CB5BDC48AC3D5050570286FD0C628 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLineU3Ek__BackingField_27 = L_0;
		return;
	}
}
// System.Int32 TriLibCore.Stl.StlStreamReader::get_Column()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StlStreamReader_get_Column_m78B316197DD99FD46120765F960B450AA0260A91 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0;
		L_0 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(15 /* System.IO.Stream System.IO.StreamReader::get_BaseStream() */, __this);
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		int32_t L_2 = __this->____endOfLinePointer_22;
		return ((int32_t)((int64_t)il2cpp_codegen_subtract(L_1, ((int64_t)L_2))));
	}
}
// System.Single TriLibCore.Stl.StlStreamReader::ReadTokenAsFloat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StlStreamReader_ReadTokenAsFloat_m30C508ABFBF8FF2F47629BCFFB53C042F4B7F551 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, bool ___required0, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		bool L_0 = ___required0;
		int64_t L_1;
		L_1 = StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822(__this, L_0, (bool)0, NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		V_2 = (bool)((((int64_t)L_2) == ((int64_t)((int64_t)0)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		V_3 = (-1.0f);
		goto IL_0058;
	}

IL_001c:
	{
		bool L_4;
		L_4 = StlStreamReader_GetTokenAsFloat_mAA1D75FACB25386AF1A9ED7210239ED0369EDD3F(__this, (&V_1), NULL);
		V_4 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_6;
		L_6 = StlStreamReader_get_Line_mE94255EEFEFED4D8DED8AE024CE752F78FD174EC_inline(__this, NULL);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_7);
		int32_t L_9;
		L_9 = StlStreamReader_get_Column_m78B316197DD99FD46120765F960B450AA0260A91(__this, NULL);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_10);
		String_t* L_12;
		L_12 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E84C7CBF5EA8FD2E1EDA86178896A7CB3F34B81)), L_8, L_11, NULL);
		Exception_t* L_13 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StlStreamReader_ReadTokenAsFloat_m30C508ABFBF8FF2F47629BCFFB53C042F4B7F551_RuntimeMethod_var)));
	}

IL_0054:
	{
		float L_14 = V_1;
		V_3 = L_14;
		goto IL_0058;
	}

IL_0058:
	{
		float L_15 = V_3;
		return L_15;
	}
}
// System.String TriLibCore.Stl.StlStreamReader::ReadTokenAsString(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StlStreamReader_ReadTokenAsString_m48318F7F8AD205DB62D73904EDFFD9EED1C7396D (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, bool ___required0, bool ___ignoreSpaces1, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* G_B3_0 = NULL;
	{
		bool L_0 = ___required0;
		bool L_1 = ___ignoreSpaces1;
		int64_t L_2;
		L_2 = StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822(__this, L_0, L_1, NULL);
		V_0 = L_2;
		int64_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_4;
		L_4 = StlStreamReader_GetTokenAsString_m3B5F90A8A2E6492B1F50E55127380D3CB334E611(__this, NULL);
		G_B3_0 = L_4;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_0016:
	{
		V_1 = G_B3_0;
		goto IL_0019;
	}

IL_0019:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.Boolean TriLibCore.Stl.StlStreamReader::TokenStartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlStreamReader_TokenStartsWith_mA82610E51F82E2B87E0ADE90E499875143738B38 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		String_t* L_0 = ___value0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = __this->____charStream_24;
		NullCheck(L_2);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0054;
	}

IL_001a:
	{
		V_2 = 0;
		goto IL_0041;
	}

IL_001e:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = __this->____charStream_24;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		String_t* L_8 = ___value0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, L_9, NULL);
		V_3 = (bool)((((int32_t)((((int32_t)L_7) == ((int32_t)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_003c;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0054;
	}

IL_003c:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0041:
	{
		int32_t L_13 = V_2;
		String_t* L_14 = ___value0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		V_4 = (bool)((((int32_t)L_13) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_001e;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0054;
	}

IL_0054:
	{
		bool L_17 = V_1;
		return L_17;
	}
}
// System.Int32 TriLibCore.Stl.StlStreamReader::GetCharAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StlStreamReader_GetCharAt_m25F369E411A67D8A5D9B05DAB07A212085346505 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____charStream_24;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.String TriLibCore.Stl.StlStreamReader::GetTokenAsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StlStreamReader_GetTokenAsString_m3B5F90A8A2E6492B1F50E55127380D3CB334E611 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____charStream_24;
		int32_t L_1 = __this->____charPosition_26;
		String_t* L_2;
		L_2 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_0, 0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::UpdateStringFromCharString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader_UpdateStringFromCharString_m807C6BD8C68A20014717D4ED10E7A9A92F431C0D (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____charStream_24;
		int32_t L_1 = __this->____charPosition_26;
		String_t* L_2;
		L_2 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_0, 0, L_1, NULL);
		__this->____charString_25 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charString_25), (void*)L_2);
		return;
	}
}
// System.Boolean TriLibCore.Stl.StlStreamReader::GetTokenAsFloat(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlStreamReader_GetTokenAsFloat_mAA1D75FACB25386AF1A9ED7210239ED0369EDD3F (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, float* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		StlStreamReader_UpdateStringFromCharString_m807C6BD8C68A20014717D4ED10E7A9A92F431C0D(__this, NULL);
		String_t* L_0 = __this->____charString_25;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		float* L_2 = ___value0;
		bool L_3;
		L_3 = Single_TryParse_mFB8CC32F0016FBB6EFCB97953CF3515767EB6431(L_0, ((int32_t)511), L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean TriLibCore.Stl.StlStreamReader::GetTokenAsInt(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlStreamReader_GetTokenAsInt_m4C6E688A16834814001B55475E31CBF196856775 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, int32_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		StlStreamReader_UpdateStringFromCharString_m807C6BD8C68A20014717D4ED10E7A9A92F431C0D(__this, NULL);
		String_t* L_0 = __this->____charString_25;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		int32_t* L_2 = ___value0;
		bool L_3;
		L_3 = Int32_TryParse_mB8E246A7D6D6308EF36DE3473643BDE4CF8F71FF(L_0, ((int32_t)511), L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Int64 TriLibCore.Stl.StlStreamReader::ReadToken(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, bool ___required0, bool ___ignoreSpaces1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	Il2CppChar V_4 = 0x0;
	Il2CppChar V_5 = 0x0;
	Il2CppChar V_6 = 0x0;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	Il2CppChar V_10 = 0x0;
	Il2CppChar V_11 = 0x0;
	Il2CppChar V_12 = 0x0;
	bool V_13 = false;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	int64_t V_17 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B36_0 = 0;
	int64_t G_B41_0 = 0;
	{
		__this->____charPosition_26 = 0;
		V_0 = (bool)1;
		V_1 = (bool)0;
		goto IL_007a;
	}

IL_000e:
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, __this);
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_3 = (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_3 = V_2;
		V_4 = ((int32_t)(uint16_t)L_3);
		Il2CppChar L_4 = V_4;
		V_6 = L_4;
		Il2CppChar L_5 = V_6;
		V_5 = L_5;
		Il2CppChar L_6 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)9))))
		{
			case 0:
			{
				goto IL_0064;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_006e;
			}
			case 3:
			{
				goto IL_006e;
			}
			case 4:
			{
				goto IL_0064;
			}
		}
	}
	{
		goto IL_004e;
	}

IL_004e:
	{
		Il2CppChar L_7 = V_5;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)32))))
		{
			goto IL_0064;
		}
	}
	{
		goto IL_006e;
	}

IL_0056:
	{
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		V_1 = (bool)1;
		V_0 = (bool)0;
		goto IL_0072;
	}

IL_0064:
	{
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		goto IL_0072;
	}

IL_006e:
	{
		V_0 = (bool)0;
		goto IL_0072;
	}

IL_0072:
	{
		goto IL_0079;
	}

IL_0075:
	{
		V_0 = (bool)0;
	}

IL_0079:
	{
	}

IL_007a:
	{
		bool L_10 = V_0;
		V_7 = L_10;
		bool L_11 = V_7;
		if (L_11)
		{
			goto IL_000e;
		}
	}
	{
		bool L_12 = V_1;
		if (L_12)
		{
			goto IL_008f;
		}
	}
	{
		bool L_13;
		L_13 = StreamReader_get_EndOfStream_mAE054431BF21158178EAA2A6872F14A9ED6A3C3E(__this, NULL);
		G_B16_0 = ((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		goto IL_0090;
	}

IL_008f:
	{
		G_B16_0 = 0;
	}

IL_0090:
	{
		V_0 = (bool)G_B16_0;
		goto IL_015a;
	}

IL_0096:
	{
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, __this);
		V_8 = L_14;
		int32_t L_15 = V_8;
		V_9 = (bool)((((int32_t)((((int32_t)L_15) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_9;
		if (!L_16)
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_17 = V_8;
		V_10 = ((int32_t)(uint16_t)L_17);
		Il2CppChar L_18 = V_10;
		V_12 = L_18;
		Il2CppChar L_19 = V_12;
		V_11 = L_19;
		Il2CppChar L_20 = V_11;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_20, ((int32_t)9))))
		{
			case 0:
			{
				goto IL_00f5;
			}
			case 1:
			{
				goto IL_00e6;
			}
			case 2:
			{
				goto IL_012b;
			}
			case 3:
			{
				goto IL_012b;
			}
			case 4:
			{
				goto IL_00eb;
			}
		}
	}
	{
		goto IL_00de;
	}

IL_00de:
	{
		Il2CppChar L_21 = V_11;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)32))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_012b;
	}

IL_00e6:
	{
		V_0 = (bool)0;
		goto IL_0152;
	}

IL_00eb:
	{
		int32_t L_22;
		L_22 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		goto IL_0152;
	}

IL_00f5:
	{
		bool L_23 = ___ignoreSpaces1;
		V_13 = L_23;
		bool L_24 = V_13;
		if (!L_24)
		{
			goto IL_0125;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = __this->____charStream_24;
		int32_t L_26 = __this->____charPosition_26;
		V_14 = L_26;
		int32_t L_27 = V_14;
		__this->____charPosition_26 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		int32_t L_28 = V_14;
		Il2CppChar L_29 = V_10;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (Il2CppChar)L_29);
		int32_t L_30;
		L_30 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		goto IL_0129;
	}

IL_0125:
	{
		V_0 = (bool)0;
	}

IL_0129:
	{
		goto IL_0152;
	}

IL_012b:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_31 = __this->____charStream_24;
		int32_t L_32 = __this->____charPosition_26;
		V_14 = L_32;
		int32_t L_33 = V_14;
		__this->____charPosition_26 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		int32_t L_34 = V_14;
		Il2CppChar L_35 = V_10;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (Il2CppChar)L_35);
		int32_t L_36;
		L_36 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		goto IL_0152;
	}

IL_0152:
	{
		goto IL_0159;
	}

IL_0155:
	{
		V_0 = (bool)0;
	}

IL_0159:
	{
	}

IL_015a:
	{
		bool L_37 = V_0;
		V_15 = L_37;
		bool L_38 = V_15;
		if (L_38)
		{
			goto IL_0096;
		}
	}
	{
		bool L_39 = ___required0;
		if (!L_39)
		{
			goto IL_0172;
		}
	}
	{
		int32_t L_40 = __this->____charPosition_26;
		G_B36_0 = ((((int32_t)L_40) == ((int32_t)0))? 1 : 0);
		goto IL_0173;
	}

IL_0172:
	{
		G_B36_0 = 0;
	}

IL_0173:
	{
		V_16 = (bool)G_B36_0;
		bool L_41 = V_16;
		if (!L_41)
		{
			goto IL_01a0;
		}
	}
	{
		int32_t L_42;
		L_42 = StlStreamReader_get_Line_mE94255EEFEFED4D8DED8AE024CE752F78FD174EC_inline(__this, NULL);
		int32_t L_43 = L_42;
		RuntimeObject* L_44 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_43);
		int32_t L_45;
		L_45 = StlStreamReader_get_Column_m78B316197DD99FD46120765F960B450AA0260A91(__this, NULL);
		int32_t L_46 = L_45;
		RuntimeObject* L_47 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_46);
		String_t* L_48;
		L_48 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3063F5F4FAEA0002A9B169DA0D12D52AC6312C1A)), L_44, L_47, NULL);
		Exception_t* L_49 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_49);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_49, L_48, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_49, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822_RuntimeMethod_var)));
	}

IL_01a0:
	{
		int32_t L_50 = __this->____charPosition_26;
		if (!L_50)
		{
			goto IL_01c5;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_51 = __this->____charStream_24;
		int32_t L_52 = __this->____charPosition_26;
		int32_t L_53;
		L_53 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_52, ((int32_t)1024), NULL);
		int64_t L_54;
		L_54 = HashUtils_GetHash_mA8618222D626B54CD67FF88D56037B6D8024453E((RuntimeObject*)L_51, L_53, NULL);
		G_B41_0 = L_54;
		goto IL_01c7;
	}

IL_01c5:
	{
		G_B41_0 = ((int64_t)0);
	}

IL_01c7:
	{
		V_17 = G_B41_0;
		goto IL_01cb;
	}

IL_01cb:
	{
		int64_t L_55 = V_17;
		return L_55;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_m1DC2CC738B9E91B86FE02E6BFD2FA36770C08BE2 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->____charStream_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charStream_24), (void*)L_0);
		String_t* L_1;
		L_1 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, 0, ((int32_t)1024), NULL);
		__this->____charString_25 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charString_25), (void*)L_1);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___stream0;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(__this, L_2, NULL);
		return;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_m034B0FC2FA03335804B0CA1E4543333C6D55F5D2 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, bool ___detectEncodingFromByteOrderMarks1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->____charStream_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charStream_24), (void*)L_0);
		String_t* L_1;
		L_1 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, 0, ((int32_t)1024), NULL);
		__this->____charString_25 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charString_25), (void*)L_1);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___stream0;
		bool L_3 = ___detectEncodingFromByteOrderMarks1;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_m8ADB6C6B363A2B58B9BC3CB1939A1BABE0BF064A(__this, L_2, L_3, NULL);
		return;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_m439C0BC91DA0056CFE99333A3F46003F3BA249FA (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->____charStream_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charStream_24), (void*)L_0);
		String_t* L_1;
		L_1 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, 0, ((int32_t)1024), NULL);
		__this->____charString_25 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charString_25), (void*)L_1);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___stream0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3 = ___encoding1;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_m7712DDC735E99B6833E2666ADFD8A06CB96A58B1(__this, L_2, L_3, NULL);
		return;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_m32AD5AE244673E0BC38ADAD24556915A774A89F8 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, bool ___detectEncodingFromByteOrderMarks2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->____charStream_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charStream_24), (void*)L_0);
		String_t* L_1;
		L_1 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, 0, ((int32_t)1024), NULL);
		__this->____charString_25 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charString_25), (void*)L_1);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___stream0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3 = ___encoding1;
		bool L_4 = ___detectEncodingFromByteOrderMarks2;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_mE4095A4D9B6E2E82E95CE884443A51635849A740(__this, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_m91248D2367CA954255DC01B02F049CC8771E9669 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, bool ___detectEncodingFromByteOrderMarks2, int32_t ___bufferSize3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->____charStream_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charStream_24), (void*)L_0);
		String_t* L_1;
		L_1 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, 0, ((int32_t)1024), NULL);
		__this->____charString_25 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charString_25), (void*)L_1);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___stream0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3 = ___encoding1;
		bool L_4 = ___detectEncodingFromByteOrderMarks2;
		int32_t L_5 = ___bufferSize3;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_mD3E001CD426B3FE451FFA32E7070E34AC1756673(__this, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_mCA067EB4C12A2A6CBC25626D9FA7B2D91120B776 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->____charStream_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charStream_24), (void*)L_0);
		String_t* L_1;
		L_1 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, 0, ((int32_t)1024), NULL);
		__this->____charString_25 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charString_25), (void*)L_1);
		String_t* L_2 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_m08BA7049EACE030ACE06AB8A8F2CDF2E2AFB55C6(__this, L_2, NULL);
		return;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_m3A735D43486C306A2273D84EE67B895D4FACCF03 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, String_t* ___path0, bool ___detectEncodingFromByteOrderMarks1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->____charStream_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charStream_24), (void*)L_0);
		String_t* L_1;
		L_1 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, 0, ((int32_t)1024), NULL);
		__this->____charString_25 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charString_25), (void*)L_1);
		String_t* L_2 = ___path0;
		bool L_3 = ___detectEncodingFromByteOrderMarks1;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_m0AD738DDCB9A0DE0DFD3DB6B2FE44A41C1EAE677(__this, L_2, L_3, NULL);
		return;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_mE73A348052046582BB63BFA2C531243D92703C81 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, String_t* ___path0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->____charStream_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charStream_24), (void*)L_0);
		String_t* L_1;
		L_1 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, 0, ((int32_t)1024), NULL);
		__this->____charString_25 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charString_25), (void*)L_1);
		String_t* L_2 = ___path0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3 = ___encoding1;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_m3C693DE567FB306355ECD44489F58699105DDE43(__this, L_2, L_3, NULL);
		return;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_mA0A64140AFA965AD7ED23BBEB39083ECFCCF11D8 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, String_t* ___path0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, bool ___detectEncodingFromByteOrderMarks2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->____charStream_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charStream_24), (void*)L_0);
		String_t* L_1;
		L_1 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, 0, ((int32_t)1024), NULL);
		__this->____charString_25 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charString_25), (void*)L_1);
		String_t* L_2 = ___path0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3 = ___encoding1;
		bool L_4 = ___detectEncodingFromByteOrderMarks2;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_mB946592899E393BDD06A093CA3BB87180A590449(__this, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_mD9FB81837EDD35FDEA4EBEEF111A39F0A01E8D83 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, String_t* ___path0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, bool ___detectEncodingFromByteOrderMarks2, int32_t ___bufferSize3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->____charStream_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charStream_24), (void*)L_0);
		String_t* L_1;
		L_1 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, 0, ((int32_t)1024), NULL);
		__this->____charString_25 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charString_25), (void*)L_1);
		String_t* L_2 = ___path0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3 = ___encoding1;
		bool L_4 = ___detectEncodingFromByteOrderMarks2;
		int32_t L_5 = ___bufferSize3;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_mA95373EEF162CF396A1A20CDF039B29AA2D634EF(__this, L_2, L_3, L_4, L_5, NULL);
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
// System.String[] TriLibCore.Stl.Reader.StlReader::GetExtensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* StlReader_GetExtensions_m1CCD113694B899BE07A468EDFE97255DF9032DD9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0F9A5767B5106090414D118D94D8CC4F1F188C6);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralB0F9A5767B5106090414D118D94D8CC4F1F188C6);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB0F9A5767B5106090414D118D94D8CC4F1F188C6);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		return L_2;
	}
}
// System.String TriLibCore.Stl.Reader.StlReader::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StlReader_get_Name_m61B4C05B95CA2ADBE486CD79411580E97CD901BD (StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3007E4D4C9A026A571CD47422BE823D8A32DC2A);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralC3007E4D4C9A026A571CD47422BE823D8A32DC2A;
	}
}
// System.Type TriLibCore.Stl.Reader.StlReader::get_LoadingStepEnumType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* StlReader_get_LoadingStepEnumType_mC352EED7670738FB3BFC9EBB6C98FFC961207830 (StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessingSteps_t0ED2265911192A39BA3686E081CB2D9F4DA68078_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ProcessingSteps_t0ED2265911192A39BA3686E081CB2D9F4DA68078_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.Reader.StlReader::ReadStream(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlReader_ReadStream_m5C6B1D87BD9D396ACAB6F7BDDFC0E3CA6FFA075C (StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext1, String_t* ___filename2, Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___onProgress3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_1 = ___assetLoaderContext1;
		String_t* L_2 = ___filename2;
		Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* L_3 = ___onProgress3;
		RuntimeObject* L_4;
		L_4 = ReaderBase_ReadStream_m725378DF096B29E0DB3BE3FB9E5F1E37747883F4(__this, L_0, L_1, L_2, L_3, NULL);
		ReaderBase_SetupStream_mCDC78453E3657CB3FBB713C40FB50B4941455942(__this, (&___stream0), NULL);
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_5 = (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0*)il2cpp_codegen_object_new(StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		StlProcessor__ctor_m900A44553FC03D3F3F05833E176C5456FF72A390(L_5, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___stream0;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = StlProcessor_Process_mE9579D6B475D44423897704E91BD2A780B6405CF(L_5, __this, L_6, NULL);
		V_0 = L_7;
		ReaderBase_PostProcessModel_mD3BB953DE8BEB5FCA65077455BDA0750F740C667(__this, (&V_0), NULL);
		RuntimeObject* L_8 = V_0;
		V_1 = L_8;
		goto IL_0030;
	}

IL_0030:
	{
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.Reader.StlReader::CreateRootModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlReader_CreateRootModel_m950B39752C2801E33B58DDD686FF8B2DB6F070EC (StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_0 = (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142*)il2cpp_codegen_object_new(StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StlRootModel__ctor_mF3CCCD9F9A1339A398A4FA1EAA0D00B3AD7BB737(L_0, NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.IEnumerator TriLibCore.Stl.Reader.StlReader::ReadStream_Coroutine(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlReader_ReadStream_Coroutine_m6ACCDAF72A3E764E55A9C93661E129B42266A126 (StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext1, String_t* ___filename2, Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___onProgress3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReadStream_CoroutineU3Ed__12_t47E2ED2CC72C13AA1ABAC957297E3E9858D1E9ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReadStream_CoroutineU3Ed__12_t47E2ED2CC72C13AA1ABAC957297E3E9858D1E9ED* L_0 = (U3CReadStream_CoroutineU3Ed__12_t47E2ED2CC72C13AA1ABAC957297E3E9858D1E9ED*)il2cpp_codegen_object_new(U3CReadStream_CoroutineU3Ed__12_t47E2ED2CC72C13AA1ABAC957297E3E9858D1E9ED_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CReadStream_CoroutineU3Ed__12__ctor_m96E417AB31C2ADD608E42A65445F8805391DA0B6(L_0, 0, NULL);
		U3CReadStream_CoroutineU3Ed__12_t47E2ED2CC72C13AA1ABAC957297E3E9858D1E9ED* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_6), (void*)__this);
		U3CReadStream_CoroutineU3Ed__12_t47E2ED2CC72C13AA1ABAC957297E3E9858D1E9ED* L_2 = L_1;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___stream0;
		NullCheck(L_2);
		L_2->___stream_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___stream_2), (void*)L_3);
		U3CReadStream_CoroutineU3Ed__12_t47E2ED2CC72C13AA1ABAC957297E3E9858D1E9ED* L_4 = L_2;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_5 = ___assetLoaderContext1;
		NullCheck(L_4);
		L_4->___assetLoaderContext_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___assetLoaderContext_3), (void*)L_5);
		U3CReadStream_CoroutineU3Ed__12_t47E2ED2CC72C13AA1ABAC957297E3E9858D1E9ED* L_6 = L_4;
		String_t* L_7 = ___filename2;
		NullCheck(L_6);
		L_6->___filename_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___filename_4), (void*)L_7);
		U3CReadStream_CoroutineU3Ed__12_t47E2ED2CC72C13AA1ABAC957297E3E9858D1E9ED* L_8 = L_6;
		Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* L_9 = ___onProgress3;
		NullCheck(L_8);
		L_8->___onProgress_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___onProgress_5), (void*)L_9);
		return L_8;
	}
}
// System.Void TriLibCore.Stl.Reader.StlReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlReader__ctor_m18E86780078062C2974BBA8AF955AFDDD791CAF4 (StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* __this, const RuntimeMethod* method) 
{
	{
		ReaderBase__ctor_m5C4FE7A4BC205B65DAB56FF3CC5202D0B04937DA(__this, NULL);
		return;
	}
}
// System.Void TriLibCore.Stl.Reader.StlReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlReader__cctor_m36423879784E47346E20D042A50BA986672DE63F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields*)il2cpp_codegen_static_fields_for(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var))->___FixInfacingNormals_10 = (bool)0;
		((StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields*)il2cpp_codegen_static_fields_for(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var))->___LoadWithYUp_11 = (bool)0;
		((StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields*)il2cpp_codegen_static_fields_for(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var))->___StoreTriangleIndexInTexCoord0_12 = (bool)1;
		((StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields*)il2cpp_codegen_static_fields_for(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var))->___ImportNormals_13 = (bool)1;
		return;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.Reader.StlReader::<>n__0(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlReader_U3CU3En__0_m24D36B0B8EB0F3D9123BEF38BE42A550EEB9F4B6 (StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext1, String_t* ___filename2, Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___onProgress3, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_1 = ___assetLoaderContext1;
		String_t* L_2 = ___filename2;
		Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* L_3 = ___onProgress3;
		RuntimeObject* L_4;
		L_4 = ReaderBase_ReadStream_m725378DF096B29E0DB3BE3FB9E5F1E37747883F4(__this, L_0, L_1, L_2, L_3, NULL);
		return L_4;
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
// System.Void TriLibCore.Stl.Reader.StlReader/<ReadStream_Coroutine>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadStream_CoroutineU3Ed__12__ctor_m96E417AB31C2ADD608E42A65445F8805391DA0B6 (U3CReadStream_CoroutineU3Ed__12_t47E2ED2CC72C13AA1ABAC957297E3E9858D1E9ED* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TriLibCore.Stl.Reader.StlReader/<ReadStream_Coroutine>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadStream_CoroutineU3Ed__12_System_IDisposable_Dispose_mB9A3CEB3EE5596DB66AA875D7CBF880665C881F0 (U3CReadStream_CoroutineU3Ed__12_t47E2ED2CC72C13AA1ABAC957297E3E9858D1E9ED* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TriLibCore.Stl.Reader.StlReader/<ReadStream_Coroutine>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReadStream_CoroutineU3Ed__12_MoveNext_m957126151C88632E70E8C5ACE6A872D997ED6E64 (U3CReadStream_CoroutineU3Ed__12_t47E2ED2CC72C13AA1ABAC957297E3E9858D1E9ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRootModel_t83ED40397FD23448FC9A99336523CC7DE8A841BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0081;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_3 = __this->___U3CU3E4__this_6;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___stream_2;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_5 = __this->___assetLoaderContext_3;
		String_t* L_6 = __this->___filename_4;
		Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* L_7 = __this->___onProgress_5;
		NullCheck(L_3);
		RuntimeObject* L_8;
		L_8 = StlReader_U3CU3En__0_m24D36B0B8EB0F3D9123BEF38BE42A550EEB9F4B6(L_3, L_4, L_5, L_6, L_7, NULL);
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_9 = __this->___U3CU3E4__this_6;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE** L_10 = (&__this->___stream_2);
		NullCheck(L_9);
		ReaderBase_SetupStream_mCDC78453E3657CB3FBB713C40FB50B4941455942(L_9, L_10, NULL);
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_11 = (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0*)il2cpp_codegen_object_new(StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		StlProcessor__ctor_m900A44553FC03D3F3F05833E176C5456FF72A390(L_11, NULL);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_12 = __this->___assetLoaderContext_3;
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_13 = __this->___U3CU3E4__this_6;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = __this->___stream_2;
		NullCheck(L_11);
		RuntimeObject* L_15;
		L_15 = StlProcessor_Process_Coroutine_m9CA1D10D853020C43766103AFE7A02E44142CB88(L_11, L_12, L_13, L_14, NULL);
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0081:
	{
		__this->___U3CU3E1__state_0 = (-1);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_16 = __this->___assetLoaderContext_3;
		NullCheck(L_16);
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* L_17 = L_16->___Stack_39;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(16 /* System.Object System.Collections.Stack::Pop() */, L_17);
		__this->___U3CmodelU3E5__1_7 = ((RuntimeObject*)Castclass((RuntimeObject*)L_18, IRootModel_t83ED40397FD23448FC9A99336523CC7DE8A841BB_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmodelU3E5__1_7), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_18, IRootModel_t83ED40397FD23448FC9A99336523CC7DE8A841BB_il2cpp_TypeInfo_var)));
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_19 = __this->___U3CU3E4__this_6;
		RuntimeObject** L_20 = (&__this->___U3CmodelU3E5__1_7);
		NullCheck(L_19);
		ReaderBase_PostProcessModel_mD3BB953DE8BEB5FCA65077455BDA0750F740C667(L_19, L_20, NULL);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_21 = __this->___assetLoaderContext_3;
		NullCheck(L_21);
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* L_22 = L_21->___Stack_39;
		RuntimeObject* L_23 = __this->___U3CmodelU3E5__1_7;
		NullCheck(L_22);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_22, L_23);
		return (bool)0;
	}
}
// System.Object TriLibCore.Stl.Reader.StlReader/<ReadStream_Coroutine>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReadStream_CoroutineU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m53F78F44008A5A12D6BE011E00535E2C54899DD6 (U3CReadStream_CoroutineU3Ed__12_t47E2ED2CC72C13AA1ABAC957297E3E9858D1E9ED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.Reader.StlReader/<ReadStream_Coroutine>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadStream_CoroutineU3Ed__12_System_Collections_IEnumerator_Reset_m19DE58B7F32F3F24DDD4E926574C36B54891DE58 (U3CReadStream_CoroutineU3Ed__12_t47E2ED2CC72C13AA1ABAC957297E3E9858D1E9ED* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReadStream_CoroutineU3Ed__12_System_Collections_IEnumerator_Reset_m19DE58B7F32F3F24DDD4E926574C36B54891DE58_RuntimeMethod_var)));
	}
}
// System.Object TriLibCore.Stl.Reader.StlReader/<ReadStream_Coroutine>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReadStream_CoroutineU3Ed__12_System_Collections_IEnumerator_get_Current_mFDD1F8F1FAD9B4CDFE17B6D634DC8538A5268B00 (U3CReadStream_CoroutineU3Ed__12_t47E2ED2CC72C13AA1ABAC957297E3E9858D1E9ED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StlModel_get_Name_m25E9B99DE29E6200C71933B5E52D158E28DCD941_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, const RuntimeMethod* method) 
{
	{
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_0 = __this->___U3CAssetLoaderContextU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___lhs0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___rhs1;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___lhs0;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___rhs1;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___lhs0;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___rhs1;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_LocalScale_m0709587074F69EEB1DCF2F639318F4C9BE86D840_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CLocalScaleU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_LocalRotation_mE9C27ACA9705C49C2EEEEC359CF9195A0EADF5B9_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		__this->___U3CLocalRotationU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_GeometryGroup_m32211C6B2E30C396961F21D3E5E81B925AAA444E_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CGeometryGroupU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGeometryGroupU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_Name_mF8213C9BAD85BC9320C876C41ABBF594327F2814_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_Visibility_m635AB4624DB7C9E08470800B07ABABD332AF0E01_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CVisibilityU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_Parent_m5FFEE1518EF3F12F1378AECEAEB41466CCA20DCE_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CParentU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParentU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_Children_m8C26332902AFB18940DAB4060807171A0364EA1E_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CChildrenU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CChildrenU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlRootModel_set_AllGeometryGroups_m6754461757172DBEB0986B7A916BBBFFDAD9E173_inline (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllGeometryGroupsU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllGeometryGroupsU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* StlModel_get_Children_mCC99BF668D976265E2897D884E1080A14B8219BB_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CChildrenU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlRootModel_set_AllModels_mED5ABBDE53F3952C9E492CC70CADE0692BA9A7BF_inline (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllModelsU3Ek__BackingField_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllModelsU3Ek__BackingField_17), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StlStreamReader_get_Line_mE94255EEFEFED4D8DED8AE024CE752F78FD174EC_inline (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLineU3Ek__BackingField_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
