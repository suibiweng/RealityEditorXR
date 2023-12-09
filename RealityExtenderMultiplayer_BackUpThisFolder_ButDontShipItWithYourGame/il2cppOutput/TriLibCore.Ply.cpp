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
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379;
// System.Collections.Generic.Dictionary`2<System.Int64,TriLibCore.Ply.PlyElement>
struct Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC;
// System.Collections.Generic.Dictionary`2<System.Int64,TriLibCore.Ply.PlyProperty>
struct Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.HashSet`1<UnityEngine.Texture>
struct HashSet_1_t70836788BCAF42568800A162B9F23937F5309AE8;
// System.Collections.Generic.HashSet`1<UnityEngine.Rendering.VertexAttribute>
struct HashSet_1_t17CC6C8527489146D9154E22DE059EF4A4550640;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_tDBA96AAC21C7C21D26B68A9F19E6AE4E015D2316;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Rendering.VertexAttribute>
struct IEqualityComparer_1_tCB8B04D567BFC1D22CB3A6BEBC86439C73A31734;
// System.Collections.Generic.IList`1<UnityEngine.Color>
struct IList_1_t78DB7CACF5BDC17685CA41C8A5615F4AE760CB59;
// System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>
struct IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D;
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
// System.Collections.Generic.IList`1<UnityEngine.Vector2>
struct IList_1_t0DF1E5F56EE58E1A7F1FE26A676FC9FBF4D52A07;
// System.Collections.Generic.IList`1<UnityEngine.Vector3>
struct IList_1_t4EEE459A249DDE104FA2E88234C593389EE5D291;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,TriLibCore.Ply.PlyElement>
struct KeyCollection_t7C7D7EEF9A007C010262940B4AEC7E3061ECFF27;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,TriLibCore.Ply.PlyProperty>
struct KeyCollection_t68BDB70AC2E0E8829F8F9519A28D13E563CF4250;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>>
struct List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF;
// System.Collections.Generic.List`1<System.IDisposable>
struct List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05;
// System.Collections.Generic.List`1<TriLibCore.Interfaces.ITexture>
struct List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>
struct List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB;
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.Queue`1<TriLibCore.Interfaces.IContextualizedAction>
struct Queue_1_t952DE88AF42216B755D09647735E4235DA7138D4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>
struct ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,TriLibCore.Ply.PlyElement>
struct ValueCollection_t16B888ACAE62FB5B6EB90AB83B113259C434EC38;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,TriLibCore.Ply.PlyProperty>
struct ValueCollection_t17A15458500B928C18C734F4964D798B1C114EE9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Action`1<TriLibCore.TextureLoadingContext>[]
struct Action_1U5BU5D_t7706604B0FB5F3A4270EB313972114755AE7A123;
// System.Collections.Generic.Dictionary`2/Entry<System.Int64,TriLibCore.Ply.PlyElement>[]
struct EntryU5BU5D_t7E06B5474CC82D600EDDE8FCB80C8C94FB5F17F0;
// System.Collections.Generic.Dictionary`2/Entry<System.Int64,TriLibCore.Ply.PlyProperty>[]
struct EntryU5BU5D_t91203F7AE9706253C76AD809F11CF3AADD8E3624;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>[]
struct List_1U5BU5D_tA62C7ADB73E706494A104910CBF69BD1EF05FD21;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Rendering.VertexAttribute>[]
struct SlotU5BU5D_tAE07F08746129C3374BC8C791AAFFE4C832AFB2A;
// TriLibCore.Mappers.AnimationClipMapper[]
struct AnimationClipMapperU5BU5D_t8E00A18562A07FD65A6E731D8BA6FF48D80BBFD8;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// LibTessDotNet.ContourVertex[]
struct ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TriLibCore.Interfaces.ITexture[]
struct ITextureU5BU5D_t4FDE2B940C74FD3BE4608C8EBF531CFA2D51FFFA;
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
// TriLibCore.Ply.PlyValue[]
struct PlyValueU5BU5D_tE3742EA175D697AD95C6B319F1C6FC18D7BE0382;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TriLibCore.Mappers.TextureMapper[]
struct TextureMapperU5BU5D_t35F575F1D951980713D2A9E7D85F6AE82ABEA79C;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TriLibCore.AssetLoaderContext
struct AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C;
// TriLibCore.AssetLoaderOptions
struct AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6;
// UnityEngine.Avatar
struct Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F;
// TriLibCore.Utils.BigEndianBinaryReader
struct BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
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
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
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
// TriLibCore.Interfaces.IMaterial
struct IMaterial_t803D44AB6CC3544CCD396131BAE42FB12B128EE5;
// TriLibCore.Interfaces.IModel
struct IModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB;
// TriLibCore.Interfaces.IRootModel
struct IRootModel_t83ED40397FD23448FC9A99336523CC7DE8A841BB;
// TriLibCore.Interfaces.ITexture
struct ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8;
// TriLibCore.Geometries.IVertexData
struct IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75;
// TriLibCore.Geometries.InterpolatedVertex
struct InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// TriLibCore.Mappers.MaterialMapper
struct MaterialMapper_t5FE12658D8C551EE66D3441CFBDEDFAE5B85E692;
// TriLibCore.MaterialMapperContext
struct MaterialMapperContext_t2BDF775C916A28A411960E3787DC933D2E9F0042;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// TriLibCore.Ply.PlyElement
struct PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8;
// TriLibCore.Ply.PlyGeometry
struct PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277;
// TriLibCore.Ply.PlyListProperty
struct PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E;
// TriLibCore.Ply.PlyMaterial
struct PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6;
// TriLibCore.Ply.PlyModel
struct PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2;
// TriLibCore.Ply.PlyProcessor
struct PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F;
// TriLibCore.Ply.PlyProperty
struct PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362;
// TriLibCore.Ply.Reader.PlyReader
struct PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F;
// TriLibCore.Ply.PlyRootModel
struct PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237;
// TriLibCore.Ply.PlyStreamReader
struct PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2;
// TriLibCore.Ply.PlyTexture
struct PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C;
// TriLibCore.Ply.Program
struct Program_tF221987E986ED204179045A85D41CBDBA2C0B625;
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
// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// TriLibCore.TextureDataContext
struct TextureDataContext_tFA6C9B1525B47F9A11A34ACBF3BE7D238187B72D;
// TriLibCore.TextureLoadingContext
struct TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879;
// TriLibCore.Mappers.TextureMapper
struct TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD;
// System.Type
struct Type_t;
// TriLibCore.Mappers.UserPropertiesMapper
struct UserPropertiesMapper_t8437A569EBEB9E02E364D9951BE31F9601C55714;
// TriLibCore.General.VirtualMaterial
struct VirtualMaterial_t0610B7A6460E24DADF06569B4DA1D9FC487A52DB;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71
struct U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3;
// TriLibCore.Ply.Reader.PlyReader/<ReadStream_Coroutine>d__9
struct U3CReadStream_CoroutineU3Ed__9_tAEA60AB19AEF8EFAC748450AF70E3FCB0388A65C;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t77739521790EB7E3F514D44638D90AB775EDE8ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tD4699121F1986A1CF0F28D10E91389DD1C7FDE69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tEF23B8A78E9122DAA952DB1517D31EB7EC90563B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tFC51DD83E1437529AA19214EFADD5EE83B73CD6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t0662D113B996C51F1676FFC848F7B3448D818DB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t4EEE459A249DDE104FA2E88234C593389EE5D291_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRootModel_t83ED40397FD23448FC9A99336523CC7DE8A841BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReadStream_CoroutineU3Ed__9_tAEA60AB19AEF8EFAC748450AF70E3FCB0388A65C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2E7978A9177533BBDC5A8F6FE599F9D9A09593AF;
IL2CPP_EXTERN_C String_t* _stringLiteral3063F5F4FAEA0002A9B169DA0D12D52AC6312C1A;
IL2CPP_EXTERN_C String_t* _stringLiteral31A9B06BE46B0E2BB27797EDC5BAE6C2BFA4ABF0;
IL2CPP_EXTERN_C String_t* _stringLiteral4BEF98DAC2D5CE8B3F877FFD83A459125B80DA8F;
IL2CPP_EXTERN_C String_t* _stringLiteral5D934867D69D7E986A4C224DB49CF270468DE64D;
IL2CPP_EXTERN_C String_t* _stringLiteral711AA001951412D09872DB5FA0B90EA6875A17F9;
IL2CPP_EXTERN_C String_t* _stringLiteral7A12A09E76D9C6C6FAD55C385BB87538EF591395;
IL2CPP_EXTERN_C String_t* _stringLiteralB44FE4F8F197AF89FF50ABAD9C3E395B5E887251;
IL2CPP_EXTERN_C String_t* _stringLiteralE045B603FBBCEA228EE757E3C5C11BD708A2FA34;
IL2CPP_EXTERN_C String_t* _stringLiteralF0A80239664746BB5A8F67D47C690B1D476A5F49;
IL2CPP_EXTERN_C String_t* _stringLiteralF85DFEE8E7ED0F83CF41E7E6F08E0DAACA5F3C3B;
IL2CPP_EXTERN_C const RuntimeMethod* AssetLoaderContext_AllocateNativeArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mAD0223A80367EFCF9C419CD368BD1105DF0F1909_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m13BA45BD072C072ECDC20ED17980959D50DCDEBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m7E3EF4351105771F2D6EB167BE29E7868CFC84F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m181BAACEB7905BC572C38343BF7DDA866E9415FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m843741FC841291E930E4C6AC02FFA6A75E4479D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4795CFCFA1CA4807CD85E1818CEC2A7EBC2E336C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9E31627A68563218A84912174B1A3CCFF5D9D3DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m270BB8BF6E2728FF1BE69D236B3C1BB5E5D60BFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m66C7C3835140D396B2941C5FF726A8435575E421_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mD47C7DCD10B474F8DB55896C6B5F276ACA9E2BC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m16443C4F8A0449761F7E9532DA13EE62BC66A959_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFB43E311F648679BE046A19C9351234B9C43A1CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m355F0050D35C5CECAB616FAD6BD09BCDF75ED2AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3A6AF59F5158004E0E8F5D30912F0B3D578BAD20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m16B76A6F6611FB82F01BB3EA7B36F6BE9AC3B558_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA527966D30259A4C4C030B11F4DFEE3029C1076F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IGeometryGroup_GetGeometry_TisPlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277_mD3FEA40366BC6279E62F5984369E846ADFC1D016_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListUtils_FixIndex_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA7050D5E386674C2B99B38CF8EE1F3E237BAC447_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListUtils_FixIndex_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m80E31C1F387DAA4115F14B5463CADE1DEF297D2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListUtils_FixIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD45AFFDDC575B7D4965A6B58B98B7D88ED4323EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m096BE2FF8568855341E87C1DE6291916F89A8203_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m37A1197D84857A9512633D2FB5380FCAC7AB381E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7C99F2FA69D684BD5B7E22B8A115DA258EA04CB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m179CF1BDD503F830F79CF1A81033083C1BB19E05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m27475592735C318973899086F95036A18B6D7E39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m71DCE2DD53C6EFD6DF99B2592A347DFD0F9106C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m893153D76F05AFF53207ABCA86290836BCC7B122_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDBC3F8F2846CD821DA096BECD6300438E2409BC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEEA3C6B55707EC6755329113F4C364960AA66CEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDDC6F7A9E98335D0828894600921FCF3A934DB0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m11184C5FB1A1F3809B982476408F08F599F377F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlyProcessor_Process_m5EC73F6D1F63A911A1C86747BB95E7948D0D0763_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CProcess_CoroutineU3Ed__71_MoveNext_mD48EE828FDD2A75A0D315DD5091D9EA822A1E428_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CProcess_CoroutineU3Ed__71_System_Collections_IEnumerator_Reset_m9FB1DD2F3935D895EF35B0060AA4B614A6D6F782_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReadStream_CoroutineU3Ed__9_System_Collections_IEnumerator_Reset_m14B7D06040613D92BFD729691FCD680F50D5BB43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m7A2633FD76AC8804D68EEB036B996CAF5FDC7754_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mD927D6AC4BE78DAED8A83775F0D1FEF91A756B4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ProcessingSteps_t66470AEDB7538A34AC55F1AB85D626C1264892F4_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF;
struct IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711;
struct IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PlyValueU5BU5D_tE3742EA175D697AD95C6B319F1C6FC18D7BE0382;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCB3F017DD498D759E5FCD537C27107D77CF57E80 
{
};

// System.Collections.Generic.Dictionary`2<System.Int64,TriLibCore.Ply.PlyElement>
struct Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7E06B5474CC82D600EDDE8FCB80C8C94FB5F17F0* ____entries_1;
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
	KeyCollection_t7C7D7EEF9A007C010262940B4AEC7E3061ECFF27* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t16B888ACAE62FB5B6EB90AB83B113259C434EC38* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int64,TriLibCore.Ply.PlyProperty>
struct Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t91203F7AE9706253C76AD809F11CF3AADD8E3624* ____entries_1;
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
	KeyCollection_t68BDB70AC2E0E8829F8F9519A28D13E563CF4250* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t17A15458500B928C18C734F4964D798B1C114EE9* ____values_8;
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

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>>
struct List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_tA62C7ADB73E706494A104910CBF69BD1EF05FD21* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<TriLibCore.Interfaces.ITexture>
struct List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ITextureU5BU5D_t4FDE2B940C74FD3BE4608C8EBF531CFA2D51FFFA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>
struct List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PlyValueU5BU5D_tE3742EA175D697AD95C6B319F1C6FC18D7BE0382* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,TriLibCore.Ply.PlyElement>
struct ValueCollection_t16B888ACAE62FB5B6EB90AB83B113259C434EC38  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,TriLibCore.Ply.PlyProperty>
struct ValueCollection_t17A15458500B928C18C734F4964D798B1C114EE9  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* ____dictionary_0;
};

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

// TriLibCore.MaterialMapperContext
struct MaterialMapperContext_t2BDF775C916A28A411960E3787DC933D2E9F0042  : public RuntimeObject
{
	// TriLibCore.Interfaces.IMaterial TriLibCore.MaterialMapperContext::Material
	RuntimeObject* ___Material_0;
	// TriLibCore.General.VirtualMaterial TriLibCore.MaterialMapperContext::VirtualMaterial
	VirtualMaterial_t0610B7A6460E24DADF06569B4DA1D9FC487A52DB* ___VirtualMaterial_1;
	// UnityEngine.Material TriLibCore.MaterialMapperContext::UnityMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___UnityMaterial_2;
	// TriLibCore.AssetLoaderContext TriLibCore.MaterialMapperContext::<Context>k__BackingField
	AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___U3CContextU3Ek__BackingField_3;
	// UnityEngine.Material TriLibCore.MaterialMapperContext::AlphaMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___AlphaMaterial_4;
	// TriLibCore.Mappers.MaterialMapper TriLibCore.MaterialMapperContext::MaterialMapper
	MaterialMapper_t5FE12658D8C551EE66D3441CFBDEDFAE5B85E692* ___MaterialMapper_5;
	// System.Int32 TriLibCore.MaterialMapperContext::Index
	int32_t ___Index_6;
	// System.Boolean TriLibCore.MaterialMapperContext::<Completed>k__BackingField
	bool ___U3CCompletedU3Ek__BackingField_7;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// TriLibCore.Ply.PlyElement
struct PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int64,TriLibCore.Ply.PlyProperty> TriLibCore.Ply.PlyElement::Properties
	Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* ___Properties_0;
	// System.Int32 TriLibCore.Ply.PlyElement::Count
	int32_t ___Count_1;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>> TriLibCore.Ply.PlyElement::Data
	List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* ___Data_2;
};

// TriLibCore.Ply.PlyMaterial
struct PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> TriLibCore.Ply.PlyMaterial::_properties
	RuntimeObject* ____properties_0;
	// System.String TriLibCore.Ply.PlyMaterial::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.Boolean TriLibCore.Ply.PlyMaterial::<Used>k__BackingField
	bool ___U3CUsedU3Ek__BackingField_2;
	// System.Boolean TriLibCore.Ply.PlyMaterial::<DoubleSided>k__BackingField
	bool ___U3CDoubleSidedU3Ek__BackingField_3;
	// System.Int32 TriLibCore.Ply.PlyMaterial::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_4;
	// System.Boolean TriLibCore.Ply.PlyMaterial::<Processing>k__BackingField
	bool ___U3CProcessingU3Ek__BackingField_5;
	// System.Boolean TriLibCore.Ply.PlyMaterial::<Processed>k__BackingField
	bool ___U3CProcessedU3Ek__BackingField_6;
};

// TriLibCore.Ply.PlyProcessor
struct PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F  : public RuntimeObject
{
	// TriLibCore.Ply.Reader.PlyReader TriLibCore.Ply.PlyProcessor::_reader
	PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* ____reader_2;
	// System.Collections.Generic.IList`1<UnityEngine.Vector3> TriLibCore.Ply.PlyProcessor::_allVertices
	RuntimeObject* ____allVertices_3;
	// System.Collections.Generic.IList`1<UnityEngine.Vector3> TriLibCore.Ply.PlyProcessor::_allNormals
	RuntimeObject* ____allNormals_4;
	// System.Collections.Generic.IList`1<UnityEngine.Color> TriLibCore.Ply.PlyProcessor::_allColors
	RuntimeObject* ____allColors_5;
	// System.Collections.Generic.IList`1<UnityEngine.Vector2> TriLibCore.Ply.PlyProcessor::_allUVs
	RuntimeObject* ____allUVs_6;
	// System.Collections.Generic.HashSet`1<UnityEngine.Rendering.VertexAttribute> TriLibCore.Ply.PlyProcessor::_vertexAttributes
	HashSet_1_t17CC6C8527489146D9154E22DE059EF4A4550640* ____vertexAttributes_7;
	// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Ply.PlyProcessor::_geometryGroup
	RuntimeObject* ____geometryGroup_8;
};

// TriLibCore.Ply.PlyProperty
struct PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362  : public RuntimeObject
{
	// TriLibCore.Ply.PlyPropertyType TriLibCore.Ply.PlyProperty::Type
	int32_t ___Type_0;
	// System.Int32 TriLibCore.Ply.PlyProperty::Offset
	int32_t ___Offset_1;
};

// TriLibCore.Ply.Program
struct Program_tF221987E986ED204179045A85D41CBDBA2C0B625  : public RuntimeObject
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

// TriLibCore.TextureLoadingContext
struct TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879  : public RuntimeObject
{
	// TriLibCore.General.TextureType TriLibCore.TextureLoadingContext::TextureType
	int32_t ___TextureType_0;
	// TriLibCore.TextureDataContext TriLibCore.TextureLoadingContext::TextureDataContext
	TextureDataContext_tFA6C9B1525B47F9A11A34ACBF3BE7D238187B72D* ___TextureDataContext_1;
	// TriLibCore.MaterialMapperContext TriLibCore.TextureLoadingContext::MaterialMapperContext
	MaterialMapperContext_t2BDF775C916A28A411960E3787DC933D2E9F0042* ___MaterialMapperContext_2;
	// System.Boolean TriLibCore.TextureLoadingContext::TextureProcessed
	bool ___TextureProcessed_3;
	// System.Boolean TriLibCore.TextureLoadingContext::<Completed>k__BackingField
	bool ___U3CCompletedU3Ek__BackingField_4;
	// TriLibCore.AssetLoaderContext TriLibCore.TextureLoadingContext::<Context>k__BackingField
	AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___U3CContextU3Ek__BackingField_5;
	// UnityEngine.Texture TriLibCore.TextureLoadingContext::<UnityTexture>k__BackingField
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CUnityTextureU3Ek__BackingField_6;
	// System.Int32 TriLibCore.TextureLoadingContext::CreationBytesPerPixel
	int32_t ___CreationBytesPerPixel_7;
	// System.Action`1<TriLibCore.TextureLoadingContext>[] TriLibCore.TextureLoadingContext::OnTextureProcessed
	Action_1U5BU5D_t7706604B0FB5F3A4270EB313972114755AE7A123* ___OnTextureProcessed_8;
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

// TriLibCore.Ply.Reader.PlyReader/<ReadStream_Coroutine>d__9
struct U3CReadStream_CoroutineU3Ed__9_tAEA60AB19AEF8EFAC748450AF70E3FCB0388A65C  : public RuntimeObject
{
	// System.Int32 TriLibCore.Ply.Reader.PlyReader/<ReadStream_Coroutine>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TriLibCore.Ply.Reader.PlyReader/<ReadStream_Coroutine>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.IO.Stream TriLibCore.Ply.Reader.PlyReader/<ReadStream_Coroutine>d__9::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_2;
	// TriLibCore.AssetLoaderContext TriLibCore.Ply.Reader.PlyReader/<ReadStream_Coroutine>d__9::assetLoaderContext
	AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext_3;
	// System.String TriLibCore.Ply.Reader.PlyReader/<ReadStream_Coroutine>d__9::filename
	String_t* ___filename_4;
	// System.Action`2<TriLibCore.AssetLoaderContext,System.Single> TriLibCore.Ply.Reader.PlyReader/<ReadStream_Coroutine>d__9::onProgress
	Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___onProgress_5;
	// TriLibCore.Ply.Reader.PlyReader TriLibCore.Ply.Reader.PlyReader/<ReadStream_Coroutine>d__9::<>4__this
	PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* ___U3CU3E4__this_6;
	// TriLibCore.Interfaces.IRootModel TriLibCore.Ply.Reader.PlyReader/<ReadStream_Coroutine>d__9::<model>5__1
	RuntimeObject* ___U3CmodelU3E5__1_7;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Object>
struct Enumerator_t101EECDB54BD1F67FD91D0D649333AC62D79665D 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,TriLibCore.Ply.PlyElement>
struct Enumerator_t69077E1CF02F307242D159C9DA30E7B9A2D5C901 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,TriLibCore.Ply.PlyProperty>
struct Enumerator_t7D873153703A01D83B21E276B8C4436FC283A3C8 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ____currentValue_3;
};

// Unity.Collections.NativeArray`1<System.Char>
struct NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// TriLibCore.Utils.BigEndianBinaryReader
struct BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721  : public BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158
{
	// System.Byte[] TriLibCore.Utils.BigEndianBinaryReader::_data2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data2_10;
	// System.Byte[] TriLibCore.Utils.BigEndianBinaryReader::_data4
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data4_11;
	// System.Byte[] TriLibCore.Utils.BigEndianBinaryReader::_data8
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data8_12;
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

// TriLibCore.Ply.PlyGeometry
struct PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277  : public Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147
{
};

// TriLibCore.Ply.PlyListProperty
struct PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E  : public PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362
{
	// TriLibCore.Ply.PlyPropertyType TriLibCore.Ply.PlyListProperty::CounterType
	int32_t ___CounterType_2;
	// TriLibCore.Ply.PlyPropertyType TriLibCore.Ply.PlyListProperty::ItemType
	int32_t ___ItemType_3;
};

// TriLibCore.Ply.Reader.PlyReader
struct PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F  : public ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449
{
};

// TriLibCore.Ply.PlyValue
struct PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 
{
	// System.UInt32 TriLibCore.Ply.PlyValue::_intValue
	uint32_t ____intValue_0;
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

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
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

// LibTessDotNet.Vec3
struct Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 
{
	// System.Single LibTessDotNet.Vec3::X
	float ___X_1;
	// System.Single LibTessDotNet.Vec3::Y
	float ___Y_2;
	// System.Single LibTessDotNet.Vec3::Z
	float ___Z_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// LibTessDotNet.ContourVertex
struct ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F 
{
	// LibTessDotNet.Vec3 LibTessDotNet.ContourVertex::Position
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___Position_0;
	// System.Object LibTessDotNet.ContourVertex::Data
	RuntimeObject* ___Data_1;
};
// Native definition for P/Invoke marshalling of LibTessDotNet.ContourVertex
struct ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshaled_pinvoke
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___Position_0;
	Il2CppIUnknown* ___Data_1;
};
// Native definition for COM marshalling of LibTessDotNet.ContourVertex
struct ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshaled_com
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___Position_0;
	Il2CppIUnknown* ___Data_1;
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

// TriLibCore.Geometries.InterpolatedVertex
struct InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5  : public RuntimeObject
{
	// UnityEngine.Vector3 TriLibCore.Geometries.InterpolatedVertex::_position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____position_0;
	// UnityEngine.Vector3 TriLibCore.Geometries.InterpolatedVertex::_normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____normal_1;
	// UnityEngine.Vector4 TriLibCore.Geometries.InterpolatedVertex::_tangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____tangent_2;
	// UnityEngine.Color TriLibCore.Geometries.InterpolatedVertex::_color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____color_3;
	// UnityEngine.Vector2 TriLibCore.Geometries.InterpolatedVertex::_uv0
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____uv0_4;
	// UnityEngine.Vector2 TriLibCore.Geometries.InterpolatedVertex::_uv1
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____uv1_5;
	// UnityEngine.Vector2 TriLibCore.Geometries.InterpolatedVertex::_uv2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____uv2_6;
	// UnityEngine.Vector2 TriLibCore.Geometries.InterpolatedVertex::_uv3
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____uv3_7;
	// UnityEngine.BoneWeight TriLibCore.Geometries.InterpolatedVertex::_boneWeight
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F ____boneWeight_8;
	// System.Int32 TriLibCore.Geometries.InterpolatedVertex::_vertexIndex
	int32_t ____vertexIndex_9;
	// System.Int32 TriLibCore.Geometries.InterpolatedVertex::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_10;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// TriLibCore.Ply.PlyModel
struct PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2  : public RuntimeObject
{
	// System.String TriLibCore.Ply.PlyModel::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Boolean TriLibCore.Ply.PlyModel::<Used>k__BackingField
	bool ___U3CUsedU3Ek__BackingField_1;
	// UnityEngine.Vector3 TriLibCore.Ply.PlyModel::<Pivot>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPivotU3Ek__BackingField_2;
	// UnityEngine.Vector3 TriLibCore.Ply.PlyModel::<LocalPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CLocalPositionU3Ek__BackingField_3;
	// UnityEngine.Quaternion TriLibCore.Ply.PlyModel::<LocalRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CLocalRotationU3Ek__BackingField_4;
	// UnityEngine.Vector3 TriLibCore.Ply.PlyModel::<LocalScale>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CLocalScaleU3Ek__BackingField_5;
	// System.Boolean TriLibCore.Ply.PlyModel::<Visibility>k__BackingField
	bool ___U3CVisibilityU3Ek__BackingField_6;
	// TriLibCore.Interfaces.IModel TriLibCore.Ply.PlyModel::<Parent>k__BackingField
	RuntimeObject* ___U3CParentU3Ek__BackingField_7;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Ply.PlyModel::<Children>k__BackingField
	RuntimeObject* ___U3CChildrenU3Ek__BackingField_8;
	// System.Boolean TriLibCore.Ply.PlyModel::<IsBone>k__BackingField
	bool ___U3CIsBoneU3Ek__BackingField_9;
	// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Ply.PlyModel::<GeometryGroup>k__BackingField
	RuntimeObject* ___U3CGeometryGroupU3Ek__BackingField_10;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Ply.PlyModel::<Bones>k__BackingField
	RuntimeObject* ___U3CBonesU3Ek__BackingField_11;
	// UnityEngine.Matrix4x4[] TriLibCore.Ply.PlyModel::<BindPoses>k__BackingField
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___U3CBindPosesU3Ek__BackingField_12;
	// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Ply.PlyModel::<MaterialIndices>k__BackingField
	RuntimeObject* ___U3CMaterialIndicesU3Ek__BackingField_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> TriLibCore.Ply.PlyModel::<UserProperties>k__BackingField
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___U3CUserPropertiesU3Ek__BackingField_14;
	// System.Boolean TriLibCore.Ply.PlyModel::<HasCustomPivot>k__BackingField
	bool ___U3CHasCustomPivotU3Ek__BackingField_15;
	// UnityEngine.Matrix4x4 TriLibCore.Ply.PlyModel::<OriginalGlobalMatrix>k__BackingField
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___U3COriginalGlobalMatrixU3Ek__BackingField_16;
};

// TriLibCore.Ply.PlyTexture
struct PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C  : public RuntimeObject
{
	// System.String TriLibCore.Ply.PlyTexture::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Boolean TriLibCore.Ply.PlyTexture::<Used>k__BackingField
	bool ___U3CUsedU3Ek__BackingField_1;
	// System.Byte[] TriLibCore.Ply.PlyTexture::<Data>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CDataU3Ek__BackingField_2;
	// System.IO.Stream TriLibCore.Ply.PlyTexture::<DataStream>k__BackingField
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___U3CDataStreamU3Ek__BackingField_3;
	// System.String TriLibCore.Ply.PlyTexture::<Filename>k__BackingField
	String_t* ___U3CFilenameU3Ek__BackingField_4;
	// UnityEngine.TextureWrapMode TriLibCore.Ply.PlyTexture::<WrapModeU>k__BackingField
	int32_t ___U3CWrapModeUU3Ek__BackingField_5;
	// UnityEngine.TextureWrapMode TriLibCore.Ply.PlyTexture::<WrapModeV>k__BackingField
	int32_t ___U3CWrapModeVU3Ek__BackingField_6;
	// UnityEngine.Vector2 TriLibCore.Ply.PlyTexture::<Tiling>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CTilingU3Ek__BackingField_7;
	// UnityEngine.Vector2 TriLibCore.Ply.PlyTexture::<Offset>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3COffsetU3Ek__BackingField_8;
	// System.Int32 TriLibCore.Ply.PlyTexture::<TextureId>k__BackingField
	int32_t ___U3CTextureIdU3Ek__BackingField_9;
	// System.String TriLibCore.Ply.PlyTexture::<ResolvedFilename>k__BackingField
	String_t* ___U3CResolvedFilenameU3Ek__BackingField_10;
	// System.Boolean TriLibCore.Ply.PlyTexture::<HasAlpha>k__BackingField
	bool ___U3CHasAlphaU3Ek__BackingField_11;
	// TriLibCore.General.TextureFormat TriLibCore.Ply.PlyTexture::<TextureFormat>k__BackingField
	int32_t ___U3CTextureFormatU3Ek__BackingField_12;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71
struct U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3  : public RuntimeObject
{
	// System.Int32 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TriLibCore.AssetLoaderContext TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::_assetLoaderContext
	AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ____assetLoaderContext_2;
	// TriLibCore.Ply.Reader.PlyReader TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::plyReader
	PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* ___plyReader_3;
	// System.IO.Stream TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_4;
	// TriLibCore.Ply.PlyProcessor TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<>4__this
	PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* ___U3CU3E4__this_5;
	// System.Collections.Generic.Dictionary`2<System.Int64,TriLibCore.Ply.PlyElement> TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<elements>5__1
	Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC* ___U3CelementsU3E5__1_6;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>> TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<lists>5__2
	List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* ___U3ClistsU3E5__2_7;
	// TriLibCore.Ply.PlyElement TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<activeElement>5__3
	PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* ___U3CactiveElementU3E5__3_8;
	// System.Boolean TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<headerOpen>5__4
	bool ___U3CheaderOpenU3E5__4_9;
	// System.Boolean TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<headerClosed>5__5
	bool ___U3CheaderClosedU3E5__5_10;
	// System.Boolean TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<textureFileOpen>5__6
	bool ___U3CtextureFileOpenU3E5__6_11;
	// TriLibCore.Ply.PlyTexture TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<textureFile>5__7
	PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* ___U3CtextureFileU3E5__7_12;
	// System.Collections.Generic.List`1<TriLibCore.Interfaces.ITexture> TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<allTextures>5__8
	List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31* ___U3CallTexturesU3E5__8_13;
	// System.Boolean TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<littleEndian>5__9
	bool ___U3ClittleEndianU3E5__9_14;
	// System.Boolean TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<bigEndian>5__10
	bool ___U3CbigEndianU3E5__10_15;
	// TriLibCore.Ply.PlyStreamReader TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<plyStreamReader>5__11
	PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* ___U3CplyStreamReaderU3E5__11_16;
	// System.Single TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<lastPerc>5__12
	float ___U3ClastPercU3E5__12_17;
	// System.IO.BinaryReader TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<littleEndianBinaryReader>5__13
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___U3ClittleEndianBinaryReaderU3E5__13_18;
	// TriLibCore.Utils.BigEndianBinaryReader TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<bigEndianBinaryReader>5__14
	BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* ___U3CbigEndianBinaryReaderU3E5__14_19;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial> TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<allMaterials>5__15
	RuntimeObject* ___U3CallMaterialsU3E5__15_20;
	// TriLibCore.Ply.PlyElement TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<vertexElement>5__16
	PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* ___U3CvertexElementU3E5__16_21;
	// TriLibCore.Ply.PlyRootModel TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<rootModel>5__17
	PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* ___U3CrootModelU3E5__17_22;
	// System.Int64 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<command>5__18
	int64_t ___U3CcommandU3E5__18_23;
	// System.Single TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<perc>5__19
	float ___U3CpercU3E5__19_24;
	// System.Int64 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<>s__20
	int64_t ___U3CU3Es__20_25;
	// System.Int64 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<format>5__21
	int64_t ___U3CformatU3E5__21_26;
	// System.Int64 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<elementName>5__22
	int64_t ___U3CelementNameU3E5__22_27;
	// System.Int32 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<elementCount>5__23
	int32_t ___U3CelementCountU3E5__23_28;
	// TriLibCore.Ply.PlyPropertyType TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<propertyType>5__24
	int32_t ___U3CpropertyTypeU3E5__24_29;
	// TriLibCore.Ply.PlyPropertyType TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<counterPropertyType>5__25
	int32_t ___U3CcounterPropertyTypeU3E5__25_30;
	// TriLibCore.Ply.PlyPropertyType TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<itemPropertyType>5__26
	int32_t ___U3CitemPropertyTypeU3E5__26_31;
	// System.Int64 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<propertyName>5__27
	int64_t ___U3CpropertyNameU3E5__27_32;
	// TriLibCore.Ply.PlyListProperty TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<property>5__28
	PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* ___U3CpropertyU3E5__28_33;
	// System.Int64 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<propertyName>5__29
	int64_t ___U3CpropertyNameU3E5__29_34;
	// TriLibCore.Ply.PlyProperty TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<property>5__30
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___U3CpropertyU3E5__30_35;
	// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,TriLibCore.Ply.PlyElement> TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<>s__31
	Enumerator_t69077E1CF02F307242D159C9DA30E7B9A2D5C901 ___U3CU3Es__31_36;
	// TriLibCore.Ply.PlyElement TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<element>5__32
	PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* ___U3CelementU3E5__32_37;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>> TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<elementData>5__33
	List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* ___U3CelementDataU3E5__33_38;
	// System.Int32 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<i>5__34
	int32_t ___U3CiU3E5__34_39;
	// System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue> TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<subElementData>5__35
	List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* ___U3CsubElementDataU3E5__35_40;
	// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,TriLibCore.Ply.PlyProperty> TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<>s__36
	Enumerator_t7D873153703A01D83B21E276B8C4436FC283A3C8 ___U3CU3Es__36_41;
	// TriLibCore.Ply.PlyProperty TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<property>5__37
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___U3CpropertyU3E5__37_42;
	// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<value>5__38
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 ___U3CvalueU3E5__38_43;
	// TriLibCore.Ply.PlyElement TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<materialElement>5__39
	PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* ___U3CmaterialElementU3E5__39_44;
	// System.Int32 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<i>5__40
	int32_t ___U3CiU3E5__40_45;
	// TriLibCore.Ply.PlyMaterial TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<material>5__41
	PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* ___U3CmaterialU3E5__41_46;
	// System.Single TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<diffuse_red>5__42
	float ___U3Cdiffuse_redU3E5__42_47;
	// System.Single TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<diffuse_green>5__43
	float ___U3Cdiffuse_greenU3E5__43_48;
	// System.Single TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<diffuse_blue>5__44
	float ___U3Cdiffuse_blueU3E5__44_49;
	// System.Single TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<specular_red>5__45
	float ___U3Cspecular_redU3E5__45_50;
	// System.Single TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<specular_green>5__46
	float ___U3Cspecular_greenU3E5__46_51;
	// System.Single TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<specular_blue>5__47
	float ___U3Cspecular_blueU3E5__47_52;
	// TriLibCore.Ply.PlyProperty TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<opacityProperty>5__48
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___U3CopacityPropertyU3E5__48_53;
	// System.Single TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<opacity>5__49
	float ___U3CopacityU3E5__49_54;
	// TriLibCore.Ply.PlyMaterial TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<material>5__50
	PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* ___U3CmaterialU3E5__50_55;
	// System.Int32 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<i>5__51
	int32_t ___U3CiU3E5__51_56;
	// System.Single TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<x>5__52
	float ___U3CxU3E5__52_57;
	// System.Single TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<y>5__53
	float ___U3CyU3E5__53_58;
	// System.Single TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<z>5__54
	float ___U3CzU3E5__54_59;
	// UnityEngine.Vector3 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<vertex>5__55
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CvertexU3E5__55_60;
	// TriLibCore.Ply.PlyProperty TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<nxProp>5__56
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___U3CnxPropU3E5__56_61;
	// TriLibCore.Ply.PlyProperty TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<nyProp>5__57
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___U3CnyPropU3E5__57_62;
	// TriLibCore.Ply.PlyProperty TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<nzProp>5__58
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___U3CnzPropU3E5__58_63;
	// TriLibCore.Ply.PlyProperty TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<sProp>5__59
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___U3CsPropU3E5__59_64;
	// TriLibCore.Ply.PlyProperty TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<tProp>5__60
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___U3CtPropU3E5__60_65;
	// TriLibCore.Ply.PlyProperty TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<rProp>5__61
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___U3CrPropU3E5__61_66;
	// TriLibCore.Ply.PlyProperty TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<gProp>5__62
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___U3CgPropU3E5__62_67;
	// TriLibCore.Ply.PlyProperty TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<bProp>5__63
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___U3CbPropU3E5__63_68;
	// TriLibCore.Ply.PlyProperty TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<aProp>5__64
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___U3CaPropU3E5__64_69;
	// System.Single TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<nx>5__65
	float ___U3CnxU3E5__65_70;
	// System.Single TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<ny>5__66
	float ___U3CnyU3E5__66_71;
	// System.Single TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<nz>5__67
	float ___U3CnzU3E5__67_72;
	// UnityEngine.Vector3 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<normal>5__68
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CnormalU3E5__68_73;
	// System.Single TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<s>5__69
	float ___U3CsU3E5__69_74;
	// System.Single TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<t>5__70
	float ___U3CtU3E5__70_75;
	// UnityEngine.Vector2 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<uv>5__71
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CuvU3E5__71_76;
	// System.Single TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<r>5__72
	float ___U3CrU3E5__72_77;
	// System.Single TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<g>5__73
	float ___U3CgU3E5__73_78;
	// System.Single TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<b>5__74
	float ___U3CbU3E5__74_79;
	// System.Single TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<a>5__75
	float ___U3CaU3E5__75_80;
	// UnityEngine.Color TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<color>5__76
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CcolorU3E5__76_81;
	// TriLibCore.Ply.PlyGeometry TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<geometry>5__77
	PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* ___U3CgeometryU3E5__77_82;
	// System.Int32 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<i>5__78
	int32_t ___U3CiU3E5__78_83;
	// UnityEngine.Vector3 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<vertex>5__79
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CvertexU3E5__79_84;
	// UnityEngine.Vector3 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<normal>5__80
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CnormalU3E5__80_85;
	// UnityEngine.Color TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<color>5__81
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CcolorU3E5__81_86;
	// UnityEngine.Vector2 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<uv>5__82
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CuvU3E5__82_87;
	// TriLibCore.Ply.PlyElement TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<faceElement>5__83
	PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* ___U3CfaceElementU3E5__83_88;
	// System.Int32 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<j>5__84
	int32_t ___U3CjU3E5__84_89;
	// System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue> TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<texCoord>5__85
	List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* ___U3CtexCoordU3E5__85_90;
	// TriLibCore.Ply.PlyListProperty TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<texCoordProp>5__86
	PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* ___U3CtexCoordPropU3E5__86_91;
	// TriLibCore.Ply.PlyProperty TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<materialIndexProperty>5__87
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___U3CmaterialIndexPropertyU3E5__87_92;
	// System.Int32 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<materialIndex>5__88
	int32_t ___U3CmaterialIndexU3E5__88_93;
	// TriLibCore.Ply.PlyGeometry TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<triGeometry>5__89
	PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* ___U3CtriGeometryU3E5__89_94;
	// TriLibCore.Ply.PlyGeometry TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<quadGeometry>5__90
	PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* ___U3CquadGeometryU3E5__90_95;
	// TriLibCore.Ply.PlyListProperty TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<vertexIndicesProp>5__91
	PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* ___U3CvertexIndicesPropU3E5__91_96;
	// System.Int32 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<vertexIndicesListIndex>5__92
	int32_t ___U3CvertexIndicesListIndexU3E5__92_97;
	// System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue> TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<vertexIndices>5__93
	List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* ___U3CvertexIndicesU3E5__93_98;
	// System.Int32 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<texCoordListIndex>5__94
	int32_t ___U3CtexCoordListIndexU3E5__94_99;
	// System.Int32 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<i>5__95
	int32_t ___U3CiU3E5__95_100;
	// LibTessDotNet.ContourVertex[] TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<contourVertices>5__96
	ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* ___U3CcontourVerticesU3E5__96_101;
	// System.Int32 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<i>5__97
	int32_t ___U3CiU3E5__97_102;
	// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<index>5__98
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 ___U3CindexU3E5__98_103;
	// UnityEngine.Vector3 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<vertex>5__99
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CvertexU3E5__99_104;
	// System.Int32[] TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<materialIndices>5__100
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmaterialIndicesU3E5__100_105;
	// System.Int32 TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::<i>5__101
	int32_t ___U3CiU3E5__101_106;
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

// TriLibCore.Ply.PlyRootModel
struct PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237  : public PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2
{
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Ply.PlyRootModel::<AllModels>k__BackingField
	RuntimeObject* ___U3CAllModelsU3Ek__BackingField_17;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup> TriLibCore.Ply.PlyRootModel::<AllGeometryGroups>k__BackingField
	RuntimeObject* ___U3CAllGeometryGroupsU3Ek__BackingField_18;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation> TriLibCore.Ply.PlyRootModel::<AllAnimations>k__BackingField
	RuntimeObject* ___U3CAllAnimationsU3Ek__BackingField_19;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial> TriLibCore.Ply.PlyRootModel::<AllMaterials>k__BackingField
	RuntimeObject* ___U3CAllMaterialsU3Ek__BackingField_20;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture> TriLibCore.Ply.PlyRootModel::<AllTextures>k__BackingField
	RuntimeObject* ___U3CAllTexturesU3Ek__BackingField_21;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ICamera> TriLibCore.Ply.PlyRootModel::<AllCameras>k__BackingField
	RuntimeObject* ___U3CAllCamerasU3Ek__BackingField_22;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ILight> TriLibCore.Ply.PlyRootModel::<AllLights>k__BackingField
	RuntimeObject* ___U3CAllLightsU3Ek__BackingField_23;
};

// TriLibCore.Ply.PlyStreamReader
struct PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2  : public StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B
{
	// Unity.Collections.NativeArray`1<System.Char> TriLibCore.Ply.PlyStreamReader::_charStream
	NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A ____charStream_24;
	// System.String TriLibCore.Ply.PlyStreamReader::_charString
	String_t* ____charString_25;
	// System.Int32 TriLibCore.Ply.PlyStreamReader::_charPosition
	int32_t ____charPosition_26;
	// System.Int64 TriLibCore.Ply.PlyStreamReader::<Position>k__BackingField
	int64_t ___U3CPositionU3Ek__BackingField_27;
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

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Int64,TriLibCore.Ply.PlyElement>

// System.Collections.Generic.Dictionary`2<System.Int64,TriLibCore.Ply.PlyElement>

// System.Collections.Generic.Dictionary`2<System.Int64,TriLibCore.Ply.PlyProperty>

// System.Collections.Generic.Dictionary`2<System.Int64,TriLibCore.Ply.PlyProperty>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.HashSet`1<UnityEngine.Rendering.VertexAttribute>

// System.Collections.Generic.HashSet`1<UnityEngine.Rendering.VertexAttribute>

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>>
struct List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	List_1U5BU5D_tA62C7ADB73E706494A104910CBF69BD1EF05FD21* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>>

// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Color>

// System.Collections.Generic.List`1<TriLibCore.Interfaces.ITexture>
struct List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ITextureU5BU5D_t4FDE2B940C74FD3BE4608C8EBF531CFA2D51FFFA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TriLibCore.Interfaces.ITexture>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>
struct List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PlyValueU5BU5D_tE3742EA175D697AD95C6B319F1C6FC18D7BE0382* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector2>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,TriLibCore.Ply.PlyElement>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,TriLibCore.Ply.PlyElement>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,TriLibCore.Ply.PlyProperty>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,TriLibCore.Ply.PlyProperty>

// System.IO.BinaryReader

// System.IO.BinaryReader

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

// TriLibCore.Geometries.Geometry

// TriLibCore.Geometries.Geometry

// System.MarshalByRefObject

// System.MarshalByRefObject

// TriLibCore.MaterialMapperContext

// TriLibCore.MaterialMapperContext

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// TriLibCore.Ply.PlyElement

// TriLibCore.Ply.PlyElement

// TriLibCore.Ply.PlyMaterial

// TriLibCore.Ply.PlyMaterial

// TriLibCore.Ply.PlyProcessor

// TriLibCore.Ply.PlyProcessor

// TriLibCore.Ply.PlyProperty

// TriLibCore.Ply.PlyProperty

// TriLibCore.Ply.Program

// TriLibCore.Ply.Program

// TriLibCore.ReaderBase
struct ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449_StaticFields
{
	// System.Action`4<System.String,System.String,System.TimeSpan,System.Int64> TriLibCore.ReaderBase::ProfileStepCallback
	Action_4_tA3594528C5AC13E7A27B50D19223DC951CD1E8B2* ___ProfileStepCallback_0;
};

// TriLibCore.ReaderBase

// System.Collections.Stack

// System.Collections.Stack

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// TriLibCore.TextureLoadingContext

// TriLibCore.TextureLoadingContext

// System.ValueType

// System.ValueType

// TriLibCore.Ply.Reader.PlyReader/<ReadStream_Coroutine>d__9

// TriLibCore.Ply.Reader.PlyReader/<ReadStream_Coroutine>d__9

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,TriLibCore.Ply.PlyElement>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,TriLibCore.Ply.PlyElement>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,TriLibCore.Ply.PlyProperty>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,TriLibCore.Ply.PlyProperty>

// Unity.Collections.NativeArray`1<System.Char>

// Unity.Collections.NativeArray`1<System.Char>

// TriLibCore.Utils.BigEndianBinaryReader

// TriLibCore.Utils.BigEndianBinaryReader

// UnityEngine.BoneWeight

// UnityEngine.BoneWeight

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

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

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

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// TriLibCore.Ply.PlyGeometry

// TriLibCore.Ply.PlyGeometry

// TriLibCore.Ply.PlyListProperty

// TriLibCore.Ply.PlyListProperty

// TriLibCore.Ply.Reader.PlyReader
struct PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F_StaticFields
{
	// System.Double TriLibCore.Ply.Reader.PlyReader::PlyConversionPrecision
	double ___PlyConversionPrecision_10;
};

// TriLibCore.Ply.Reader.PlyReader

// TriLibCore.Ply.PlyValue
struct PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41_StaticFields
{
	// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyValue::Unknown
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 ___Unknown_1;
};

// TriLibCore.Ply.PlyValue

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

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

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.IO.TextReader

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// LibTessDotNet.Vec3
struct Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields
{
	// LibTessDotNet.Vec3 LibTessDotNet.Vec3::Zero
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___Zero_0;
};

// LibTessDotNet.Vec3

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// UnityEngine.Vector4
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

// UnityEngine.Vector4

// System.Void

// System.Void

// TriLibCore.AssetLoaderContext

// TriLibCore.AssetLoaderContext

// LibTessDotNet.ContourVertex

// LibTessDotNet.ContourVertex

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// TriLibCore.Geometries.InterpolatedVertex

// TriLibCore.Geometries.InterpolatedVertex

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// TriLibCore.Ply.PlyModel

// TriLibCore.Ply.PlyModel

// TriLibCore.Ply.PlyTexture

// TriLibCore.Ply.PlyTexture

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// System.IO.StreamReader

// TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71

// TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71

// System.MulticastDelegate

// System.MulticastDelegate

// TriLibCore.Ply.PlyRootModel

// TriLibCore.Ply.PlyRootModel

// TriLibCore.Ply.PlyStreamReader

// TriLibCore.Ply.PlyStreamReader

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

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

// System.Action`2<TriLibCore.AssetLoaderContext,System.Single>

// System.Action`2<TriLibCore.AssetLoaderContext,System.Single>

// TriLibCore.AssetLoaderOptions

// TriLibCore.AssetLoaderOptions

// System.NotSupportedException

// System.NotSupportedException
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
// LibTessDotNet.ContourVertex[]
struct ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF  : public RuntimeArray
{
	ALIGN_FIELD (8) ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F m_Items[1];

	inline ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Data_1), (void*)NULL);
	}
	inline ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Data_1), (void*)NULL);
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
// TriLibCore.Interfaces.IMaterial[]
struct IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2  : public RuntimeArray
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
// TriLibCore.Ply.PlyValue[]
struct PlyValueU5BU5D_tE3742EA175D697AD95C6B319F1C6FC18D7BE0382  : public RuntimeArray
{
	ALIGN_FIELD (8) PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 m_Items[1];

	inline PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m9A4D60A27A7CAA492BE4A9AC1EB250802FDDF5A4_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, int64_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_gshared (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6E4700E09E9816E4C0C88C90C5BB8FAF312B8481_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Extensions.DictionaryExtensions::TryGetValueSafe<System.Object,System.Object>(System.Collections.Generic.IDictionary`2<TKey,TValue>,TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryExtensions_TryGetValueSafe_TisRuntimeObject_TisRuntimeObject_m31FA8212F5094FA954F0351646B0B012D9736B0B_gshared (RuntimeObject* ___0_dictionary, RuntimeObject* ___1_key, RuntimeObject** ___2_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mDBC3F8F2846CD821DA096BECD6300438E2409BC3_gshared (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m27475592735C318973899086F95036A18B6D7E39_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mF6ABB6369C9A6394AE57424BE839FE87809B4102_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, int64_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF62FCAE02B490CD3CA263E1578D1F37A10B4491A_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB* Dictionary_2_get_Values_m08D4959355E350045D1F2B2673B420FB2EA9A04B_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t101EECDB54BD1F67FD91D0D649333AC62D79665D ValueCollection_GetEnumerator_m7698A37B76C5FA07C5C51C43A040FB1B832757E0_gshared (ValueCollection_tE8095E528D5C491DA5BF2C8694B3FEF0733A8BEB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m88D8DFB7CF8747F1F8EBA722C32E87978FAA3041_gshared (Enumerator_t101EECDB54BD1F67FD91D0D649333AC62D79665D* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mE396DC57C362877713861B0AD2C88728648A8364_gshared_inline (Enumerator_t101EECDB54BD1F67FD91D0D649333AC62D79665D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m893153D76F05AFF53207ABCA86290836BCC7B122_gshared (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m37A1197D84857A9512633D2FB5380FCAC7AB381E_gshared_inline (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* __this, PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCBADFB9B05D6004606931CA8EF7A85A4618D30A2_gshared (Enumerator_t101EECDB54BD1F67FD91D0D649333AC62D79665D* __this, const RuntimeMethod* method) ;
// T TriLibCore.Utils.ListUtils::FixIndex<UnityEngine.Vector3>(System.Int32,System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ListUtils_FixIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD45AFFDDC575B7D4965A6B58B98B7D88ED4323EE_gshared (int32_t ___0_index, RuntimeObject* ___1_list, const RuntimeMethod* method) ;
// T TriLibCore.Utils.ListUtils::FixIndex<UnityEngine.Color>(System.Int32,System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ListUtils_FixIndex_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA7050D5E386674C2B99B38CF8EE1F3E237BAC447_gshared (int32_t ___0_index, RuntimeObject* ___1_list, const RuntimeMethod* method) ;
// T TriLibCore.Utils.ListUtils::FixIndex<UnityEngine.Vector2>(System.Int32,System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ListUtils_FixIndex_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m80E31C1F387DAA4115F14B5463CADE1DEF297D2E_gshared (int32_t ___0_index, RuntimeObject* ___1_list, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_gshared_inline (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* __this, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Char>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDDC6F7A9E98335D0828894600921FCF3A934DB0A_gshared (NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A ___0_nativeArray, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> TriLibCore.AssetLoaderContext::AllocateNativeArray<System.Char>(System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A AssetLoaderContext_AllocateNativeArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mAD0223A80367EFCF9C419CD368BD1105DF0F1909_gshared (AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* __this, int32_t ___0_maxChars, int32_t ___1_persistent, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Char>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m11184C5FB1A1F3809B982476408F08F599F377F0_gshared (NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A* __this, const RuntimeMethod* method) ;

// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,TriLibCore.Ply.PlyProperty>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m843741FC841291E930E4C6AC02FFA6A75E4479D5 (Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* __this, int64_t ___0_key, PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680*, int64_t, PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362**, const RuntimeMethod*))Dictionary_2_TryGetValue_m9A4D60A27A7CAA492BE4A9AC1EB250802FDDF5A4_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>>::get_Count()
inline int32_t List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_inline (List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>>::get_Item(System.Int32)
inline List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641 (List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* (*) (List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// T System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>::get_Item(System.Int32)
inline PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36 (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 (*) (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB*, int32_t, const RuntimeMethod*))List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_gshared)(__this, ___0_index, method);
}
// System.Int32 TriLibCore.Ply.PlyValue::GetIntValue(TriLibCore.Ply.PlyValue,TriLibCore.Ply.PlyPropertyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E (PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 ___0_value, int32_t ___1_propertyType, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Ply.PlyValue::GetIntValue(TriLibCore.Ply.PlyValue,TriLibCore.Ply.PlyProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyValue_GetIntValue_mC5D8E3A04354E7AD052C4E0DA2DDC26DADC58ABD (PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 ___0_value, PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___1_property, const RuntimeMethod* method) ;
// System.Single TriLibCore.Ply.PlyValue::GetFloatValue(TriLibCore.Ply.PlyValue,TriLibCore.Ply.PlyProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlyValue_GetFloatValue_mCE0211B08C054DE0848AEB2EF5E728F6D28E9830 (PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 ___0_value, PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___1_property, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,TriLibCore.Ply.PlyProperty>::.ctor()
inline void Dictionary_2__ctor_m9E31627A68563218A84912174B1A3CCFF5D9D3DB (Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680*, const RuntimeMethod*))Dictionary_2__ctor_m6E4700E09E9816E4C0C88C90C5BB8FAF312B8481_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.Geometry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geometry__ctor_m0F5EBDDAEEB9ED6F66946F16F31BAB22BE44D193 (Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.PlyProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyProperty__ctor_mB9404ABEA64DE21D9C16B8FCF8FA95FEA5C8221F (PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* __this, const RuntimeMethod* method) ;
// UnityEngine.Color TriLibCore.Ply.PlyMaterial::GetGenericColorValue(TriLibCore.General.GenericMaterialProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F PlyMaterial_GetGenericColorValue_mDAB3E44868BCA99887DF188037E7A7E9A48E36E4 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, int32_t ___0_materialProperty, const RuntimeMethod* method) ;
// System.Single TriLibCore.Ply.PlyMaterial::GetGenericFloatValue(TriLibCore.General.GenericMaterialProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlyMaterial_GetGenericFloatValue_m5BC4612B3D15C6C0ABE4E7B0A14CE34CA6EAF21F (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, int32_t ___0_materialProperty, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Ply.PlyMaterial::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlyMaterial_HasProperty_mB36FB6DBB9CF41BD74A5C793E011AF62FA370EF4 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, String_t* ___0_propertyName, const RuntimeMethod* method) ;
// System.Single TriLibCore.Ply.PlyMaterial::GetFloatValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlyMaterial_GetFloatValue_mB021B41CE867CAC9BC3A68FD86F956FFBC9566D3 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, String_t* ___0_propertyName, const RuntimeMethod* method) ;
// System.String TriLibCore.Ply.PlyMaterial::GetGenericPropertyName(TriLibCore.General.GenericMaterialProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlyMaterial_GetGenericPropertyName_m41CB8C3D4FBAC86A36411C2405D56BA48F3819ED (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, int32_t ___0_genericMaterialProperty, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Ply.PlyMaterial::GetIntValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyMaterial_GetIntValue_m7D4FA27F9231A957F97E091EAB1D9A7C546D88BD (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, String_t* ___0_propertyName, const RuntimeMethod* method) ;
// System.String TriLibCore.Ply.PlyMaterial::GetStringValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlyMaterial_GetStringValue_mB6CCF7EB09045885C1FFECC7C84CBB6CEDE49F8D (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, String_t* ___0_propertyName, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TriLibCore.Ply.PlyMaterial::GetVector3Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlyMaterial_GetVector3Value_m2A6EE04EE31489DDD7A1003E00BF79C86A81D504 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, String_t* ___0_propertyName, const RuntimeMethod* method) ;
// UnityEngine.Vector4 TriLibCore.Ply.PlyMaterial::GetVector4Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 PlyMaterial_GetVector4Value_m1AC8F1CBBF1703484EEB7833978B1CFC20F4FAB3 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, String_t* ___0_propertyName, const RuntimeMethod* method) ;
// UnityEngine.Color TriLibCore.Ply.PlyMaterial::GetColorValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F PlyMaterial_GetColorValue_m8B4EA23BBCF1DF22DDFA1A4D1DC3E389A317151D (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, String_t* ___0_propertyName, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// TriLibCore.Interfaces.ITexture TriLibCore.Ply.PlyMaterial::GetTextureValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyMaterial_GetTextureValue_mCCE6C1448D7F8075D1560B44FFC67773456373BD (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, String_t* ___0_propertyName, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Extensions.DictionaryExtensions::TryGetValueSafe<System.String,System.Object>(System.Collections.Generic.IDictionary`2<TKey,TValue>,TKey,TValue&)
inline bool DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9 (RuntimeObject* ___0_dictionary, String_t* ___1_key, RuntimeObject** ___2_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, RuntimeObject**, const RuntimeMethod*))DictionaryExtensions_TryGetValueSafe_TisRuntimeObject_TisRuntimeObject_m31FA8212F5094FA954F0351646B0B012D9736B0B_gshared)(___0_dictionary, ___1_key, ___2_value, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Single System.Convert::ToSingle(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_mEC65F60A081FBBB8ACBCD8747183FEDDAEC034C9 (RuntimeObject* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m833ABF9C901B707B28FB10DEBFCC511A87E6C827 (RuntimeObject* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.String TriLibCore.Ply.PlyModel::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlyModel_get_Name_mF0BDCE3B91DCB49F6E648F411F06E052FF253F89_inline (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
inline void List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_gshared)(__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor(System.Int32)
inline void List_1__ctor_mDBC3F8F2846CD821DA096BECD6300438E2409BC3 (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF*, int32_t, const RuntimeMethod*))List_1__ctor_mDBC3F8F2846CD821DA096BECD6300438E2409BC3_gshared)(__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(System.Int32)
inline void List_1__ctor_m27475592735C318973899086F95036A18B6D7E39 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, int32_t, const RuntimeMethod*))List_1__ctor_m27475592735C318973899086F95036A18B6D7E39_gshared)(__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,TriLibCore.Ply.PlyElement>::.ctor()
inline void Dictionary_2__ctor_m4795CFCFA1CA4807CD85E1818CEC2A7EBC2E336C (Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC*, const RuntimeMethod*))Dictionary_2__ctor_m6E4700E09E9816E4C0C88C90C5BB8FAF312B8481_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>>::.ctor()
inline void List_1__ctor_mEEA3C6B55707EC6755329113F4C364960AA66CEF (List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<TriLibCore.Interfaces.ITexture>::.ctor()
inline void List_1__ctor_m71DCE2DD53C6EFD6DF99B2592A347DFD0F9106C3 (List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// TriLibCore.AssetLoaderContext TriLibCore.ReaderBase::get_AssetLoaderContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.PlyStreamReader::.ctor(TriLibCore.AssetLoaderContext,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyStreamReader__ctor_m7808EFBEB09E7E31FB8EC19A0B4CBFFD8DB57DB1 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___0_assetLoaderContext, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___1_stream, const RuntimeMethod* method) ;
// System.Int64 TriLibCore.Ply.PlyStreamReader::ReadToken(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, bool ___0_required, bool ___1_ignoreSpaces, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Ply.PlyStreamReader::ToInt32NoValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyStreamReader_ToInt32NoValue_m3D62B7AC2B68E0C65837ED4B738D26A02C897086 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.PlyElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyElement__ctor_mCA04905EABE9EB079C06C05A9EBB680CF4A4DBE3 (PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,TriLibCore.Ply.PlyElement>::Add(TKey,TValue)
inline void Dictionary_2_Add_m7E3EF4351105771F2D6EB167BE29E7868CFC84F0 (Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC* __this, int64_t ___0_key, PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC*, int64_t, PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8*, const RuntimeMethod*))Dictionary_2_Add_mF6ABB6369C9A6394AE57424BE839FE87809B4102_gshared)(__this, ___0_key, ___1_value, method);
}
// TriLibCore.Ply.PlyPropertyType TriLibCore.Ply.PlyProcessor::GetPropertyType(TriLibCore.Ply.PlyStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyProcessor_GetPropertyType_mF17237DE1F943422F7DBEB3435F43FD29CFB2A46 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* ___0_plyStreamReader, const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.PlyListProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyListProperty__ctor_m913A103F9505DB2EC35D68434C7B1676D0F26196 (PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,TriLibCore.Ply.PlyProperty>::get_Count()
inline int32_t Dictionary_2_get_Count_m270BB8BF6E2728FF1BE69D236B3C1BB5E5D60BFD (Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680*, const RuntimeMethod*))Dictionary_2_get_Count_mF62FCAE02B490CD3CA263E1578D1F37A10B4491A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,TriLibCore.Ply.PlyProperty>::Add(TKey,TValue)
inline void Dictionary_2_Add_m13BA45BD072C072ECDC20ED17980959D50DCDEBE (Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* __this, int64_t ___0_key, PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680*, int64_t, PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*, const RuntimeMethod*))Dictionary_2_Add_mF6ABB6369C9A6394AE57424BE839FE87809B4102_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void TriLibCore.Ply.PlyTexture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyTexture__ctor_m038AAFCCC1A0BFA24B9DB741380AA1D0CDE29AFD (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, const RuntimeMethod* method) ;
// System.String TriLibCore.Ply.PlyStreamReader::GetTokenAsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlyStreamReader_GetTokenAsString_m7E04224D04CDC8D8F4791995529AB17E0CEEDCAA (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.PlyTexture::set_Filename(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlyTexture_set_Filename_m7FA26BB14F1E9F04652E891D67858519F9040BD8_inline (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TriLibCore.Interfaces.ITexture>::Add(T)
inline void List_1_Add_m096BE2FF8568855341E87C1DE6291916F89A8203_inline (List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void TriLibCore.ReaderBase::UpdateLoadingPercentage(System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, float ___0_value, int32_t ___1_step, float ___2_maxValue, const RuntimeMethod* method) ;
// System.Boolean System.IO.StreamReader::get_EndOfStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamReader_get_EndOfStream_mAE054431BF21158178EAA2A6872F14A9ED6A3C3E (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, const RuntimeMethod* method) ;
// System.Int64 TriLibCore.Ply.PlyStreamReader::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t PlyStreamReader_get_Position_m9211CA1BF5C622AACC7B1C9688FE42EB58006B5B_inline (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Utils.BigEndianBinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigEndianBinaryReader__ctor_m9E745E5732B70DC31E50C8C6B8DE7DB5956D0EBA (BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,TriLibCore.Ply.PlyElement>::get_Values()
inline ValueCollection_t16B888ACAE62FB5B6EB90AB83B113259C434EC38* Dictionary_2_get_Values_mD47C7DCD10B474F8DB55896C6B5F276ACA9E2BC1 (Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t16B888ACAE62FB5B6EB90AB83B113259C434EC38* (*) (Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC*, const RuntimeMethod*))Dictionary_2_get_Values_m08D4959355E350045D1F2B2673B420FB2EA9A04B_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,TriLibCore.Ply.PlyElement>::GetEnumerator()
inline Enumerator_t69077E1CF02F307242D159C9DA30E7B9A2D5C901 ValueCollection_GetEnumerator_mD927D6AC4BE78DAED8A83775F0D1FEF91A756B4D (ValueCollection_t16B888ACAE62FB5B6EB90AB83B113259C434EC38* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t69077E1CF02F307242D159C9DA30E7B9A2D5C901 (*) (ValueCollection_t16B888ACAE62FB5B6EB90AB83B113259C434EC38*, const RuntimeMethod*))ValueCollection_GetEnumerator_m7698A37B76C5FA07C5C51C43A040FB1B832757E0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,TriLibCore.Ply.PlyElement>::Dispose()
inline void Enumerator_Dispose_m16443C4F8A0449761F7E9532DA13EE62BC66A959 (Enumerator_t69077E1CF02F307242D159C9DA30E7B9A2D5C901* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t69077E1CF02F307242D159C9DA30E7B9A2D5C901*, const RuntimeMethod*))Enumerator_Dispose_m88D8DFB7CF8747F1F8EBA722C32E87978FAA3041_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,TriLibCore.Ply.PlyElement>::get_Current()
inline PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* Enumerator_get_Current_m16B76A6F6611FB82F01BB3EA7B36F6BE9AC3B558_inline (Enumerator_t69077E1CF02F307242D159C9DA30E7B9A2D5C901* __this, const RuntimeMethod* method)
{
	return ((  PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* (*) (Enumerator_t69077E1CF02F307242D159C9DA30E7B9A2D5C901*, const RuntimeMethod*))Enumerator_get_Current_mE396DC57C362877713861B0AD2C88728648A8364_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>>::.ctor(System.Int32)
inline void List_1__ctor_m179CF1BDD503F830F79CF1A81033083C1BB19E05 (List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>::.ctor(System.Int32)
inline void List_1__ctor_m893153D76F05AFF53207ABCA86290836BCC7B122 (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB*, int32_t, const RuntimeMethod*))List_1__ctor_m893153D76F05AFF53207ABCA86290836BCC7B122_gshared)(__this, ___0_capacity, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,TriLibCore.Ply.PlyProperty>::get_Values()
inline ValueCollection_t17A15458500B928C18C734F4964D798B1C114EE9* Dictionary_2_get_Values_m66C7C3835140D396B2941C5FF726A8435575E421 (Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t17A15458500B928C18C734F4964D798B1C114EE9* (*) (Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680*, const RuntimeMethod*))Dictionary_2_get_Values_m08D4959355E350045D1F2B2673B420FB2EA9A04B_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,TriLibCore.Ply.PlyProperty>::GetEnumerator()
inline Enumerator_t7D873153703A01D83B21E276B8C4436FC283A3C8 ValueCollection_GetEnumerator_m7A2633FD76AC8804D68EEB036B996CAF5FDC7754 (ValueCollection_t17A15458500B928C18C734F4964D798B1C114EE9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7D873153703A01D83B21E276B8C4436FC283A3C8 (*) (ValueCollection_t17A15458500B928C18C734F4964D798B1C114EE9*, const RuntimeMethod*))ValueCollection_GetEnumerator_m7698A37B76C5FA07C5C51C43A040FB1B832757E0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,TriLibCore.Ply.PlyProperty>::Dispose()
inline void Enumerator_Dispose_mFB43E311F648679BE046A19C9351234B9C43A1CF (Enumerator_t7D873153703A01D83B21E276B8C4436FC283A3C8* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7D873153703A01D83B21E276B8C4436FC283A3C8*, const RuntimeMethod*))Enumerator_Dispose_m88D8DFB7CF8747F1F8EBA722C32E87978FAA3041_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,TriLibCore.Ply.PlyProperty>::get_Current()
inline PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* Enumerator_get_Current_mA527966D30259A4C4C030B11F4DFEE3029C1076F_inline (Enumerator_t7D873153703A01D83B21E276B8C4436FC283A3C8* __this, const RuntimeMethod* method)
{
	return ((  PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* (*) (Enumerator_t7D873153703A01D83B21E276B8C4436FC283A3C8*, const RuntimeMethod*))Enumerator_get_Current_mE396DC57C362877713861B0AD2C88728648A8364_gshared_inline)(__this, method);
}
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyProcessor::ReadElementData(TriLibCore.Ply.PlyProperty,TriLibCore.Ply.PlyPropertyType,System.Boolean,System.IO.BinaryReader,System.Boolean,TriLibCore.Ply.PlyStreamReader,TriLibCore.Utils.BigEndianBinaryReader,System.Collections.Generic.List`1<System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyProcessor_ReadElementData_m295BBB280885FD705DF14E08D8FE375B03CB984B (PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___0_property, int32_t ___1_propertyType, bool ___2_littleEndian, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___3_binaryReader, bool ___4_bigEndian, PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* ___5_plyStreamReader, BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* ___6_bigEndianBinaryReader, List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* ___7_lists, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>::Add(T)
inline void List_1_Add_m37A1197D84857A9512633D2FB5380FCAC7AB381E_inline (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* __this, PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB*, PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41, const RuntimeMethod*))List_1_Add_m37A1197D84857A9512633D2FB5380FCAC7AB381E_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,TriLibCore.Ply.PlyProperty>::MoveNext()
inline bool Enumerator_MoveNext_m355F0050D35C5CECAB616FAD6BD09BCDF75ED2AD (Enumerator_t7D873153703A01D83B21E276B8C4436FC283A3C8* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7D873153703A01D83B21E276B8C4436FC283A3C8*, const RuntimeMethod*))Enumerator_MoveNext_mCBADFB9B05D6004606931CA8EF7A85A4618D30A2_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>>::Add(T)
inline void List_1_Add_m7C99F2FA69D684BD5B7E22B8A115DA258EA04CB2_inline (List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* __this, List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5*, List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,TriLibCore.Ply.PlyElement>::MoveNext()
inline bool Enumerator_MoveNext_m3A6AF59F5158004E0E8F5D30912F0B3D578BAD20 (Enumerator_t69077E1CF02F307242D159C9DA30E7B9A2D5C901* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t69077E1CF02F307242D159C9DA30E7B9A2D5C901*, const RuntimeMethod*))Enumerator_MoveNext_mCBADFB9B05D6004606931CA8EF7A85A4618D30A2_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,TriLibCore.Ply.PlyElement>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m181BAACEB7905BC572C38343BF7DDA866E9415FD (Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC* __this, int64_t ___0_key, PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC*, int64_t, PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8**, const RuntimeMethod*))Dictionary_2_TryGetValue_m9A4D60A27A7CAA492BE4A9AC1EB250802FDDF5A4_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void TriLibCore.Ply.PlyMaterial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyMaterial__ctor_m9669AF4D43AE12DEEBD8F46D99D869AC68470623 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, const RuntimeMethod* method) ;
// System.Single TriLibCore.Ply.PlyElement::GetPropertyFloatValue(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlyElement_GetPropertyFloatValue_m9EEC47397083DC6B0C2DB937F43F12288EBF5713 (PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* __this, int64_t ___0_propertyName, int32_t ___1_elementIndex, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.PlyMaterial::AddProperty(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyMaterial_AddProperty_m4FE8AE6161D498A95286AC015BD2E1B2EC41E3B4 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, String_t* ___0_propertyName, RuntimeObject* ___1_propertyValue, bool ___2_isTexture, const RuntimeMethod* method) ;
// TriLibCore.Ply.PlyProperty TriLibCore.Ply.PlyElement::GetProperty(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280 (PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* __this, int64_t ___0_propertyName, const RuntimeMethod* method) ;
// System.Single TriLibCore.Ply.PlyElement::GetPropertyFloatValue(TriLibCore.Ply.PlyProperty,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlyElement_GetPropertyFloatValue_m7E87CAEA23D5D33F126AE7A44F4D6B28CD2283DC (PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* __this, PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___0_property, int32_t ___1_elementIndex, const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.PlyMaterial::set_Index(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlyMaterial_set_Index_mEEC9E37FB853F46E7A19C7A52BE8EACD41464726_inline (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1<UnityEngine.Rendering.VertexAttribute> TriLibCore.Geometries.FlexibleVertexDataUtils::BuildVertexAttributesDictionary(TriLibCore.AssetLoaderContext,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t17CC6C8527489146D9154E22DE059EF4A4550640* FlexibleVertexDataUtils_BuildVertexAttributesDictionary_mE29022A53EA93BE64B2E15C35DEDECAEBE16DCC1 (AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___0_assetLoaderContext, bool ___1_hasPosition, bool ___2_hasNormal, bool ___3_hasTangent, bool ___4_hasColor, bool ___5_hasUV0, bool ___6_hasUV1, bool ___7_hasUV2, bool ___8_hasUV3, bool ___9_hasBoneWeight, bool ___10_useHalfPrecision, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Geometries.FlexibleVertexDataUtils::BuildStreamGeometryGroup(System.Collections.Generic.HashSet`1<UnityEngine.Rendering.VertexAttribute>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FlexibleVertexDataUtils_BuildStreamGeometryGroup_m0F6D3B1AB6D5BD9A088B41AB49C1CC3CCF5E38F3 (HashSet_1_t17CC6C8527489146D9154E22DE059EF4A4550640* ___0_vertexAttributes, bool ___1_useHalfPrecision, const RuntimeMethod* method) ;
// T TriLibCore.Utils.ListUtils::FixIndex<UnityEngine.Vector3>(System.Int32,System.Collections.Generic.IList`1<T>)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ListUtils_FixIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD45AFFDDC575B7D4965A6B58B98B7D88ED4323EE (int32_t ___0_index, RuntimeObject* ___1_list, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (int32_t, RuntimeObject*, const RuntimeMethod*))ListUtils_FixIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD45AFFDDC575B7D4965A6B58B98B7D88ED4323EE_gshared)(___0_index, ___1_list, method);
}
// T TriLibCore.Utils.ListUtils::FixIndex<UnityEngine.Color>(System.Int32,System.Collections.Generic.IList`1<T>)
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ListUtils_FixIndex_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA7050D5E386674C2B99B38CF8EE1F3E237BAC447 (int32_t ___0_index, RuntimeObject* ___1_list, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (int32_t, RuntimeObject*, const RuntimeMethod*))ListUtils_FixIndex_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA7050D5E386674C2B99B38CF8EE1F3E237BAC447_gshared)(___0_index, ___1_list, method);
}
// T TriLibCore.Utils.ListUtils::FixIndex<UnityEngine.Vector2>(System.Int32,System.Collections.Generic.IList`1<T>)
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ListUtils_FixIndex_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m80E31C1F387DAA4115F14B5463CADE1DEF297D2E (int32_t ___0_index, RuntimeObject* ___1_list, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (int32_t, RuntimeObject*, const RuntimeMethod*))ListUtils_FixIndex_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m80E31C1F387DAA4115F14B5463CADE1DEF297D2E_gshared)(___0_index, ___1_list, method);
}
// System.Void TriLibCore.Geometries.FlexibleVertexDataUtils::BuildAndAddFlexibleVertexData(TriLibCore.Interfaces.IGeometryGroup,TriLibCore.AssetLoaderContext,System.Int32,TriLibCore.Geometries.Geometry,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector4,UnityEngine.Color,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.BoneWeight)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleVertexDataUtils_BuildAndAddFlexibleVertexData_mC35367A0F41EE78D0D41CB73484C229156CC532F (RuntimeObject* ___0_geometryGroup, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___1_assetLoaderContext, int32_t ___2_vertexIndex, Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147* ___3_geometry, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___4_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___5_normal, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___6_tangent, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___7_color, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___8_uv0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___9_uv1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___10_uv2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___11_uv3, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F ___12_boneWeight, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Ply.PlyElement::GetListIndex(TriLibCore.Ply.PlyListProperty,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyElement_GetListIndex_m2725B97E4D677B68667107956C9D7E8A2C2565AF (PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* __this, PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* ___0_property, int32_t ___1_elementIndex, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue> TriLibCore.Ply.PlyValue::GetListValue(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* PlyValue_GetListValue_m0917530BCED9A22F01949BB493407DCC83C71C2F (int32_t ___0_index, List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* ___1_lists, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Ply.PlyElement::GetPropertyIntValue(TriLibCore.Ply.PlyProperty,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyElement_GetPropertyIntValue_m350C36F63BFB7DB71BBDE9219AE28BC400EAC124 (PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* __this, PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___0_property, int32_t ___1_elementIndex, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>::get_Count()
inline int32_t List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_inline (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB*, const RuntimeMethod*))List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_gshared_inline)(__this, method);
}
// System.Void TriLibCore.Ply.PlyProcessor::AddVertex(System.Int32,TriLibCore.Ply.PlyGeometry,System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>,System.Int32,TriLibCore.Ply.PlyProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556 (PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* __this, int32_t ___0_vertexIndex, PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* ___1_geometry, List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* ___2_texCoord, int32_t ___3_texCoordIndex, PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___4_texCoordProp, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Vec3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3__ctor_m937D1DD303AF7D61662A455E5F208BDB81106B7C (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// TriLibCore.Geometries.IVertexData TriLibCore.Ply.PlyProcessor::BuildVertexData(TriLibCore.Ply.PlyGeometry,TriLibCore.Interfaces.IGeometryGroup,System.Int32,System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>,TriLibCore.Ply.PlyListProperty,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyProcessor_BuildVertexData_mB82746725B313510493FDBBBCD2A960E434566B9 (PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* __this, PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* ___0_triGeometry, RuntimeObject* ___1_geometryGroup, int32_t ___2_vertexIndex, List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* ___3_texCoord, PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* ___4_texCoordProp, int32_t ___5_texCoordIndex, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.ContourVertex::.ctor(LibTessDotNet.Vec3,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContourVertex__ctor_mB49AE90A9B85CA37EC7EE928BC9EE585D35C8C03 (ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___0_position, RuntimeObject* ___1_data, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Helpers::Tesselate(System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>,TriLibCore.AssetLoaderContext,TriLibCore.Geometries.Geometry,TriLibCore.Interfaces.IGeometryGroup,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Helpers_Tesselate_m52BC0268EF5AEEEECF07746E8B25E59026DAC804 (RuntimeObject* ___0_contourVertices, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___1_assetLoaderContext, Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147* ___2_geometry, RuntimeObject* ___3_geometryGroup, bool ___4_counterClockwise, const RuntimeMethod* method) ;
// System.Void System.IO.TextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_mDCB332EFA06970A9CC7EC4596FCC5220B9512616 (TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.PlyRootModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyRootModel__ctor_m70F96F0795DD6B57ADAEE28C419A56033958CEED (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.PlyModel::set_Visibility(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlyModel_set_Visibility_mB2F9D43D393D00418E2B4A999974A1E18512D0A5_inline (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.PlyModel::set_LocalScale(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlyModel_set_LocalScale_m8055103EC8ADECCC5D3C535C098B33AA2E0275A8_inline (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.PlyModel::set_LocalRotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlyModel_set_LocalRotation_mA70C0956246A032C3C1C7EF5DE31A303ACE92BCB_inline (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.PlyModel::set_GeometryGroup(TriLibCore.Interfaces.IGeometryGroup)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlyModel_set_GeometryGroup_mC40A2CC9BD75EBA9305AA0FC6E9F1FFD51FDA055_inline (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.PlyRootModel::set_AllMaterials(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlyRootModel_set_AllMaterials_m30733607EFAAACE9110C2452A299D1D47D799C53_inline (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.PlyRootModel::set_AllTextures(System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlyRootModel_set_AllTextures_m7646524ECF24096720D3C48A840F554283D6212E_inline (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.PlyRootModel::set_AllGeometryGroups(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlyRootModel_set_AllGeometryGroups_m44BF8C7B4B75BCAA1C25B38D31F5FB90019FD3F1_inline (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.PlyModel::set_MaterialIndices(System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlyModel_set_MaterialIndices_m87FB1DB52736B0D10EBF7CA05C04C3B1A321F670_inline (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.InterpolatedVertex::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpolatedVertex__ctor_mA3F5FBB1EACDDB0F2B33E893A45FB89113C6787C (InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.InterpolatedVertex::SetPosition(UnityEngine.Vector3,TriLibCore.Interfaces.IGeometryGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpolatedVertex_SetPosition_m51A3B70131151C51E738A6EDCD4E5EBEF7C80E2C (InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, RuntimeObject* ___1_geometryGroup, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.InterpolatedVertex::SetNormal(UnityEngine.Vector3,TriLibCore.Interfaces.IGeometryGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpolatedVertex_SetNormal_m48EE21D1CFF1D80F3EAAD2689ABEE84102882ADC (InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, RuntimeObject* ___1_geometryGroup, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.InterpolatedVertex::SetColor(UnityEngine.Color,TriLibCore.Interfaces.IGeometryGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpolatedVertex_SetColor_m01F89204D2B248BE23E94620AE338F73D8C90AE5 (InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, RuntimeObject* ___1_geometryGroup, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.InterpolatedVertex::SetUV1(UnityEngine.Vector2,TriLibCore.Interfaces.IGeometryGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpolatedVertex_SetUV1_mA7C291101768A0EE2734CD2589D815DCC2454551 (InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, RuntimeObject* ___1_geometryGroup, const RuntimeMethod* method) ;
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyStreamReader::ToSByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyStreamReader_ToSByte_mE0CBD4AA736167D961A334A686A4851A2B107FD8 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) ;
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyValue::op_Implicit(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyValue_op_Implicit_m97A5AB6B334327E421C58927E78C773B6D809B53 (int8_t ___0_other, const RuntimeMethod* method) ;
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyStreamReader::ToByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyStreamReader_ToByte_mC8D36F8FD97FEBF03092492FCCFC77F27C669B31 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) ;
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyValue::op_Implicit(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyValue_op_Implicit_m9E7C391E8C4BAEF13B69CC7B0CEC87F250BD46A6 (uint8_t ___0_other, const RuntimeMethod* method) ;
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyStreamReader::ToInt16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyStreamReader_ToInt16_m15E305684870C3A4B737A95DA4212701C45830F9 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) ;
// System.Int16 TriLibCore.Utils.BigEndianBinaryReader::ReadInt16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t BigEndianBinaryReader_ReadInt16_m2646AC659077E17786022320078FBBDB8DCBC707 (BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* __this, const RuntimeMethod* method) ;
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyValue::op_Implicit(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyValue_op_Implicit_m78378AA8D6DDCEC09907E0927A06ED49418D4635 (int16_t ___0_other, const RuntimeMethod* method) ;
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyStreamReader::ToUInt16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyStreamReader_ToUInt16_m5E5F5DDAFA6CBF735A852FED4B1712FC914301AD (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) ;
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyValue::op_Implicit(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyValue_op_Implicit_m8B2B7375CC217E6E3345C812C647F7BB51FC0DC6 (uint16_t ___0_other, const RuntimeMethod* method) ;
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyStreamReader::ToInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyStreamReader_ToInt32_m9F2C9B5DB1E8C1E858934D60E8365C24B5F96E05 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) ;
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyValue::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyValue_op_Implicit_mCBC1637AE004264B6DC685D489B3DABF7C40CE8B (int32_t ___0_other, const RuntimeMethod* method) ;
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyStreamReader::ToUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyStreamReader_ToUInt32_mFE918D4E08D1EBBB095A75F4A6F4B0B0FF31E7AA (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) ;
// System.UInt32 TriLibCore.Utils.BigEndianBinaryReader::ReadUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BigEndianBinaryReader_ReadUInt32_mE3E235D63AC4B3633B15C0C70AAFA771DB825823 (BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* __this, const RuntimeMethod* method) ;
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyValue::op_Implicit(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyValue_op_Implicit_m29A5DE8027F986F1251009072C203966CA6B2CE4 (uint32_t ___0_other, const RuntimeMethod* method) ;
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyStreamReader::ToSingle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyStreamReader_ToSingle_m90ED33B30955513C54C102F1CF12293B87ED840D (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) ;
// System.Single TriLibCore.Utils.BigEndianBinaryReader::ReadSingle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BigEndianBinaryReader_ReadSingle_m5BE3F923D636289CE8D32BD988A36AF1D507BC8E (BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* __this, const RuntimeMethod* method) ;
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyValue::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyValue_op_Implicit_mABA4998D1201D014DFC2948ED728D84579823AB2 (float ___0_other, const RuntimeMethod* method) ;
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyStreamReader::ToDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyStreamReader_ToDouble_m24378FB1F25B30F14E4F1C4EDE8A61FE4AB2C467 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) ;
// System.Double TriLibCore.Utils.BigEndianBinaryReader::ReadDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BigEndianBinaryReader_ReadDouble_m807A1A1D9EE248DD7637AB40276E88CADDCAB32F (BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* __this, const RuntimeMethod* method) ;
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyValue::op_Implicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyValue_op_Implicit_m1A3B9DCC94933A941A05360494BF9C1D6A1F5FE0 (double ___0_other, const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcess_CoroutineU3Ed__71__ctor_m0F9970A9977027EFCCD920871A37A2F411DAE755 (U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.AssetLoaderContext::get_MainThreadStall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AssetLoaderContext_get_MainThreadStall_m053EBE09FC53155F1737B7291186187FD61CBFAE (AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Single TriLibCore.Ply.PlyValue::GetFloatValue(TriLibCore.Ply.PlyValue,TriLibCore.Ply.PlyPropertyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlyValue_GetFloatValue_m03C511897C1577C7BAE5C96F005AB99B7EEEE57D (PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 ___0_value, int32_t ___1_propertyType, const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.PlyModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyModel__ctor_mEBFCADB0E140C2324D5944AD85D4BED4CE3BC725 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.PlyStreamReader::CopyCharStreamToString(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyStreamReader_CopyCharStreamToString_mDEACAF07AF4EE3BA8B0378893465CF46BBEC3434 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, String_t* ___0_s, int32_t ___1_maxChars, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD (const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Char>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDDC6F7A9E98335D0828894600921FCF3A934DB0A (NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDDC6F7A9E98335D0828894600921FCF3A934DB0A_gshared)(___0_nativeArray, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemSet(System.Void*,System.Byte,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B (void* ___0_destination, uint8_t ___1_value, int64_t ___2_size, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B (String_t* __this, Il2CppChar ___0_c, int32_t ___1_count, const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.PlyStreamReader::set_Position(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlyStreamReader_set_Position_m763DA88CC440E9EAA48B2638BC5D5E717BB8C3F4_inline (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Ply.PlyStreamReader::get_Line()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyStreamReader_get_Line_m85F1A411C379BDFFA2DF9B1DD0BAFEDB96C54351 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Ply.PlyStreamReader::get_Column()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyStreamReader_get_Column_mCF0D5AB5A8D9AF918DE62EC471363E144ECD6441 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Int64 TriLibCore.Utils.HashUtils::GetHash(Unity.Collections.NativeArray`1<System.Char>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t HashUtils_GetHash_mCEFE61677CF3517B02E25BA0BC632C98C62F8C4E (NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A ___0_chars, int32_t ___1_count, const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.PlyStreamReader::UpdateStringFromCharString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyStreamReader_UpdateStringFromCharString_m48E78B576C5792EE9BEEA23388553D70A8D0D9EF (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> TriLibCore.AssetLoaderContext::AllocateNativeArray<System.Char>(System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A AssetLoaderContext_AllocateNativeArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mAD0223A80367EFCF9C419CD368BD1105DF0F1909 (AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* __this, int32_t ___0_maxChars, int32_t ___1_persistent, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A (*) (AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C*, int32_t, int32_t, const RuntimeMethod*))AssetLoaderContext_AllocateNativeArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mAD0223A80367EFCF9C419CD368BD1105DF0F1909_gshared)(__this, ___0_maxChars, ___1_persistent, method);
}
// System.String TriLibCore.Ply.PlyStreamReader::ReadValidTokenAsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlyStreamReader_ReadValidTokenAsString_mFCC30978B59DB8B8F0398C4E771EDB6B32CA4AFD (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) ;
// System.Boolean System.SByte::TryParse(System.String,System.SByte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SByte_TryParse_m9C205D94AB4FF1CA82EA082E38DD01A493A77ED6 (String_t* ___0_s, int8_t* ___1_result, const RuntimeMethod* method) ;
// System.Boolean System.Byte::TryParse(System.String,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_TryParse_mB1716E3B6714F20DF6C1FEDDC4A76AA78D5EA87B (String_t* ___0_s, uint8_t* ___1_result, const RuntimeMethod* method) ;
// System.Boolean System.Int16::TryParse(System.String,System.Int16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int16_TryParse_m7190AF18437CE1B43990B99E5D992E31485E77AE (String_t* ___0_s, int16_t* ___1_result, const RuntimeMethod* method) ;
// System.Boolean System.UInt16::TryParse(System.String,System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt16_TryParse_m02DD9A625527B4019B32ACC9A5D3B09D72B2FBB6 (String_t* ___0_s, uint16_t* ___1_result, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___0_s, int32_t* ___1_result, const RuntimeMethod* method) ;
// System.Boolean System.UInt32::TryParse(System.String,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_TryParse_mD470E3BAC9F792AB0BC616510AE3FA78C3CCB1E9 (String_t* ___0_s, uint32_t* ___1_result, const RuntimeMethod* method) ;
// System.Single System.Convert::ToSingle(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_m8416CDFFC7641BD79BE63F39D5FAEE28986FC636 (String_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mAA66A3AA3A6E53529E4F632BC69582B4B70D32B7 (String_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Char>::Dispose()
inline void NativeArray_1_Dispose_m11184C5FB1A1F3809B982476408F08F599F377F0 (NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A*, const RuntimeMethod*))NativeArray_1_Dispose_m11184C5FB1A1F3809B982476408F08F599F377F0_gshared)(__this, method);
}
// System.Void System.IO.StreamReader::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader_Dispose_mB7BA2F3F47444F6D00457E04462BC097EEE6D27C (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.String TriLibCore.Ply.PlyTexture::get_Filename()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlyTexture_get_Filename_mC7B533AE00B2654EC706CFF6F3DC659B7EA9E58D_inline (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Utils.TextureComparators::TextureEquals(TriLibCore.Interfaces.ITexture,TriLibCore.Interfaces.ITexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureComparators_TextureEquals_m566CCA88570A7A060514DCAEF48AE3170D743679 (RuntimeObject* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Utils.TextureComparators::Equals(TriLibCore.Interfaces.ITexture,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureComparators_Equals_mA1D187553F7AC8EB27F3C8D0F2D1316C5E05E4AC (RuntimeObject* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Utils.TextureComparators::GetHashCode(TriLibCore.Interfaces.ITexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureComparators_GetHashCode_mF57C0A300F03E349E694DB594CA2FF73427BECA3 (RuntimeObject* ___0_a, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IRootModel TriLibCore.ReaderBase::ReadStream(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReaderBase_ReadStream_m725378DF096B29E0DB3BE3FB9E5F1E37747883F4 (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___1_assetLoaderContext, String_t* ___2_filename, Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___3_onProgress, const RuntimeMethod* method) ;
// System.Void TriLibCore.ReaderBase::SetupStream(System.IO.Stream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase_SetupStream_mCDC78453E3657CB3FBB713C40FB50B4941455942 (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE** ___0_stream, const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.PlyProcessor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyProcessor__ctor_mEFE18083343802C21877A430538A1304EC1DC5E7 (PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* __this, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IRootModel TriLibCore.Ply.PlyProcessor::Process(TriLibCore.Ply.Reader.PlyReader,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyProcessor_Process_m5EC73F6D1F63A911A1C86747BB95E7948D0D0763 (PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* __this, PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* ___0_plyReader, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___1_stream, const RuntimeMethod* method) ;
// System.Void TriLibCore.ReaderBase::PostProcessModel(TriLibCore.Interfaces.IRootModel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase_PostProcessModel_mD3BB953DE8BEB5FCA65077455BDA0750F740C667 (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, RuntimeObject** ___0_model, const RuntimeMethod* method) ;
// System.Void TriLibCore.Ply.Reader.PlyReader/<ReadStream_Coroutine>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadStream_CoroutineU3Ed__9__ctor_mFC98791CD9C75E875795D972CD0E38FF0EF187DF (U3CReadStream_CoroutineU3Ed__9_tAEA60AB19AEF8EFAC748450AF70E3FCB0388A65C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void TriLibCore.ReaderBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase__ctor_m5C4FE7A4BC205B65DAB56FF3CC5202D0B04937DA (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IRootModel TriLibCore.Ply.Reader.PlyReader::<>n__0(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyReader_U3CU3En__0_m2FA457704C91A75A69B9E792BFD3D80E21B997D4 (PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___1_assetLoaderContext, String_t* ___2_filename, Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___3_onProgress, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TriLibCore.Ply.PlyProcessor::Process_Coroutine(TriLibCore.AssetLoaderContext,TriLibCore.Ply.Reader.PlyReader,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyProcessor_Process_Coroutine_m95FD30337417E682D9FC2B7D4A6ADFB65984EFCB (PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* __this, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___0__assetLoaderContext, PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* ___1_plyReader, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___2_stream, const RuntimeMethod* method) ;
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
// TriLibCore.Ply.PlyProperty TriLibCore.Ply.PlyElement::GetProperty(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280 (PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* __this, int64_t ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m843741FC841291E930E4C6AC02FFA6A75E4479D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* V_0 = NULL;
	bool V_1 = false;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* V_2 = NULL;
	{
		Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* L_0 = __this->___Properties_0;
		int64_t L_1 = ___0_propertyName;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m843741FC841291E930E4C6AC02FFA6A75E4479D5(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m843741FC841291E930E4C6AC02FFA6A75E4479D5_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_4 = V_0;
		V_2 = L_4;
		goto IL_001c;
	}

IL_0018:
	{
		V_2 = (PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL;
		goto IL_001c;
	}

IL_001c:
	{
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_5 = V_2;
		return L_5;
	}
}
// System.Int32 TriLibCore.Ply.PlyElement::GetListIndex(TriLibCore.Ply.PlyListProperty,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyElement_GetListIndex_m2725B97E4D677B68667107956C9D7E8A2C2565AF (PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* __this, PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* ___0_property, int32_t ___1_elementIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___1_elementIndex;
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_1 = __this->___Data_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_inline(L_1, List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_4 = __this->___Data_2;
		int32_t L_5 = ___1_elementIndex;
		NullCheck(L_4);
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_6;
		L_6 = List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641(L_4, L_5, List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_7 = ___0_property;
		NullCheck(L_7);
		int32_t L_8 = ((PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)L_7)->___Offset_1;
		NullCheck(L_6);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_9;
		L_9 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_6, L_8, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		int32_t L_10;
		L_10 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_9, 4, NULL);
		V_1 = L_10;
		goto IL_0038;
	}

IL_0034:
	{
		V_1 = 0;
		goto IL_0038;
	}

IL_0038:
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.Int32 TriLibCore.Ply.PlyElement::GetPropertyIntValue(TriLibCore.Ply.PlyProperty,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyElement_GetPropertyIntValue_m350C36F63BFB7DB71BBDE9219AE28BC400EAC124 (PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* __this, PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___0_property, int32_t ___1_elementIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___1_elementIndex;
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_1 = __this->___Data_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_inline(L_1, List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_4 = __this->___Data_2;
		int32_t L_5 = ___1_elementIndex;
		NullCheck(L_4);
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_6;
		L_6 = List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641(L_4, L_5, List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641_RuntimeMethod_var);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_7 = ___0_property;
		NullCheck(L_7);
		int32_t L_8 = L_7->___Offset_1;
		NullCheck(L_6);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_9;
		L_9 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_6, L_8, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_10 = ___0_property;
		int32_t L_11;
		L_11 = PlyValue_GetIntValue_mC5D8E3A04354E7AD052C4E0DA2DDC26DADC58ABD(L_9, L_10, NULL);
		V_1 = L_11;
		goto IL_0038;
	}

IL_0034:
	{
		V_1 = 0;
		goto IL_0038;
	}

IL_0038:
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Single TriLibCore.Ply.PlyElement::GetPropertyFloatValue(TriLibCore.Ply.PlyProperty,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlyElement_GetPropertyFloatValue_m7E87CAEA23D5D33F126AE7A44F4D6B28CD2283DC (PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* __this, PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___0_property, int32_t ___1_elementIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		int32_t L_0 = ___1_elementIndex;
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_1 = __this->___Data_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_inline(L_1, List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_4 = __this->___Data_2;
		int32_t L_5 = ___1_elementIndex;
		NullCheck(L_4);
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_6;
		L_6 = List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641(L_4, L_5, List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641_RuntimeMethod_var);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_7 = ___0_property;
		NullCheck(L_7);
		int32_t L_8 = L_7->___Offset_1;
		NullCheck(L_6);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_9;
		L_9 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_6, L_8, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_10 = ___0_property;
		float L_11;
		L_11 = PlyValue_GetFloatValue_mCE0211B08C054DE0848AEB2EF5E728F6D28E9830(L_9, L_10, NULL);
		V_1 = L_11;
		goto IL_003c;
	}

IL_0034:
	{
		V_1 = (0.0f);
		goto IL_003c;
	}

IL_003c:
	{
		float L_12 = V_1;
		return L_12;
	}
}
// System.Int32 TriLibCore.Ply.PlyElement::GetPropertyIntValue(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyElement_GetPropertyIntValue_m549C727BE63693831642CA3ADA3E87B879575681 (PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* __this, int64_t ___0_propertyName, int32_t ___1_elementIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m843741FC841291E930E4C6AC02FFA6A75E4479D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* L_0 = __this->___Properties_0;
		int64_t L_1 = ___0_propertyName;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m843741FC841291E930E4C6AC02FFA6A75E4479D5(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m843741FC841291E930E4C6AC02FFA6A75E4479D5_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = ___1_elementIndex;
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_4 = __this->___Data_2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_inline(L_4, List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_7 = __this->___Data_2;
		int32_t L_8 = ___1_elementIndex;
		NullCheck(L_7);
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_9;
		L_9 = List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641(L_7, L_8, List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641_RuntimeMethod_var);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___Offset_1;
		NullCheck(L_9);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_12;
		L_12 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_9, L_11, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_13 = V_0;
		int32_t L_14;
		L_14 = PlyValue_GetIntValue_mC5D8E3A04354E7AD052C4E0DA2DDC26DADC58ABD(L_12, L_13, NULL);
		V_2 = L_14;
		goto IL_004b;
	}

IL_0047:
	{
		V_2 = 0;
		goto IL_004b;
	}

IL_004b:
	{
		int32_t L_15 = V_2;
		return L_15;
	}
}
// System.Single TriLibCore.Ply.PlyElement::GetPropertyFloatValue(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlyElement_GetPropertyFloatValue_m9EEC47397083DC6B0C2DB937F43F12288EBF5713 (PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* __this, int64_t ___0_propertyName, int32_t ___1_elementIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m843741FC841291E930E4C6AC02FFA6A75E4479D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* V_0 = NULL;
	bool V_1 = false;
	float V_2 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* L_0 = __this->___Properties_0;
		int64_t L_1 = ___0_propertyName;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m843741FC841291E930E4C6AC02FFA6A75E4479D5(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m843741FC841291E930E4C6AC02FFA6A75E4479D5_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = ___1_elementIndex;
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_4 = __this->___Data_2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_inline(L_4, List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_7 = __this->___Data_2;
		int32_t L_8 = ___1_elementIndex;
		NullCheck(L_7);
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_9;
		L_9 = List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641(L_7, L_8, List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641_RuntimeMethod_var);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___Offset_1;
		NullCheck(L_9);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_12;
		L_12 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_9, L_11, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_13 = V_0;
		float L_14;
		L_14 = PlyValue_GetFloatValue_mCE0211B08C054DE0848AEB2EF5E728F6D28E9830(L_12, L_13, NULL);
		V_2 = L_14;
		goto IL_004f;
	}

IL_0047:
	{
		V_2 = (0.0f);
		goto IL_004f;
	}

IL_004f:
	{
		float L_15 = V_2;
		return L_15;
	}
}
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyElement::GetPropertyValue(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyElement_GetPropertyValue_m54D889CCBE95674ACF860EF9F81AF8B2432AD8AE (PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* __this, int64_t ___0_propertyName, int32_t ___1_elementIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m843741FC841291E930E4C6AC02FFA6A75E4479D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* V_0 = NULL;
	bool V_1 = false;
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_2;
	memset((&V_2), 0, sizeof(V_2));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* L_0 = __this->___Properties_0;
		int64_t L_1 = ___0_propertyName;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m843741FC841291E930E4C6AC02FFA6A75E4479D5(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m843741FC841291E930E4C6AC02FFA6A75E4479D5_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = ___1_elementIndex;
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_4 = __this->___Data_2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_inline(L_4, List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_7 = __this->___Data_2;
		int32_t L_8 = ___1_elementIndex;
		NullCheck(L_7);
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_9;
		L_9 = List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641(L_7, L_8, List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641_RuntimeMethod_var);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___Offset_1;
		NullCheck(L_9);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_12;
		L_12 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_9, L_11, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		V_2 = L_12;
		goto IL_004d;
	}

IL_0041:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41));
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_13 = V_3;
		V_2 = L_13;
		goto IL_004d;
	}

IL_004d:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_14 = V_2;
		return L_14;
	}
}
// System.Void TriLibCore.Ply.PlyElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyElement__ctor_mCA04905EABE9EB079C06C05A9EBB680CF4A4DBE3 (PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9E31627A68563218A84912174B1A3CCFF5D9D3DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* L_0 = (Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680*)il2cpp_codegen_object_new(Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m9E31627A68563218A84912174B1A3CCFF5D9D3DB(L_0, Dictionary_2__ctor_m9E31627A68563218A84912174B1A3CCFF5D9D3DB_RuntimeMethod_var);
		__this->___Properties_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Properties_0), (void*)L_0);
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
// System.Void TriLibCore.Ply.PlyGeometry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyGeometry__ctor_mAB017E5BE0639E760A21FFAE52BC5E61E0C2DAB3 (PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* __this, const RuntimeMethod* method) 
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
// System.Void TriLibCore.Ply.PlyListProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyListProperty__ctor_m913A103F9505DB2EC35D68434C7B1676D0F26196 (PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* __this, const RuntimeMethod* method) 
{
	{
		PlyProperty__ctor_mB9404ABEA64DE21D9C16B8FCF8FA95FEA5C8221F(__this, NULL);
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
// System.String TriLibCore.Ply.PlyMaterial::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlyMaterial_get_Name_m54A587097E8F94AFB2B1D87C1DEE2D511BE7F301 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyMaterial::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyMaterial_set_Name_m19C50592D6E7B2401AB6B929B781ADA4A5173275 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Boolean TriLibCore.Ply.PlyMaterial::get_Used()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlyMaterial_get_Used_m279786A7462AB5FF3B8FF1AF7E2B5F211BD28CD7 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CUsedU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyMaterial::set_Used(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyMaterial_set_Used_m196A9298FD117D668A9434E8F4CC5D453C6AE2FE (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CUsedU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean TriLibCore.Ply.PlyMaterial::get_UsesAlpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlyMaterial_get_UsesAlpha_m10730988369C15A5C7D903525DFA0BBE07573EC4 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean TriLibCore.Ply.PlyMaterial::ApplyOffsetAndScale(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlyMaterial_ApplyOffsetAndScale_m5B80D869ED2D450CAB555B1F122A743F493B189B (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___0_textureLoadingContext, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyMaterial::AddProperty(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyMaterial_AddProperty_m4FE8AE6161D498A95286AC015BD2E1B2EC41E3B4 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, String_t* ___0_propertyName, RuntimeObject* ___1_propertyValue, bool ___2_isTexture, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____properties_0;
		String_t* L_1 = ___0_propertyName;
		RuntimeObject* L_2 = ___1_propertyValue;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.String TriLibCore.Ply.PlyMaterial::GetGenericPropertyName(TriLibCore.General.GenericMaterialProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlyMaterial_GetGenericPropertyName_m41CB8C3D4FBAC86A36411C2405D56BA48F3819ED (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, int32_t ___0_genericMaterialProperty, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31A9B06BE46B0E2BB27797EDC5BAE6C2BFA4ABF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D934867D69D7E986A4C224DB49CF270468DE64D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral711AA001951412D09872DB5FA0B90EA6875A17F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A12A09E76D9C6C6FAD55C385BB87538EF591395);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t L_0 = ___0_genericMaterialProperty;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_0051;
			}
			case 3:
			{
				goto IL_0059;
			}
			case 4:
			{
				goto IL_005b;
			}
			case 5:
			{
				goto IL_005d;
			}
			case 6:
			{
				goto IL_0065;
			}
			case 7:
			{
				goto IL_0067;
			}
			case 8:
			{
				goto IL_0069;
			}
			case 9:
			{
				goto IL_006b;
			}
			case 10:
			{
				goto IL_006d;
			}
			case 11:
			{
				goto IL_006f;
			}
			case 12:
			{
				goto IL_0071;
			}
		}
	}
	{
		goto IL_0073;
	}

IL_0041:
	{
		V_2 = _stringLiteral31A9B06BE46B0E2BB27797EDC5BAE6C2BFA4ABF0;
		goto IL_0077;
	}

IL_0049:
	{
		V_2 = _stringLiteral7A12A09E76D9C6C6FAD55C385BB87538EF591395;
		goto IL_0077;
	}

IL_0051:
	{
		V_2 = _stringLiteral711AA001951412D09872DB5FA0B90EA6875A17F9;
		goto IL_0077;
	}

IL_0059:
	{
		goto IL_0073;
	}

IL_005b:
	{
		goto IL_0073;
	}

IL_005d:
	{
		V_2 = _stringLiteral5D934867D69D7E986A4C224DB49CF270468DE64D;
		goto IL_0077;
	}

IL_0065:
	{
		goto IL_0073;
	}

IL_0067:
	{
		goto IL_0073;
	}

IL_0069:
	{
		goto IL_0073;
	}

IL_006b:
	{
		goto IL_0073;
	}

IL_006d:
	{
		goto IL_0073;
	}

IL_006f:
	{
		goto IL_0073;
	}

IL_0071:
	{
		goto IL_0073;
	}

IL_0073:
	{
		V_2 = (String_t*)NULL;
		goto IL_0077;
	}

IL_0077:
	{
		String_t* L_3 = V_2;
		return L_3;
	}
}
// UnityEngine.Color TriLibCore.Ply.PlyMaterial::GetGenericColorValueMultiplied(TriLibCore.General.GenericMaterialProperty,TriLibCore.MaterialMapperContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F PlyMaterial_GetGenericColorValueMultiplied_mEA66D711A7AEFBDEB2F136A37E7A2C593B98ED70 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, int32_t ___0_genericMaterialProperty, MaterialMapperContext_t2BDF775C916A28A411960E3787DC933D2E9F0042* ___1_materialMapperContext, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_genericMaterialProperty;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = PlyMaterial_GetGenericColorValue_mDAB3E44868BCA99887DF188037E7A7E9A48E36E4(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = V_0;
		return L_2;
	}
}
// System.Single TriLibCore.Ply.PlyMaterial::GetGenericFloatValueMultiplied(TriLibCore.General.GenericMaterialProperty,TriLibCore.MaterialMapperContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlyMaterial_GetGenericFloatValueMultiplied_mEED07914F8FCDF325559890980BCDE7FED5EC363 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, int32_t ___0_genericMaterialProperty, MaterialMapperContext_t2BDF775C916A28A411960E3787DC933D2E9F0042* ___1_materialMapperContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0A80239664746BB5A8F67D47C690B1D476A5F49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF85DFEE8E7ED0F83CF41E7E6F08E0DAACA5F3C3B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B11_0 = 0.0f;
	{
		int32_t L_0 = ___0_genericMaterialProperty;
		float L_1;
		L_1 = PlyMaterial_GetGenericFloatValue_m5BC4612B3D15C6C0ABE4E7B0A14CE34CA6EAF21F(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___0_genericMaterialProperty;
		V_2 = L_2;
		int32_t L_3 = V_2;
		V_1 = L_3;
		int32_t L_4 = V_1;
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0038;
		}
	}
	{
		goto IL_0058;
	}

IL_0018:
	{
		bool L_6;
		L_6 = PlyMaterial_HasProperty_mB36FB6DBB9CF41BD74A5C793E011AF62FA370EF4(__this, _stringLiteralF85DFEE8E7ED0F83CF41E7E6F08E0DAACA5F3C3B, NULL);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		float L_7 = V_0;
		G_B7_0 = L_7;
		goto IL_0035;
	}

IL_0028:
	{
		float L_8;
		L_8 = PlyMaterial_GetFloatValue_mB021B41CE867CAC9BC3A68FD86F956FFBC9566D3(__this, _stringLiteralF85DFEE8E7ED0F83CF41E7E6F08E0DAACA5F3C3B, NULL);
		float L_9 = V_0;
		G_B7_0 = ((float)il2cpp_codegen_multiply(L_8, L_9));
	}

IL_0035:
	{
		V_3 = G_B7_0;
		goto IL_005c;
	}

IL_0038:
	{
		bool L_10;
		L_10 = PlyMaterial_HasProperty_mB36FB6DBB9CF41BD74A5C793E011AF62FA370EF4(__this, _stringLiteralF0A80239664746BB5A8F67D47C690B1D476A5F49, NULL);
		if (L_10)
		{
			goto IL_0048;
		}
	}
	{
		float L_11 = V_0;
		G_B11_0 = L_11;
		goto IL_0055;
	}

IL_0048:
	{
		float L_12;
		L_12 = PlyMaterial_GetFloatValue_mB021B41CE867CAC9BC3A68FD86F956FFBC9566D3(__this, _stringLiteralF0A80239664746BB5A8F67D47C690B1D476A5F49, NULL);
		float L_13 = V_0;
		G_B11_0 = ((float)il2cpp_codegen_multiply(L_12, L_13));
	}

IL_0055:
	{
		V_3 = G_B11_0;
		goto IL_005c;
	}

IL_0058:
	{
		float L_14 = V_0;
		V_3 = L_14;
		goto IL_005c;
	}

IL_005c:
	{
		float L_15 = V_3;
		return L_15;
	}
}
// System.Single TriLibCore.Ply.PlyMaterial::GetGenericFloatValue(TriLibCore.General.GenericMaterialProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlyMaterial_GetGenericFloatValue_m5BC4612B3D15C6C0ABE4E7B0A14CE34CA6EAF21F (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, int32_t ___0_materialProperty, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	bool V_1 = false;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___0_materialProperty;
		String_t* L_1;
		L_1 = PlyMaterial_GetGenericPropertyName_m41CB8C3D4FBAC86A36411C2405D56BA48F3819ED(__this, L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = PlyMaterial_HasProperty_mB36FB6DBB9CF41BD74A5C793E011AF62FA370EF4(__this, L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_5 = V_0;
		float L_6;
		L_6 = PlyMaterial_GetFloatValue_mB021B41CE867CAC9BC3A68FD86F956FFBC9566D3(__this, L_5, NULL);
		V_2 = L_6;
		goto IL_0044;
	}

IL_001f:
	{
		int32_t L_7 = ___0_materialProperty;
		V_4 = L_7;
		int32_t L_8 = V_4;
		V_3 = L_8;
		int32_t L_9 = V_3;
		if ((((int32_t)L_9) == ((int32_t)5)))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_10 = V_3;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, ((int32_t)14)))) > ((uint32_t)1))))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_003c;
	}

IL_0034:
	{
		V_2 = (1.0f);
		goto IL_0044;
	}

IL_003c:
	{
		V_2 = (0.0f);
		goto IL_0044;
	}

IL_0044:
	{
		float L_11 = V_2;
		return L_11;
	}
}
// System.Int32 TriLibCore.Ply.PlyMaterial::GetGenericIntValue(TriLibCore.General.GenericMaterialProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyMaterial_GetGenericIntValue_m1A8A5B1C7E490BB77374C57FB051030D07106365 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, int32_t ___0_materialProperty, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_materialProperty;
		String_t* L_1;
		L_1 = PlyMaterial_GetGenericPropertyName_m41CB8C3D4FBAC86A36411C2405D56BA48F3819ED(__this, L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		int32_t L_3;
		L_3 = PlyMaterial_GetIntValue_m7D4FA27F9231A957F97E091EAB1D9A7C546D88BD(__this, L_2, NULL);
		V_1 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.String TriLibCore.Ply.PlyMaterial::GetGenericStringValue(TriLibCore.General.GenericMaterialProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlyMaterial_GetGenericStringValue_m773F3DC4FFF0053AA1FBDEAA1BBBA4F78CE749B2 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, int32_t ___0_materialProperty, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		int32_t L_0 = ___0_materialProperty;
		String_t* L_1;
		L_1 = PlyMaterial_GetGenericPropertyName_m41CB8C3D4FBAC86A36411C2405D56BA48F3819ED(__this, L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		String_t* L_3;
		L_3 = PlyMaterial_GetStringValue_mB6CCF7EB09045885C1FFECC7C84CBB6CEDE49F8D(__this, L_2, NULL);
		V_1 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		String_t* L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Vector3 TriLibCore.Ply.PlyMaterial::GetGenericVector3Value(TriLibCore.General.GenericMaterialProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlyMaterial_GetGenericVector3Value_m290D51A7F75621453CE0B08A3BDA449B4DB5339A (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, int32_t ___0_materialProperty, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___0_materialProperty;
		String_t* L_1;
		L_1 = PlyMaterial_GetGenericPropertyName_m41CB8C3D4FBAC86A36411C2405D56BA48F3819ED(__this, L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = PlyMaterial_GetVector3Value_m2A6EE04EE31489DDD7A1003E00BF79C86A81D504(__this, L_2, NULL);
		V_1 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Vector4 TriLibCore.Ply.PlyMaterial::GetGenericVector4Value(TriLibCore.General.GenericMaterialProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 PlyMaterial_GetGenericVector4Value_mFD7F4A61ACCD901CD5C4536BA4887495624BA7B4 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, int32_t ___0_materialProperty, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___0_materialProperty;
		String_t* L_1;
		L_1 = PlyMaterial_GetGenericPropertyName_m41CB8C3D4FBAC86A36411C2405D56BA48F3819ED(__this, L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = PlyMaterial_GetVector4Value_m1AC8F1CBBF1703484EEB7833978B1CFC20F4FAB3(__this, L_2, NULL);
		V_1 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Color TriLibCore.Ply.PlyMaterial::GetGenericColorValue(TriLibCore.General.GenericMaterialProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F PlyMaterial_GetGenericColorValue_mDAB3E44868BCA99887DF188037E7A7E9A48E36E4 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, int32_t ___0_materialProperty, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	bool V_1 = false;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		int32_t L_0 = ___0_materialProperty;
		String_t* L_1;
		L_1 = PlyMaterial_GetGenericPropertyName_m41CB8C3D4FBAC86A36411C2405D56BA48F3819ED(__this, L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = PlyMaterial_HasProperty_mB36FB6DBB9CF41BD74A5C793E011AF62FA370EF4(__this, L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_5 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = PlyMaterial_GetColorValue_m8B4EA23BBCF1DF22DDFA1A4D1DC3E389A317151D(__this, L_5, NULL);
		V_2 = L_6;
		goto IL_0032;
	}

IL_001f:
	{
		int32_t L_7 = ___0_materialProperty;
		if ((((int32_t)L_7) == ((int32_t)8)))
		{
			goto IL_002a;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B5_0 = L_8;
		goto IL_002f;
	}

IL_002a:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		G_B5_0 = L_9;
	}

IL_002f:
	{
		V_2 = G_B5_0;
		goto IL_0032;
	}

IL_0032:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = V_2;
		return L_10;
	}
}
// TriLibCore.Interfaces.ITexture TriLibCore.Ply.PlyMaterial::GetGenericTextureValue(TriLibCore.General.GenericMaterialProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyMaterial_GetGenericTextureValue_m714CD0589E2C233733BD63C60CEAF32EC2AFB41B (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, int32_t ___0_materialProperty, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = ___0_materialProperty;
		String_t* L_1;
		L_1 = PlyMaterial_GetGenericPropertyName_m41CB8C3D4FBAC86A36411C2405D56BA48F3819ED(__this, L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		RuntimeObject* L_3;
		L_3 = PlyMaterial_GetTextureValue_mCCE6C1448D7F8075D1560B44FFC67773456373BD(__this, L_2, NULL);
		V_1 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Boolean TriLibCore.Ply.PlyMaterial::get_DoubleSided()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlyMaterial_get_DoubleSided_m3461A171132FCED5C0F12A1BAF2431B57698218C (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CDoubleSidedU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyMaterial::set_DoubleSided(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyMaterial_set_DoubleSided_m0EA3780754EF50BDA9B51BAE705600F30A0E4D66 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CDoubleSidedU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean TriLibCore.Ply.PlyMaterial::get_MixAlbedoColorWithTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlyMaterial_get_MixAlbedoColorWithTexture_mB64547C2F9B8EFD8528DD63910EF17A3655A107F (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Single TriLibCore.Ply.PlyMaterial::GetFloatValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlyMaterial_GetFloatValue_mB021B41CE867CAC9BC3A68FD86F956FFBC9566D3 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, String_t* ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		RuntimeObject* L_0 = __this->____properties_0;
		String_t* L_1 = ___0_propertyName;
		bool L_2;
		L_2 = DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9(L_0, L_1, (&V_0), DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		float L_6;
		L_6 = Convert_ToSingle_mEC65F60A081FBBB8ACBCD8747183FEDDAEC034C9(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_002a;
	}

IL_0022:
	{
		V_2 = (0.0f);
		goto IL_002a;
	}

IL_002a:
	{
		float L_7 = V_2;
		return L_7;
	}
}
// System.Int32 TriLibCore.Ply.PlyMaterial::GetIntValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyMaterial_GetIntValue_m7D4FA27F9231A957F97E091EAB1D9A7C546D88BD (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, String_t* ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = __this->____properties_0;
		String_t* L_1 = ___0_propertyName;
		bool L_2;
		L_2 = DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9(L_0, L_1, (&V_0), DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297(L_4, NULL);
		V_2 = L_5;
		goto IL_0021;
	}

IL_001d:
	{
		V_2 = 0;
		goto IL_0021;
	}

IL_0021:
	{
		int32_t L_6 = V_2;
		return L_6;
	}
}
// System.String TriLibCore.Ply.PlyMaterial::GetStringValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlyMaterial_GetStringValue_mB6CCF7EB09045885C1FFECC7C84CBB6CEDE49F8D (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, String_t* ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		RuntimeObject* L_0 = __this->____properties_0;
		String_t* L_1 = ___0_propertyName;
		bool L_2;
		L_2 = DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9(L_0, L_1, (&V_0), DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = Convert_ToString_m833ABF9C901B707B28FB10DEBFCC511A87E6C827(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_0022:
	{
		V_2 = (String_t*)NULL;
		goto IL_0026;
	}

IL_0026:
	{
		String_t* L_7 = V_2;
		return L_7;
	}
}
// UnityEngine.Vector3 TriLibCore.Ply.PlyMaterial::GetVector3Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlyMaterial_GetVector3Value_m2A6EE04EE31489DDD7A1003E00BF79C86A81D504 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, String_t* ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = __this->____properties_0;
		String_t* L_1 = ___0_propertyName;
		bool L_2;
		L_2 = DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9(L_0, L_1, (&V_0), DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		V_2 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		goto IL_0025;
	}

IL_001d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_5;
		goto IL_0025;
	}

IL_0025:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_2;
		return L_6;
	}
}
// UnityEngine.Vector4 TriLibCore.Ply.PlyMaterial::GetVector4Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 PlyMaterial_GetVector4Value_m1AC8F1CBBF1703484EEB7833978B1CFC20F4FAB3 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, String_t* ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = __this->____properties_0;
		String_t* L_1 = ___0_propertyName;
		bool L_2;
		L_2 = DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9(L_0, L_1, (&V_0), DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		V_2 = ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_4, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))));
		goto IL_0025;
	}

IL_001d:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		V_2 = L_5;
		goto IL_0025;
	}

IL_0025:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = V_2;
		return L_6;
	}
}
// UnityEngine.Color TriLibCore.Ply.PlyMaterial::GetColorValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F PlyMaterial_GetColorValue_m8B4EA23BBCF1DF22DDFA1A4D1DC3E389A317151D (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, String_t* ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = __this->____properties_0;
		String_t* L_1 = ___0_propertyName;
		bool L_2;
		L_2 = DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9(L_0, L_1, (&V_0), DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		V_2 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_4, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var))));
		goto IL_0025;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		V_2 = L_5;
		goto IL_0025;
	}

IL_0025:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_2;
		return L_6;
	}
}
// TriLibCore.Interfaces.ITexture TriLibCore.Ply.PlyMaterial::GetTextureValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyMaterial_GetTextureValue_mCCE6C1448D7F8075D1560B44FFC67773456373BD (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, String_t* ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = __this->____properties_0;
		String_t* L_1 = ___0_propertyName;
		bool L_2;
		L_2 = DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9(L_0, L_1, (&V_0), DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_4, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var));
		goto IL_0021;
	}

IL_001d:
	{
		V_2 = (RuntimeObject*)NULL;
		goto IL_0021;
	}

IL_0021:
	{
		RuntimeObject* L_5 = V_2;
		return L_5;
	}
}
// System.Boolean TriLibCore.Ply.PlyMaterial::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlyMaterial_HasProperty_mB36FB6DBB9CF41BD74A5C793E011AF62FA370EF4 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, String_t* ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		String_t* L_0 = ___0_propertyName;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_001d;
	}

IL_000e:
	{
		RuntimeObject* L_2 = __this->____properties_0;
		String_t* L_3 = ___0_propertyName;
		NullCheck(L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::ContainsKey(TKey) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_2, L_3);
		V_1 = L_4;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean TriLibCore.Ply.PlyMaterial::PostProcessTexture(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlyMaterial_PostProcessTexture_mC3A114926CED68DB064AD5C3E0B4B9897B90A7A7 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___0_textureLoadingContext, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// TriLibCore.General.MaterialShadingSetup TriLibCore.Ply.PlyMaterial::get_MaterialShadingSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyMaterial_get_MaterialShadingSetup_mD3E1C18BB9009824CB19AE3C9E2C5336B88EDF86 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(0);
	}
}
// System.Int32 TriLibCore.Ply.PlyMaterial::get_Index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyMaterial_get_Index_m86296D07FEC2B7328E79B65F27F2CCF3FBF52CB6 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CIndexU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyMaterial::set_Index(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyMaterial_set_Index_mEEC9E37FB853F46E7A19C7A52BE8EACD41464726 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CIndexU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean TriLibCore.Ply.PlyMaterial::get_IsAutodeskInteractive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlyMaterial_get_IsAutodeskInteractive_m93EF914605E808CC015BC296A6264189CA1723BF (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean TriLibCore.Ply.PlyMaterial::get_Processing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlyMaterial_get_Processing_m0802899F8D77404838C1A03656F7D8194647EDE0 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CProcessingU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyMaterial::set_Processing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyMaterial_set_Processing_m8B3AD98212FFFEF97178367ED53A6721C7EB3A30 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CProcessingU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean TriLibCore.Ply.PlyMaterial::get_Processed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlyMaterial_get_Processed_m4A229D7F2F4D561E967843FA02944C6577B2A3B1 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CProcessedU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyMaterial::set_Processed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyMaterial_set_Processed_mB61CBCE093EEDFBDEDB552EE699D828246D02D53 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CProcessedU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void TriLibCore.Ply.PlyMaterial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyMaterial__ctor_m9669AF4D43AE12DEEBD8F46D99D869AC68470623 (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		__this->____properties_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____properties_0), (void*)L_0);
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
// System.String TriLibCore.Ply.PlyModel::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlyModel_get_Name_mF0BDCE3B91DCB49F6E648F411F06E052FF253F89 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyModel::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyModel_set_Name_mB0545A2AC135FF460356C404C341D07492F5A947 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean TriLibCore.Ply.PlyModel::get_Used()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlyModel_get_Used_mC5E3586114B0170C2F1ED7E0DA54F41C02C00CDA (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CUsedU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyModel::set_Used(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyModel_set_Used_m28EE472AF323C8624DFAC59921796B5D4EA466E4 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CUsedU3Ek__BackingField_1 = L_0;
		return;
	}
}
// UnityEngine.Vector3 TriLibCore.Ply.PlyModel::get_Pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlyModel_get_Pivot_mB0FD3CD6AF837F441CF2B40A90340D3C3997478D (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CPivotU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyModel::set_Pivot(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyModel_set_Pivot_m7B0CB45AC74B2D12F88E8EB3C466E080F95AB836 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CPivotU3Ek__BackingField_2 = L_0;
		return;
	}
}
// UnityEngine.Vector3 TriLibCore.Ply.PlyModel::get_LocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlyModel_get_LocalPosition_mE3FF50F7187BD62507B5D3784D095D8C9B35E4A5 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CLocalPositionU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyModel::set_LocalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyModel_set_LocalPosition_m4EE2F1140E54628187D835C46B714786CA91A00E (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CLocalPositionU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Quaternion TriLibCore.Ply.PlyModel::get_LocalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 PlyModel_get_LocalRotation_m1078D001C1CBD948043CD523CACC269309714801 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CLocalRotationU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyModel::set_LocalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyModel_set_LocalRotation_mA70C0956246A032C3C1C7EF5DE31A303ACE92BCB (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_value;
		__this->___U3CLocalRotationU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.Vector3 TriLibCore.Ply.PlyModel::get_LocalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlyModel_get_LocalScale_mFD0963A88F33509830230E45F28455908AA5AF8B (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CLocalScaleU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyModel::set_LocalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyModel_set_LocalScale_m8055103EC8ADECCC5D3C535C098B33AA2E0275A8 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CLocalScaleU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean TriLibCore.Ply.PlyModel::get_Visibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlyModel_get_Visibility_m05DD6DA57D686D28227A8ECEAF1F9C9AD38BEFC0 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CVisibilityU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyModel::set_Visibility(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyModel_set_Visibility_mB2F9D43D393D00418E2B4A999974A1E18512D0A5 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CVisibilityU3Ek__BackingField_6 = L_0;
		return;
	}
}
// TriLibCore.Interfaces.IModel TriLibCore.Ply.PlyModel::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyModel_get_Parent_mF779F71B9255A3EF8AB620C52F9D76CE58B5CEC2 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CParentU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyModel::set_Parent(TriLibCore.Interfaces.IModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyModel_set_Parent_m99F48AE75EB3BB67A8F0FE3F66FF6FE36D967632 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CParentU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParentU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Ply.PlyModel::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyModel_get_Children_m26E002636866B1E9AA9AB811F8561851268713A0 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CChildrenU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyModel::set_Children(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyModel_set_Children_m5974B6A0462643BBB03B474D8B385C8229E3D8E7 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CChildrenU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CChildrenU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Boolean TriLibCore.Ply.PlyModel::get_IsBone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlyModel_get_IsBone_mC5839F63DF0EB6236BB3B56E3269000B5CD3C967 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsBoneU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyModel::set_IsBone(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyModel_set_IsBone_m92089BEA168813ED0EE77D6DBABD52DA0EF08BED (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsBoneU3Ek__BackingField_9 = L_0;
		return;
	}
}
// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Ply.PlyModel::get_GeometryGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyModel_get_GeometryGroup_m87508AF996BC6F6F32703130D5CB2ADEF2591D72 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CGeometryGroupU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyModel::set_GeometryGroup(TriLibCore.Interfaces.IGeometryGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyModel_set_GeometryGroup_mC40A2CC9BD75EBA9305AA0FC6E9F1FFD51FDA055 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CGeometryGroupU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGeometryGroupU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Ply.PlyModel::get_Bones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyModel_get_Bones_m277FE79B58C61B6C3EE2C072DC040138E20EF09C (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CBonesU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyModel::set_Bones(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyModel_set_Bones_m177A9FF5F6AE222F6509F1FBD882EBC6627D2D7D (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CBonesU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBonesU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
// UnityEngine.Matrix4x4[] TriLibCore.Ply.PlyModel::get_BindPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* PlyModel_get_BindPoses_mC76BFFB52EF866ADA3BBCFA4D0A8AC325948ADA3 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, const RuntimeMethod* method) 
{
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = __this->___U3CBindPosesU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyModel::set_BindPoses(UnityEngine.Matrix4x4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyModel_set_BindPoses_mA237F6AD2E675FAED03AF15C13A6FADDF32129D0 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = ___0_value;
		__this->___U3CBindPosesU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBindPosesU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Ply.PlyModel::get_MaterialIndices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyModel_get_MaterialIndices_m64F59A9A38D7B2B58C7E9F5DE334FC7DB05875F8 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMaterialIndicesU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyModel::set_MaterialIndices(System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyModel_set_MaterialIndices_m87FB1DB52736B0D10EBF7CA05C04C3B1A321F670 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMaterialIndicesU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMaterialIndicesU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> TriLibCore.Ply.PlyModel::get_UserProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* PlyModel_get_UserProperties_m748D4198E6502894B72A6D19A47D1205315DEB99 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___U3CUserPropertiesU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyModel::set_UserProperties(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyModel_set_UserProperties_m9FE64E4C5A0D07266A7CBE9878294B9A825EE0E3 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___0_value, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___0_value;
		__this->___U3CUserPropertiesU3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserPropertiesU3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
// System.Boolean TriLibCore.Ply.PlyModel::get_HasCustomPivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlyModel_get_HasCustomPivot_mF89CC850D7D4A56D2A46CEFF385384213D98983C (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CHasCustomPivotU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyModel::set_HasCustomPivot(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyModel_set_HasCustomPivot_m660625D5D21D8C2F0C5C711357ECB5EC550B1B67 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CHasCustomPivotU3Ek__BackingField_15 = L_0;
		return;
	}
}
// UnityEngine.Matrix4x4 TriLibCore.Ply.PlyModel::get_OriginalGlobalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 PlyModel_get_OriginalGlobalMatrix_mC8ADC3FCD60F489EE9A02B577A5AA7B3D50F8EA4 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = __this->___U3COriginalGlobalMatrixU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyModel::set_OriginalGlobalMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyModel_set_OriginalGlobalMatrix_mABF960688F3BF36A670F83F799143634D3BD0240 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___0_value;
		__this->___U3COriginalGlobalMatrixU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.String TriLibCore.Ply.PlyModel::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlyModel_ToString_mD5566D539F1B85F3C6F029F9A3B521463D9C2A84 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = PlyModel_get_Name_mF0BDCE3B91DCB49F6E648F411F06E052FF253F89_inline(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void TriLibCore.Ply.PlyModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyModel__ctor_mEBFCADB0E140C2324D5944AD85D4BED4CE3BC725 (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, const RuntimeMethod* method) 
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
// TriLibCore.Interfaces.IRootModel TriLibCore.Ply.PlyProcessor::Process(TriLibCore.Ply.Reader.PlyReader,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyProcessor_Process_m5EC73F6D1F63A911A1C86747BB95E7948D0D0763 (PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* __this, PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* ___0_plyReader, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___1_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m13BA45BD072C072ECDC20ED17980959D50DCDEBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m7E3EF4351105771F2D6EB167BE29E7868CFC84F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m181BAACEB7905BC572C38343BF7DDA866E9415FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4795CFCFA1CA4807CD85E1818CEC2A7EBC2E336C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m270BB8BF6E2728FF1BE69D236B3C1BB5E5D60BFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m66C7C3835140D396B2941C5FF726A8435575E421_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mD47C7DCD10B474F8DB55896C6B5F276ACA9E2BC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m16443C4F8A0449761F7E9532DA13EE62BC66A959_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFB43E311F648679BE046A19C9351234B9C43A1CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m355F0050D35C5CECAB616FAD6BD09BCDF75ED2AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3A6AF59F5158004E0E8F5D30912F0B3D578BAD20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m16B76A6F6611FB82F01BB3EA7B36F6BE9AC3B558_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA527966D30259A4C4C030B11F4DFEE3029C1076F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t77739521790EB7E3F514D44638D90AB775EDE8ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tD4699121F1986A1CF0F28D10E91389DD1C7FDE69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tEF23B8A78E9122DAA952DB1517D31EB7EC90563B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tFC51DD83E1437529AA19214EFADD5EE83B73CD6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGeometryGroup_GetGeometry_TisPlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277_mD3FEA40366BC6279E62F5984369E846ADFC1D016_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t0662D113B996C51F1676FFC848F7B3448D818DB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t4EEE459A249DDE104FA2E88234C593389EE5D291_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListUtils_FixIndex_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA7050D5E386674C2B99B38CF8EE1F3E237BAC447_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListUtils_FixIndex_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m80E31C1F387DAA4115F14B5463CADE1DEF297D2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListUtils_FixIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD45AFFDDC575B7D4965A6B58B98B7D88ED4323EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m096BE2FF8568855341E87C1DE6291916F89A8203_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m37A1197D84857A9512633D2FB5380FCAC7AB381E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7C99F2FA69D684BD5B7E22B8A115DA258EA04CB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m179CF1BDD503F830F79CF1A81033083C1BB19E05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m27475592735C318973899086F95036A18B6D7E39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m71DCE2DD53C6EFD6DF99B2592A347DFD0F9106C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m893153D76F05AFF53207ABCA86290836BCC7B122_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDBC3F8F2846CD821DA096BECD6300438E2409BC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEEA3C6B55707EC6755329113F4C364960AA66CEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m7A2633FD76AC8804D68EEB036B996CAF5FDC7754_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mD927D6AC4BE78DAED8A83775F0D1FEF91A756B4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31A9B06BE46B0E2BB27797EDC5BAE6C2BFA4ABF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D934867D69D7E986A4C224DB49CF270468DE64D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral711AA001951412D09872DB5FA0B90EA6875A17F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A12A09E76D9C6C6FAD55C385BB87538EF591395);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC* V_0 = NULL;
	List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* V_1 = NULL;
	PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* V_6 = NULL;
	List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* V_10 = NULL;
	float V_11 = 0.0f;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_12 = NULL;
	BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* V_15 = NULL;
	PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* V_16 = NULL;
	int64_t V_17 = 0;
	float V_18 = 0.0f;
	int64_t V_19 = 0;
	int64_t V_20 = 0;
	bool V_21 = false;
	int64_t V_22 = 0;
	int64_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int64_t V_30 = 0;
	PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* V_31 = NULL;
	int64_t V_32 = 0;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* V_33 = NULL;
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	Enumerator_t69077E1CF02F307242D159C9DA30E7B9A2D5C901 V_42;
	memset((&V_42), 0, sizeof(V_42));
	PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* V_43 = NULL;
	List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* V_44 = NULL;
	int32_t V_45 = 0;
	List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* V_46 = NULL;
	Enumerator_t7D873153703A01D83B21E276B8C4436FC283A3C8 V_47;
	memset((&V_47), 0, sizeof(V_47));
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* V_48 = NULL;
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_49;
	memset((&V_49), 0, sizeof(V_49));
	bool V_50 = false;
	bool V_51 = false;
	PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* V_52 = NULL;
	bool V_53 = false;
	int32_t V_54 = 0;
	PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* V_55 = NULL;
	float V_56 = 0.0f;
	float V_57 = 0.0f;
	float V_58 = 0.0f;
	float V_59 = 0.0f;
	float V_60 = 0.0f;
	float V_61 = 0.0f;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* V_62 = NULL;
	float V_63 = 0.0f;
	bool V_64 = false;
	bool V_65 = false;
	bool V_66 = false;
	PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* V_67 = NULL;
	bool V_68 = false;
	int32_t V_69 = 0;
	float V_70 = 0.0f;
	float V_71 = 0.0f;
	float V_72 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_73;
	memset((&V_73), 0, sizeof(V_73));
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* V_74 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* V_75 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* V_76 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* V_77 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* V_78 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* V_79 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* V_80 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* V_81 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* V_82 = NULL;
	bool V_83 = false;
	float V_84 = 0.0f;
	float V_85 = 0.0f;
	float V_86 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_87;
	memset((&V_87), 0, sizeof(V_87));
	bool V_88 = false;
	float V_89 = 0.0f;
	float V_90 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_91;
	memset((&V_91), 0, sizeof(V_91));
	bool V_92 = false;
	float V_93 = 0.0f;
	float V_94 = 0.0f;
	float V_95 = 0.0f;
	float V_96 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_97;
	memset((&V_97), 0, sizeof(V_97));
	bool V_98 = false;
	bool V_99 = false;
	PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* V_100 = NULL;
	int32_t V_101 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_102;
	memset((&V_102), 0, sizeof(V_102));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_103;
	memset((&V_103), 0, sizeof(V_103));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_104;
	memset((&V_104), 0, sizeof(V_104));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_105;
	memset((&V_105), 0, sizeof(V_105));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_106;
	memset((&V_106), 0, sizeof(V_106));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_107;
	memset((&V_107), 0, sizeof(V_107));
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_108;
	memset((&V_108), 0, sizeof(V_108));
	bool V_109 = false;
	PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* V_110 = NULL;
	bool V_111 = false;
	int32_t V_112 = 0;
	List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* V_113 = NULL;
	PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* V_114 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* V_115 = NULL;
	int32_t V_116 = 0;
	PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* V_117 = NULL;
	PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* V_118 = NULL;
	PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* V_119 = NULL;
	int32_t V_120 = 0;
	List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* V_121 = NULL;
	bool V_122 = false;
	int32_t V_123 = 0;
	bool V_124 = false;
	int32_t V_125 = 0;
	bool V_126 = false;
	bool V_127 = false;
	bool V_128 = false;
	ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* V_129 = NULL;
	int32_t V_130 = 0;
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_131;
	memset((&V_131), 0, sizeof(V_131));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_132;
	memset((&V_132), 0, sizeof(V_132));
	bool V_133 = false;
	bool V_134 = false;
	PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* V_135 = NULL;
	bool V_136 = false;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_137 = NULL;
	int32_t V_138 = 0;
	bool V_139 = false;
	RuntimeObject* V_140 = NULL;
	int32_t G_B44_0 = 0;
	int32_t G_B69_0 = 0;
	float G_B75_0 = 0.0f;
	int32_t G_B83_0 = 0;
	int32_t G_B89_0 = 0;
	int32_t G_B95_0 = 0;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* G_B100_0 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* G_B98_0 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* G_B99_0 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* G_B103_0 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* G_B101_0 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* G_B102_0 = NULL;
	int32_t G_B106_0 = 0;
	int32_t G_B113_0 = 0;
	float G_B117_0 = 0.0f;
	float G_B120_0 = 0.0f;
	float G_B123_0 = 0.0f;
	float G_B126_0 = 0.0f;
	int32_t G_B138_0 = 0;
	int32_t G_B146_0 = 0;
	PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* G_B149_0 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* G_B151_0 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* G_B150_0 = NULL;
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33(L_0, 3, List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_RuntimeMethod_var);
		__this->____allVertices_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____allVertices_3), (void*)L_0);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33(L_1, 3, List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_RuntimeMethod_var);
		__this->____allNormals_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____allNormals_4), (void*)L_1);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_2 = (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF*)il2cpp_codegen_object_new(List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mDBC3F8F2846CD821DA096BECD6300438E2409BC3(L_2, 3, List_1__ctor_mDBC3F8F2846CD821DA096BECD6300438E2409BC3_RuntimeMethod_var);
		__this->____allColors_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____allColors_5), (void*)L_2);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_3 = (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)il2cpp_codegen_object_new(List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m27475592735C318973899086F95036A18B6D7E39(L_3, 3, List_1__ctor_m27475592735C318973899086F95036A18B6D7E39_RuntimeMethod_var);
		__this->____allUVs_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____allUVs_6), (void*)L_3);
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_4 = ___0_plyReader;
		__this->____reader_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reader_2), (void*)L_4);
		Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC* L_5 = (Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC*)il2cpp_codegen_object_new(Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_m4795CFCFA1CA4807CD85E1818CEC2A7EBC2E336C(L_5, Dictionary_2__ctor_m4795CFCFA1CA4807CD85E1818CEC2A7EBC2E336C_RuntimeMethod_var);
		V_0 = L_5;
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_6 = (List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5*)il2cpp_codegen_object_new(List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_mEEA3C6B55707EC6755329113F4C364960AA66CEF(L_6, List_1__ctor_mEEA3C6B55707EC6755329113F4C364960AA66CEF_RuntimeMethod_var);
		V_1 = L_6;
		V_2 = (PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8*)NULL;
		V_3 = (bool)0;
		V_4 = (bool)0;
		V_5 = (bool)0;
		V_6 = (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C*)NULL;
		List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31* L_7 = (List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31*)il2cpp_codegen_object_new(List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m71DCE2DD53C6EFD6DF99B2592A347DFD0F9106C3(L_7, List_1__ctor_m71DCE2DD53C6EFD6DF99B2592A347DFD0F9106C3_RuntimeMethod_var);
		V_7 = L_7;
		V_8 = (bool)0;
		V_9 = (bool)0;
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_8 = __this->____reader_2;
		NullCheck(L_8);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_9;
		L_9 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_8, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = ___1_stream;
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_11 = (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2*)il2cpp_codegen_object_new(PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		PlyStreamReader__ctor_m7808EFBEB09E7E31FB8EC19A0B4CBFFD8DB57DB1(L_11, L_9, L_10, NULL);
		V_10 = L_11;
		V_11 = (0.0f);
		goto IL_033e;
	}

IL_007d:
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_12 = V_10;
		NullCheck(L_12);
		int64_t L_13;
		L_13 = PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2(L_12, (bool)0, (bool)0, NULL);
		V_17 = L_13;
		int64_t L_14 = V_17;
		V_20 = L_14;
		int64_t L_15 = V_20;
		V_19 = L_15;
		int64_t L_16 = V_19;
		if ((((int64_t)L_16) > ((int64_t)((int64_t)-4898810336857675590LL))))
		{
			goto IL_00d7;
		}
	}
	{
		int64_t L_17 = V_19;
		if ((((int64_t)L_17) == ((int64_t)((int64_t)-5513532495504198950LL))))
		{
			goto IL_0271;
		}
	}
	{
		goto IL_00b0;
	}

IL_00b0:
	{
		int64_t L_18 = V_19;
		if ((((int64_t)L_18) == ((int64_t)((int64_t)-5513532493822467209LL))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_00c2;
	}

IL_00c2:
	{
		int64_t L_19 = V_19;
		if ((((int64_t)L_19) == ((int64_t)((int64_t)-4898810336857675590LL))))
		{
			goto IL_01a3;
		}
	}
	{
		goto IL_02d6;
	}

IL_00d7:
	{
		int64_t L_20 = V_19;
		if ((((int64_t)L_20) == ((int64_t)((int64_t)-3837289489351516138LL))))
		{
			goto IL_010f;
		}
	}
	{
		goto IL_00e6;
	}

IL_00e6:
	{
		int64_t L_21 = V_19;
		if ((((int64_t)L_21) == ((int64_t)((int64_t)-3351804022671184904LL))))
		{
			goto IL_0107;
		}
	}
	{
		goto IL_00f5;
	}

IL_00f5:
	{
		int64_t L_22 = V_19;
		if ((((int64_t)L_22) == ((int64_t)((int64_t)-1367968407750199268LL))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_02d6;
	}

IL_0107:
	{
		V_3 = (bool)1;
		goto IL_02f4;
	}

IL_010f:
	{
		bool L_23 = V_3;
		V_21 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_21;
		if (!L_24)
		{
			goto IL_0126;
		}
	}
	{
		Exception_t* L_25 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_25);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB44FE4F8F197AF89FF50ABAD9C3E395B5E887251)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlyProcessor_Process_m5EC73F6D1F63A911A1C86747BB95E7948D0D0763_RuntimeMethod_var)));
	}

IL_0126:
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_26 = V_10;
		NullCheck(L_26);
		int64_t L_27;
		L_27 = PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2(L_26, (bool)0, (bool)0, NULL);
		V_4 = (bool)1;
		goto IL_02f4;
	}

IL_0138:
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_28 = V_10;
		NullCheck(L_28);
		int64_t L_29;
		L_29 = PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2(L_28, (bool)1, (bool)0, NULL);
		V_22 = L_29;
		int64_t L_30 = V_22;
		V_8 = (bool)((((int64_t)L_30) == ((int64_t)((int64_t)6570124500183046315LL)))? 1 : 0);
		int64_t L_31 = V_22;
		V_9 = (bool)((((int64_t)L_31) == ((int64_t)((int64_t)2560988747252765043LL)))? 1 : 0);
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_32 = V_10;
		NullCheck(L_32);
		int64_t L_33;
		L_33 = PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2(L_32, (bool)1, (bool)0, NULL);
		goto IL_02f4;
	}

IL_0171:
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_34 = V_10;
		NullCheck(L_34);
		int64_t L_35;
		L_35 = PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2(L_34, (bool)1, (bool)0, NULL);
		V_23 = L_35;
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_36 = V_10;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = PlyStreamReader_ToInt32NoValue_m3D62B7AC2B68E0C65837ED4B738D26A02C897086(L_36, NULL);
		V_24 = L_37;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_38 = (PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8*)il2cpp_codegen_object_new(PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		PlyElement__ctor_mCA04905EABE9EB079C06C05A9EBB680CF4A4DBE3(L_38, NULL);
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_39 = L_38;
		int32_t L_40 = V_24;
		NullCheck(L_39);
		L_39->___Count_1 = L_40;
		V_2 = L_39;
		Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC* L_41 = V_0;
		int64_t L_42 = V_23;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_43 = V_2;
		NullCheck(L_41);
		Dictionary_2_Add_m7E3EF4351105771F2D6EB167BE29E7868CFC84F0(L_41, L_42, L_43, Dictionary_2_Add_m7E3EF4351105771F2D6EB167BE29E7868CFC84F0_RuntimeMethod_var);
		goto IL_02f4;
	}

IL_01a3:
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_44 = V_2;
		V_26 = (bool)((((RuntimeObject*)(PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8*)L_44) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_45 = V_26;
		if (!L_45)
		{
			goto IL_01ba;
		}
	}
	{
		Exception_t* L_46 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_46);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_46, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E7978A9177533BBDC5A8F6FE599F9D9A09593AF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlyProcessor_Process_m5EC73F6D1F63A911A1C86747BB95E7948D0D0763_RuntimeMethod_var)));
	}

IL_01ba:
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_47 = V_10;
		int32_t L_48;
		L_48 = PlyProcessor_GetPropertyType_mF17237DE1F943422F7DBEB3435F43FD29CFB2A46(L_47, NULL);
		V_25 = L_48;
		int32_t L_49 = V_25;
		V_27 = (bool)((((int32_t)L_49) == ((int32_t)8))? 1 : 0);
		bool L_50 = V_27;
		if (!L_50)
		{
			goto IL_022f;
		}
	}
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_51 = V_10;
		int32_t L_52;
		L_52 = PlyProcessor_GetPropertyType_mF17237DE1F943422F7DBEB3435F43FD29CFB2A46(L_51, NULL);
		V_28 = L_52;
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_53 = V_10;
		int32_t L_54;
		L_54 = PlyProcessor_GetPropertyType_mF17237DE1F943422F7DBEB3435F43FD29CFB2A46(L_53, NULL);
		V_29 = L_54;
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_55 = V_10;
		NullCheck(L_55);
		int64_t L_56;
		L_56 = PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2(L_55, (bool)1, (bool)0, NULL);
		V_30 = L_56;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_57 = (PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E*)il2cpp_codegen_object_new(PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		PlyListProperty__ctor_m913A103F9505DB2EC35D68434C7B1676D0F26196(L_57, NULL);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_58 = L_57;
		int32_t L_59 = V_25;
		NullCheck(L_58);
		((PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)L_58)->___Type_0 = L_59;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_60 = L_58;
		int32_t L_61 = V_28;
		NullCheck(L_60);
		L_60->___CounterType_2 = L_61;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_62 = L_60;
		int32_t L_63 = V_29;
		NullCheck(L_62);
		L_62->___ItemType_3 = L_63;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_64 = L_62;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_65 = V_2;
		NullCheck(L_65);
		Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* L_66 = L_65->___Properties_0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = Dictionary_2_get_Count_m270BB8BF6E2728FF1BE69D236B3C1BB5E5D60BFD(L_66, Dictionary_2_get_Count_m270BB8BF6E2728FF1BE69D236B3C1BB5E5D60BFD_RuntimeMethod_var);
		NullCheck(L_64);
		((PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)L_64)->___Offset_1 = L_67;
		V_31 = L_64;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_68 = V_2;
		NullCheck(L_68);
		Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* L_69 = L_68->___Properties_0;
		int64_t L_70 = V_30;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_71 = V_31;
		NullCheck(L_69);
		Dictionary_2_Add_m13BA45BD072C072ECDC20ED17980959D50DCDEBE(L_69, L_70, L_71, Dictionary_2_Add_m13BA45BD072C072ECDC20ED17980959D50DCDEBE_RuntimeMethod_var);
		goto IL_026c;
	}

IL_022f:
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_72 = V_10;
		NullCheck(L_72);
		int64_t L_73;
		L_73 = PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2(L_72, (bool)1, (bool)0, NULL);
		V_32 = L_73;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_74 = (PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)il2cpp_codegen_object_new(PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362_il2cpp_TypeInfo_var);
		NullCheck(L_74);
		PlyProperty__ctor_mB9404ABEA64DE21D9C16B8FCF8FA95FEA5C8221F(L_74, NULL);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_75 = L_74;
		int32_t L_76 = V_25;
		NullCheck(L_75);
		L_75->___Type_0 = L_76;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_77 = L_75;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_78 = V_2;
		NullCheck(L_78);
		Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* L_79 = L_78->___Properties_0;
		NullCheck(L_79);
		int32_t L_80;
		L_80 = Dictionary_2_get_Count_m270BB8BF6E2728FF1BE69D236B3C1BB5E5D60BFD(L_79, Dictionary_2_get_Count_m270BB8BF6E2728FF1BE69D236B3C1BB5E5D60BFD_RuntimeMethod_var);
		NullCheck(L_77);
		L_77->___Offset_1 = L_80;
		V_33 = L_77;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_81 = V_2;
		NullCheck(L_81);
		Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* L_82 = L_81->___Properties_0;
		int64_t L_83 = V_32;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_84 = V_33;
		NullCheck(L_82);
		Dictionary_2_Add_m13BA45BD072C072ECDC20ED17980959D50DCDEBE(L_82, L_83, L_84, Dictionary_2_Add_m13BA45BD072C072ECDC20ED17980959D50DCDEBE_RuntimeMethod_var);
	}

IL_026c:
	{
		goto IL_02f4;
	}

IL_0271:
	{
		goto IL_02c8;
	}

IL_0274:
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_85 = V_10;
		NullCheck(L_85);
		int64_t L_86;
		L_86 = PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2(L_85, (bool)0, (bool)0, NULL);
		V_17 = L_86;
		bool L_87 = V_5;
		V_34 = L_87;
		bool L_88 = V_34;
		if (!L_88)
		{
			goto IL_02af;
		}
	}
	{
		PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* L_89 = (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C*)il2cpp_codegen_object_new(PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C_il2cpp_TypeInfo_var);
		NullCheck(L_89);
		PlyTexture__ctor_m038AAFCCC1A0BFA24B9DB741380AA1D0CDE29AFD(L_89, NULL);
		V_6 = L_89;
		PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* L_90 = V_6;
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_91 = V_10;
		NullCheck(L_91);
		String_t* L_92;
		L_92 = PlyStreamReader_GetTokenAsString_m7E04224D04CDC8D8F4791995529AB17E0CEEDCAA(L_91, NULL);
		NullCheck(L_90);
		PlyTexture_set_Filename_m7FA26BB14F1E9F04652E891D67858519F9040BD8_inline(L_90, L_92, NULL);
		V_5 = (bool)0;
		List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31* L_93 = V_7;
		PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* L_94 = V_6;
		NullCheck(L_93);
		List_1_Add_m096BE2FF8568855341E87C1DE6291916F89A8203_inline(L_93, L_94, List_1_Add_m096BE2FF8568855341E87C1DE6291916F89A8203_RuntimeMethod_var);
		goto IL_02c7;
	}

IL_02af:
	{
		int64_t L_95 = V_17;
		V_35 = (bool)((((int64_t)L_95) == ((int64_t)((int64_t)-8289663717619634158LL)))? 1 : 0);
		bool L_96 = V_35;
		if (!L_96)
		{
			goto IL_02c7;
		}
	}
	{
		V_5 = (bool)1;
	}

IL_02c7:
	{
	}

IL_02c8:
	{
		int64_t L_97 = V_17;
		V_36 = (bool)((!(((uint64_t)L_97) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_98 = V_36;
		if (L_98)
		{
			goto IL_0274;
		}
	}
	{
		goto IL_02f4;
	}

IL_02d6:
	{
		goto IL_02e6;
	}

IL_02d9:
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_99 = V_10;
		NullCheck(L_99);
		int64_t L_100;
		L_100 = PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2(L_99, (bool)0, (bool)0, NULL);
		V_17 = L_100;
	}

IL_02e6:
	{
		int64_t L_101 = V_17;
		V_37 = (bool)((!(((uint64_t)L_101) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_102 = V_37;
		if (L_102)
		{
			goto IL_02d9;
		}
	}
	{
		goto IL_02f4;
	}

IL_02f4:
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_103 = V_10;
		NullCheck(L_103);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_104;
		L_104 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(15 /* System.IO.Stream System.IO.StreamReader::get_BaseStream() */, L_103);
		NullCheck(L_104);
		int64_t L_105;
		L_105 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_104);
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_106 = V_10;
		NullCheck(L_106);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_107;
		L_107 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(15 /* System.IO.Stream System.IO.StreamReader::get_BaseStream() */, L_106);
		NullCheck(L_107);
		int64_t L_108;
		L_108 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_107);
		V_18 = ((float)(((float)L_105)/((float)L_108)));
		float L_109 = V_18;
		float L_110 = V_11;
		V_38 = (bool)((((float)L_109) > ((float)((float)il2cpp_codegen_add(L_110, (0.330000013f)))))? 1 : 0);
		bool L_111 = V_38;
		if (!L_111)
		{
			goto IL_033d;
		}
	}
	{
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_112 = __this->____reader_2;
		float L_113 = V_18;
		NullCheck(L_112);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_112, L_113, 0, (0.0f), NULL);
		float L_114 = V_18;
		V_11 = L_114;
	}

IL_033d:
	{
	}

IL_033e:
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_115 = V_10;
		NullCheck(L_115);
		bool L_116;
		L_116 = StreamReader_get_EndOfStream_mAE054431BF21158178EAA2A6872F14A9ED6A3C3E(L_115, NULL);
		if (L_116)
		{
			goto IL_034e;
		}
	}
	{
		bool L_117 = V_4;
		G_B44_0 = ((((int32_t)L_117) == ((int32_t)0))? 1 : 0);
		goto IL_034f;
	}

IL_034e:
	{
		G_B44_0 = 0;
	}

IL_034f:
	{
		V_39 = (bool)G_B44_0;
		bool L_118 = V_39;
		if (L_118)
		{
			goto IL_007d;
		}
	}
	{
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_119 = ___0_plyReader;
		NullCheck(L_119);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_119, (1.0f), 0, (0.0f), NULL);
		bool L_120 = V_8;
		V_40 = L_120;
		bool L_121 = V_40;
		if (!L_121)
		{
			goto IL_0398;
		}
	}
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_122 = V_10;
		NullCheck(L_122);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_123;
		L_123 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(15 /* System.IO.Stream System.IO.StreamReader::get_BaseStream() */, L_122);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_124 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		NullCheck(L_124);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_124, L_123, NULL);
		V_12 = L_124;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_125 = V_12;
		NullCheck(L_125);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_126;
		L_126 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_125);
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_127 = V_10;
		NullCheck(L_127);
		int64_t L_128;
		L_128 = PlyStreamReader_get_Position_m9211CA1BF5C622AACC7B1C9688FE42EB58006B5B_inline(L_127, NULL);
		NullCheck(L_126);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_126, L_128);
		goto IL_039d;
	}

IL_0398:
	{
		V_12 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)NULL;
	}

IL_039d:
	{
		bool L_129 = V_9;
		V_41 = L_129;
		bool L_130 = V_41;
		if (!L_130)
		{
			goto IL_03cb;
		}
	}
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_131 = V_10;
		NullCheck(L_131);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_132;
		L_132 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(15 /* System.IO.Stream System.IO.StreamReader::get_BaseStream() */, L_131);
		BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* L_133 = (BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721*)il2cpp_codegen_object_new(BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721_il2cpp_TypeInfo_var);
		NullCheck(L_133);
		BigEndianBinaryReader__ctor_m9E745E5732B70DC31E50C8C6B8DE7DB5956D0EBA(L_133, L_132, NULL);
		V_13 = L_133;
		BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* L_134 = V_13;
		NullCheck(L_134);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_135;
		L_135 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_134);
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_136 = V_10;
		NullCheck(L_136);
		int64_t L_137;
		L_137 = PlyStreamReader_get_Position_m9211CA1BF5C622AACC7B1C9688FE42EB58006B5B_inline(L_136, NULL);
		NullCheck(L_135);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_135, L_137);
		goto IL_03d0;
	}

IL_03cb:
	{
		V_13 = (BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721*)NULL;
	}

IL_03d0:
	{
		Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC* L_138 = V_0;
		NullCheck(L_138);
		ValueCollection_t16B888ACAE62FB5B6EB90AB83B113259C434EC38* L_139;
		L_139 = Dictionary_2_get_Values_mD47C7DCD10B474F8DB55896C6B5F276ACA9E2BC1(L_138, Dictionary_2_get_Values_mD47C7DCD10B474F8DB55896C6B5F276ACA9E2BC1_RuntimeMethod_var);
		NullCheck(L_139);
		Enumerator_t69077E1CF02F307242D159C9DA30E7B9A2D5C901 L_140;
		L_140 = ValueCollection_GetEnumerator_mD927D6AC4BE78DAED8A83775F0D1FEF91A756B4D(L_139, ValueCollection_GetEnumerator_mD927D6AC4BE78DAED8A83775F0D1FEF91A756B4D_RuntimeMethod_var);
		V_42 = L_140;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_04b4:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m16443C4F8A0449761F7E9532DA13EE62BC66A959((&V_42), Enumerator_Dispose_m16443C4F8A0449761F7E9532DA13EE62BC66A959_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_04a6_1;
			}

IL_03e3_1:
			{
				PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_141;
				L_141 = Enumerator_get_Current_m16B76A6F6611FB82F01BB3EA7B36F6BE9AC3B558_inline((&V_42), Enumerator_get_Current_m16B76A6F6611FB82F01BB3EA7B36F6BE9AC3B558_RuntimeMethod_var);
				V_43 = L_141;
				PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_142 = V_43;
				NullCheck(L_142);
				int32_t L_143 = L_142->___Count_1;
				List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_144 = (List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5*)il2cpp_codegen_object_new(List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5_il2cpp_TypeInfo_var);
				NullCheck(L_144);
				List_1__ctor_m179CF1BDD503F830F79CF1A81033083C1BB19E05(L_144, L_143, List_1__ctor_m179CF1BDD503F830F79CF1A81033083C1BB19E05_RuntimeMethod_var);
				V_44 = L_144;
				V_45 = 0;
				goto IL_0488_1;
			}

IL_0403_1:
			{
				PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_145 = V_43;
				NullCheck(L_145);
				Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* L_146 = L_145->___Properties_0;
				NullCheck(L_146);
				int32_t L_147;
				L_147 = Dictionary_2_get_Count_m270BB8BF6E2728FF1BE69D236B3C1BB5E5D60BFD(L_146, Dictionary_2_get_Count_m270BB8BF6E2728FF1BE69D236B3C1BB5E5D60BFD_RuntimeMethod_var);
				List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_148 = (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB*)il2cpp_codegen_object_new(List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB_il2cpp_TypeInfo_var);
				NullCheck(L_148);
				List_1__ctor_m893153D76F05AFF53207ABCA86290836BCC7B122(L_148, L_147, List_1__ctor_m893153D76F05AFF53207ABCA86290836BCC7B122_RuntimeMethod_var);
				V_46 = L_148;
				PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_149 = V_43;
				NullCheck(L_149);
				Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* L_150 = L_149->___Properties_0;
				NullCheck(L_150);
				ValueCollection_t17A15458500B928C18C734F4964D798B1C114EE9* L_151;
				L_151 = Dictionary_2_get_Values_m66C7C3835140D396B2941C5FF726A8435575E421(L_150, Dictionary_2_get_Values_m66C7C3835140D396B2941C5FF726A8435575E421_RuntimeMethod_var);
				NullCheck(L_151);
				Enumerator_t7D873153703A01D83B21E276B8C4436FC283A3C8 L_152;
				L_152 = ValueCollection_GetEnumerator_m7A2633FD76AC8804D68EEB036B996CAF5FDC7754(L_151, ValueCollection_GetEnumerator_m7A2633FD76AC8804D68EEB036B996CAF5FDC7754_RuntimeMethod_var);
				V_47 = L_152;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0468_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mFB43E311F648679BE046A19C9351234B9C43A1CF((&V_47), Enumerator_Dispose_mFB43E311F648679BE046A19C9351234B9C43A1CF_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_045d_2;
					}

IL_042d_2:
					{
						PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_153;
						L_153 = Enumerator_get_Current_mA527966D30259A4C4C030B11F4DFEE3029C1076F_inline((&V_47), Enumerator_get_Current_mA527966D30259A4C4C030B11F4DFEE3029C1076F_RuntimeMethod_var);
						V_48 = L_153;
						PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_154 = V_48;
						PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_155 = V_48;
						NullCheck(L_155);
						int32_t L_156 = L_155->___Type_0;
						bool L_157 = V_8;
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_158 = V_12;
						bool L_159 = V_9;
						PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_160 = V_10;
						BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* L_161 = V_13;
						List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_162 = V_1;
						PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_163;
						L_163 = PlyProcessor_ReadElementData_m295BBB280885FD705DF14E08D8FE375B03CB984B(L_154, L_156, L_157, L_158, L_159, L_160, L_161, L_162, NULL);
						V_49 = L_163;
						List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_164 = V_46;
						PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_165 = V_49;
						NullCheck(L_164);
						List_1_Add_m37A1197D84857A9512633D2FB5380FCAC7AB381E_inline(L_164, L_165, List_1_Add_m37A1197D84857A9512633D2FB5380FCAC7AB381E_RuntimeMethod_var);
					}

IL_045d_2:
					{
						bool L_166;
						L_166 = Enumerator_MoveNext_m355F0050D35C5CECAB616FAD6BD09BCDF75ED2AD((&V_47), Enumerator_MoveNext_m355F0050D35C5CECAB616FAD6BD09BCDF75ED2AD_RuntimeMethod_var);
						if (L_166)
						{
							goto IL_042d_2;
						}
					}
					{
						goto IL_0477_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0477_1:
			{
				List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_167 = V_44;
				List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_168 = V_46;
				NullCheck(L_167);
				List_1_Add_m7C99F2FA69D684BD5B7E22B8A115DA258EA04CB2_inline(L_167, L_168, List_1_Add_m7C99F2FA69D684BD5B7E22B8A115DA258EA04CB2_RuntimeMethod_var);
				int32_t L_169 = V_45;
				V_45 = ((int32_t)il2cpp_codegen_add(L_169, 1));
			}

IL_0488_1:
			{
				int32_t L_170 = V_45;
				PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_171 = V_43;
				NullCheck(L_171);
				int32_t L_172 = L_171->___Count_1;
				V_50 = (bool)((((int32_t)L_170) < ((int32_t)L_172))? 1 : 0);
				bool L_173 = V_50;
				if (L_173)
				{
					goto IL_0403_1;
				}
			}
			{
				PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_174 = V_43;
				List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_175 = V_44;
				NullCheck(L_174);
				L_174->___Data_2 = L_175;
				Il2CppCodeGenWriteBarrier((void**)(&L_174->___Data_2), (void*)L_175);
			}

IL_04a6_1:
			{
				bool L_176;
				L_176 = Enumerator_MoveNext_m3A6AF59F5158004E0E8F5D30912F0B3D578BAD20((&V_42), Enumerator_MoveNext_m3A6AF59F5158004E0E8F5D30912F0B3D578BAD20_RuntimeMethod_var);
				if (L_176)
				{
					goto IL_03e3_1;
				}
			}
			{
				goto IL_04c3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_04c3:
	{
		V_14 = (RuntimeObject*)NULL;
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_177 = ___0_plyReader;
		NullCheck(L_177);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_178;
		L_178 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_177, NULL);
		NullCheck(L_178);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_179 = L_178->___Options_34;
		NullCheck(L_179);
		bool L_180 = L_179->___LoadPointClouds_93;
		if (L_180)
		{
			goto IL_04ea;
		}
	}
	{
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_181 = ___0_plyReader;
		NullCheck(L_181);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_182;
		L_182 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_181, NULL);
		NullCheck(L_182);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_183 = L_182->___Options_34;
		NullCheck(L_183);
		bool L_184 = L_183->___ImportMaterials_31;
		G_B69_0 = ((int32_t)(L_184));
		goto IL_04eb;
	}

IL_04ea:
	{
		G_B69_0 = 0;
	}

IL_04eb:
	{
		V_51 = (bool)G_B69_0;
		bool L_185 = V_51;
		if (!L_185)
		{
			goto IL_06df;
		}
	}
	{
		Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC* L_186 = V_0;
		NullCheck(L_186);
		bool L_187;
		L_187 = Dictionary_2_TryGetValue_m181BAACEB7905BC572C38343BF7DDA866E9415FD(L_186, ((int64_t)-4898810434349715444LL), (&V_52), Dictionary_2_TryGetValue_m181BAACEB7905BC572C38343BF7DDA866E9415FD_RuntimeMethod_var);
		V_53 = L_187;
		bool L_188 = V_53;
		if (!L_188)
		{
			goto IL_0694;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_189 = V_52;
		NullCheck(L_189);
		int32_t L_190 = L_189->___Count_1;
		IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2* L_191 = (IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2*)(IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2*)SZArrayNew(IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2_il2cpp_TypeInfo_var, (uint32_t)L_190);
		V_14 = (RuntimeObject*)L_191;
		V_54 = 0;
		goto IL_067f;
	}

IL_0526:
	{
		PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* L_192 = (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6*)il2cpp_codegen_object_new(PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6_il2cpp_TypeInfo_var);
		NullCheck(L_192);
		PlyMaterial__ctor_m9669AF4D43AE12DEEBD8F46D99D869AC68470623(L_192, NULL);
		V_55 = L_192;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_193 = V_52;
		int32_t L_194 = V_54;
		NullCheck(L_193);
		float L_195;
		L_195 = PlyElement_GetPropertyFloatValue_m9EEC47397083DC6B0C2DB937F43F12288EBF5713(L_193, ((int64_t)-8276459643725187793LL), L_194, NULL);
		V_56 = ((float)((255.0f)/L_195));
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_196 = V_52;
		int32_t L_197 = V_54;
		NullCheck(L_196);
		float L_198;
		L_198 = PlyElement_GetPropertyFloatValue_m9EEC47397083DC6B0C2DB937F43F12288EBF5713(L_196, ((int64_t)-3131021851098489823LL), L_197, NULL);
		V_57 = ((float)((255.0f)/L_198));
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_199 = V_52;
		int32_t L_200 = V_54;
		NullCheck(L_199);
		float L_201;
		L_201 = PlyElement_GetPropertyFloatValue_m9EEC47397083DC6B0C2DB937F43F12288EBF5713(L_199, ((int64_t)1684168076452431740LL), L_200, NULL);
		V_58 = ((float)((255.0f)/L_201));
		PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* L_202 = V_55;
		float L_203 = V_56;
		float L_204 = V_57;
		float L_205 = V_58;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_206;
		memset((&L_206), 0, sizeof(L_206));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_206), L_203, L_204, L_205, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_207 = L_206;
		RuntimeObject* L_208 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_207);
		NullCheck(L_202);
		PlyMaterial_AddProperty_m4FE8AE6161D498A95286AC015BD2E1B2EC41E3B4(L_202, _stringLiteral31A9B06BE46B0E2BB27797EDC5BAE6C2BFA4ABF0, L_208, (bool)0, NULL);
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_209 = V_52;
		int32_t L_210 = V_54;
		NullCheck(L_209);
		float L_211;
		L_211 = PlyElement_GetPropertyFloatValue_m9EEC47397083DC6B0C2DB937F43F12288EBF5713(L_209, ((int64_t)2071003623302517242LL), L_210, NULL);
		V_59 = ((float)((255.0f)/L_211));
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_212 = V_52;
		int32_t L_213 = V_54;
		NullCheck(L_212);
		float L_214;
		L_214 = PlyElement_GetPropertyFloatValue_m9EEC47397083DC6B0C2DB937F43F12288EBF5713(L_212, ((int64_t)-2013877966922272212LL), L_213, NULL);
		V_60 = ((float)((255.0f)/L_214));
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_215 = V_52;
		int32_t L_216 = V_54;
		NullCheck(L_215);
		float L_217;
		L_217 = PlyElement_GetPropertyFloatValue_m9EEC47397083DC6B0C2DB937F43F12288EBF5713(L_215, ((int64_t)8860880101248910353LL), L_216, NULL);
		V_61 = ((float)((255.0f)/L_217));
		PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* L_218 = V_55;
		float L_219 = V_59;
		float L_220 = V_60;
		float L_221 = V_61;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_222;
		memset((&L_222), 0, sizeof(L_222));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_222), L_219, L_220, L_221, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_223 = L_222;
		RuntimeObject* L_224 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_223);
		NullCheck(L_218);
		PlyMaterial_AddProperty_m4FE8AE6161D498A95286AC015BD2E1B2EC41E3B4(L_218, _stringLiteral711AA001951412D09872DB5FA0B90EA6875A17F9, L_224, (bool)0, NULL);
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_225 = V_52;
		NullCheck(L_225);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_226;
		L_226 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_225, ((int64_t)-5513532484836901754LL), NULL);
		V_62 = L_226;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_227 = V_62;
		if (!L_227)
		{
			goto IL_0629;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_228 = V_52;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_229 = V_62;
		int32_t L_230 = V_54;
		NullCheck(L_228);
		float L_231;
		L_231 = PlyElement_GetPropertyFloatValue_m7E87CAEA23D5D33F126AE7A44F4D6B28CD2283DC(L_228, L_229, L_230, NULL);
		G_B75_0 = L_231;
		goto IL_062e;
	}

IL_0629:
	{
		G_B75_0 = (1.0f);
	}

IL_062e:
	{
		V_63 = G_B75_0;
		PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* L_232 = V_55;
		float L_233 = V_63;
		float L_234 = L_233;
		RuntimeObject* L_235 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_234);
		NullCheck(L_232);
		PlyMaterial_AddProperty_m4FE8AE6161D498A95286AC015BD2E1B2EC41E3B4(L_232, _stringLiteral5D934867D69D7E986A4C224DB49CF270468DE64D, L_235, (bool)0, NULL);
		PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* L_236 = V_55;
		int32_t L_237 = V_54;
		NullCheck(L_236);
		PlyMaterial_set_Index_mEEC9E37FB853F46E7A19C7A52BE8EACD41464726_inline(L_236, L_237, NULL);
		PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* L_238 = V_6;
		V_64 = (bool)((!(((RuntimeObject*)(PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C*)L_238) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_239 = V_64;
		if (!L_239)
		{
			goto IL_066c;
		}
	}
	{
		PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* L_240 = V_55;
		PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* L_241 = V_6;
		NullCheck(L_240);
		PlyMaterial_AddProperty_m4FE8AE6161D498A95286AC015BD2E1B2EC41E3B4(L_240, _stringLiteral7A12A09E76D9C6C6FAD55C385BB87538EF591395, L_241, (bool)1, NULL);
	}

IL_066c:
	{
		RuntimeObject* L_242 = V_14;
		int32_t L_243 = V_54;
		PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* L_244 = V_55;
		NullCheck(L_242);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial>::set_Item(System.Int32,T) */, IList_1_t0662D113B996C51F1676FFC848F7B3448D818DB7_il2cpp_TypeInfo_var, L_242, L_243, L_244);
		int32_t L_245 = V_54;
		V_54 = ((int32_t)il2cpp_codegen_add(L_245, 1));
	}

IL_067f:
	{
		int32_t L_246 = V_54;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_247 = V_52;
		NullCheck(L_247);
		int32_t L_248 = L_247->___Count_1;
		V_65 = (bool)((((int32_t)L_246) < ((int32_t)L_248))? 1 : 0);
		bool L_249 = V_65;
		if (L_249)
		{
			goto IL_0526;
		}
	}
	{
	}

IL_0694:
	{
		RuntimeObject* L_250 = V_14;
		if (L_250)
		{
			goto IL_069f;
		}
	}
	{
		PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* L_251 = V_6;
		G_B83_0 = ((!(((RuntimeObject*)(PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C*)L_251) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_06a0;
	}

IL_069f:
	{
		G_B83_0 = 0;
	}

IL_06a0:
	{
		V_66 = (bool)G_B83_0;
		bool L_252 = V_66;
		if (!L_252)
		{
			goto IL_06cc;
		}
	}
	{
		PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* L_253 = (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6*)il2cpp_codegen_object_new(PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6_il2cpp_TypeInfo_var);
		NullCheck(L_253);
		PlyMaterial__ctor_m9669AF4D43AE12DEEBD8F46D99D869AC68470623(L_253, NULL);
		V_67 = L_253;
		PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* L_254 = V_67;
		PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* L_255 = V_6;
		NullCheck(L_254);
		PlyMaterial_AddProperty_m4FE8AE6161D498A95286AC015BD2E1B2EC41E3B4(L_254, _stringLiteral7A12A09E76D9C6C6FAD55C385BB87538EF591395, L_255, (bool)1, NULL);
		IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2* L_256 = (IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2*)(IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2*)SZArrayNew(IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2_il2cpp_TypeInfo_var, (uint32_t)1);
		IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2* L_257 = L_256;
		PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* L_258 = V_67;
		NullCheck(L_257);
		ArrayElementTypeCheck (L_257, L_258);
		(L_257)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_258);
		V_14 = (RuntimeObject*)L_257;
	}

IL_06cc:
	{
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_259 = ___0_plyReader;
		NullCheck(L_259);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_259, (1.0f), 1, (0.0f), NULL);
	}

IL_06df:
	{
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_260 = ___0_plyReader;
		NullCheck(L_260);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_261;
		L_261 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_260, NULL);
		NullCheck(L_261);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_262 = L_261->___Options_34;
		NullCheck(L_262);
		bool L_263 = L_262->___ImportMeshes_10;
		if (!L_263)
		{
			goto IL_0704;
		}
	}
	{
		Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC* L_264 = V_0;
		NullCheck(L_264);
		bool L_265;
		L_265 = Dictionary_2_TryGetValue_m181BAACEB7905BC572C38343BF7DDA866E9415FD(L_264, ((int64_t)-1367968407301361207LL), (&V_15), Dictionary_2_TryGetValue_m181BAACEB7905BC572C38343BF7DDA866E9415FD_RuntimeMethod_var);
		G_B89_0 = ((int32_t)(L_265));
		goto IL_0705;
	}

IL_0704:
	{
		G_B89_0 = 0;
	}

IL_0705:
	{
		V_68 = (bool)G_B89_0;
		bool L_266 = V_68;
		if (!L_266)
		{
			goto IL_09ff;
		}
	}
	{
		V_69 = 0;
		goto IL_09d8;
	}

IL_0717:
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_267 = V_15;
		int32_t L_268 = V_69;
		NullCheck(L_267);
		float L_269;
		L_269 = PlyElement_GetPropertyFloatValue_m9EEC47397083DC6B0C2DB937F43F12288EBF5713(L_267, ((int64_t)34902897112120627LL), L_268, NULL);
		V_70 = L_269;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_270 = V_15;
		int32_t L_271 = V_69;
		NullCheck(L_270);
		float L_272;
		L_272 = PlyElement_GetPropertyFloatValue_m9EEC47397083DC6B0C2DB937F43F12288EBF5713(L_270, ((int64_t)34902897112120628LL), L_271, NULL);
		V_71 = L_272;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_273 = V_15;
		int32_t L_274 = V_69;
		NullCheck(L_273);
		float L_275;
		L_275 = PlyElement_GetPropertyFloatValue_m9EEC47397083DC6B0C2DB937F43F12288EBF5713(L_273, ((int64_t)34902897112120629LL), L_274, NULL);
		V_72 = L_275;
		float L_276 = V_70;
		float L_277 = V_71;
		float L_278 = V_72;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_279;
		memset((&L_279), 0, sizeof(L_279));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_279), ((-L_276)), L_277, L_278, /*hidden argument*/NULL);
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_280 = __this->____reader_2;
		NullCheck(L_280);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_281;
		L_281 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_280, NULL);
		NullCheck(L_281);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_282 = L_281->___Options_34;
		NullCheck(L_282);
		float L_283 = L_282->___ScaleFactor_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_284;
		L_284 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_279, L_283, NULL);
		V_73 = L_284;
		RuntimeObject* L_285 = __this->____allVertices_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_286 = V_73;
		NullCheck(L_285);
		InterfaceActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Add(T) */, ICollection_1_tEF23B8A78E9122DAA952DB1517D31EB7EC90563B_il2cpp_TypeInfo_var, L_285, L_286);
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_287 = V_15;
		NullCheck(L_287);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_288;
		L_288 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_287, ((int64_t)1081989810475739247LL), NULL);
		V_74 = L_288;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_289 = V_15;
		NullCheck(L_289);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_290;
		L_290 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_289, ((int64_t)1081989810475739248LL), NULL);
		V_75 = L_290;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_291 = V_15;
		NullCheck(L_291);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_292;
		L_292 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_291, ((int64_t)1081989810475739249LL), NULL);
		V_76 = L_292;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_293 = V_74;
		if (!L_293)
		{
			goto IL_07cf;
		}
	}
	{
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_294 = V_75;
		if (!L_294)
		{
			goto IL_07cf;
		}
	}
	{
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_295 = V_76;
		G_B95_0 = ((!(((RuntimeObject*)(PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)L_295) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_07d0;
	}

IL_07cf:
	{
		G_B95_0 = 0;
	}

IL_07d0:
	{
		V_83 = (bool)G_B95_0;
		bool L_296 = V_83;
		if (!L_296)
		{
			goto IL_081a;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_297 = V_15;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_298 = V_74;
		int32_t L_299 = V_69;
		NullCheck(L_297);
		float L_300;
		L_300 = PlyElement_GetPropertyFloatValue_m7E87CAEA23D5D33F126AE7A44F4D6B28CD2283DC(L_297, L_298, L_299, NULL);
		V_84 = L_300;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_301 = V_15;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_302 = V_75;
		int32_t L_303 = V_69;
		NullCheck(L_301);
		float L_304;
		L_304 = PlyElement_GetPropertyFloatValue_m7E87CAEA23D5D33F126AE7A44F4D6B28CD2283DC(L_301, L_302, L_303, NULL);
		V_85 = L_304;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_305 = V_15;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_306 = V_76;
		int32_t L_307 = V_69;
		NullCheck(L_305);
		float L_308;
		L_308 = PlyElement_GetPropertyFloatValue_m7E87CAEA23D5D33F126AE7A44F4D6B28CD2283DC(L_305, L_306, L_307, NULL);
		V_86 = L_308;
		float L_309 = V_84;
		float L_310 = V_85;
		float L_311 = V_86;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_87), L_309, L_310, L_311, NULL);
		RuntimeObject* L_312 = __this->____allNormals_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_313 = V_87;
		NullCheck(L_312);
		InterfaceActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Add(T) */, ICollection_1_tEF23B8A78E9122DAA952DB1517D31EB7EC90563B_il2cpp_TypeInfo_var, L_312, L_313);
	}

IL_081a:
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_314 = V_15;
		NullCheck(L_314);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_315;
		L_315 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_314, ((int64_t)34902897112120624LL), NULL);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_316 = L_315;
		G_B98_0 = L_316;
		if (L_316)
		{
			G_B100_0 = L_316;
			goto IL_0852;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_317 = V_15;
		NullCheck(L_317);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_318;
		L_318 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_317, ((int64_t)34902897112120622LL), NULL);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_319 = L_318;
		G_B99_0 = L_319;
		if (L_319)
		{
			G_B100_0 = L_319;
			goto IL_0852;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_320 = V_15;
		NullCheck(L_320);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_321;
		L_321 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_320, ((int64_t)-4289164790894553076LL), NULL);
		G_B100_0 = L_321;
	}

IL_0852:
	{
		V_77 = G_B100_0;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_322 = V_15;
		NullCheck(L_322);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_323;
		L_323 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_322, ((int64_t)34902897112120625LL), NULL);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_324 = L_323;
		G_B101_0 = L_324;
		if (L_324)
		{
			G_B103_0 = L_324;
			goto IL_088c;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_325 = V_15;
		NullCheck(L_325);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_326;
		L_326 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_325, ((int64_t)34902897112120623LL), NULL);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_327 = L_326;
		G_B102_0 = L_327;
		if (L_327)
		{
			G_B103_0 = L_327;
			goto IL_088c;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_328 = V_15;
		NullCheck(L_328);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_329;
		L_329 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_328, ((int64_t)-4289164790894553075LL), NULL);
		G_B103_0 = L_329;
	}

IL_088c:
	{
		V_78 = G_B103_0;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_330 = V_77;
		if (!L_330)
		{
			goto IL_0899;
		}
	}
	{
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_331 = V_78;
		G_B106_0 = ((!(((RuntimeObject*)(PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)L_331) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_089a;
	}

IL_0899:
	{
		G_B106_0 = 0;
	}

IL_089a:
	{
		V_88 = (bool)G_B106_0;
		bool L_332 = V_88;
		if (!L_332)
		{
			goto IL_08d5;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_333 = V_15;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_334 = V_77;
		int32_t L_335 = V_69;
		NullCheck(L_333);
		float L_336;
		L_336 = PlyElement_GetPropertyFloatValue_m7E87CAEA23D5D33F126AE7A44F4D6B28CD2283DC(L_333, L_334, L_335, NULL);
		V_89 = L_336;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_337 = V_15;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_338 = V_78;
		int32_t L_339 = V_69;
		NullCheck(L_337);
		float L_340;
		L_340 = PlyElement_GetPropertyFloatValue_m7E87CAEA23D5D33F126AE7A44F4D6B28CD2283DC(L_337, L_338, L_339, NULL);
		V_90 = L_340;
		float L_341 = V_89;
		float L_342 = V_90;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_91), L_341, L_342, NULL);
		RuntimeObject* L_343 = __this->____allUVs_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_344 = V_91;
		NullCheck(L_343);
		InterfaceActionInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Add(T) */, ICollection_1_t77739521790EB7E3F514D44638D90AB775EDE8ED_il2cpp_TypeInfo_var, L_343, L_344);
	}

IL_08d5:
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_345 = V_15;
		NullCheck(L_345);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_346;
		L_346 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_345, ((int64_t)-3351804022671183220LL), NULL);
		V_79 = L_346;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_347 = V_15;
		NullCheck(L_347);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_348;
		L_348 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_347, ((int64_t)7096547112154691134LL), NULL);
		V_80 = L_348;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_349 = V_15;
		NullCheck(L_349);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_350;
		L_350 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_349, ((int64_t)6774539739450160575LL), NULL);
		V_81 = L_350;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_351 = V_15;
		NullCheck(L_351);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_352;
		L_352 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_351, ((int64_t)7096547112148981913LL), NULL);
		V_82 = L_352;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_353 = V_79;
		if (L_353)
		{
			goto IL_0930;
		}
	}
	{
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_354 = V_80;
		if (L_354)
		{
			goto IL_0930;
		}
	}
	{
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_355 = V_81;
		if (L_355)
		{
			goto IL_0930;
		}
	}
	{
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_356 = V_82;
		G_B113_0 = ((!(((RuntimeObject*)(PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)L_356) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0931;
	}

IL_0930:
	{
		G_B113_0 = 1;
	}

IL_0931:
	{
		V_92 = (bool)G_B113_0;
		bool L_357 = V_92;
		if (!L_357)
		{
			goto IL_09d1;
		}
	}
	{
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_358 = V_79;
		if (!L_358)
		{
			goto IL_094c;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_359 = V_15;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_360 = V_79;
		int32_t L_361 = V_69;
		NullCheck(L_359);
		float L_362;
		L_362 = PlyElement_GetPropertyFloatValue_m7E87CAEA23D5D33F126AE7A44F4D6B28CD2283DC(L_359, L_360, L_361, NULL);
		G_B117_0 = L_362;
		goto IL_0951;
	}

IL_094c:
	{
		G_B117_0 = (1.0f);
	}

IL_0951:
	{
		V_93 = G_B117_0;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_363 = V_80;
		if (!L_363)
		{
			goto IL_0964;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_364 = V_15;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_365 = V_80;
		int32_t L_366 = V_69;
		NullCheck(L_364);
		float L_367;
		L_367 = PlyElement_GetPropertyFloatValue_m7E87CAEA23D5D33F126AE7A44F4D6B28CD2283DC(L_364, L_365, L_366, NULL);
		G_B120_0 = L_367;
		goto IL_0969;
	}

IL_0964:
	{
		G_B120_0 = (1.0f);
	}

IL_0969:
	{
		V_94 = G_B120_0;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_368 = V_81;
		if (!L_368)
		{
			goto IL_097c;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_369 = V_15;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_370 = V_81;
		int32_t L_371 = V_69;
		NullCheck(L_369);
		float L_372;
		L_372 = PlyElement_GetPropertyFloatValue_m7E87CAEA23D5D33F126AE7A44F4D6B28CD2283DC(L_369, L_370, L_371, NULL);
		G_B123_0 = L_372;
		goto IL_0981;
	}

IL_097c:
	{
		G_B123_0 = (1.0f);
	}

IL_0981:
	{
		V_95 = G_B123_0;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_373 = V_82;
		if (!L_373)
		{
			goto IL_0994;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_374 = V_15;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_375 = V_82;
		int32_t L_376 = V_69;
		NullCheck(L_374);
		float L_377;
		L_377 = PlyElement_GetPropertyFloatValue_m7E87CAEA23D5D33F126AE7A44F4D6B28CD2283DC(L_374, L_375, L_376, NULL);
		G_B126_0 = L_377;
		goto IL_0999;
	}

IL_0994:
	{
		G_B126_0 = (1.0f);
	}

IL_0999:
	{
		V_96 = G_B126_0;
		float L_378 = V_93;
		float L_379 = V_94;
		float L_380 = V_95;
		float L_381 = V_96;
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_97), ((float)(L_378/(255.0f))), ((float)(L_379/(255.0f))), ((float)(L_380/(255.0f))), ((float)(L_381/(255.0f))), NULL);
		RuntimeObject* L_382 = __this->____allColors_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_383 = V_97;
		NullCheck(L_382);
		InterfaceActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Color>::Add(T) */, ICollection_1_tFC51DD83E1437529AA19214EFADD5EE83B73CD6E_il2cpp_TypeInfo_var, L_382, L_383);
	}

IL_09d1:
	{
		int32_t L_384 = V_69;
		V_69 = ((int32_t)il2cpp_codegen_add(L_384, 1));
	}

IL_09d8:
	{
		int32_t L_385 = V_69;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_386 = V_15;
		NullCheck(L_386);
		int32_t L_387 = L_386->___Count_1;
		V_98 = (bool)((((int32_t)L_385) < ((int32_t)L_387))? 1 : 0);
		bool L_388 = V_98;
		if (L_388)
		{
			goto IL_0717;
		}
	}
	{
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_389 = ___0_plyReader;
		NullCheck(L_389);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_389, (1.0f), 2, (0.0f), NULL);
	}

IL_09ff:
	{
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_390 = __this->____reader_2;
		NullCheck(L_390);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_391;
		L_391 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_390, NULL);
		RuntimeObject* L_392 = __this->____allNormals_4;
		NullCheck(L_392);
		int32_t L_393;
		L_393 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_Count() */, ICollection_1_tEF23B8A78E9122DAA952DB1517D31EB7EC90563B_il2cpp_TypeInfo_var, L_392);
		RuntimeObject* L_394 = __this->____allColors_5;
		NullCheck(L_394);
		int32_t L_395;
		L_395 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Color>::get_Count() */, ICollection_1_tFC51DD83E1437529AA19214EFADD5EE83B73CD6E_il2cpp_TypeInfo_var, L_394);
		RuntimeObject* L_396 = __this->____allUVs_6;
		NullCheck(L_396);
		int32_t L_397;
		L_397 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_Count() */, ICollection_1_t77739521790EB7E3F514D44638D90AB775EDE8ED_il2cpp_TypeInfo_var, L_396);
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_398 = __this->____reader_2;
		NullCheck(L_398);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_399;
		L_399 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_398, NULL);
		NullCheck(L_399);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_400 = L_399->___Options_34;
		NullCheck(L_400);
		bool L_401 = L_400->___CompressMeshes_95;
		HashSet_1_t17CC6C8527489146D9154E22DE059EF4A4550640* L_402;
		L_402 = FlexibleVertexDataUtils_BuildVertexAttributesDictionary_mE29022A53EA93BE64B2E15C35DEDECAEBE16DCC1(L_391, (bool)1, (bool)((((int32_t)L_393) > ((int32_t)0))? 1 : 0), (bool)0, (bool)((((int32_t)L_395) > ((int32_t)0))? 1 : 0), (bool)((((int32_t)L_397) > ((int32_t)0))? 1 : 0), L_401, (bool)0, (bool)0, (bool)0, (bool)0, NULL);
		__this->____vertexAttributes_7 = L_402;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertexAttributes_7), (void*)L_402);
		HashSet_1_t17CC6C8527489146D9154E22DE059EF4A4550640* L_403 = __this->____vertexAttributes_7;
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_404 = __this->____reader_2;
		NullCheck(L_404);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_405;
		L_405 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_404, NULL);
		NullCheck(L_405);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_406 = L_405->___Options_34;
		NullCheck(L_406);
		bool L_407 = L_406->___CompressMeshes_95;
		RuntimeObject* L_408;
		L_408 = FlexibleVertexDataUtils_BuildStreamGeometryGroup_m0F6D3B1AB6D5BD9A088B41AB49C1CC3CCF5E38F3(L_403, L_407, NULL);
		__this->____geometryGroup_8 = L_408;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____geometryGroup_8), (void*)L_408);
		RuntimeObject* L_409 = __this->____geometryGroup_8;
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_410 = __this->____reader_2;
		NullCheck(L_410);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_411;
		L_411 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_410, NULL);
		NullCheck(L_409);
		InterfaceActionInvoker4< AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C*, int32_t, int32_t, int32_t >::Invoke(6 /* System.Void TriLibCore.Interfaces.IGeometryGroup::Setup(TriLibCore.AssetLoaderContext,System.Int32,System.Int32,System.Int32) */, IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_il2cpp_TypeInfo_var, L_409, L_411, 3, 1, 0);
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_412 = ___0_plyReader;
		NullCheck(L_412);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_413;
		L_413 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_412, NULL);
		NullCheck(L_413);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_414 = L_413->___Options_34;
		NullCheck(L_414);
		bool L_415 = L_414->___LoadPointClouds_93;
		V_99 = L_415;
		bool L_416 = V_99;
		if (!L_416)
		{
			goto IL_0b88;
		}
	}
	{
		RuntimeObject* L_417 = __this->____geometryGroup_8;
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_418 = __this->____reader_2;
		NullCheck(L_418);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_419;
		L_419 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_418, NULL);
		NullCheck(L_417);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_420;
		L_420 = GenericInterfaceFuncInvoker3< PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277*, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C*, int32_t, bool >::Invoke(IGeometryGroup_GetGeometry_TisPlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277_mD3FEA40366BC6279E62F5984369E846ADFC1D016_RuntimeMethod_var, L_417, L_419, 0, (bool)0);
		V_100 = L_420;
		V_101 = 0;
		goto IL_0b6a;
	}

IL_0ad6:
	{
		RuntimeObject* L_421 = __this->____allVertices_3;
		int32_t L_422 = V_101;
		NullCheck(L_421);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_423;
		L_423 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32) */, IList_1_t4EEE459A249DDE104FA2E88234C593389EE5D291_il2cpp_TypeInfo_var, L_421, L_422);
		V_102 = L_423;
		int32_t L_424 = V_101;
		RuntimeObject* L_425 = __this->____allNormals_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_426;
		L_426 = ListUtils_FixIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD45AFFDDC575B7D4965A6B58B98B7D88ED4323EE(L_424, L_425, ListUtils_FixIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD45AFFDDC575B7D4965A6B58B98B7D88ED4323EE_RuntimeMethod_var);
		V_103 = L_426;
		int32_t L_427 = V_101;
		RuntimeObject* L_428 = __this->____allColors_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_429;
		L_429 = ListUtils_FixIndex_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA7050D5E386674C2B99B38CF8EE1F3E237BAC447(L_427, L_428, ListUtils_FixIndex_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA7050D5E386674C2B99B38CF8EE1F3E237BAC447_RuntimeMethod_var);
		V_104 = L_429;
		int32_t L_430 = V_101;
		RuntimeObject* L_431 = __this->____allUVs_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_432;
		L_432 = ListUtils_FixIndex_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m80E31C1F387DAA4115F14B5463CADE1DEF297D2E(L_430, L_431, ListUtils_FixIndex_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m80E31C1F387DAA4115F14B5463CADE1DEF297D2E_RuntimeMethod_var);
		V_105 = L_432;
		RuntimeObject* L_433 = __this->____geometryGroup_8;
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_434 = ___0_plyReader;
		NullCheck(L_434);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_435;
		L_435 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_434, NULL);
		int32_t L_436 = V_101;
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_437 = V_100;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_438 = V_102;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_439 = V_103;
		il2cpp_codegen_initobj((&V_106), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_440 = V_106;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_441 = V_104;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_442 = V_105;
		il2cpp_codegen_initobj((&V_107), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_443 = V_107;
		il2cpp_codegen_initobj((&V_107), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_444 = V_107;
		il2cpp_codegen_initobj((&V_107), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_445 = V_107;
		il2cpp_codegen_initobj((&V_108), sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_446 = V_108;
		FlexibleVertexDataUtils_BuildAndAddFlexibleVertexData_mC35367A0F41EE78D0D41CB73484C229156CC532F(L_433, L_435, L_436, L_437, L_438, L_439, L_440, L_441, L_442, L_443, L_444, L_445, L_446, NULL);
		int32_t L_447 = V_101;
		V_101 = ((int32_t)il2cpp_codegen_add(L_447, 1));
	}

IL_0b6a:
	{
		int32_t L_448 = V_101;
		RuntimeObject* L_449 = __this->____allVertices_3;
		NullCheck(L_449);
		int32_t L_450;
		L_450 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_Count() */, ICollection_1_tEF23B8A78E9122DAA952DB1517D31EB7EC90563B_il2cpp_TypeInfo_var, L_449);
		V_109 = (bool)((((int32_t)L_448) < ((int32_t)L_450))? 1 : 0);
		bool L_451 = V_109;
		if (L_451)
		{
			goto IL_0ad6;
		}
	}
	{
		goto IL_0f88;
	}

IL_0b88:
	{
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_452 = ___0_plyReader;
		NullCheck(L_452);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_453;
		L_453 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_452, NULL);
		NullCheck(L_453);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_454 = L_453->___Options_34;
		NullCheck(L_454);
		bool L_455 = L_454->___ImportMeshes_10;
		if (!L_455)
		{
			goto IL_0bad;
		}
	}
	{
		Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC* L_456 = V_0;
		NullCheck(L_456);
		bool L_457;
		L_457 = Dictionary_2_TryGetValue_m181BAACEB7905BC572C38343BF7DDA866E9415FD(L_456, ((int64_t)6774539739450268610LL), (&V_110), Dictionary_2_TryGetValue_m181BAACEB7905BC572C38343BF7DDA866E9415FD_RuntimeMethod_var);
		G_B138_0 = ((int32_t)(L_457));
		goto IL_0bae;
	}

IL_0bad:
	{
		G_B138_0 = 0;
	}

IL_0bae:
	{
		V_111 = (bool)G_B138_0;
		bool L_458 = V_111;
		if (!L_458)
		{
			goto IL_0f88;
		}
	}
	{
		V_112 = 0;
		goto IL_0f61;
	}

IL_0bc0:
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_459 = V_110;
		NullCheck(L_459);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_460;
		L_460 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_459, ((int64_t)-4898810238098815469LL), NULL);
		V_114 = ((PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E*)IsInstClass((RuntimeObject*)L_460, PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E_il2cpp_TypeInfo_var));
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_461 = V_114;
		V_122 = (bool)((!(((RuntimeObject*)(PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E*)L_461) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_462 = V_122;
		if (!L_462)
		{
			goto IL_0bfe;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_463 = V_110;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_464 = V_114;
		int32_t L_465 = V_112;
		NullCheck(L_463);
		int32_t L_466;
		L_466 = PlyElement_GetListIndex_m2725B97E4D677B68667107956C9D7E8A2C2565AF(L_463, L_464, L_465, NULL);
		V_123 = L_466;
		int32_t L_467 = V_123;
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_468 = V_1;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_469;
		L_469 = PlyValue_GetListValue_m0917530BCED9A22F01949BB493407DCC83C71C2F(L_467, L_468, NULL);
		V_113 = L_469;
		goto IL_0c03;
	}

IL_0bfe:
	{
		V_113 = (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB*)NULL;
	}

IL_0c03:
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_470 = V_110;
		NullCheck(L_470);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_471;
		L_471 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_470, ((int64_t)3766120907217874982LL), NULL);
		V_115 = L_471;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_472 = V_115;
		if (L_472)
		{
			goto IL_0c1c;
		}
	}
	{
		G_B146_0 = 0;
		goto IL_0c27;
	}

IL_0c1c:
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_473 = V_110;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_474 = V_115;
		int32_t L_475 = V_112;
		NullCheck(L_473);
		int32_t L_476;
		L_476 = PlyElement_GetPropertyIntValue_m350C36F63BFB7DB71BBDE9219AE28BC400EAC124(L_473, L_474, L_475, NULL);
		G_B146_0 = L_476;
	}

IL_0c27:
	{
		V_116 = G_B146_0;
		RuntimeObject* L_477 = __this->____geometryGroup_8;
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_478 = __this->____reader_2;
		NullCheck(L_478);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_479;
		L_479 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_478, NULL);
		int32_t L_480 = V_116;
		NullCheck(L_477);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_481;
		L_481 = GenericInterfaceFuncInvoker3< PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277*, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C*, int32_t, bool >::Invoke(IGeometryGroup_GetGeometry_TisPlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277_mD3FEA40366BC6279E62F5984369E846ADFC1D016_RuntimeMethod_var, L_477, L_479, L_480, (bool)0);
		V_117 = L_481;
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_482 = __this->____reader_2;
		NullCheck(L_482);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_483;
		L_483 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_482, NULL);
		NullCheck(L_483);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_484 = L_483->___Options_34;
		NullCheck(L_484);
		bool L_485 = L_484->___KeepQuads_22;
		if (L_485)
		{
			goto IL_0c5e;
		}
	}
	{
		G_B149_0 = ((PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277*)(NULL));
		goto IL_0c77;
	}

IL_0c5e:
	{
		RuntimeObject* L_486 = __this->____geometryGroup_8;
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_487 = __this->____reader_2;
		NullCheck(L_487);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_488;
		L_488 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_487, NULL);
		int32_t L_489 = V_116;
		NullCheck(L_486);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_490;
		L_490 = GenericInterfaceFuncInvoker3< PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277*, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C*, int32_t, bool >::Invoke(IGeometryGroup_GetGeometry_TisPlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277_mD3FEA40366BC6279E62F5984369E846ADFC1D016_RuntimeMethod_var, L_486, L_488, L_489, (bool)1);
		G_B149_0 = L_490;
	}

IL_0c77:
	{
		V_118 = G_B149_0;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_491 = V_110;
		NullCheck(L_491);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_492;
		L_492 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_491, ((int64_t)7578069101293603633LL), NULL);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_493 = L_492;
		G_B150_0 = L_493;
		if (L_493)
		{
			G_B151_0 = L_493;
			goto IL_0c9d;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_494 = V_110;
		NullCheck(L_494);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_495;
		L_495 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_494, ((int64_t)2138570927453749980LL), NULL);
		G_B151_0 = L_495;
	}

IL_0c9d:
	{
		V_119 = ((PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E*)IsInstClass((RuntimeObject*)G_B151_0, PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E_il2cpp_TypeInfo_var));
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_496 = V_110;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_497 = V_119;
		int32_t L_498 = V_112;
		NullCheck(L_496);
		int32_t L_499;
		L_499 = PlyElement_GetListIndex_m2725B97E4D677B68667107956C9D7E8A2C2565AF(L_496, L_497, L_498, NULL);
		V_120 = L_499;
		int32_t L_500 = V_120;
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_501 = V_1;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_502;
		L_502 = PlyValue_GetListValue_m0917530BCED9A22F01949BB493407DCC83C71C2F(L_500, L_501, NULL);
		V_121 = L_502;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_503 = V_121;
		NullCheck(L_503);
		int32_t L_504;
		L_504 = List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_inline(L_503, List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_RuntimeMethod_var);
		V_124 = (bool)((((int32_t)L_504) == ((int32_t)3))? 1 : 0);
		bool L_505 = V_124;
		if (!L_505)
		{
			goto IL_0d11;
		}
	}
	{
		V_125 = 2;
		goto IL_0cfd;
	}

IL_0cd1:
	{
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_506 = V_121;
		int32_t L_507 = V_125;
		NullCheck(L_506);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_508;
		L_508 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_506, L_507, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_509 = V_119;
		NullCheck(L_509);
		int32_t L_510 = L_509->___ItemType_3;
		int32_t L_511;
		L_511 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_508, L_510, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_512 = V_117;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_513 = V_113;
		int32_t L_514 = V_125;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_515 = V_114;
		PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556(__this, L_511, L_512, L_513, L_514, L_515, NULL);
		int32_t L_516 = V_125;
		V_125 = ((int32_t)il2cpp_codegen_subtract(L_516, 1));
	}

IL_0cfd:
	{
		int32_t L_517 = V_125;
		V_126 = (bool)((((int32_t)((((int32_t)L_517) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_518 = V_126;
		if (L_518)
		{
			goto IL_0cd1;
		}
	}
	{
		goto IL_0f5a;
	}

IL_0d11:
	{
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_519 = V_121;
		NullCheck(L_519);
		int32_t L_520;
		L_520 = List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_inline(L_519, List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_RuntimeMethod_var);
		V_127 = (bool)((((int32_t)L_520) == ((int32_t)4))? 1 : 0);
		bool L_521 = V_127;
		if (!L_521)
		{
			goto IL_0e96;
		}
	}
	{
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_522 = V_118;
		V_128 = (bool)((!(((RuntimeObject*)(PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277*)L_522) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_523 = V_128;
		if (!L_523)
		{
			goto IL_0dc2;
		}
	}
	{
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_524 = V_121;
		NullCheck(L_524);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_525;
		L_525 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_524, 3, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_526 = V_119;
		NullCheck(L_526);
		int32_t L_527 = L_526->___ItemType_3;
		int32_t L_528;
		L_528 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_525, L_527, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_529 = V_118;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_530 = V_113;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_531 = V_114;
		PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556(__this, L_528, L_529, L_530, 3, L_531, NULL);
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_532 = V_121;
		NullCheck(L_532);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_533;
		L_533 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_532, 2, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_534 = V_119;
		NullCheck(L_534);
		int32_t L_535 = L_534->___ItemType_3;
		int32_t L_536;
		L_536 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_533, L_535, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_537 = V_118;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_538 = V_113;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_539 = V_114;
		PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556(__this, L_536, L_537, L_538, 2, L_539, NULL);
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_540 = V_121;
		NullCheck(L_540);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_541;
		L_541 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_540, 1, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_542 = V_119;
		NullCheck(L_542);
		int32_t L_543 = L_542->___ItemType_3;
		int32_t L_544;
		L_544 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_541, L_543, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_545 = V_118;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_546 = V_113;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_547 = V_114;
		PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556(__this, L_544, L_545, L_546, 1, L_547, NULL);
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_548 = V_121;
		NullCheck(L_548);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_549;
		L_549 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_548, 0, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_550 = V_119;
		NullCheck(L_550);
		int32_t L_551 = L_550->___ItemType_3;
		int32_t L_552;
		L_552 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_549, L_551, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_553 = V_118;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_554 = V_113;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_555 = V_114;
		PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556(__this, L_552, L_553, L_554, 0, L_555, NULL);
		goto IL_0e90;
	}

IL_0dc2:
	{
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_556 = V_121;
		NullCheck(L_556);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_557;
		L_557 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_556, 0, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_558 = V_119;
		NullCheck(L_558);
		int32_t L_559 = L_558->___ItemType_3;
		int32_t L_560;
		L_560 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_557, L_559, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_561 = V_117;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_562 = V_113;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_563 = V_114;
		PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556(__this, L_560, L_561, L_562, 0, L_563, NULL);
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_564 = V_121;
		NullCheck(L_564);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_565;
		L_565 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_564, 3, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_566 = V_119;
		NullCheck(L_566);
		int32_t L_567 = L_566->___ItemType_3;
		int32_t L_568;
		L_568 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_565, L_567, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_569 = V_117;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_570 = V_113;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_571 = V_114;
		PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556(__this, L_568, L_569, L_570, 3, L_571, NULL);
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_572 = V_121;
		NullCheck(L_572);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_573;
		L_573 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_572, 2, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_574 = V_119;
		NullCheck(L_574);
		int32_t L_575 = L_574->___ItemType_3;
		int32_t L_576;
		L_576 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_573, L_575, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_577 = V_117;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_578 = V_113;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_579 = V_114;
		PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556(__this, L_576, L_577, L_578, 2, L_579, NULL);
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_580 = V_121;
		NullCheck(L_580);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_581;
		L_581 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_580, 2, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_582 = V_119;
		NullCheck(L_582);
		int32_t L_583 = L_582->___ItemType_3;
		int32_t L_584;
		L_584 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_581, L_583, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_585 = V_117;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_586 = V_113;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_587 = V_114;
		PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556(__this, L_584, L_585, L_586, 2, L_587, NULL);
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_588 = V_121;
		NullCheck(L_588);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_589;
		L_589 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_588, 1, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_590 = V_119;
		NullCheck(L_590);
		int32_t L_591 = L_590->___ItemType_3;
		int32_t L_592;
		L_592 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_589, L_591, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_593 = V_117;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_594 = V_113;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_595 = V_114;
		PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556(__this, L_592, L_593, L_594, 1, L_595, NULL);
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_596 = V_121;
		NullCheck(L_596);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_597;
		L_597 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_596, 0, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_598 = V_119;
		NullCheck(L_598);
		int32_t L_599 = L_598->___ItemType_3;
		int32_t L_600;
		L_600 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_597, L_599, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_601 = V_117;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_602 = V_113;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_603 = V_114;
		PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556(__this, L_600, L_601, L_602, 0, L_603, NULL);
	}

IL_0e90:
	{
		goto IL_0f5a;
	}

IL_0e96:
	{
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_604 = V_121;
		NullCheck(L_604);
		int32_t L_605;
		L_605 = List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_inline(L_604, List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_RuntimeMethod_var);
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_606 = (ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)SZArrayNew(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var, (uint32_t)L_605);
		V_129 = L_606;
		V_130 = 0;
		goto IL_0f29;
	}

IL_0eaa:
	{
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_607 = V_121;
		int32_t L_608 = V_130;
		NullCheck(L_607);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_609;
		L_609 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_607, L_608, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		V_131 = L_609;
		RuntimeObject* L_610 = __this->____allVertices_3;
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_611 = V_131;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_612 = V_119;
		NullCheck(L_612);
		int32_t L_613 = L_612->___ItemType_3;
		int32_t L_614;
		L_614 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_611, L_613, NULL);
		NullCheck(L_610);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_615;
		L_615 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32) */, IList_1_t4EEE459A249DDE104FA2E88234C593389EE5D291_il2cpp_TypeInfo_var, L_610, L_614);
		V_132 = L_615;
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_616 = V_129;
		int32_t L_617 = V_130;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_618 = V_132;
		float L_619 = L_618.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_620 = V_132;
		float L_621 = L_620.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_622 = V_132;
		float L_623 = L_622.___z_4;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_624;
		memset((&L_624), 0, sizeof(L_624));
		Vec3__ctor_m937D1DD303AF7D61662A455E5F208BDB81106B7C((&L_624), L_619, L_621, L_623, /*hidden argument*/NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_625 = V_117;
		RuntimeObject* L_626 = __this->____geometryGroup_8;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_627 = V_121;
		int32_t L_628 = V_130;
		NullCheck(L_627);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_629;
		L_629 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_627, L_628, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_630 = V_119;
		NullCheck(L_630);
		int32_t L_631 = L_630->___ItemType_3;
		int32_t L_632;
		L_632 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_629, L_631, NULL);
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_633 = V_113;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_634 = V_114;
		int32_t L_635 = V_130;
		RuntimeObject* L_636;
		L_636 = PlyProcessor_BuildVertexData_mB82746725B313510493FDBBBCD2A960E434566B9(__this, L_625, L_626, L_632, L_633, L_634, L_635, NULL);
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_637;
		memset((&L_637), 0, sizeof(L_637));
		ContourVertex__ctor_mB49AE90A9B85CA37EC7EE928BC9EE585D35C8C03((&L_637), L_624, L_636, /*hidden argument*/NULL);
		NullCheck(L_616);
		(L_616)->SetAt(static_cast<il2cpp_array_size_t>(L_617), (ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F)L_637);
		int32_t L_638 = V_130;
		V_130 = ((int32_t)il2cpp_codegen_add(L_638, 1));
	}

IL_0f29:
	{
		int32_t L_639 = V_130;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_640 = V_121;
		NullCheck(L_640);
		int32_t L_641;
		L_641 = List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_inline(L_640, List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_RuntimeMethod_var);
		V_133 = (bool)((((int32_t)L_639) < ((int32_t)L_641))? 1 : 0);
		bool L_642 = V_133;
		if (L_642)
		{
			goto IL_0eaa;
		}
	}
	{
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_643 = V_129;
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_644 = __this->____reader_2;
		NullCheck(L_644);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_645;
		L_645 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_644, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_646 = V_117;
		RuntimeObject* L_647 = __this->____geometryGroup_8;
		Helpers_Tesselate_m52BC0268EF5AEEEECF07746E8B25E59026DAC804((RuntimeObject*)L_643, L_645, L_646, L_647, (bool)1, NULL);
	}

IL_0f5a:
	{
		int32_t L_648 = V_112;
		V_112 = ((int32_t)il2cpp_codegen_add(L_648, 1));
	}

IL_0f61:
	{
		int32_t L_649 = V_112;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_650 = V_110;
		NullCheck(L_650);
		int32_t L_651 = L_650->___Count_1;
		V_134 = (bool)((((int32_t)L_649) < ((int32_t)L_651))? 1 : 0);
		bool L_652 = V_134;
		if (L_652)
		{
			goto IL_0bc0;
		}
	}
	{
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_653 = ___0_plyReader;
		NullCheck(L_653);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_653, (1.0f), 3, (0.0f), NULL);
	}

IL_0f88:
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_654 = V_10;
		NullCheck(L_654);
		TextReader_Dispose_mDCB332EFA06970A9CC7EC4596FCC5220B9512616(L_654, NULL);
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_655 = (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237*)il2cpp_codegen_object_new(PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237_il2cpp_TypeInfo_var);
		NullCheck(L_655);
		PlyRootModel__ctor_m70F96F0795DD6B57ADAEE28C419A56033958CEED(L_655, NULL);
		V_135 = L_655;
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_656 = V_135;
		NullCheck(L_656);
		PlyModel_set_Visibility_mB2F9D43D393D00418E2B4A999974A1E18512D0A5_inline(L_656, (bool)1, NULL);
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_657 = V_135;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_658;
		L_658 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_657);
		PlyModel_set_LocalScale_m8055103EC8ADECCC5D3C535C098B33AA2E0275A8_inline(L_657, L_658, NULL);
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_659 = V_135;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_660;
		L_660 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_659);
		PlyModel_set_LocalRotation_mA70C0956246A032C3C1C7EF5DE31A303ACE92BCB_inline(L_659, L_660, NULL);
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_661 = V_135;
		RuntimeObject* L_662 = __this->____geometryGroup_8;
		NullCheck(L_661);
		PlyModel_set_GeometryGroup_mC40A2CC9BD75EBA9305AA0FC6E9F1FFD51FDA055_inline(L_661, L_662, NULL);
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_663 = V_135;
		RuntimeObject* L_664 = V_14;
		NullCheck(L_663);
		PlyRootModel_set_AllMaterials_m30733607EFAAACE9110C2452A299D1D47D799C53_inline(L_663, L_664, NULL);
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_665 = V_135;
		List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31* L_666 = V_7;
		NullCheck(L_665);
		PlyRootModel_set_AllTextures_m7646524ECF24096720D3C48A840F554283D6212E_inline(L_665, L_666, NULL);
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_667 = V_135;
		IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711* L_668 = (IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711*)(IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711*)SZArrayNew(IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711_il2cpp_TypeInfo_var, (uint32_t)1);
		IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711* L_669 = L_668;
		RuntimeObject* L_670 = __this->____geometryGroup_8;
		NullCheck(L_669);
		ArrayElementTypeCheck (L_669, L_670);
		(L_669)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_670);
		NullCheck(L_667);
		PlyRootModel_set_AllGeometryGroups_m44BF8C7B4B75BCAA1C25B38D31F5FB90019FD3F1_inline(L_667, (RuntimeObject*)L_669, NULL);
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_671 = V_135;
		V_16 = L_671;
		RuntimeObject* L_672 = V_14;
		V_136 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_672) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_673 = V_136;
		if (!L_673)
		{
			goto IL_103e;
		}
	}
	{
		RuntimeObject* L_674 = V_14;
		NullCheck(L_674);
		int32_t L_675;
		L_675 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TriLibCore.Interfaces.IMaterial>::get_Count() */, ICollection_1_tD4699121F1986A1CF0F28D10E91389DD1C7FDE69_il2cpp_TypeInfo_var, L_674);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_676 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_675);
		V_137 = L_676;
		V_138 = 0;
		goto IL_1025;
	}

IL_1016:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_677 = V_137;
		int32_t L_678 = V_138;
		int32_t L_679 = V_138;
		NullCheck(L_677);
		(L_677)->SetAt(static_cast<il2cpp_array_size_t>(L_678), (int32_t)L_679);
		int32_t L_680 = V_138;
		V_138 = ((int32_t)il2cpp_codegen_add(L_680, 1));
	}

IL_1025:
	{
		int32_t L_681 = V_138;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_682 = V_137;
		NullCheck(L_682);
		V_139 = (bool)((((int32_t)L_681) < ((int32_t)((int32_t)(((RuntimeArray*)L_682)->max_length))))? 1 : 0);
		bool L_683 = V_139;
		if (L_683)
		{
			goto IL_1016;
		}
	}
	{
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_684 = V_16;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_685 = V_137;
		NullCheck(L_684);
		PlyModel_set_MaterialIndices_m87FB1DB52736B0D10EBF7CA05C04C3B1A321F670_inline(L_684, (RuntimeObject*)L_685, NULL);
	}

IL_103e:
	{
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_686 = V_16;
		V_140 = L_686;
		goto IL_1044;
	}

IL_1044:
	{
		RuntimeObject* L_687 = V_140;
		return L_687;
	}
}
// TriLibCore.Geometries.IVertexData TriLibCore.Ply.PlyProcessor::BuildVertexData(TriLibCore.Ply.PlyGeometry,TriLibCore.Interfaces.IGeometryGroup,System.Int32,System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>,TriLibCore.Ply.PlyListProperty,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyProcessor_BuildVertexData_mB82746725B313510493FDBBBCD2A960E434566B9 (PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* __this, PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* ___0_triGeometry, RuntimeObject* ___1_geometryGroup, int32_t ___2_vertexIndex, List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* ___3_texCoord, PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* ___4_texCoordProp, int32_t ___5_texCoordIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListUtils_FixIndex_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA7050D5E386674C2B99B38CF8EE1F3E237BAC447_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListUtils_FixIndex_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m80E31C1F387DAA4115F14B5463CADE1DEF297D2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListUtils_FixIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD45AFFDDC575B7D4965A6B58B98B7D88ED4323EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_3;
	memset((&V_3), 0, sizeof(V_3));
	InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* V_4 = NULL;
	bool V_5 = false;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	RuntimeObject* V_8 = NULL;
	{
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_0 = ___3_texCoord;
		V_5 = (bool)((!(((RuntimeObject*)(List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_5;
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_2 = ___3_texCoord;
		int32_t L_3 = ___5_texCoordIndex;
		NullCheck(L_2);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_4;
		L_4 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_2, ((int32_t)il2cpp_codegen_multiply(L_3, 2)), List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_5 = ___4_texCoordProp;
		float L_6;
		L_6 = PlyValue_GetFloatValue_mCE0211B08C054DE0848AEB2EF5E728F6D28E9830(L_4, L_5, NULL);
		V_6 = L_6;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_7 = ___3_texCoord;
		int32_t L_8 = ___5_texCoordIndex;
		NullCheck(L_7);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_9;
		L_9 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_7, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_8, 2)), 1)), List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_10 = ___4_texCoordProp;
		float L_11;
		L_11 = PlyValue_GetFloatValue_mCE0211B08C054DE0848AEB2EF5E728F6D28E9830(L_9, L_10, NULL);
		V_7 = L_11;
		float L_12 = V_6;
		float L_13 = V_7;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_12, L_13, NULL);
		goto IL_0054;
	}

IL_0045:
	{
		int32_t L_14 = ___2_vertexIndex;
		RuntimeObject* L_15 = __this->____allUVs_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = ListUtils_FixIndex_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m80E31C1F387DAA4115F14B5463CADE1DEF297D2E(L_14, L_15, ListUtils_FixIndex_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m80E31C1F387DAA4115F14B5463CADE1DEF297D2E_RuntimeMethod_var);
		V_0 = L_16;
	}

IL_0054:
	{
		int32_t L_17 = ___2_vertexIndex;
		RuntimeObject* L_18 = __this->____allVertices_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = ListUtils_FixIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD45AFFDDC575B7D4965A6B58B98B7D88ED4323EE(L_17, L_18, ListUtils_FixIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD45AFFDDC575B7D4965A6B58B98B7D88ED4323EE_RuntimeMethod_var);
		V_1 = L_19;
		int32_t L_20 = ___2_vertexIndex;
		RuntimeObject* L_21 = __this->____allNormals_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = ListUtils_FixIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD45AFFDDC575B7D4965A6B58B98B7D88ED4323EE(L_20, L_21, ListUtils_FixIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD45AFFDDC575B7D4965A6B58B98B7D88ED4323EE_RuntimeMethod_var);
		V_2 = L_22;
		int32_t L_23 = ___2_vertexIndex;
		RuntimeObject* L_24 = __this->____allColors_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		L_25 = ListUtils_FixIndex_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA7050D5E386674C2B99B38CF8EE1F3E237BAC447(L_23, L_24, ListUtils_FixIndex_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA7050D5E386674C2B99B38CF8EE1F3E237BAC447_RuntimeMethod_var);
		V_3 = L_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_1;
		InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* L_27 = (InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5*)il2cpp_codegen_object_new(InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		InterpolatedVertex__ctor_mA3F5FBB1EACDDB0F2B33E893A45FB89113C6787C(L_27, L_26, NULL);
		V_4 = L_27;
		InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* L_28 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_1;
		RuntimeObject* L_30 = ___1_geometryGroup;
		NullCheck(L_28);
		InterpolatedVertex_SetPosition_m51A3B70131151C51E738A6EDCD4E5EBEF7C80E2C(L_28, L_29, L_30, NULL);
		InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* L_31 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_2;
		RuntimeObject* L_33 = ___1_geometryGroup;
		NullCheck(L_31);
		InterpolatedVertex_SetNormal_m48EE21D1CFF1D80F3EAAD2689ABEE84102882ADC(L_31, L_32, L_33, NULL);
		InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* L_34 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35 = V_3;
		RuntimeObject* L_36 = ___1_geometryGroup;
		NullCheck(L_34);
		InterpolatedVertex_SetColor_m01F89204D2B248BE23E94620AE338F73D8C90AE5(L_34, L_35, L_36, NULL);
		InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* L_37 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_0;
		RuntimeObject* L_39 = ___1_geometryGroup;
		NullCheck(L_37);
		InterpolatedVertex_SetUV1_mA7C291101768A0EE2734CD2589D815DCC2454551(L_37, L_38, L_39, NULL);
		InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* L_40 = V_4;
		V_8 = L_40;
		goto IL_00b1;
	}

IL_00b1:
	{
		RuntimeObject* L_41 = V_8;
		return L_41;
	}
}
// System.Void TriLibCore.Ply.PlyProcessor::AddVertex(System.Int32,TriLibCore.Ply.PlyGeometry,System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>,System.Int32,TriLibCore.Ply.PlyProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556 (PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* __this, int32_t ___0_vertexIndex, PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* ___1_geometry, List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* ___2_texCoord, int32_t ___3_texCoordIndex, PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___4_texCoordProp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListUtils_FixIndex_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA7050D5E386674C2B99B38CF8EE1F3E237BAC447_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListUtils_FixIndex_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m80E31C1F387DAA4115F14B5463CADE1DEF297D2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListUtils_FixIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD45AFFDDC575B7D4965A6B58B98B7D88ED4323EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_0 = ___2_texCoord;
		V_1 = (bool)((!(((RuntimeObject*)(List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_2 = ___2_texCoord;
		int32_t L_3 = ___3_texCoordIndex;
		NullCheck(L_2);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_4;
		L_4 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_2, ((int32_t)il2cpp_codegen_multiply(L_3, 2)), List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_5 = ___4_texCoordProp;
		float L_6;
		L_6 = PlyValue_GetFloatValue_mCE0211B08C054DE0848AEB2EF5E728F6D28E9830(L_4, L_5, NULL);
		V_2 = L_6;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_7 = ___2_texCoord;
		int32_t L_8 = ___3_texCoordIndex;
		NullCheck(L_7);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_9;
		L_9 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_7, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_8, 2)), 1)), List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_10 = ___4_texCoordProp;
		float L_11;
		L_11 = PlyValue_GetFloatValue_mCE0211B08C054DE0848AEB2EF5E728F6D28E9830(L_9, L_10, NULL);
		V_3 = L_11;
		float L_12 = V_2;
		float L_13 = V_3;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_12, L_13, NULL);
		goto IL_004b;
	}

IL_003c:
	{
		int32_t L_14 = ___0_vertexIndex;
		RuntimeObject* L_15 = __this->____allUVs_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = ListUtils_FixIndex_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m80E31C1F387DAA4115F14B5463CADE1DEF297D2E(L_14, L_15, ListUtils_FixIndex_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m80E31C1F387DAA4115F14B5463CADE1DEF297D2E_RuntimeMethod_var);
		V_0 = L_16;
	}

IL_004b:
	{
		RuntimeObject* L_17 = __this->____geometryGroup_8;
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_18 = __this->____reader_2;
		NullCheck(L_18);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_19;
		L_19 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_18, NULL);
		int32_t L_20 = ___0_vertexIndex;
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_21 = ___1_geometry;
		int32_t L_22 = ___0_vertexIndex;
		RuntimeObject* L_23 = __this->____allVertices_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = ListUtils_FixIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD45AFFDDC575B7D4965A6B58B98B7D88ED4323EE(L_22, L_23, ListUtils_FixIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD45AFFDDC575B7D4965A6B58B98B7D88ED4323EE_RuntimeMethod_var);
		int32_t L_25 = ___0_vertexIndex;
		RuntimeObject* L_26 = __this->____allNormals_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = ListUtils_FixIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD45AFFDDC575B7D4965A6B58B98B7D88ED4323EE(L_25, L_26, ListUtils_FixIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD45AFFDDC575B7D4965A6B58B98B7D88ED4323EE_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_4), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_28 = V_4;
		int32_t L_29 = ___0_vertexIndex;
		RuntimeObject* L_30 = __this->____allColors_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31;
		L_31 = ListUtils_FixIndex_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA7050D5E386674C2B99B38CF8EE1F3E237BAC447(L_29, L_30, ListUtils_FixIndex_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA7050D5E386674C2B99B38CF8EE1F3E237BAC447_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_0;
		il2cpp_codegen_initobj((&V_5), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_5;
		il2cpp_codegen_initobj((&V_5), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_5;
		il2cpp_codegen_initobj((&V_5), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_5;
		il2cpp_codegen_initobj((&V_6), sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_36 = V_6;
		FlexibleVertexDataUtils_BuildAndAddFlexibleVertexData_mC35367A0F41EE78D0D41CB73484C229156CC532F(L_17, L_19, L_20, L_21, L_24, L_27, L_28, L_31, L_32, L_33, L_34, L_35, L_36, NULL);
		return;
	}
}
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyProcessor::ReadElementData(TriLibCore.Ply.PlyProperty,TriLibCore.Ply.PlyPropertyType,System.Boolean,System.IO.BinaryReader,System.Boolean,TriLibCore.Ply.PlyStreamReader,TriLibCore.Utils.BigEndianBinaryReader,System.Collections.Generic.List`1<System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyProcessor_ReadElementData_m295BBB280885FD705DF14E08D8FE375B03CB984B (PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___0_property, int32_t ___1_propertyType, bool ___2_littleEndian, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___3_binaryReader, bool ___4_bigEndian, PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* ___5_plyStreamReader, BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* ___6_bigEndianBinaryReader, List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* ___7_lists, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m37A1197D84857A9512633D2FB5380FCAC7AB381E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7C99F2FA69D684BD5B7E22B8A115DA258EA04CB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m893153D76F05AFF53207ABCA86290836BCC7B122_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* V_1 = NULL;
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_10;
	memset((&V_10), 0, sizeof(V_10));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 G_B13_0;
	memset((&G_B13_0), 0, sizeof(G_B13_0));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 G_B15_0;
	memset((&G_B15_0), 0, sizeof(G_B15_0));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 G_B20_0;
	memset((&G_B20_0), 0, sizeof(G_B20_0));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 G_B22_0;
	memset((&G_B22_0), 0, sizeof(G_B22_0));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 G_B27_0;
	memset((&G_B27_0), 0, sizeof(G_B27_0));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 G_B29_0;
	memset((&G_B29_0), 0, sizeof(G_B29_0));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 G_B34_0;
	memset((&G_B34_0), 0, sizeof(G_B34_0));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 G_B36_0;
	memset((&G_B36_0), 0, sizeof(G_B36_0));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 G_B41_0;
	memset((&G_B41_0), 0, sizeof(G_B41_0));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 G_B43_0;
	memset((&G_B43_0), 0, sizeof(G_B43_0));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 G_B48_0;
	memset((&G_B48_0), 0, sizeof(G_B48_0));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 G_B50_0;
	memset((&G_B50_0), 0, sizeof(G_B50_0));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 G_B55_0;
	memset((&G_B55_0), 0, sizeof(G_B55_0));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 G_B57_0;
	memset((&G_B57_0), 0, sizeof(G_B57_0));
	{
		int32_t L_0 = ___1_propertyType;
		V_6 = L_0;
		int32_t L_1 = V_6;
		V_5 = L_1;
		int32_t L_2 = V_5;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0038;
			}
			case 1:
			{
				goto IL_0067;
			}
			case 2:
			{
				goto IL_0096;
			}
			case 3:
			{
				goto IL_00c5;
			}
			case 4:
			{
				goto IL_00f4;
			}
			case 5:
			{
				goto IL_0123;
			}
			case 6:
			{
				goto IL_0152;
			}
			case 7:
			{
				goto IL_0181;
			}
			case 8:
			{
				goto IL_01bc;
			}
		}
	}
	{
		goto IL_0242;
	}

IL_0038:
	{
		bool L_3 = ___2_littleEndian;
		if (L_3)
		{
			goto IL_0056;
		}
	}
	{
		bool L_4 = ___4_bigEndian;
		if (L_4)
		{
			goto IL_0048;
		}
	}
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_5 = ___5_plyStreamReader;
		NullCheck(L_5);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_6;
		L_6 = PlyStreamReader_ToSByte_mE0CBD4AA736167D961A334A686A4851A2B107FD8(L_5, NULL);
		G_B6_0 = L_6;
		goto IL_0054;
	}

IL_0048:
	{
		BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* L_7 = ___6_bigEndianBinaryReader;
		NullCheck(L_7);
		int8_t L_8;
		L_8 = VirtualFuncInvoker0< int8_t >::Invoke(12 /* System.SByte System.IO.BinaryReader::ReadSByte() */, L_7);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_9;
		L_9 = PlyValue_op_Implicit_m97A5AB6B334327E421C58927E78C773B6D809B53(L_8, NULL);
		G_B6_0 = L_9;
	}

IL_0054:
	{
		G_B8_0 = G_B6_0;
		goto IL_0061;
	}

IL_0056:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_10 = ___3_binaryReader;
		NullCheck(L_10);
		int8_t L_11;
		L_11 = VirtualFuncInvoker0< int8_t >::Invoke(12 /* System.SByte System.IO.BinaryReader::ReadSByte() */, L_10);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_12;
		L_12 = PlyValue_op_Implicit_m97A5AB6B334327E421C58927E78C773B6D809B53(L_11, NULL);
		G_B8_0 = L_12;
	}

IL_0061:
	{
		V_0 = G_B8_0;
		goto IL_024a;
	}

IL_0067:
	{
		bool L_13 = ___2_littleEndian;
		if (L_13)
		{
			goto IL_0085;
		}
	}
	{
		bool L_14 = ___4_bigEndian;
		if (L_14)
		{
			goto IL_0077;
		}
	}
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_15 = ___5_plyStreamReader;
		NullCheck(L_15);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_16;
		L_16 = PlyStreamReader_ToByte_mC8D36F8FD97FEBF03092492FCCFC77F27C669B31(L_15, NULL);
		G_B13_0 = L_16;
		goto IL_0083;
	}

IL_0077:
	{
		BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* L_17 = ___6_bigEndianBinaryReader;
		NullCheck(L_17);
		uint8_t L_18;
		L_18 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_17);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_19;
		L_19 = PlyValue_op_Implicit_m9E7C391E8C4BAEF13B69CC7B0CEC87F250BD46A6(L_18, NULL);
		G_B13_0 = L_19;
	}

IL_0083:
	{
		G_B15_0 = G_B13_0;
		goto IL_0090;
	}

IL_0085:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_20 = ___3_binaryReader;
		NullCheck(L_20);
		uint8_t L_21;
		L_21 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_20);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_22;
		L_22 = PlyValue_op_Implicit_m9E7C391E8C4BAEF13B69CC7B0CEC87F250BD46A6(L_21, NULL);
		G_B15_0 = L_22;
	}

IL_0090:
	{
		V_0 = G_B15_0;
		goto IL_024a;
	}

IL_0096:
	{
		bool L_23 = ___2_littleEndian;
		if (L_23)
		{
			goto IL_00b4;
		}
	}
	{
		bool L_24 = ___4_bigEndian;
		if (L_24)
		{
			goto IL_00a6;
		}
	}
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_25 = ___5_plyStreamReader;
		NullCheck(L_25);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_26;
		L_26 = PlyStreamReader_ToInt16_m15E305684870C3A4B737A95DA4212701C45830F9(L_25, NULL);
		G_B20_0 = L_26;
		goto IL_00b2;
	}

IL_00a6:
	{
		BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* L_27 = ___6_bigEndianBinaryReader;
		NullCheck(L_27);
		int16_t L_28;
		L_28 = BigEndianBinaryReader_ReadInt16_m2646AC659077E17786022320078FBBDB8DCBC707(L_27, NULL);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_29;
		L_29 = PlyValue_op_Implicit_m78378AA8D6DDCEC09907E0927A06ED49418D4635(L_28, NULL);
		G_B20_0 = L_29;
	}

IL_00b2:
	{
		G_B22_0 = G_B20_0;
		goto IL_00bf;
	}

IL_00b4:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_30 = ___3_binaryReader;
		NullCheck(L_30);
		int16_t L_31;
		L_31 = VirtualFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_30);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_32;
		L_32 = PlyValue_op_Implicit_m78378AA8D6DDCEC09907E0927A06ED49418D4635(L_31, NULL);
		G_B22_0 = L_32;
	}

IL_00bf:
	{
		V_0 = G_B22_0;
		goto IL_024a;
	}

IL_00c5:
	{
		bool L_33 = ___2_littleEndian;
		if (L_33)
		{
			goto IL_00e3;
		}
	}
	{
		bool L_34 = ___4_bigEndian;
		if (L_34)
		{
			goto IL_00d5;
		}
	}
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_35 = ___5_plyStreamReader;
		NullCheck(L_35);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_36;
		L_36 = PlyStreamReader_ToUInt16_m5E5F5DDAFA6CBF735A852FED4B1712FC914301AD(L_35, NULL);
		G_B27_0 = L_36;
		goto IL_00e1;
	}

IL_00d5:
	{
		BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* L_37 = ___6_bigEndianBinaryReader;
		NullCheck(L_37);
		uint16_t L_38;
		L_38 = VirtualFuncInvoker0< uint16_t >::Invoke(15 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_37);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_39;
		L_39 = PlyValue_op_Implicit_m8B2B7375CC217E6E3345C812C647F7BB51FC0DC6(L_38, NULL);
		G_B27_0 = L_39;
	}

IL_00e1:
	{
		G_B29_0 = G_B27_0;
		goto IL_00ee;
	}

IL_00e3:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_40 = ___3_binaryReader;
		NullCheck(L_40);
		uint16_t L_41;
		L_41 = VirtualFuncInvoker0< uint16_t >::Invoke(15 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_40);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_42;
		L_42 = PlyValue_op_Implicit_m8B2B7375CC217E6E3345C812C647F7BB51FC0DC6(L_41, NULL);
		G_B29_0 = L_42;
	}

IL_00ee:
	{
		V_0 = G_B29_0;
		goto IL_024a;
	}

IL_00f4:
	{
		bool L_43 = ___2_littleEndian;
		if (L_43)
		{
			goto IL_0112;
		}
	}
	{
		bool L_44 = ___4_bigEndian;
		if (L_44)
		{
			goto IL_0104;
		}
	}
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_45 = ___5_plyStreamReader;
		NullCheck(L_45);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_46;
		L_46 = PlyStreamReader_ToInt32_m9F2C9B5DB1E8C1E858934D60E8365C24B5F96E05(L_45, NULL);
		G_B34_0 = L_46;
		goto IL_0110;
	}

IL_0104:
	{
		BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* L_47 = ___6_bigEndianBinaryReader;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_47);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_49;
		L_49 = PlyValue_op_Implicit_mCBC1637AE004264B6DC685D489B3DABF7C40CE8B(L_48, NULL);
		G_B34_0 = L_49;
	}

IL_0110:
	{
		G_B36_0 = G_B34_0;
		goto IL_011d;
	}

IL_0112:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_50 = ___3_binaryReader;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_50);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_52;
		L_52 = PlyValue_op_Implicit_mCBC1637AE004264B6DC685D489B3DABF7C40CE8B(L_51, NULL);
		G_B36_0 = L_52;
	}

IL_011d:
	{
		V_0 = G_B36_0;
		goto IL_024a;
	}

IL_0123:
	{
		bool L_53 = ___2_littleEndian;
		if (L_53)
		{
			goto IL_0141;
		}
	}
	{
		bool L_54 = ___4_bigEndian;
		if (L_54)
		{
			goto IL_0133;
		}
	}
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_55 = ___5_plyStreamReader;
		NullCheck(L_55);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_56;
		L_56 = PlyStreamReader_ToUInt32_mFE918D4E08D1EBBB095A75F4A6F4B0B0FF31E7AA(L_55, NULL);
		G_B41_0 = L_56;
		goto IL_013f;
	}

IL_0133:
	{
		BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* L_57 = ___6_bigEndianBinaryReader;
		NullCheck(L_57);
		uint32_t L_58;
		L_58 = BigEndianBinaryReader_ReadUInt32_mE3E235D63AC4B3633B15C0C70AAFA771DB825823(L_57, NULL);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_59;
		L_59 = PlyValue_op_Implicit_m29A5DE8027F986F1251009072C203966CA6B2CE4(L_58, NULL);
		G_B41_0 = L_59;
	}

IL_013f:
	{
		G_B43_0 = G_B41_0;
		goto IL_014c;
	}

IL_0141:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_60 = ___3_binaryReader;
		NullCheck(L_60);
		uint32_t L_61;
		L_61 = VirtualFuncInvoker0< uint32_t >::Invoke(17 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_60);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_62;
		L_62 = PlyValue_op_Implicit_m29A5DE8027F986F1251009072C203966CA6B2CE4(L_61, NULL);
		G_B43_0 = L_62;
	}

IL_014c:
	{
		V_0 = G_B43_0;
		goto IL_024a;
	}

IL_0152:
	{
		bool L_63 = ___2_littleEndian;
		if (L_63)
		{
			goto IL_0170;
		}
	}
	{
		bool L_64 = ___4_bigEndian;
		if (L_64)
		{
			goto IL_0162;
		}
	}
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_65 = ___5_plyStreamReader;
		NullCheck(L_65);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_66;
		L_66 = PlyStreamReader_ToSingle_m90ED33B30955513C54C102F1CF12293B87ED840D(L_65, NULL);
		G_B48_0 = L_66;
		goto IL_016e;
	}

IL_0162:
	{
		BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* L_67 = ___6_bigEndianBinaryReader;
		NullCheck(L_67);
		float L_68;
		L_68 = BigEndianBinaryReader_ReadSingle_m5BE3F923D636289CE8D32BD988A36AF1D507BC8E(L_67, NULL);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_69;
		L_69 = PlyValue_op_Implicit_mABA4998D1201D014DFC2948ED728D84579823AB2(L_68, NULL);
		G_B48_0 = L_69;
	}

IL_016e:
	{
		G_B50_0 = G_B48_0;
		goto IL_017b;
	}

IL_0170:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_70 = ___3_binaryReader;
		NullCheck(L_70);
		float L_71;
		L_71 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_70);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_72;
		L_72 = PlyValue_op_Implicit_mABA4998D1201D014DFC2948ED728D84579823AB2(L_71, NULL);
		G_B50_0 = L_72;
	}

IL_017b:
	{
		V_0 = G_B50_0;
		goto IL_024a;
	}

IL_0181:
	{
		bool L_73 = ___2_littleEndian;
		if (L_73)
		{
			goto IL_01a5;
		}
	}
	{
		bool L_74 = ___4_bigEndian;
		if (L_74)
		{
			goto IL_0191;
		}
	}
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_75 = ___5_plyStreamReader;
		NullCheck(L_75);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_76;
		L_76 = PlyStreamReader_ToDouble_m24378FB1F25B30F14E4F1C4EDE8A61FE4AB2C467(L_75, NULL);
		G_B55_0 = L_76;
		goto IL_01a3;
	}

IL_0191:
	{
		il2cpp_codegen_runtime_class_init_inline(PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F_il2cpp_TypeInfo_var);
		double L_77 = ((PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F_StaticFields*)il2cpp_codegen_static_fields_for(PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F_il2cpp_TypeInfo_var))->___PlyConversionPrecision_10;
		BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* L_78 = ___6_bigEndianBinaryReader;
		NullCheck(L_78);
		double L_79;
		L_79 = BigEndianBinaryReader_ReadDouble_m807A1A1D9EE248DD7637AB40276E88CADDCAB32F(L_78, NULL);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_80;
		L_80 = PlyValue_op_Implicit_m1A3B9DCC94933A941A05360494BF9C1D6A1F5FE0(((double)il2cpp_codegen_multiply(L_77, L_79)), NULL);
		G_B55_0 = L_80;
	}

IL_01a3:
	{
		G_B57_0 = G_B55_0;
		goto IL_01b6;
	}

IL_01a5:
	{
		il2cpp_codegen_runtime_class_init_inline(PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F_il2cpp_TypeInfo_var);
		double L_81 = ((PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F_StaticFields*)il2cpp_codegen_static_fields_for(PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F_il2cpp_TypeInfo_var))->___PlyConversionPrecision_10;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_82 = ___3_binaryReader;
		NullCheck(L_82);
		double L_83;
		L_83 = VirtualFuncInvoker0< double >::Invoke(21 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_82);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_84;
		L_84 = PlyValue_op_Implicit_m1A3B9DCC94933A941A05360494BF9C1D6A1F5FE0(((double)il2cpp_codegen_multiply(L_81, L_83)), NULL);
		G_B57_0 = L_84;
	}

IL_01b6:
	{
		V_0 = G_B57_0;
		goto IL_024a;
	}

IL_01bc:
	{
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_85 = ___0_property;
		V_1 = ((PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E*)CastclassClass((RuntimeObject*)L_85, PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E_il2cpp_TypeInfo_var));
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_86 = ___0_property;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_87 = V_1;
		NullCheck(L_87);
		int32_t L_88 = L_87->___CounterType_2;
		bool L_89 = ___2_littleEndian;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_90 = ___3_binaryReader;
		bool L_91 = ___4_bigEndian;
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_92 = ___5_plyStreamReader;
		BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* L_93 = ___6_bigEndianBinaryReader;
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_94 = ___7_lists;
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_95;
		L_95 = PlyProcessor_ReadElementData_m295BBB280885FD705DF14E08D8FE375B03CB984B(L_86, L_88, L_89, L_90, L_91, L_92, L_93, L_94, NULL);
		V_2 = L_95;
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_96 = V_2;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_97 = V_1;
		NullCheck(L_97);
		int32_t L_98 = L_97->___CounterType_2;
		int32_t L_99;
		L_99 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_96, L_98, NULL);
		V_3 = L_99;
		int32_t L_100 = V_3;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_101 = (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB*)il2cpp_codegen_object_new(List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB_il2cpp_TypeInfo_var);
		NullCheck(L_101);
		List_1__ctor_m893153D76F05AFF53207ABCA86290836BCC7B122(L_101, L_100, List_1__ctor_m893153D76F05AFF53207ABCA86290836BCC7B122_RuntimeMethod_var);
		V_4 = L_101;
		V_7 = 0;
		goto IL_021e;
	}

IL_01f4:
	{
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_102 = ___0_property;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_103 = V_1;
		NullCheck(L_103);
		int32_t L_104 = L_103->___ItemType_3;
		bool L_105 = ___2_littleEndian;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_106 = ___3_binaryReader;
		bool L_107 = ___4_bigEndian;
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_108 = ___5_plyStreamReader;
		BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* L_109 = ___6_bigEndianBinaryReader;
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_110 = ___7_lists;
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_111;
		L_111 = PlyProcessor_ReadElementData_m295BBB280885FD705DF14E08D8FE375B03CB984B(L_102, L_104, L_105, L_106, L_107, L_108, L_109, L_110, NULL);
		V_8 = L_111;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_112 = V_4;
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_113 = V_8;
		NullCheck(L_112);
		List_1_Add_m37A1197D84857A9512633D2FB5380FCAC7AB381E_inline(L_112, L_113, List_1_Add_m37A1197D84857A9512633D2FB5380FCAC7AB381E_RuntimeMethod_var);
		int32_t L_114 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_021e:
	{
		int32_t L_115 = V_7;
		int32_t L_116 = V_3;
		V_9 = (bool)((((int32_t)L_115) < ((int32_t)L_116))? 1 : 0);
		bool L_117 = V_9;
		if (L_117)
		{
			goto IL_01f4;
		}
	}
	{
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_118 = ___7_lists;
		NullCheck(L_118);
		int32_t L_119;
		L_119 = List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_inline(L_118, List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_RuntimeMethod_var);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_120;
		L_120 = PlyValue_op_Implicit_mCBC1637AE004264B6DC685D489B3DABF7C40CE8B(L_119, NULL);
		V_0 = L_120;
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_121 = ___7_lists;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_122 = V_4;
		NullCheck(L_121);
		List_1_Add_m7C99F2FA69D684BD5B7E22B8A115DA258EA04CB2_inline(L_121, L_122, List_1_Add_m7C99F2FA69D684BD5B7E22B8A115DA258EA04CB2_RuntimeMethod_var);
		goto IL_024a;
	}

IL_0242:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_123 = ((PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41_StaticFields*)il2cpp_codegen_static_fields_for(PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41_il2cpp_TypeInfo_var))->___Unknown_1;
		V_0 = L_123;
		goto IL_024a;
	}

IL_024a:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_124 = V_0;
		V_10 = L_124;
		goto IL_024f;
	}

IL_024f:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_125 = V_10;
		return L_125;
	}
}
// System.Int64 TriLibCore.Ply.PlyProcessor::DataSize(TriLibCore.Ply.PlyPropertyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PlyProcessor_DataSize_m43C82832553876645CA5A1484F5B4D294428298D (int32_t ___0_valueType, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		int32_t L_0 = ___0_valueType;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0031;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_0036;
			}
			case 4:
			{
				goto IL_003b;
			}
			case 5:
			{
				goto IL_003b;
			}
			case 6:
			{
				goto IL_003b;
			}
			case 7:
			{
				goto IL_0040;
			}
			case 8:
			{
				goto IL_0045;
			}
		}
	}
	{
		goto IL_004a;
	}

IL_0031:
	{
		V_2 = ((int64_t)1);
		goto IL_004f;
	}

IL_0036:
	{
		V_2 = ((int64_t)2);
		goto IL_004f;
	}

IL_003b:
	{
		V_2 = ((int64_t)4);
		goto IL_004f;
	}

IL_0040:
	{
		V_2 = ((int64_t)8);
		goto IL_004f;
	}

IL_0045:
	{
		V_2 = ((int64_t)4);
		goto IL_004f;
	}

IL_004a:
	{
		V_2 = ((int64_t)0);
		goto IL_004f;
	}

IL_004f:
	{
		int64_t L_3 = V_2;
		return L_3;
	}
}
// TriLibCore.Ply.PlyPropertyType TriLibCore.Ply.PlyProcessor::GetPropertyType(TriLibCore.Ply.PlyStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyProcessor_GetPropertyType_mF17237DE1F943422F7DBEB3435F43FD29CFB2A46 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* ___0_plyStreamReader, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_0 = ___0_plyStreamReader;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2(L_0, (bool)1, (bool)0, NULL);
		V_1 = L_1;
		int64_t L_2 = V_1;
		V_3 = L_2;
		int64_t L_3 = V_3;
		V_2 = L_3;
		int64_t L_4 = V_2;
		if ((((int64_t)L_4) > ((int64_t)((int64_t)6774539739450185915LL))))
		{
			goto IL_00d5;
		}
	}
	{
		int64_t L_5 = V_2;
		if ((((int64_t)L_5) > ((int64_t)((int64_t)-1367968407807378442LL))))
		{
			goto IL_007f;
		}
	}
	{
		int64_t L_6 = V_2;
		if ((((int64_t)L_6) > ((int64_t)((int64_t)-5513532492926073195LL))))
		{
			goto IL_005a;
		}
	}
	{
		int64_t L_7 = V_2;
		if ((((int64_t)L_7) == ((int64_t)((int64_t)-5513532492926073290LL))))
		{
			goto IL_0198;
		}
	}
	{
		goto IL_0046;
	}

IL_0046:
	{
		int64_t L_8 = V_2;
		if ((((int64_t)L_8) == ((int64_t)((int64_t)-5513532492926073195LL))))
		{
			goto IL_019c;
		}
	}
	{
		goto IL_01a4;
	}

IL_005a:
	{
		int64_t L_9 = V_2;
		if ((((int64_t)L_9) == ((int64_t)((int64_t)-3351804022671191574LL))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_006b;
	}

IL_006b:
	{
		int64_t L_10 = V_2;
		if ((((int64_t)L_10) == ((int64_t)((int64_t)-1367968407807378442LL))))
		{
			goto IL_019c;
		}
	}
	{
		goto IL_01a4;
	}

IL_007f:
	{
		int64_t L_11 = V_2;
		if ((((int64_t)L_11) > ((int64_t)((int64_t)-1367968407326417058LL))))
		{
			goto IL_00b0;
		}
	}
	{
		int64_t L_12 = V_2;
		if ((((int64_t)L_12) == ((int64_t)((int64_t)-1367968407326417116LL))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_009c;
	}

IL_009c:
	{
		int64_t L_13 = V_2;
		if ((((int64_t)L_13) == ((int64_t)((int64_t)-1367968407326417058LL))))
		{
			goto IL_0194;
		}
	}
	{
		goto IL_01a4;
	}

IL_00b0:
	{
		int64_t L_14 = V_2;
		if ((((int64_t)L_14) == ((int64_t)((int64_t)-1367968407317363380LL))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_00c1;
	}

IL_00c1:
	{
		int64_t L_15 = V_2;
		if ((((int64_t)L_15) == ((int64_t)((int64_t)6774539739450185915LL))))
		{
			goto IL_0180;
		}
	}
	{
		goto IL_01a4;
	}

IL_00d5:
	{
		int64_t L_16 = V_2;
		if ((((int64_t)L_16) > ((int64_t)((int64_t)7096547112153598359LL))))
		{
			goto IL_012e;
		}
	}
	{
		int64_t L_17 = V_2;
		if ((((int64_t)L_17) > ((int64_t)((int64_t)6774539739450455555LL))))
		{
			goto IL_0112;
		}
	}
	{
		int64_t L_18 = V_2;
		if ((((int64_t)L_18) == ((int64_t)((int64_t)6774539739450370958LL))))
		{
			goto IL_0180;
		}
	}
	{
		goto IL_00fe;
	}

IL_00fe:
	{
		int64_t L_19 = V_2;
		if ((((int64_t)L_19) == ((int64_t)((int64_t)6774539739450455555LL))))
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01a4;
	}

IL_0112:
	{
		int64_t L_20 = V_2;
		if ((((int64_t)L_20) == ((int64_t)((int64_t)6774539739450723519LL))))
		{
			goto IL_0194;
		}
	}
	{
		goto IL_0120;
	}

IL_0120:
	{
		int64_t L_21 = V_2;
		if ((((int64_t)L_21) == ((int64_t)((int64_t)7096547112153598359LL))))
		{
			goto IL_0198;
		}
	}
	{
		goto IL_01a4;
	}

IL_012e:
	{
		int64_t L_22 = V_2;
		if ((((int64_t)L_22) > ((int64_t)((int64_t)7096547112156431817LL))))
		{
			goto IL_0156;
		}
	}
	{
		int64_t L_23 = V_2;
		if ((((int64_t)L_23) == ((int64_t)((int64_t)7096547112156431759LL))))
		{
			goto IL_0188;
		}
	}
	{
		goto IL_0148;
	}

IL_0148:
	{
		int64_t L_24 = V_2;
		if ((((int64_t)L_24) == ((int64_t)((int64_t)7096547112156431817LL))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01a4;
	}

IL_0156:
	{
		int64_t L_25 = V_2;
		if ((((int64_t)L_25) == ((int64_t)((int64_t)7096547112165485495LL))))
		{
			goto IL_0188;
		}
	}
	{
		goto IL_0164;
	}

IL_0164:
	{
		int64_t L_26 = V_2;
		if ((((int64_t)L_26) == ((int64_t)((int64_t)7096547112167176326LL))))
		{
			goto IL_0184;
		}
	}
	{
		goto IL_0172;
	}

IL_0172:
	{
		int64_t L_27 = V_2;
		if ((((int64_t)L_27) == ((int64_t)((int64_t)7096547112167361369LL))))
		{
			goto IL_0184;
		}
	}
	{
		goto IL_01a4;
	}

IL_0180:
	{
		V_0 = 0;
		goto IL_01a9;
	}

IL_0184:
	{
		V_0 = 1;
		goto IL_01a9;
	}

IL_0188:
	{
		V_0 = 2;
		goto IL_01a9;
	}

IL_018c:
	{
		V_0 = 3;
		goto IL_01a9;
	}

IL_0190:
	{
		V_0 = 4;
		goto IL_01a9;
	}

IL_0194:
	{
		V_0 = 5;
		goto IL_01a9;
	}

IL_0198:
	{
		V_0 = 6;
		goto IL_01a9;
	}

IL_019c:
	{
		V_0 = 7;
		goto IL_01a9;
	}

IL_01a0:
	{
		V_0 = 8;
		goto IL_01a9;
	}

IL_01a4:
	{
		V_0 = ((int32_t)9);
		goto IL_01a9;
	}

IL_01a9:
	{
		int32_t L_28 = V_0;
		V_4 = L_28;
		goto IL_01ae;
	}

IL_01ae:
	{
		int32_t L_29 = V_4;
		return L_29;
	}
}
// System.Collections.IEnumerator TriLibCore.Ply.PlyProcessor::Process_Coroutine(TriLibCore.AssetLoaderContext,TriLibCore.Ply.Reader.PlyReader,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyProcessor_Process_Coroutine_m95FD30337417E682D9FC2B7D4A6ADFB65984EFCB (PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* __this, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___0__assetLoaderContext, PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* ___1_plyReader, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___2_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* L_0 = (U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3*)il2cpp_codegen_object_new(U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CProcess_CoroutineU3Ed__71__ctor_m0F9970A9977027EFCCD920871A37A2F411DAE755(L_0, 0, NULL);
		U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_5), (void*)__this);
		U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* L_2 = L_1;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_3 = ___0__assetLoaderContext;
		NullCheck(L_2);
		L_2->____assetLoaderContext_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____assetLoaderContext_2), (void*)L_3);
		U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* L_4 = L_2;
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_5 = ___1_plyReader;
		NullCheck(L_4);
		L_4->___plyReader_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___plyReader_3), (void*)L_5);
		U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* L_6 = L_4;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = ___2_stream;
		NullCheck(L_6);
		L_6->___stream_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___stream_4), (void*)L_7);
		return L_6;
	}
}
// System.Void TriLibCore.Ply.PlyProcessor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyProcessor__ctor_mEFE18083343802C21877A430538A1304EC1DC5E7 (PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* __this, const RuntimeMethod* method) 
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
// System.Void TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcess_CoroutineU3Ed__71__ctor_m0F9970A9977027EFCCD920871A37A2F411DAE755 (U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcess_CoroutineU3Ed__71_System_IDisposable_Dispose_m8288CE45C05BD7092987383B94D50937C8E207FF (U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CProcess_CoroutineU3Ed__71_MoveNext_mD48EE828FDD2A75A0D315DD5091D9EA822A1E428 (U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m13BA45BD072C072ECDC20ED17980959D50DCDEBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m7E3EF4351105771F2D6EB167BE29E7868CFC84F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m181BAACEB7905BC572C38343BF7DDA866E9415FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4795CFCFA1CA4807CD85E1818CEC2A7EBC2E336C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m270BB8BF6E2728FF1BE69D236B3C1BB5E5D60BFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m66C7C3835140D396B2941C5FF726A8435575E421_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mD47C7DCD10B474F8DB55896C6B5F276ACA9E2BC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m16443C4F8A0449761F7E9532DA13EE62BC66A959_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFB43E311F648679BE046A19C9351234B9C43A1CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m355F0050D35C5CECAB616FAD6BD09BCDF75ED2AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3A6AF59F5158004E0E8F5D30912F0B3D578BAD20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m16B76A6F6611FB82F01BB3EA7B36F6BE9AC3B558_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA527966D30259A4C4C030B11F4DFEE3029C1076F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t77739521790EB7E3F514D44638D90AB775EDE8ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tD4699121F1986A1CF0F28D10E91389DD1C7FDE69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tEF23B8A78E9122DAA952DB1517D31EB7EC90563B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tFC51DD83E1437529AA19214EFADD5EE83B73CD6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGeometryGroup_GetGeometry_TisPlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277_mD3FEA40366BC6279E62F5984369E846ADFC1D016_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t0662D113B996C51F1676FFC848F7B3448D818DB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t4EEE459A249DDE104FA2E88234C593389EE5D291_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListUtils_FixIndex_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA7050D5E386674C2B99B38CF8EE1F3E237BAC447_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListUtils_FixIndex_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m80E31C1F387DAA4115F14B5463CADE1DEF297D2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListUtils_FixIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD45AFFDDC575B7D4965A6B58B98B7D88ED4323EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m096BE2FF8568855341E87C1DE6291916F89A8203_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m37A1197D84857A9512633D2FB5380FCAC7AB381E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7C99F2FA69D684BD5B7E22B8A115DA258EA04CB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m179CF1BDD503F830F79CF1A81033083C1BB19E05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m27475592735C318973899086F95036A18B6D7E39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m71DCE2DD53C6EFD6DF99B2592A347DFD0F9106C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m893153D76F05AFF53207ABCA86290836BCC7B122_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDBC3F8F2846CD821DA096BECD6300438E2409BC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEEA3C6B55707EC6755329113F4C364960AA66CEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m7A2633FD76AC8804D68EEB036B996CAF5FDC7754_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mD927D6AC4BE78DAED8A83775F0D1FEF91A756B4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31A9B06BE46B0E2BB27797EDC5BAE6C2BFA4ABF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D934867D69D7E986A4C224DB49CF270468DE64D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral711AA001951412D09872DB5FA0B90EA6875A17F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A12A09E76D9C6C6FAD55C385BB87538EF591395);
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
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_31;
	memset((&V_31), 0, sizeof(V_31));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_32;
	memset((&V_32), 0, sizeof(V_32));
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_33;
	memset((&V_33), 0, sizeof(V_33));
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	bool V_43 = false;
	bool V_44 = false;
	PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* V_45 = NULL;
	bool V_46 = false;
	bool V_47 = false;
	int32_t G_B57_0 = 0;
	int32_t G_B85_0 = 0;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B90_0 = NULL;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B89_0 = NULL;
	float G_B91_0 = 0.0f;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B91_1 = NULL;
	int32_t G_B99_0 = 0;
	int32_t G_B108_0 = 0;
	int32_t G_B114_0 = 0;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* G_B119_0 = NULL;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B119_1 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* G_B117_0 = NULL;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B117_1 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* G_B118_0 = NULL;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B118_1 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* G_B122_0 = NULL;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B122_1 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* G_B120_0 = NULL;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B120_1 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* G_B121_0 = NULL;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B121_1 = NULL;
	int32_t G_B125_0 = 0;
	int32_t G_B132_0 = 0;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B135_0 = NULL;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B134_0 = NULL;
	float G_B136_0 = 0.0f;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B136_1 = NULL;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B138_0 = NULL;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B137_0 = NULL;
	float G_B139_0 = 0.0f;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B139_1 = NULL;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B141_0 = NULL;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B140_0 = NULL;
	float G_B142_0 = 0.0f;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B142_1 = NULL;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B144_0 = NULL;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B143_0 = NULL;
	float G_B145_0 = 0.0f;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B145_1 = NULL;
	int32_t G_B163_0 = 0;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B170_0 = NULL;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B169_0 = NULL;
	int32_t G_B171_0 = 0;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B171_1 = NULL;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B173_0 = NULL;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B172_0 = NULL;
	PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* G_B174_0 = NULL;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B174_1 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* G_B176_0 = NULL;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B176_1 = NULL;
	PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* G_B175_0 = NULL;
	U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* G_B175_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002b;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0032;
			}
			case 3:
			{
				goto IL_0037;
			}
			case 4:
			{
				goto IL_003c;
			}
			case 5:
			{
				goto IL_0041;
			}
			case 6:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_004b;
	}

IL_002b:
	{
		goto IL_004d;
	}

IL_002d:
	{
		goto IL_052b;
	}

IL_0032:
	{
		goto IL_080c;
	}

IL_0037:
	{
		goto IL_0b76;
	}

IL_003c:
	{
		goto IL_1105;
	}

IL_0041:
	{
		goto IL_139c;
	}

IL_0046:
	{
		goto IL_1aa3;
	}

IL_004b:
	{
		return (bool)0;
	}

IL_004d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_2 = __this->___U3CU3E4__this_5;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33(L_3, 3, List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->____allVertices_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____allVertices_3), (void*)L_3);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_4 = __this->___U3CU3E4__this_5;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_5 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33(L_5, 3, List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->____allNormals_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____allNormals_4), (void*)L_5);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_6 = __this->___U3CU3E4__this_5;
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_7 = (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF*)il2cpp_codegen_object_new(List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_mDBC3F8F2846CD821DA096BECD6300438E2409BC3(L_7, 3, List_1__ctor_mDBC3F8F2846CD821DA096BECD6300438E2409BC3_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->____allColors_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____allColors_5), (void*)L_7);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_8 = __this->___U3CU3E4__this_5;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_9 = (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)il2cpp_codegen_object_new(List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		List_1__ctor_m27475592735C318973899086F95036A18B6D7E39(L_9, 3, List_1__ctor_m27475592735C318973899086F95036A18B6D7E39_RuntimeMethod_var);
		NullCheck(L_8);
		L_8->____allUVs_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____allUVs_6), (void*)L_9);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_10 = __this->___U3CU3E4__this_5;
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_11 = __this->___plyReader_3;
		NullCheck(L_10);
		L_10->____reader_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____reader_2), (void*)L_11);
		Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC* L_12 = (Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC*)il2cpp_codegen_object_new(Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Dictionary_2__ctor_m4795CFCFA1CA4807CD85E1818CEC2A7EBC2E336C(L_12, Dictionary_2__ctor_m4795CFCFA1CA4807CD85E1818CEC2A7EBC2E336C_RuntimeMethod_var);
		__this->___U3CelementsU3E5__1_6 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CelementsU3E5__1_6), (void*)L_12);
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_13 = (List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5*)il2cpp_codegen_object_new(List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		List_1__ctor_mEEA3C6B55707EC6755329113F4C364960AA66CEF(L_13, List_1__ctor_mEEA3C6B55707EC6755329113F4C364960AA66CEF_RuntimeMethod_var);
		__this->___U3ClistsU3E5__2_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClistsU3E5__2_7), (void*)L_13);
		__this->___U3CactiveElementU3E5__3_8 = (PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CactiveElementU3E5__3_8), (void*)(PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8*)NULL);
		__this->___U3CheaderOpenU3E5__4_9 = (bool)0;
		__this->___U3CheaderClosedU3E5__5_10 = (bool)0;
		__this->___U3CtextureFileOpenU3E5__6_11 = (bool)0;
		__this->___U3CtextureFileU3E5__7_12 = (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextureFileU3E5__7_12), (void*)(PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C*)NULL);
		List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31* L_14 = (List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31*)il2cpp_codegen_object_new(List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		List_1__ctor_m71DCE2DD53C6EFD6DF99B2592A347DFD0F9106C3(L_14, List_1__ctor_m71DCE2DD53C6EFD6DF99B2592A347DFD0F9106C3_RuntimeMethod_var);
		__this->___U3CallTexturesU3E5__8_13 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CallTexturesU3E5__8_13), (void*)L_14);
		__this->___U3ClittleEndianU3E5__9_14 = (bool)0;
		__this->___U3CbigEndianU3E5__10_15 = (bool)0;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_15 = __this->___U3CU3E4__this_5;
		NullCheck(L_15);
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_16 = L_15->____reader_2;
		NullCheck(L_16);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_17;
		L_17 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_16, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_18 = __this->___stream_4;
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_19 = (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2*)il2cpp_codegen_object_new(PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		PlyStreamReader__ctor_m7808EFBEB09E7E31FB8EC19A0B4CBFFD8DB57DB1(L_19, L_17, L_18, NULL);
		__this->___U3CplyStreamReaderU3E5__11_16 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplyStreamReaderU3E5__11_16), (void*)L_19);
		__this->___U3ClastPercU3E5__12_17 = (0.0f);
		goto IL_055e;
	}

IL_012d:
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_20 = __this->___U3CplyStreamReaderU3E5__11_16;
		NullCheck(L_20);
		int64_t L_21;
		L_21 = PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2(L_20, (bool)0, (bool)0, NULL);
		__this->___U3CcommandU3E5__18_23 = L_21;
		int64_t L_22 = __this->___U3CcommandU3E5__18_23;
		V_1 = L_22;
		int64_t L_23 = V_1;
		__this->___U3CU3Es__20_25 = L_23;
		int64_t L_24 = __this->___U3CU3Es__20_25;
		V_2 = L_24;
		int64_t L_25 = V_2;
		if ((((int64_t)L_25) > ((int64_t)((int64_t)-4898810336857675590LL))))
		{
			goto IL_0198;
		}
	}
	{
		int64_t L_26 = V_2;
		if ((((int64_t)L_26) == ((int64_t)((int64_t)-5513532495504198950LL))))
		{
			goto IL_0400;
		}
	}
	{
		goto IL_0173;
	}

IL_0173:
	{
		int64_t L_27 = V_2;
		if ((((int64_t)L_27) == ((int64_t)((int64_t)-5513532493822467209LL))))
		{
			goto IL_025b;
		}
	}
	{
		goto IL_0184;
	}

IL_0184:
	{
		int64_t L_28 = V_2;
		if ((((int64_t)L_28) == ((int64_t)((int64_t)-4898810336857675590LL))))
		{
			goto IL_02b4;
		}
	}
	{
		goto IL_049b;
	}

IL_0198:
	{
		int64_t L_29 = V_2;
		if ((((int64_t)L_29) == ((int64_t)((int64_t)-3837289489351516138LL))))
		{
			goto IL_01d2;
		}
	}
	{
		goto IL_01a6;
	}

IL_01a6:
	{
		int64_t L_30 = V_2;
		if ((((int64_t)L_30) == ((int64_t)((int64_t)-3351804022671184904LL))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_01b4;
	}

IL_01b4:
	{
		int64_t L_31 = V_2;
		if ((((int64_t)L_31) == ((int64_t)((int64_t)-1367968407750199268LL))))
		{
			goto IL_0206;
		}
	}
	{
		goto IL_049b;
	}

IL_01c5:
	{
		__this->___U3CheaderOpenU3E5__4_9 = (bool)1;
		goto IL_04c5;
	}

IL_01d2:
	{
		bool L_32 = __this->___U3CheaderOpenU3E5__4_9;
		V_3 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_3;
		if (!L_33)
		{
			goto IL_01ec;
		}
	}
	{
		Exception_t* L_34 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_34);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB44FE4F8F197AF89FF50ABAD9C3E395B5E887251)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CProcess_CoroutineU3Ed__71_MoveNext_mD48EE828FDD2A75A0D315DD5091D9EA822A1E428_RuntimeMethod_var)));
	}

IL_01ec:
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_35 = __this->___U3CplyStreamReaderU3E5__11_16;
		NullCheck(L_35);
		int64_t L_36;
		L_36 = PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2(L_35, (bool)0, (bool)0, NULL);
		__this->___U3CheaderClosedU3E5__5_10 = (bool)1;
		goto IL_04c5;
	}

IL_0206:
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_37 = __this->___U3CplyStreamReaderU3E5__11_16;
		NullCheck(L_37);
		int64_t L_38;
		L_38 = PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2(L_37, (bool)1, (bool)0, NULL);
		__this->___U3CformatU3E5__21_26 = L_38;
		int64_t L_39 = __this->___U3CformatU3E5__21_26;
		__this->___U3ClittleEndianU3E5__9_14 = (bool)((((int64_t)L_39) == ((int64_t)((int64_t)6570124500183046315LL)))? 1 : 0);
		int64_t L_40 = __this->___U3CformatU3E5__21_26;
		__this->___U3CbigEndianU3E5__10_15 = (bool)((((int64_t)L_40) == ((int64_t)((int64_t)2560988747252765043LL)))? 1 : 0);
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_41 = __this->___U3CplyStreamReaderU3E5__11_16;
		NullCheck(L_41);
		int64_t L_42;
		L_42 = PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2(L_41, (bool)1, (bool)0, NULL);
		goto IL_04c5;
	}

IL_025b:
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_43 = __this->___U3CplyStreamReaderU3E5__11_16;
		NullCheck(L_43);
		int64_t L_44;
		L_44 = PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2(L_43, (bool)1, (bool)0, NULL);
		__this->___U3CelementNameU3E5__22_27 = L_44;
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_45 = __this->___U3CplyStreamReaderU3E5__11_16;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = PlyStreamReader_ToInt32NoValue_m3D62B7AC2B68E0C65837ED4B738D26A02C897086(L_45, NULL);
		__this->___U3CelementCountU3E5__23_28 = L_46;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_47 = (PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8*)il2cpp_codegen_object_new(PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		PlyElement__ctor_mCA04905EABE9EB079C06C05A9EBB680CF4A4DBE3(L_47, NULL);
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_48 = L_47;
		int32_t L_49 = __this->___U3CelementCountU3E5__23_28;
		NullCheck(L_48);
		L_48->___Count_1 = L_49;
		__this->___U3CactiveElementU3E5__3_8 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CactiveElementU3E5__3_8), (void*)L_48);
		Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC* L_50 = __this->___U3CelementsU3E5__1_6;
		int64_t L_51 = __this->___U3CelementNameU3E5__22_27;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_52 = __this->___U3CactiveElementU3E5__3_8;
		NullCheck(L_50);
		Dictionary_2_Add_m7E3EF4351105771F2D6EB167BE29E7868CFC84F0(L_50, L_51, L_52, Dictionary_2_Add_m7E3EF4351105771F2D6EB167BE29E7868CFC84F0_RuntimeMethod_var);
		goto IL_04c5;
	}

IL_02b4:
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_53 = __this->___U3CactiveElementU3E5__3_8;
		V_4 = (bool)((((RuntimeObject*)(PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8*)L_53) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_54 = V_4;
		if (!L_54)
		{
			goto IL_02d0;
		}
	}
	{
		Exception_t* L_55 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_55);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_55, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E7978A9177533BBDC5A8F6FE599F9D9A09593AF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_55, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CProcess_CoroutineU3Ed__71_MoveNext_mD48EE828FDD2A75A0D315DD5091D9EA822A1E428_RuntimeMethod_var)));
	}

IL_02d0:
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_56 = __this->___U3CplyStreamReaderU3E5__11_16;
		int32_t L_57;
		L_57 = PlyProcessor_GetPropertyType_mF17237DE1F943422F7DBEB3435F43FD29CFB2A46(L_56, NULL);
		__this->___U3CpropertyTypeU3E5__24_29 = L_57;
		int32_t L_58 = __this->___U3CpropertyTypeU3E5__24_29;
		V_5 = (bool)((((int32_t)L_58) == ((int32_t)8))? 1 : 0);
		bool L_59 = V_5;
		if (!L_59)
		{
			goto IL_0395;
		}
	}
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_60 = __this->___U3CplyStreamReaderU3E5__11_16;
		int32_t L_61;
		L_61 = PlyProcessor_GetPropertyType_mF17237DE1F943422F7DBEB3435F43FD29CFB2A46(L_60, NULL);
		__this->___U3CcounterPropertyTypeU3E5__25_30 = L_61;
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_62 = __this->___U3CplyStreamReaderU3E5__11_16;
		int32_t L_63;
		L_63 = PlyProcessor_GetPropertyType_mF17237DE1F943422F7DBEB3435F43FD29CFB2A46(L_62, NULL);
		__this->___U3CitemPropertyTypeU3E5__26_31 = L_63;
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_64 = __this->___U3CplyStreamReaderU3E5__11_16;
		NullCheck(L_64);
		int64_t L_65;
		L_65 = PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2(L_64, (bool)1, (bool)0, NULL);
		__this->___U3CpropertyNameU3E5__27_32 = L_65;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_66 = (PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E*)il2cpp_codegen_object_new(PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E_il2cpp_TypeInfo_var);
		NullCheck(L_66);
		PlyListProperty__ctor_m913A103F9505DB2EC35D68434C7B1676D0F26196(L_66, NULL);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_67 = L_66;
		int32_t L_68 = __this->___U3CpropertyTypeU3E5__24_29;
		NullCheck(L_67);
		((PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)L_67)->___Type_0 = L_68;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_69 = L_67;
		int32_t L_70 = __this->___U3CcounterPropertyTypeU3E5__25_30;
		NullCheck(L_69);
		L_69->___CounterType_2 = L_70;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_71 = L_69;
		int32_t L_72 = __this->___U3CitemPropertyTypeU3E5__26_31;
		NullCheck(L_71);
		L_71->___ItemType_3 = L_72;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_73 = L_71;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_74 = __this->___U3CactiveElementU3E5__3_8;
		NullCheck(L_74);
		Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* L_75 = L_74->___Properties_0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = Dictionary_2_get_Count_m270BB8BF6E2728FF1BE69D236B3C1BB5E5D60BFD(L_75, Dictionary_2_get_Count_m270BB8BF6E2728FF1BE69D236B3C1BB5E5D60BFD_RuntimeMethod_var);
		NullCheck(L_73);
		((PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)L_73)->___Offset_1 = L_76;
		__this->___U3CpropertyU3E5__28_33 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpropertyU3E5__28_33), (void*)L_73);
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_77 = __this->___U3CactiveElementU3E5__3_8;
		NullCheck(L_77);
		Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* L_78 = L_77->___Properties_0;
		int64_t L_79 = __this->___U3CpropertyNameU3E5__27_32;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_80 = __this->___U3CpropertyU3E5__28_33;
		NullCheck(L_78);
		Dictionary_2_Add_m13BA45BD072C072ECDC20ED17980959D50DCDEBE(L_78, L_79, L_80, Dictionary_2_Add_m13BA45BD072C072ECDC20ED17980959D50DCDEBE_RuntimeMethod_var);
		__this->___U3CpropertyU3E5__28_33 = (PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpropertyU3E5__28_33), (void*)(PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E*)NULL);
		goto IL_03fb;
	}

IL_0395:
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_81 = __this->___U3CplyStreamReaderU3E5__11_16;
		NullCheck(L_81);
		int64_t L_82;
		L_82 = PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2(L_81, (bool)1, (bool)0, NULL);
		__this->___U3CpropertyNameU3E5__29_34 = L_82;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_83 = (PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)il2cpp_codegen_object_new(PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362_il2cpp_TypeInfo_var);
		NullCheck(L_83);
		PlyProperty__ctor_mB9404ABEA64DE21D9C16B8FCF8FA95FEA5C8221F(L_83, NULL);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_84 = L_83;
		int32_t L_85 = __this->___U3CpropertyTypeU3E5__24_29;
		NullCheck(L_84);
		L_84->___Type_0 = L_85;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_86 = L_84;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_87 = __this->___U3CactiveElementU3E5__3_8;
		NullCheck(L_87);
		Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* L_88 = L_87->___Properties_0;
		NullCheck(L_88);
		int32_t L_89;
		L_89 = Dictionary_2_get_Count_m270BB8BF6E2728FF1BE69D236B3C1BB5E5D60BFD(L_88, Dictionary_2_get_Count_m270BB8BF6E2728FF1BE69D236B3C1BB5E5D60BFD_RuntimeMethod_var);
		NullCheck(L_86);
		L_86->___Offset_1 = L_89;
		__this->___U3CpropertyU3E5__30_35 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpropertyU3E5__30_35), (void*)L_86);
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_90 = __this->___U3CactiveElementU3E5__3_8;
		NullCheck(L_90);
		Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* L_91 = L_90->___Properties_0;
		int64_t L_92 = __this->___U3CpropertyNameU3E5__29_34;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_93 = __this->___U3CpropertyU3E5__30_35;
		NullCheck(L_91);
		Dictionary_2_Add_m13BA45BD072C072ECDC20ED17980959D50DCDEBE(L_91, L_92, L_93, Dictionary_2_Add_m13BA45BD072C072ECDC20ED17980959D50DCDEBE_RuntimeMethod_var);
		__this->___U3CpropertyU3E5__30_35 = (PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpropertyU3E5__30_35), (void*)(PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL);
	}

IL_03fb:
	{
		goto IL_04c5;
	}

IL_0400:
	{
		goto IL_0486;
	}

IL_0406:
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_94 = __this->___U3CplyStreamReaderU3E5__11_16;
		NullCheck(L_94);
		int64_t L_95;
		L_95 = PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2(L_94, (bool)0, (bool)0, NULL);
		__this->___U3CcommandU3E5__18_23 = L_95;
		bool L_96 = __this->___U3CtextureFileOpenU3E5__6_11;
		V_6 = L_96;
		bool L_97 = V_6;
		if (!L_97)
		{
			goto IL_0465;
		}
	}
	{
		PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* L_98 = (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C*)il2cpp_codegen_object_new(PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C_il2cpp_TypeInfo_var);
		NullCheck(L_98);
		PlyTexture__ctor_m038AAFCCC1A0BFA24B9DB741380AA1D0CDE29AFD(L_98, NULL);
		__this->___U3CtextureFileU3E5__7_12 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextureFileU3E5__7_12), (void*)L_98);
		PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* L_99 = __this->___U3CtextureFileU3E5__7_12;
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_100 = __this->___U3CplyStreamReaderU3E5__11_16;
		NullCheck(L_100);
		String_t* L_101;
		L_101 = PlyStreamReader_GetTokenAsString_m7E04224D04CDC8D8F4791995529AB17E0CEEDCAA(L_100, NULL);
		NullCheck(L_99);
		PlyTexture_set_Filename_m7FA26BB14F1E9F04652E891D67858519F9040BD8_inline(L_99, L_101, NULL);
		__this->___U3CtextureFileOpenU3E5__6_11 = (bool)0;
		List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31* L_102 = __this->___U3CallTexturesU3E5__8_13;
		PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* L_103 = __this->___U3CtextureFileU3E5__7_12;
		NullCheck(L_102);
		List_1_Add_m096BE2FF8568855341E87C1DE6291916F89A8203_inline(L_102, L_103, List_1_Add_m096BE2FF8568855341E87C1DE6291916F89A8203_RuntimeMethod_var);
		goto IL_0485;
	}

IL_0465:
	{
		int64_t L_104 = __this->___U3CcommandU3E5__18_23;
		V_7 = (bool)((((int64_t)L_104) == ((int64_t)((int64_t)-8289663717619634158LL)))? 1 : 0);
		bool L_105 = V_7;
		if (!L_105)
		{
			goto IL_0485;
		}
	}
	{
		__this->___U3CtextureFileOpenU3E5__6_11 = (bool)1;
	}

IL_0485:
	{
	}

IL_0486:
	{
		int64_t L_106 = __this->___U3CcommandU3E5__18_23;
		V_8 = (bool)((!(((uint64_t)L_106) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_107 = V_8;
		if (L_107)
		{
			goto IL_0406;
		}
	}
	{
		goto IL_04c5;
	}

IL_049b:
	{
		goto IL_04b3;
	}

IL_049e:
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_108 = __this->___U3CplyStreamReaderU3E5__11_16;
		NullCheck(L_108);
		int64_t L_109;
		L_109 = PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2(L_108, (bool)0, (bool)0, NULL);
		__this->___U3CcommandU3E5__18_23 = L_109;
	}

IL_04b3:
	{
		int64_t L_110 = __this->___U3CcommandU3E5__18_23;
		V_9 = (bool)((!(((uint64_t)L_110) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_111 = V_9;
		if (L_111)
		{
			goto IL_049e;
		}
	}
	{
		goto IL_04c5;
	}

IL_04c5:
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_112 = __this->___U3CplyStreamReaderU3E5__11_16;
		NullCheck(L_112);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_113;
		L_113 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(15 /* System.IO.Stream System.IO.StreamReader::get_BaseStream() */, L_112);
		NullCheck(L_113);
		int64_t L_114;
		L_114 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_113);
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_115 = __this->___U3CplyStreamReaderU3E5__11_16;
		NullCheck(L_115);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_116;
		L_116 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(15 /* System.IO.Stream System.IO.StreamReader::get_BaseStream() */, L_115);
		NullCheck(L_116);
		int64_t L_117;
		L_117 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_116);
		__this->___U3CpercU3E5__19_24 = ((float)(((float)L_114)/((float)L_117)));
		float L_118 = __this->___U3CpercU3E5__19_24;
		float L_119 = __this->___U3ClastPercU3E5__12_17;
		V_10 = (bool)((((float)L_118) > ((float)((float)il2cpp_codegen_add(L_119, (0.330000013f)))))? 1 : 0);
		bool L_120 = V_10;
		if (!L_120)
		{
			goto IL_055d;
		}
	}
	{
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_121 = __this->____assetLoaderContext_2;
		NullCheck(L_121);
		bool L_122;
		L_122 = AssetLoaderContext_get_MainThreadStall_m053EBE09FC53155F1737B7291186187FD61CBFAE(L_121, NULL);
		V_11 = L_122;
		bool L_123 = V_11;
		if (!L_123)
		{
			goto IL_0533;
		}
	}
	{
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_052b:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0533:
	{
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_124 = __this->___U3CU3E4__this_5;
		NullCheck(L_124);
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_125 = L_124->____reader_2;
		float L_126 = __this->___U3CpercU3E5__19_24;
		NullCheck(L_125);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_125, L_126, 0, (0.0f), NULL);
		float L_127 = __this->___U3CpercU3E5__19_24;
		__this->___U3ClastPercU3E5__12_17 = L_127;
	}

IL_055d:
	{
	}

IL_055e:
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_128 = __this->___U3CplyStreamReaderU3E5__11_16;
		NullCheck(L_128);
		bool L_129;
		L_129 = StreamReader_get_EndOfStream_mAE054431BF21158178EAA2A6872F14A9ED6A3C3E(L_128, NULL);
		if (L_129)
		{
			goto IL_0576;
		}
	}
	{
		bool L_130 = __this->___U3CheaderClosedU3E5__5_10;
		G_B57_0 = ((((int32_t)L_130) == ((int32_t)0))? 1 : 0);
		goto IL_0577;
	}

IL_0576:
	{
		G_B57_0 = 0;
	}

IL_0577:
	{
		V_12 = (bool)G_B57_0;
		bool L_131 = V_12;
		if (L_131)
		{
			goto IL_012d;
		}
	}
	{
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_132 = __this->___plyReader_3;
		NullCheck(L_132);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_132, (1.0f), 0, (0.0f), NULL);
		bool L_133 = __this->___U3ClittleEndianU3E5__9_14;
		V_13 = L_133;
		bool L_134 = V_13;
		if (!L_134)
		{
			goto IL_05d9;
		}
	}
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_135 = __this->___U3CplyStreamReaderU3E5__11_16;
		NullCheck(L_135);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_136;
		L_136 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(15 /* System.IO.Stream System.IO.StreamReader::get_BaseStream() */, L_135);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_137 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		NullCheck(L_137);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_137, L_136, NULL);
		__this->___U3ClittleEndianBinaryReaderU3E5__13_18 = L_137;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClittleEndianBinaryReaderU3E5__13_18), (void*)L_137);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_138 = __this->___U3ClittleEndianBinaryReaderU3E5__13_18;
		NullCheck(L_138);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_139;
		L_139 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_138);
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_140 = __this->___U3CplyStreamReaderU3E5__11_16;
		NullCheck(L_140);
		int64_t L_141;
		L_141 = PlyStreamReader_get_Position_m9211CA1BF5C622AACC7B1C9688FE42EB58006B5B_inline(L_140, NULL);
		NullCheck(L_139);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_139, L_141);
		goto IL_05e2;
	}

IL_05d9:
	{
		__this->___U3ClittleEndianBinaryReaderU3E5__13_18 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClittleEndianBinaryReaderU3E5__13_18), (void*)(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)NULL);
	}

IL_05e2:
	{
		bool L_142 = __this->___U3CbigEndianU3E5__10_15;
		V_14 = L_142;
		bool L_143 = V_14;
		if (!L_143)
		{
			goto IL_0624;
		}
	}
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_144 = __this->___U3CplyStreamReaderU3E5__11_16;
		NullCheck(L_144);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_145;
		L_145 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(15 /* System.IO.Stream System.IO.StreamReader::get_BaseStream() */, L_144);
		BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* L_146 = (BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721*)il2cpp_codegen_object_new(BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721_il2cpp_TypeInfo_var);
		NullCheck(L_146);
		BigEndianBinaryReader__ctor_m9E745E5732B70DC31E50C8C6B8DE7DB5956D0EBA(L_146, L_145, NULL);
		__this->___U3CbigEndianBinaryReaderU3E5__14_19 = L_146;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbigEndianBinaryReaderU3E5__14_19), (void*)L_146);
		BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* L_147 = __this->___U3CbigEndianBinaryReaderU3E5__14_19;
		NullCheck(L_147);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_148;
		L_148 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_147);
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_149 = __this->___U3CplyStreamReaderU3E5__11_16;
		NullCheck(L_149);
		int64_t L_150;
		L_150 = PlyStreamReader_get_Position_m9211CA1BF5C622AACC7B1C9688FE42EB58006B5B_inline(L_149, NULL);
		NullCheck(L_148);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_148, L_150);
		goto IL_062d;
	}

IL_0624:
	{
		__this->___U3CbigEndianBinaryReaderU3E5__14_19 = (BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbigEndianBinaryReaderU3E5__14_19), (void*)(BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721*)NULL);
	}

IL_062d:
	{
		Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC* L_151 = __this->___U3CelementsU3E5__1_6;
		NullCheck(L_151);
		ValueCollection_t16B888ACAE62FB5B6EB90AB83B113259C434EC38* L_152;
		L_152 = Dictionary_2_get_Values_mD47C7DCD10B474F8DB55896C6B5F276ACA9E2BC1(L_151, Dictionary_2_get_Values_mD47C7DCD10B474F8DB55896C6B5F276ACA9E2BC1_RuntimeMethod_var);
		NullCheck(L_152);
		Enumerator_t69077E1CF02F307242D159C9DA30E7B9A2D5C901 L_153;
		L_153 = ValueCollection_GetEnumerator_mD927D6AC4BE78DAED8A83775F0D1FEF91A756B4D(L_152, ValueCollection_GetEnumerator_mD927D6AC4BE78DAED8A83775F0D1FEF91A756B4D_RuntimeMethod_var);
		__this->___U3CU3Es__31_36 = L_153;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__31_36))->____dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__31_36))->____currentValue_3), (void*)NULL);
		#endif
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_07cb:
			{// begin finally (depth: 1)
				Enumerator_t69077E1CF02F307242D159C9DA30E7B9A2D5C901* L_154 = (&__this->___U3CU3Es__31_36);
				Enumerator_Dispose_m16443C4F8A0449761F7E9532DA13EE62BC66A959(L_154, Enumerator_Dispose_m16443C4F8A0449761F7E9532DA13EE62BC66A959_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_07b9_1;
			}

IL_0649_1:
			{
				Enumerator_t69077E1CF02F307242D159C9DA30E7B9A2D5C901* L_155 = (&__this->___U3CU3Es__31_36);
				PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_156;
				L_156 = Enumerator_get_Current_m16B76A6F6611FB82F01BB3EA7B36F6BE9AC3B558_inline(L_155, Enumerator_get_Current_m16B76A6F6611FB82F01BB3EA7B36F6BE9AC3B558_RuntimeMethod_var);
				__this->___U3CelementU3E5__32_37 = L_156;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CelementU3E5__32_37), (void*)L_156);
				PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_157 = __this->___U3CelementU3E5__32_37;
				NullCheck(L_157);
				int32_t L_158 = L_157->___Count_1;
				List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_159 = (List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5*)il2cpp_codegen_object_new(List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5_il2cpp_TypeInfo_var);
				NullCheck(L_159);
				List_1__ctor_m179CF1BDD503F830F79CF1A81033083C1BB19E05(L_159, L_158, List_1__ctor_m179CF1BDD503F830F79CF1A81033083C1BB19E05_RuntimeMethod_var);
				__this->___U3CelementDataU3E5__33_38 = L_159;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CelementDataU3E5__33_38), (void*)L_159);
				__this->___U3CiU3E5__34_39 = 0;
				goto IL_077d_1;
			}

IL_067d_1:
			{
				PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_160 = __this->___U3CelementU3E5__32_37;
				NullCheck(L_160);
				Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* L_161 = L_160->___Properties_0;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = Dictionary_2_get_Count_m270BB8BF6E2728FF1BE69D236B3C1BB5E5D60BFD(L_161, Dictionary_2_get_Count_m270BB8BF6E2728FF1BE69D236B3C1BB5E5D60BFD_RuntimeMethod_var);
				List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_163 = (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB*)il2cpp_codegen_object_new(List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB_il2cpp_TypeInfo_var);
				NullCheck(L_163);
				List_1__ctor_m893153D76F05AFF53207ABCA86290836BCC7B122(L_163, L_162, List_1__ctor_m893153D76F05AFF53207ABCA86290836BCC7B122_RuntimeMethod_var);
				__this->___U3CsubElementDataU3E5__35_40 = L_163;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubElementDataU3E5__35_40), (void*)L_163);
				PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_164 = __this->___U3CelementU3E5__32_37;
				NullCheck(L_164);
				Dictionary_2_t3590525077E0FD6F543FB7039AB1D8A322E78680* L_165 = L_164->___Properties_0;
				NullCheck(L_165);
				ValueCollection_t17A15458500B928C18C734F4964D798B1C114EE9* L_166;
				L_166 = Dictionary_2_get_Values_m66C7C3835140D396B2941C5FF726A8435575E421(L_165, Dictionary_2_get_Values_m66C7C3835140D396B2941C5FF726A8435575E421_RuntimeMethod_var);
				NullCheck(L_166);
				Enumerator_t7D873153703A01D83B21E276B8C4436FC283A3C8 L_167;
				L_167 = ValueCollection_GetEnumerator_m7A2633FD76AC8804D68EEB036B996CAF5FDC7754(L_166, ValueCollection_GetEnumerator_m7A2633FD76AC8804D68EEB036B996CAF5FDC7754_RuntimeMethod_var);
				__this->___U3CU3Es__36_41 = L_167;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__36_41))->____dictionary_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__36_41))->____currentValue_3), (void*)NULL);
				#endif
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0732_1:
					{// begin finally (depth: 2)
						Enumerator_t7D873153703A01D83B21E276B8C4436FC283A3C8* L_168 = (&__this->___U3CU3Es__36_41);
						Enumerator_Dispose_mFB43E311F648679BE046A19C9351234B9C43A1CF(L_168, Enumerator_Dispose_mFB43E311F648679BE046A19C9351234B9C43A1CF_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0723_2;
					}

IL_06b7_2:
					{
						Enumerator_t7D873153703A01D83B21E276B8C4436FC283A3C8* L_169 = (&__this->___U3CU3Es__36_41);
						PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_170;
						L_170 = Enumerator_get_Current_mA527966D30259A4C4C030B11F4DFEE3029C1076F_inline(L_169, Enumerator_get_Current_mA527966D30259A4C4C030B11F4DFEE3029C1076F_RuntimeMethod_var);
						__this->___U3CpropertyU3E5__37_42 = L_170;
						Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpropertyU3E5__37_42), (void*)L_170);
						PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_171 = __this->___U3CpropertyU3E5__37_42;
						PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_172 = __this->___U3CpropertyU3E5__37_42;
						NullCheck(L_172);
						int32_t L_173 = L_172->___Type_0;
						bool L_174 = __this->___U3ClittleEndianU3E5__9_14;
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_175 = __this->___U3ClittleEndianBinaryReaderU3E5__13_18;
						bool L_176 = __this->___U3CbigEndianU3E5__10_15;
						PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_177 = __this->___U3CplyStreamReaderU3E5__11_16;
						BigEndianBinaryReader_t4A46AFC4734E1DFBB57EDC318136A57FDDBD9721* L_178 = __this->___U3CbigEndianBinaryReaderU3E5__14_19;
						List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_179 = __this->___U3ClistsU3E5__2_7;
						PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_180;
						L_180 = PlyProcessor_ReadElementData_m295BBB280885FD705DF14E08D8FE375B03CB984B(L_171, L_173, L_174, L_175, L_176, L_177, L_178, L_179, NULL);
						__this->___U3CvalueU3E5__38_43 = L_180;
						List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_181 = __this->___U3CsubElementDataU3E5__35_40;
						PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_182 = __this->___U3CvalueU3E5__38_43;
						NullCheck(L_181);
						List_1_Add_m37A1197D84857A9512633D2FB5380FCAC7AB381E_inline(L_181, L_182, List_1_Add_m37A1197D84857A9512633D2FB5380FCAC7AB381E_RuntimeMethod_var);
						__this->___U3CpropertyU3E5__37_42 = (PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL;
						Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpropertyU3E5__37_42), (void*)(PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL);
					}

IL_0723_2:
					{
						Enumerator_t7D873153703A01D83B21E276B8C4436FC283A3C8* L_183 = (&__this->___U3CU3Es__36_41);
						bool L_184;
						L_184 = Enumerator_MoveNext_m355F0050D35C5CECAB616FAD6BD09BCDF75ED2AD(L_183, Enumerator_MoveNext_m355F0050D35C5CECAB616FAD6BD09BCDF75ED2AD_RuntimeMethod_var);
						if (L_184)
						{
							goto IL_06b7_2;
						}
					}
					{
						goto IL_0745_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0745_1:
			{
				Enumerator_t7D873153703A01D83B21E276B8C4436FC283A3C8* L_185 = (&__this->___U3CU3Es__36_41);
				il2cpp_codegen_initobj(L_185, sizeof(Enumerator_t7D873153703A01D83B21E276B8C4436FC283A3C8));
				List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_186 = __this->___U3CelementDataU3E5__33_38;
				List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_187 = __this->___U3CsubElementDataU3E5__35_40;
				NullCheck(L_186);
				List_1_Add_m7C99F2FA69D684BD5B7E22B8A115DA258EA04CB2_inline(L_186, L_187, List_1_Add_m7C99F2FA69D684BD5B7E22B8A115DA258EA04CB2_RuntimeMethod_var);
				__this->___U3CsubElementDataU3E5__35_40 = (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubElementDataU3E5__35_40), (void*)(List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB*)NULL);
				int32_t L_188 = __this->___U3CiU3E5__34_39;
				V_15 = L_188;
				int32_t L_189 = V_15;
				__this->___U3CiU3E5__34_39 = ((int32_t)il2cpp_codegen_add(L_189, 1));
			}

IL_077d_1:
			{
				int32_t L_190 = __this->___U3CiU3E5__34_39;
				PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_191 = __this->___U3CelementU3E5__32_37;
				NullCheck(L_191);
				int32_t L_192 = L_191->___Count_1;
				V_16 = (bool)((((int32_t)L_190) < ((int32_t)L_192))? 1 : 0);
				bool L_193 = V_16;
				if (L_193)
				{
					goto IL_067d_1;
				}
			}
			{
				PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_194 = __this->___U3CelementU3E5__32_37;
				List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_195 = __this->___U3CelementDataU3E5__33_38;
				NullCheck(L_194);
				L_194->___Data_2 = L_195;
				Il2CppCodeGenWriteBarrier((void**)(&L_194->___Data_2), (void*)L_195);
				__this->___U3CelementDataU3E5__33_38 = (List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CelementDataU3E5__33_38), (void*)(List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5*)NULL);
				__this->___U3CelementU3E5__32_37 = (PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CelementU3E5__32_37), (void*)(PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8*)NULL);
			}

IL_07b9_1:
			{
				Enumerator_t69077E1CF02F307242D159C9DA30E7B9A2D5C901* L_196 = (&__this->___U3CU3Es__31_36);
				bool L_197;
				L_197 = Enumerator_MoveNext_m3A6AF59F5158004E0E8F5D30912F0B3D578BAD20(L_196, Enumerator_MoveNext_m3A6AF59F5158004E0E8F5D30912F0B3D578BAD20_RuntimeMethod_var);
				if (L_197)
				{
					goto IL_0649_1;
				}
			}
			{
				goto IL_07de;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_07de:
	{
		Enumerator_t69077E1CF02F307242D159C9DA30E7B9A2D5C901* L_198 = (&__this->___U3CU3Es__31_36);
		il2cpp_codegen_initobj(L_198, sizeof(Enumerator_t69077E1CF02F307242D159C9DA30E7B9A2D5C901));
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_199 = __this->____assetLoaderContext_2;
		NullCheck(L_199);
		bool L_200;
		L_200 = AssetLoaderContext_get_MainThreadStall_m053EBE09FC53155F1737B7291186187FD61CBFAE(L_199, NULL);
		V_17 = L_200;
		bool L_201 = V_17;
		if (!L_201)
		{
			goto IL_0814;
		}
	}
	{
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_080c:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0814:
	{
		__this->___U3CallMaterialsU3E5__15_20 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CallMaterialsU3E5__15_20), (void*)(RuntimeObject*)NULL);
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_202 = __this->___plyReader_3;
		NullCheck(L_202);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_203;
		L_203 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_202, NULL);
		NullCheck(L_203);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_204 = L_203->___Options_34;
		NullCheck(L_204);
		bool L_205 = L_204->___LoadPointClouds_93;
		if (L_205)
		{
			goto IL_0849;
		}
	}
	{
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_206 = __this->___plyReader_3;
		NullCheck(L_206);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_207;
		L_207 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_206, NULL);
		NullCheck(L_207);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_208 = L_207->___Options_34;
		NullCheck(L_208);
		bool L_209 = L_208->___ImportMaterials_31;
		G_B85_0 = ((int32_t)(L_209));
		goto IL_084a;
	}

IL_0849:
	{
		G_B85_0 = 0;
	}

IL_084a:
	{
		V_18 = (bool)G_B85_0;
		bool L_210 = V_18;
		if (!L_210)
		{
			goto IL_0b54;
		}
	}
	{
		Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC* L_211 = __this->___U3CelementsU3E5__1_6;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8** L_212 = (&__this->___U3CmaterialElementU3E5__39_44);
		NullCheck(L_211);
		bool L_213;
		L_213 = Dictionary_2_TryGetValue_m181BAACEB7905BC572C38343BF7DDA866E9415FD(L_211, ((int64_t)-4898810434349715444LL), L_212, Dictionary_2_TryGetValue_m181BAACEB7905BC572C38343BF7DDA866E9415FD_RuntimeMethod_var);
		V_19 = L_213;
		bool L_214 = V_19;
		if (!L_214)
		{
			goto IL_0ada;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_215 = __this->___U3CmaterialElementU3E5__39_44;
		NullCheck(L_215);
		int32_t L_216 = L_215->___Count_1;
		IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2* L_217 = (IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2*)(IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2*)SZArrayNew(IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2_il2cpp_TypeInfo_var, (uint32_t)L_216);
		__this->___U3CallMaterialsU3E5__15_20 = (RuntimeObject*)L_217;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CallMaterialsU3E5__15_20), (void*)(RuntimeObject*)L_217);
		__this->___U3CiU3E5__40_45 = 0;
		goto IL_0abd;
	}

IL_089a:
	{
		PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* L_218 = (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6*)il2cpp_codegen_object_new(PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6_il2cpp_TypeInfo_var);
		NullCheck(L_218);
		PlyMaterial__ctor_m9669AF4D43AE12DEEBD8F46D99D869AC68470623(L_218, NULL);
		__this->___U3CmaterialU3E5__41_46 = L_218;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmaterialU3E5__41_46), (void*)L_218);
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_219 = __this->___U3CmaterialElementU3E5__39_44;
		int32_t L_220 = __this->___U3CiU3E5__40_45;
		NullCheck(L_219);
		float L_221;
		L_221 = PlyElement_GetPropertyFloatValue_m9EEC47397083DC6B0C2DB937F43F12288EBF5713(L_219, ((int64_t)-8276459643725187793LL), L_220, NULL);
		__this->___U3Cdiffuse_redU3E5__42_47 = ((float)((255.0f)/L_221));
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_222 = __this->___U3CmaterialElementU3E5__39_44;
		int32_t L_223 = __this->___U3CiU3E5__40_45;
		NullCheck(L_222);
		float L_224;
		L_224 = PlyElement_GetPropertyFloatValue_m9EEC47397083DC6B0C2DB937F43F12288EBF5713(L_222, ((int64_t)-3131021851098489823LL), L_223, NULL);
		__this->___U3Cdiffuse_greenU3E5__43_48 = ((float)((255.0f)/L_224));
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_225 = __this->___U3CmaterialElementU3E5__39_44;
		int32_t L_226 = __this->___U3CiU3E5__40_45;
		NullCheck(L_225);
		float L_227;
		L_227 = PlyElement_GetPropertyFloatValue_m9EEC47397083DC6B0C2DB937F43F12288EBF5713(L_225, ((int64_t)1684168076452431740LL), L_226, NULL);
		__this->___U3Cdiffuse_blueU3E5__44_49 = ((float)((255.0f)/L_227));
		PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* L_228 = __this->___U3CmaterialU3E5__41_46;
		float L_229 = __this->___U3Cdiffuse_redU3E5__42_47;
		float L_230 = __this->___U3Cdiffuse_greenU3E5__43_48;
		float L_231 = __this->___U3Cdiffuse_blueU3E5__44_49;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_232;
		memset((&L_232), 0, sizeof(L_232));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_232), L_229, L_230, L_231, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_233 = L_232;
		RuntimeObject* L_234 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_233);
		NullCheck(L_228);
		PlyMaterial_AddProperty_m4FE8AE6161D498A95286AC015BD2E1B2EC41E3B4(L_228, _stringLiteral31A9B06BE46B0E2BB27797EDC5BAE6C2BFA4ABF0, L_234, (bool)0, NULL);
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_235 = __this->___U3CmaterialElementU3E5__39_44;
		int32_t L_236 = __this->___U3CiU3E5__40_45;
		NullCheck(L_235);
		float L_237;
		L_237 = PlyElement_GetPropertyFloatValue_m9EEC47397083DC6B0C2DB937F43F12288EBF5713(L_235, ((int64_t)2071003623302517242LL), L_236, NULL);
		__this->___U3Cspecular_redU3E5__45_50 = ((float)((255.0f)/L_237));
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_238 = __this->___U3CmaterialElementU3E5__39_44;
		int32_t L_239 = __this->___U3CiU3E5__40_45;
		NullCheck(L_238);
		float L_240;
		L_240 = PlyElement_GetPropertyFloatValue_m9EEC47397083DC6B0C2DB937F43F12288EBF5713(L_238, ((int64_t)-2013877966922272212LL), L_239, NULL);
		__this->___U3Cspecular_greenU3E5__46_51 = ((float)((255.0f)/L_240));
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_241 = __this->___U3CmaterialElementU3E5__39_44;
		int32_t L_242 = __this->___U3CiU3E5__40_45;
		NullCheck(L_241);
		float L_243;
		L_243 = PlyElement_GetPropertyFloatValue_m9EEC47397083DC6B0C2DB937F43F12288EBF5713(L_241, ((int64_t)8860880101248910353LL), L_242, NULL);
		__this->___U3Cspecular_blueU3E5__47_52 = ((float)((255.0f)/L_243));
		PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* L_244 = __this->___U3CmaterialU3E5__41_46;
		float L_245 = __this->___U3Cspecular_redU3E5__45_50;
		float L_246 = __this->___U3Cspecular_greenU3E5__46_51;
		float L_247 = __this->___U3Cspecular_blueU3E5__47_52;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_248;
		memset((&L_248), 0, sizeof(L_248));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_248), L_245, L_246, L_247, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_249 = L_248;
		RuntimeObject* L_250 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_249);
		NullCheck(L_244);
		PlyMaterial_AddProperty_m4FE8AE6161D498A95286AC015BD2E1B2EC41E3B4(L_244, _stringLiteral711AA001951412D09872DB5FA0B90EA6875A17F9, L_250, (bool)0, NULL);
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_251 = __this->___U3CmaterialElementU3E5__39_44;
		NullCheck(L_251);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_252;
		L_252 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_251, ((int64_t)-5513532484836901754LL), NULL);
		__this->___U3CopacityPropertyU3E5__48_53 = L_252;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CopacityPropertyU3E5__48_53), (void*)L_252);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_253 = __this->___U3CopacityPropertyU3E5__48_53;
		G_B89_0 = __this;
		if (!L_253)
		{
			G_B90_0 = __this;
			goto IL_0a22;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_254 = __this->___U3CmaterialElementU3E5__39_44;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_255 = __this->___U3CopacityPropertyU3E5__48_53;
		int32_t L_256 = __this->___U3CiU3E5__40_45;
		NullCheck(L_254);
		float L_257;
		L_257 = PlyElement_GetPropertyFloatValue_m7E87CAEA23D5D33F126AE7A44F4D6B28CD2283DC(L_254, L_255, L_256, NULL);
		G_B91_0 = L_257;
		G_B91_1 = G_B89_0;
		goto IL_0a27;
	}

IL_0a22:
	{
		G_B91_0 = (1.0f);
		G_B91_1 = G_B90_0;
	}

IL_0a27:
	{
		NullCheck(G_B91_1);
		G_B91_1->___U3CopacityU3E5__49_54 = G_B91_0;
		PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* L_258 = __this->___U3CmaterialU3E5__41_46;
		float L_259 = __this->___U3CopacityU3E5__49_54;
		float L_260 = L_259;
		RuntimeObject* L_261 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_260);
		NullCheck(L_258);
		PlyMaterial_AddProperty_m4FE8AE6161D498A95286AC015BD2E1B2EC41E3B4(L_258, _stringLiteral5D934867D69D7E986A4C224DB49CF270468DE64D, L_261, (bool)0, NULL);
		PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* L_262 = __this->___U3CmaterialU3E5__41_46;
		int32_t L_263 = __this->___U3CiU3E5__40_45;
		NullCheck(L_262);
		PlyMaterial_set_Index_mEEC9E37FB853F46E7A19C7A52BE8EACD41464726_inline(L_262, L_263, NULL);
		PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* L_264 = __this->___U3CtextureFileU3E5__7_12;
		V_20 = (bool)((!(((RuntimeObject*)(PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C*)L_264) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_265 = V_20;
		if (!L_265)
		{
			goto IL_0a84;
		}
	}
	{
		PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* L_266 = __this->___U3CmaterialU3E5__41_46;
		PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* L_267 = __this->___U3CtextureFileU3E5__7_12;
		NullCheck(L_266);
		PlyMaterial_AddProperty_m4FE8AE6161D498A95286AC015BD2E1B2EC41E3B4(L_266, _stringLiteral7A12A09E76D9C6C6FAD55C385BB87538EF591395, L_267, (bool)1, NULL);
	}

IL_0a84:
	{
		RuntimeObject* L_268 = __this->___U3CallMaterialsU3E5__15_20;
		int32_t L_269 = __this->___U3CiU3E5__40_45;
		PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* L_270 = __this->___U3CmaterialU3E5__41_46;
		NullCheck(L_268);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial>::set_Item(System.Int32,T) */, IList_1_t0662D113B996C51F1676FFC848F7B3448D818DB7_il2cpp_TypeInfo_var, L_268, L_269, L_270);
		__this->___U3CmaterialU3E5__41_46 = (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmaterialU3E5__41_46), (void*)(PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6*)NULL);
		__this->___U3CopacityPropertyU3E5__48_53 = (PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CopacityPropertyU3E5__48_53), (void*)(PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL);
		int32_t L_271 = __this->___U3CiU3E5__40_45;
		V_15 = L_271;
		int32_t L_272 = V_15;
		__this->___U3CiU3E5__40_45 = ((int32_t)il2cpp_codegen_add(L_272, 1));
	}

IL_0abd:
	{
		int32_t L_273 = __this->___U3CiU3E5__40_45;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_274 = __this->___U3CmaterialElementU3E5__39_44;
		NullCheck(L_274);
		int32_t L_275 = L_274->___Count_1;
		V_21 = (bool)((((int32_t)L_273) < ((int32_t)L_275))? 1 : 0);
		bool L_276 = V_21;
		if (L_276)
		{
			goto IL_089a;
		}
	}
	{
	}

IL_0ada:
	{
		RuntimeObject* L_277 = __this->___U3CallMaterialsU3E5__15_20;
		if (L_277)
		{
			goto IL_0aed;
		}
	}
	{
		PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* L_278 = __this->___U3CtextureFileU3E5__7_12;
		G_B99_0 = ((!(((RuntimeObject*)(PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C*)L_278) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0aee;
	}

IL_0aed:
	{
		G_B99_0 = 0;
	}

IL_0aee:
	{
		V_22 = (bool)G_B99_0;
		bool L_279 = V_22;
		if (!L_279)
		{
			goto IL_0b35;
		}
	}
	{
		PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* L_280 = (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6*)il2cpp_codegen_object_new(PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6_il2cpp_TypeInfo_var);
		NullCheck(L_280);
		PlyMaterial__ctor_m9669AF4D43AE12DEEBD8F46D99D869AC68470623(L_280, NULL);
		__this->___U3CmaterialU3E5__50_55 = L_280;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmaterialU3E5__50_55), (void*)L_280);
		PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* L_281 = __this->___U3CmaterialU3E5__50_55;
		PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* L_282 = __this->___U3CtextureFileU3E5__7_12;
		NullCheck(L_281);
		PlyMaterial_AddProperty_m4FE8AE6161D498A95286AC015BD2E1B2EC41E3B4(L_281, _stringLiteral7A12A09E76D9C6C6FAD55C385BB87538EF591395, L_282, (bool)1, NULL);
		IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2* L_283 = (IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2*)(IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2*)SZArrayNew(IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2_il2cpp_TypeInfo_var, (uint32_t)1);
		IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2* L_284 = L_283;
		PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* L_285 = __this->___U3CmaterialU3E5__50_55;
		NullCheck(L_284);
		ArrayElementTypeCheck (L_284, L_285);
		(L_284)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_285);
		__this->___U3CallMaterialsU3E5__15_20 = (RuntimeObject*)L_284;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CallMaterialsU3E5__15_20), (void*)(RuntimeObject*)L_284);
		__this->___U3CmaterialU3E5__50_55 = (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmaterialU3E5__50_55), (void*)(PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6*)NULL);
	}

IL_0b35:
	{
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_286 = __this->___plyReader_3;
		NullCheck(L_286);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_286, (1.0f), 1, (0.0f), NULL);
		__this->___U3CmaterialElementU3E5__39_44 = (PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmaterialElementU3E5__39_44), (void*)(PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8*)NULL);
	}

IL_0b54:
	{
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_287 = __this->____assetLoaderContext_2;
		NullCheck(L_287);
		bool L_288;
		L_288 = AssetLoaderContext_get_MainThreadStall_m053EBE09FC53155F1737B7291186187FD61CBFAE(L_287, NULL);
		V_23 = L_288;
		bool L_289 = V_23;
		if (!L_289)
		{
			goto IL_0b7e;
		}
	}
	{
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0b76:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0b7e:
	{
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_290 = __this->___plyReader_3;
		NullCheck(L_290);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_291;
		L_291 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_290, NULL);
		NullCheck(L_291);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_292 = L_291->___Options_34;
		NullCheck(L_292);
		bool L_293 = L_292->___ImportMeshes_10;
		if (!L_293)
		{
			goto IL_0bb1;
		}
	}
	{
		Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC* L_294 = __this->___U3CelementsU3E5__1_6;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8** L_295 = (&__this->___U3CvertexElementU3E5__16_21);
		NullCheck(L_294);
		bool L_296;
		L_296 = Dictionary_2_TryGetValue_m181BAACEB7905BC572C38343BF7DDA866E9415FD(L_294, ((int64_t)-1367968407301361207LL), L_295, Dictionary_2_TryGetValue_m181BAACEB7905BC572C38343BF7DDA866E9415FD_RuntimeMethod_var);
		G_B108_0 = ((int32_t)(L_296));
		goto IL_0bb2;
	}

IL_0bb1:
	{
		G_B108_0 = 0;
	}

IL_0bb2:
	{
		V_24 = (bool)G_B108_0;
		bool L_297 = V_24;
		if (!L_297)
		{
			goto IL_110e;
		}
	}
	{
		__this->___U3CiU3E5__51_56 = 0;
		goto IL_10b0;
	}

IL_0bc8:
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_298 = __this->___U3CvertexElementU3E5__16_21;
		int32_t L_299 = __this->___U3CiU3E5__51_56;
		NullCheck(L_298);
		float L_300;
		L_300 = PlyElement_GetPropertyFloatValue_m9EEC47397083DC6B0C2DB937F43F12288EBF5713(L_298, ((int64_t)34902897112120627LL), L_299, NULL);
		__this->___U3CxU3E5__52_57 = L_300;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_301 = __this->___U3CvertexElementU3E5__16_21;
		int32_t L_302 = __this->___U3CiU3E5__51_56;
		NullCheck(L_301);
		float L_303;
		L_303 = PlyElement_GetPropertyFloatValue_m9EEC47397083DC6B0C2DB937F43F12288EBF5713(L_301, ((int64_t)34902897112120628LL), L_302, NULL);
		__this->___U3CyU3E5__53_58 = L_303;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_304 = __this->___U3CvertexElementU3E5__16_21;
		int32_t L_305 = __this->___U3CiU3E5__51_56;
		NullCheck(L_304);
		float L_306;
		L_306 = PlyElement_GetPropertyFloatValue_m9EEC47397083DC6B0C2DB937F43F12288EBF5713(L_304, ((int64_t)34902897112120629LL), L_305, NULL);
		__this->___U3CzU3E5__54_59 = L_306;
		float L_307 = __this->___U3CxU3E5__52_57;
		float L_308 = __this->___U3CyU3E5__53_58;
		float L_309 = __this->___U3CzU3E5__54_59;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_310;
		memset((&L_310), 0, sizeof(L_310));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_310), ((-L_307)), L_308, L_309, /*hidden argument*/NULL);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_311 = __this->___U3CU3E4__this_5;
		NullCheck(L_311);
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_312 = L_311->____reader_2;
		NullCheck(L_312);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_313;
		L_313 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_312, NULL);
		NullCheck(L_313);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_314 = L_313->___Options_34;
		NullCheck(L_314);
		float L_315 = L_314->___ScaleFactor_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_316;
		L_316 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_310, L_315, NULL);
		__this->___U3CvertexU3E5__55_60 = L_316;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_317 = __this->___U3CU3E4__this_5;
		NullCheck(L_317);
		RuntimeObject* L_318 = L_317->____allVertices_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_319 = __this->___U3CvertexU3E5__55_60;
		NullCheck(L_318);
		InterfaceActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Add(T) */, ICollection_1_tEF23B8A78E9122DAA952DB1517D31EB7EC90563B_il2cpp_TypeInfo_var, L_318, L_319);
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_320 = __this->___U3CvertexElementU3E5__16_21;
		NullCheck(L_320);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_321;
		L_321 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_320, ((int64_t)1081989810475739247LL), NULL);
		__this->___U3CnxPropU3E5__56_61 = L_321;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnxPropU3E5__56_61), (void*)L_321);
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_322 = __this->___U3CvertexElementU3E5__16_21;
		NullCheck(L_322);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_323;
		L_323 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_322, ((int64_t)1081989810475739248LL), NULL);
		__this->___U3CnyPropU3E5__57_62 = L_323;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnyPropU3E5__57_62), (void*)L_323);
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_324 = __this->___U3CvertexElementU3E5__16_21;
		NullCheck(L_324);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_325;
		L_325 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_324, ((int64_t)1081989810475739249LL), NULL);
		__this->___U3CnzPropU3E5__58_63 = L_325;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnzPropU3E5__58_63), (void*)L_325);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_326 = __this->___U3CnxPropU3E5__56_61;
		if (!L_326)
		{
			goto IL_0ce6;
		}
	}
	{
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_327 = __this->___U3CnyPropU3E5__57_62;
		if (!L_327)
		{
			goto IL_0ce6;
		}
	}
	{
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_328 = __this->___U3CnzPropU3E5__58_63;
		G_B114_0 = ((!(((RuntimeObject*)(PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)L_328) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0ce7;
	}

IL_0ce6:
	{
		G_B114_0 = 0;
	}

IL_0ce7:
	{
		V_25 = (bool)G_B114_0;
		bool L_329 = V_25;
		if (!L_329)
		{
			goto IL_0d89;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_330 = __this->___U3CvertexElementU3E5__16_21;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_331 = __this->___U3CnxPropU3E5__56_61;
		int32_t L_332 = __this->___U3CiU3E5__51_56;
		NullCheck(L_330);
		float L_333;
		L_333 = PlyElement_GetPropertyFloatValue_m7E87CAEA23D5D33F126AE7A44F4D6B28CD2283DC(L_330, L_331, L_332, NULL);
		__this->___U3CnxU3E5__65_70 = L_333;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_334 = __this->___U3CvertexElementU3E5__16_21;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_335 = __this->___U3CnyPropU3E5__57_62;
		int32_t L_336 = __this->___U3CiU3E5__51_56;
		NullCheck(L_334);
		float L_337;
		L_337 = PlyElement_GetPropertyFloatValue_m7E87CAEA23D5D33F126AE7A44F4D6B28CD2283DC(L_334, L_335, L_336, NULL);
		__this->___U3CnyU3E5__66_71 = L_337;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_338 = __this->___U3CvertexElementU3E5__16_21;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_339 = __this->___U3CnzPropU3E5__58_63;
		int32_t L_340 = __this->___U3CiU3E5__51_56;
		NullCheck(L_338);
		float L_341;
		L_341 = PlyElement_GetPropertyFloatValue_m7E87CAEA23D5D33F126AE7A44F4D6B28CD2283DC(L_338, L_339, L_340, NULL);
		__this->___U3CnzU3E5__67_72 = L_341;
		float L_342 = __this->___U3CnxU3E5__65_70;
		float L_343 = __this->___U3CnyU3E5__66_71;
		float L_344 = __this->___U3CnzU3E5__67_72;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_345;
		memset((&L_345), 0, sizeof(L_345));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_345), L_342, L_343, L_344, /*hidden argument*/NULL);
		__this->___U3CnormalU3E5__68_73 = L_345;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_346 = __this->___U3CU3E4__this_5;
		NullCheck(L_346);
		RuntimeObject* L_347 = L_346->____allNormals_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_348 = __this->___U3CnormalU3E5__68_73;
		NullCheck(L_347);
		InterfaceActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Add(T) */, ICollection_1_tEF23B8A78E9122DAA952DB1517D31EB7EC90563B_il2cpp_TypeInfo_var, L_347, L_348);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_349 = (&__this->___U3CnormalU3E5__68_73);
		il2cpp_codegen_initobj(L_349, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
	}

IL_0d89:
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_350 = __this->___U3CvertexElementU3E5__16_21;
		NullCheck(L_350);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_351;
		L_351 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_350, ((int64_t)34902897112120624LL), NULL);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_352 = L_351;
		G_B117_0 = L_352;
		G_B117_1 = __this;
		if (L_352)
		{
			G_B119_0 = L_352;
			G_B119_1 = __this;
			goto IL_0dce;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_353 = __this->___U3CvertexElementU3E5__16_21;
		NullCheck(L_353);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_354;
		L_354 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_353, ((int64_t)34902897112120622LL), NULL);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_355 = L_354;
		G_B118_0 = L_355;
		G_B118_1 = G_B117_1;
		if (L_355)
		{
			G_B119_0 = L_355;
			G_B119_1 = G_B117_1;
			goto IL_0dce;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_356 = __this->___U3CvertexElementU3E5__16_21;
		NullCheck(L_356);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_357;
		L_357 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_356, ((int64_t)-4289164790894553076LL), NULL);
		G_B119_0 = L_357;
		G_B119_1 = G_B118_1;
	}

IL_0dce:
	{
		NullCheck(G_B119_1);
		G_B119_1->___U3CsPropU3E5__59_64 = G_B119_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B119_1->___U3CsPropU3E5__59_64), (void*)G_B119_0);
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_358 = __this->___U3CvertexElementU3E5__16_21;
		NullCheck(L_358);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_359;
		L_359 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_358, ((int64_t)34902897112120625LL), NULL);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_360 = L_359;
		G_B120_0 = L_360;
		G_B120_1 = __this;
		if (L_360)
		{
			G_B122_0 = L_360;
			G_B122_1 = __this;
			goto IL_0e18;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_361 = __this->___U3CvertexElementU3E5__16_21;
		NullCheck(L_361);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_362;
		L_362 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_361, ((int64_t)34902897112120623LL), NULL);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_363 = L_362;
		G_B121_0 = L_363;
		G_B121_1 = G_B120_1;
		if (L_363)
		{
			G_B122_0 = L_363;
			G_B122_1 = G_B120_1;
			goto IL_0e18;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_364 = __this->___U3CvertexElementU3E5__16_21;
		NullCheck(L_364);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_365;
		L_365 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_364, ((int64_t)-4289164790894553075LL), NULL);
		G_B122_0 = L_365;
		G_B122_1 = G_B121_1;
	}

IL_0e18:
	{
		NullCheck(G_B122_1);
		G_B122_1->___U3CtPropU3E5__60_65 = G_B122_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B122_1->___U3CtPropU3E5__60_65), (void*)G_B122_0);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_366 = __this->___U3CsPropU3E5__59_64;
		if (!L_366)
		{
			goto IL_0e30;
		}
	}
	{
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_367 = __this->___U3CtPropU3E5__60_65;
		G_B125_0 = ((!(((RuntimeObject*)(PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)L_367) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0e31;
	}

IL_0e30:
	{
		G_B125_0 = 0;
	}

IL_0e31:
	{
		V_26 = (bool)G_B125_0;
		bool L_368 = V_26;
		if (!L_368)
		{
			goto IL_0ead;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_369 = __this->___U3CvertexElementU3E5__16_21;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_370 = __this->___U3CsPropU3E5__59_64;
		int32_t L_371 = __this->___U3CiU3E5__51_56;
		NullCheck(L_369);
		float L_372;
		L_372 = PlyElement_GetPropertyFloatValue_m7E87CAEA23D5D33F126AE7A44F4D6B28CD2283DC(L_369, L_370, L_371, NULL);
		__this->___U3CsU3E5__69_74 = L_372;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_373 = __this->___U3CvertexElementU3E5__16_21;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_374 = __this->___U3CtPropU3E5__60_65;
		int32_t L_375 = __this->___U3CiU3E5__51_56;
		NullCheck(L_373);
		float L_376;
		L_376 = PlyElement_GetPropertyFloatValue_m7E87CAEA23D5D33F126AE7A44F4D6B28CD2283DC(L_373, L_374, L_375, NULL);
		__this->___U3CtU3E5__70_75 = L_376;
		float L_377 = __this->___U3CsU3E5__69_74;
		float L_378 = __this->___U3CtU3E5__70_75;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_379;
		memset((&L_379), 0, sizeof(L_379));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_379), L_377, L_378, /*hidden argument*/NULL);
		__this->___U3CuvU3E5__71_76 = L_379;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_380 = __this->___U3CU3E4__this_5;
		NullCheck(L_380);
		RuntimeObject* L_381 = L_380->____allUVs_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_382 = __this->___U3CuvU3E5__71_76;
		NullCheck(L_381);
		InterfaceActionInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Add(T) */, ICollection_1_t77739521790EB7E3F514D44638D90AB775EDE8ED_il2cpp_TypeInfo_var, L_381, L_382);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_383 = (&__this->___U3CuvU3E5__71_76);
		il2cpp_codegen_initobj(L_383, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
	}

IL_0ead:
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_384 = __this->___U3CvertexElementU3E5__16_21;
		NullCheck(L_384);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_385;
		L_385 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_384, ((int64_t)-3351804022671183220LL), NULL);
		__this->___U3CrPropU3E5__61_66 = L_385;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrPropU3E5__61_66), (void*)L_385);
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_386 = __this->___U3CvertexElementU3E5__16_21;
		NullCheck(L_386);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_387;
		L_387 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_386, ((int64_t)7096547112154691134LL), NULL);
		__this->___U3CgPropU3E5__62_67 = L_387;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgPropU3E5__62_67), (void*)L_387);
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_388 = __this->___U3CvertexElementU3E5__16_21;
		NullCheck(L_388);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_389;
		L_389 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_388, ((int64_t)6774539739450160575LL), NULL);
		__this->___U3CbPropU3E5__63_68 = L_389;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbPropU3E5__63_68), (void*)L_389);
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_390 = __this->___U3CvertexElementU3E5__16_21;
		NullCheck(L_390);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_391;
		L_391 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_390, ((int64_t)7096547112148981913LL), NULL);
		__this->___U3CaPropU3E5__64_69 = L_391;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaPropU3E5__64_69), (void*)L_391);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_392 = __this->___U3CrPropU3E5__61_66;
		if (L_392)
		{
			goto IL_0f38;
		}
	}
	{
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_393 = __this->___U3CgPropU3E5__62_67;
		if (L_393)
		{
			goto IL_0f38;
		}
	}
	{
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_394 = __this->___U3CbPropU3E5__63_68;
		if (L_394)
		{
			goto IL_0f38;
		}
	}
	{
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_395 = __this->___U3CaPropU3E5__64_69;
		G_B132_0 = ((!(((RuntimeObject*)(PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)L_395) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0f39;
	}

IL_0f38:
	{
		G_B132_0 = 1;
	}

IL_0f39:
	{
		V_27 = (bool)G_B132_0;
		bool L_396 = V_27;
		if (!L_396)
		{
			goto IL_1052;
		}
	}
	{
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_397 = __this->___U3CrPropU3E5__61_66;
		G_B134_0 = __this;
		if (!L_397)
		{
			G_B135_0 = __this;
			goto IL_0f65;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_398 = __this->___U3CvertexElementU3E5__16_21;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_399 = __this->___U3CrPropU3E5__61_66;
		int32_t L_400 = __this->___U3CiU3E5__51_56;
		NullCheck(L_398);
		float L_401;
		L_401 = PlyElement_GetPropertyFloatValue_m7E87CAEA23D5D33F126AE7A44F4D6B28CD2283DC(L_398, L_399, L_400, NULL);
		G_B136_0 = L_401;
		G_B136_1 = G_B134_0;
		goto IL_0f6a;
	}

IL_0f65:
	{
		G_B136_0 = (1.0f);
		G_B136_1 = G_B135_0;
	}

IL_0f6a:
	{
		NullCheck(G_B136_1);
		G_B136_1->___U3CrU3E5__72_77 = G_B136_0;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_402 = __this->___U3CgPropU3E5__62_67;
		G_B137_0 = __this;
		if (!L_402)
		{
			G_B138_0 = __this;
			goto IL_0f91;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_403 = __this->___U3CvertexElementU3E5__16_21;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_404 = __this->___U3CgPropU3E5__62_67;
		int32_t L_405 = __this->___U3CiU3E5__51_56;
		NullCheck(L_403);
		float L_406;
		L_406 = PlyElement_GetPropertyFloatValue_m7E87CAEA23D5D33F126AE7A44F4D6B28CD2283DC(L_403, L_404, L_405, NULL);
		G_B139_0 = L_406;
		G_B139_1 = G_B137_0;
		goto IL_0f96;
	}

IL_0f91:
	{
		G_B139_0 = (1.0f);
		G_B139_1 = G_B138_0;
	}

IL_0f96:
	{
		NullCheck(G_B139_1);
		G_B139_1->___U3CgU3E5__73_78 = G_B139_0;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_407 = __this->___U3CbPropU3E5__63_68;
		G_B140_0 = __this;
		if (!L_407)
		{
			G_B141_0 = __this;
			goto IL_0fbd;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_408 = __this->___U3CvertexElementU3E5__16_21;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_409 = __this->___U3CbPropU3E5__63_68;
		int32_t L_410 = __this->___U3CiU3E5__51_56;
		NullCheck(L_408);
		float L_411;
		L_411 = PlyElement_GetPropertyFloatValue_m7E87CAEA23D5D33F126AE7A44F4D6B28CD2283DC(L_408, L_409, L_410, NULL);
		G_B142_0 = L_411;
		G_B142_1 = G_B140_0;
		goto IL_0fc2;
	}

IL_0fbd:
	{
		G_B142_0 = (1.0f);
		G_B142_1 = G_B141_0;
	}

IL_0fc2:
	{
		NullCheck(G_B142_1);
		G_B142_1->___U3CbU3E5__74_79 = G_B142_0;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_412 = __this->___U3CaPropU3E5__64_69;
		G_B143_0 = __this;
		if (!L_412)
		{
			G_B144_0 = __this;
			goto IL_0fe9;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_413 = __this->___U3CvertexElementU3E5__16_21;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_414 = __this->___U3CaPropU3E5__64_69;
		int32_t L_415 = __this->___U3CiU3E5__51_56;
		NullCheck(L_413);
		float L_416;
		L_416 = PlyElement_GetPropertyFloatValue_m7E87CAEA23D5D33F126AE7A44F4D6B28CD2283DC(L_413, L_414, L_415, NULL);
		G_B145_0 = L_416;
		G_B145_1 = G_B143_0;
		goto IL_0fee;
	}

IL_0fe9:
	{
		G_B145_0 = (1.0f);
		G_B145_1 = G_B144_0;
	}

IL_0fee:
	{
		NullCheck(G_B145_1);
		G_B145_1->___U3CaU3E5__75_80 = G_B145_0;
		float L_417 = __this->___U3CrU3E5__72_77;
		float L_418 = __this->___U3CgU3E5__73_78;
		float L_419 = __this->___U3CbU3E5__74_79;
		float L_420 = __this->___U3CaU3E5__75_80;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_421;
		memset((&L_421), 0, sizeof(L_421));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_421), ((float)(L_417/(255.0f))), ((float)(L_418/(255.0f))), ((float)(L_419/(255.0f))), ((float)(L_420/(255.0f))), /*hidden argument*/NULL);
		__this->___U3CcolorU3E5__76_81 = L_421;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_422 = __this->___U3CU3E4__this_5;
		NullCheck(L_422);
		RuntimeObject* L_423 = L_422->____allColors_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_424 = __this->___U3CcolorU3E5__76_81;
		NullCheck(L_423);
		InterfaceActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Color>::Add(T) */, ICollection_1_tFC51DD83E1437529AA19214EFADD5EE83B73CD6E_il2cpp_TypeInfo_var, L_423, L_424);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_425 = (&__this->___U3CcolorU3E5__76_81);
		il2cpp_codegen_initobj(L_425, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
	}

IL_1052:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_426 = (&__this->___U3CvertexU3E5__55_60);
		il2cpp_codegen_initobj(L_426, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		__this->___U3CnxPropU3E5__56_61 = (PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnxPropU3E5__56_61), (void*)(PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL);
		__this->___U3CnyPropU3E5__57_62 = (PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnyPropU3E5__57_62), (void*)(PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL);
		__this->___U3CnzPropU3E5__58_63 = (PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnzPropU3E5__58_63), (void*)(PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL);
		__this->___U3CsPropU3E5__59_64 = (PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsPropU3E5__59_64), (void*)(PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL);
		__this->___U3CtPropU3E5__60_65 = (PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtPropU3E5__60_65), (void*)(PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL);
		__this->___U3CrPropU3E5__61_66 = (PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrPropU3E5__61_66), (void*)(PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL);
		__this->___U3CgPropU3E5__62_67 = (PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgPropU3E5__62_67), (void*)(PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL);
		__this->___U3CbPropU3E5__63_68 = (PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbPropU3E5__63_68), (void*)(PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL);
		__this->___U3CaPropU3E5__64_69 = (PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaPropU3E5__64_69), (void*)(PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL);
		int32_t L_427 = __this->___U3CiU3E5__51_56;
		V_15 = L_427;
		int32_t L_428 = V_15;
		__this->___U3CiU3E5__51_56 = ((int32_t)il2cpp_codegen_add(L_428, 1));
	}

IL_10b0:
	{
		int32_t L_429 = __this->___U3CiU3E5__51_56;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_430 = __this->___U3CvertexElementU3E5__16_21;
		NullCheck(L_430);
		int32_t L_431 = L_430->___Count_1;
		V_28 = (bool)((((int32_t)L_429) < ((int32_t)L_431))? 1 : 0);
		bool L_432 = V_28;
		if (L_432)
		{
			goto IL_0bc8;
		}
	}
	{
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_433 = __this->___plyReader_3;
		NullCheck(L_433);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_433, (1.0f), 2, (0.0f), NULL);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_434 = __this->____assetLoaderContext_2;
		NullCheck(L_434);
		bool L_435;
		L_435 = AssetLoaderContext_get_MainThreadStall_m053EBE09FC53155F1737B7291186187FD61CBFAE(L_434, NULL);
		V_29 = L_435;
		bool L_436 = V_29;
		if (!L_436)
		{
			goto IL_110d;
		}
	}
	{
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_1105:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_110d:
	{
	}

IL_110e:
	{
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_437 = __this->___U3CU3E4__this_5;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_438 = __this->___U3CU3E4__this_5;
		NullCheck(L_438);
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_439 = L_438->____reader_2;
		NullCheck(L_439);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_440;
		L_440 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_439, NULL);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_441 = __this->___U3CU3E4__this_5;
		NullCheck(L_441);
		RuntimeObject* L_442 = L_441->____allNormals_4;
		NullCheck(L_442);
		int32_t L_443;
		L_443 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_Count() */, ICollection_1_tEF23B8A78E9122DAA952DB1517D31EB7EC90563B_il2cpp_TypeInfo_var, L_442);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_444 = __this->___U3CU3E4__this_5;
		NullCheck(L_444);
		RuntimeObject* L_445 = L_444->____allColors_5;
		NullCheck(L_445);
		int32_t L_446;
		L_446 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Color>::get_Count() */, ICollection_1_tFC51DD83E1437529AA19214EFADD5EE83B73CD6E_il2cpp_TypeInfo_var, L_445);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_447 = __this->___U3CU3E4__this_5;
		NullCheck(L_447);
		RuntimeObject* L_448 = L_447->____allUVs_6;
		NullCheck(L_448);
		int32_t L_449;
		L_449 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_Count() */, ICollection_1_t77739521790EB7E3F514D44638D90AB775EDE8ED_il2cpp_TypeInfo_var, L_448);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_450 = __this->___U3CU3E4__this_5;
		NullCheck(L_450);
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_451 = L_450->____reader_2;
		NullCheck(L_451);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_452;
		L_452 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_451, NULL);
		NullCheck(L_452);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_453 = L_452->___Options_34;
		NullCheck(L_453);
		bool L_454 = L_453->___CompressMeshes_95;
		HashSet_1_t17CC6C8527489146D9154E22DE059EF4A4550640* L_455;
		L_455 = FlexibleVertexDataUtils_BuildVertexAttributesDictionary_mE29022A53EA93BE64B2E15C35DEDECAEBE16DCC1(L_440, (bool)1, (bool)((((int32_t)L_443) > ((int32_t)0))? 1 : 0), (bool)0, (bool)((((int32_t)L_446) > ((int32_t)0))? 1 : 0), (bool)((((int32_t)L_449) > ((int32_t)0))? 1 : 0), L_454, (bool)0, (bool)0, (bool)0, (bool)0, NULL);
		NullCheck(L_437);
		L_437->____vertexAttributes_7 = L_455;
		Il2CppCodeGenWriteBarrier((void**)(&L_437->____vertexAttributes_7), (void*)L_455);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_456 = __this->___U3CU3E4__this_5;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_457 = __this->___U3CU3E4__this_5;
		NullCheck(L_457);
		HashSet_1_t17CC6C8527489146D9154E22DE059EF4A4550640* L_458 = L_457->____vertexAttributes_7;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_459 = __this->___U3CU3E4__this_5;
		NullCheck(L_459);
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_460 = L_459->____reader_2;
		NullCheck(L_460);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_461;
		L_461 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_460, NULL);
		NullCheck(L_461);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_462 = L_461->___Options_34;
		NullCheck(L_462);
		bool L_463 = L_462->___CompressMeshes_95;
		RuntimeObject* L_464;
		L_464 = FlexibleVertexDataUtils_BuildStreamGeometryGroup_m0F6D3B1AB6D5BD9A088B41AB49C1CC3CCF5E38F3(L_458, L_463, NULL);
		NullCheck(L_456);
		L_456->____geometryGroup_8 = L_464;
		Il2CppCodeGenWriteBarrier((void**)(&L_456->____geometryGroup_8), (void*)L_464);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_465 = __this->___U3CU3E4__this_5;
		NullCheck(L_465);
		RuntimeObject* L_466 = L_465->____geometryGroup_8;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_467 = __this->___U3CU3E4__this_5;
		NullCheck(L_467);
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_468 = L_467->____reader_2;
		NullCheck(L_468);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_469;
		L_469 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_468, NULL);
		NullCheck(L_466);
		InterfaceActionInvoker4< AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C*, int32_t, int32_t, int32_t >::Invoke(6 /* System.Void TriLibCore.Interfaces.IGeometryGroup::Setup(TriLibCore.AssetLoaderContext,System.Int32,System.Int32,System.Int32) */, IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262_il2cpp_TypeInfo_var, L_466, L_469, 3, 1, 0);
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_470 = __this->___plyReader_3;
		NullCheck(L_470);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_471;
		L_471 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_470, NULL);
		NullCheck(L_471);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_472 = L_471->___Options_34;
		NullCheck(L_472);
		bool L_473 = L_472->___LoadPointClouds_93;
		V_30 = L_473;
		bool L_474 = V_30;
		if (!L_474)
		{
			goto IL_13b1;
		}
	}
	{
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_475 = __this->___U3CU3E4__this_5;
		NullCheck(L_475);
		RuntimeObject* L_476 = L_475->____geometryGroup_8;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_477 = __this->___U3CU3E4__this_5;
		NullCheck(L_477);
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_478 = L_477->____reader_2;
		NullCheck(L_478);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_479;
		L_479 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_478, NULL);
		NullCheck(L_476);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_480;
		L_480 = GenericInterfaceFuncInvoker3< PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277*, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C*, int32_t, bool >::Invoke(IGeometryGroup_GetGeometry_TisPlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277_mD3FEA40366BC6279E62F5984369E846ADFC1D016_RuntimeMethod_var, L_476, L_479, 0, (bool)0);
		__this->___U3CgeometryU3E5__77_82 = L_480;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgeometryU3E5__77_82), (void*)L_480);
		__this->___U3CiU3E5__78_83 = 0;
		goto IL_1359;
	}

IL_1233:
	{
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_481 = __this->___U3CU3E4__this_5;
		NullCheck(L_481);
		RuntimeObject* L_482 = L_481->____allVertices_3;
		int32_t L_483 = __this->___U3CiU3E5__78_83;
		NullCheck(L_482);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_484;
		L_484 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32) */, IList_1_t4EEE459A249DDE104FA2E88234C593389EE5D291_il2cpp_TypeInfo_var, L_482, L_483);
		__this->___U3CvertexU3E5__79_84 = L_484;
		int32_t L_485 = __this->___U3CiU3E5__78_83;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_486 = __this->___U3CU3E4__this_5;
		NullCheck(L_486);
		RuntimeObject* L_487 = L_486->____allNormals_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_488;
		L_488 = ListUtils_FixIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD45AFFDDC575B7D4965A6B58B98B7D88ED4323EE(L_485, L_487, ListUtils_FixIndex_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD45AFFDDC575B7D4965A6B58B98B7D88ED4323EE_RuntimeMethod_var);
		__this->___U3CnormalU3E5__80_85 = L_488;
		int32_t L_489 = __this->___U3CiU3E5__78_83;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_490 = __this->___U3CU3E4__this_5;
		NullCheck(L_490);
		RuntimeObject* L_491 = L_490->____allColors_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_492;
		L_492 = ListUtils_FixIndex_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA7050D5E386674C2B99B38CF8EE1F3E237BAC447(L_489, L_491, ListUtils_FixIndex_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA7050D5E386674C2B99B38CF8EE1F3E237BAC447_RuntimeMethod_var);
		__this->___U3CcolorU3E5__81_86 = L_492;
		int32_t L_493 = __this->___U3CiU3E5__78_83;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_494 = __this->___U3CU3E4__this_5;
		NullCheck(L_494);
		RuntimeObject* L_495 = L_494->____allUVs_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_496;
		L_496 = ListUtils_FixIndex_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m80E31C1F387DAA4115F14B5463CADE1DEF297D2E(L_493, L_495, ListUtils_FixIndex_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m80E31C1F387DAA4115F14B5463CADE1DEF297D2E_RuntimeMethod_var);
		__this->___U3CuvU3E5__82_87 = L_496;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_497 = __this->___U3CU3E4__this_5;
		NullCheck(L_497);
		RuntimeObject* L_498 = L_497->____geometryGroup_8;
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_499 = __this->___plyReader_3;
		NullCheck(L_499);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_500;
		L_500 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_499, NULL);
		int32_t L_501 = __this->___U3CiU3E5__78_83;
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_502 = __this->___U3CgeometryU3E5__77_82;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_503 = __this->___U3CvertexU3E5__79_84;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_504 = __this->___U3CnormalU3E5__80_85;
		il2cpp_codegen_initobj((&V_31), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_505 = V_31;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_506 = __this->___U3CcolorU3E5__81_86;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_507 = __this->___U3CuvU3E5__82_87;
		il2cpp_codegen_initobj((&V_32), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_508 = V_32;
		il2cpp_codegen_initobj((&V_32), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_509 = V_32;
		il2cpp_codegen_initobj((&V_32), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_510 = V_32;
		il2cpp_codegen_initobj((&V_33), sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_511 = V_33;
		FlexibleVertexDataUtils_BuildAndAddFlexibleVertexData_mC35367A0F41EE78D0D41CB73484C229156CC532F(L_498, L_500, L_501, L_502, L_503, L_504, L_505, L_506, L_507, L_508, L_509, L_510, L_511, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_512 = (&__this->___U3CvertexU3E5__79_84);
		il2cpp_codegen_initobj(L_512, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_513 = (&__this->___U3CnormalU3E5__80_85);
		il2cpp_codegen_initobj(L_513, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_514 = (&__this->___U3CcolorU3E5__81_86);
		il2cpp_codegen_initobj(L_514, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_515 = (&__this->___U3CuvU3E5__82_87);
		il2cpp_codegen_initobj(L_515, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		int32_t L_516 = __this->___U3CiU3E5__78_83;
		V_15 = L_516;
		int32_t L_517 = V_15;
		__this->___U3CiU3E5__78_83 = ((int32_t)il2cpp_codegen_add(L_517, 1));
	}

IL_1359:
	{
		int32_t L_518 = __this->___U3CiU3E5__78_83;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_519 = __this->___U3CU3E4__this_5;
		NullCheck(L_519);
		RuntimeObject* L_520 = L_519->____allVertices_3;
		NullCheck(L_520);
		int32_t L_521;
		L_521 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_Count() */, ICollection_1_tEF23B8A78E9122DAA952DB1517D31EB7EC90563B_il2cpp_TypeInfo_var, L_520);
		V_34 = (bool)((((int32_t)L_518) < ((int32_t)L_521))? 1 : 0);
		bool L_522 = V_34;
		if (L_522)
		{
			goto IL_1233;
		}
	}
	{
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_523 = __this->____assetLoaderContext_2;
		NullCheck(L_523);
		bool L_524;
		L_524 = AssetLoaderContext_get_MainThreadStall_m053EBE09FC53155F1737B7291186187FD61CBFAE(L_523, NULL);
		V_35 = L_524;
		bool L_525 = V_35;
		if (!L_525)
		{
			goto IL_13a4;
		}
	}
	{
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 5;
		return (bool)1;
	}

IL_139c:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_13a4:
	{
		__this->___U3CgeometryU3E5__77_82 = (PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgeometryU3E5__77_82), (void*)(PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277*)NULL);
		goto IL_1ab3;
	}

IL_13b1:
	{
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_526 = __this->___plyReader_3;
		NullCheck(L_526);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_527;
		L_527 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_526, NULL);
		NullCheck(L_527);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_528 = L_527->___Options_34;
		NullCheck(L_528);
		bool L_529 = L_528->___ImportMeshes_10;
		if (!L_529)
		{
			goto IL_13e4;
		}
	}
	{
		Dictionary_2_t123D9C83AF38157E7001ECFB13C7D3DA29E465DC* L_530 = __this->___U3CelementsU3E5__1_6;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8** L_531 = (&__this->___U3CfaceElementU3E5__83_88);
		NullCheck(L_530);
		bool L_532;
		L_532 = Dictionary_2_TryGetValue_m181BAACEB7905BC572C38343BF7DDA866E9415FD(L_530, ((int64_t)6774539739450268610LL), L_531, Dictionary_2_TryGetValue_m181BAACEB7905BC572C38343BF7DDA866E9415FD_RuntimeMethod_var);
		G_B163_0 = ((int32_t)(L_532));
		goto IL_13e5;
	}

IL_13e4:
	{
		G_B163_0 = 0;
	}

IL_13e5:
	{
		V_36 = (bool)G_B163_0;
		bool L_533 = V_36;
		if (!L_533)
		{
			goto IL_1aac;
		}
	}
	{
		__this->___U3CjU3E5__84_89 = 0;
		goto IL_1a4e;
	}

IL_13fb:
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_534 = __this->___U3CfaceElementU3E5__83_88;
		NullCheck(L_534);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_535;
		L_535 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_534, ((int64_t)-4898810238098815469LL), NULL);
		__this->___U3CtexCoordPropU3E5__86_91 = ((PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E*)IsInstClass((RuntimeObject*)L_535, PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtexCoordPropU3E5__86_91), (void*)((PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E*)IsInstClass((RuntimeObject*)L_535, PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E_il2cpp_TypeInfo_var)));
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_536 = __this->___U3CtexCoordPropU3E5__86_91;
		V_37 = (bool)((!(((RuntimeObject*)(PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E*)L_536) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_537 = V_37;
		if (!L_537)
		{
			goto IL_1462;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_538 = __this->___U3CfaceElementU3E5__83_88;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_539 = __this->___U3CtexCoordPropU3E5__86_91;
		int32_t L_540 = __this->___U3CjU3E5__84_89;
		NullCheck(L_538);
		int32_t L_541;
		L_541 = PlyElement_GetListIndex_m2725B97E4D677B68667107956C9D7E8A2C2565AF(L_538, L_539, L_540, NULL);
		__this->___U3CtexCoordListIndexU3E5__94_99 = L_541;
		int32_t L_542 = __this->___U3CtexCoordListIndexU3E5__94_99;
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_543 = __this->___U3ClistsU3E5__2_7;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_544;
		L_544 = PlyValue_GetListValue_m0917530BCED9A22F01949BB493407DCC83C71C2F(L_542, L_543, NULL);
		__this->___U3CtexCoordU3E5__85_90 = L_544;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtexCoordU3E5__85_90), (void*)L_544);
		goto IL_146b;
	}

IL_1462:
	{
		__this->___U3CtexCoordU3E5__85_90 = (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtexCoordU3E5__85_90), (void*)(List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB*)NULL);
	}

IL_146b:
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_545 = __this->___U3CfaceElementU3E5__83_88;
		NullCheck(L_545);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_546;
		L_546 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_545, ((int64_t)3766120907217874982LL), NULL);
		__this->___U3CmaterialIndexPropertyU3E5__87_92 = L_546;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmaterialIndexPropertyU3E5__87_92), (void*)L_546);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_547 = __this->___U3CmaterialIndexPropertyU3E5__87_92;
		G_B169_0 = __this;
		if (L_547)
		{
			G_B170_0 = __this;
			goto IL_1491;
		}
	}
	{
		G_B171_0 = 0;
		G_B171_1 = G_B169_0;
		goto IL_14a8;
	}

IL_1491:
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_548 = __this->___U3CfaceElementU3E5__83_88;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_549 = __this->___U3CmaterialIndexPropertyU3E5__87_92;
		int32_t L_550 = __this->___U3CjU3E5__84_89;
		NullCheck(L_548);
		int32_t L_551;
		L_551 = PlyElement_GetPropertyIntValue_m350C36F63BFB7DB71BBDE9219AE28BC400EAC124(L_548, L_549, L_550, NULL);
		G_B171_0 = L_551;
		G_B171_1 = G_B170_0;
	}

IL_14a8:
	{
		NullCheck(G_B171_1);
		G_B171_1->___U3CmaterialIndexU3E5__88_93 = G_B171_0;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_552 = __this->___U3CU3E4__this_5;
		NullCheck(L_552);
		RuntimeObject* L_553 = L_552->____geometryGroup_8;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_554 = __this->___U3CU3E4__this_5;
		NullCheck(L_554);
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_555 = L_554->____reader_2;
		NullCheck(L_555);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_556;
		L_556 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_555, NULL);
		int32_t L_557 = __this->___U3CmaterialIndexU3E5__88_93;
		NullCheck(L_553);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_558;
		L_558 = GenericInterfaceFuncInvoker3< PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277*, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C*, int32_t, bool >::Invoke(IGeometryGroup_GetGeometry_TisPlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277_mD3FEA40366BC6279E62F5984369E846ADFC1D016_RuntimeMethod_var, L_553, L_556, L_557, (bool)0);
		__this->___U3CtriGeometryU3E5__89_94 = L_558;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtriGeometryU3E5__89_94), (void*)L_558);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_559 = __this->___U3CU3E4__this_5;
		NullCheck(L_559);
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_560 = L_559->____reader_2;
		NullCheck(L_560);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_561;
		L_561 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_560, NULL);
		NullCheck(L_561);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_562 = L_561->___Options_34;
		NullCheck(L_562);
		bool L_563 = L_562->___KeepQuads_22;
		G_B172_0 = __this;
		if (L_563)
		{
			G_B173_0 = __this;
			goto IL_14fa;
		}
	}
	{
		G_B174_0 = ((PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277*)(NULL));
		G_B174_1 = G_B172_0;
		goto IL_1521;
	}

IL_14fa:
	{
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_564 = __this->___U3CU3E4__this_5;
		NullCheck(L_564);
		RuntimeObject* L_565 = L_564->____geometryGroup_8;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_566 = __this->___U3CU3E4__this_5;
		NullCheck(L_566);
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_567 = L_566->____reader_2;
		NullCheck(L_567);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_568;
		L_568 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_567, NULL);
		int32_t L_569 = __this->___U3CmaterialIndexU3E5__88_93;
		NullCheck(L_565);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_570;
		L_570 = GenericInterfaceFuncInvoker3< PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277*, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C*, int32_t, bool >::Invoke(IGeometryGroup_GetGeometry_TisPlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277_mD3FEA40366BC6279E62F5984369E846ADFC1D016_RuntimeMethod_var, L_565, L_568, L_569, (bool)1);
		G_B174_0 = L_570;
		G_B174_1 = G_B173_0;
	}

IL_1521:
	{
		NullCheck(G_B174_1);
		G_B174_1->___U3CquadGeometryU3E5__90_95 = G_B174_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B174_1->___U3CquadGeometryU3E5__90_95), (void*)G_B174_0);
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_571 = __this->___U3CfaceElementU3E5__83_88;
		NullCheck(L_571);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_572;
		L_572 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_571, ((int64_t)7578069101293603633LL), NULL);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_573 = L_572;
		G_B175_0 = L_573;
		G_B175_1 = __this;
		if (L_573)
		{
			G_B176_0 = L_573;
			G_B176_1 = __this;
			goto IL_1553;
		}
	}
	{
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_574 = __this->___U3CfaceElementU3E5__83_88;
		NullCheck(L_574);
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_575;
		L_575 = PlyElement_GetProperty_m59AEFD258B013232C34B22302790095BB47E3280(L_574, ((int64_t)2138570927453749980LL), NULL);
		G_B176_0 = L_575;
		G_B176_1 = G_B175_1;
	}

IL_1553:
	{
		NullCheck(G_B176_1);
		G_B176_1->___U3CvertexIndicesPropU3E5__91_96 = ((PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E*)IsInstClass((RuntimeObject*)G_B176_0, PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B176_1->___U3CvertexIndicesPropU3E5__91_96), (void*)((PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E*)IsInstClass((RuntimeObject*)G_B176_0, PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E_il2cpp_TypeInfo_var)));
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_576 = __this->___U3CfaceElementU3E5__83_88;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_577 = __this->___U3CvertexIndicesPropU3E5__91_96;
		int32_t L_578 = __this->___U3CjU3E5__84_89;
		NullCheck(L_576);
		int32_t L_579;
		L_579 = PlyElement_GetListIndex_m2725B97E4D677B68667107956C9D7E8A2C2565AF(L_576, L_577, L_578, NULL);
		__this->___U3CvertexIndicesListIndexU3E5__92_97 = L_579;
		int32_t L_580 = __this->___U3CvertexIndicesListIndexU3E5__92_97;
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_581 = __this->___U3ClistsU3E5__2_7;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_582;
		L_582 = PlyValue_GetListValue_m0917530BCED9A22F01949BB493407DCC83C71C2F(L_580, L_581, NULL);
		__this->___U3CvertexIndicesU3E5__93_98 = L_582;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CvertexIndicesU3E5__93_98), (void*)L_582);
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_583 = __this->___U3CvertexIndicesU3E5__93_98;
		NullCheck(L_583);
		int32_t L_584;
		L_584 = List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_inline(L_583, List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_RuntimeMethod_var);
		V_38 = (bool)((((int32_t)L_584) == ((int32_t)3))? 1 : 0);
		bool L_585 = V_38;
		if (!L_585)
		{
			goto IL_1620;
		}
	}
	{
		__this->___U3CiU3E5__95_100 = 2;
		goto IL_1608;
	}

IL_15af:
	{
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_586 = __this->___U3CU3E4__this_5;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_587 = __this->___U3CvertexIndicesU3E5__93_98;
		int32_t L_588 = __this->___U3CiU3E5__95_100;
		NullCheck(L_587);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_589;
		L_589 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_587, L_588, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_590 = __this->___U3CvertexIndicesPropU3E5__91_96;
		NullCheck(L_590);
		int32_t L_591 = L_590->___ItemType_3;
		int32_t L_592;
		L_592 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_589, L_591, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_593 = __this->___U3CtriGeometryU3E5__89_94;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_594 = __this->___U3CtexCoordU3E5__85_90;
		int32_t L_595 = __this->___U3CiU3E5__95_100;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_596 = __this->___U3CtexCoordPropU3E5__86_91;
		NullCheck(L_586);
		PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556(L_586, L_592, L_593, L_594, L_595, L_596, NULL);
		int32_t L_597 = __this->___U3CiU3E5__95_100;
		V_15 = L_597;
		int32_t L_598 = V_15;
		__this->___U3CiU3E5__95_100 = ((int32_t)il2cpp_codegen_subtract(L_598, 1));
	}

IL_1608:
	{
		int32_t L_599 = __this->___U3CiU3E5__95_100;
		V_39 = (bool)((((int32_t)((((int32_t)L_599) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_600 = V_39;
		if (L_600)
		{
			goto IL_15af;
		}
	}
	{
		goto IL_1a0a;
	}

IL_1620:
	{
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_601 = __this->___U3CvertexIndicesU3E5__93_98;
		NullCheck(L_601);
		int32_t L_602;
		L_602 = List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_inline(L_601, List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_RuntimeMethod_var);
		V_40 = (bool)((((int32_t)L_602) == ((int32_t)4))? 1 : 0);
		bool L_603 = V_40;
		if (!L_603)
		{
			goto IL_18a7;
		}
	}
	{
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_604 = __this->___U3CquadGeometryU3E5__90_95;
		V_41 = (bool)((!(((RuntimeObject*)(PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277*)L_604) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_605 = V_41;
		if (!L_605)
		{
			goto IL_173d;
		}
	}
	{
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_606 = __this->___U3CU3E4__this_5;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_607 = __this->___U3CvertexIndicesU3E5__93_98;
		NullCheck(L_607);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_608;
		L_608 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_607, 3, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_609 = __this->___U3CvertexIndicesPropU3E5__91_96;
		NullCheck(L_609);
		int32_t L_610 = L_609->___ItemType_3;
		int32_t L_611;
		L_611 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_608, L_610, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_612 = __this->___U3CquadGeometryU3E5__90_95;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_613 = __this->___U3CtexCoordU3E5__85_90;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_614 = __this->___U3CtexCoordPropU3E5__86_91;
		NullCheck(L_606);
		PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556(L_606, L_611, L_612, L_613, 3, L_614, NULL);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_615 = __this->___U3CU3E4__this_5;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_616 = __this->___U3CvertexIndicesU3E5__93_98;
		NullCheck(L_616);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_617;
		L_617 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_616, 2, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_618 = __this->___U3CvertexIndicesPropU3E5__91_96;
		NullCheck(L_618);
		int32_t L_619 = L_618->___ItemType_3;
		int32_t L_620;
		L_620 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_617, L_619, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_621 = __this->___U3CquadGeometryU3E5__90_95;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_622 = __this->___U3CtexCoordU3E5__85_90;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_623 = __this->___U3CtexCoordPropU3E5__86_91;
		NullCheck(L_615);
		PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556(L_615, L_620, L_621, L_622, 2, L_623, NULL);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_624 = __this->___U3CU3E4__this_5;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_625 = __this->___U3CvertexIndicesU3E5__93_98;
		NullCheck(L_625);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_626;
		L_626 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_625, 1, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_627 = __this->___U3CvertexIndicesPropU3E5__91_96;
		NullCheck(L_627);
		int32_t L_628 = L_627->___ItemType_3;
		int32_t L_629;
		L_629 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_626, L_628, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_630 = __this->___U3CquadGeometryU3E5__90_95;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_631 = __this->___U3CtexCoordU3E5__85_90;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_632 = __this->___U3CtexCoordPropU3E5__86_91;
		NullCheck(L_624);
		PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556(L_624, L_629, L_630, L_631, 1, L_632, NULL);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_633 = __this->___U3CU3E4__this_5;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_634 = __this->___U3CvertexIndicesU3E5__93_98;
		NullCheck(L_634);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_635;
		L_635 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_634, 0, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_636 = __this->___U3CvertexIndicesPropU3E5__91_96;
		NullCheck(L_636);
		int32_t L_637 = L_636->___ItemType_3;
		int32_t L_638;
		L_638 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_635, L_637, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_639 = __this->___U3CquadGeometryU3E5__90_95;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_640 = __this->___U3CtexCoordU3E5__85_90;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_641 = __this->___U3CtexCoordPropU3E5__86_91;
		NullCheck(L_633);
		PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556(L_633, L_638, L_639, L_640, 0, L_641, NULL);
		goto IL_18a1;
	}

IL_173d:
	{
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_642 = __this->___U3CU3E4__this_5;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_643 = __this->___U3CvertexIndicesU3E5__93_98;
		NullCheck(L_643);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_644;
		L_644 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_643, 0, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_645 = __this->___U3CvertexIndicesPropU3E5__91_96;
		NullCheck(L_645);
		int32_t L_646 = L_645->___ItemType_3;
		int32_t L_647;
		L_647 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_644, L_646, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_648 = __this->___U3CtriGeometryU3E5__89_94;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_649 = __this->___U3CtexCoordU3E5__85_90;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_650 = __this->___U3CtexCoordPropU3E5__86_91;
		NullCheck(L_642);
		PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556(L_642, L_647, L_648, L_649, 0, L_650, NULL);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_651 = __this->___U3CU3E4__this_5;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_652 = __this->___U3CvertexIndicesU3E5__93_98;
		NullCheck(L_652);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_653;
		L_653 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_652, 3, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_654 = __this->___U3CvertexIndicesPropU3E5__91_96;
		NullCheck(L_654);
		int32_t L_655 = L_654->___ItemType_3;
		int32_t L_656;
		L_656 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_653, L_655, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_657 = __this->___U3CtriGeometryU3E5__89_94;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_658 = __this->___U3CtexCoordU3E5__85_90;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_659 = __this->___U3CtexCoordPropU3E5__86_91;
		NullCheck(L_651);
		PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556(L_651, L_656, L_657, L_658, 3, L_659, NULL);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_660 = __this->___U3CU3E4__this_5;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_661 = __this->___U3CvertexIndicesU3E5__93_98;
		NullCheck(L_661);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_662;
		L_662 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_661, 2, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_663 = __this->___U3CvertexIndicesPropU3E5__91_96;
		NullCheck(L_663);
		int32_t L_664 = L_663->___ItemType_3;
		int32_t L_665;
		L_665 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_662, L_664, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_666 = __this->___U3CtriGeometryU3E5__89_94;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_667 = __this->___U3CtexCoordU3E5__85_90;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_668 = __this->___U3CtexCoordPropU3E5__86_91;
		NullCheck(L_660);
		PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556(L_660, L_665, L_666, L_667, 2, L_668, NULL);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_669 = __this->___U3CU3E4__this_5;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_670 = __this->___U3CvertexIndicesU3E5__93_98;
		NullCheck(L_670);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_671;
		L_671 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_670, 2, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_672 = __this->___U3CvertexIndicesPropU3E5__91_96;
		NullCheck(L_672);
		int32_t L_673 = L_672->___ItemType_3;
		int32_t L_674;
		L_674 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_671, L_673, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_675 = __this->___U3CtriGeometryU3E5__89_94;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_676 = __this->___U3CtexCoordU3E5__85_90;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_677 = __this->___U3CtexCoordPropU3E5__86_91;
		NullCheck(L_669);
		PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556(L_669, L_674, L_675, L_676, 2, L_677, NULL);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_678 = __this->___U3CU3E4__this_5;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_679 = __this->___U3CvertexIndicesU3E5__93_98;
		NullCheck(L_679);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_680;
		L_680 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_679, 1, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_681 = __this->___U3CvertexIndicesPropU3E5__91_96;
		NullCheck(L_681);
		int32_t L_682 = L_681->___ItemType_3;
		int32_t L_683;
		L_683 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_680, L_682, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_684 = __this->___U3CtriGeometryU3E5__89_94;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_685 = __this->___U3CtexCoordU3E5__85_90;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_686 = __this->___U3CtexCoordPropU3E5__86_91;
		NullCheck(L_678);
		PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556(L_678, L_683, L_684, L_685, 1, L_686, NULL);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_687 = __this->___U3CU3E4__this_5;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_688 = __this->___U3CvertexIndicesU3E5__93_98;
		NullCheck(L_688);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_689;
		L_689 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_688, 0, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_690 = __this->___U3CvertexIndicesPropU3E5__91_96;
		NullCheck(L_690);
		int32_t L_691 = L_690->___ItemType_3;
		int32_t L_692;
		L_692 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_689, L_691, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_693 = __this->___U3CtriGeometryU3E5__89_94;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_694 = __this->___U3CtexCoordU3E5__85_90;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_695 = __this->___U3CtexCoordPropU3E5__86_91;
		NullCheck(L_687);
		PlyProcessor_AddVertex_m5B75D5BE24B3E796AF09BD492E09542B81F47556(L_687, L_692, L_693, L_694, 0, L_695, NULL);
	}

IL_18a1:
	{
		goto IL_1a0a;
	}

IL_18a7:
	{
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_696 = __this->___U3CvertexIndicesU3E5__93_98;
		NullCheck(L_696);
		int32_t L_697;
		L_697 = List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_inline(L_696, List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_RuntimeMethod_var);
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_698 = (ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)SZArrayNew(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var, (uint32_t)L_697);
		__this->___U3CcontourVerticesU3E5__96_101 = L_698;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontourVerticesU3E5__96_101), (void*)L_698);
		__this->___U3CiU3E5__97_102 = 0;
		goto IL_19b8;
	}

IL_18ca:
	{
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_699 = __this->___U3CvertexIndicesU3E5__93_98;
		int32_t L_700 = __this->___U3CiU3E5__97_102;
		NullCheck(L_699);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_701;
		L_701 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_699, L_700, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		__this->___U3CindexU3E5__98_103 = L_701;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_702 = __this->___U3CU3E4__this_5;
		NullCheck(L_702);
		RuntimeObject* L_703 = L_702->____allVertices_3;
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_704 = __this->___U3CindexU3E5__98_103;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_705 = __this->___U3CvertexIndicesPropU3E5__91_96;
		NullCheck(L_705);
		int32_t L_706 = L_705->___ItemType_3;
		int32_t L_707;
		L_707 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_704, L_706, NULL);
		NullCheck(L_703);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_708;
		L_708 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32) */, IList_1_t4EEE459A249DDE104FA2E88234C593389EE5D291_il2cpp_TypeInfo_var, L_703, L_707);
		__this->___U3CvertexU3E5__99_104 = L_708;
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_709 = __this->___U3CcontourVerticesU3E5__96_101;
		int32_t L_710 = __this->___U3CiU3E5__97_102;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_711 = (&__this->___U3CvertexU3E5__99_104);
		float L_712 = L_711->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_713 = (&__this->___U3CvertexU3E5__99_104);
		float L_714 = L_713->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_715 = (&__this->___U3CvertexU3E5__99_104);
		float L_716 = L_715->___z_4;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_717;
		memset((&L_717), 0, sizeof(L_717));
		Vec3__ctor_m937D1DD303AF7D61662A455E5F208BDB81106B7C((&L_717), L_712, L_714, L_716, /*hidden argument*/NULL);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_718 = __this->___U3CU3E4__this_5;
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_719 = __this->___U3CtriGeometryU3E5__89_94;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_720 = __this->___U3CU3E4__this_5;
		NullCheck(L_720);
		RuntimeObject* L_721 = L_720->____geometryGroup_8;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_722 = __this->___U3CvertexIndicesU3E5__93_98;
		int32_t L_723 = __this->___U3CiU3E5__97_102;
		NullCheck(L_722);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_724;
		L_724 = List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36(L_722, L_723, List_1_get_Item_m962F28DEDCA02D0ECAACE71A6DB856C93D226E36_RuntimeMethod_var);
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_725 = __this->___U3CvertexIndicesPropU3E5__91_96;
		NullCheck(L_725);
		int32_t L_726 = L_725->___ItemType_3;
		int32_t L_727;
		L_727 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_724, L_726, NULL);
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_728 = __this->___U3CtexCoordU3E5__85_90;
		PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E* L_729 = __this->___U3CtexCoordPropU3E5__86_91;
		int32_t L_730 = __this->___U3CiU3E5__97_102;
		NullCheck(L_718);
		RuntimeObject* L_731;
		L_731 = PlyProcessor_BuildVertexData_mB82746725B313510493FDBBBCD2A960E434566B9(L_718, L_719, L_721, L_727, L_728, L_729, L_730, NULL);
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_732;
		memset((&L_732), 0, sizeof(L_732));
		ContourVertex__ctor_mB49AE90A9B85CA37EC7EE928BC9EE585D35C8C03((&L_732), L_717, L_731, /*hidden argument*/NULL);
		NullCheck(L_709);
		(L_709)->SetAt(static_cast<il2cpp_array_size_t>(L_710), (ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F)L_732);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_733 = (&__this->___U3CvertexU3E5__99_104);
		il2cpp_codegen_initobj(L_733, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		int32_t L_734 = __this->___U3CiU3E5__97_102;
		V_15 = L_734;
		int32_t L_735 = V_15;
		__this->___U3CiU3E5__97_102 = ((int32_t)il2cpp_codegen_add(L_735, 1));
	}

IL_19b8:
	{
		int32_t L_736 = __this->___U3CiU3E5__97_102;
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_737 = __this->___U3CvertexIndicesU3E5__93_98;
		NullCheck(L_737);
		int32_t L_738;
		L_738 = List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_inline(L_737, List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_RuntimeMethod_var);
		V_42 = (bool)((((int32_t)L_736) < ((int32_t)L_738))? 1 : 0);
		bool L_739 = V_42;
		if (L_739)
		{
			goto IL_18ca;
		}
	}
	{
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_740 = __this->___U3CcontourVerticesU3E5__96_101;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_741 = __this->___U3CU3E4__this_5;
		NullCheck(L_741);
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_742 = L_741->____reader_2;
		NullCheck(L_742);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_743;
		L_743 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_742, NULL);
		PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277* L_744 = __this->___U3CtriGeometryU3E5__89_94;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_745 = __this->___U3CU3E4__this_5;
		NullCheck(L_745);
		RuntimeObject* L_746 = L_745->____geometryGroup_8;
		Helpers_Tesselate_m52BC0268EF5AEEEECF07746E8B25E59026DAC804((RuntimeObject*)L_740, L_743, L_744, L_746, (bool)1, NULL);
		__this->___U3CcontourVerticesU3E5__96_101 = (ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontourVerticesU3E5__96_101), (void*)(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)NULL);
	}

IL_1a0a:
	{
		__this->___U3CtexCoordU3E5__85_90 = (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtexCoordU3E5__85_90), (void*)(List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB*)NULL);
		__this->___U3CtexCoordPropU3E5__86_91 = (PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtexCoordPropU3E5__86_91), (void*)(PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E*)NULL);
		__this->___U3CmaterialIndexPropertyU3E5__87_92 = (PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmaterialIndexPropertyU3E5__87_92), (void*)(PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362*)NULL);
		__this->___U3CtriGeometryU3E5__89_94 = (PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtriGeometryU3E5__89_94), (void*)(PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277*)NULL);
		__this->___U3CquadGeometryU3E5__90_95 = (PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CquadGeometryU3E5__90_95), (void*)(PlyGeometry_tA0C162EFF46BFAFFE018583C0AA8B48295E78277*)NULL);
		__this->___U3CvertexIndicesPropU3E5__91_96 = (PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CvertexIndicesPropU3E5__91_96), (void*)(PlyListProperty_t093FB53C46C251396FC338725D760422D77FB96E*)NULL);
		__this->___U3CvertexIndicesU3E5__93_98 = (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CvertexIndicesU3E5__93_98), (void*)(List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB*)NULL);
		int32_t L_747 = __this->___U3CjU3E5__84_89;
		V_15 = L_747;
		int32_t L_748 = V_15;
		__this->___U3CjU3E5__84_89 = ((int32_t)il2cpp_codegen_add(L_748, 1));
	}

IL_1a4e:
	{
		int32_t L_749 = __this->___U3CjU3E5__84_89;
		PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8* L_750 = __this->___U3CfaceElementU3E5__83_88;
		NullCheck(L_750);
		int32_t L_751 = L_750->___Count_1;
		V_43 = (bool)((((int32_t)L_749) < ((int32_t)L_751))? 1 : 0);
		bool L_752 = V_43;
		if (L_752)
		{
			goto IL_13fb;
		}
	}
	{
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_753 = __this->___plyReader_3;
		NullCheck(L_753);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_753, (1.0f), 3, (0.0f), NULL);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_754 = __this->____assetLoaderContext_2;
		NullCheck(L_754);
		bool L_755;
		L_755 = AssetLoaderContext_get_MainThreadStall_m053EBE09FC53155F1737B7291186187FD61CBFAE(L_754, NULL);
		V_44 = L_755;
		bool L_756 = V_44;
		if (!L_756)
		{
			goto IL_1aab;
		}
	}
	{
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 6;
		return (bool)1;
	}

IL_1aa3:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_1aab:
	{
	}

IL_1aac:
	{
		__this->___U3CfaceElementU3E5__83_88 = (PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CfaceElementU3E5__83_88), (void*)(PlyElement_t37A3C3E1660A91570103A028EFBD20F78DDDD3C8*)NULL);
	}

IL_1ab3:
	{
		PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* L_757 = __this->___U3CplyStreamReaderU3E5__11_16;
		NullCheck(L_757);
		TextReader_Dispose_mDCB332EFA06970A9CC7EC4596FCC5220B9512616(L_757, NULL);
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_758 = (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237*)il2cpp_codegen_object_new(PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237_il2cpp_TypeInfo_var);
		NullCheck(L_758);
		PlyRootModel__ctor_m70F96F0795DD6B57ADAEE28C419A56033958CEED(L_758, NULL);
		V_45 = L_758;
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_759 = V_45;
		NullCheck(L_759);
		PlyModel_set_Visibility_mB2F9D43D393D00418E2B4A999974A1E18512D0A5_inline(L_759, (bool)1, NULL);
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_760 = V_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_761;
		L_761 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_760);
		PlyModel_set_LocalScale_m8055103EC8ADECCC5D3C535C098B33AA2E0275A8_inline(L_760, L_761, NULL);
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_762 = V_45;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_763;
		L_763 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_762);
		PlyModel_set_LocalRotation_mA70C0956246A032C3C1C7EF5DE31A303ACE92BCB_inline(L_762, L_763, NULL);
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_764 = V_45;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_765 = __this->___U3CU3E4__this_5;
		NullCheck(L_765);
		RuntimeObject* L_766 = L_765->____geometryGroup_8;
		NullCheck(L_764);
		PlyModel_set_GeometryGroup_mC40A2CC9BD75EBA9305AA0FC6E9F1FFD51FDA055_inline(L_764, L_766, NULL);
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_767 = V_45;
		RuntimeObject* L_768 = __this->___U3CallMaterialsU3E5__15_20;
		NullCheck(L_767);
		PlyRootModel_set_AllMaterials_m30733607EFAAACE9110C2452A299D1D47D799C53_inline(L_767, L_768, NULL);
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_769 = V_45;
		List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31* L_770 = __this->___U3CallTexturesU3E5__8_13;
		NullCheck(L_769);
		PlyRootModel_set_AllTextures_m7646524ECF24096720D3C48A840F554283D6212E_inline(L_769, L_770, NULL);
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_771 = V_45;
		IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711* L_772 = (IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711*)(IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711*)SZArrayNew(IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711_il2cpp_TypeInfo_var, (uint32_t)1);
		IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711* L_773 = L_772;
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_774 = __this->___U3CU3E4__this_5;
		NullCheck(L_774);
		RuntimeObject* L_775 = L_774->____geometryGroup_8;
		NullCheck(L_773);
		ArrayElementTypeCheck (L_773, L_775);
		(L_773)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_775);
		NullCheck(L_771);
		PlyRootModel_set_AllGeometryGroups_m44BF8C7B4B75BCAA1C25B38D31F5FB90019FD3F1_inline(L_771, (RuntimeObject*)L_773, NULL);
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_776 = V_45;
		__this->___U3CrootModelU3E5__17_22 = L_776;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrootModelU3E5__17_22), (void*)L_776);
		RuntimeObject* L_777 = __this->___U3CallMaterialsU3E5__15_20;
		V_46 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_777) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_778 = V_46;
		if (!L_778)
		{
			goto IL_1bc2;
		}
	}
	{
		RuntimeObject* L_779 = __this->___U3CallMaterialsU3E5__15_20;
		NullCheck(L_779);
		int32_t L_780;
		L_780 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TriLibCore.Interfaces.IMaterial>::get_Count() */, ICollection_1_tD4699121F1986A1CF0F28D10E91389DD1C7FDE69_il2cpp_TypeInfo_var, L_779);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_781 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_780);
		__this->___U3CmaterialIndicesU3E5__100_105 = L_781;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmaterialIndicesU3E5__100_105), (void*)L_781);
		__this->___U3CiU3E5__101_106 = 0;
		goto IL_1b92;
	}

IL_1b6b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_782 = __this->___U3CmaterialIndicesU3E5__100_105;
		int32_t L_783 = __this->___U3CiU3E5__101_106;
		int32_t L_784 = __this->___U3CiU3E5__101_106;
		NullCheck(L_782);
		(L_782)->SetAt(static_cast<il2cpp_array_size_t>(L_783), (int32_t)L_784);
		int32_t L_785 = __this->___U3CiU3E5__101_106;
		V_15 = L_785;
		int32_t L_786 = V_15;
		__this->___U3CiU3E5__101_106 = ((int32_t)il2cpp_codegen_add(L_786, 1));
	}

IL_1b92:
	{
		int32_t L_787 = __this->___U3CiU3E5__101_106;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_788 = __this->___U3CmaterialIndicesU3E5__100_105;
		NullCheck(L_788);
		V_47 = (bool)((((int32_t)L_787) < ((int32_t)((int32_t)(((RuntimeArray*)L_788)->max_length))))? 1 : 0);
		bool L_789 = V_47;
		if (L_789)
		{
			goto IL_1b6b;
		}
	}
	{
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_790 = __this->___U3CrootModelU3E5__17_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_791 = __this->___U3CmaterialIndicesU3E5__100_105;
		NullCheck(L_790);
		PlyModel_set_MaterialIndices_m87FB1DB52736B0D10EBF7CA05C04C3B1A321F670_inline(L_790, (RuntimeObject*)L_791, NULL);
		__this->___U3CmaterialIndicesU3E5__100_105 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmaterialIndicesU3E5__100_105), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_1bc2:
	{
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_792 = __this->____assetLoaderContext_2;
		NullCheck(L_792);
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* L_793 = L_792->___Stack_39;
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_794 = __this->___U3CrootModelU3E5__17_22;
		NullCheck(L_793);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_793, L_794);
		return (bool)0;
	}
}
// System.Object TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CProcess_CoroutineU3Ed__71_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD86A0EF04BB362517A69578CA718D5BB7BF13255 (U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcess_CoroutineU3Ed__71_System_Collections_IEnumerator_Reset_m9FB1DD2F3935D895EF35B0060AA4B614A6D6F782 (U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CProcess_CoroutineU3Ed__71_System_Collections_IEnumerator_Reset_m9FB1DD2F3935D895EF35B0060AA4B614A6D6F782_RuntimeMethod_var)));
	}
}
// System.Object TriLibCore.Ply.PlyProcessor/<Process_Coroutine>d__71::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CProcess_CoroutineU3Ed__71_System_Collections_IEnumerator_get_Current_m098D4541840668C663ED08FD83CA773EA1DF12A6 (U3CProcess_CoroutineU3Ed__71_tD9CB87D1923D1993BCE2FE1F889C7CD5194B53C3* __this, const RuntimeMethod* method) 
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
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyValue::op_Implicit(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyValue_op_Implicit_m97A5AB6B334327E421C58927E78C773B6D809B53 (int8_t ___0_other, const RuntimeMethod* method) 
{
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41));
		int8_t L_0 = ___0_other;
		(&V_0)->____intValue_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, ((int32_t)127)));
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_1 = V_0;
		V_1 = L_1;
		goto IL_0018;
	}

IL_0018:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_2 = V_1;
		return L_2;
	}
}
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyValue::op_Implicit(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyValue_op_Implicit_m9E7C391E8C4BAEF13B69CC7B0CEC87F250BD46A6 (uint8_t ___0_other, const RuntimeMethod* method) 
{
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41));
		uint8_t L_0 = ___0_other;
		(&V_0)->____intValue_0 = L_0;
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_1 = V_0;
		V_1 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_2 = V_1;
		return L_2;
	}
}
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyValue::op_Implicit(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyValue_op_Implicit_m8B2B7375CC217E6E3345C812C647F7BB51FC0DC6 (uint16_t ___0_other, const RuntimeMethod* method) 
{
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41));
		uint16_t L_0 = ___0_other;
		(&V_0)->____intValue_0 = L_0;
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_1 = V_0;
		V_1 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_2 = V_1;
		return L_2;
	}
}
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyValue::op_Implicit(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyValue_op_Implicit_m78378AA8D6DDCEC09907E0927A06ED49418D4635 (int16_t ___0_other, const RuntimeMethod* method) 
{
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41));
		int16_t L_0 = ___0_other;
		(&V_0)->____intValue_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, ((int32_t)32767)));
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_1 = V_0;
		V_1 = L_1;
		goto IL_001b;
	}

IL_001b:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_2 = V_1;
		return L_2;
	}
}
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyValue::op_Implicit(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyValue_op_Implicit_m29A5DE8027F986F1251009072C203966CA6B2CE4 (uint32_t ___0_other, const RuntimeMethod* method) 
{
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41));
		uint32_t L_0 = ___0_other;
		(&V_0)->____intValue_0 = L_0;
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_1 = V_0;
		V_1 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_2 = V_1;
		return L_2;
	}
}
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyValue::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyValue_op_Implicit_mCBC1637AE004264B6DC685D489B3DABF7C40CE8B (int32_t ___0_other, const RuntimeMethod* method) 
{
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41));
		int32_t L_0 = ___0_other;
		(&V_0)->____intValue_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)2147483647LL)));
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_1 = V_0;
		V_1 = L_1;
		goto IL_001b;
	}

IL_001b:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_2 = V_1;
		return L_2;
	}
}
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyValue::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyValue_op_Implicit_mABA4998D1201D014DFC2948ED728D84579823AB2 (float ___0_other, const RuntimeMethod* method) 
{
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41));
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___0_other)));
		(&V_0)->____intValue_0 = L_0;
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_1 = V_0;
		V_1 = L_1;
		goto IL_0019;
	}

IL_0019:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_2 = V_1;
		return L_2;
	}
}
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyValue::op_Implicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyValue_op_Implicit_m1A3B9DCC94933A941A05360494BF9C1D6A1F5FE0 (double ___0_other, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		double L_0 = ___0_other;
		V_0 = ((float)L_0);
		il2cpp_codegen_initobj((&V_1), sizeof(PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41));
		int32_t L_1 = *((int32_t*)((uintptr_t)(&V_0)));
		(&V_1)->____intValue_0 = L_1;
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_2 = V_1;
		V_2 = L_2;
		goto IL_001c;
	}

IL_001c:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_3 = V_2;
		return L_3;
	}
}
// System.Int32 TriLibCore.Ply.PlyValue::GetIntValue(TriLibCore.Ply.PlyValue,TriLibCore.Ply.PlyProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyValue_GetIntValue_mC5D8E3A04354E7AD052C4E0DA2DDC26DADC58ABD (PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 ___0_value, PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___1_property, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_0 = ___0_value;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_1 = ___1_property;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Type_0;
		int32_t L_3;
		L_3 = PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 TriLibCore.Ply.PlyValue::GetIntValue(TriLibCore.Ply.PlyValue,TriLibCore.Ply.PlyPropertyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyValue_GetIntValue_mBAD141B59D1599BCFDE8A6B19BA4649A8BE5E40E (PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 ___0_value, int32_t ___1_propertyType, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___1_propertyType;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_003e;
			}
			case 1:
			{
				goto IL_0035;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0035;
			}
			case 4:
			{
				goto IL_005f;
			}
			case 5:
			{
				goto IL_0035;
			}
			case 6:
			{
				goto IL_006e;
			}
			case 7:
			{
				goto IL_006e;
			}
			case 8:
			{
				goto IL_007c;
			}
			case 9:
			{
				goto IL_007c;
			}
		}
	}
	{
		goto IL_0080;
	}

IL_0035:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_3 = ___0_value;
		uint32_t L_4 = L_3.____intValue_0;
		V_2 = L_4;
		goto IL_0084;
	}

IL_003e:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_5 = ___0_value;
		uint32_t L_6 = L_5.____intValue_0;
		V_2 = ((int32_t)((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_6), ((int64_t)((int32_t)127)))));
		goto IL_0084;
	}

IL_004d:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_7 = ___0_value;
		uint32_t L_8 = L_7.____intValue_0;
		V_2 = ((int32_t)((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_8), ((int64_t)((int32_t)32767)))));
		goto IL_0084;
	}

IL_005f:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_9 = ___0_value;
		uint32_t L_10 = L_9.____intValue_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, ((int32_t)2147483647LL)));
		goto IL_0084;
	}

IL_006e:
	{
		uint32_t* L_11 = (&(&___0_value)->____intValue_0);
		float L_12 = *((float*)((uintptr_t)L_11));
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_12);
		goto IL_0084;
	}

IL_007c:
	{
		V_2 = 0;
		goto IL_0084;
	}

IL_0080:
	{
		V_2 = 0;
		goto IL_0084;
	}

IL_0084:
	{
		int32_t L_13 = V_2;
		return L_13;
	}
}
// System.Single TriLibCore.Ply.PlyValue::GetFloatValue(TriLibCore.Ply.PlyValue,TriLibCore.Ply.PlyProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlyValue_GetFloatValue_mCE0211B08C054DE0848AEB2EF5E728F6D28E9830 (PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 ___0_value, PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* ___1_property, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_0 = ___0_value;
		PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* L_1 = ___1_property;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Type_0;
		float L_3;
		L_3 = PlyValue_GetFloatValue_m03C511897C1577C7BAE5C96F005AB99B7EEEE57D(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Single TriLibCore.Ply.PlyValue::GetFloatValue(TriLibCore.Ply.PlyValue,TriLibCore.Ply.PlyPropertyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlyValue_GetFloatValue_m03C511897C1577C7BAE5C96F005AB99B7EEEE57D (PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 ___0_value, int32_t ___1_propertyType, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___1_propertyType;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0040;
			}
			case 1:
			{
				goto IL_0035;
			}
			case 2:
			{
				goto IL_004f;
			}
			case 3:
			{
				goto IL_0035;
			}
			case 4:
			{
				goto IL_0061;
			}
			case 5:
			{
				goto IL_0035;
			}
			case 6:
			{
				goto IL_0072;
			}
			case 7:
			{
				goto IL_0072;
			}
			case 8:
			{
				goto IL_007f;
			}
			case 9:
			{
				goto IL_007f;
			}
		}
	}
	{
		goto IL_0087;
	}

IL_0035:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_3 = ___0_value;
		uint32_t L_4 = L_3.____intValue_0;
		V_2 = ((float)((double)(uint32_t)L_4));
		goto IL_008f;
	}

IL_0040:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_5 = ___0_value;
		uint32_t L_6 = L_5.____intValue_0;
		V_2 = ((float)((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_6), ((int64_t)((int32_t)127)))));
		goto IL_008f;
	}

IL_004f:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_7 = ___0_value;
		uint32_t L_8 = L_7.____intValue_0;
		V_2 = ((float)((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_8), ((int64_t)((int32_t)32767)))));
		goto IL_008f;
	}

IL_0061:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_9 = ___0_value;
		uint32_t L_10 = L_9.____intValue_0;
		V_2 = ((float)((double)(uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, ((int32_t)2147483647LL)))));
		goto IL_008f;
	}

IL_0072:
	{
		uint32_t* L_11 = (&(&___0_value)->____intValue_0);
		float L_12 = *((float*)((uintptr_t)L_11));
		V_2 = L_12;
		goto IL_008f;
	}

IL_007f:
	{
		V_2 = (0.0f);
		goto IL_008f;
	}

IL_0087:
	{
		V_2 = (0.0f);
		goto IL_008f;
	}

IL_008f:
	{
		float L_13 = V_2;
		return L_13;
	}
}
// System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue> TriLibCore.Ply.PlyValue::GetListValue(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.List`1<TriLibCore.Ply.PlyValue>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* PlyValue_GetListValue_m0917530BCED9A22F01949BB493407DCC83C71C2F (int32_t ___0_index, List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* ___1_lists, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* V_0 = NULL;
	List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* G_B3_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_1 = ___1_lists;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_inline(L_1, List_1_get_Count_m2FEB3A28B3B3FAF4D9F34AF11D4D88D2DEBF6B58_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB*)(NULL));
		goto IL_0014;
	}

IL_000d:
	{
		List_1_t4FF1C54FF732A29B740EFAE0990CF8D49D1154C5* L_3 = ___1_lists;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_5;
		L_5 = List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641(L_3, L_4, List_1_get_Item_m7158E76526E37E4FB84F740CB3B89804AAEAA641_RuntimeMethod_var);
		G_B3_0 = L_5;
	}

IL_0014:
	{
		V_0 = G_B3_0;
		goto IL_0017;
	}

IL_0017:
	{
		List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* L_6 = V_0;
		return L_6;
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
// System.Void TriLibCore.Ply.PlyProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyProperty__ctor_mB9404ABEA64DE21D9C16B8FCF8FA95FEA5C8221F (PlyProperty_t780C4C52A4C404E2D8C5EC0D9746BB8B0766E362* __this, const RuntimeMethod* method) 
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
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Ply.PlyRootModel::get_AllModels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyRootModel_get_AllModels_m8BA54C38D62A91E6EA514CB8BEF435C900EDCA94 (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllModelsU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyRootModel::set_AllModels(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyRootModel_set_AllModels_mE90ADC9ED99A62E095C884039C960256DBB04C3F (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CAllModelsU3Ek__BackingField_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllModelsU3Ek__BackingField_17), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup> TriLibCore.Ply.PlyRootModel::get_AllGeometryGroups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyRootModel_get_AllGeometryGroups_m21829E15CD622B14B2013F12CCBD3B6CCAC25FCE (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllGeometryGroupsU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyRootModel::set_AllGeometryGroups(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyRootModel_set_AllGeometryGroups_m44BF8C7B4B75BCAA1C25B38D31F5FB90019FD3F1 (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CAllGeometryGroupsU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllGeometryGroupsU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation> TriLibCore.Ply.PlyRootModel::get_AllAnimations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyRootModel_get_AllAnimations_m80B1C9A7DFEB22568B6F14424FFFBB6B6A849CFB (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllAnimationsU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyRootModel::set_AllAnimations(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyRootModel_set_AllAnimations_mD0FA305B4006E1D24C396B6616E8D00FE1C40BC0 (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CAllAnimationsU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllAnimationsU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial> TriLibCore.Ply.PlyRootModel::get_AllMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyRootModel_get_AllMaterials_m1FFB3F75554502875DFB152BD2066E4975392DA4 (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllMaterialsU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyRootModel::set_AllMaterials(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyRootModel_set_AllMaterials_m30733607EFAAACE9110C2452A299D1D47D799C53 (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CAllMaterialsU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllMaterialsU3Ek__BackingField_20), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture> TriLibCore.Ply.PlyRootModel::get_AllTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyRootModel_get_AllTextures_mB07F64685BC1D4D272E488255C175DACC7DCF369 (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllTexturesU3Ek__BackingField_21;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyRootModel::set_AllTextures(System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyRootModel_set_AllTextures_m7646524ECF24096720D3C48A840F554283D6212E (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CAllTexturesU3Ek__BackingField_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllTexturesU3Ek__BackingField_21), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ICamera> TriLibCore.Ply.PlyRootModel::get_AllCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyRootModel_get_AllCameras_mB6F19E15EA2D7C834771991CF8372FF417C830FB (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllCamerasU3Ek__BackingField_22;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyRootModel::set_AllCameras(System.Collections.Generic.IList`1<TriLibCore.Interfaces.ICamera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyRootModel_set_AllCameras_m20E71DBACF3E11B29CE064CDDC9EF5AD255F3A6E (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CAllCamerasU3Ek__BackingField_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllCamerasU3Ek__BackingField_22), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ILight> TriLibCore.Ply.PlyRootModel::get_AllLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyRootModel_get_AllLights_mB73ABF8C75AD11B2AE5345AB5AA85B99A2C0F949 (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllLightsU3Ek__BackingField_23;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyRootModel::set_AllLights(System.Collections.Generic.IList`1<TriLibCore.Interfaces.ILight>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyRootModel_set_AllLights_mE52C8D811F086721B5BCC0C8FAB4B863A9BBA0E8 (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CAllLightsU3Ek__BackingField_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllLightsU3Ek__BackingField_23), (void*)L_0);
		return;
	}
}
// System.Void TriLibCore.Ply.PlyRootModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyRootModel__ctor_m70F96F0795DD6B57ADAEE28C419A56033958CEED (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* __this, const RuntimeMethod* method) 
{
	{
		PlyModel__ctor_mEBFCADB0E140C2324D5944AD85D4BED4CE3BC725(__this, NULL);
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
// System.Int32 TriLibCore.Ply.PlyStreamReader::get_Line()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyStreamReader_get_Line_m85F1A411C379BDFFA2DF9B1DD0BAFEDB96C54351 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) 
{
	{
		return 0;
	}
}
// System.Int32 TriLibCore.Ply.PlyStreamReader::get_Column()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyStreamReader_get_Column_mCF0D5AB5A8D9AF918DE62EC471363E144ECD6441 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) 
{
	{
		return 0;
	}
}
// System.Int64 TriLibCore.Ply.PlyStreamReader::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PlyStreamReader_get_Position_m9211CA1BF5C622AACC7B1C9688FE42EB58006B5B (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CPositionU3Ek__BackingField_27;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyStreamReader::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyStreamReader_set_Position_m763DA88CC440E9EAA48B2638BC5D5E717BB8C3F4 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CPositionU3Ek__BackingField_27 = L_0;
		return;
	}
}
// System.Void TriLibCore.Ply.PlyStreamReader::UpdateStringFromCharString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyStreamReader_UpdateStringFromCharString_m48E78B576C5792EE9BEEA23388553D70A8D0D9EF (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____charString_25;
		PlyStreamReader_CopyCharStreamToString_mDEACAF07AF4EE3BA8B0378893465CF46BBEC3434(__this, L_0, ((int32_t)24), NULL);
		return;
	}
}
// System.Void TriLibCore.Ply.PlyStreamReader::CopyCharStreamToString(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyStreamReader_CopyCharStreamToString_mDEACAF07AF4EE3BA8B0378893465CF46BBEC3434 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, String_t* ___0_s, int32_t ___1_maxChars, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDDC6F7A9E98335D0828894600921FCF3A934DB0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	void* V_2 = NULL;
	{
		String_t* L_0 = ___0_s;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		int32_t L_2 = ___1_maxChars;
		int32_t L_3;
		L_3 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_1, L_2, NULL);
		___1_maxChars = L_3;
		String_t* L_4 = ___0_s;
		V_1 = L_4;
		String_t* L_5 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_5);
		Il2CppChar* L_6 = V_0;
		if (!L_6)
		{
			goto IL_001f;
		}
	}
	{
		Il2CppChar* L_7 = V_0;
		int32_t L_8;
		L_8 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
		V_0 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_7, L_8));
	}

IL_001f:
	{
		NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A L_9 = __this->____charStream_24;
		void* L_10;
		L_10 = NativeArrayUnsafeUtility_GetUnsafePtr_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDDC6F7A9E98335D0828894600921FCF3A934DB0A(L_9, NativeArrayUnsafeUtility_GetUnsafePtr_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDDC6F7A9E98335D0828894600921FCF3A934DB0A_RuntimeMethod_var);
		V_2 = L_10;
		Il2CppChar* L_11 = V_0;
		int32_t L_12 = ___1_maxChars;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_11, (uint8_t)0, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_12, 2))), NULL);
		Il2CppChar* L_13 = V_0;
		void* L_14 = V_2;
		int32_t L_15 = __this->____charPosition_26;
		int32_t L_16 = ___1_maxChars;
		int32_t L_17;
		L_17 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_15, L_16, NULL);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_13, L_14, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_17, 2))), NULL);
		V_1 = (String_t*)NULL;
		return;
	}
}
// System.String TriLibCore.Ply.PlyStreamReader::GetTokenAsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlyStreamReader_GetTokenAsString_m7E04224D04CDC8D8F4791995529AB17E0CEEDCAA (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		int32_t L_0 = __this->____charPosition_26;
		String_t* L_1;
		L_1 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, 0, L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		int32_t L_3 = __this->____charPosition_26;
		PlyStreamReader_CopyCharStreamToString_mDEACAF07AF4EE3BA8B0378893465CF46BBEC3434(__this, L_2, L_3, NULL);
		String_t* L_4 = V_0;
		V_1 = L_4;
		goto IL_0020;
	}

IL_0020:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.String TriLibCore.Ply.PlyStreamReader::ReadTokenAsString(System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlyStreamReader_ReadTokenAsString_m61AD7477C239499B45C3B1A777871A564718F853 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, bool ___0_required, bool ___1_ignoreLineWrapChar, bool ___2_ignoreElementSeparatorChar, bool ___3_ignoreSpaces, bool ___4_stopOnHyphen, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* G_B3_0 = NULL;
	{
		bool L_0 = ___0_required;
		bool L_1 = ___3_ignoreSpaces;
		int64_t L_2;
		L_2 = PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2(__this, L_0, L_1, NULL);
		V_0 = L_2;
		int64_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_4;
		L_4 = PlyStreamReader_GetTokenAsString_m7E04224D04CDC8D8F4791995529AB17E0CEEDCAA(__this, NULL);
		G_B3_0 = L_4;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_0017:
	{
		V_1 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.Int64 TriLibCore.Ply.PlyStreamReader::ReadToken(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, bool ___0_required, bool ___1_ignoreSpaces, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	Il2CppChar V_4 = 0x0;
	Il2CppChar V_5 = 0x0;
	Il2CppChar V_6 = 0x0;
	int64_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	Il2CppChar V_11 = 0x0;
	Il2CppChar V_12 = 0x0;
	Il2CppChar V_13 = 0x0;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	int64_t V_18 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B36_0 = 0;
	int64_t G_B41_0 = 0;
	{
		__this->____charPosition_26 = 0;
		V_0 = (bool)1;
		V_1 = (bool)0;
		goto IL_00a5;
	}

IL_0011:
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, __this);
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_3 = (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_00a0;
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
				goto IL_007b;
			}
			case 1:
			{
				goto IL_0059;
			}
			case 2:
			{
				goto IL_0099;
			}
			case 3:
			{
				goto IL_0099;
			}
			case 4:
			{
				goto IL_007b;
			}
		}
	}
	{
		goto IL_0051;
	}

IL_0051:
	{
		Il2CppChar L_7 = V_5;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)32))))
		{
			goto IL_007b;
		}
	}
	{
		goto IL_0099;
	}

IL_0059:
	{
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		int64_t L_9;
		L_9 = PlyStreamReader_get_Position_m9211CA1BF5C622AACC7B1C9688FE42EB58006B5B_inline(__this, NULL);
		V_7 = L_9;
		int64_t L_10 = V_7;
		PlyStreamReader_set_Position_m763DA88CC440E9EAA48B2638BC5D5E717BB8C3F4_inline(__this, ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)1))), NULL);
		V_1 = (bool)1;
		V_0 = (bool)0;
		goto IL_009d;
	}

IL_007b:
	{
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		int64_t L_12;
		L_12 = PlyStreamReader_get_Position_m9211CA1BF5C622AACC7B1C9688FE42EB58006B5B_inline(__this, NULL);
		V_7 = L_12;
		int64_t L_13 = V_7;
		PlyStreamReader_set_Position_m763DA88CC440E9EAA48B2638BC5D5E717BB8C3F4_inline(__this, ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)1))), NULL);
		goto IL_009d;
	}

IL_0099:
	{
		V_0 = (bool)0;
		goto IL_009d;
	}

IL_009d:
	{
		goto IL_00a4;
	}

IL_00a0:
	{
		V_0 = (bool)0;
	}

IL_00a4:
	{
	}

IL_00a5:
	{
		bool L_14 = V_0;
		V_8 = L_14;
		bool L_15 = V_8;
		if (L_15)
		{
			goto IL_0011;
		}
	}
	{
		bool L_16 = V_1;
		if (L_16)
		{
			goto IL_00bd;
		}
	}
	{
		bool L_17;
		L_17 = StreamReader_get_EndOfStream_mAE054431BF21158178EAA2A6872F14A9ED6A3C3E(__this, NULL);
		G_B16_0 = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		goto IL_00be;
	}

IL_00bd:
	{
		G_B16_0 = 0;
	}

IL_00be:
	{
		V_0 = (bool)G_B16_0;
		goto IL_01d4;
	}

IL_00c4:
	{
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, __this);
		V_9 = L_18;
		int32_t L_19 = V_9;
		V_10 = (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_10;
		if (!L_20)
		{
			goto IL_01cf;
		}
	}
	{
		int32_t L_21 = V_9;
		V_11 = ((int32_t)(uint16_t)L_21);
		Il2CppChar L_22 = V_11;
		V_13 = L_22;
		Il2CppChar L_23 = V_13;
		V_12 = L_23;
		Il2CppChar L_24 = V_12;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_24, ((int32_t)9))))
		{
			case 0:
			{
				goto IL_013d;
			}
			case 1:
			{
				goto IL_0114;
			}
			case 2:
			{
				goto IL_018c;
			}
			case 3:
			{
				goto IL_018c;
			}
			case 4:
			{
				goto IL_011c;
			}
		}
	}
	{
		goto IL_010c;
	}

IL_010c:
	{
		Il2CppChar L_25 = V_12;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)32))))
		{
			goto IL_013d;
		}
	}
	{
		goto IL_018c;
	}

IL_0114:
	{
		V_0 = (bool)0;
		goto IL_01cc;
	}

IL_011c:
	{
		int32_t L_26;
		L_26 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		int64_t L_27;
		L_27 = PlyStreamReader_get_Position_m9211CA1BF5C622AACC7B1C9688FE42EB58006B5B_inline(__this, NULL);
		V_7 = L_27;
		int64_t L_28 = V_7;
		PlyStreamReader_set_Position_m763DA88CC440E9EAA48B2638BC5D5E717BB8C3F4_inline(__this, ((int64_t)il2cpp_codegen_add(L_28, ((int64_t)1))), NULL);
		goto IL_01cc;
	}

IL_013d:
	{
		bool L_29 = ___1_ignoreSpaces;
		V_14 = L_29;
		bool L_30 = V_14;
		if (!L_30)
		{
			goto IL_0186;
		}
	}
	{
		NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A* L_31 = (&__this->____charStream_24);
		int32_t L_32 = __this->____charPosition_26;
		V_15 = L_32;
		int32_t L_33 = V_15;
		__this->____charPosition_26 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		int32_t L_34 = V_15;
		Il2CppChar L_35 = V_11;
		IL2CPP_NATIVEARRAY_SET_ITEM(Il2CppChar, (L_31)->___m_Buffer_0, L_34, (L_35));
		int32_t L_36;
		L_36 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		int64_t L_37;
		L_37 = PlyStreamReader_get_Position_m9211CA1BF5C622AACC7B1C9688FE42EB58006B5B_inline(__this, NULL);
		V_7 = L_37;
		int64_t L_38 = V_7;
		PlyStreamReader_set_Position_m763DA88CC440E9EAA48B2638BC5D5E717BB8C3F4_inline(__this, ((int64_t)il2cpp_codegen_add(L_38, ((int64_t)1))), NULL);
		goto IL_018a;
	}

IL_0186:
	{
		V_0 = (bool)0;
	}

IL_018a:
	{
		goto IL_01cc;
	}

IL_018c:
	{
		NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A* L_39 = (&__this->____charStream_24);
		int32_t L_40 = __this->____charPosition_26;
		V_15 = L_40;
		int32_t L_41 = V_15;
		__this->____charPosition_26 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_15;
		Il2CppChar L_43 = V_11;
		IL2CPP_NATIVEARRAY_SET_ITEM(Il2CppChar, (L_39)->___m_Buffer_0, L_42, (L_43));
		int32_t L_44;
		L_44 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		int64_t L_45;
		L_45 = PlyStreamReader_get_Position_m9211CA1BF5C622AACC7B1C9688FE42EB58006B5B_inline(__this, NULL);
		V_7 = L_45;
		int64_t L_46 = V_7;
		PlyStreamReader_set_Position_m763DA88CC440E9EAA48B2638BC5D5E717BB8C3F4_inline(__this, ((int64_t)il2cpp_codegen_add(L_46, ((int64_t)1))), NULL);
		goto IL_01cc;
	}

IL_01cc:
	{
		goto IL_01d3;
	}

IL_01cf:
	{
		V_0 = (bool)0;
	}

IL_01d3:
	{
	}

IL_01d4:
	{
		bool L_47 = V_0;
		V_16 = L_47;
		bool L_48 = V_16;
		if (L_48)
		{
			goto IL_00c4;
		}
	}
	{
		bool L_49 = ___0_required;
		if (!L_49)
		{
			goto IL_01ec;
		}
	}
	{
		int32_t L_50 = __this->____charPosition_26;
		G_B36_0 = ((((int32_t)L_50) == ((int32_t)0))? 1 : 0);
		goto IL_01ed;
	}

IL_01ec:
	{
		G_B36_0 = 0;
	}

IL_01ed:
	{
		V_17 = (bool)G_B36_0;
		bool L_51 = V_17;
		if (!L_51)
		{
			goto IL_021a;
		}
	}
	{
		int32_t L_52;
		L_52 = PlyStreamReader_get_Line_m85F1A411C379BDFFA2DF9B1DD0BAFEDB96C54351(__this, NULL);
		int32_t L_53 = L_52;
		RuntimeObject* L_54 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_53);
		int32_t L_55;
		L_55 = PlyStreamReader_get_Column_mCF0D5AB5A8D9AF918DE62EC471363E144ECD6441(__this, NULL);
		int32_t L_56 = L_55;
		RuntimeObject* L_57 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_56);
		String_t* L_58;
		L_58 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3063F5F4FAEA0002A9B169DA0D12D52AC6312C1A)), L_54, L_57, NULL);
		Exception_t* L_59 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_59);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_59, L_58, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_59, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2_RuntimeMethod_var)));
	}

IL_021a:
	{
		int32_t L_60 = __this->____charPosition_26;
		if (!L_60)
		{
			goto IL_023f;
		}
	}
	{
		NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A L_61 = __this->____charStream_24;
		int32_t L_62 = __this->____charPosition_26;
		int32_t L_63;
		L_63 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_62, ((int32_t)1024), NULL);
		int64_t L_64;
		L_64 = HashUtils_GetHash_mCEFE61677CF3517B02E25BA0BC632C98C62F8C4E(L_61, L_63, NULL);
		G_B41_0 = L_64;
		goto IL_0241;
	}

IL_023f:
	{
		G_B41_0 = ((int64_t)0);
	}

IL_0241:
	{
		V_18 = G_B41_0;
		goto IL_0245;
	}

IL_0245:
	{
		int64_t L_65 = V_18;
		return L_65;
	}
}
// System.String TriLibCore.Ply.PlyStreamReader::ReadValidTokenAsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlyStreamReader_ReadValidTokenAsString_mFCC30978B59DB8B8F0398C4E771EDB6B32CA4AFD (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	int32_t G_B4_0 = 0;
	{
	}

IL_0001:
	{
		int64_t L_0;
		L_0 = PlyStreamReader_ReadToken_mEBF2512D8BD8968953BD95286A765B35D270C7D2(__this, (bool)0, (bool)0, NULL);
		V_0 = L_0;
		int64_t L_1 = V_0;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		bool L_2;
		L_2 = StreamReader_get_EndOfStream_mAE054431BF21158178EAA2A6872F14A9ED6A3C3E(__this, NULL);
		G_B4_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B4_0 = 0;
	}

IL_001b:
	{
		V_1 = (bool)G_B4_0;
		bool L_3 = V_1;
		if (L_3)
		{
			goto IL_0001;
		}
	}
	{
		PlyStreamReader_UpdateStringFromCharString_m48E78B576C5792EE9BEEA23388553D70A8D0D9EF(__this, NULL);
		String_t* L_4 = __this->____charString_25;
		V_2 = L_4;
		goto IL_002f;
	}

IL_002f:
	{
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.Void TriLibCore.Ply.PlyStreamReader::.ctor(TriLibCore.AssetLoaderContext,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyStreamReader__ctor_m7808EFBEB09E7E31FB8EC19A0B4CBFFD8DB57DB1 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___0_assetLoaderContext, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___1_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetLoaderContext_AllocateNativeArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mAD0223A80367EFCF9C419CD368BD1105DF0F1909_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, 0, ((int32_t)24), NULL);
		__this->____charString_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charString_25), (void*)L_0);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___1_stream;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(__this, L_1, NULL);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_2 = ___0_assetLoaderContext;
		NullCheck(L_2);
		NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A L_3;
		L_3 = AssetLoaderContext_AllocateNativeArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mAD0223A80367EFCF9C419CD368BD1105DF0F1909(L_2, ((int32_t)1024), 4, AssetLoaderContext_AllocateNativeArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mAD0223A80367EFCF9C419CD368BD1105DF0F1909_RuntimeMethod_var);
		__this->____charStream_24 = L_3;
		return;
	}
}
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyStreamReader::ToSByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyStreamReader_ToSByte_mE0CBD4AA736167D961A334A686A4851A2B107FD8 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	bool V_1 = false;
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		String_t* L_0;
		L_0 = PlyStreamReader_ReadValidTokenAsString_mFCC30978B59DB8B8F0398C4E771EDB6B32CA4AFD(__this, NULL);
		String_t* L_1 = __this->____charString_25;
		bool L_2;
		L_2 = SByte_TryParse_m9C205D94AB4FF1CA82EA082E38DD01A493A77ED6(L_1, (&V_0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_4;
		L_4 = PlyValue_op_Implicit_m97A5AB6B334327E421C58927E78C773B6D809B53((int8_t)((int32_t)127), NULL);
		V_2 = L_4;
		goto IL_0030;
	}

IL_0027:
	{
		int8_t L_5 = V_0;
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_6;
		L_6 = PlyValue_op_Implicit_m97A5AB6B334327E421C58927E78C773B6D809B53(L_5, NULL);
		V_2 = L_6;
		goto IL_0030;
	}

IL_0030:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_7 = V_2;
		return L_7;
	}
}
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyStreamReader::ToByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyStreamReader_ToByte_mC8D36F8FD97FEBF03092492FCCFC77F27C669B31 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	bool V_1 = false;
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		String_t* L_0;
		L_0 = PlyStreamReader_ReadValidTokenAsString_mFCC30978B59DB8B8F0398C4E771EDB6B32CA4AFD(__this, NULL);
		String_t* L_1 = __this->____charString_25;
		bool L_2;
		L_2 = Byte_TryParse_mB1716E3B6714F20DF6C1FEDDC4A76AA78D5EA87B(L_1, (&V_0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_4;
		L_4 = PlyValue_op_Implicit_m9E7C391E8C4BAEF13B69CC7B0CEC87F250BD46A6((uint8_t)((int32_t)255), NULL);
		V_2 = L_4;
		goto IL_0033;
	}

IL_002a:
	{
		uint8_t L_5 = V_0;
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_6;
		L_6 = PlyValue_op_Implicit_m9E7C391E8C4BAEF13B69CC7B0CEC87F250BD46A6(L_5, NULL);
		V_2 = L_6;
		goto IL_0033;
	}

IL_0033:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_7 = V_2;
		return L_7;
	}
}
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyStreamReader::ToInt16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyStreamReader_ToInt16_m15E305684870C3A4B737A95DA4212701C45830F9 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	bool V_1 = false;
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		String_t* L_0;
		L_0 = PlyStreamReader_ReadValidTokenAsString_mFCC30978B59DB8B8F0398C4E771EDB6B32CA4AFD(__this, NULL);
		String_t* L_1 = __this->____charString_25;
		bool L_2;
		L_2 = Int16_TryParse_m7190AF18437CE1B43990B99E5D992E31485E77AE(L_1, (&V_0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_4;
		L_4 = PlyValue_op_Implicit_m78378AA8D6DDCEC09907E0927A06ED49418D4635((int16_t)((int32_t)32767), NULL);
		V_2 = L_4;
		goto IL_0033;
	}

IL_002a:
	{
		int16_t L_5 = V_0;
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_6;
		L_6 = PlyValue_op_Implicit_m78378AA8D6DDCEC09907E0927A06ED49418D4635(L_5, NULL);
		V_2 = L_6;
		goto IL_0033;
	}

IL_0033:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_7 = V_2;
		return L_7;
	}
}
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyStreamReader::ToUInt16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyStreamReader_ToUInt16_m5E5F5DDAFA6CBF735A852FED4B1712FC914301AD (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	bool V_1 = false;
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		String_t* L_0;
		L_0 = PlyStreamReader_ReadValidTokenAsString_mFCC30978B59DB8B8F0398C4E771EDB6B32CA4AFD(__this, NULL);
		String_t* L_1 = __this->____charString_25;
		bool L_2;
		L_2 = UInt16_TryParse_m02DD9A625527B4019B32ACC9A5D3B09D72B2FBB6(L_1, (&V_0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_4;
		L_4 = PlyValue_op_Implicit_m8B2B7375CC217E6E3345C812C647F7BB51FC0DC6((uint16_t)((int32_t)65535), NULL);
		V_2 = L_4;
		goto IL_0033;
	}

IL_002a:
	{
		uint16_t L_5 = V_0;
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_6;
		L_6 = PlyValue_op_Implicit_m8B2B7375CC217E6E3345C812C647F7BB51FC0DC6(L_5, NULL);
		V_2 = L_6;
		goto IL_0033;
	}

IL_0033:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_7 = V_2;
		return L_7;
	}
}
// System.Int32 TriLibCore.Ply.PlyStreamReader::ToInt32NoValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyStreamReader_ToInt32NoValue_m3D62B7AC2B68E0C65837ED4B738D26A02C897086 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0;
		L_0 = PlyStreamReader_ReadValidTokenAsString_mFCC30978B59DB8B8F0398C4E771EDB6B32CA4AFD(__this, NULL);
		String_t* L_1 = __this->____charString_25;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4(L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyStreamReader::ToInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyStreamReader_ToInt32_m9F2C9B5DB1E8C1E858934D60E8365C24B5F96E05 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		String_t* L_0 = __this->____charString_25;
		bool L_1;
		L_1 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_0, (&V_0), NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_3;
		L_3 = PlyValue_op_Implicit_mCBC1637AE004264B6DC685D489B3DABF7C40CE8B(((int32_t)2147483647LL), NULL);
		V_2 = L_3;
		goto IL_002c;
	}

IL_0023:
	{
		int32_t L_4 = V_0;
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_5;
		L_5 = PlyValue_op_Implicit_mCBC1637AE004264B6DC685D489B3DABF7C40CE8B(L_4, NULL);
		V_2 = L_5;
		goto IL_002c;
	}

IL_002c:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_6 = V_2;
		return L_6;
	}
}
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyStreamReader::ToUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyStreamReader_ToUInt32_mFE918D4E08D1EBBB095A75F4A6F4B0B0FF31E7AA (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		String_t* L_0;
		L_0 = PlyStreamReader_ReadValidTokenAsString_mFCC30978B59DB8B8F0398C4E771EDB6B32CA4AFD(__this, NULL);
		String_t* L_1 = __this->____charString_25;
		bool L_2;
		L_2 = UInt32_TryParse_mD470E3BAC9F792AB0BC616510AE3FA78C3CCB1E9(L_1, (&V_0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_4;
		L_4 = PlyValue_op_Implicit_m29A5DE8027F986F1251009072C203966CA6B2CE4((-1), NULL);
		V_2 = L_4;
		goto IL_002f;
	}

IL_0026:
	{
		uint32_t L_5 = V_0;
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_6;
		L_6 = PlyValue_op_Implicit_m29A5DE8027F986F1251009072C203966CA6B2CE4(L_5, NULL);
		V_2 = L_6;
		goto IL_002f;
	}

IL_002f:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_7 = V_2;
		return L_7;
	}
}
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyStreamReader::ToSingle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyStreamReader_ToSingle_m90ED33B30955513C54C102F1CF12293B87ED840D (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0;
		L_0 = PlyStreamReader_ReadValidTokenAsString_mFCC30978B59DB8B8F0398C4E771EDB6B32CA4AFD(__this, NULL);
		String_t* L_1 = __this->____charString_25;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = Convert_ToSingle_m8416CDFFC7641BD79BE63F39D5FAEE28986FC636(L_1, L_2, NULL);
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_4;
		L_4 = PlyValue_op_Implicit_mABA4998D1201D014DFC2948ED728D84579823AB2(L_3, NULL);
		V_0 = L_4;
		goto IL_0020;
	}

IL_0020:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_5 = V_0;
		return L_5;
	}
}
// TriLibCore.Ply.PlyValue TriLibCore.Ply.PlyStreamReader::ToDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 PlyStreamReader_ToDouble_m24378FB1F25B30F14E4F1C4EDE8A61FE4AB2C467 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0;
		L_0 = PlyStreamReader_ReadValidTokenAsString_mFCC30978B59DB8B8F0398C4E771EDB6B32CA4AFD(__this, NULL);
		String_t* L_1 = __this->____charString_25;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = Convert_ToDouble_mAA66A3AA3A6E53529E4F632BC69582B4B70D32B7(L_1, L_2, NULL);
		V_0 = L_3;
		double L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F_il2cpp_TypeInfo_var);
		double L_5 = ((PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F_StaticFields*)il2cpp_codegen_static_fields_for(PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F_il2cpp_TypeInfo_var))->___PlyConversionPrecision_10;
		V_0 = ((double)il2cpp_codegen_multiply(L_4, L_5));
		double L_6 = V_0;
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_7;
		L_7 = PlyValue_op_Implicit_m1A3B9DCC94933A941A05360494BF9C1D6A1F5FE0(L_6, NULL);
		V_1 = L_7;
		goto IL_002a;
	}

IL_002a:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_8 = V_1;
		return L_8;
	}
}
// System.Void TriLibCore.Ply.PlyStreamReader::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyStreamReader_Dispose_m2E082C502267A1DE9BE817116BFF6F3B1B64EB69 (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m11184C5FB1A1F3809B982476408F08F599F377F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A* L_0 = (&__this->____charStream_24);
		NativeArray_1_Dispose_m11184C5FB1A1F3809B982476408F08F599F377F0(L_0, NativeArray_1_Dispose_m11184C5FB1A1F3809B982476408F08F599F377F0_RuntimeMethod_var);
		bool L_1 = ___0_disposing;
		StreamReader_Dispose_mB7BA2F3F47444F6D00457E04462BC097EEE6D27C(__this, L_1, NULL);
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
// System.String TriLibCore.Ply.PlyTexture::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlyTexture_get_Name_mBEFD4F597E9EFA732438C3FF7C61017F48D30B7E (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyTexture::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyTexture_set_Name_m2A4A4F5872D9CCDCA7F8501216FD640B07E8CB94 (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean TriLibCore.Ply.PlyTexture::get_Used()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlyTexture_get_Used_mB6D66B20FF9AC7347214BBCFC146B38E60420B43 (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CUsedU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyTexture::set_Used(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyTexture_set_Used_m2158084FEC62D1A067BE6B97270C3CA8F3CF31D1 (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CUsedU3Ek__BackingField_1 = L_0;
		return;
	}
}
// TriLibCore.Interfaces.ITexture TriLibCore.Ply.PlyTexture::GetSubTexture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyTexture_GetSubTexture_m3E72C0D206B1A6F808BEA3B7B1266AEB3FB3392A (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		V_0 = __this;
		goto IL_0005;
	}

IL_0005:
	{
		RuntimeObject* L_0 = V_0;
		return L_0;
	}
}
// System.Int32 TriLibCore.Ply.PlyTexture::GetSubTextureCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyTexture_GetSubTextureCount_m4538FFA4B3A00E6D9E364BE8F4DC15CA466C9128 (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0005;
	}

IL_0005:
	{
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Single TriLibCore.Ply.PlyTexture::GetWeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlyTexture_GetWeight_mFFDC9B3528C1820C1017E51AC31FBA0E55365FC8 (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (1.0f);
		goto IL_0009;
	}

IL_0009:
	{
		float L_0 = V_0;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyTexture::AddTexture(TriLibCore.Interfaces.ITexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyTexture_AddTexture_m73D9A56E388C91ABB83779F754A5998C5001F474 (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, RuntimeObject* ___0_texture, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Byte[] TriLibCore.Ply.PlyTexture::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PlyTexture_get_Data_mD852605F1E6DA0235B754942A52CF54434F46332 (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CDataU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyTexture::set_Data(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyTexture_set_Data_mBDBC63F40B5E78210872E05F5A9FBC585ACD278B (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.IO.Stream TriLibCore.Ply.PlyTexture::get_DataStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* PlyTexture_get_DataStream_m5A17DA76F612299803469FAEFDEA709C98107401 (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___U3CDataStreamU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyTexture::set_DataStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyTexture_set_DataStream_mCCB91D79559CFEC8DFC72830801BB5B7FC969AEA (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_value, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_value;
		__this->___U3CDataStreamU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataStreamU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String TriLibCore.Ply.PlyTexture::get_Filename()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlyTexture_get_Filename_mC7B533AE00B2654EC706CFF6F3DC659B7EA9E58D (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CFilenameU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyTexture::set_Filename(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyTexture_set_Filename_m7FA26BB14F1E9F04652E891D67858519F9040BD8 (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CFilenameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFilenameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// UnityEngine.TextureWrapMode TriLibCore.Ply.PlyTexture::get_WrapModeU()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyTexture_get_WrapModeU_mD309B33EE013C6901560746D7587D1928E5EA424 (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CWrapModeUU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyTexture::set_WrapModeU(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyTexture_set_WrapModeU_m6A8A5818FA81F54CE6928BA4AAC3B789C23AB721 (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CWrapModeUU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.TextureWrapMode TriLibCore.Ply.PlyTexture::get_WrapModeV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyTexture_get_WrapModeV_mC4A07729631007DA9D3E4C70B17EDD36C71A821D (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CWrapModeVU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyTexture::set_WrapModeV(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyTexture_set_WrapModeV_m89975611FF6BA75906DCC8F7180E2B8FDAA80738 (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CWrapModeVU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.Vector2 TriLibCore.Ply.PlyTexture::get_Tiling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PlyTexture_get_Tiling_m6F18FB67137D31A66961AB895D5BC3BBB0D89382 (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CTilingU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyTexture::set_Tiling(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyTexture_set_Tiling_m558A662EBFEC677CAA22BBAA7394CCA7A27C59A0 (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CTilingU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.Vector2 TriLibCore.Ply.PlyTexture::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PlyTexture_get_Offset_mC60B9CD51C47BDD9ACBD1E96772CA66776EEA6F7 (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3COffsetU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyTexture::set_Offset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyTexture_set_Offset_m01706A91BF5644A3F4C87D38F8DA69E63614B0EB (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3COffsetU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Int32 TriLibCore.Ply.PlyTexture::get_TextureId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyTexture_get_TextureId_mBFF620CF2B87395C2336C48C3993CF2F68C3E7AE (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTextureIdU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyTexture::set_TextureId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyTexture_set_TextureId_m82D3E193C192B94A0CB70BAD0DD4D379CCFCE93D (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CTextureIdU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.String TriLibCore.Ply.PlyTexture::get_ResolvedFilename()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlyTexture_get_ResolvedFilename_mCC29A905ACAEBB24C79F3058B53DE90D983B7433 (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CResolvedFilenameU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyTexture::set_ResolvedFilename(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyTexture_set_ResolvedFilename_m6CFA9390509ECD95FC2AF54598A802CEFD9ED02B (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CResolvedFilenameU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResolvedFilenameU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.Boolean TriLibCore.Ply.PlyTexture::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlyTexture_get_IsValid_m81D09C71AD5586D2BCF45EAD378C33CD5CFBF8E4 (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = PlyTexture_get_Filename_mC7B533AE00B2654EC706CFF6F3DC659B7EA9E58D_inline(__this, NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean TriLibCore.Ply.PlyTexture::get_HasAlpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlyTexture_get_HasAlpha_mA3F510A77B3BB8BF37E7BE0830C63118BB2EEB52 (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CHasAlphaU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyTexture::set_HasAlpha(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyTexture_set_HasAlpha_mFE4A6378088857B93F1C9643E936D697134BC1FA (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CHasAlphaU3Ek__BackingField_11 = L_0;
		return;
	}
}
// TriLibCore.General.TextureFormat TriLibCore.Ply.PlyTexture::get_TextureFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyTexture_get_TextureFormat_m5892960AFA4FCAFC1615AF75C20588A62964835B (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTextureFormatU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.PlyTexture::set_TextureFormat(TriLibCore.General.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyTexture_set_TextureFormat_mA335B2FEF86388906CDE6E9D5E27CF67B47E49F4 (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CTextureFormatU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Boolean TriLibCore.Ply.PlyTexture::Equals(TriLibCore.Interfaces.ITexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlyTexture_Equals_mF5DDD90F3482EE47AF94B0B5C612A8664E339346 (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		bool L_1;
		L_1 = TextureComparators_TextureEquals_m566CCA88570A7A060514DCAEF48AE3170D743679(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean TriLibCore.Ply.PlyTexture::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlyTexture_Equals_m8C4120AD837109F0CEF20033A00072AC3ECEC8BB (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_obj;
		bool L_1;
		L_1 = TextureComparators_Equals_mA1D187553F7AC8EB27F3C8D0F2D1316C5E05E4AC(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 TriLibCore.Ply.PlyTexture::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyTexture_GetHashCode_mD9596B678E88C65D4A87005AF2DBADDF35F7E169 (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TextureComparators_GetHashCode_mF57C0A300F03E349E694DB594CA2FF73427BECA3(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void TriLibCore.Ply.PlyTexture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyTexture__ctor_m038AAFCCC1A0BFA24B9DB741380AA1D0CDE29AFD (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CWrapModeUU3Ek__BackingField_5 = 0;
		__this->___U3CWrapModeVU3Ek__BackingField_6 = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		__this->___U3CTilingU3Ek__BackingField_7 = L_0;
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
// System.Void TriLibCore.Ply.Program::Main(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Program_Main_m9CFEA665C57B50AFD2C57ADF4534A642D295646B (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_args, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void TriLibCore.Ply.Program::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Program__ctor_m65C48C6E4A2BAA4D6AC13AE1AC7BCED07F458779 (Program_tF221987E986ED204179045A85D41CBDBA2C0B625* __this, const RuntimeMethod* method) 
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
// System.String[] TriLibCore.Ply.Reader.PlyReader::GetExtensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* PlyReader_GetExtensions_mADB809B44873C6BAB6EB3974C5B294FD0BA7808F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BEF98DAC2D5CE8B3F877FFD83A459125B80DA8F);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral4BEF98DAC2D5CE8B3F877FFD83A459125B80DA8F);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4BEF98DAC2D5CE8B3F877FFD83A459125B80DA8F);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		return L_2;
	}
}
// System.String TriLibCore.Ply.Reader.PlyReader::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlyReader_get_Name_m8A13FB02194F4DAC2F7FEB1B50242E3C28273811 (PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE045B603FBBCEA228EE757E3C5C11BD708A2FA34);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralE045B603FBBCEA228EE757E3C5C11BD708A2FA34;
	}
}
// System.Type TriLibCore.Ply.Reader.PlyReader::get_LoadingStepEnumType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlyReader_get_LoadingStepEnumType_mDD3C69A2F46EE7D798ABD8FF82BDC1334251ED40 (PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessingSteps_t66470AEDB7538A34AC55F1AB85D626C1264892F4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ProcessingSteps_t66470AEDB7538A34AC55F1AB85D626C1264892F4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Ply.Reader.PlyReader::ReadStream(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyReader_ReadStream_mC803A450BD72518AE6C3C7EF624D694F5E9FCFA7 (PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___1_assetLoaderContext, String_t* ___2_filename, Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___3_onProgress, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_1 = ___1_assetLoaderContext;
		String_t* L_2 = ___2_filename;
		Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* L_3 = ___3_onProgress;
		RuntimeObject* L_4;
		L_4 = ReaderBase_ReadStream_m725378DF096B29E0DB3BE3FB9E5F1E37747883F4(__this, L_0, L_1, L_2, L_3, NULL);
		ReaderBase_SetupStream_mCDC78453E3657CB3FBB713C40FB50B4941455942(__this, (&___0_stream), NULL);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_5 = (PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F*)il2cpp_codegen_object_new(PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		PlyProcessor__ctor_mEFE18083343802C21877A430538A1304EC1DC5E7(L_5, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___0_stream;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = PlyProcessor_Process_m5EC73F6D1F63A911A1C86747BB95E7948D0D0763(L_5, __this, L_6, NULL);
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
// TriLibCore.Interfaces.IRootModel TriLibCore.Ply.Reader.PlyReader::CreateRootModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyReader_CreateRootModel_m42A94C2A8E4CF0D4129310F170C1B33D232272BD (PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* L_0 = (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237*)il2cpp_codegen_object_new(PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PlyRootModel__ctor_m70F96F0795DD6B57ADAEE28C419A56033958CEED(L_0, NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.IEnumerator TriLibCore.Ply.Reader.PlyReader::ReadStream_Coroutine(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyReader_ReadStream_Coroutine_mB91109E608391F0DBE1C00857AFB40C93515A040 (PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___1_assetLoaderContext, String_t* ___2_filename, Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___3_onProgress, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReadStream_CoroutineU3Ed__9_tAEA60AB19AEF8EFAC748450AF70E3FCB0388A65C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReadStream_CoroutineU3Ed__9_tAEA60AB19AEF8EFAC748450AF70E3FCB0388A65C* L_0 = (U3CReadStream_CoroutineU3Ed__9_tAEA60AB19AEF8EFAC748450AF70E3FCB0388A65C*)il2cpp_codegen_object_new(U3CReadStream_CoroutineU3Ed__9_tAEA60AB19AEF8EFAC748450AF70E3FCB0388A65C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CReadStream_CoroutineU3Ed__9__ctor_mFC98791CD9C75E875795D972CD0E38FF0EF187DF(L_0, 0, NULL);
		U3CReadStream_CoroutineU3Ed__9_tAEA60AB19AEF8EFAC748450AF70E3FCB0388A65C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_6), (void*)__this);
		U3CReadStream_CoroutineU3Ed__9_tAEA60AB19AEF8EFAC748450AF70E3FCB0388A65C* L_2 = L_1;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___0_stream;
		NullCheck(L_2);
		L_2->___stream_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___stream_2), (void*)L_3);
		U3CReadStream_CoroutineU3Ed__9_tAEA60AB19AEF8EFAC748450AF70E3FCB0388A65C* L_4 = L_2;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_5 = ___1_assetLoaderContext;
		NullCheck(L_4);
		L_4->___assetLoaderContext_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___assetLoaderContext_3), (void*)L_5);
		U3CReadStream_CoroutineU3Ed__9_tAEA60AB19AEF8EFAC748450AF70E3FCB0388A65C* L_6 = L_4;
		String_t* L_7 = ___2_filename;
		NullCheck(L_6);
		L_6->___filename_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___filename_4), (void*)L_7);
		U3CReadStream_CoroutineU3Ed__9_tAEA60AB19AEF8EFAC748450AF70E3FCB0388A65C* L_8 = L_6;
		Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* L_9 = ___3_onProgress;
		NullCheck(L_8);
		L_8->___onProgress_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___onProgress_5), (void*)L_9);
		return L_8;
	}
}
// System.Void TriLibCore.Ply.Reader.PlyReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyReader__ctor_mCFE77FCB6113FDA8EF94DE3F7516694E1C75469C (PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* __this, const RuntimeMethod* method) 
{
	{
		ReaderBase__ctor_m5C4FE7A4BC205B65DAB56FF3CC5202D0B04937DA(__this, NULL);
		return;
	}
}
// System.Void TriLibCore.Ply.Reader.PlyReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyReader__cctor_mD8936B843C388C5AE598F1AC092159D635840463 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F_StaticFields*)il2cpp_codegen_static_fields_for(PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F_il2cpp_TypeInfo_var))->___PlyConversionPrecision_10 = (1.0);
		return;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Ply.Reader.PlyReader::<>n__0(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlyReader_U3CU3En__0_m2FA457704C91A75A69B9E792BFD3D80E21B997D4 (PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___1_assetLoaderContext, String_t* ___2_filename, Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___3_onProgress, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_1 = ___1_assetLoaderContext;
		String_t* L_2 = ___2_filename;
		Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* L_3 = ___3_onProgress;
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
// System.Void TriLibCore.Ply.Reader.PlyReader/<ReadStream_Coroutine>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadStream_CoroutineU3Ed__9__ctor_mFC98791CD9C75E875795D972CD0E38FF0EF187DF (U3CReadStream_CoroutineU3Ed__9_tAEA60AB19AEF8EFAC748450AF70E3FCB0388A65C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TriLibCore.Ply.Reader.PlyReader/<ReadStream_Coroutine>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadStream_CoroutineU3Ed__9_System_IDisposable_Dispose_m10613D918BDA3E8BB20AA26414B8F44D5FD5AA75 (U3CReadStream_CoroutineU3Ed__9_tAEA60AB19AEF8EFAC748450AF70E3FCB0388A65C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TriLibCore.Ply.Reader.PlyReader/<ReadStream_Coroutine>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReadStream_CoroutineU3Ed__9_MoveNext_m94142498CD4919698F675F5249210981AAA54AD0 (U3CReadStream_CoroutineU3Ed__9_tAEA60AB19AEF8EFAC748450AF70E3FCB0388A65C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRootModel_t83ED40397FD23448FC9A99336523CC7DE8A841BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F_il2cpp_TypeInfo_var);
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
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_3 = __this->___U3CU3E4__this_6;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___stream_2;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_5 = __this->___assetLoaderContext_3;
		String_t* L_6 = __this->___filename_4;
		Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* L_7 = __this->___onProgress_5;
		NullCheck(L_3);
		RuntimeObject* L_8;
		L_8 = PlyReader_U3CU3En__0_m2FA457704C91A75A69B9E792BFD3D80E21B997D4(L_3, L_4, L_5, L_6, L_7, NULL);
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_9 = __this->___U3CU3E4__this_6;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE** L_10 = (&__this->___stream_2);
		NullCheck(L_9);
		ReaderBase_SetupStream_mCDC78453E3657CB3FBB713C40FB50B4941455942(L_9, L_10, NULL);
		PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F* L_11 = (PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F*)il2cpp_codegen_object_new(PlyProcessor_t7698B4DBE35BC5D1E9359B4470DA23C60A78159F_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		PlyProcessor__ctor_mEFE18083343802C21877A430538A1304EC1DC5E7(L_11, NULL);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_12 = __this->___assetLoaderContext_3;
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_13 = __this->___U3CU3E4__this_6;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = __this->___stream_2;
		NullCheck(L_11);
		RuntimeObject* L_15;
		L_15 = PlyProcessor_Process_Coroutine_m95FD30337417E682D9FC2B7D4A6ADFB65984EFCB(L_11, L_12, L_13, L_14, NULL);
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
		PlyReader_t928287D5EE9717516589F3156C6D123C66E0C66F* L_19 = __this->___U3CU3E4__this_6;
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
// System.Object TriLibCore.Ply.Reader.PlyReader/<ReadStream_Coroutine>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReadStream_CoroutineU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2203C6E12A327C8A0662D06893676151E55AC86B (U3CReadStream_CoroutineU3Ed__9_tAEA60AB19AEF8EFAC748450AF70E3FCB0388A65C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TriLibCore.Ply.Reader.PlyReader/<ReadStream_Coroutine>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadStream_CoroutineU3Ed__9_System_Collections_IEnumerator_Reset_m14B7D06040613D92BFD729691FCD680F50D5BB43 (U3CReadStream_CoroutineU3Ed__9_tAEA60AB19AEF8EFAC748450AF70E3FCB0388A65C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReadStream_CoroutineU3Ed__9_System_Collections_IEnumerator_Reset_m14B7D06040613D92BFD729691FCD680F50D5BB43_RuntimeMethod_var)));
	}
}
// System.Object TriLibCore.Ply.Reader.PlyReader/<ReadStream_Coroutine>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReadStream_CoroutineU3Ed__9_System_Collections_IEnumerator_get_Current_m498F5714075305E7666A1B69181C26F8F8CC28D8 (U3CReadStream_CoroutineU3Ed__9_tAEA60AB19AEF8EFAC748450AF70E3FCB0388A65C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlyModel_get_Name_mF0BDCE3B91DCB49F6E648F411F06E052FF253F89_inline (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlyTexture_set_Filename_m7FA26BB14F1E9F04652E891D67858519F9040BD8_inline (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CFilenameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFilenameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t PlyStreamReader_get_Position_m9211CA1BF5C622AACC7B1C9688FE42EB58006B5B_inline (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CPositionU3Ek__BackingField_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlyMaterial_set_Index_mEEC9E37FB853F46E7A19C7A52BE8EACD41464726_inline (PlyMaterial_t50F9E5112D02734C27A4CECB738070432DD1BEF6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CIndexU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlyModel_set_Visibility_mB2F9D43D393D00418E2B4A999974A1E18512D0A5_inline (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CVisibilityU3Ek__BackingField_6 = L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlyModel_set_LocalScale_m8055103EC8ADECCC5D3C535C098B33AA2E0275A8_inline (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlyModel_set_LocalRotation_mA70C0956246A032C3C1C7EF5DE31A303ACE92BCB_inline (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_value;
		__this->___U3CLocalRotationU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlyModel_set_GeometryGroup_mC40A2CC9BD75EBA9305AA0FC6E9F1FFD51FDA055_inline (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CGeometryGroupU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGeometryGroupU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlyRootModel_set_AllMaterials_m30733607EFAAACE9110C2452A299D1D47D799C53_inline (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CAllMaterialsU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllMaterialsU3Ek__BackingField_20), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlyRootModel_set_AllTextures_m7646524ECF24096720D3C48A840F554283D6212E_inline (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CAllTexturesU3Ek__BackingField_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllTexturesU3Ek__BackingField_21), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlyRootModel_set_AllGeometryGroups_m44BF8C7B4B75BCAA1C25B38D31F5FB90019FD3F1_inline (PlyRootModel_tB6BD5531F4C5D89335B35E22B166B5B102744237* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CAllGeometryGroupsU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllGeometryGroupsU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlyModel_set_MaterialIndices_m87FB1DB52736B0D10EBF7CA05C04C3B1A321F670_inline (PlyModel_tF7A0A51D92938029A68D524B3EBF3878F1A6F1E2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMaterialIndicesU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMaterialIndicesU3Ek__BackingField_13), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlyStreamReader_set_Position_m763DA88CC440E9EAA48B2638BC5D5E717BB8C3F4_inline (PlyStreamReader_t253A0F366D274097EFB5D6B622476A39FC0DF6D2* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CPositionU3Ek__BackingField_27 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlyTexture_get_Filename_mC7B533AE00B2654EC706CFF6F3DC659B7EA9E58D_inline (PlyTexture_tBDFDD402A28C5B1209AD5A5AC2FC274E3F93CE9C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CFilenameU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mE396DC57C362877713861B0AD2C88728648A8364_gshared_inline (Enumerator_t101EECDB54BD1F67FD91D0D649333AC62D79665D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m37A1197D84857A9512633D2FB5380FCAC7AB381E_gshared_inline (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* __this, PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 ___0_item, const RuntimeMethod* method) 
{
	PlyValueU5BU5D_tE3742EA175D697AD95C6B319F1C6FC18D7BE0382* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		PlyValueU5BU5D_tE3742EA175D697AD95C6B319F1C6FC18D7BE0382* L_1 = (PlyValueU5BU5D_tE3742EA175D697AD95C6B319F1C6FC18D7BE0382*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		PlyValueU5BU5D_tE3742EA175D697AD95C6B319F1C6FC18D7BE0382* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		PlyValueU5BU5D_tE3742EA175D697AD95C6B319F1C6FC18D7BE0382* L_6 = V_0;
		int32_t L_7 = V_1;
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41)L_8);
		return;
	}

IL_0034:
	{
		PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41 L_9 = ___0_item;
		((  void (*) (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB*, PlyValue_tBBD98403161A8F3744AEF3B88BD7E5551E647D41, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m884B5579B75AACDA563355ED79C1E26F7580A820_gshared_inline (List_1_t96CD26CA074FBF4F15AF92A0DA34300AF589BECB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
