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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<TriLibCore.AssetLoaderContext>
struct Action_1_tD39AE6C0C913B7D513756AFCD7E9F0539538D226;
// System.Action`1<TriLibCore.IContextualizedError>
struct Action_1_t3B6442C6168F6F5364512C62A54645843CF93C30;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<TriLibCore.TextureLoadingContext>
struct Action_1_t416AB94B039CAFC6FF5A11741A20E92643D2C0D4;
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
// System.Collections.Generic.Dictionary`2<System.Int32,TriLibCore.Gltf.GltfModel>
struct Dictionary_2_tF02E292412E61E0CEAD729AAEA30E75F26A038B3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Matrix4x4>
struct Dictionary_2_tFA83D9B0331D5487A8CB52C61859A911DEB38393;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Single>
struct Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Func`2<System.Byte[],TriLibCore.Gltf.GltfTempGeometryGroup>
struct Func_2_t3BD3A03C7D27C20A8AEFB415001126EF9524C8A0;
// System.Collections.Generic.HashSet`1<UnityEngine.Texture>
struct HashSet_1_t70836788BCAF42568800A162B9F23937F5309AE8;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IEnumerable`1<TriLibCore.Gltf.GltfModel>
struct IEnumerable_1_t125C8936F59590D1D027E780A2E3C893130B45B2;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerator`1<TriLibCore.Utils.JsonParser/JsonValue>
struct IEnumerator_1_tA7F3B25A00B66033D1D8DEA7E4C04394A2890FC5;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<UnityEngine.Color>
struct IList_1_t78DB7CACF5BDC17685CA41C8A5615F4AE760CB59;
// System.Collections.Generic.IList`1<TriLibCore.Gltf.GltfTexture>
struct IList_1_t8FA072AE304C235DECF9BBA777C475459F219E80;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation>
struct IList_1_t7A16CD7EF0938B36E4D20182185F284ECA5F93A2;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimationCurve>
struct IList_1_t8363EB7DF6F32C589EF4B468553C90C405B1C47F;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimationCurveBinding>
struct IList_1_t384D4210F120FEF114CA9675F2A1F4263C660C29;
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
// System.Collections.Generic.IList`1<UnityEngine.Vector4>
struct IList_1_t42FF818BEA4BF4853E17DE64566576B4020C72EF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,TriLibCore.Gltf.GltfModel>
struct KeyCollection_tBA90A7814D2CC2BB3F4462C64260C2E2E23B8C79;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Matrix4x4>
struct KeyCollection_t57E7027B18F8890DCAC4C411739727D7248C1B95;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<TriLibCore.Gltf.GltfTexture>
struct List_1_t606D24ECFC7D63276BAC4BC062DC93AAECC0EB33;
// System.Collections.Generic.List`1<TriLibCore.Interfaces.IAnimationCurve>
struct List_1_t098836BD89E26112D46D0209C17F10F176C6D586;
// System.Collections.Generic.List`1<TriLibCore.Interfaces.ICamera>
struct List_1_tAE667BFD8AC1AA42DE64FF5AC0140A17316B2369;
// System.Collections.Generic.List`1<System.IDisposable>
struct List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05;
// System.Collections.Generic.List`1<TriLibCore.Interfaces.ILight>
struct List_1_t9B268D314118DA62547A1DF57114D724FD8E32FE;
// System.Collections.Generic.List`1<TriLibCore.Interfaces.ITexture>
struct List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551;
// System.Collections.Generic.List`1<TriLibCore.Utils.JsonParser/JsonValue>
struct List_1_t9F3D78A42CC34B67EB8F82953E3089BA27242131;
// System.Collections.Generic.Queue`1<TriLibCore.Interfaces.IContextualizedAction>
struct Queue_1_t952DE88AF42216B755D09647735E4235DA7138D4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TriLibCore.Gltf.GltfModel>
struct ValueCollection_t34D53559E0BC4B340308D4A57D1CDD77213ECC9C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Matrix4x4>
struct ValueCollection_t64188D386429359C31B86856C0107F348D474E24;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Action`1<TriLibCore.TextureLoadingContext>[]
struct Action_1U5BU5D_t7706604B0FB5F3A4270EB313972114755AE7A123;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Matrix4x4>[]
struct Dictionary_2U5BU5D_t1C8B29337AC2B2BAE4525B35ADAA299185E6FC49;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,TriLibCore.Gltf.GltfModel>[]
struct EntryU5BU5D_t69B548A065F00181E6A545C4AE06D2F8CD74F310;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32>[]
struct EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.Matrix4x4>[]
struct EntryU5BU5D_t1FEED0F5C4D935CFC4958E0E5A0475E0839EE6B2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// TriLibCore.Mappers.AnimationClipMapper[]
struct AnimationClipMapperU5BU5D_t8E00A18562A07FD65A6E731D8BA6FF48D80BBFD8;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TriLibCore.Gltf.GltfModel[]
struct GltfModelU5BU5D_t964D72C1BC76BC193CE449249CB2FD1AD6ED93E1;
// TriLibCore.Gltf.GltfTexture[]
struct GltfTextureU5BU5D_t0D170B280EEFD2D1B9C7B46910E12AA8F08E4CA7;
// TriLibCore.Interfaces.IAnimation[]
struct IAnimationU5BU5D_t70DF9CA11F100A23CC71AA7A9C3ECC44413BF683;
// TriLibCore.Interfaces.IAnimationCurve[]
struct IAnimationCurveU5BU5D_tE36C14C72E92E5F7553EC344F13270A6CF86FB37;
// TriLibCore.Interfaces.ICamera[]
struct ICameraU5BU5D_t09D684CA83F5D7DB4B764F81B8B32923F73A3358;
// TriLibCore.Interfaces.IGeometryGroup[]
struct IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711;
// TriLibCore.Interfaces.ILight[]
struct ILightU5BU5D_t90084D1DEC73CAF26D7E2ED82B71808392294AA3;
// TriLibCore.Interfaces.IMaterial[]
struct IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2;
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
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TriLibCore.Gltf.StreamChunk[]
struct StreamChunkU5BU5D_tB8CEFF6BD29A73CA0268FEF0416BDA1EF08AE299;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TriLibCore.Mappers.TextureMapper[]
struct TextureMapperU5BU5D_t35F575F1D951980713D2A9E7D85F6AE82ABEA79C;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
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
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// TriLibCore.Mappers.ExternalDataMapper
struct ExternalDataMapper_t809726D72207DAF57227F4A5D67B9D01394B760A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// TriLibCore.Geometries.Geometry
struct Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147;
// TriLibCore.Gltf.GltfAnimation
struct GltfAnimation_t5FCB3628EAE37CD7B330DFB088483BEAE15A8BDA;
// TriLibCore.Gltf.GltfAnimationCurve
struct GltfAnimationCurve_t3A66AE2837EE789BFF3DF6E20A7F764F30356D65;
// TriLibCore.Gltf.GltfAnimationCurveBinding
struct GltfAnimationCurveBinding_t92A27388709EF32E3FCC6565B2E2804A5106BE6F;
// TriLibCore.Gltf.GltfBlendShapeKey
struct GltfBlendShapeKey_t80BF2EA6D83A62C9C867162E87B03B9577AF5C01;
// TriLibCore.Gltf.GltfCamera
struct GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0;
// TriLibCore.Gltf.GltfGeometry
struct GltfGeometry_t423D7EB79E5D71C7FC249BBF8DD77F7576A0CCC7;
// TriLibCore.Gltf.GltfLight
struct GltfLight_t92D88FA076389FAD46793431FBF2D27EFECD41CF;
// TriLibCore.Gltf.GltfMaterial
struct GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F;
// TriLibCore.Gltf.GltfModel
struct GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2;
// TriLibCore.Gltf.Reader.GltfReader
struct GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC;
// TriLibCore.Gltf.GltfRootModel
struct GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727;
// TriLibCore.Gltf.GltfTempGeometryGroup
struct GltfTempGeometryGroup_t2E188D1244BBD14E868F7884D7744770ED0EDA83;
// TriLibCore.Gltf.GltfTexture
struct GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8;
// TriLibCore.Gltf.GtlfProcessor
struct GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A;
// TriLibCore.General.HumanDescription
struct HumanDescription_t0BD271EF43944EC6940A10C164E94F8C7E750481;
// TriLibCore.Mappers.HumanoidAvatarMapper
struct HumanoidAvatarMapper_t691E00A2CE4455F03562FF79A586CC717D38FB09;
// TriLibCore.Interfaces.IAnimation
struct IAnimation_t857D7E58ACEF5398DE634DDFB10AEE0E2758763E;
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
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// TriLibCore.ReaderBase
struct ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449;
// TriLibCore.Mappers.RootBoneMapper
struct RootBoneMapper_t64AE3E33364A832EE1B74D8B65BC9AA7B448DDA2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Collections.Stack
struct Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// TriLibCore.Gltf.StreamChunk
struct StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
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
// TriLibCore.Gltf.Reader.GltfReader/<ReadStream_Coroutine>d__12
struct U3CReadStream_CoroutineU3Ed__12_tFB45C9FFA314E4937845F70F6D39F97DDC3068A7;
// TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254
struct U3CParseModel_CoroutineU3Ed__254_t51CF6FAF439B4824591E4E3DB1D70113416261D2;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2U5BU5D_t1C8B29337AC2B2BAE4525B35ADAA299185E6FC49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF02E292412E61E0CEAD729AAEA30E75F26A038B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAnimationU5BU5D_t70DF9CA11F100A23CC71AA7A9C3ECC44413BF683_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t197C7901E591B451319A83E16C668AD8CC21DFFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t9D9853EC356A71B3BC036D2810F70EC0DF1361DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tA7F3B25A00B66033D1D8DEA7E4C04394A2890FC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t8FA072AE304C235DECF9BBA777C475459F219E80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tBAC2F9CBFB365F17F69446225AF2802DEF7B2956_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRootModel_t83ED40397FD23448FC9A99336523CC7DE8A841BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t098836BD89E26112D46D0209C17F10F176C6D586_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t606D24ECFC7D63276BAC4BC062DC93AAECC0EB33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9B268D314118DA62547A1DF57114D724FD8E32FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAE667BFD8AC1AA42DE64FF5AC0140A17316B2369_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SeekOrigin_t7EB9AD0EDF26368A40F48FA2098F02160B1E8000_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamChunkU5BU5D_tB8CEFF6BD29A73CA0268FEF0416BDA1EF08AE299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReadStream_CoroutineU3Ed__12_tFB45C9FFA314E4937845F70F6D39F97DDC3068A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral119B330A1FA1C051D7BE15A6ABD55D08AFF99689;
IL2CPP_EXTERN_C String_t* _stringLiteral12628C55CF81EF3A2202756755D08C33AB0AE23C;
IL2CPP_EXTERN_C String_t* _stringLiteral14DD79B52701F2CACB5918EAD3F341D3538C7302;
IL2CPP_EXTERN_C String_t* _stringLiteral22815003D6700C390333FD30542C38C6D5F8E2CD;
IL2CPP_EXTERN_C String_t* _stringLiteral24144B9DD985637B8056D917AA1DAA4A50A0AEB3;
IL2CPP_EXTERN_C String_t* _stringLiteral301F2F7310679116695B1862DCE01E6B0829BBB0;
IL2CPP_EXTERN_C String_t* _stringLiteral3E46BAF2CA7F56661FC42E1E4E05810EB0EDAF80;
IL2CPP_EXTERN_C String_t* _stringLiteral4CB5E573D9E0B589AC50ACBB9ADDF1B97A5F652B;
IL2CPP_EXTERN_C String_t* _stringLiteral4CF83EF9C835E8180C7A24EE907EAF9AAF67CADD;
IL2CPP_EXTERN_C String_t* _stringLiteral592876A9C3FDFBE734EE9DDA787C3C0B6D770399;
IL2CPP_EXTERN_C String_t* _stringLiteral676FBBA565BC1705BE403D032D89194C390815C0;
IL2CPP_EXTERN_C String_t* _stringLiteral6B530CD3FD6023AD01C36548575CBF2BC86F8E40;
IL2CPP_EXTERN_C String_t* _stringLiteral74CC3B7E957B3E7555158404BFDECEF3E64B046B;
IL2CPP_EXTERN_C String_t* _stringLiteral7C1C42B79B63F7D97E227521BF5DD2528F7BA79C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3727CA5934FD71C785CF1E088F7214B4E39F5E;
IL2CPP_EXTERN_C String_t* _stringLiteral80A749BBF097574027749577C42FF229E10C6B66;
IL2CPP_EXTERN_C String_t* _stringLiteral830A3A84EA1F672CA67D55E71627DAF91D9CF22F;
IL2CPP_EXTERN_C String_t* _stringLiteral8FEDC483F2F8CCF14092653696B3D46F76D676B1;
IL2CPP_EXTERN_C String_t* _stringLiteral9266B539C8D4E57B50CE6970115C5C2A22DB7689;
IL2CPP_EXTERN_C String_t* _stringLiteral9E9B20202EAC4F6DA8FF0D1A5D19EADCBB966E2B;
IL2CPP_EXTERN_C String_t* _stringLiteralA18955232B8E3141B1616DF7C0C29A59B8A13EF3;
IL2CPP_EXTERN_C String_t* _stringLiteralA5ECB8D2CC8AB6F909B8859B9B2B2BA4C5546058;
IL2CPP_EXTERN_C String_t* _stringLiteralABE878BC3E7E84001C66585B9CF8804E74045F85;
IL2CPP_EXTERN_C String_t* _stringLiteralB954140AA28D7E06C4D670BE0C8598F682E29712;
IL2CPP_EXTERN_C String_t* _stringLiteralDCB57C8865963DDF42B31415149ED79F57DDA6CA;
IL2CPP_EXTERN_C String_t* _stringLiteralF62F6C81160ADB86B2ADED876DF7594BEA5D2C91;
IL2CPP_EXTERN_C String_t* _stringLiteralFB8539000B9A5E473A776F6627222A27CDFFBA0B;
IL2CPP_EXTERN_C String_t* _stringLiteralFBFE32A9426D9516E037EC0BF89B030D1435C18D;
IL2CPP_EXTERN_C const RuntimeMethod* DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAAD7CCD653C572CB26A533A19DC7A9F3BCFDEE2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB381575D9E7BA6706F57C22D567610F51B5CD868_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m66E7D680DDE4C8FF42E54FD3A71770F766CF0950_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisGltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2_mEC3BBE2379529E5B57AC0BF706A70990D0BF001E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonValueExtensions_GetArrayValueAtIndex_m34113EE9E3666ABF14748A209E0A7CA29343BD71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m050637C82E9575B3CB1DC7720A6432B96DE8F2A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9EBFC136CF3059A692BF89968BC243E2484F73B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBFFB6DE2A8967CC2A0F37DCA88B229DC51D3AF41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF2089CE11FD3E3DBF9541C4C1122B489E72BD4AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF97183B132B3C5DE1FA43120F6E13EB87B480287_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamChunk_Seek_mE371A90196B4D8199687EE053285EAEFADB64460_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamChunk_Write_mE692785FDB5C9BEB2C190945C49031045173C2A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CParseModel_CoroutineU3Ed__254_System_Collections_IEnumerator_Reset_m7E2AAA0139A8A2CA44645BA92C9522C56647CE79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReadStream_CoroutineU3Ed__12_System_Collections_IEnumerator_Reset_m961C1F438F7E8EEC67F857CF89EDFB7900601105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ProcessingSteps_t85CB655500227D688208A221C3E52FF54DC2B490_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Dictionary_2U5BU5D_t1C8B29337AC2B2BAE4525B35ADAA299185E6FC49;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct GltfModelU5BU5D_t964D72C1BC76BC193CE449249CB2FD1AD6ED93E1;
struct IAnimationU5BU5D_t70DF9CA11F100A23CC71AA7A9C3ECC44413BF683;
struct IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711;
struct IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2;
struct IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct StreamChunkU5BU5D_tB8CEFF6BD29A73CA0268FEF0416BDA1EF08AE299;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB795F6280E05848D483D66D779309A97C5D56035 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,TriLibCore.Gltf.GltfModel>
struct Dictionary_2_tF02E292412E61E0CEAD729AAEA30E75F26A038B3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t69B548A065F00181E6A545C4AE06D2F8CD74F310* ____entries_1;
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
	KeyCollection_tBA90A7814D2CC2BB3F4462C64260C2E2E23B8C79* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t34D53559E0BC4B340308D4A57D1CDD77213ECC9C* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* ____entries_1;
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
	KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Matrix4x4>
struct Dictionary_2_tFA83D9B0331D5487A8CB52C61859A911DEB38393  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1FEED0F5C4D935CFC4958E0E5A0475E0839EE6B2* ____entries_1;
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
	KeyCollection_t57E7027B18F8890DCAC4C411739727D7248C1B95* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t64188D386429359C31B86856C0107F348D474E24* ____values_8;
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

// System.Collections.Generic.List`1<TriLibCore.Gltf.GltfTexture>
struct List_1_t606D24ECFC7D63276BAC4BC062DC93AAECC0EB33  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GltfTextureU5BU5D_t0D170B280EEFD2D1B9C7B46910E12AA8F08E4CA7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t606D24ECFC7D63276BAC4BC062DC93AAECC0EB33_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GltfTextureU5BU5D_t0D170B280EEFD2D1B9C7B46910E12AA8F08E4CA7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TriLibCore.Interfaces.IAnimationCurve>
struct List_1_t098836BD89E26112D46D0209C17F10F176C6D586  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IAnimationCurveU5BU5D_tE36C14C72E92E5F7553EC344F13270A6CF86FB37* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t098836BD89E26112D46D0209C17F10F176C6D586_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IAnimationCurveU5BU5D_tE36C14C72E92E5F7553EC344F13270A6CF86FB37* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TriLibCore.Interfaces.ICamera>
struct List_1_tAE667BFD8AC1AA42DE64FF5AC0140A17316B2369  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ICameraU5BU5D_t09D684CA83F5D7DB4B764F81B8B32923F73A3358* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAE667BFD8AC1AA42DE64FF5AC0140A17316B2369_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ICameraU5BU5D_t09D684CA83F5D7DB4B764F81B8B32923F73A3358* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TriLibCore.Interfaces.ILight>
struct List_1_t9B268D314118DA62547A1DF57114D724FD8E32FE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ILightU5BU5D_t90084D1DEC73CAF26D7E2ED82B71808392294AA3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9B268D314118DA62547A1DF57114D724FD8E32FE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ILightU5BU5D_t90084D1DEC73CAF26D7E2ED82B71808392294AA3* ___s_emptyArray_5;
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

struct List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ITextureU5BU5D_t4FDE2B940C74FD3BE4608C8EBF531CFA2D51FFFA* ___s_emptyArray_5;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TriLibCore.Gltf.GltfModel>
struct ValueCollection_t34D53559E0BC4B340308D4A57D1CDD77213ECC9C  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tF02E292412E61E0CEAD729AAEA30E75F26A038B3* ____dictionary_0;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tFE65A6ACFEE669F7B22C131E38A0D585637FDB33  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

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

// TriLibCore.Gltf.GltfAnimation
struct GltfAnimation_t5FCB3628EAE37CD7B330DFB088483BEAE15A8BDA  : public RuntimeObject
{
	// System.String TriLibCore.Gltf.GltfAnimation::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Boolean TriLibCore.Gltf.GltfAnimation::<Used>k__BackingField
	bool ___U3CUsedU3Ek__BackingField_1;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimationCurveBinding> TriLibCore.Gltf.GltfAnimation::<AnimationCurveBindings>k__BackingField
	RuntimeObject* ___U3CAnimationCurveBindingsU3Ek__BackingField_2;
	// System.Single TriLibCore.Gltf.GltfAnimation::<FrameRate>k__BackingField
	float ___U3CFrameRateU3Ek__BackingField_3;
};

// TriLibCore.Gltf.GltfAnimationCurve
struct GltfAnimationCurve_t3A66AE2837EE789BFF3DF6E20A7F764F30356D65  : public RuntimeObject
{
	// System.String TriLibCore.Gltf.GltfAnimationCurve::<Property>k__BackingField
	String_t* ___U3CPropertyU3Ek__BackingField_0;
	// System.Type TriLibCore.Gltf.GltfAnimationCurve::<AnimatedType>k__BackingField
	Type_t* ___U3CAnimatedTypeU3Ek__BackingField_1;
	// UnityEngine.AnimationCurve TriLibCore.Gltf.GltfAnimationCurve::<AnimationCurve>k__BackingField
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___U3CAnimationCurveU3Ek__BackingField_2;
	// TriLibCore.General.TangentMode TriLibCore.Gltf.GltfAnimationCurve::<TangentMode>k__BackingField
	int32_t ___U3CTangentModeU3Ek__BackingField_3;
};

// TriLibCore.Gltf.GltfAnimationCurveBinding
struct GltfAnimationCurveBinding_t92A27388709EF32E3FCC6565B2E2804A5106BE6F  : public RuntimeObject
{
	// TriLibCore.Interfaces.IModel TriLibCore.Gltf.GltfAnimationCurveBinding::<Model>k__BackingField
	RuntimeObject* ___U3CModelU3Ek__BackingField_0;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimationCurve> TriLibCore.Gltf.GltfAnimationCurveBinding::<AnimationCurves>k__BackingField
	RuntimeObject* ___U3CAnimationCurvesU3Ek__BackingField_1;
};

// TriLibCore.Gltf.GltfBlendShapeKey
struct GltfBlendShapeKey_t80BF2EA6D83A62C9C867162E87B03B9577AF5C01  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TriLibCore.Gltf.GltfBlendShapeKey::<IndexMap>k__BackingField
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___U3CIndexMapU3Ek__BackingField_0;
	// System.Collections.Generic.IList`1<UnityEngine.Vector3> TriLibCore.Gltf.GltfBlendShapeKey::<Vertices>k__BackingField
	RuntimeObject* ___U3CVerticesU3Ek__BackingField_1;
	// System.Collections.Generic.IList`1<UnityEngine.Vector3> TriLibCore.Gltf.GltfBlendShapeKey::<Normals>k__BackingField
	RuntimeObject* ___U3CNormalsU3Ek__BackingField_2;
	// System.Collections.Generic.IList`1<UnityEngine.Vector3> TriLibCore.Gltf.GltfBlendShapeKey::<Tangents>k__BackingField
	RuntimeObject* ___U3CTangentsU3Ek__BackingField_3;
	// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Gltf.GltfBlendShapeKey::<Indices>k__BackingField
	RuntimeObject* ___U3CIndicesU3Ek__BackingField_4;
	// System.Single TriLibCore.Gltf.GltfBlendShapeKey::<FrameWeight>k__BackingField
	float ___U3CFrameWeightU3Ek__BackingField_5;
	// System.Boolean TriLibCore.Gltf.GltfBlendShapeKey::<FullGeometryShape>k__BackingField
	bool ___U3CFullGeometryShapeU3Ek__BackingField_6;
	// System.String TriLibCore.Gltf.GltfBlendShapeKey::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
	// System.Boolean TriLibCore.Gltf.GltfBlendShapeKey::<Used>k__BackingField
	bool ___U3CUsedU3Ek__BackingField_8;
};

// TriLibCore.Gltf.GltfMaterial
struct GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F  : public RuntimeObject
{
	// System.String TriLibCore.Gltf.GltfMaterial::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Boolean TriLibCore.Gltf.GltfMaterial::<Used>k__BackingField
	bool ___U3CUsedU3Ek__BackingField_1;
	// System.Int32 TriLibCore.Gltf.GltfMaterial::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_2;
	// System.Boolean TriLibCore.Gltf.GltfMaterial::<Processing>k__BackingField
	bool ___U3CProcessingU3Ek__BackingField_3;
	// System.Boolean TriLibCore.Gltf.GltfMaterial::<Processed>k__BackingField
	bool ___U3CProcessedU3Ek__BackingField_4;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> TriLibCore.Gltf.GltfMaterial::_properties
	RuntimeObject* ____properties_5;
	// System.Boolean TriLibCore.Gltf.GltfMaterial::<DoubleSided>k__BackingField
	bool ___U3CDoubleSidedU3Ek__BackingField_6;
};

// TriLibCore.Gltf.GltfTempGeometryGroup
struct GltfTempGeometryGroup_t2E188D1244BBD14E868F7884D7744770ED0EDA83  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<UnityEngine.Vector3> TriLibCore.Gltf.GltfTempGeometryGroup::Vertices
	RuntimeObject* ___Vertices_0;
	// System.Collections.Generic.IList`1<UnityEngine.Vector3> TriLibCore.Gltf.GltfTempGeometryGroup::NormalsList
	RuntimeObject* ___NormalsList_1;
	// System.Collections.Generic.IList`1<UnityEngine.Vector2> TriLibCore.Gltf.GltfTempGeometryGroup::UVsList
	RuntimeObject* ___UVsList_2;
	// System.Collections.Generic.IList`1<UnityEngine.Color> TriLibCore.Gltf.GltfTempGeometryGroup::ColorsList
	RuntimeObject* ___ColorsList_3;
	// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Gltf.GltfTempGeometryGroup::IndicesList
	RuntimeObject* ___IndicesList_4;
};

// JsonValueExtensions
struct JsonValueExtensions_t1F05622B3358A98BAB09BD5FE8E006F5861E493B  : public RuntimeObject
{
};

// TriLibCore.Gltf.JsonValueExtensions
struct JsonValueExtensions_tF5DD1BEEBF1E95BBF8AE30AF52AAB9BB6D66D6C6  : public RuntimeObject
{
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

// TriLibCore.Gltf.Reader.GltfReader/<ReadStream_Coroutine>d__12
struct U3CReadStream_CoroutineU3Ed__12_tFB45C9FFA314E4937845F70F6D39F97DDC3068A7  : public RuntimeObject
{
	// System.Int32 TriLibCore.Gltf.Reader.GltfReader/<ReadStream_Coroutine>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TriLibCore.Gltf.Reader.GltfReader/<ReadStream_Coroutine>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.IO.Stream TriLibCore.Gltf.Reader.GltfReader/<ReadStream_Coroutine>d__12::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_2;
	// TriLibCore.AssetLoaderContext TriLibCore.Gltf.Reader.GltfReader/<ReadStream_Coroutine>d__12::assetLoaderContext
	AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext_3;
	// System.String TriLibCore.Gltf.Reader.GltfReader/<ReadStream_Coroutine>d__12::filename
	String_t* ___filename_4;
	// System.Action`2<TriLibCore.AssetLoaderContext,System.Single> TriLibCore.Gltf.Reader.GltfReader/<ReadStream_Coroutine>d__12::onProgress
	Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___onProgress_5;
	// TriLibCore.Gltf.Reader.GltfReader TriLibCore.Gltf.Reader.GltfReader/<ReadStream_Coroutine>d__12::<>4__this
	GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* ___U3CU3E4__this_6;
	// TriLibCore.Interfaces.IRootModel TriLibCore.Gltf.Reader.GltfReader/<ReadStream_Coroutine>d__12::<model>5__1
	RuntimeObject* ___U3CmodelU3E5__1_7;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
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

// TriLibCore.Gltf.GltfGeometry
struct GltfGeometry_t423D7EB79E5D71C7FC249BBF8DD77F7576A0CCC7  : public Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147
{
};

// TriLibCore.Gltf.Reader.GltfReader
struct GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC  : public ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449
{
	// TriLibCore.Gltf.GtlfProcessor TriLibCore.Gltf.Reader.GltfReader::_gtlfProcessor
	GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* ____gtlfProcessor_11;
};

struct GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC_StaticFields
{
	// System.Single TriLibCore.Gltf.Reader.GltfReader::SpotLightDistance
	float ___SpotLightDistance_10;
	// System.Func`2<System.Byte[],TriLibCore.Gltf.GltfTempGeometryGroup> TriLibCore.Gltf.Reader.GltfReader::DracoDecompressorCallback
	Func_2_t3BD3A03C7D27C20A8AEFB415001126EF9524C8A0* ___DracoDecompressorCallback_12;
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

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// TriLibCore.Gltf.TemporaryString
struct TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 
{
	// System.Char[] TriLibCore.Gltf.TemporaryString::_chars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____chars_0;
	// System.String TriLibCore.Gltf.TemporaryString::_charString
	String_t* ____charString_1;
	// System.Int32 TriLibCore.Gltf.TemporaryString::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of TriLibCore.Gltf.TemporaryString
struct TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7_marshaled_pinvoke
{
	uint8_t* ____chars_0;
	char* ____charString_1;
	int32_t ____length_2;
};
// Native definition for COM marshalling of TriLibCore.Gltf.TemporaryString
struct TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7_marshaled_com
{
	uint8_t* ____chars_0;
	Il2CppChar* ____charString_1;
	int32_t ____length_2;
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

// TriLibCore.Gltf.GtlfProcessor/<>c__DisplayClass245_0
struct U3CU3Ec__DisplayClass245_0_tB9BEB71FE3E51A509CD387F939EA97A52C1AFD4C 
{
	// System.Int32 TriLibCore.Gltf.GtlfProcessor/<>c__DisplayClass245_0::primitiveVertexIndex
	int32_t ___primitiveVertexIndex_0;
	// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Gltf.GtlfProcessor/<>c__DisplayClass245_0::geometryGroup
	RuntimeObject* ___geometryGroup_1;
	// TriLibCore.Gltf.GtlfProcessor TriLibCore.Gltf.GtlfProcessor/<>c__DisplayClass245_0::<>4__this
	GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* ___U3CU3E4__this_2;
};

// TriLibCore.Gltf.GtlfProcessor/<>c__DisplayClass245_1
struct U3CU3Ec__DisplayClass245_1_t6FFD8806D076B81644BBBB527E123271E1CFB201 
{
	// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Gltf.GtlfProcessor/<>c__DisplayClass245_1::indices
	RuntimeObject* ___indices_0;
	// TriLibCore.Gltf.GltfGeometry TriLibCore.Gltf.GtlfProcessor/<>c__DisplayClass245_1::geometry
	GltfGeometry_t423D7EB79E5D71C7FC249BBF8DD77F7576A0CCC7* ___geometry_1;
	// System.Collections.Generic.IList`1<UnityEngine.Vector3> TriLibCore.Gltf.GtlfProcessor/<>c__DisplayClass245_1::verticesList
	RuntimeObject* ___verticesList_2;
	// System.Collections.Generic.IList`1<UnityEngine.Vector3> TriLibCore.Gltf.GtlfProcessor/<>c__DisplayClass245_1::normalsList
	RuntimeObject* ___normalsList_3;
	// System.Collections.Generic.IList`1<UnityEngine.Vector4> TriLibCore.Gltf.GtlfProcessor/<>c__DisplayClass245_1::tangentsList
	RuntimeObject* ___tangentsList_4;
	// System.Collections.Generic.IList`1<UnityEngine.Color> TriLibCore.Gltf.GtlfProcessor/<>c__DisplayClass245_1::colorsList
	RuntimeObject* ___colorsList_5;
	// System.Collections.Generic.IList`1<UnityEngine.Vector2> TriLibCore.Gltf.GtlfProcessor/<>c__DisplayClass245_1::uvs
	RuntimeObject* ___uvs_6;
	// System.Collections.Generic.IList`1<UnityEngine.Vector2> TriLibCore.Gltf.GtlfProcessor/<>c__DisplayClass245_1::uvs2
	RuntimeObject* ___uvs2_7;
	// System.Collections.Generic.IList`1<UnityEngine.Vector2> TriLibCore.Gltf.GtlfProcessor/<>c__DisplayClass245_1::uvs3
	RuntimeObject* ___uvs3_8;
	// System.Collections.Generic.IList`1<UnityEngine.Vector2> TriLibCore.Gltf.GtlfProcessor/<>c__DisplayClass245_1::uvs4
	RuntimeObject* ___uvs4_9;
};

// TriLibCore.Utils.JsonParser/JsonValue
struct JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 
{
	// System.IO.BinaryReader TriLibCore.Utils.JsonParser/JsonValue::<BinaryReader>k__BackingField
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___U3CBinaryReaderU3Ek__BackingField_0;
	// System.Int32 TriLibCore.Utils.JsonParser/JsonValue::<Position>k__BackingField
	int32_t ___U3CPositionU3Ek__BackingField_1;
	// System.Int32 TriLibCore.Utils.JsonParser/JsonValue::<ValueLength>k__BackingField
	int32_t ___U3CValueLengthU3Ek__BackingField_2;
	// TriLibCore.Utils.JsonParser/JsonValueType TriLibCore.Utils.JsonParser/JsonValue::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_3;
	// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32> TriLibCore.Utils.JsonParser/JsonValue::_hashes
	Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* ____hashes_4;
	// System.Collections.Generic.List`1<TriLibCore.Utils.JsonParser/JsonValue> TriLibCore.Utils.JsonParser/JsonValue::_children
	List_1_t9F3D78A42CC34B67EB8F82953E3089BA27242131* ____children_5;
};
// Native definition for P/Invoke marshalling of TriLibCore.Utils.JsonParser/JsonValue
struct JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914_marshaled_pinvoke
{
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___U3CBinaryReaderU3Ek__BackingField_0;
	int32_t ___U3CPositionU3Ek__BackingField_1;
	int32_t ___U3CValueLengthU3Ek__BackingField_2;
	int32_t ___U3CTypeU3Ek__BackingField_3;
	Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* ____hashes_4;
	List_1_t9F3D78A42CC34B67EB8F82953E3089BA27242131* ____children_5;
};
// Native definition for COM marshalling of TriLibCore.Utils.JsonParser/JsonValue
struct JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914_marshaled_com
{
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___U3CBinaryReaderU3Ek__BackingField_0;
	int32_t ___U3CPositionU3Ek__BackingField_1;
	int32_t ___U3CValueLengthU3Ek__BackingField_2;
	int32_t ___U3CTypeU3Ek__BackingField_3;
	Dictionary_2_t9443D9DE9301D7A3459EAF8D0F2C28822AB6F27E* ____hashes_4;
	List_1_t9F3D78A42CC34B67EB8F82953E3089BA27242131* ____children_5;
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

// TriLibCore.Gltf.GltfModel
struct GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2  : public RuntimeObject
{
	// System.String TriLibCore.Gltf.GltfModel::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Boolean TriLibCore.Gltf.GltfModel::<Used>k__BackingField
	bool ___U3CUsedU3Ek__BackingField_1;
	// UnityEngine.Vector3 TriLibCore.Gltf.GltfModel::<Pivot>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPivotU3Ek__BackingField_2;
	// UnityEngine.Vector3 TriLibCore.Gltf.GltfModel::<LocalPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CLocalPositionU3Ek__BackingField_3;
	// UnityEngine.Quaternion TriLibCore.Gltf.GltfModel::<LocalRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CLocalRotationU3Ek__BackingField_4;
	// UnityEngine.Vector3 TriLibCore.Gltf.GltfModel::<LocalScale>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CLocalScaleU3Ek__BackingField_5;
	// System.Boolean TriLibCore.Gltf.GltfModel::<Visibility>k__BackingField
	bool ___U3CVisibilityU3Ek__BackingField_6;
	// TriLibCore.Interfaces.IModel TriLibCore.Gltf.GltfModel::<Parent>k__BackingField
	RuntimeObject* ___U3CParentU3Ek__BackingField_7;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Gltf.GltfModel::<Children>k__BackingField
	RuntimeObject* ___U3CChildrenU3Ek__BackingField_8;
	// System.Boolean TriLibCore.Gltf.GltfModel::<IsBone>k__BackingField
	bool ___U3CIsBoneU3Ek__BackingField_9;
	// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Gltf.GltfModel::<GeometryGroup>k__BackingField
	RuntimeObject* ___U3CGeometryGroupU3Ek__BackingField_10;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Gltf.GltfModel::<Bones>k__BackingField
	RuntimeObject* ___U3CBonesU3Ek__BackingField_11;
	// UnityEngine.Matrix4x4[] TriLibCore.Gltf.GltfModel::<BindPoses>k__BackingField
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___U3CBindPosesU3Ek__BackingField_12;
	// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Gltf.GltfModel::<MaterialIndices>k__BackingField
	RuntimeObject* ___U3CMaterialIndicesU3Ek__BackingField_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> TriLibCore.Gltf.GltfModel::<UserProperties>k__BackingField
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___U3CUserPropertiesU3Ek__BackingField_14;
	// System.Boolean TriLibCore.Gltf.GltfModel::<HasCustomPivot>k__BackingField
	bool ___U3CHasCustomPivotU3Ek__BackingField_15;
	// UnityEngine.Matrix4x4 TriLibCore.Gltf.GltfModel::<OriginalGlobalMatrix>k__BackingField
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___U3COriginalGlobalMatrixU3Ek__BackingField_16;
};

// TriLibCore.Gltf.GltfTexture
struct GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8  : public RuntimeObject
{
	// System.String TriLibCore.Gltf.GltfTexture::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Boolean TriLibCore.Gltf.GltfTexture::<Used>k__BackingField
	bool ___U3CUsedU3Ek__BackingField_1;
	// System.Byte[] TriLibCore.Gltf.GltfTexture::<Data>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CDataU3Ek__BackingField_2;
	// System.IO.Stream TriLibCore.Gltf.GltfTexture::<DataStream>k__BackingField
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___U3CDataStreamU3Ek__BackingField_3;
	// System.String TriLibCore.Gltf.GltfTexture::<Filename>k__BackingField
	String_t* ___U3CFilenameU3Ek__BackingField_4;
	// UnityEngine.TextureWrapMode TriLibCore.Gltf.GltfTexture::<WrapModeU>k__BackingField
	int32_t ___U3CWrapModeUU3Ek__BackingField_5;
	// UnityEngine.TextureWrapMode TriLibCore.Gltf.GltfTexture::<WrapModeV>k__BackingField
	int32_t ___U3CWrapModeVU3Ek__BackingField_6;
	// UnityEngine.Vector2 TriLibCore.Gltf.GltfTexture::<Tiling>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CTilingU3Ek__BackingField_7;
	// UnityEngine.Vector2 TriLibCore.Gltf.GltfTexture::<Offset>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3COffsetU3Ek__BackingField_8;
	// System.Int32 TriLibCore.Gltf.GltfTexture::<TextureId>k__BackingField
	int32_t ___U3CTextureIdU3Ek__BackingField_9;
	// System.String TriLibCore.Gltf.GltfTexture::<ResolvedFilename>k__BackingField
	String_t* ___U3CResolvedFilenameU3Ek__BackingField_10;
	// System.Int32 TriLibCore.Gltf.GltfTexture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_11;
	// System.Boolean TriLibCore.Gltf.GltfTexture::<HasAlpha>k__BackingField
	bool ___U3CHasAlphaU3Ek__BackingField_12;
	// TriLibCore.General.TextureFormat TriLibCore.Gltf.GltfTexture::<TextureFormat>k__BackingField
	int32_t ___U3CTextureFormatU3Ek__BackingField_13;
	// System.Collections.Generic.IList`1<TriLibCore.Gltf.GltfTexture> TriLibCore.Gltf.GltfTexture::TextureVariations
	RuntimeObject* ___TextureVariations_14;
};

// TriLibCore.Gltf.GtlfProcessor
struct GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A  : public RuntimeObject
{
	// TriLibCore.Gltf.Reader.GltfReader TriLibCore.Gltf.GtlfProcessor::_reader
	GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* ____reader_128;
	// TriLibCore.Gltf.StreamChunk[] TriLibCore.Gltf.GtlfProcessor::_buffersData
	StreamChunkU5BU5D_tB8CEFF6BD29A73CA0268FEF0416BDA1EF08AE299* ____buffersData_129;
	// TriLibCore.Interfaces.IAnimation[] TriLibCore.Gltf.GtlfProcessor::_animations
	IAnimationU5BU5D_t70DF9CA11F100A23CC71AA7A9C3ECC44413BF683* ____animations_130;
	// TriLibCore.Interfaces.IMaterial[] TriLibCore.Gltf.GtlfProcessor::_materials
	IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2* ____materials_131;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture> TriLibCore.Gltf.GtlfProcessor::_textures
	RuntimeObject* ____textures_132;
	// TriLibCore.Interfaces.IGeometryGroup[] TriLibCore.Gltf.GtlfProcessor::_geometryGroups
	IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711* ____geometryGroups_133;
	// System.Collections.Generic.Dictionary`2<System.Int32,TriLibCore.Gltf.GltfModel> TriLibCore.Gltf.GtlfProcessor::_models
	Dictionary_2_tF02E292412E61E0CEAD729AAEA30E75F26A038B3* ____models_134;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Matrix4x4>[] TriLibCore.Gltf.GtlfProcessor::_skins
	Dictionary_2U5BU5D_t1C8B29337AC2B2BAE4525B35ADAA299185E6FC49* ____skins_135;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ICamera> TriLibCore.Gltf.GtlfProcessor::_cameras
	RuntimeObject* ____cameras_136;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ILight> TriLibCore.Gltf.GtlfProcessor::_lights
	RuntimeObject* ____lights_137;
	// System.IO.Stream TriLibCore.Gltf.GtlfProcessor::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_138;
	// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Gltf.GtlfProcessor::buffers
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___buffers_139;
	// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Gltf.GtlfProcessor::textures
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___textures_140;
	// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Gltf.GtlfProcessor::images
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___images_141;
	// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Gltf.GtlfProcessor::samplers
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___samplers_142;
	// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Gltf.GtlfProcessor::materials
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___materials_143;
	// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Gltf.GtlfProcessor::accessors
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___accessors_144;
	// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Gltf.GtlfProcessor::bufferViews
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___bufferViews_145;
	// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Gltf.GtlfProcessor::scenes
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___scenes_146;
	// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Gltf.GtlfProcessor::nodes
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___nodes_147;
	// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Gltf.GtlfProcessor::skins
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___skins_148;
	// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Gltf.GtlfProcessor::animations
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___animations_149;
	// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Gltf.GtlfProcessor::meshes
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___meshes_150;
	// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Gltf.GtlfProcessor::cameras
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___cameras_151;
	// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Gltf.GtlfProcessor::lights
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___lights_152;
	// System.Boolean TriLibCore.Gltf.GtlfProcessor::_quantitized
	bool ____quantitized_153;
	// System.Boolean TriLibCore.Gltf.GtlfProcessor::_usesDraco
	bool ____usesDraco_154;
	// System.Boolean TriLibCore.Gltf.GtlfProcessor::_usesLights
	bool ____usesLights_155;
	// System.Byte[] TriLibCore.Gltf.GtlfProcessor::_tempBytes8
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____tempBytes8_194;
	// TriLibCore.Gltf.TemporaryString TriLibCore.Gltf.GtlfProcessor::_temporaryString
	TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ____temporaryString_195;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TriLibCore.Gltf.GtlfProcessor::_minIntValues
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ____minIntValues_196;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TriLibCore.Gltf.GtlfProcessor::_maxIntValues
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ____maxIntValues_197;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Single> TriLibCore.Gltf.GtlfProcessor::_minFloatValues
	Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC* ____minFloatValues_198;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Single> TriLibCore.Gltf.GtlfProcessor::_maxFloatValues
	Dictionary_2_t17BB14695909F39BA5B9F9F51F527D09419C12FC* ____maxFloatValues_199;
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

// TriLibCore.Gltf.StreamChunk
struct StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream TriLibCore.Gltf.StreamChunk::<BaseStream>k__BackingField
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___U3CBaseStreamU3Ek__BackingField_5;
	// System.Int64 TriLibCore.Gltf.StreamChunk::<BasePosition>k__BackingField
	int64_t ___U3CBasePositionU3Ek__BackingField_6;
	// System.Int64 TriLibCore.Gltf.StreamChunk::<Length>k__BackingField
	int64_t ___U3CLengthU3Ek__BackingField_7;
	// System.Int64 TriLibCore.Gltf.StreamChunk::_position
	int64_t ____position_8;
};

// TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254
struct U3CParseModel_CoroutineU3Ed__254_t51CF6FAF439B4824591E4E3DB1D70113416261D2  : public RuntimeObject
{
	// System.Int32 TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TriLibCore.AssetLoaderContext TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::_assetLoaderContext
	AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ____assetLoaderContext_2;
	// System.IO.Stream TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_3;
	// TriLibCore.Gltf.GtlfProcessor TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<>4__this
	GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* ___U3CU3E4__this_4;
	// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<gltf>5__1
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___U3CgltfU3E5__1_5;
	// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<extensionsRequired>5__2
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___U3CextensionsRequiredU3E5__2_6;
	// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<extensions>5__3
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___U3CextensionsU3E5__3_7;
	// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<lightsPunctual>5__4
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___U3ClightsPunctualU3E5__4_8;
	// TriLibCore.Gltf.GltfRootModel TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<rootModel>5__5
	GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* ___U3CrootModelU3E5__5_9;
	// System.Int32 TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<i>5__6
	int32_t ___U3CiU3E5__6_10;
	// System.Collections.Generic.IEnumerator`1<TriLibCore.Utils.JsonParser/JsonValue> TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<>s__7
	RuntimeObject* ___U3CU3Es__7_11;
	// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<extension>5__8
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___U3CextensionU3E5__8_12;
	// System.String TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<extensionName>5__9
	String_t* ___U3CextensionNameU3E5__9_13;
	// System.String TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<>s__10
	String_t* ___U3CU3Es__10_14;
	// System.Int32 TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<i>5__11
	int32_t ___U3CiU3E5__11_15;
	// TriLibCore.Gltf.GltfTexture TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<gltfTexture>5__12
	GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* ___U3CgltfTextureU3E5__12_16;
	// System.Int32 TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<i>5__13
	int32_t ___U3CiU3E5__13_17;
	// TriLibCore.Gltf.GltfMaterial TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<gltfMaterial>5__14
	GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* ___U3CgltfMaterialU3E5__14_18;
	// System.Int32 TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<i>5__15
	int32_t ___U3CiU3E5__15_19;
	// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<geometryGroup>5__16
	RuntimeObject* ___U3CgeometryGroupU3E5__16_20;
	// System.Int32 TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<i>5__17
	int32_t ___U3CiU3E5__17_21;
	// TriLibCore.Gltf.GltfModel TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<gltfScene>5__18
	GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* ___U3CgltfSceneU3E5__18_22;
	// System.Int32 TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<i>5__19
	int32_t ___U3CiU3E5__19_23;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Matrix4x4> TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<bindPoses>5__20
	Dictionary_2_tFA83D9B0331D5487A8CB52C61859A911DEB38393* ___U3CbindPosesU3E5__20_24;
	// System.Int32 TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<i>5__21
	int32_t ___U3CiU3E5__21_25;
	// System.Int32 TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<a>5__22
	int32_t ___U3CaU3E5__22_26;
	// TriLibCore.Gltf.GltfAnimation TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::<gltfAnimation>5__23
	GltfAnimation_t5FCB3628EAE37CD7B330DFB088483BEAE15A8BDA* ___U3CgltfAnimationU3E5__23_27;
};

// TriLibCore.Utils.JsonParser/JsonValue/JsonCharEnumerator
struct JsonCharEnumerator_t378C3FA1DE713F20F39B18EF561B87F0BC1929C1 
{
	// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Utils.JsonParser/JsonValue/JsonCharEnumerator::_jsonValue
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ____jsonValue_0;
	// System.Int32 TriLibCore.Utils.JsonParser/JsonValue/JsonCharEnumerator::_position
	int32_t ____position_1;
	// System.Int32 TriLibCore.Utils.JsonParser/JsonValue/JsonCharEnumerator::_char
	int32_t ____char_2;
	// System.Int64 TriLibCore.Utils.JsonParser/JsonValue/JsonCharEnumerator::_initialPosition
	int64_t ____initialPosition_3;
};
// Native definition for P/Invoke marshalling of TriLibCore.Utils.JsonParser/JsonValue/JsonCharEnumerator
struct JsonCharEnumerator_t378C3FA1DE713F20F39B18EF561B87F0BC1929C1_marshaled_pinvoke
{
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914_marshaled_pinvoke ____jsonValue_0;
	int32_t ____position_1;
	int32_t ____char_2;
	int64_t ____initialPosition_3;
};
// Native definition for COM marshalling of TriLibCore.Utils.JsonParser/JsonValue/JsonCharEnumerator
struct JsonCharEnumerator_t378C3FA1DE713F20F39B18EF561B87F0BC1929C1_marshaled_com
{
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914_marshaled_com ____jsonValue_0;
	int32_t ____position_1;
	int32_t ____char_2;
	int64_t ____initialPosition_3;
};

// TriLibCore.Gltf.GltfCamera
struct GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0  : public GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2
{
	// System.Single TriLibCore.Gltf.GltfCamera::XMag
	float ___XMag_17;
	// System.Single TriLibCore.Gltf.GltfCamera::YMag
	float ___YMag_18;
	// System.Single TriLibCore.Gltf.GltfCamera::<AspectRatio>k__BackingField
	float ___U3CAspectRatioU3Ek__BackingField_19;
	// System.Boolean TriLibCore.Gltf.GltfCamera::<Ortographic>k__BackingField
	bool ___U3COrtographicU3Ek__BackingField_20;
	// System.Single TriLibCore.Gltf.GltfCamera::<OrtographicSize>k__BackingField
	float ___U3COrtographicSizeU3Ek__BackingField_21;
	// System.Single TriLibCore.Gltf.GltfCamera::<FieldOfView>k__BackingField
	float ___U3CFieldOfViewU3Ek__BackingField_22;
	// System.Single TriLibCore.Gltf.GltfCamera::<NearClipPlane>k__BackingField
	float ___U3CNearClipPlaneU3Ek__BackingField_23;
	// System.Single TriLibCore.Gltf.GltfCamera::<FarClipPlane>k__BackingField
	float ___U3CFarClipPlaneU3Ek__BackingField_24;
	// System.Single TriLibCore.Gltf.GltfCamera::<FocalLength>k__BackingField
	float ___U3CFocalLengthU3Ek__BackingField_25;
	// UnityEngine.Vector2 TriLibCore.Gltf.GltfCamera::<SensorSize>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CSensorSizeU3Ek__BackingField_26;
	// UnityEngine.Vector2 TriLibCore.Gltf.GltfCamera::<LensShift>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CLensShiftU3Ek__BackingField_27;
	// UnityEngine.Camera/GateFitMode TriLibCore.Gltf.GltfCamera::<GateFitMode>k__BackingField
	int32_t ___U3CGateFitModeU3Ek__BackingField_28;
	// System.Boolean TriLibCore.Gltf.GltfCamera::<PhysicalCamera>k__BackingField
	bool ___U3CPhysicalCameraU3Ek__BackingField_29;
};

// TriLibCore.Gltf.GltfLight
struct GltfLight_t92D88FA076389FAD46793431FBF2D27EFECD41CF  : public GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2
{
	// UnityEngine.LightType TriLibCore.Gltf.GltfLight::<LightType>k__BackingField
	int32_t ___U3CLightTypeU3Ek__BackingField_17;
	// UnityEngine.Color TriLibCore.Gltf.GltfLight::<Color>k__BackingField
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CColorU3Ek__BackingField_18;
	// System.Single TriLibCore.Gltf.GltfLight::<Intensity>k__BackingField
	float ___U3CIntensityU3Ek__BackingField_19;
	// System.Single TriLibCore.Gltf.GltfLight::<Range>k__BackingField
	float ___U3CRangeU3Ek__BackingField_20;
	// System.Single TriLibCore.Gltf.GltfLight::<InnerSpotAngle>k__BackingField
	float ___U3CInnerSpotAngleU3Ek__BackingField_21;
	// System.Single TriLibCore.Gltf.GltfLight::<OuterSpotAngle>k__BackingField
	float ___U3COuterSpotAngleU3Ek__BackingField_22;
	// System.Single TriLibCore.Gltf.GltfLight::<Width>k__BackingField
	float ___U3CWidthU3Ek__BackingField_23;
	// System.Single TriLibCore.Gltf.GltfLight::<Height>k__BackingField
	float ___U3CHeightU3Ek__BackingField_24;
};

// TriLibCore.Gltf.GltfRootModel
struct GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727  : public GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2
{
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Gltf.GltfRootModel::<AllModels>k__BackingField
	RuntimeObject* ___U3CAllModelsU3Ek__BackingField_17;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup> TriLibCore.Gltf.GltfRootModel::<AllGeometryGroups>k__BackingField
	RuntimeObject* ___U3CAllGeometryGroupsU3Ek__BackingField_18;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation> TriLibCore.Gltf.GltfRootModel::<AllAnimations>k__BackingField
	RuntimeObject* ___U3CAllAnimationsU3Ek__BackingField_19;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial> TriLibCore.Gltf.GltfRootModel::<AllMaterials>k__BackingField
	RuntimeObject* ___U3CAllMaterialsU3Ek__BackingField_20;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture> TriLibCore.Gltf.GltfRootModel::<AllTextures>k__BackingField
	RuntimeObject* ___U3CAllTexturesU3Ek__BackingField_21;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ICamera> TriLibCore.Gltf.GltfRootModel::<AllCameras>k__BackingField
	RuntimeObject* ___U3CAllCamerasU3Ek__BackingField_22;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ILight> TriLibCore.Gltf.GltfRootModel::<AllLights>k__BackingField
	RuntimeObject* ___U3CAllLightsU3Ek__BackingField_23;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
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

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
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

// TriLibCore.Mappers.MaterialMapper
struct MaterialMapper_t5FE12658D8C551EE66D3441CFBDEDFAE5B85E692  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean TriLibCore.Mappers.MaterialMapper::<ExtractMetallicAndSmoothness>k__BackingField
	bool ___U3CExtractMetallicAndSmoothnessU3Ek__BackingField_13;
	// UnityEngine.Material TriLibCore.Mappers.MaterialMapper::<MaterialPreset>k__BackingField
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CMaterialPresetU3Ek__BackingField_14;
	// UnityEngine.Material TriLibCore.Mappers.MaterialMapper::<CutoutMaterialPreset>k__BackingField
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CCutoutMaterialPresetU3Ek__BackingField_15;
	// UnityEngine.Material TriLibCore.Mappers.MaterialMapper::<TransparentMaterialPreset>k__BackingField
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CTransparentMaterialPresetU3Ek__BackingField_16;
	// UnityEngine.Material TriLibCore.Mappers.MaterialMapper::<TransparentComposeMaterialPreset>k__BackingField
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CTransparentComposeMaterialPresetU3Ek__BackingField_17;
	// UnityEngine.Material TriLibCore.Mappers.MaterialMapper::<SpecularMaterialPreset>k__BackingField
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CSpecularMaterialPresetU3Ek__BackingField_18;
	// UnityEngine.Material TriLibCore.Mappers.MaterialMapper::<SpecularCutoutMaterialPreset>k__BackingField
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CSpecularCutoutMaterialPresetU3Ek__BackingField_19;
	// UnityEngine.Material TriLibCore.Mappers.MaterialMapper::<SpecularTransparentMaterialPreset>k__BackingField
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CSpecularTransparentMaterialPresetU3Ek__BackingField_20;
	// UnityEngine.Material TriLibCore.Mappers.MaterialMapper::<SpecularTransparentComposeMaterialPreset>k__BackingField
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CSpecularTransparentComposeMaterialPresetU3Ek__BackingField_21;
	// UnityEngine.Material TriLibCore.Mappers.MaterialMapper::<AutodeskMaterialPreset>k__BackingField
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CAutodeskMaterialPresetU3Ek__BackingField_22;
	// UnityEngine.Material TriLibCore.Mappers.MaterialMapper::<AutodeskCutoutMaterialPreset>k__BackingField
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CAutodeskCutoutMaterialPresetU3Ek__BackingField_23;
	// UnityEngine.Material TriLibCore.Mappers.MaterialMapper::<AutodeskTransparentMaterialPreset>k__BackingField
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CAutodeskTransparentMaterialPresetU3Ek__BackingField_24;
	// UnityEngine.Material TriLibCore.Mappers.MaterialMapper::<AutodeskTransparentComposeMaterialPreset>k__BackingField
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CAutodeskTransparentComposeMaterialPresetU3Ek__BackingField_25;
	// System.Boolean TriLibCore.Mappers.MaterialMapper::ForceStandardMaterial
	bool ___ForceStandardMaterial_26;
	// System.Int32 TriLibCore.Mappers.MaterialMapper::CheckingOrder
	int32_t ___CheckingOrder_27;
};

struct MaterialMapper_t5FE12658D8C551EE66D3441CFBDEDFAE5B85E692_StaticFields
{
	// System.Collections.Generic.List`1<System.String> TriLibCore.Mappers.MaterialMapper::_registeredMappers
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____registeredMappers_4;
	// System.Collections.Generic.List`1<System.String> TriLibCore.Mappers.MaterialMapper::_registeredMapperNamespaces
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____registeredMapperNamespaces_5;
	// System.Action`1<TriLibCore.TextureLoadingContext> TriLibCore.Mappers.MaterialMapper::CreateTextureCallback
	Action_1_t416AB94B039CAFC6FF5A11741A20E92643D2C0D4* ___CreateTextureCallback_6;
	// System.Action`1<TriLibCore.TextureLoadingContext> TriLibCore.Mappers.MaterialMapper::LoadTextureCallback
	Action_1_t416AB94B039CAFC6FF5A11741A20E92643D2C0D4* ___LoadTextureCallback_7;
	// System.Action`1<TriLibCore.TextureLoadingContext> TriLibCore.Mappers.MaterialMapper::ScanForAlphaPixelsCallback
	Action_1_t416AB94B039CAFC6FF5A11741A20E92643D2C0D4* ___ScanForAlphaPixelsCallback_8;
	// System.Action`1<TriLibCore.TextureLoadingContext> TriLibCore.Mappers.MaterialMapper::ApplyTextureCallback
	Action_1_t416AB94B039CAFC6FF5A11741A20E92643D2C0D4* ___ApplyTextureCallback_9;
	// System.Action`1<TriLibCore.TextureLoadingContext> TriLibCore.Mappers.MaterialMapper::FixNPOTTextureCallback
	Action_1_t416AB94B039CAFC6FF5A11741A20E92643D2C0D4* ___FixNPOTTextureCallback_10;
	// System.Action`1<TriLibCore.TextureLoadingContext> TriLibCore.Mappers.MaterialMapper::FixNormalMapCallback
	Action_1_t416AB94B039CAFC6FF5A11741A20E92643D2C0D4* ___FixNormalMapCallback_11;
	// System.Action`1<TriLibCore.TextureLoadingContext> TriLibCore.Mappers.MaterialMapper::PostProcessTextureCallback
	Action_1_t416AB94B039CAFC6FF5A11741A20E92643D2C0D4* ___PostProcessTextureCallback_12;
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// TriLibCore.Gltf.StreamChunk[]
struct StreamChunkU5BU5D_tB8CEFF6BD29A73CA0268FEF0416BDA1EF08AE299  : public RuntimeArray
{
	ALIGN_FIELD (8) StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* m_Items[1];

	inline StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Matrix4x4>[]
struct Dictionary_2U5BU5D_t1C8B29337AC2B2BAE4525B35ADAA299185E6FC49  : public RuntimeArray
{
	ALIGN_FIELD (8) Dictionary_2_tFA83D9B0331D5487A8CB52C61859A911DEB38393* m_Items[1];

	inline Dictionary_2_tFA83D9B0331D5487A8CB52C61859A911DEB38393* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Dictionary_2_tFA83D9B0331D5487A8CB52C61859A911DEB38393** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Dictionary_2_tFA83D9B0331D5487A8CB52C61859A911DEB38393* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Dictionary_2_tFA83D9B0331D5487A8CB52C61859A911DEB38393* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Dictionary_2_tFA83D9B0331D5487A8CB52C61859A911DEB38393** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Dictionary_2_tFA83D9B0331D5487A8CB52C61859A911DEB38393* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TriLibCore.Interfaces.IAnimation[]
struct IAnimationU5BU5D_t70DF9CA11F100A23CC71AA7A9C3ECC44413BF683  : public RuntimeArray
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
// TriLibCore.Gltf.GltfModel[]
struct GltfModelU5BU5D_t964D72C1BC76BC193CE449249CB2FD1AD6ED93E1  : public RuntimeArray
{
	ALIGN_FIELD (8) GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* m_Items[1];

	inline GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* value)
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Extensions.DictionaryExtensions::TryGetValueSafe<System.Object,System.Object>(System.Collections.Generic.IDictionary`2<TKey,TValue>,TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryExtensions_TryGetValueSafe_TisRuntimeObject_TisRuntimeObject_m31FA8212F5094FA954F0351646B0B012D9736B0B_gshared (RuntimeObject* ___dictionary0, RuntimeObject* ___key1, RuntimeObject** ___value2, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Single>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___capacity0, const RuntimeMethod* method) ;

// System.String TriLibCore.Gltf.TemporaryString::GetString(TriLibCore.Utils.JsonParser/JsonValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TemporaryString_GetString_m13E0621057D7FE2FC58C8D3E4C8AE05DBAADF725 (TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7* __this, JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Byte::TryParse(System.String,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_TryParse_mB1716E3B6714F20DF6C1FEDDC4A76AA78D5EA87B (String_t* ___s0, uint8_t* ___result1, const RuntimeMethod* method) ;
// System.Boolean JsonValueExtensions::TryGetValueAsByte(TriLibCore.Utils.JsonParser/JsonValue,System.Byte&,TriLibCore.Gltf.TemporaryString,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetValueAsByte_m378FB7B85EB93E2CDBDFEB3C1359567A10EE70F8 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, uint8_t* ___outValue1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, uint8_t ___defaultValue3, const RuntimeMethod* method) ;
// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Utils.JsonParser/JsonValue::GetChildWithKey(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 JsonValue_GetChildWithKey_mF725566296149F7AAC5F832583624FDA1DB639B5 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* __this, int64_t ___hash0, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Utils.JsonParser/JsonValue::get_Valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_get_Valid_mCD65D0C8C946467D5E808BA12551EA7DEADEDADD (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* __this, const RuntimeMethod* method) ;
// System.Boolean JsonValueExtensions::TryGetChildValueAsByte(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,System.Byte&,TriLibCore.Gltf.TemporaryString,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetChildValueAsByte_mDF57C51C592331419373D60FF78BAA3F219699C6 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, uint8_t* ___outValue2, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString3, uint8_t ___defaultValue4, const RuntimeMethod* method) ;
// System.Boolean System.SByte::TryParse(System.String,System.SByte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SByte_TryParse_m9C205D94AB4FF1CA82EA082E38DD01A493A77ED6 (String_t* ___s0, int8_t* ___result1, const RuntimeMethod* method) ;
// System.Boolean JsonValueExtensions::TryGetValueAsSbyte(TriLibCore.Utils.JsonParser/JsonValue,System.SByte&,TriLibCore.Gltf.TemporaryString,System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetValueAsSbyte_m3EBDC35C5CB10D85316A18B7C889125F4A94CB4E (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int8_t* ___outValue1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, int8_t ___defaultValue3, const RuntimeMethod* method) ;
// System.Boolean JsonValueExtensions::TryGetChildValueAsSbyte(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,System.SByte&,TriLibCore.Gltf.TemporaryString,System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetChildValueAsSbyte_mEEB09464383C3D05FE90A21541833443C5FAFDB5 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, int8_t* ___outValue2, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString3, int8_t ___defaultValue4, const RuntimeMethod* method) ;
// System.Boolean System.Int16::TryParse(System.String,System.Int16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int16_TryParse_m7190AF18437CE1B43990B99E5D992E31485E77AE (String_t* ___s0, int16_t* ___result1, const RuntimeMethod* method) ;
// System.Boolean JsonValueExtensions::TryGetValueAsShort(TriLibCore.Utils.JsonParser/JsonValue,System.Int16&,TriLibCore.Gltf.TemporaryString,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetValueAsShort_mEDB7A1A9F5DEBD5B0E8542F779C9DCAC0B943514 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int16_t* ___outValue1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, int16_t ___defaultValue3, const RuntimeMethod* method) ;
// System.Boolean JsonValueExtensions::TryGetChildValueAsShort(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,System.Int16&,TriLibCore.Gltf.TemporaryString,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetChildValueAsShort_mDA881C282F200D034E1A91110CF2383ABA5BF0F4 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, int16_t* ___outValue2, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString3, int16_t ___defaultValue4, const RuntimeMethod* method) ;
// System.Boolean System.UInt16::TryParse(System.String,System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt16_TryParse_m02DD9A625527B4019B32ACC9A5D3B09D72B2FBB6 (String_t* ___s0, uint16_t* ___result1, const RuntimeMethod* method) ;
// System.Boolean JsonValueExtensions::TryGetValueAsUshort(TriLibCore.Utils.JsonParser/JsonValue,System.UInt16&,TriLibCore.Gltf.TemporaryString,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetValueAsUshort_mA4C64E4AFDE1F28DC2D7377A7C2037FE490BE12D (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, uint16_t* ___outValue1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, uint16_t ___defaultValue3, const RuntimeMethod* method) ;
// System.Boolean JsonValueExtensions::TryGetChildValueAsUshort(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,System.UInt16&,TriLibCore.Gltf.TemporaryString,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetChildValueAsUshort_m1BAD8DB681254441F26F02DB8EB4888BCF9141B8 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, uint16_t* ___outValue2, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString3, uint16_t ___defaultValue4, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.Boolean JsonValueExtensions::TryGetValueAsInt(TriLibCore.Utils.JsonParser/JsonValue,System.Int32&,TriLibCore.Gltf.TemporaryString,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetValueAsInt_mA1906E09D412DC131064CA14EB1AE35E548789D2 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int32_t* ___outValue1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, int32_t ___defaultValue3, const RuntimeMethod* method) ;
// System.Boolean JsonValueExtensions::TryGetChildValueAsInt(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,System.Int32&,TriLibCore.Gltf.TemporaryString,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetChildValueAsInt_mB7ACF668F833F04E4AA35C2CBB000002BCFFF978 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, int32_t* ___outValue2, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString3, int32_t ___defaultValue4, const RuntimeMethod* method) ;
// System.Boolean System.UInt32::TryParse(System.String,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_TryParse_mD470E3BAC9F792AB0BC616510AE3FA78C3CCB1E9 (String_t* ___s0, uint32_t* ___result1, const RuntimeMethod* method) ;
// System.Boolean JsonValueExtensions::TryGetValueAsUint(TriLibCore.Utils.JsonParser/JsonValue,System.UInt32&,TriLibCore.Gltf.TemporaryString,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetValueAsUint_mE22A28C35826A06A6E0B2B7C1024843349E743ED (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, uint32_t* ___outValue1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, uint32_t ___defaultValue3, const RuntimeMethod* method) ;
// System.Boolean JsonValueExtensions::TryGetChildValueAsUint(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,System.UInt32&,TriLibCore.Gltf.TemporaryString,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetChildValueAsUint_m13045A4D74DECBA3B72DAF434C5002A1F4967D44 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, uint32_t* ___outValue2, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString3, uint32_t ___defaultValue4, const RuntimeMethod* method) ;
// System.Boolean System.Boolean::TryParse(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352 (String_t* ___value0, bool* ___result1, const RuntimeMethod* method) ;
// System.Boolean JsonValueExtensions::TryGetValueAsBool(TriLibCore.Utils.JsonParser/JsonValue,System.Boolean&,TriLibCore.Gltf.TemporaryString,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetValueAsBool_mF61D5867BF0CA21E3F4F33A777A88847A4AB0437 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, bool* ___outValue1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, bool ___defaultValue3, const RuntimeMethod* method) ;
// System.Boolean JsonValueExtensions::TryGetChildValueAsBool(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,System.Boolean&,TriLibCore.Gltf.TemporaryString,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetChildValueAsBool_m912D786343A2164698FE7E49609D5419DCDD9B32 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, bool* ___outValue2, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString3, bool ___defaultValue4, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Gltf.GtlfProcessor::LoadModel(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 GtlfProcessor_LoadModel_mA53CAAD95675D28D43E2599D20363408DE7D824D (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Void TriLibCore.ReaderBase::UpdateLoadingPercentage(System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, float ___value0, int32_t ___step1, float ___maxValue2, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Gltf.JsonValueExtensions::TryGetChildWithKey(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,TriLibCore.Utils.JsonParser/JsonValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetChildWithKey_m00DDC2B4946568C3946965AA2B65DA221352D21C (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___key1, JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* ___outValue2, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Utils.JsonParser/JsonValue::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonValue_get_Count_m3F77827D1DC2232A2C9FCC88F4F98EDE3C2672CF (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* __this, const RuntimeMethod* method) ;
// TriLibCore.Gltf.StreamChunk TriLibCore.Gltf.GtlfProcessor::LoadBinaryBuffer(TriLibCore.Utils.JsonParser/JsonValue,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* GtlfProcessor_LoadBinaryBuffer_mE8FD5A41871CE6226141D7832CC0197377A6E786 (GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* __this, JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___buffers0, int32_t ___bufferIndex1, int32_t ___bufferViewByteOffset2, int32_t ___bufferViewLength3, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.AssetLoaderContext::get_MainThreadStall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AssetLoaderContext_get_MainThreadStall_m053EBE09FC53155F1737B7291186187FD61CBFAE (AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<TriLibCore.Utils.JsonParser/JsonValue> TriLibCore.Utils.JsonParser/JsonValue::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonValue_GetEnumerator_m803E3C154054E67F4BACBDC039AAD2BA13FB523E (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* __this, const RuntimeMethod* method) ;
// System.String TriLibCore.Utils.JsonParser/JsonValue::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonValue_ToString_mC70DFC7F0F7201AC85CAE307B64C44BAA74A1EA0 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// TriLibCore.AssetLoaderContext TriLibCore.ReaderBase::get_AssetLoaderContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TriLibCore.Interfaces.ITexture>::.ctor(System.Int32)
inline void List_1__ctor_m9EBFC136CF3059A692BF89968BC243E2484F73B2 (List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// TriLibCore.Gltf.GltfTexture TriLibCore.Gltf.GtlfProcessor::ConvertTexture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* GtlfProcessor_ConvertTexture_mB37EC56851DD5DDAB01148EABD72AFC14B3E6334 (GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* __this, int32_t ___i0, const RuntimeMethod* method) ;
// TriLibCore.Gltf.GltfMaterial TriLibCore.Gltf.GtlfProcessor::ConvertMaterial(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* GtlfProcessor_ConvertMaterial_m5376D06B6289F72EAEAC58EE798819FEE8F44D0A (GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* __this, int32_t ___i0, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Gltf.GtlfProcessor::ConvertGeometryGroup(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GtlfProcessor_ConvertGeometryGroup_m8DF4FFF922D05F2660AF170DC485EA875330137C (GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TriLibCore.Interfaces.ICamera>::.ctor(System.Int32)
inline void List_1__ctor_mF97183B132B3C5DE1FA43120F6E13EB87B480287 (List_1_tAE667BFD8AC1AA42DE64FF5AC0140A17316B2369* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAE667BFD8AC1AA42DE64FF5AC0140A17316B2369*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<TriLibCore.Interfaces.ILight>::.ctor(System.Int32)
inline void List_1__ctor_mBFFB6DE2A8967CC2A0F37DCA88B229DC51D3AF41 (List_1_t9B268D314118DA62547A1DF57114D724FD8E32FE* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9B268D314118DA62547A1DF57114D724FD8E32FE*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void TriLibCore.Gltf.GltfRootModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfRootModel__ctor_m96F355F5F103CF03D742288869F688E414E0C5CE (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.GltfModel::set_Visibility(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfModel_set_Visibility_mB104FE40D13BF90FF6A1E2E91C79DE230972C684_inline (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TriLibCore.Gltf.GltfModel>::.ctor()
inline void Dictionary_2__ctor_mAAD7CCD653C572CB26A533A19DC7A9F3BCFDEE2B (Dictionary_2_tF02E292412E61E0CEAD729AAEA30E75F26A038B3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF02E292412E61E0CEAD729AAEA30E75F26A038B3*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void TriLibCore.Gltf.GltfModel::set_Children(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfModel_set_Children_m1AECD8080C5A22BF51E87737F20DDD7085E11228_inline (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// TriLibCore.Gltf.GltfModel TriLibCore.Gltf.GtlfProcessor::ConvertScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* GtlfProcessor_ConvertScene_m86D2DBFCE12C1C756C5340BEA726548119C2C538 (GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Gltf.GltfModel::get_Children()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GltfModel_get_Children_m655F8116216113238EE8F72EEA782D61243B459B_inline (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Matrix4x4> TriLibCore.Gltf.GtlfProcessor::ConvertBindPoses(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tFA83D9B0331D5487A8CB52C61859A911DEB38393* GtlfProcessor_ConvertBindPoses_mB99DE5F5320C4DF7DFCB2658A98E42F8368208BA (GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* __this, int32_t ___skinIndex0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.GtlfProcessor::PostProcessGltfModel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GtlfProcessor_PostProcessGltfModel_mB764342BD2954F206559F02805BBB40F083256E3 (GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* __this, int32_t ___index0, const RuntimeMethod* method) ;
// TriLibCore.Gltf.GltfAnimation TriLibCore.Gltf.GtlfProcessor::ConvertAnimation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GltfAnimation_t5FCB3628EAE37CD7B330DFB088483BEAE15A8BDA* GtlfProcessor_ConvertAnimation_mC538907C1558DEB4E7D13DD1F08474DFA6666F09 (GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* __this, int32_t ___a0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.GltfRootModel::set_AllAnimations(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfRootModel_set_AllAnimations_mBC336819DA8732F08840DDB3C0F959C2F947AD14_inline (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.GltfRootModel::set_AllMaterials(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfRootModel_set_AllMaterials_m037E9568BEB219D7FC38DC993904148EE7052EAE_inline (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.GltfRootModel::set_AllTextures(System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfRootModel_set_AllTextures_m5217932B980A9D4E2542435198C9AECCB47E9DDF_inline (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.GltfRootModel::set_AllGeometryGroups(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfRootModel_set_AllGeometryGroups_mA2598A11ACE3D10F0166374C0AEC8F8CC65C9731_inline (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,TriLibCore.Gltf.GltfModel>::get_Values()
inline ValueCollection_t34D53559E0BC4B340308D4A57D1CDD77213ECC9C* Dictionary_2_get_Values_m66E7D680DDE4C8FF42E54FD3A71770F766CF0950 (Dictionary_2_tF02E292412E61E0CEAD729AAEA30E75F26A038B3* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t34D53559E0BC4B340308D4A57D1CDD77213ECC9C* (*) (Dictionary_2_tF02E292412E61E0CEAD729AAEA30E75F26A038B3*, const RuntimeMethod*))Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared)(__this, method);
}
// TSource[] System.Linq.Enumerable::ToArray<TriLibCore.Gltf.GltfModel>(System.Collections.Generic.IEnumerable`1<TSource>)
inline GltfModelU5BU5D_t964D72C1BC76BC193CE449249CB2FD1AD6ED93E1* Enumerable_ToArray_TisGltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2_mEC3BBE2379529E5B57AC0BF706A70990D0BF001E (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  GltfModelU5BU5D_t964D72C1BC76BC193CE449249CB2FD1AD6ED93E1* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.Void TriLibCore.Gltf.GltfRootModel::set_AllModels(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfRootModel_set_AllModels_mA59FAAA3786F339E9B7C466ED0EDD5E905877B16_inline (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.GltfRootModel::set_AllCameras(System.Collections.Generic.IList`1<TriLibCore.Interfaces.ICamera>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfRootModel_set_AllCameras_m909C7815EAAADA9B1B103EEC3F9A138458D4CC92_inline (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.GltfRootModel::set_AllLights(System.Collections.Generic.IList`1<TriLibCore.Interfaces.ILight>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfRootModel_set_AllLights_mA65DEA975E7046A658C821E8B7605D95D9342829_inline (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.GltfModel::set_LocalScale(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfModel_set_LocalScale_m3B7956B3910519C3DC2E017D27D560AE29615BA0_inline (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.String TriLibCore.Gltf.JsonValueExtensions::GetValueAsString(TriLibCore.Utils.JsonParser/JsonValue,TriLibCore.Gltf.TemporaryString,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonValueExtensions_GetValueAsString_m0532DB0CC954333227397E66AF720BA23229EE2C (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString1, String_t* ___defaultValue2, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Gltf.JsonValueExtensions::TryGetChildValueAsString(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,System.String&,TriLibCore.Gltf.TemporaryString,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetChildValueAsString_mD84CD396ED8ED763CB518234AD2D34E80DD57258 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, String_t** ___outValue2, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString3, String_t* ___defaultValue4, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Gltf.JsonValueExtensions::TryGetValueAsString(TriLibCore.Utils.JsonParser/JsonValue,System.String&,TriLibCore.Gltf.TemporaryString,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetValueAsString_mAF5754FC7422BF2F01A25C52D59CD0E6B6D7BFF9 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, String_t** ___outValue1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, String_t* ___defaultValue3, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mFB8CC32F0016FBB6EFCB97953CF3515767EB6431 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, float* ___result3, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Gltf.JsonValueExtensions::TryGetValueAsFloat(TriLibCore.Utils.JsonParser/JsonValue,System.Single&,TriLibCore.Gltf.TemporaryString,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetValueAsFloat_m088463E8453625F0A9FB8557C8D8CBA6D081B288 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, float* ___outValue1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, float ___defaultValue3, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Gltf.JsonValueExtensions::TryGetValueAsInt(TriLibCore.Utils.JsonParser/JsonValue,System.Int32&,TriLibCore.Gltf.TemporaryString,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetValueAsInt_m7691631B9C6D4518D3CCF1C4991453B0FC125C07 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int32_t* ___outValue1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, int32_t ___defaultValue3, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Gltf.JsonValueExtensions::TryGetChildValueAsFloat(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,System.Single&,TriLibCore.Gltf.TemporaryString,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetChildValueAsFloat_mAA8A3A0070C62F1172A766DE3DE2144A4417D30A (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, float* ___outValue2, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString3, float ___defaultValue4, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Gltf.JsonValueExtensions::TryGetChildValueAsInt(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,System.Int32&,TriLibCore.Gltf.TemporaryString,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetChildValueAsInt_mA7C9F8DCDE76E0903E92E63DA44867F9E0DA03EF (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, int32_t* ___outValue2, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString3, int32_t ___defaultValue4, const RuntimeMethod* method) ;
// TriLibCore.Utils.JsonParser/JsonValueType TriLibCore.Utils.JsonParser/JsonValue::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonValue_get_Type_m899390B4081FD1FFF0DB96A703C4FB699FC16DFF_inline (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Utils.JsonParser/JsonValue::GetChildAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 JsonValue_GetChildAtIndex_m9EE4910093872ECDFFB22FBA4450114E3BD15E36 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* __this, int32_t ___index0, const RuntimeMethod* method) ;
// TriLibCore.Utils.JsonParser/JsonValue/JsonCharEnumerator TriLibCore.Utils.JsonParser/JsonValue::GetCharEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonCharEnumerator_t378C3FA1DE713F20F39B18EF561B87F0BC1929C1 JsonValue_GetCharEnumerator_m8B86E7753F072951D3012F03AB421FD80589B220 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Utils.JsonParser/JsonValue/JsonCharEnumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonCharEnumerator_Dispose_mEF0CF1AE6945827C974F4371602DB9EE5BBF11B0 (JsonCharEnumerator_t378C3FA1DE713F20F39B18EF561B87F0BC1929C1* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Char TriLibCore.Utils.JsonParser/JsonValue/JsonCharEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar JsonCharEnumerator_get_Current_m863D5EED0ABBA8F12B873CE788EA2FCF2EA4FFB1 (JsonCharEnumerator_t378C3FA1DE713F20F39B18EF561B87F0BC1929C1* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Utils.JsonParser/JsonValue/JsonCharEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonCharEnumerator_MoveNext_m89BBA5DC257969FFDB7DC6831E514E1CE7F909A9 (JsonCharEnumerator_t378C3FA1DE713F20F39B18EF561B87F0BC1929C1* __this, const RuntimeMethod* method) ;
// System.IO.Stream TriLibCore.Gltf.StreamChunk::get_BaseStream()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* StreamChunk_get_BaseStream_mF02EC5BD726384BDA32816E4F5C687365CB10367_inline (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.StreamChunk::set_BaseStream(System.IO.Stream)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StreamChunk_set_BaseStream_mDC58F0B6BB29D0DA04D7F862E603ED9AA2B4A52B_inline (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, RuntimeObject* ___actualValue1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Int64 TriLibCore.Gltf.StreamChunk::get_BasePosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t StreamChunk_get_BasePosition_m5B1C69EF3FAC42F4A02B883A44D8029E695A1FBE_inline (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.GltfModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfModel__ctor_m8B12ADEF72EE1FF063181890A6C04E2629E0B711 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.Geometry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geometry__ctor_m0F5EBDDAEEB9ED6F66946F16F31BAB22BE44D193 (Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Gltf.GltfMaterial::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfMaterial_HasProperty_mA6DD5EED3FAD24F809151168B5732F4D74E73FCA (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Gltf.GltfMaterial::get_UsingSpecularGlossinness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfMaterial_get_UsingSpecularGlossinness_m9F1138A5E3A0D6D8A541C409ABA3B0DDF65351FA (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, const RuntimeMethod* method) ;
// System.Single TriLibCore.Gltf.GltfMaterial::GetGenericFloatValue(TriLibCore.General.GenericMaterialProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GltfMaterial_GetGenericFloatValue_mDC340F746AEFB667ECFECB861203D55B77C6730D (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, int32_t ___materialProperty0, const RuntimeMethod* method) ;
// UnityEngine.Color TriLibCore.Gltf.GltfMaterial::GetGenericColorValue(TriLibCore.General.GenericMaterialProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GltfMaterial_GetGenericColorValue_mF63E308EEE0E1ED25B820336BEBB5247F5C98ADC (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, int32_t ___materialProperty0, const RuntimeMethod* method) ;
// System.Single TriLibCore.Gltf.GltfMaterial::GetFloatValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GltfMaterial_GetFloatValue_mD9DEE32A649C0120D9A69173AD4F61CA934415D1 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) ;
// System.String TriLibCore.Gltf.GltfMaterial::GetGenericPropertyName(TriLibCore.General.GenericMaterialProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GltfMaterial_GetGenericPropertyName_m0BBF0688D772D322BB95BE5408E31D1C82CF5A42 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, int32_t ___genericMaterialProperty0, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Gltf.GltfMaterial::GetIntValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GltfMaterial_GetIntValue_m59F885791C8F5F989A3C2CB040C05FDEDE0CA25D (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// System.String TriLibCore.Gltf.GltfMaterial::GetStringValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GltfMaterial_GetStringValue_mC2A8B494577A8F7483A881FEA93172C143F045D4 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TriLibCore.Gltf.GltfMaterial::GetVector3Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GltfMaterial_GetVector3Value_m40BA2D4D2B3EC41A4FEDE4812C185BD4B9881180 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 TriLibCore.Gltf.GltfMaterial::GetVector4Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GltfMaterial_GetVector4Value_m839CFD054D36CBE6349E8E65905182B21A079595 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// UnityEngine.Color TriLibCore.Gltf.GltfMaterial::GetColorValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GltfMaterial_GetColorValue_m6EEA5D4DA35D9D9B3C167988EECCA101A549FE3E (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// TriLibCore.Interfaces.ITexture TriLibCore.Gltf.GltfMaterial::GetTextureValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfMaterial_GetTextureValue_mB5300F8670D418FA8E9C13837E1F8453B010AC89 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Extensions.DictionaryExtensions::TryGetValueSafe<System.String,System.Object>(System.Collections.Generic.IDictionary`2<TKey,TValue>,TKey,TValue&)
inline bool DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9 (RuntimeObject* ___dictionary0, String_t* ___key1, RuntimeObject** ___value2, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, RuntimeObject**, const RuntimeMethod*))DictionaryExtensions_TryGetValueSafe_TisRuntimeObject_TisRuntimeObject_m31FA8212F5094FA954F0351646B0B012D9736B0B_gshared)(___dictionary0, ___key1, ___value2, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Implicit_mA8CF4745D766F4F610E1BE0A1ED2F4E5FE5D734C_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) ;
// TriLibCore.AssetLoaderContext TriLibCore.TextureLoadingContext::get_Context()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.AssetLoaderContext::TryGetMaterialTexture(TriLibCore.Interfaces.IMaterial,TriLibCore.General.TextureType,UnityEngine.Texture&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AssetLoaderContext_TryGetMaterialTexture_m1DE989D5743FF66C8E7727A4F97FD42547BC512B (AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* __this, RuntimeObject* ___material0, int32_t ___textureType1, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700** ___loadedTexture2, const RuntimeMethod* method) ;
// System.Void TriLibCore.Utils.TextureUtils::ExtractChannelData(System.Int32,TriLibCore.TextureLoadingContext,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtils_ExtractChannelData_m0BBF62657D76CC729095FF92E022B85DD742B936 (int32_t ___channelIndex0, TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext1, String_t* ___suffix2, const RuntimeMethod* method) ;
// UnityEngine.Texture TriLibCore.TextureLoadingContext::get_UnityTexture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, const RuntimeMethod* method) ;
// UnityEngine.Color TriLibCore.Gltf.GltfMaterial::GetGenericColorValueMultiplied(TriLibCore.General.GenericMaterialProperty,TriLibCore.MaterialMapperContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GltfMaterial_GetGenericColorValueMultiplied_m3DD471F67DBE99525C8DF8FFC2D578C5AF34E246 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, int32_t ___genericMaterialProperty0, MaterialMapperContext_t2BDF775C916A28A411960E3787DC933D2E9F0042* ___materialMapperContext1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Single>::.ctor(T)
inline void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420 (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, float, const RuntimeMethod*))Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared)(__this, ___value0, method);
}
// System.Void TriLibCore.Utils.TextureUtils::BuildMetallicTexture(TriLibCore.TextureLoadingContext,UnityEngine.Texture,UnityEngine.Texture,UnityEngine.Texture,UnityEngine.Texture,UnityEngine.Color,UnityEngine.Color,System.Single,System.Nullable`1<System.Single>,System.Nullable`1<System.Single>,System.Boolean,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtils_BuildMetallicTexture_m8A9FEECB31F24524741135CCFEB387210FBE17ED (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___diffuseTexture1, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___metallicTexture2, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___specularTexture3, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___glossinessTexture4, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___defaultDiffuse5, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___defaultSpecular6, float ___shininessExponent7, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___defaultRoughness8, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___defaultMetallic9, bool ___usingRoughness10, bool ___mixTextureChannelsWithColors11, int32_t ___metallicComponentIndex12, int32_t ___glossinessComponentIndex13, const RuntimeMethod* method) ;
// System.Void TriLibCore.Utils.TextureUtils::ApplyTexture2D(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtils_ApplyTexture2D_m77B80263F99FDEA58D10718F3503C08051FD66F0 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) ;
// UnityEngine.Texture TriLibCore.TextureLoadingContext::get_OriginalUnityTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.String TriLibCore.Gltf.GltfModel::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GltfModel_get_Name_m44A2759A9531585217EB070E7BC5B2E12B03B375_inline (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TriLibCore.Gltf.GltfModel::get_LocalPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GltfModel_get_LocalPosition_m0226FF0DA5FA36427DD272454DA10365DD64ED96_inline (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion TriLibCore.Gltf.GltfModel::get_LocalRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GltfModel_get_LocalRotation_m9E05B0215974A1CA3C784E15769C54D9FEFC45D1_inline (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TriLibCore.Gltf.GltfModel::get_LocalScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GltfModel_get_LocalScale_m5AD4BBDA83740FA1C19D5B092401EAAABFDD663D_inline (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IModel TriLibCore.Gltf.GltfModel::get_Parent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GltfModel_get_Parent_mF5F72F59E99F973AF93FFF62CFB03213E64120C9_inline (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mB381575D9E7BA6706F57C22D567610F51B5CD868 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<TriLibCore.Interfaces.IAnimationCurve>::.ctor(System.Int32)
inline void List_1__ctor_m050637C82E9575B3CB1DC7720A6432B96DE8F2A1 (List_1_t098836BD89E26112D46D0209C17F10F176C6D586* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t098836BD89E26112D46D0209C17F10F176C6D586*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.String TriLibCore.Gltf.GltfTexture::get_Filename()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GltfTexture_get_Filename_m79603B286978B911560B7E71FC6A7B6457DF6223_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.IO.Stream TriLibCore.Gltf.GltfTexture::get_DataStream()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* GltfTexture_get_DataStream_m78C51227548078591E510334983542E3FE55DED8_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TriLibCore.Gltf.GltfTexture>::.ctor(System.Int32)
inline void List_1__ctor_mF2089CE11FD3E3DBF9541C4C1122B489E72BD4AB (List_1_t606D24ECFC7D63276BAC4BC062DC93AAECC0EB33* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t606D24ECFC7D63276BAC4BC062DC93AAECC0EB33*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Boolean TriLibCore.Utils.TextureComparators::TextureEquals(TriLibCore.Interfaces.ITexture,TriLibCore.Interfaces.ITexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureComparators_TextureEquals_m566CCA88570A7A060514DCAEF48AE3170D743679 (RuntimeObject* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Utils.TextureComparators::Equals(TriLibCore.Interfaces.ITexture,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureComparators_Equals_mA1D187553F7AC8EB27F3C8D0F2D1316C5E05E4AC (RuntimeObject* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Utils.TextureComparators::GetHashCode(TriLibCore.Interfaces.ITexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureComparators_GetHashCode_mF57C0A300F03E349E694DB594CA2FF73427BECA3 (RuntimeObject* ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 TriLibCore.Gltf.GltfTexture::get_Tiling()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GltfTexture_get_Tiling_mFEAAB3E8149A9EFD97B1063F43646B07E58AF741_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 TriLibCore.Gltf.GltfTexture::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GltfTexture_get_Offset_mFC4F6AA81B54647B0DB71DF46162B702BC511D98_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) ;
// UnityEngine.TextureWrapMode TriLibCore.Gltf.GltfTexture::get_WrapModeU()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GltfTexture_get_WrapModeU_m7BF98972EE75BDD2C7B89A61354C8140938977BA_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) ;
// UnityEngine.TextureWrapMode TriLibCore.Gltf.GltfTexture::get_WrapModeV()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GltfTexture_get_WrapModeV_mF4CBE4399CA34B7B6210DDAB1BC3BB97EA01FD83_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.GltfTexture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfTexture__ctor_mC5C7D8F8CC9626BA0CF2987C054473396C752967 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) ;
// System.String TriLibCore.Gltf.GltfTexture::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GltfTexture_get_Name_m462A1B85755F017D16C4E1BDF14690B4F1D6CCC6_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.GltfTexture::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfTexture_set_Name_m70BE7947472611A64DDDF01FC7E5A12587F4A60E_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.GltfTexture::set_Filename(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfTexture_set_Filename_mC031AA8746A2C2FBFC2691CD2993928B1FF0EEB8_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.GltfTexture::set_DataStream(System.IO.Stream)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfTexture_set_DataStream_mCF4AA7BEC7E868BE8430F31B0D825DC9B44ECBC1_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.GltfTexture::set_WrapModeU(UnityEngine.TextureWrapMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfTexture_set_WrapModeU_m81AD5018616FAF2FE7B7441DEEB0B9A4699649BD_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.GltfTexture::set_WrapModeV(UnityEngine.TextureWrapMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfTexture_set_WrapModeV_m2453F4E391C58F881C3218172B058B3902D8F9C3_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Gltf.GltfTexture::get_TextureId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GltfTexture_get_TextureId_m1F53C4D9772FC0A4189FF212084C1AFB50E7DBC2_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.GltfTexture::set_TextureId(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfTexture_set_TextureId_m41C5BC6BB42FFEEA88FFF8F36DABDF403F8495B7_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, int32_t ___value0, const RuntimeMethod* method) ;
// TriLibCore.General.TextureFormat TriLibCore.Gltf.GltfTexture::get_TextureFormat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GltfTexture_get_TextureFormat_m3E443311277883CF97207657BE98095C605C90C0_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.GltfTexture::set_TextureFormat(TriLibCore.General.TextureFormat)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfTexture_set_TextureFormat_mA70D678A60ED5664862252F855EA5F12E0358456_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.GltfTexture::set_Index(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfTexture_set_Index_mEBD01A47246DDFA65D63BFEA418E534CE168204B_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.GltfTexture::set_Tiling(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfTexture_set_Tiling_m024B66B808551A6DB90428782D94A629D7340989_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.GltfTexture::set_Offset(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfTexture_set_Offset_mC7C4FCA647FAA257CAC7CEE793884E534540DBEE_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.TemporaryString::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TemporaryString__ctor_m53730179272D19FE464D2A9AB74E82337BF40C84 (TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7* __this, int32_t ___length0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemSet(System.Void*,System.Byte,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B (void* ___destination0, uint8_t ___value1, int64_t ___size2, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Utils.JsonParser/JsonValue::CopyTo(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonValue_CopyTo_m19C8979ABD0FF52FCE82585D7724A0AA5E6DFAED (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___buffer0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD (const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method) ;
// System.Void TriLibCore.ReaderBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase__ctor_m5C4FE7A4BC205B65DAB56FF3CC5202D0B04937DA (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.GtlfProcessor::.ctor(TriLibCore.Gltf.Reader.GltfReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GtlfProcessor__ctor_mFC99051F9A1BB0E858525318A04FA48214844070 (GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* __this, GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* ___reader0, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IRootModel TriLibCore.ReaderBase::ReadStream(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReaderBase_ReadStream_m725378DF096B29E0DB3BE3FB9E5F1E37747883F4 (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext1, String_t* ___filename2, Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___onProgress3, const RuntimeMethod* method) ;
// System.Void TriLibCore.ReaderBase::SetupStream(System.IO.Stream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase_SetupStream_mCDC78453E3657CB3FBB713C40FB50B4941455942 (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE** ___stream0, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IRootModel TriLibCore.Gltf.GtlfProcessor::ParseModel(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GtlfProcessor_ParseModel_mB501D32A6D08024CF9CF3FC2C01D7A5053D36122 (GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Void TriLibCore.ReaderBase::PostProcessModel(TriLibCore.Interfaces.IRootModel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase_PostProcessModel_mD3BB953DE8BEB5FCA65077455BDA0750F740C667 (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, RuntimeObject** ___model0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Gltf.Reader.GltfReader/<ReadStream_Coroutine>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadStream_CoroutineU3Ed__12__ctor_m8911285E29729A205B40C11F9BCA8C06BBC16DCE (U3CReadStream_CoroutineU3Ed__12_tFB45C9FFA314E4937845F70F6D39F97DDC3068A7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IRootModel TriLibCore.Gltf.Reader.GltfReader::<>n__0(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfReader_U3CU3En__0_mE4501CB540D453DAF5AD0A79A66DF8068B3C8A85 (GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext1, String_t* ___filename2, Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___onProgress3, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TriLibCore.Gltf.GtlfProcessor::ParseModel_Coroutine(TriLibCore.AssetLoaderContext,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GtlfProcessor_ParseModel_Coroutine_mB43A2198B50FD3A4CAA715895AB8B3943927F0E7 (GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* __this, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ____assetLoaderContext0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
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
// System.Boolean JsonValueExtensions::TryGetValueAsByte(TriLibCore.Utils.JsonParser/JsonValue,System.Byte&,TriLibCore.Gltf.TemporaryString,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetValueAsByte_m378FB7B85EB93E2CDBDFEB3C1359567A10EE70F8 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, uint8_t* ___outValue1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, uint8_t ___defaultValue3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		String_t* L_1;
		L_1 = TemporaryString_GetString_m13E0621057D7FE2FC58C8D3E4C8AE05DBAADF725((&___temporaryString2), L_0, NULL);
		uint8_t* L_2 = ___outValue1;
		bool L_3;
		L_3 = Byte_TryParse_mB1716E3B6714F20DF6C1FEDDC4A76AA78D5EA87B(L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		V_1 = L_4;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Byte JsonValueExtensions::GetValueAsByte(TriLibCore.Utils.JsonParser/JsonValue,TriLibCore.Gltf.TemporaryString,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t JsonValueExtensions_GetValueAsByte_mB1DC1B41C3A7768759ED62F69EE0846C1288149E (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString1, uint8_t ___defaultValue2, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	bool V_1 = false;
	uint8_t V_2 = 0x0;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_1 = ___temporaryString1;
		uint8_t L_2 = ___defaultValue2;
		bool L_3;
		L_3 = JsonValueExtensions_TryGetValueAsByte_m378FB7B85EB93E2CDBDFEB3C1359567A10EE70F8(L_0, (&V_0), L_1, L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		uint8_t L_5 = V_0;
		V_2 = L_5;
		goto IL_0018;
	}

IL_0014:
	{
		uint8_t L_6 = ___defaultValue2;
		V_2 = L_6;
		goto IL_0018;
	}

IL_0018:
	{
		uint8_t L_7 = V_2;
		return L_7;
	}
}
// System.Boolean JsonValueExtensions::TryGetChildValueAsByte(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,System.Byte&,TriLibCore.Gltf.TemporaryString,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetChildValueAsByte_mDF57C51C592331419373D60FF78BAA3F219699C6 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, uint8_t* ___outValue2, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString3, uint8_t ___defaultValue4, const RuntimeMethod* method) 
{
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		int64_t L_0 = ___fieldName1;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_1;
		L_1 = JsonValue_GetChildWithKey_mF725566296149F7AAC5F832583624FDA1DB639B5((&___value0), L_0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = JsonValue_get_Valid_mCD65D0C8C946467D5E808BA12551EA7DEADEDADD((&V_0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		uint8_t* L_4 = ___outValue2;
		uint8_t L_5 = ___defaultValue4;
		*((int8_t*)L_4) = (int8_t)L_5;
		V_2 = (bool)0;
		goto IL_002e;
	}

IL_0021:
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_6 = V_0;
		uint8_t* L_7 = ___outValue2;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_8 = ___temporaryString3;
		uint8_t L_9 = ___defaultValue4;
		bool L_10;
		L_10 = JsonValueExtensions_TryGetValueAsByte_m378FB7B85EB93E2CDBDFEB3C1359567A10EE70F8(L_6, L_7, L_8, L_9, NULL);
		V_2 = L_10;
		goto IL_002e;
	}

IL_002e:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Byte JsonValueExtensions::GetChildValueAsByte(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,TriLibCore.Gltf.TemporaryString,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t JsonValueExtensions_GetChildValueAsByte_m714CB0BC303A514096CB7E32F9731DAABFDC6E60 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, uint8_t ___defaultValue3, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	bool V_1 = false;
	uint8_t V_2 = 0x0;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		int64_t L_1 = ___fieldName1;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_2 = ___temporaryString2;
		uint8_t L_3 = ___defaultValue3;
		bool L_4;
		L_4 = JsonValueExtensions_TryGetChildValueAsByte_mDF57C51C592331419373D60FF78BAA3F219699C6(L_0, L_1, (&V_0), L_2, L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0015;
		}
	}
	{
		uint8_t L_6 = V_0;
		V_2 = L_6;
		goto IL_0019;
	}

IL_0015:
	{
		uint8_t L_7 = ___defaultValue3;
		V_2 = L_7;
		goto IL_0019;
	}

IL_0019:
	{
		uint8_t L_8 = V_2;
		return L_8;
	}
}
// System.Boolean JsonValueExtensions::TryGetValueAsSbyte(TriLibCore.Utils.JsonParser/JsonValue,System.SByte&,TriLibCore.Gltf.TemporaryString,System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetValueAsSbyte_m3EBDC35C5CB10D85316A18B7C889125F4A94CB4E (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int8_t* ___outValue1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, int8_t ___defaultValue3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		String_t* L_1;
		L_1 = TemporaryString_GetString_m13E0621057D7FE2FC58C8D3E4C8AE05DBAADF725((&___temporaryString2), L_0, NULL);
		int8_t* L_2 = ___outValue1;
		bool L_3;
		L_3 = SByte_TryParse_m9C205D94AB4FF1CA82EA082E38DD01A493A77ED6(L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		V_1 = L_4;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.SByte JsonValueExtensions::GetValueAsSbyte(TriLibCore.Utils.JsonParser/JsonValue,TriLibCore.Gltf.TemporaryString,System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t JsonValueExtensions_GetValueAsSbyte_m41ECA96BFF76FDE4976B22B2E9AFDB9EEBF6D049 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString1, int8_t ___defaultValue2, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	bool V_1 = false;
	int8_t V_2 = 0x0;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_1 = ___temporaryString1;
		int8_t L_2 = ___defaultValue2;
		bool L_3;
		L_3 = JsonValueExtensions_TryGetValueAsSbyte_m3EBDC35C5CB10D85316A18B7C889125F4A94CB4E(L_0, (&V_0), L_1, L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		int8_t L_5 = V_0;
		V_2 = L_5;
		goto IL_0018;
	}

IL_0014:
	{
		int8_t L_6 = ___defaultValue2;
		V_2 = L_6;
		goto IL_0018;
	}

IL_0018:
	{
		int8_t L_7 = V_2;
		return L_7;
	}
}
// System.Boolean JsonValueExtensions::TryGetChildValueAsSbyte(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,System.SByte&,TriLibCore.Gltf.TemporaryString,System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetChildValueAsSbyte_mEEB09464383C3D05FE90A21541833443C5FAFDB5 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, int8_t* ___outValue2, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString3, int8_t ___defaultValue4, const RuntimeMethod* method) 
{
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		int64_t L_0 = ___fieldName1;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_1;
		L_1 = JsonValue_GetChildWithKey_mF725566296149F7AAC5F832583624FDA1DB639B5((&___value0), L_0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = JsonValue_get_Valid_mCD65D0C8C946467D5E808BA12551EA7DEADEDADD((&V_0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		int8_t* L_4 = ___outValue2;
		int8_t L_5 = ___defaultValue4;
		*((int8_t*)L_4) = (int8_t)L_5;
		V_2 = (bool)0;
		goto IL_002e;
	}

IL_0021:
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_6 = V_0;
		int8_t* L_7 = ___outValue2;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_8 = ___temporaryString3;
		int8_t L_9 = ___defaultValue4;
		bool L_10;
		L_10 = JsonValueExtensions_TryGetValueAsSbyte_m3EBDC35C5CB10D85316A18B7C889125F4A94CB4E(L_6, L_7, L_8, L_9, NULL);
		V_2 = L_10;
		goto IL_002e;
	}

IL_002e:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.SByte JsonValueExtensions::GetChildValueAsSbyte(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,TriLibCore.Gltf.TemporaryString,System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t JsonValueExtensions_GetChildValueAsSbyte_m15A99D306F0E5CEB9F93DC4D8A5F4328878B2DC7 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, int8_t ___defaultValue3, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	bool V_1 = false;
	int8_t V_2 = 0x0;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		int64_t L_1 = ___fieldName1;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_2 = ___temporaryString2;
		int8_t L_3 = ___defaultValue3;
		bool L_4;
		L_4 = JsonValueExtensions_TryGetChildValueAsSbyte_mEEB09464383C3D05FE90A21541833443C5FAFDB5(L_0, L_1, (&V_0), L_2, L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0015;
		}
	}
	{
		int8_t L_6 = V_0;
		V_2 = L_6;
		goto IL_0019;
	}

IL_0015:
	{
		int8_t L_7 = ___defaultValue3;
		V_2 = L_7;
		goto IL_0019;
	}

IL_0019:
	{
		int8_t L_8 = V_2;
		return L_8;
	}
}
// System.Boolean JsonValueExtensions::TryGetValueAsShort(TriLibCore.Utils.JsonParser/JsonValue,System.Int16&,TriLibCore.Gltf.TemporaryString,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetValueAsShort_mEDB7A1A9F5DEBD5B0E8542F779C9DCAC0B943514 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int16_t* ___outValue1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, int16_t ___defaultValue3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		String_t* L_1;
		L_1 = TemporaryString_GetString_m13E0621057D7FE2FC58C8D3E4C8AE05DBAADF725((&___temporaryString2), L_0, NULL);
		int16_t* L_2 = ___outValue1;
		bool L_3;
		L_3 = Int16_TryParse_m7190AF18437CE1B43990B99E5D992E31485E77AE(L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		V_1 = L_4;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Int16 JsonValueExtensions::GetValueAsShort(TriLibCore.Utils.JsonParser/JsonValue,TriLibCore.Gltf.TemporaryString,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t JsonValueExtensions_GetValueAsShort_m0A7150CBC7B422766BCE0B597450D8973B834D42 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString1, int16_t ___defaultValue2, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	bool V_1 = false;
	int16_t V_2 = 0;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_1 = ___temporaryString1;
		int16_t L_2 = ___defaultValue2;
		bool L_3;
		L_3 = JsonValueExtensions_TryGetValueAsShort_mEDB7A1A9F5DEBD5B0E8542F779C9DCAC0B943514(L_0, (&V_0), L_1, L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		int16_t L_5 = V_0;
		V_2 = L_5;
		goto IL_0018;
	}

IL_0014:
	{
		int16_t L_6 = ___defaultValue2;
		V_2 = L_6;
		goto IL_0018;
	}

IL_0018:
	{
		int16_t L_7 = V_2;
		return L_7;
	}
}
// System.Boolean JsonValueExtensions::TryGetChildValueAsShort(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,System.Int16&,TriLibCore.Gltf.TemporaryString,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetChildValueAsShort_mDA881C282F200D034E1A91110CF2383ABA5BF0F4 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, int16_t* ___outValue2, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString3, int16_t ___defaultValue4, const RuntimeMethod* method) 
{
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		int64_t L_0 = ___fieldName1;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_1;
		L_1 = JsonValue_GetChildWithKey_mF725566296149F7AAC5F832583624FDA1DB639B5((&___value0), L_0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = JsonValue_get_Valid_mCD65D0C8C946467D5E808BA12551EA7DEADEDADD((&V_0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		int16_t* L_4 = ___outValue2;
		int16_t L_5 = ___defaultValue4;
		*((int16_t*)L_4) = (int16_t)L_5;
		V_2 = (bool)0;
		goto IL_002e;
	}

IL_0021:
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_6 = V_0;
		int16_t* L_7 = ___outValue2;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_8 = ___temporaryString3;
		int16_t L_9 = ___defaultValue4;
		bool L_10;
		L_10 = JsonValueExtensions_TryGetValueAsShort_mEDB7A1A9F5DEBD5B0E8542F779C9DCAC0B943514(L_6, L_7, L_8, L_9, NULL);
		V_2 = L_10;
		goto IL_002e;
	}

IL_002e:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Int16 JsonValueExtensions::GetChildValueAsShort(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,TriLibCore.Gltf.TemporaryString,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t JsonValueExtensions_GetChildValueAsShort_mB68303E2EC30D45413681F42B2AA511592870D15 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, int16_t ___defaultValue3, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	bool V_1 = false;
	int16_t V_2 = 0;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		int64_t L_1 = ___fieldName1;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_2 = ___temporaryString2;
		int16_t L_3 = ___defaultValue3;
		bool L_4;
		L_4 = JsonValueExtensions_TryGetChildValueAsShort_mDA881C282F200D034E1A91110CF2383ABA5BF0F4(L_0, L_1, (&V_0), L_2, L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0015;
		}
	}
	{
		int16_t L_6 = V_0;
		V_2 = L_6;
		goto IL_0019;
	}

IL_0015:
	{
		int16_t L_7 = ___defaultValue3;
		V_2 = L_7;
		goto IL_0019;
	}

IL_0019:
	{
		int16_t L_8 = V_2;
		return L_8;
	}
}
// System.Boolean JsonValueExtensions::TryGetValueAsUshort(TriLibCore.Utils.JsonParser/JsonValue,System.UInt16&,TriLibCore.Gltf.TemporaryString,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetValueAsUshort_mA4C64E4AFDE1F28DC2D7377A7C2037FE490BE12D (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, uint16_t* ___outValue1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, uint16_t ___defaultValue3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		String_t* L_1;
		L_1 = TemporaryString_GetString_m13E0621057D7FE2FC58C8D3E4C8AE05DBAADF725((&___temporaryString2), L_0, NULL);
		uint16_t* L_2 = ___outValue1;
		bool L_3;
		L_3 = UInt16_TryParse_m02DD9A625527B4019B32ACC9A5D3B09D72B2FBB6(L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		V_1 = L_4;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.UInt16 JsonValueExtensions::GetValueAsUshort(TriLibCore.Utils.JsonParser/JsonValue,TriLibCore.Gltf.TemporaryString,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t JsonValueExtensions_GetValueAsUshort_m7DA7E5544B53BD26D427FDA61027D34A7B192BC8 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString1, uint16_t ___defaultValue2, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	bool V_1 = false;
	uint16_t V_2 = 0;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_1 = ___temporaryString1;
		uint16_t L_2 = ___defaultValue2;
		bool L_3;
		L_3 = JsonValueExtensions_TryGetValueAsUshort_mA4C64E4AFDE1F28DC2D7377A7C2037FE490BE12D(L_0, (&V_0), L_1, L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		uint16_t L_5 = V_0;
		V_2 = L_5;
		goto IL_0018;
	}

IL_0014:
	{
		uint16_t L_6 = ___defaultValue2;
		V_2 = L_6;
		goto IL_0018;
	}

IL_0018:
	{
		uint16_t L_7 = V_2;
		return L_7;
	}
}
// System.Boolean JsonValueExtensions::TryGetChildValueAsUshort(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,System.UInt16&,TriLibCore.Gltf.TemporaryString,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetChildValueAsUshort_m1BAD8DB681254441F26F02DB8EB4888BCF9141B8 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, uint16_t* ___outValue2, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString3, uint16_t ___defaultValue4, const RuntimeMethod* method) 
{
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		int64_t L_0 = ___fieldName1;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_1;
		L_1 = JsonValue_GetChildWithKey_mF725566296149F7AAC5F832583624FDA1DB639B5((&___value0), L_0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = JsonValue_get_Valid_mCD65D0C8C946467D5E808BA12551EA7DEADEDADD((&V_0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		uint16_t* L_4 = ___outValue2;
		uint16_t L_5 = ___defaultValue4;
		*((int16_t*)L_4) = (int16_t)L_5;
		V_2 = (bool)0;
		goto IL_002e;
	}

IL_0021:
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_6 = V_0;
		uint16_t* L_7 = ___outValue2;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_8 = ___temporaryString3;
		uint16_t L_9 = ___defaultValue4;
		bool L_10;
		L_10 = JsonValueExtensions_TryGetValueAsUshort_mA4C64E4AFDE1F28DC2D7377A7C2037FE490BE12D(L_6, L_7, L_8, L_9, NULL);
		V_2 = L_10;
		goto IL_002e;
	}

IL_002e:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.UInt16 JsonValueExtensions::GetChildValueAsUshort(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,TriLibCore.Gltf.TemporaryString,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t JsonValueExtensions_GetChildValueAsUshort_m87E868F8F49CA030A2FD4938BC78F44CA8FB67ED (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, uint16_t ___defaultValue3, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	bool V_1 = false;
	uint16_t V_2 = 0;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		int64_t L_1 = ___fieldName1;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_2 = ___temporaryString2;
		uint16_t L_3 = ___defaultValue3;
		bool L_4;
		L_4 = JsonValueExtensions_TryGetChildValueAsUshort_m1BAD8DB681254441F26F02DB8EB4888BCF9141B8(L_0, L_1, (&V_0), L_2, L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0015;
		}
	}
	{
		uint16_t L_6 = V_0;
		V_2 = L_6;
		goto IL_0019;
	}

IL_0015:
	{
		uint16_t L_7 = ___defaultValue3;
		V_2 = L_7;
		goto IL_0019;
	}

IL_0019:
	{
		uint16_t L_8 = V_2;
		return L_8;
	}
}
// System.Boolean JsonValueExtensions::TryGetValueAsInt(TriLibCore.Utils.JsonParser/JsonValue,System.Int32&,TriLibCore.Gltf.TemporaryString,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetValueAsInt_mA1906E09D412DC131064CA14EB1AE35E548789D2 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int32_t* ___outValue1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, int32_t ___defaultValue3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		String_t* L_1;
		L_1 = TemporaryString_GetString_m13E0621057D7FE2FC58C8D3E4C8AE05DBAADF725((&___temporaryString2), L_0, NULL);
		int32_t* L_2 = ___outValue1;
		bool L_3;
		L_3 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		V_1 = L_4;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Int32 JsonValueExtensions::GetValueAsInt(TriLibCore.Utils.JsonParser/JsonValue,TriLibCore.Gltf.TemporaryString,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonValueExtensions_GetValueAsInt_mB91346BFD1059A9057EEE69838D6011A09D2BE24 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString1, int32_t ___defaultValue2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_1 = ___temporaryString1;
		int32_t L_2 = ___defaultValue2;
		bool L_3;
		L_3 = JsonValueExtensions_TryGetValueAsInt_mA1906E09D412DC131064CA14EB1AE35E548789D2(L_0, (&V_0), L_1, L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_5 = V_0;
		V_2 = L_5;
		goto IL_0018;
	}

IL_0014:
	{
		int32_t L_6 = ___defaultValue2;
		V_2 = L_6;
		goto IL_0018;
	}

IL_0018:
	{
		int32_t L_7 = V_2;
		return L_7;
	}
}
// System.Boolean JsonValueExtensions::TryGetChildValueAsInt(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,System.Int32&,TriLibCore.Gltf.TemporaryString,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetChildValueAsInt_mB7ACF668F833F04E4AA35C2CBB000002BCFFF978 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, int32_t* ___outValue2, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString3, int32_t ___defaultValue4, const RuntimeMethod* method) 
{
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		int64_t L_0 = ___fieldName1;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_1;
		L_1 = JsonValue_GetChildWithKey_mF725566296149F7AAC5F832583624FDA1DB639B5((&___value0), L_0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = JsonValue_get_Valid_mCD65D0C8C946467D5E808BA12551EA7DEADEDADD((&V_0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		int32_t* L_4 = ___outValue2;
		int32_t L_5 = ___defaultValue4;
		*((int32_t*)L_4) = (int32_t)L_5;
		V_2 = (bool)0;
		goto IL_002e;
	}

IL_0021:
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_6 = V_0;
		int32_t* L_7 = ___outValue2;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_8 = ___temporaryString3;
		int32_t L_9 = ___defaultValue4;
		bool L_10;
		L_10 = JsonValueExtensions_TryGetValueAsInt_mA1906E09D412DC131064CA14EB1AE35E548789D2(L_6, L_7, L_8, L_9, NULL);
		V_2 = L_10;
		goto IL_002e;
	}

IL_002e:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Int32 JsonValueExtensions::GetChildValueAsInt(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,TriLibCore.Gltf.TemporaryString,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonValueExtensions_GetChildValueAsInt_mCBA6807325D5EC31D37B51B04204F03727E87A4A (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, int32_t ___defaultValue3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		int64_t L_1 = ___fieldName1;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_2 = ___temporaryString2;
		int32_t L_3 = ___defaultValue3;
		bool L_4;
		L_4 = JsonValueExtensions_TryGetChildValueAsInt_mB7ACF668F833F04E4AA35C2CBB000002BCFFF978(L_0, L_1, (&V_0), L_2, L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_6 = V_0;
		V_2 = L_6;
		goto IL_0019;
	}

IL_0015:
	{
		int32_t L_7 = ___defaultValue3;
		V_2 = L_7;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_8 = V_2;
		return L_8;
	}
}
// System.Boolean JsonValueExtensions::TryGetValueAsUint(TriLibCore.Utils.JsonParser/JsonValue,System.UInt32&,TriLibCore.Gltf.TemporaryString,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetValueAsUint_mE22A28C35826A06A6E0B2B7C1024843349E743ED (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, uint32_t* ___outValue1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, uint32_t ___defaultValue3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		String_t* L_1;
		L_1 = TemporaryString_GetString_m13E0621057D7FE2FC58C8D3E4C8AE05DBAADF725((&___temporaryString2), L_0, NULL);
		uint32_t* L_2 = ___outValue1;
		bool L_3;
		L_3 = UInt32_TryParse_mD470E3BAC9F792AB0BC616510AE3FA78C3CCB1E9(L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		V_1 = L_4;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.UInt32 JsonValueExtensions::GetValueAsUint(TriLibCore.Utils.JsonParser/JsonValue,TriLibCore.Gltf.TemporaryString,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t JsonValueExtensions_GetValueAsUint_mF6811951FA99F0E03AF99CB2A6BA7F58280608F8 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString1, uint32_t ___defaultValue2, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_1 = ___temporaryString1;
		uint32_t L_2 = ___defaultValue2;
		bool L_3;
		L_3 = JsonValueExtensions_TryGetValueAsUint_mE22A28C35826A06A6E0B2B7C1024843349E743ED(L_0, (&V_0), L_1, L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		uint32_t L_5 = V_0;
		V_2 = L_5;
		goto IL_0018;
	}

IL_0014:
	{
		uint32_t L_6 = ___defaultValue2;
		V_2 = L_6;
		goto IL_0018;
	}

IL_0018:
	{
		uint32_t L_7 = V_2;
		return L_7;
	}
}
// System.Boolean JsonValueExtensions::TryGetChildValueAsUint(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,System.UInt32&,TriLibCore.Gltf.TemporaryString,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetChildValueAsUint_m13045A4D74DECBA3B72DAF434C5002A1F4967D44 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, uint32_t* ___outValue2, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString3, uint32_t ___defaultValue4, const RuntimeMethod* method) 
{
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		int64_t L_0 = ___fieldName1;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_1;
		L_1 = JsonValue_GetChildWithKey_mF725566296149F7AAC5F832583624FDA1DB639B5((&___value0), L_0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = JsonValue_get_Valid_mCD65D0C8C946467D5E808BA12551EA7DEADEDADD((&V_0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		uint32_t* L_4 = ___outValue2;
		uint32_t L_5 = ___defaultValue4;
		*((int32_t*)L_4) = (int32_t)L_5;
		V_2 = (bool)0;
		goto IL_002e;
	}

IL_0021:
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_6 = V_0;
		uint32_t* L_7 = ___outValue2;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_8 = ___temporaryString3;
		uint32_t L_9 = ___defaultValue4;
		bool L_10;
		L_10 = JsonValueExtensions_TryGetValueAsUint_mE22A28C35826A06A6E0B2B7C1024843349E743ED(L_6, L_7, L_8, L_9, NULL);
		V_2 = L_10;
		goto IL_002e;
	}

IL_002e:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.UInt32 JsonValueExtensions::GetChildValueAsUint(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,TriLibCore.Gltf.TemporaryString,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t JsonValueExtensions_GetChildValueAsUint_m2132E1A6D9DBE331151EB263452E53FBB40F6199 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, uint32_t ___defaultValue3, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		int64_t L_1 = ___fieldName1;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_2 = ___temporaryString2;
		uint32_t L_3 = ___defaultValue3;
		bool L_4;
		L_4 = JsonValueExtensions_TryGetChildValueAsUint_m13045A4D74DECBA3B72DAF434C5002A1F4967D44(L_0, L_1, (&V_0), L_2, L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0015;
		}
	}
	{
		uint32_t L_6 = V_0;
		V_2 = L_6;
		goto IL_0019;
	}

IL_0015:
	{
		uint32_t L_7 = ___defaultValue3;
		V_2 = L_7;
		goto IL_0019;
	}

IL_0019:
	{
		uint32_t L_8 = V_2;
		return L_8;
	}
}
// System.Boolean JsonValueExtensions::TryGetValueAsBool(TriLibCore.Utils.JsonParser/JsonValue,System.Boolean&,TriLibCore.Gltf.TemporaryString,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetValueAsBool_mF61D5867BF0CA21E3F4F33A777A88847A4AB0437 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, bool* ___outValue1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, bool ___defaultValue3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		String_t* L_1;
		L_1 = TemporaryString_GetString_m13E0621057D7FE2FC58C8D3E4C8AE05DBAADF725((&___temporaryString2), L_0, NULL);
		bool* L_2 = ___outValue1;
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352(L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		V_1 = L_4;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean JsonValueExtensions::GetValueAsBool(TriLibCore.Utils.JsonParser/JsonValue,TriLibCore.Gltf.TemporaryString,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_GetValueAsBool_mF904FC8C4A1E8771B9AB29643B8B1AA081818C5E (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString1, bool ___defaultValue2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_1 = ___temporaryString1;
		bool L_2 = ___defaultValue2;
		bool L_3;
		L_3 = JsonValueExtensions_TryGetValueAsBool_mF61D5867BF0CA21E3F4F33A777A88847A4AB0437(L_0, (&V_0), L_1, L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		bool L_5 = V_0;
		V_2 = L_5;
		goto IL_0018;
	}

IL_0014:
	{
		bool L_6 = ___defaultValue2;
		V_2 = L_6;
		goto IL_0018;
	}

IL_0018:
	{
		bool L_7 = V_2;
		return L_7;
	}
}
// System.Boolean JsonValueExtensions::TryGetChildValueAsBool(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,System.Boolean&,TriLibCore.Gltf.TemporaryString,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetChildValueAsBool_m912D786343A2164698FE7E49609D5419DCDD9B32 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, bool* ___outValue2, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString3, bool ___defaultValue4, const RuntimeMethod* method) 
{
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		int64_t L_0 = ___fieldName1;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_1;
		L_1 = JsonValue_GetChildWithKey_mF725566296149F7AAC5F832583624FDA1DB639B5((&___value0), L_0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = JsonValue_get_Valid_mCD65D0C8C946467D5E808BA12551EA7DEADEDADD((&V_0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		bool* L_4 = ___outValue2;
		bool L_5 = ___defaultValue4;
		*((int8_t*)L_4) = (int8_t)L_5;
		V_2 = (bool)0;
		goto IL_002e;
	}

IL_0021:
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_6 = V_0;
		bool* L_7 = ___outValue2;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_8 = ___temporaryString3;
		bool L_9 = ___defaultValue4;
		bool L_10;
		L_10 = JsonValueExtensions_TryGetValueAsBool_mF61D5867BF0CA21E3F4F33A777A88847A4AB0437(L_6, L_7, L_8, L_9, NULL);
		V_2 = L_10;
		goto IL_002e;
	}

IL_002e:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Boolean JsonValueExtensions::GetChildValueAsBool(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,TriLibCore.Gltf.TemporaryString,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_GetChildValueAsBool_mAC73F85A29F311FAB7B9260DBFB32F6B0E2B97BF (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, bool ___defaultValue3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		int64_t L_1 = ___fieldName1;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_2 = ___temporaryString2;
		bool L_3 = ___defaultValue3;
		bool L_4;
		L_4 = JsonValueExtensions_TryGetChildValueAsBool_m912D786343A2164698FE7E49609D5419DCDD9B32(L_0, L_1, (&V_0), L_2, L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0015;
		}
	}
	{
		bool L_6 = V_0;
		V_2 = L_6;
		goto IL_0019;
	}

IL_0015:
	{
		bool L_7 = ___defaultValue3;
		V_2 = L_7;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_8 = V_2;
		return L_8;
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
// System.Void TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseModel_CoroutineU3Ed__254__ctor_m96E401212CAE32FC5F3265A6C28BFC1482F87BCB (U3CParseModel_CoroutineU3Ed__254_t51CF6FAF439B4824591E4E3DB1D70113416261D2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseModel_CoroutineU3Ed__254_System_IDisposable_Dispose_m36A1B42502B42EEE03E6F7351B04745182326280 (U3CParseModel_CoroutineU3Ed__254_t51CF6FAF439B4824591E4E3DB1D70113416261D2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CParseModel_CoroutineU3Ed__254_MoveNext_mC421520DBD2C2D9815791DF5B321D61BBD0BB680 (U3CParseModel_CoroutineU3Ed__254_t51CF6FAF439B4824591E4E3DB1D70113416261D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2U5BU5D_t1C8B29337AC2B2BAE4525B35ADAA299185E6FC49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAAD7CCD653C572CB26A533A19DC7A9F3BCFDEE2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m66E7D680DDE4C8FF42E54FD3A71770F766CF0950_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF02E292412E61E0CEAD729AAEA30E75F26A038B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisGltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2_mEC3BBE2379529E5B57AC0BF706A70990D0BF001E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAnimationU5BU5D_t70DF9CA11F100A23CC71AA7A9C3ECC44413BF683_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t9D9853EC356A71B3BC036D2810F70EC0DF1361DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA7F3B25A00B66033D1D8DEA7E4C04394A2890FC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tBAC2F9CBFB365F17F69446225AF2802DEF7B2956_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9EBFC136CF3059A692BF89968BC243E2484F73B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBFFB6DE2A8967CC2A0F37DCA88B229DC51D3AF41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF97183B132B3C5DE1FA43120F6E13EB87B480287_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9B268D314118DA62547A1DF57114D724FD8E32FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAE667BFD8AC1AA42DE64FF5AC0140A17316B2369_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamChunkU5BU5D_tB8CEFF6BD29A73CA0268FEF0416BDA1EF08AE299_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B530CD3FD6023AD01C36548575CBF2BC86F8E40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FEDC483F2F8CCF14092653696B3D46F76D676B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB8539000B9A5E473A776F6627222A27CDFFBA0B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
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
	bool V_31 = false;
	int32_t G_B41_0 = 0;
	int32_t G_B52_0 = 0;
	int32_t G_B63_0 = 0;
	int32_t G_B74_0 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B94_0 = 0;
	int32_t G_B105_0 = 0;
	int32_t G_B116_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0033;
			}
			case 1:
			{
				goto IL_0035;
			}
			case 2:
			{
				goto IL_003a;
			}
			case 3:
			{
				goto IL_003f;
			}
			case 4:
			{
				goto IL_0044;
			}
			case 5:
			{
				goto IL_0049;
			}
			case 6:
			{
				goto IL_004e;
			}
			case 7:
			{
				goto IL_0053;
			}
			case 8:
			{
				goto IL_0058;
			}
		}
	}
	{
		goto IL_005d;
	}

IL_0033:
	{
		goto IL_005f;
	}

IL_0035:
	{
		goto IL_0146;
	}

IL_003a:
	{
		goto IL_0438;
	}

IL_003f:
	{
		goto IL_0559;
	}

IL_0044:
	{
		goto IL_067a;
	}

IL_0049:
	{
		goto IL_08a9;
	}

IL_004e:
	{
		goto IL_09cb;
	}

IL_0053:
	{
		goto IL_0a96;
	}

IL_0058:
	{
		goto IL_0bae;
	}

IL_005d:
	{
		return (bool)0;
	}

IL_005f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_2 = __this->___U3CU3E4__this_4;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->___stream_3;
		NullCheck(L_2);
		L_2->____stream_138 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____stream_138), (void*)L_3);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___stream_3;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_5;
		L_5 = GtlfProcessor_LoadModel_mA53CAAD95675D28D43E2599D20363408DE7D824D(L_4, NULL);
		__this->___U3CgltfU3E5__1_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CgltfU3E5__1_5))->___U3CBinaryReaderU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CgltfU3E5__1_5))->____hashes_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CgltfU3E5__1_5))->____children_5), (void*)NULL);
		#endif
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_6 = __this->___U3CU3E4__this_4;
		NullCheck(L_6);
		GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* L_7 = L_6->____reader_128;
		NullCheck(L_7);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_7, (1.0f), 0, (0.0f), NULL);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_8 = __this->___U3CgltfU3E5__1_5;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_9 = __this->___U3CU3E4__this_4;
		NullCheck(L_9);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_10 = (&L_9->___buffers_139);
		bool L_11;
		L_11 = JsonValueExtensions_TryGetChildWithKey_m00DDC2B4946568C3946965AA2B65DA221352D21C(L_8, ((int64_t)-5513532496226600786LL), L_10, NULL);
		V_1 = L_11;
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_019d;
		}
	}
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_13 = __this->___U3CU3E4__this_4;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_14 = __this->___U3CU3E4__this_4;
		NullCheck(L_14);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_15 = (&L_14->___buffers_139);
		int32_t L_16;
		L_16 = JsonValue_get_Count_m3F77827D1DC2232A2C9FCC88F4F98EDE3C2672CF(L_15, NULL);
		StreamChunkU5BU5D_tB8CEFF6BD29A73CA0268FEF0416BDA1EF08AE299* L_17 = (StreamChunkU5BU5D_tB8CEFF6BD29A73CA0268FEF0416BDA1EF08AE299*)(StreamChunkU5BU5D_tB8CEFF6BD29A73CA0268FEF0416BDA1EF08AE299*)SZArrayNew(StreamChunkU5BU5D_tB8CEFF6BD29A73CA0268FEF0416BDA1EF08AE299_il2cpp_TypeInfo_var, (uint32_t)L_16);
		NullCheck(L_13);
		L_13->____buffersData_129 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____buffersData_129), (void*)L_17);
		__this->___U3CiU3E5__6_10 = 0;
		goto IL_015f;
	}

IL_00f5:
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_18 = __this->___U3CU3E4__this_4;
		NullCheck(L_18);
		StreamChunkU5BU5D_tB8CEFF6BD29A73CA0268FEF0416BDA1EF08AE299* L_19 = L_18->____buffersData_129;
		int32_t L_20 = __this->___U3CiU3E5__6_10;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_21 = __this->___U3CU3E4__this_4;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_22 = __this->___U3CU3E4__this_4;
		NullCheck(L_22);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_23 = L_22->___buffers_139;
		int32_t L_24 = __this->___U3CiU3E5__6_10;
		NullCheck(L_21);
		StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* L_25;
		L_25 = GtlfProcessor_LoadBinaryBuffer_mE8FD5A41871CE6226141D7832CC0197377A6E786(L_21, L_23, L_24, 0, 0, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_25);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D*)L_25);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_26 = __this->____assetLoaderContext_2;
		NullCheck(L_26);
		bool L_27;
		L_27 = AssetLoaderContext_get_MainThreadStall_m053EBE09FC53155F1737B7291186187FD61CBFAE(L_26, NULL);
		V_2 = L_27;
		bool L_28 = V_2;
		if (!L_28)
		{
			goto IL_014e;
		}
	}
	{
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0146:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_014e:
	{
		int32_t L_29 = __this->___U3CiU3E5__6_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = V_3;
		__this->___U3CiU3E5__6_10 = L_30;
	}

IL_015f:
	{
		int32_t L_31 = __this->___U3CiU3E5__6_10;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_32 = __this->___U3CU3E4__this_4;
		NullCheck(L_32);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_33 = (&L_32->___buffers_139);
		int32_t L_34;
		L_34 = JsonValue_get_Count_m3F77827D1DC2232A2C9FCC88F4F98EDE3C2672CF(L_33, NULL);
		V_4 = (bool)((((int32_t)L_31) < ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_4;
		if (L_35)
		{
			goto IL_00f5;
		}
	}
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_36 = __this->___U3CU3E4__this_4;
		NullCheck(L_36);
		GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* L_37 = L_36->____reader_128;
		NullCheck(L_37);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_37, (1.0f), 1, (0.0f), NULL);
	}

IL_019d:
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_38 = __this->___U3CgltfU3E5__1_5;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_39 = (&__this->___U3CextensionsRequiredU3E5__2_6);
		bool L_40;
		L_40 = JsonValueExtensions_TryGetChildWithKey_m00DDC2B4946568C3946965AA2B65DA221352D21C(L_38, ((int64_t)6748315638714226808LL), L_39, NULL);
		V_5 = L_40;
		bool L_41 = V_5;
		if (!L_41)
		{
			goto IL_02b9;
		}
	}
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_42 = (&__this->___U3CextensionsRequiredU3E5__2_6);
		RuntimeObject* L_43;
		L_43 = JsonValue_GetEnumerator_m803E3C154054E67F4BACBDC039AAD2BA13FB523E(L_42, NULL);
		__this->___U3CU3Es__7_11 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__7_11), (void*)L_43);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_029c:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_44 = __this->___U3CU3Es__7_11;
					if (!L_44)
					{
						goto IL_02b0;
					}
				}
				{
					RuntimeObject* L_45 = __this->___U3CU3Es__7_11;
					NullCheck(L_45);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_45);
				}

IL_02b0:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_028a_1;
			}

IL_01d8_1:
			{
				RuntimeObject* L_46 = __this->___U3CU3Es__7_11;
				NullCheck(L_46);
				JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_47;
				L_47 = InterfaceFuncInvoker0< JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<TriLibCore.Utils.JsonParser/JsonValue>::get_Current() */, IEnumerator_1_tA7F3B25A00B66033D1D8DEA7E4C04394A2890FC5_il2cpp_TypeInfo_var, L_46);
				__this->___U3CextensionU3E5__8_12 = L_47;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CextensionU3E5__8_12))->___U3CBinaryReaderU3Ek__BackingField_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CextensionU3E5__8_12))->____hashes_4), (void*)NULL);
				#endif
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CextensionU3E5__8_12))->____children_5), (void*)NULL);
				#endif
				JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_48 = (&__this->___U3CextensionU3E5__8_12);
				String_t* L_49;
				L_49 = JsonValue_ToString_mC70DFC7F0F7201AC85CAE307B64C44BAA74A1EA0(L_48, NULL);
				__this->___U3CextensionNameU3E5__9_13 = L_49;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CextensionNameU3E5__9_13), (void*)L_49);
				String_t* L_50 = __this->___U3CextensionNameU3E5__9_13;
				V_6 = L_50;
				String_t* L_51 = V_6;
				__this->___U3CU3Es__10_14 = L_51;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__10_14), (void*)L_51);
				String_t* L_52 = __this->___U3CU3Es__10_14;
				V_7 = L_52;
				String_t* L_53 = V_7;
				bool L_54;
				L_54 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_53, _stringLiteral6B530CD3FD6023AD01C36548575CBF2BC86F8E40, NULL);
				if (L_54)
				{
					goto IL_0245_1;
				}
			}
			{
				String_t* L_55 = V_7;
				bool L_56;
				L_56 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_55, _stringLiteral8FEDC483F2F8CCF14092653696B3D46F76D676B1, NULL);
				if (L_56)
				{
					goto IL_0253_1;
				}
			}
			{
				String_t* L_57 = V_7;
				bool L_58;
				L_58 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_57, _stringLiteralFB8539000B9A5E473A776F6627222A27CDFFBA0B, NULL);
				if (L_58)
				{
					goto IL_0261_1;
				}
			}
			{
				goto IL_026f_1;
			}

IL_0245_1:
			{
				GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_59 = __this->___U3CU3E4__this_4;
				NullCheck(L_59);
				L_59->____quantitized_153 = (bool)1;
				goto IL_026f_1;
			}

IL_0253_1:
			{
				GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_60 = __this->___U3CU3E4__this_4;
				NullCheck(L_60);
				L_60->____usesDraco_154 = (bool)1;
				goto IL_026f_1;
			}

IL_0261_1:
			{
				GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_61 = __this->___U3CU3E4__this_4;
				NullCheck(L_61);
				L_61->____usesLights_155 = (bool)1;
				goto IL_026f_1;
			}

IL_026f_1:
			{
				__this->___U3CU3Es__10_14 = (String_t*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__10_14), (void*)(String_t*)NULL);
				__this->___U3CextensionNameU3E5__9_13 = (String_t*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CextensionNameU3E5__9_13), (void*)(String_t*)NULL);
				JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_62 = (&__this->___U3CextensionU3E5__8_12);
				il2cpp_codegen_initobj(L_62, sizeof(JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914));
			}

IL_028a_1:
			{
				RuntimeObject* L_63 = __this->___U3CU3Es__7_11;
				NullCheck(L_63);
				bool L_64;
				L_64 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_63);
				if (L_64)
				{
					goto IL_01d8_1;
				}
			}
			{
				goto IL_02b1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02b1:
	{
		__this->___U3CU3Es__7_11 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__7_11), (void*)(RuntimeObject*)NULL);
	}

IL_02b9:
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_65 = __this->___U3CU3E4__this_4;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_66 = (&__this->___U3CgltfU3E5__1_5);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_67;
		L_67 = JsonValue_GetChildWithKey_mF725566296149F7AAC5F832583624FDA1DB639B5(L_66, ((int64_t)7096547112161065452LL), NULL);
		NullCheck(L_65);
		L_65->___nodes_147 = L_67;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_65->___nodes_147))->___U3CBinaryReaderU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_65->___nodes_147))->____hashes_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_65->___nodes_147))->____children_5), (void*)NULL);
		#endif
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_68 = __this->___U3CU3E4__this_4;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_69 = (&__this->___U3CgltfU3E5__1_5);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_70;
		L_70 = JsonValue_GetChildWithKey_mF725566296149F7AAC5F832583624FDA1DB639B5(L_69, ((int64_t)-4289181069918314297LL), NULL);
		NullCheck(L_68);
		L_68->___accessors_144 = L_70;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_68->___accessors_144))->___U3CBinaryReaderU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_68->___accessors_144))->____hashes_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_68->___accessors_144))->____children_5), (void*)NULL);
		#endif
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_71 = __this->___U3CU3E4__this_4;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_72 = (&__this->___U3CgltfU3E5__1_5);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_73;
		L_73 = JsonValue_GetChildWithKey_mF725566296149F7AAC5F832583624FDA1DB639B5(L_72, ((int64_t)-8277781639075476215LL), NULL);
		NullCheck(L_71);
		L_71->___bufferViews_145 = L_73;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_71->___bufferViews_145))->___U3CBinaryReaderU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_71->___bufferViews_145))->____hashes_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_71->___bufferViews_145))->____children_5), (void*)NULL);
		#endif
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_74 = __this->___U3CU3E4__this_4;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_75 = (&__this->___U3CgltfU3E5__1_5);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_76;
		L_76 = JsonValue_GetChildWithKey_mF725566296149F7AAC5F832583624FDA1DB639B5(L_75, ((int64_t)-4898810238082934371LL), NULL);
		NullCheck(L_74);
		L_74->___textures_140 = L_76;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_74->___textures_140))->___U3CBinaryReaderU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_74->___textures_140))->____hashes_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_74->___textures_140))->____children_5), (void*)NULL);
		#endif
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_77 = __this->___U3CU3E4__this_4;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_78 = (&__this->___U3CgltfU3E5__1_5);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_79;
		L_79 = JsonValue_GetChildWithKey_mF725566296149F7AAC5F832583624FDA1DB639B5(L_78, ((int64_t)-1367968407666670947LL), NULL);
		NullCheck(L_77);
		L_77->___images_141 = L_79;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_77->___images_141))->___U3CBinaryReaderU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_77->___images_141))->____hashes_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_77->___images_141))->____children_5), (void*)NULL);
		#endif
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_80 = __this->___U3CU3E4__this_4;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_81 = (&__this->___U3CgltfU3E5__1_5);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_82;
		L_82 = JsonValue_GetChildWithKey_mF725566296149F7AAC5F832583624FDA1DB639B5(L_81, ((int64_t)-4898810269464458160LL), NULL);
		NullCheck(L_80);
		L_80->___samplers_142 = L_82;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_80->___samplers_142))->___U3CBinaryReaderU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_80->___samplers_142))->____hashes_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_80->___samplers_142))->____children_5), (void*)NULL);
		#endif
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_83 = __this->___U3CU3E4__this_4;
		NullCheck(L_83);
		GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* L_84 = L_83->____reader_128;
		NullCheck(L_84);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_85;
		L_85 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_84, NULL);
		NullCheck(L_85);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_86 = L_85->___Options_34;
		NullCheck(L_86);
		bool L_87 = L_86->___ImportTextures_34;
		if (!L_87)
		{
			goto IL_03b3;
		}
	}
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_88 = __this->___U3CU3E4__this_4;
		NullCheck(L_88);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_89 = (&L_88->___textures_140);
		bool L_90;
		L_90 = JsonValue_get_Valid_mCD65D0C8C946467D5E808BA12551EA7DEADEDADD(L_89, NULL);
		if (!L_90)
		{
			goto IL_03b3;
		}
	}
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_91 = __this->___U3CU3E4__this_4;
		NullCheck(L_91);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_92 = (&L_91->___images_141);
		bool L_93;
		L_93 = JsonValue_get_Valid_mCD65D0C8C946467D5E808BA12551EA7DEADEDADD(L_92, NULL);
		G_B41_0 = ((int32_t)(L_93));
		goto IL_03b4;
	}

IL_03b3:
	{
		G_B41_0 = 0;
	}

IL_03b4:
	{
		V_8 = (bool)G_B41_0;
		bool L_94 = V_8;
		if (!L_94)
		{
			goto IL_0496;
		}
	}
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_95 = __this->___U3CU3E4__this_4;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_96 = __this->___U3CU3E4__this_4;
		NullCheck(L_96);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_97 = (&L_96->___textures_140);
		int32_t L_98;
		L_98 = JsonValue_get_Count_m3F77827D1DC2232A2C9FCC88F4F98EDE3C2672CF(L_97, NULL);
		List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31* L_99 = (List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31*)il2cpp_codegen_object_new(List_1_t0A7598F2321AB14249B7E7EBBC916064FB9DBC31_il2cpp_TypeInfo_var);
		NullCheck(L_99);
		List_1__ctor_m9EBFC136CF3059A692BF89968BC243E2484F73B2(L_99, L_98, List_1__ctor_m9EBFC136CF3059A692BF89968BC243E2484F73B2_RuntimeMethod_var);
		NullCheck(L_95);
		L_95->____textures_132 = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&L_95->____textures_132), (void*)L_99);
		__this->___U3CiU3E5__11_15 = 0;
		goto IL_0458;
	}

IL_03e7:
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_100 = __this->___U3CU3E4__this_4;
		int32_t L_101 = __this->___U3CiU3E5__11_15;
		NullCheck(L_100);
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_102;
		L_102 = GtlfProcessor_ConvertTexture_mB37EC56851DD5DDAB01148EABD72AFC14B3E6334(L_100, L_101, NULL);
		__this->___U3CgltfTextureU3E5__12_16 = L_102;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgltfTextureU3E5__12_16), (void*)L_102);
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_103 = __this->___U3CU3E4__this_4;
		NullCheck(L_103);
		RuntimeObject* L_104 = L_103->____textures_132;
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_105 = __this->___U3CgltfTextureU3E5__12_16;
		NullCheck(L_104);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<TriLibCore.Interfaces.ITexture>::Add(T) */, ICollection_1_t9D9853EC356A71B3BC036D2810F70EC0DF1361DD_il2cpp_TypeInfo_var, L_104, L_105);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_106 = __this->____assetLoaderContext_2;
		NullCheck(L_106);
		bool L_107;
		L_107 = AssetLoaderContext_get_MainThreadStall_m053EBE09FC53155F1737B7291186187FD61CBFAE(L_106, NULL);
		V_9 = L_107;
		bool L_108 = V_9;
		if (!L_108)
		{
			goto IL_0440;
		}
	}
	{
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0438:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0440:
	{
		__this->___U3CgltfTextureU3E5__12_16 = (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgltfTextureU3E5__12_16), (void*)(GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8*)NULL);
		int32_t L_109 = __this->___U3CiU3E5__11_15;
		V_3 = ((int32_t)il2cpp_codegen_add(L_109, 1));
		int32_t L_110 = V_3;
		__this->___U3CiU3E5__11_15 = L_110;
	}

IL_0458:
	{
		int32_t L_111 = __this->___U3CiU3E5__11_15;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_112 = __this->___U3CU3E4__this_4;
		NullCheck(L_112);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_113 = (&L_112->___textures_140);
		int32_t L_114;
		L_114 = JsonValue_get_Count_m3F77827D1DC2232A2C9FCC88F4F98EDE3C2672CF(L_113, NULL);
		V_10 = (bool)((((int32_t)L_111) < ((int32_t)L_114))? 1 : 0);
		bool L_115 = V_10;
		if (L_115)
		{
			goto IL_03e7;
		}
	}
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_116 = __this->___U3CU3E4__this_4;
		NullCheck(L_116);
		GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* L_117 = L_116->____reader_128;
		NullCheck(L_117);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_117, (1.0f), 2, (0.0f), NULL);
	}

IL_0496:
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_118 = __this->___U3CU3E4__this_4;
		NullCheck(L_118);
		GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* L_119 = L_118->____reader_128;
		NullCheck(L_119);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_120;
		L_120 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_119, NULL);
		NullCheck(L_120);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_121 = L_120->___Options_34;
		NullCheck(L_121);
		bool L_122 = L_121->___ImportMaterials_31;
		if (!L_122)
		{
			goto IL_04d3;
		}
	}
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_123 = __this->___U3CgltfU3E5__1_5;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_124 = __this->___U3CU3E4__this_4;
		NullCheck(L_124);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_125 = (&L_124->___materials_143);
		bool L_126;
		L_126 = JsonValueExtensions_TryGetChildWithKey_m00DDC2B4946568C3946965AA2B65DA221352D21C(L_123, ((int64_t)-4289170875164765721LL), L_125, NULL);
		G_B52_0 = ((int32_t)(L_126));
		goto IL_04d4;
	}

IL_04d3:
	{
		G_B52_0 = 0;
	}

IL_04d4:
	{
		V_11 = (bool)G_B52_0;
		bool L_127 = V_11;
		if (!L_127)
		{
			goto IL_05b7;
		}
	}
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_128 = __this->___U3CU3E4__this_4;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_129 = __this->___U3CU3E4__this_4;
		NullCheck(L_129);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_130 = (&L_129->___materials_143);
		int32_t L_131;
		L_131 = JsonValue_get_Count_m3F77827D1DC2232A2C9FCC88F4F98EDE3C2672CF(L_130, NULL);
		IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2* L_132 = (IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2*)(IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2*)SZArrayNew(IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2_il2cpp_TypeInfo_var, (uint32_t)L_131);
		NullCheck(L_128);
		L_128->____materials_131 = L_132;
		Il2CppCodeGenWriteBarrier((void**)(&L_128->____materials_131), (void*)L_132);
		__this->___U3CiU3E5__13_17 = 0;
		goto IL_0579;
	}

IL_0507:
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_133 = __this->___U3CU3E4__this_4;
		int32_t L_134 = __this->___U3CiU3E5__13_17;
		NullCheck(L_133);
		GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* L_135;
		L_135 = GtlfProcessor_ConvertMaterial_m5376D06B6289F72EAEAC58EE798819FEE8F44D0A(L_133, L_134, NULL);
		__this->___U3CgltfMaterialU3E5__14_18 = L_135;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgltfMaterialU3E5__14_18), (void*)L_135);
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_136 = __this->___U3CU3E4__this_4;
		NullCheck(L_136);
		IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2* L_137 = L_136->____materials_131;
		int32_t L_138 = __this->___U3CiU3E5__13_17;
		GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* L_139 = __this->___U3CgltfMaterialU3E5__14_18;
		NullCheck(L_137);
		ArrayElementTypeCheck (L_137, L_139);
		(L_137)->SetAt(static_cast<il2cpp_array_size_t>(L_138), (RuntimeObject*)L_139);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_140 = __this->____assetLoaderContext_2;
		NullCheck(L_140);
		bool L_141;
		L_141 = AssetLoaderContext_get_MainThreadStall_m053EBE09FC53155F1737B7291186187FD61CBFAE(L_140, NULL);
		V_12 = L_141;
		bool L_142 = V_12;
		if (!L_142)
		{
			goto IL_0561;
		}
	}
	{
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0559:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0561:
	{
		__this->___U3CgltfMaterialU3E5__14_18 = (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgltfMaterialU3E5__14_18), (void*)(GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F*)NULL);
		int32_t L_143 = __this->___U3CiU3E5__13_17;
		V_3 = L_143;
		int32_t L_144 = V_3;
		__this->___U3CiU3E5__13_17 = ((int32_t)il2cpp_codegen_add(L_144, 1));
	}

IL_0579:
	{
		int32_t L_145 = __this->___U3CiU3E5__13_17;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_146 = __this->___U3CU3E4__this_4;
		NullCheck(L_146);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_147 = (&L_146->___materials_143);
		int32_t L_148;
		L_148 = JsonValue_get_Count_m3F77827D1DC2232A2C9FCC88F4F98EDE3C2672CF(L_147, NULL);
		V_13 = (bool)((((int32_t)L_145) < ((int32_t)L_148))? 1 : 0);
		bool L_149 = V_13;
		if (L_149)
		{
			goto IL_0507;
		}
	}
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_150 = __this->___U3CU3E4__this_4;
		NullCheck(L_150);
		GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* L_151 = L_150->____reader_128;
		NullCheck(L_151);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_151, (1.0f), 3, (0.0f), NULL);
	}

IL_05b7:
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_152 = __this->___U3CU3E4__this_4;
		NullCheck(L_152);
		GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* L_153 = L_152->____reader_128;
		NullCheck(L_153);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_154;
		L_154 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_153, NULL);
		NullCheck(L_154);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_155 = L_154->___Options_34;
		NullCheck(L_155);
		bool L_156 = L_155->___ImportMeshes_10;
		if (!L_156)
		{
			goto IL_05f4;
		}
	}
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_157 = __this->___U3CgltfU3E5__1_5;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_158 = __this->___U3CU3E4__this_4;
		NullCheck(L_158);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_159 = (&L_158->___meshes_150);
		bool L_160;
		L_160 = JsonValueExtensions_TryGetChildWithKey_m00DDC2B4946568C3946965AA2B65DA221352D21C(L_157, ((int64_t)-1367968407559005312LL), L_159, NULL);
		G_B63_0 = ((int32_t)(L_160));
		goto IL_05f5;
	}

IL_05f4:
	{
		G_B63_0 = 0;
	}

IL_05f5:
	{
		V_14 = (bool)G_B63_0;
		bool L_161 = V_14;
		if (!L_161)
		{
			goto IL_06d8;
		}
	}
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_162 = __this->___U3CU3E4__this_4;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_163 = __this->___U3CU3E4__this_4;
		NullCheck(L_163);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_164 = (&L_163->___meshes_150);
		int32_t L_165;
		L_165 = JsonValue_get_Count_m3F77827D1DC2232A2C9FCC88F4F98EDE3C2672CF(L_164, NULL);
		IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711* L_166 = (IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711*)(IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711*)SZArrayNew(IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711_il2cpp_TypeInfo_var, (uint32_t)L_165);
		NullCheck(L_162);
		L_162->____geometryGroups_133 = L_166;
		Il2CppCodeGenWriteBarrier((void**)(&L_162->____geometryGroups_133), (void*)L_166);
		__this->___U3CiU3E5__15_19 = 0;
		goto IL_069a;
	}

IL_0628:
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_167 = __this->___U3CU3E4__this_4;
		int32_t L_168 = __this->___U3CiU3E5__15_19;
		NullCheck(L_167);
		RuntimeObject* L_169;
		L_169 = GtlfProcessor_ConvertGeometryGroup_m8DF4FFF922D05F2660AF170DC485EA875330137C(L_167, L_168, NULL);
		__this->___U3CgeometryGroupU3E5__16_20 = L_169;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgeometryGroupU3E5__16_20), (void*)L_169);
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_170 = __this->___U3CU3E4__this_4;
		NullCheck(L_170);
		IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711* L_171 = L_170->____geometryGroups_133;
		int32_t L_172 = __this->___U3CiU3E5__15_19;
		RuntimeObject* L_173 = __this->___U3CgeometryGroupU3E5__16_20;
		NullCheck(L_171);
		ArrayElementTypeCheck (L_171, L_173);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(L_172), (RuntimeObject*)L_173);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_174 = __this->____assetLoaderContext_2;
		NullCheck(L_174);
		bool L_175;
		L_175 = AssetLoaderContext_get_MainThreadStall_m053EBE09FC53155F1737B7291186187FD61CBFAE(L_174, NULL);
		V_15 = L_175;
		bool L_176 = V_15;
		if (!L_176)
		{
			goto IL_0682;
		}
	}
	{
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_067a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0682:
	{
		__this->___U3CgeometryGroupU3E5__16_20 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgeometryGroupU3E5__16_20), (void*)(RuntimeObject*)NULL);
		int32_t L_177 = __this->___U3CiU3E5__15_19;
		V_3 = L_177;
		int32_t L_178 = V_3;
		__this->___U3CiU3E5__15_19 = ((int32_t)il2cpp_codegen_add(L_178, 1));
	}

IL_069a:
	{
		int32_t L_179 = __this->___U3CiU3E5__15_19;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_180 = __this->___U3CU3E4__this_4;
		NullCheck(L_180);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_181 = (&L_180->___meshes_150);
		int32_t L_182;
		L_182 = JsonValue_get_Count_m3F77827D1DC2232A2C9FCC88F4F98EDE3C2672CF(L_181, NULL);
		V_16 = (bool)((((int32_t)L_179) < ((int32_t)L_182))? 1 : 0);
		bool L_183 = V_16;
		if (L_183)
		{
			goto IL_0628;
		}
	}
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_184 = __this->___U3CU3E4__this_4;
		NullCheck(L_184);
		GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* L_185 = L_184->____reader_128;
		NullCheck(L_185);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_185, (1.0f), 4, (0.0f), NULL);
	}

IL_06d8:
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_186 = __this->___U3CU3E4__this_4;
		NullCheck(L_186);
		GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* L_187 = L_186->____reader_128;
		NullCheck(L_187);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_188;
		L_188 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_187, NULL);
		NullCheck(L_188);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_189 = L_188->___Options_34;
		NullCheck(L_189);
		bool L_190 = L_189->___ImportCameras_88;
		if (!L_190)
		{
			goto IL_0715;
		}
	}
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_191 = __this->___U3CgltfU3E5__1_5;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_192 = __this->___U3CU3E4__this_4;
		NullCheck(L_192);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_193 = (&L_192->___cameras_151);
		bool L_194;
		L_194 = JsonValueExtensions_TryGetChildWithKey_m00DDC2B4946568C3946965AA2B65DA221352D21C(L_191, ((int64_t)-5513532495905233303LL), L_193, NULL);
		G_B74_0 = ((int32_t)(L_194));
		goto IL_0716;
	}

IL_0715:
	{
		G_B74_0 = 0;
	}

IL_0716:
	{
		V_17 = (bool)G_B74_0;
		bool L_195 = V_17;
		if (!L_195)
		{
			goto IL_073e;
		}
	}
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_196 = __this->___U3CU3E4__this_4;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_197 = __this->___U3CU3E4__this_4;
		NullCheck(L_197);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_198 = (&L_197->___cameras_151);
		int32_t L_199;
		L_199 = JsonValue_get_Count_m3F77827D1DC2232A2C9FCC88F4F98EDE3C2672CF(L_198, NULL);
		List_1_tAE667BFD8AC1AA42DE64FF5AC0140A17316B2369* L_200 = (List_1_tAE667BFD8AC1AA42DE64FF5AC0140A17316B2369*)il2cpp_codegen_object_new(List_1_tAE667BFD8AC1AA42DE64FF5AC0140A17316B2369_il2cpp_TypeInfo_var);
		NullCheck(L_200);
		List_1__ctor_mF97183B132B3C5DE1FA43120F6E13EB87B480287(L_200, L_199, List_1__ctor_mF97183B132B3C5DE1FA43120F6E13EB87B480287_RuntimeMethod_var);
		NullCheck(L_196);
		L_196->____cameras_136 = L_200;
		Il2CppCodeGenWriteBarrier((void**)(&L_196->____cameras_136), (void*)L_200);
	}

IL_073e:
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_201 = __this->___U3CU3E4__this_4;
		NullCheck(L_201);
		GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* L_202 = L_201->____reader_128;
		NullCheck(L_202);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_203;
		L_203 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_202, NULL);
		NullCheck(L_203);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_204 = L_203->___Options_34;
		NullCheck(L_204);
		bool L_205 = L_204->___ImportLights_89;
		if (!L_205)
		{
			goto IL_07b3;
		}
	}
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_206 = __this->___U3CgltfU3E5__1_5;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_207 = (&__this->___U3CextensionsU3E5__3_7);
		bool L_208;
		L_208 = JsonValueExtensions_TryGetChildWithKey_m00DDC2B4946568C3946965AA2B65DA221352D21C(L_206, ((int64_t)-3837280514729340487LL), L_207, NULL);
		if (!L_208)
		{
			goto IL_07b3;
		}
	}
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_209 = __this->___U3CextensionsU3E5__3_7;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_210 = (&__this->___U3ClightsPunctualU3E5__4_8);
		bool L_211;
		L_211 = JsonValueExtensions_TryGetChildWithKey_m00DDC2B4946568C3946965AA2B65DA221352D21C(L_209, ((int64_t)5744110190609155609LL), L_210, NULL);
		if (!L_211)
		{
			goto IL_07b3;
		}
	}
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_212 = __this->___U3ClightsPunctualU3E5__4_8;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_213 = __this->___U3CU3E4__this_4;
		NullCheck(L_213);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_214 = (&L_213->___lights_152);
		bool L_215;
		L_215 = JsonValueExtensions_TryGetChildWithKey_m00DDC2B4946568C3946965AA2B65DA221352D21C(L_212, ((int64_t)-1367968407584297406LL), L_214, NULL);
		G_B81_0 = ((int32_t)(L_215));
		goto IL_07b4;
	}

IL_07b3:
	{
		G_B81_0 = 0;
	}

IL_07b4:
	{
		V_18 = (bool)G_B81_0;
		bool L_216 = V_18;
		if (!L_216)
		{
			goto IL_07dc;
		}
	}
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_217 = __this->___U3CU3E4__this_4;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_218 = __this->___U3CU3E4__this_4;
		NullCheck(L_218);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_219 = (&L_218->___lights_152);
		int32_t L_220;
		L_220 = JsonValue_get_Count_m3F77827D1DC2232A2C9FCC88F4F98EDE3C2672CF(L_219, NULL);
		List_1_t9B268D314118DA62547A1DF57114D724FD8E32FE* L_221 = (List_1_t9B268D314118DA62547A1DF57114D724FD8E32FE*)il2cpp_codegen_object_new(List_1_t9B268D314118DA62547A1DF57114D724FD8E32FE_il2cpp_TypeInfo_var);
		NullCheck(L_221);
		List_1__ctor_mBFFB6DE2A8967CC2A0F37DCA88B229DC51D3AF41(L_221, L_220, List_1__ctor_mBFFB6DE2A8967CC2A0F37DCA88B229DC51D3AF41_RuntimeMethod_var);
		NullCheck(L_217);
		L_217->____lights_137 = L_221;
		Il2CppCodeGenWriteBarrier((void**)(&L_217->____lights_137), (void*)L_221);
	}

IL_07dc:
	{
		GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* L_222 = (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727*)il2cpp_codegen_object_new(GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727_il2cpp_TypeInfo_var);
		NullCheck(L_222);
		GltfRootModel__ctor_m96F355F5F103CF03D742288869F688E414E0C5CE(L_222, NULL);
		GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* L_223 = L_222;
		NullCheck(L_223);
		GltfModel_set_Visibility_mB104FE40D13BF90FF6A1E2E91C79DE230972C684_inline(L_223, (bool)1, NULL);
		__this->___U3CrootModelU3E5__5_9 = L_223;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrootModelU3E5__5_9), (void*)L_223);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_224 = __this->___U3CgltfU3E5__1_5;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_225 = __this->___U3CU3E4__this_4;
		NullCheck(L_225);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_226 = (&L_225->___scenes_146);
		bool L_227;
		L_227 = JsonValueExtensions_TryGetChildWithKey_m00DDC2B4946568C3946965AA2B65DA221352D21C(L_224, ((int64_t)-1367968407389488756LL), L_226, NULL);
		V_19 = L_227;
		bool L_228 = V_19;
		if (!L_228)
		{
			goto IL_0907;
		}
	}
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_229 = __this->___U3CU3E4__this_4;
		Dictionary_2_tF02E292412E61E0CEAD729AAEA30E75F26A038B3* L_230 = (Dictionary_2_tF02E292412E61E0CEAD729AAEA30E75F26A038B3*)il2cpp_codegen_object_new(Dictionary_2_tF02E292412E61E0CEAD729AAEA30E75F26A038B3_il2cpp_TypeInfo_var);
		NullCheck(L_230);
		Dictionary_2__ctor_mAAD7CCD653C572CB26A533A19DC7A9F3BCFDEE2B(L_230, Dictionary_2__ctor_mAAD7CCD653C572CB26A533A19DC7A9F3BCFDEE2B_RuntimeMethod_var);
		NullCheck(L_229);
		L_229->____models_134 = L_230;
		Il2CppCodeGenWriteBarrier((void**)(&L_229->____models_134), (void*)L_230);
		GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* L_231 = __this->___U3CrootModelU3E5__5_9;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_232 = __this->___U3CU3E4__this_4;
		NullCheck(L_232);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_233 = (&L_232->___scenes_146);
		int32_t L_234;
		L_234 = JsonValue_get_Count_m3F77827D1DC2232A2C9FCC88F4F98EDE3C2672CF(L_233, NULL);
		IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76* L_235 = (IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76*)(IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76*)SZArrayNew(IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76_il2cpp_TypeInfo_var, (uint32_t)L_234);
		NullCheck(L_231);
		GltfModel_set_Children_m1AECD8080C5A22BF51E87737F20DDD7085E11228_inline(L_231, (RuntimeObject*)L_235, NULL);
		__this->___U3CiU3E5__17_21 = 0;
		goto IL_08c9;
	}

IL_0852:
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_236 = __this->___U3CU3E4__this_4;
		int32_t L_237 = __this->___U3CiU3E5__17_21;
		NullCheck(L_236);
		GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* L_238;
		L_238 = GtlfProcessor_ConvertScene_m86D2DBFCE12C1C756C5340BEA726548119C2C538(L_236, L_237, NULL);
		__this->___U3CgltfSceneU3E5__18_22 = L_238;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgltfSceneU3E5__18_22), (void*)L_238);
		GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* L_239 = __this->___U3CrootModelU3E5__5_9;
		NullCheck(L_239);
		RuntimeObject* L_240;
		L_240 = GltfModel_get_Children_m655F8116216113238EE8F72EEA782D61243B459B_inline(L_239, NULL);
		int32_t L_241 = __this->___U3CiU3E5__17_21;
		GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* L_242 = __this->___U3CgltfSceneU3E5__18_22;
		NullCheck(L_240);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>::set_Item(System.Int32,T) */, IList_1_tBAC2F9CBFB365F17F69446225AF2802DEF7B2956_il2cpp_TypeInfo_var, L_240, L_241, L_242);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_243 = __this->____assetLoaderContext_2;
		NullCheck(L_243);
		bool L_244;
		L_244 = AssetLoaderContext_get_MainThreadStall_m053EBE09FC53155F1737B7291186187FD61CBFAE(L_243, NULL);
		V_20 = L_244;
		bool L_245 = V_20;
		if (!L_245)
		{
			goto IL_08b1;
		}
	}
	{
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 5;
		return (bool)1;
	}

IL_08a9:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_08b1:
	{
		__this->___U3CgltfSceneU3E5__18_22 = (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgltfSceneU3E5__18_22), (void*)(GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2*)NULL);
		int32_t L_246 = __this->___U3CiU3E5__17_21;
		V_3 = L_246;
		int32_t L_247 = V_3;
		__this->___U3CiU3E5__17_21 = ((int32_t)il2cpp_codegen_add(L_247, 1));
	}

IL_08c9:
	{
		int32_t L_248 = __this->___U3CiU3E5__17_21;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_249 = __this->___U3CU3E4__this_4;
		NullCheck(L_249);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_250 = (&L_249->___scenes_146);
		int32_t L_251;
		L_251 = JsonValue_get_Count_m3F77827D1DC2232A2C9FCC88F4F98EDE3C2672CF(L_250, NULL);
		V_21 = (bool)((((int32_t)L_248) < ((int32_t)L_251))? 1 : 0);
		bool L_252 = V_21;
		if (L_252)
		{
			goto IL_0852;
		}
	}
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_253 = __this->___U3CU3E4__this_4;
		NullCheck(L_253);
		GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* L_254 = L_253->____reader_128;
		NullCheck(L_254);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_254, (1.0f), 5, (0.0f), NULL);
	}

IL_0907:
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_255 = __this->___U3CU3E4__this_4;
		NullCheck(L_255);
		GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* L_256 = L_255->____reader_128;
		NullCheck(L_256);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_257;
		L_257 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_256, NULL);
		NullCheck(L_257);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_258 = L_257->___Options_34;
		NullCheck(L_258);
		int32_t L_259 = L_258->___AnimationType_45;
		if ((((int32_t)L_259) == ((int32_t)3)))
		{
			goto IL_0945;
		}
	}
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_260 = __this->___U3CgltfU3E5__1_5;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_261 = __this->___U3CU3E4__this_4;
		NullCheck(L_261);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_262 = (&L_261->___skins_148);
		bool L_263;
		L_263 = JsonValueExtensions_TryGetChildWithKey_m00DDC2B4946568C3946965AA2B65DA221352D21C(L_260, ((int64_t)7096547112165568977LL), L_262, NULL);
		G_B94_0 = ((int32_t)(L_263));
		goto IL_0946;
	}

IL_0945:
	{
		G_B94_0 = 0;
	}

IL_0946:
	{
		V_22 = (bool)G_B94_0;
		bool L_264 = V_22;
		if (!L_264)
		{
			goto IL_0a29;
		}
	}
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_265 = __this->___U3CU3E4__this_4;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_266 = __this->___U3CU3E4__this_4;
		NullCheck(L_266);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_267 = (&L_266->___skins_148);
		int32_t L_268;
		L_268 = JsonValue_get_Count_m3F77827D1DC2232A2C9FCC88F4F98EDE3C2672CF(L_267, NULL);
		Dictionary_2U5BU5D_t1C8B29337AC2B2BAE4525B35ADAA299185E6FC49* L_269 = (Dictionary_2U5BU5D_t1C8B29337AC2B2BAE4525B35ADAA299185E6FC49*)(Dictionary_2U5BU5D_t1C8B29337AC2B2BAE4525B35ADAA299185E6FC49*)SZArrayNew(Dictionary_2U5BU5D_t1C8B29337AC2B2BAE4525B35ADAA299185E6FC49_il2cpp_TypeInfo_var, (uint32_t)L_268);
		NullCheck(L_265);
		L_265->____skins_135 = L_269;
		Il2CppCodeGenWriteBarrier((void**)(&L_265->____skins_135), (void*)L_269);
		__this->___U3CiU3E5__19_23 = 0;
		goto IL_09eb;
	}

IL_0979:
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_270 = __this->___U3CU3E4__this_4;
		int32_t L_271 = __this->___U3CiU3E5__19_23;
		NullCheck(L_270);
		Dictionary_2_tFA83D9B0331D5487A8CB52C61859A911DEB38393* L_272;
		L_272 = GtlfProcessor_ConvertBindPoses_mB99DE5F5320C4DF7DFCB2658A98E42F8368208BA(L_270, L_271, NULL);
		__this->___U3CbindPosesU3E5__20_24 = L_272;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbindPosesU3E5__20_24), (void*)L_272);
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_273 = __this->___U3CU3E4__this_4;
		NullCheck(L_273);
		Dictionary_2U5BU5D_t1C8B29337AC2B2BAE4525B35ADAA299185E6FC49* L_274 = L_273->____skins_135;
		int32_t L_275 = __this->___U3CiU3E5__19_23;
		Dictionary_2_tFA83D9B0331D5487A8CB52C61859A911DEB38393* L_276 = __this->___U3CbindPosesU3E5__20_24;
		NullCheck(L_274);
		ArrayElementTypeCheck (L_274, L_276);
		(L_274)->SetAt(static_cast<il2cpp_array_size_t>(L_275), (Dictionary_2_tFA83D9B0331D5487A8CB52C61859A911DEB38393*)L_276);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_277 = __this->____assetLoaderContext_2;
		NullCheck(L_277);
		bool L_278;
		L_278 = AssetLoaderContext_get_MainThreadStall_m053EBE09FC53155F1737B7291186187FD61CBFAE(L_277, NULL);
		V_23 = L_278;
		bool L_279 = V_23;
		if (!L_279)
		{
			goto IL_09d3;
		}
	}
	{
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 6;
		return (bool)1;
	}

IL_09cb:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_09d3:
	{
		__this->___U3CbindPosesU3E5__20_24 = (Dictionary_2_tFA83D9B0331D5487A8CB52C61859A911DEB38393*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbindPosesU3E5__20_24), (void*)(Dictionary_2_tFA83D9B0331D5487A8CB52C61859A911DEB38393*)NULL);
		int32_t L_280 = __this->___U3CiU3E5__19_23;
		V_3 = L_280;
		int32_t L_281 = V_3;
		__this->___U3CiU3E5__19_23 = ((int32_t)il2cpp_codegen_add(L_281, 1));
	}

IL_09eb:
	{
		int32_t L_282 = __this->___U3CiU3E5__19_23;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_283 = __this->___U3CU3E4__this_4;
		NullCheck(L_283);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_284 = (&L_283->___skins_148);
		int32_t L_285;
		L_285 = JsonValue_get_Count_m3F77827D1DC2232A2C9FCC88F4F98EDE3C2672CF(L_284, NULL);
		V_24 = (bool)((((int32_t)L_282) < ((int32_t)L_285))? 1 : 0);
		bool L_286 = V_24;
		if (L_286)
		{
			goto IL_0979;
		}
	}
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_287 = __this->___U3CU3E4__this_4;
		NullCheck(L_287);
		GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* L_288 = L_287->____reader_128;
		NullCheck(L_288);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_288, (1.0f), 6, (0.0f), NULL);
	}

IL_0a29:
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_289 = __this->___U3CU3E4__this_4;
		NullCheck(L_289);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_290 = (&L_289->___scenes_146);
		bool L_291;
		L_291 = JsonValue_get_Valid_mCD65D0C8C946467D5E808BA12551EA7DEADEDADD(L_290, NULL);
		if (!L_291)
		{
			goto IL_0a4d;
		}
	}
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_292 = __this->___U3CU3E4__this_4;
		NullCheck(L_292);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_293 = (&L_292->___nodes_147);
		bool L_294;
		L_294 = JsonValue_get_Valid_mCD65D0C8C946467D5E808BA12551EA7DEADEDADD(L_293, NULL);
		G_B105_0 = ((int32_t)(L_294));
		goto IL_0a4e;
	}

IL_0a4d:
	{
		G_B105_0 = 0;
	}

IL_0a4e:
	{
		V_25 = (bool)G_B105_0;
		bool L_295 = V_25;
		if (!L_295)
		{
			goto IL_0aea;
		}
	}
	{
		__this->___U3CiU3E5__21_25 = 0;
		goto IL_0aaf;
	}

IL_0a61:
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_296 = __this->___U3CU3E4__this_4;
		int32_t L_297 = __this->___U3CiU3E5__21_25;
		NullCheck(L_296);
		GtlfProcessor_PostProcessGltfModel_mB764342BD2954F206559F02805BBB40F083256E3(L_296, L_297, NULL);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_298 = __this->____assetLoaderContext_2;
		NullCheck(L_298);
		bool L_299;
		L_299 = AssetLoaderContext_get_MainThreadStall_m053EBE09FC53155F1737B7291186187FD61CBFAE(L_298, NULL);
		V_26 = L_299;
		bool L_300 = V_26;
		if (!L_300)
		{
			goto IL_0a9e;
		}
	}
	{
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 7;
		return (bool)1;
	}

IL_0a96:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0a9e:
	{
		int32_t L_301 = __this->___U3CiU3E5__21_25;
		V_3 = L_301;
		int32_t L_302 = V_3;
		__this->___U3CiU3E5__21_25 = ((int32_t)il2cpp_codegen_add(L_302, 1));
	}

IL_0aaf:
	{
		int32_t L_303 = __this->___U3CiU3E5__21_25;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_304 = __this->___U3CU3E4__this_4;
		NullCheck(L_304);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_305 = (&L_304->___nodes_147);
		int32_t L_306;
		L_306 = JsonValue_get_Count_m3F77827D1DC2232A2C9FCC88F4F98EDE3C2672CF(L_305, NULL);
		V_27 = (bool)((((int32_t)L_303) < ((int32_t)L_306))? 1 : 0);
		bool L_307 = V_27;
		if (L_307)
		{
			goto IL_0a61;
		}
	}
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_308 = __this->___U3CU3E4__this_4;
		NullCheck(L_308);
		GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* L_309 = L_308->____reader_128;
		NullCheck(L_309);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_309, (1.0f), 7, (0.0f), NULL);
	}

IL_0aea:
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_310 = __this->___U3CU3E4__this_4;
		NullCheck(L_310);
		GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* L_311 = L_310->____reader_128;
		NullCheck(L_311);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_312;
		L_312 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_311, NULL);
		NullCheck(L_312);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_313 = L_312->___Options_34;
		NullCheck(L_313);
		int32_t L_314 = L_313->___AnimationType_45;
		if ((((int32_t)L_314) == ((int32_t)3)))
		{
			goto IL_0b28;
		}
	}
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_315 = __this->___U3CgltfU3E5__1_5;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_316 = __this->___U3CU3E4__this_4;
		NullCheck(L_316);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_317 = (&L_316->___animations_149);
		bool L_318;
		L_318 = JsonValueExtensions_TryGetChildWithKey_m00DDC2B4946568C3946965AA2B65DA221352D21C(L_315, ((int64_t)-3837395098038338796LL), L_317, NULL);
		G_B116_0 = ((int32_t)(L_318));
		goto IL_0b29;
	}

IL_0b28:
	{
		G_B116_0 = 0;
	}

IL_0b29:
	{
		V_28 = (bool)G_B116_0;
		bool L_319 = V_28;
		if (!L_319)
		{
			goto IL_0c0c;
		}
	}
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_320 = __this->___U3CU3E4__this_4;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_321 = __this->___U3CU3E4__this_4;
		NullCheck(L_321);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_322 = (&L_321->___animations_149);
		int32_t L_323;
		L_323 = JsonValue_get_Count_m3F77827D1DC2232A2C9FCC88F4F98EDE3C2672CF(L_322, NULL);
		IAnimationU5BU5D_t70DF9CA11F100A23CC71AA7A9C3ECC44413BF683* L_324 = (IAnimationU5BU5D_t70DF9CA11F100A23CC71AA7A9C3ECC44413BF683*)(IAnimationU5BU5D_t70DF9CA11F100A23CC71AA7A9C3ECC44413BF683*)SZArrayNew(IAnimationU5BU5D_t70DF9CA11F100A23CC71AA7A9C3ECC44413BF683_il2cpp_TypeInfo_var, (uint32_t)L_323);
		NullCheck(L_320);
		L_320->____animations_130 = L_324;
		Il2CppCodeGenWriteBarrier((void**)(&L_320->____animations_130), (void*)L_324);
		__this->___U3CaU3E5__22_26 = 0;
		goto IL_0bce;
	}

IL_0b5c:
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_325 = __this->___U3CU3E4__this_4;
		int32_t L_326 = __this->___U3CaU3E5__22_26;
		NullCheck(L_325);
		GltfAnimation_t5FCB3628EAE37CD7B330DFB088483BEAE15A8BDA* L_327;
		L_327 = GtlfProcessor_ConvertAnimation_mC538907C1558DEB4E7D13DD1F08474DFA6666F09(L_325, L_326, NULL);
		__this->___U3CgltfAnimationU3E5__23_27 = L_327;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgltfAnimationU3E5__23_27), (void*)L_327);
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_328 = __this->___U3CU3E4__this_4;
		NullCheck(L_328);
		IAnimationU5BU5D_t70DF9CA11F100A23CC71AA7A9C3ECC44413BF683* L_329 = L_328->____animations_130;
		int32_t L_330 = __this->___U3CaU3E5__22_26;
		GltfAnimation_t5FCB3628EAE37CD7B330DFB088483BEAE15A8BDA* L_331 = __this->___U3CgltfAnimationU3E5__23_27;
		NullCheck(L_329);
		ArrayElementTypeCheck (L_329, L_331);
		(L_329)->SetAt(static_cast<il2cpp_array_size_t>(L_330), (RuntimeObject*)L_331);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_332 = __this->____assetLoaderContext_2;
		NullCheck(L_332);
		bool L_333;
		L_333 = AssetLoaderContext_get_MainThreadStall_m053EBE09FC53155F1737B7291186187FD61CBFAE(L_332, NULL);
		V_29 = L_333;
		bool L_334 = V_29;
		if (!L_334)
		{
			goto IL_0bb6;
		}
	}
	{
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 8;
		return (bool)1;
	}

IL_0bae:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0bb6:
	{
		__this->___U3CgltfAnimationU3E5__23_27 = (GltfAnimation_t5FCB3628EAE37CD7B330DFB088483BEAE15A8BDA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgltfAnimationU3E5__23_27), (void*)(GltfAnimation_t5FCB3628EAE37CD7B330DFB088483BEAE15A8BDA*)NULL);
		int32_t L_335 = __this->___U3CaU3E5__22_26;
		V_3 = L_335;
		int32_t L_336 = V_3;
		__this->___U3CaU3E5__22_26 = ((int32_t)il2cpp_codegen_add(L_336, 1));
	}

IL_0bce:
	{
		int32_t L_337 = __this->___U3CaU3E5__22_26;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_338 = __this->___U3CU3E4__this_4;
		NullCheck(L_338);
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_339 = (&L_338->___animations_149);
		int32_t L_340;
		L_340 = JsonValue_get_Count_m3F77827D1DC2232A2C9FCC88F4F98EDE3C2672CF(L_339, NULL);
		V_30 = (bool)((((int32_t)L_337) < ((int32_t)L_340))? 1 : 0);
		bool L_341 = V_30;
		if (L_341)
		{
			goto IL_0b5c;
		}
	}
	{
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_342 = __this->___U3CU3E4__this_4;
		NullCheck(L_342);
		GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* L_343 = L_342->____reader_128;
		NullCheck(L_343);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_343, (1.0f), 8, (0.0f), NULL);
	}

IL_0c0c:
	{
		GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* L_344 = __this->___U3CrootModelU3E5__5_9;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_345 = __this->___U3CU3E4__this_4;
		NullCheck(L_345);
		IAnimationU5BU5D_t70DF9CA11F100A23CC71AA7A9C3ECC44413BF683* L_346 = L_345->____animations_130;
		NullCheck(L_344);
		GltfRootModel_set_AllAnimations_mBC336819DA8732F08840DDB3C0F959C2F947AD14_inline(L_344, (RuntimeObject*)L_346, NULL);
		GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* L_347 = __this->___U3CrootModelU3E5__5_9;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_348 = __this->___U3CU3E4__this_4;
		NullCheck(L_348);
		IMaterialU5BU5D_tDC50DDA10471488138C03AB89CC3A07F6AF8BAD2* L_349 = L_348->____materials_131;
		NullCheck(L_347);
		GltfRootModel_set_AllMaterials_m037E9568BEB219D7FC38DC993904148EE7052EAE_inline(L_347, (RuntimeObject*)L_349, NULL);
		GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* L_350 = __this->___U3CrootModelU3E5__5_9;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_351 = __this->___U3CU3E4__this_4;
		NullCheck(L_351);
		RuntimeObject* L_352 = L_351->____textures_132;
		NullCheck(L_350);
		GltfRootModel_set_AllTextures_m5217932B980A9D4E2542435198C9AECCB47E9DDF_inline(L_350, L_352, NULL);
		GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* L_353 = __this->___U3CrootModelU3E5__5_9;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_354 = __this->___U3CU3E4__this_4;
		NullCheck(L_354);
		IGeometryGroupU5BU5D_tA72A26B4C22A9EBB26F3F9CD8C05F44B292DA711* L_355 = L_354->____geometryGroups_133;
		NullCheck(L_353);
		GltfRootModel_set_AllGeometryGroups_mA2598A11ACE3D10F0166374C0AEC8F8CC65C9731_inline(L_353, (RuntimeObject*)L_355, NULL);
		GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* L_356 = __this->___U3CrootModelU3E5__5_9;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_357 = __this->___U3CU3E4__this_4;
		NullCheck(L_357);
		Dictionary_2_tF02E292412E61E0CEAD729AAEA30E75F26A038B3* L_358 = L_357->____models_134;
		NullCheck(L_358);
		ValueCollection_t34D53559E0BC4B340308D4A57D1CDD77213ECC9C* L_359;
		L_359 = Dictionary_2_get_Values_m66E7D680DDE4C8FF42E54FD3A71770F766CF0950(L_358, Dictionary_2_get_Values_m66E7D680DDE4C8FF42E54FD3A71770F766CF0950_RuntimeMethod_var);
		GltfModelU5BU5D_t964D72C1BC76BC193CE449249CB2FD1AD6ED93E1* L_360;
		L_360 = Enumerable_ToArray_TisGltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2_mEC3BBE2379529E5B57AC0BF706A70990D0BF001E(L_359, Enumerable_ToArray_TisGltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2_mEC3BBE2379529E5B57AC0BF706A70990D0BF001E_RuntimeMethod_var);
		NullCheck(L_356);
		GltfRootModel_set_AllModels_mA59FAAA3786F339E9B7C466ED0EDD5E905877B16_inline(L_356, (RuntimeObject*)L_360, NULL);
		GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* L_361 = __this->___U3CrootModelU3E5__5_9;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_362 = __this->___U3CU3E4__this_4;
		NullCheck(L_362);
		RuntimeObject* L_363 = L_362->____cameras_136;
		NullCheck(L_361);
		GltfRootModel_set_AllCameras_m909C7815EAAADA9B1B103EEC3F9A138458D4CC92_inline(L_361, L_363, NULL);
		GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* L_364 = __this->___U3CrootModelU3E5__5_9;
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_365 = __this->___U3CU3E4__this_4;
		NullCheck(L_365);
		RuntimeObject* L_366 = L_365->____lights_137;
		NullCheck(L_364);
		GltfRootModel_set_AllLights_mA65DEA975E7046A658C821E8B7605D95D9342829_inline(L_364, L_366, NULL);
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_367 = __this->___U3CU3E4__this_4;
		NullCheck(L_367);
		bool L_368 = L_367->____quantitized_153;
		V_31 = L_368;
		bool L_369 = V_31;
		if (!L_369)
		{
			goto IL_0cea;
		}
	}
	{
		GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* L_370 = __this->___U3CrootModelU3E5__5_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_371;
		memset((&L_371), 0, sizeof(L_371));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_371), (100.0f), (100.0f), (100.0f), /*hidden argument*/NULL);
		NullCheck(L_370);
		GltfModel_set_LocalScale_m3B7956B3910519C3DC2E017D27D560AE29615BA0_inline(L_370, L_371, NULL);
	}

IL_0cea:
	{
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_372 = __this->____assetLoaderContext_2;
		NullCheck(L_372);
		Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47* L_373 = L_372->___Stack_39;
		GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* L_374 = __this->___U3CrootModelU3E5__5_9;
		NullCheck(L_373);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_373, L_374);
		return (bool)0;
	}
}
// System.Object TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CParseModel_CoroutineU3Ed__254_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m382FD7E69F1EBA51B44AA426FAFC4D0712DC24EC (U3CParseModel_CoroutineU3Ed__254_t51CF6FAF439B4824591E4E3DB1D70113416261D2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseModel_CoroutineU3Ed__254_System_Collections_IEnumerator_Reset_m7E2AAA0139A8A2CA44645BA92C9522C56647CE79 (U3CParseModel_CoroutineU3Ed__254_t51CF6FAF439B4824591E4E3DB1D70113416261D2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CParseModel_CoroutineU3Ed__254_System_Collections_IEnumerator_Reset_m7E2AAA0139A8A2CA44645BA92C9522C56647CE79_RuntimeMethod_var)));
	}
}
// System.Object TriLibCore.Gltf.GtlfProcessor/<ParseModel_Coroutine>d__254::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CParseModel_CoroutineU3Ed__254_System_Collections_IEnumerator_get_Current_mCB916921EC659FAB79BB33E3193BEFF342596E62 (U3CParseModel_CoroutineU3Ed__254_t51CF6FAF439B4824591E4E3DB1D70113416261D2* __this, const RuntimeMethod* method) 
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
// System.Boolean TriLibCore.Gltf.JsonValueExtensions::TryGetChildValueAsString(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,System.String&,TriLibCore.Gltf.TemporaryString,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetChildValueAsString_mD84CD396ED8ED763CB518234AD2D34E80DD57258 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, String_t** ___outValue2, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString3, String_t* ___defaultValue4, const RuntimeMethod* method) 
{
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		int64_t L_0 = ___fieldName1;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_1;
		L_1 = JsonValue_GetChildWithKey_mF725566296149F7AAC5F832583624FDA1DB639B5((&___value0), L_0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = JsonValue_get_Valid_mCD65D0C8C946467D5E808BA12551EA7DEADEDADD((&V_0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		String_t** L_4 = ___outValue2;
		String_t* L_5 = ___defaultValue4;
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_5);
		V_2 = (bool)0;
		goto IL_0030;
	}

IL_0021:
	{
		String_t** L_6 = ___outValue2;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_7 = V_0;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_8 = ___temporaryString3;
		String_t* L_9 = ___defaultValue4;
		String_t* L_10;
		L_10 = JsonValueExtensions_GetValueAsString_m0532DB0CC954333227397E66AF720BA23229EE2C(L_7, L_8, L_9, NULL);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_10);
		V_2 = (bool)1;
		goto IL_0030;
	}

IL_0030:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.String TriLibCore.Gltf.JsonValueExtensions::GetChildValueAsString(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,TriLibCore.Gltf.TemporaryString,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonValueExtensions_GetChildValueAsString_m7FB95121CB9AC82682C40AB679CD5AD3D4650709 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, String_t* ___defaultValue3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		int64_t L_1 = ___fieldName1;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_2 = ___temporaryString2;
		String_t* L_3 = ___defaultValue3;
		bool L_4;
		L_4 = JsonValueExtensions_TryGetChildValueAsString_mD84CD396ED8ED763CB518234AD2D34E80DD57258(L_0, L_1, (&V_1), L_2, L_3, NULL);
		V_0 = L_4;
		String_t* L_5 = V_1;
		V_2 = L_5;
		goto IL_0011;
	}

IL_0011:
	{
		String_t* L_6 = V_2;
		return L_6;
	}
}
// System.Boolean TriLibCore.Gltf.JsonValueExtensions::HasValue(TriLibCore.Utils.JsonParser/JsonValue,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_HasValue_m8C508C0CFF483E7E5AEF8E028F3270950D2E2B21 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, const RuntimeMethod* method) 
{
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		int64_t L_0 = ___fieldName1;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_1;
		L_1 = JsonValue_GetChildWithKey_mF725566296149F7AAC5F832583624FDA1DB639B5((&___value0), L_0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = JsonValue_get_Valid_mCD65D0C8C946467D5E808BA12551EA7DEADEDADD((&V_0), NULL);
		V_1 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Boolean TriLibCore.Gltf.JsonValueExtensions::TryGetValueAsString(TriLibCore.Utils.JsonParser/JsonValue,System.String&,TriLibCore.Gltf.TemporaryString,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetValueAsString_mAF5754FC7422BF2F01A25C52D59CD0E6B6D7BFF9 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, String_t** ___outValue1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, String_t* ___defaultValue3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	String_t** G_B2_0 = NULL;
	String_t** G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t** G_B3_1 = NULL;
	{
		String_t** L_0 = ___outValue1;
		bool L_1;
		L_1 = JsonValue_get_Valid_mCD65D0C8C946467D5E808BA12551EA7DEADEDADD((&___value0), NULL);
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_000e;
		}
	}
	{
		String_t* L_2 = ___defaultValue3;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_000e:
	{
		String_t* L_3;
		L_3 = JsonValue_ToString_mC70DFC7F0F7201AC85CAE307B64C44BAA74A1EA0((&___value0), NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		*((RuntimeObject**)G_B3_1) = (RuntimeObject*)G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)G_B3_1, (void*)(RuntimeObject*)G_B3_0);
		bool L_4;
		L_4 = JsonValue_get_Valid_mCD65D0C8C946467D5E808BA12551EA7DEADEDADD((&___value0), NULL);
		V_0 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.String TriLibCore.Gltf.JsonValueExtensions::GetValueAsString(TriLibCore.Utils.JsonParser/JsonValue,TriLibCore.Gltf.TemporaryString,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonValueExtensions_GetValueAsString_m0532DB0CC954333227397E66AF720BA23229EE2C (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString1, String_t* ___defaultValue2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_1 = ___temporaryString1;
		String_t* L_2 = ___defaultValue2;
		bool L_3;
		L_3 = JsonValueExtensions_TryGetValueAsString_mAF5754FC7422BF2F01A25C52D59CD0E6B6D7BFF9(L_0, (&V_1), L_1, L_2, NULL);
		V_0 = L_3;
		String_t* L_4 = V_1;
		V_2 = L_4;
		goto IL_0010;
	}

IL_0010:
	{
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.Boolean TriLibCore.Gltf.JsonValueExtensions::TryGetValueAsFloat(TriLibCore.Utils.JsonParser/JsonValue,System.Single&,TriLibCore.Gltf.TemporaryString,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetValueAsFloat_m088463E8453625F0A9FB8557C8D8CBA6D081B288 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, float* ___outValue1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, float ___defaultValue3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		String_t* L_1;
		L_1 = TemporaryString_GetString_m13E0621057D7FE2FC58C8D3E4C8AE05DBAADF725((&___temporaryString2), L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		float* L_3 = ___outValue1;
		bool L_4;
		L_4 = Single_TryParse_mFB8CC32F0016FBB6EFCB97953CF3515767EB6431(L_1, ((int32_t)167), L_2, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		V_1 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Boolean TriLibCore.Gltf.JsonValueExtensions::TryGetValueAsInt(TriLibCore.Utils.JsonParser/JsonValue,System.Int32&,TriLibCore.Gltf.TemporaryString,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetValueAsInt_m7691631B9C6D4518D3CCF1C4991453B0FC125C07 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int32_t* ___outValue1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, int32_t ___defaultValue3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		String_t* L_1;
		L_1 = TemporaryString_GetString_m13E0621057D7FE2FC58C8D3E4C8AE05DBAADF725((&___temporaryString2), L_0, NULL);
		int32_t* L_2 = ___outValue1;
		bool L_3;
		L_3 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		V_1 = L_4;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Single TriLibCore.Gltf.JsonValueExtensions::GetValueAsFloat(TriLibCore.Utils.JsonParser/JsonValue,TriLibCore.Gltf.TemporaryString,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JsonValueExtensions_GetValueAsFloat_mD71182A433052F6CE09044CAFF0887FC53C14D87 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString1, float ___defaultValue2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_1 = ___temporaryString1;
		float L_2 = ___defaultValue2;
		bool L_3;
		L_3 = JsonValueExtensions_TryGetValueAsFloat_m088463E8453625F0A9FB8557C8D8CBA6D081B288(L_0, (&V_0), L_1, L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		float L_5 = V_0;
		V_2 = L_5;
		goto IL_0018;
	}

IL_0014:
	{
		float L_6 = ___defaultValue2;
		V_2 = L_6;
		goto IL_0018;
	}

IL_0018:
	{
		float L_7 = V_2;
		return L_7;
	}
}
// System.Int32 TriLibCore.Gltf.JsonValueExtensions::GetValueAsInt(TriLibCore.Utils.JsonParser/JsonValue,TriLibCore.Gltf.TemporaryString,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonValueExtensions_GetValueAsInt_m3C95DA75C0E92CBC4F5DD09FE842329E005DC71E (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString1, int32_t ___defaultValue2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_1 = ___temporaryString1;
		int32_t L_2 = ___defaultValue2;
		bool L_3;
		L_3 = JsonValueExtensions_TryGetValueAsInt_m7691631B9C6D4518D3CCF1C4991453B0FC125C07(L_0, (&V_0), L_1, L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_5 = V_0;
		V_2 = L_5;
		goto IL_0018;
	}

IL_0014:
	{
		int32_t L_6 = ___defaultValue2;
		V_2 = L_6;
		goto IL_0018;
	}

IL_0018:
	{
		int32_t L_7 = V_2;
		return L_7;
	}
}
// System.Boolean TriLibCore.Gltf.JsonValueExtensions::TryGetChildValueAsFloat(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,System.Single&,TriLibCore.Gltf.TemporaryString,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetChildValueAsFloat_mAA8A3A0070C62F1172A766DE3DE2144A4417D30A (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, float* ___outValue2, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString3, float ___defaultValue4, const RuntimeMethod* method) 
{
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		int64_t L_0 = ___fieldName1;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_1;
		L_1 = JsonValue_GetChildWithKey_mF725566296149F7AAC5F832583624FDA1DB639B5((&___value0), L_0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = JsonValue_get_Valid_mCD65D0C8C946467D5E808BA12551EA7DEADEDADD((&V_0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		float* L_4 = ___outValue2;
		float L_5 = ___defaultValue4;
		*((float*)L_4) = (float)L_5;
		V_2 = (bool)0;
		goto IL_002e;
	}

IL_0021:
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_6 = V_0;
		float* L_7 = ___outValue2;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_8 = ___temporaryString3;
		float L_9 = ___defaultValue4;
		bool L_10;
		L_10 = JsonValueExtensions_TryGetValueAsFloat_m088463E8453625F0A9FB8557C8D8CBA6D081B288(L_6, L_7, L_8, L_9, NULL);
		V_2 = L_10;
		goto IL_002e;
	}

IL_002e:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Single TriLibCore.Gltf.JsonValueExtensions::GetChildValueAsFloat(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,TriLibCore.Gltf.TemporaryString,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JsonValueExtensions_GetChildValueAsFloat_m68080E0BE28718097127526844981511EDB8F37D (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, float ___defaultValue3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		int64_t L_1 = ___fieldName1;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_2 = ___temporaryString2;
		float L_3 = ___defaultValue3;
		bool L_4;
		L_4 = JsonValueExtensions_TryGetChildValueAsFloat_mAA8A3A0070C62F1172A766DE3DE2144A4417D30A(L_0, L_1, (&V_0), L_2, L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0015;
		}
	}
	{
		float L_6 = V_0;
		V_2 = L_6;
		goto IL_0019;
	}

IL_0015:
	{
		float L_7 = ___defaultValue3;
		V_2 = L_7;
		goto IL_0019;
	}

IL_0019:
	{
		float L_8 = V_2;
		return L_8;
	}
}
// System.Boolean TriLibCore.Gltf.JsonValueExtensions::TryGetChildValueAsInt(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,System.Int32&,TriLibCore.Gltf.TemporaryString,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetChildValueAsInt_mA7C9F8DCDE76E0903E92E63DA44867F9E0DA03EF (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, int32_t* ___outValue2, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString3, int32_t ___defaultValue4, const RuntimeMethod* method) 
{
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		int64_t L_0 = ___fieldName1;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_1;
		L_1 = JsonValue_GetChildWithKey_mF725566296149F7AAC5F832583624FDA1DB639B5((&___value0), L_0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = JsonValue_get_Valid_mCD65D0C8C946467D5E808BA12551EA7DEADEDADD((&V_0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		int32_t* L_4 = ___outValue2;
		int32_t L_5 = ___defaultValue4;
		*((int32_t*)L_4) = (int32_t)L_5;
		V_2 = (bool)0;
		goto IL_002e;
	}

IL_0021:
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_6 = V_0;
		int32_t* L_7 = ___outValue2;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_8 = ___temporaryString3;
		int32_t L_9 = ___defaultValue4;
		bool L_10;
		L_10 = JsonValueExtensions_TryGetValueAsInt_m7691631B9C6D4518D3CCF1C4991453B0FC125C07(L_6, L_7, L_8, L_9, NULL);
		V_2 = L_10;
		goto IL_002e;
	}

IL_002e:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Int32 TriLibCore.Gltf.JsonValueExtensions::GetChildValueAsInt(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,TriLibCore.Gltf.TemporaryString,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonValueExtensions_GetChildValueAsInt_m3C93818153DC9AEA421B50374D000239E5E04FE1 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___fieldName1, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 ___temporaryString2, int32_t ___defaultValue3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_0 = ___value0;
		int64_t L_1 = ___fieldName1;
		TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7 L_2 = ___temporaryString2;
		int32_t L_3 = ___defaultValue3;
		bool L_4;
		L_4 = JsonValueExtensions_TryGetChildValueAsInt_mA7C9F8DCDE76E0903E92E63DA44867F9E0DA03EF(L_0, L_1, (&V_0), L_2, L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_6 = V_0;
		V_2 = L_6;
		goto IL_0019;
	}

IL_0015:
	{
		int32_t L_7 = ___defaultValue3;
		V_2 = L_7;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_8 = V_2;
		return L_8;
	}
}
// TriLibCore.Utils.JsonParser/JsonValue TriLibCore.Gltf.JsonValueExtensions::GetArrayValueAtIndex(TriLibCore.Utils.JsonParser/JsonValue,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 JsonValueExtensions_GetArrayValueAtIndex_m34113EE9E3666ABF14748A209E0A7CA29343BD71 (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int32_t ___index1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0;
		L_0 = JsonValue_get_Type_m899390B4081FD1FFF0DB96A703C4FB699FC16DFF_inline((&___value0), NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB954140AA28D7E06C4D670BE0C8598F682E29712)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonValueExtensions_GetArrayValueAtIndex_m34113EE9E3666ABF14748A209E0A7CA29343BD71_RuntimeMethod_var)));
	}

IL_001e:
	{
		int32_t L_3 = ___index1;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_4;
		L_4 = JsonValue_GetChildAtIndex_m9EE4910093872ECDFFB22FBA4450114E3BD15E36((&___value0), L_3, NULL);
		V_1 = L_4;
		goto IL_0029;
	}

IL_0029:
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_5 = V_1;
		return L_5;
	}
}
// System.Boolean TriLibCore.Gltf.JsonValueExtensions::TryGetChildWithKey(TriLibCore.Utils.JsonParser/JsonValue,System.Int64,TriLibCore.Utils.JsonParser/JsonValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_TryGetChildWithKey_m00DDC2B4946568C3946965AA2B65DA221352D21C (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, int64_t ___key1, JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* ___outValue2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_0 = ___outValue2;
		int64_t L_1 = ___key1;
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 L_2;
		L_2 = JsonValue_GetChildWithKey_mF725566296149F7AAC5F832583624FDA1DB639B5((&___value0), L_1, NULL);
		*(JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914*)L_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914*)L_0)->___U3CBinaryReaderU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914*)L_0)->____hashes_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914*)L_0)->____children_5), (void*)NULL);
		#endif
		JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* L_3 = ___outValue2;
		bool L_4;
		L_4 = JsonValue_get_Valid_mCD65D0C8C946467D5E808BA12551EA7DEADEDADD(L_3, NULL);
		V_0 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean TriLibCore.Gltf.JsonValueExtensions::StartsWith(TriLibCore.Utils.JsonParser/JsonValue,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValueExtensions_StartsWith_m898429C6842B655FBF86D99D45F7F8729D99710D (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, String_t* ___prefix1, int32_t ___stringComparison2, const RuntimeMethod* method) 
{
	JsonCharEnumerator_t378C3FA1DE713F20F39B18EF561B87F0BC1929C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B8_0 = 0;
	{
		JsonCharEnumerator_t378C3FA1DE713F20F39B18EF561B87F0BC1929C1 L_0;
		L_0 = JsonValue_GetCharEnumerator_m8B86E7753F072951D3012F03AB421FD80589B220((&___value0), NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{// begin finally (depth: 1)
				JsonCharEnumerator_Dispose_mEF0CF1AE6945827C974F4371602DB9EE5BBF11B0((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				V_1 = 0;
				goto IL_0030_1;
			}

IL_000e_1:
			{
				String_t* L_1 = ___prefix1;
				int32_t L_2 = V_1;
				NullCheck(L_1);
				Il2CppChar L_3;
				L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
				Il2CppChar L_4;
				L_4 = JsonCharEnumerator_get_Current_m863D5EED0ABBA8F12B873CE788EA2FCF2EA4FFB1((&V_0), NULL);
				V_2 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_5 = V_2;
				if (!L_5)
				{
					goto IL_002b_1;
				}
			}
			{
				V_3 = (bool)0;
				goto IL_005c;
			}

IL_002b_1:
			{
				int32_t L_6 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
			}

IL_0030_1:
			{
				int32_t L_7 = V_1;
				String_t* L_8 = ___prefix1;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
				if ((((int32_t)L_7) >= ((int32_t)L_9)))
				{
					goto IL_0042_1;
				}
			}
			{
				bool L_10;
				L_10 = JsonCharEnumerator_MoveNext_m89BBA5DC257969FFDB7DC6831E514E1CE7F909A9((&V_0), NULL);
				G_B8_0 = ((int32_t)(L_10));
				goto IL_0043_1;
			}

IL_0042_1:
			{
				G_B8_0 = 0;
			}

IL_0043_1:
			{
				V_4 = (bool)G_B8_0;
				bool L_11 = V_4;
				if (L_11)
				{
					goto IL_000e_1;
				}
			}
			{
				V_3 = (bool)1;
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		bool L_12 = V_3;
		return L_12;
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
// System.Byte TriLibCore.Gltf.StreamChunk::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t StreamChunk_get_Item_m01EA064798417C0FD1F87F5C8D41B4EE700C7279 (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	uint8_t V_3 = 0x0;
	bool V_4 = false;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0;
		L_0 = StreamChunk_get_BaseStream_mF02EC5BD726384BDA32816E4F5C687365CB10367_inline(__this, NULL);
		V_2 = (bool)((((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_3 = (uint8_t)0;
		goto IL_004b;
	}

IL_0013:
	{
		int64_t L_2;
		L_2 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, __this);
		V_0 = L_2;
		int32_t L_3 = ___index0;
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, ((int64_t)L_3));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4;
		L_4 = StreamChunk_get_BaseStream_mF02EC5BD726384BDA32816E4F5C687365CB10367_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::ReadByte() */, L_4);
		V_1 = L_5;
		int64_t L_6 = V_0;
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, L_6);
		int32_t L_7 = V_1;
		V_4 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		V_3 = (uint8_t)0;
		goto IL_004b;
	}

IL_0046:
	{
		int32_t L_9 = V_1;
		V_3 = (uint8_t)((int32_t)(uint8_t)L_9);
		goto IL_004b;
	}

IL_004b:
	{
		uint8_t L_10 = V_3;
		return L_10;
	}
}
// System.Void TriLibCore.Gltf.StreamChunk::.ctor(System.IO.Stream,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamChunk__ctor_mC304BC3657CE5E9DF53B591427B3B16B89C531BE (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___baseStream0, int32_t ___length1, int32_t ___offset2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* G_B3_0 = NULL;
	StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* G_B1_0 = NULL;
	StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* G_B2_0 = NULL;
	int64_t G_B4_0 = 0;
	StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* G_B4_1 = NULL;
	StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* G_B6_0 = NULL;
	StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* G_B5_0 = NULL;
	int64_t G_B7_0 = 0;
	StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* G_B7_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___baseStream0;
		StreamChunk_set_BaseStream_mDC58F0B6BB29D0DA04D7F862E603ED9AA2B4A52B_inline(__this, L_0, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___baseStream0;
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B3_0 = __this;
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___length1;
		G_B2_0 = G_B1_0;
		if ((((int32_t)L_2) > ((int32_t)(-1))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0020;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___baseStream0;
		NullCheck(L_3);
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		int64_t L_4;
		L_4 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_3);
		G_B4_0 = L_4;
		G_B4_1 = G_B2_0;
		goto IL_0022;
	}

IL_0020:
	{
		int32_t L_5 = ___length1;
		G_B4_0 = ((int64_t)L_5);
		G_B4_1 = G_B3_0;
	}

IL_0022:
	{
		NullCheck(G_B4_1);
		G_B4_1->___U3CLengthU3Ek__BackingField_7 = G_B4_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___baseStream0;
		G_B5_0 = __this;
		if (L_6)
		{
			G_B6_0 = __this;
			goto IL_002f;
		}
	}
	{
		int32_t L_7 = ___offset2;
		G_B7_0 = ((int64_t)L_7);
		G_B7_1 = G_B5_0;
		goto IL_0038;
	}

IL_002f:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = ___baseStream0;
		NullCheck(L_8);
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		int64_t L_9;
		L_9 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_8);
		int32_t L_10 = ___offset2;
		G_B7_0 = ((int64_t)il2cpp_codegen_add(L_9, ((int64_t)L_10)));
		G_B7_1 = G_B6_0;
	}

IL_0038:
	{
		NullCheck(G_B7_1);
		G_B7_1->___U3CBasePositionU3Ek__BackingField_6 = G_B7_0;
		__this->____position_8 = ((int64_t)0);
		return;
	}
}
// System.IO.Stream TriLibCore.Gltf.StreamChunk::get_BaseStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* StreamChunk_get_BaseStream_mF02EC5BD726384BDA32816E4F5C687365CB10367 (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___U3CBaseStreamU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.StreamChunk::set_BaseStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamChunk_set_BaseStream_mDC58F0B6BB29D0DA04D7F862E603ED9AA2B4A52B (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___value0, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___value0;
		__this->___U3CBaseStreamU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBaseStreamU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Int64 TriLibCore.Gltf.StreamChunk::get_BasePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StreamChunk_get_BasePosition_m5B1C69EF3FAC42F4A02B883A44D8029E695A1FBE (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CBasePositionU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.StreamChunk::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamChunk_Flush_mB37DA5EF37320FEB960B4283C8A1470340C0AF1A (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, const RuntimeMethod* method) 
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B2_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B1_0 = NULL;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0;
		L_0 = StreamChunk_get_BaseStream_mF02EC5BD726384BDA32816E4F5C687365CB10367_inline(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		VirtualActionInvoker0::Invoke(21 /* System.Void System.IO.Stream::Flush() */, G_B2_0);
	}

IL_0013:
	{
		return;
	}
}
// System.Int64 TriLibCore.Gltf.StreamChunk::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StreamChunk_Seek_mE371A90196B4D8199687EE053285EAEFADB64460 (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		int32_t L_0 = ___origin1;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_0045;
	}

IL_0019:
	{
		int64_t L_3 = ___offset0;
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, L_3);
		goto IL_0057;
	}

IL_0023:
	{
		int64_t L_4;
		L_4 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, __this);
		int64_t L_5 = ___offset0;
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, ((int64_t)il2cpp_codegen_add(L_4, L_5)));
		goto IL_0057;
	}

IL_0034:
	{
		int64_t L_6;
		L_6 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, __this);
		int64_t L_7 = ___offset0;
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, ((int64_t)il2cpp_codegen_subtract(L_6, L_7)));
		goto IL_0057;
	}

IL_0045:
	{
		int32_t L_8 = ___origin1;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SeekOrigin_t7EB9AD0EDF26368A40F48FA2098F02160B1E8000_il2cpp_TypeInfo_var)), &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral74CC3B7E957B3E7555158404BFDECEF3E64B046B)), L_10, (String_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamChunk_Seek_mE371A90196B4D8199687EE053285EAEFADB64460_RuntimeMethod_var)));
	}

IL_0057:
	{
		int64_t L_12;
		L_12 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, __this);
		V_2 = L_12;
		goto IL_0060;
	}

IL_0060:
	{
		int64_t L_13 = V_2;
		return L_13;
	}
}
// System.Void TriLibCore.Gltf.StreamChunk::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamChunk_SetLength_mFA5E337720C33A2627F16BB5D0FD3DD6EC753576 (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Int32 TriLibCore.Gltf.StreamChunk::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamChunk_Read_m4E7F6503E2900B0C683194085312C691ADA33B20 (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0;
		L_0 = StreamChunk_get_BaseStream_mF02EC5BD726384BDA32816E4F5C687365CB10367_inline(__this, NULL);
		V_1 = (bool)((((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_2 = 0;
		goto IL_0052;
	}

IL_0013:
	{
		int64_t L_2;
		L_2 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, __this);
		V_0 = L_2;
		int64_t L_3;
		L_3 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, __this);
		int32_t L_4 = ___offset1;
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, ((int64_t)il2cpp_codegen_add(L_3, ((int64_t)L_4))));
		int64_t L_5 = __this->____position_8;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6;
		L_6 = StreamChunk_get_BaseStream_mF02EC5BD726384BDA32816E4F5C687365CB10367_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___buffer0;
		int32_t L_8 = ___count2;
		NullCheck(L_6);
		int32_t L_9;
		L_9 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(32 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, 0, L_8);
		__this->____position_8 = ((int64_t)il2cpp_codegen_add(L_5, ((int64_t)L_9)));
		int64_t L_10;
		L_10 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, __this);
		int64_t L_11 = V_0;
		V_2 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_10, L_11)));
		goto IL_0052;
	}

IL_0052:
	{
		int32_t L_12 = V_2;
		return L_12;
	}
}
// System.Void TriLibCore.Gltf.StreamChunk::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamChunk_Write_mE692785FDB5C9BEB2C190945C49031045173C2A9 (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamChunk_Write_mE692785FDB5C9BEB2C190945C49031045173C2A9_RuntimeMethod_var)));
	}
}
// System.Boolean TriLibCore.Gltf.StreamChunk::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamChunk_get_CanRead_m1F9096E4EE89D720F018F8DC9100C8481397A0BF (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, const RuntimeMethod* method) 
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B2_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0;
		L_0 = StreamChunk_get_BaseStream_mF02EC5BD726384BDA32816E4F5C687365CB10367_inline(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, G_B2_0);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_0012:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean TriLibCore.Gltf.StreamChunk::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamChunk_get_CanSeek_m3BC9F9406F5F5547BC06B1C6AEB0660F133F0ADB (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, const RuntimeMethod* method) 
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B2_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0;
		L_0 = StreamChunk_get_BaseStream_mF02EC5BD726384BDA32816E4F5C687365CB10367_inline(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, G_B2_0);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_0012:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean TriLibCore.Gltf.StreamChunk::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamChunk_get_CanWrite_m95BD636F7E8E80501E32944FD132602D3A990CE9 (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int64 TriLibCore.Gltf.StreamChunk::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StreamChunk_get_Length_m2D1D7D6FA3EBD962AA3FC7ED302331E9D5C76840 (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CLengthU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Int64 TriLibCore.Gltf.StreamChunk::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StreamChunk_get_Position_m935C2B484BBB0E3D0C06B91AD65A79C91E470A07 (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____position_8;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.StreamChunk::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamChunk_set_Position_m0DB40DC130C68CDE27425A5C51B6BEF5C6BAB9A2 (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->____position_8 = L_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1;
		L_1 = StreamChunk_get_BaseStream_mF02EC5BD726384BDA32816E4F5C687365CB10367_inline(__this, NULL);
		int64_t L_2;
		L_2 = StreamChunk_get_BasePosition_m5B1C69EF3FAC42F4A02B883A44D8029E695A1FBE_inline(__this, NULL);
		int64_t L_3 = __this->____position_8;
		NullCheck(L_1);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_1, ((int64_t)il2cpp_codegen_add(L_2, L_3)));
		return;
	}
}
// System.Byte[] TriLibCore.Gltf.StreamChunk::ToBytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* StreamChunk_ToBytes_m103B110B23CBF3738B46CCE3FEDBE54614237646 (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___index1, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0;
		L_0 = StreamChunk_get_BaseStream_mF02EC5BD726384BDA32816E4F5C687365CB10367_inline(__this, NULL);
		V_1 = (bool)((((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		goto IL_005a;
	}

IL_0013:
	{
		V_3 = 0;
		goto IL_0021;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bytes0;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)0);
		int32_t L_4 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0021:
	{
		int32_t L_5 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___bytes0;
		NullCheck(L_6);
		V_4 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))? 1 : 0);
		bool L_7 = V_4;
		if (L_7)
		{
			goto IL_0017;
		}
	}
	{
		int64_t L_8;
		L_8 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, __this);
		V_0 = L_8;
		int32_t L_9 = ___index1;
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, ((int64_t)L_9));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10;
		L_10 = StreamChunk_get_BaseStream_mF02EC5BD726384BDA32816E4F5C687365CB10367_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___bytes0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___bytes0;
		NullCheck(L_12);
		NullCheck(L_10);
		int32_t L_13;
		L_13 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(32 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_10, L_11, 0, ((int32_t)(((RuntimeArray*)L_12)->max_length)));
		int64_t L_14 = V_0;
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___bytes0;
		V_2 = L_15;
		goto IL_005a;
	}

IL_005a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_2;
		return L_16;
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
// System.Single TriLibCore.Gltf.GltfCamera::get_AspectRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GltfCamera_get_AspectRatio_mDBC31E5752276BF5E1690C3989E9D76AB8C9B4F5 (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CAspectRatioU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfCamera::set_AspectRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfCamera_set_AspectRatio_mDCC91BB16ABC2C3906B8A27DA4ED3A3D68D95C71 (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___U3CAspectRatioU3Ek__BackingField_19 = L_0;
		return;
	}
}
// System.Boolean TriLibCore.Gltf.GltfCamera::get_Ortographic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfCamera_get_Ortographic_m02FECF1EDE0F7A5516D96442E6E7555A1AF9A11F (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3COrtographicU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfCamera::set_Ortographic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfCamera_set_Ortographic_mBF93F8CE6EC50DE166C0CD06536313EB7BF40F88 (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3COrtographicU3Ek__BackingField_20 = L_0;
		return;
	}
}
// System.Single TriLibCore.Gltf.GltfCamera::get_OrtographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GltfCamera_get_OrtographicSize_m310AD7912F4A4E1F5D77ECAFF2A2AD94509EA20C (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3COrtographicSizeU3Ek__BackingField_21;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfCamera::set_OrtographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfCamera_set_OrtographicSize_m49AA0C3E64798F26A108B4DE984ACC357D82DA2F (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___U3COrtographicSizeU3Ek__BackingField_21 = L_0;
		return;
	}
}
// System.Single TriLibCore.Gltf.GltfCamera::get_FieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GltfCamera_get_FieldOfView_m1FB58978F3E05E86334756EC57A99166C8D020E1 (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CFieldOfViewU3Ek__BackingField_22;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfCamera::set_FieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfCamera_set_FieldOfView_m41B957712387CB68F78C90DE4B7E70AF269BA11F (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___U3CFieldOfViewU3Ek__BackingField_22 = L_0;
		return;
	}
}
// System.Single TriLibCore.Gltf.GltfCamera::get_NearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GltfCamera_get_NearClipPlane_m7E5888F4CA1F9CC7B6BE0B700634D86816B37D08 (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CNearClipPlaneU3Ek__BackingField_23;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfCamera::set_NearClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfCamera_set_NearClipPlane_m17B5C4368BC9ABACBA6650517E31ED88208621C5 (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___U3CNearClipPlaneU3Ek__BackingField_23 = L_0;
		return;
	}
}
// System.Single TriLibCore.Gltf.GltfCamera::get_FarClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GltfCamera_get_FarClipPlane_mEBAB331B5B7E830EB5908030CEEA63AEF95CB7BE (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CFarClipPlaneU3Ek__BackingField_24;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfCamera::set_FarClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfCamera_set_FarClipPlane_m771EE37EF13EB24956FE89E511CE5E4FB84A92A1 (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___U3CFarClipPlaneU3Ek__BackingField_24 = L_0;
		return;
	}
}
// System.Single TriLibCore.Gltf.GltfCamera::get_FocalLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GltfCamera_get_FocalLength_m06E5414677BBB0FC9AC3423D4ACF7DAD7E258B87 (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CFocalLengthU3Ek__BackingField_25;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfCamera::set_FocalLength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfCamera_set_FocalLength_mC1B367DCBCEF3B7C4F34A1E3FFF1D681461FFF05 (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___U3CFocalLengthU3Ek__BackingField_25 = L_0;
		return;
	}
}
// UnityEngine.Vector2 TriLibCore.Gltf.GltfCamera::get_SensorSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GltfCamera_get_SensorSize_m164785B600EAB8836D55A3843C8A04742CFD36CF (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CSensorSizeU3Ek__BackingField_26;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfCamera::set_SensorSize(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfCamera_set_SensorSize_m823FCBD66511C477D025AD69FA25AEB7A907DAD2 (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CSensorSizeU3Ek__BackingField_26 = L_0;
		return;
	}
}
// UnityEngine.Vector2 TriLibCore.Gltf.GltfCamera::get_LensShift()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GltfCamera_get_LensShift_mB30AAF107A389C33B4EAD2B5269369EB6A918BA1 (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CLensShiftU3Ek__BackingField_27;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfCamera::set_LensShift(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfCamera_set_LensShift_mBF41B2DCCCDBA1D85E1A2E520B0B5E52F1BF7B72 (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CLensShiftU3Ek__BackingField_27 = L_0;
		return;
	}
}
// UnityEngine.Camera/GateFitMode TriLibCore.Gltf.GltfCamera::get_GateFitMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GltfCamera_get_GateFitMode_m5388E97D96CD59CF65924058F431DE71405E075F (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CGateFitModeU3Ek__BackingField_28;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfCamera::set_GateFitMode(UnityEngine.Camera/GateFitMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfCamera_set_GateFitMode_m8A9215802998BCFB2161B411F1864A558A61038D (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CGateFitModeU3Ek__BackingField_28 = L_0;
		return;
	}
}
// System.Boolean TriLibCore.Gltf.GltfCamera::get_PhysicalCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfCamera_get_PhysicalCamera_mA0E3214ECDE12395EA109609D6D449AD7D3D34FA (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CPhysicalCameraU3Ek__BackingField_29;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfCamera::set_PhysicalCamera(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfCamera_set_PhysicalCamera_m6A2A6F9198E200717F51ADF8257B684FD2A989A4 (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CPhysicalCameraU3Ek__BackingField_29 = L_0;
		return;
	}
}
// System.Void TriLibCore.Gltf.GltfCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfCamera__ctor_m0035FA73EB868C3E8BF170CFF10EB1BC7811D56C (GltfCamera_t10A4A863C31F07CAB734F6A9A3DB7D2CD061F6F0* __this, const RuntimeMethod* method) 
{
	{
		__this->___XMag_17 = (1.0f);
		__this->___YMag_18 = (1.0f);
		__this->___U3CAspectRatioU3Ek__BackingField_19 = (1.33333302f);
		__this->___U3COrtographicU3Ek__BackingField_20 = (bool)0;
		__this->___U3COrtographicSizeU3Ek__BackingField_21 = (1.0f);
		__this->___U3CFieldOfViewU3Ek__BackingField_22 = (60.0f);
		__this->___U3CNearClipPlaneU3Ek__BackingField_23 = (0.100000001f);
		__this->___U3CFarClipPlaneU3Ek__BackingField_24 = (4.0f);
		__this->___U3CGateFitModeU3Ek__BackingField_28 = 0;
		GltfModel__ctor_m8B12ADEF72EE1FF063181890A6C04E2629E0B711(__this, NULL);
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
// System.Void TriLibCore.Gltf.GltfGeometry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfGeometry__ctor_m9AFF37D8EACD0F174907977AADCD15F6A8B7A02C (GltfGeometry_t423D7EB79E5D71C7FC249BBF8DD77F7576A0CCC7* __this, const RuntimeMethod* method) 
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
// System.Void TriLibCore.Gltf.GltfTempGeometryGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfTempGeometryGroup__ctor_mD9970225FF191449FFFDB27DC5055178B23C2B56 (GltfTempGeometryGroup_t2E188D1244BBD14E868F7884D7744770ED0EDA83* __this, const RuntimeMethod* method) 
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
// UnityEngine.LightType TriLibCore.Gltf.GltfLight::get_LightType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GltfLight_get_LightType_m41359A33B33BB32B7DF80B2AEB60342AC389D62B (GltfLight_t92D88FA076389FAD46793431FBF2D27EFECD41CF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLightTypeU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfLight::set_LightType(UnityEngine.LightType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfLight_set_LightType_mB671AF2013A07E3857A5444CE249C730EDCC86A0 (GltfLight_t92D88FA076389FAD46793431FBF2D27EFECD41CF* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLightTypeU3Ek__BackingField_17 = L_0;
		return;
	}
}
// UnityEngine.Color TriLibCore.Gltf.GltfLight::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GltfLight_get_Color_m362A9F2D9DD79F2935331E74F7FCB0A16691F68C (GltfLight_t92D88FA076389FAD46793431FBF2D27EFECD41CF* __this, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___U3CColorU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfLight::set_Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfLight_set_Color_m97F36898F2E7A920D22B934B8E081C1D806F0692 (GltfLight_t92D88FA076389FAD46793431FBF2D27EFECD41CF* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___U3CColorU3Ek__BackingField_18 = L_0;
		return;
	}
}
// System.Single TriLibCore.Gltf.GltfLight::get_Intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GltfLight_get_Intensity_m1433D9C8A4DC67D32AC12756FBFAE9C23A7EE682 (GltfLight_t92D88FA076389FAD46793431FBF2D27EFECD41CF* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CIntensityU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfLight::set_Intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfLight_set_Intensity_mE3497DFBC3F4BA8D3865B535B43B75C7CAFB8625 (GltfLight_t92D88FA076389FAD46793431FBF2D27EFECD41CF* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___U3CIntensityU3Ek__BackingField_19 = L_0;
		return;
	}
}
// System.Single TriLibCore.Gltf.GltfLight::get_Range()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GltfLight_get_Range_m28AAC5E992738E9CBD60BEE92DC2E305381C0601 (GltfLight_t92D88FA076389FAD46793431FBF2D27EFECD41CF* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CRangeU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfLight::set_Range(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfLight_set_Range_m0DB4F795CF75BFFF3A5656FD821E1593F10FC94C (GltfLight_t92D88FA076389FAD46793431FBF2D27EFECD41CF* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___U3CRangeU3Ek__BackingField_20 = L_0;
		return;
	}
}
// System.Single TriLibCore.Gltf.GltfLight::get_InnerSpotAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GltfLight_get_InnerSpotAngle_m2101837F68788CD5D9BA6C9B088B4428098A22E5 (GltfLight_t92D88FA076389FAD46793431FBF2D27EFECD41CF* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CInnerSpotAngleU3Ek__BackingField_21;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfLight::set_InnerSpotAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfLight_set_InnerSpotAngle_m5DF5E295D29CA82C50A51423A0B2533B36DDD4A4 (GltfLight_t92D88FA076389FAD46793431FBF2D27EFECD41CF* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___U3CInnerSpotAngleU3Ek__BackingField_21 = L_0;
		return;
	}
}
// System.Single TriLibCore.Gltf.GltfLight::get_OuterSpotAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GltfLight_get_OuterSpotAngle_mF57F2A1969BCC91659180809DDEF61D5E0AEE783 (GltfLight_t92D88FA076389FAD46793431FBF2D27EFECD41CF* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3COuterSpotAngleU3Ek__BackingField_22;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfLight::set_OuterSpotAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfLight_set_OuterSpotAngle_m04A0E9DC3655B6D17BB52F9DAD1F1FD5D166D356 (GltfLight_t92D88FA076389FAD46793431FBF2D27EFECD41CF* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___U3COuterSpotAngleU3Ek__BackingField_22 = L_0;
		return;
	}
}
// System.Single TriLibCore.Gltf.GltfLight::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GltfLight_get_Width_m3422C0328A2121AD2A945E05EB40ECC7C3750329 (GltfLight_t92D88FA076389FAD46793431FBF2D27EFECD41CF* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CWidthU3Ek__BackingField_23;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfLight::set_Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfLight_set_Width_m814A9051568723D3990BA2EE96B49CF8A6CDDA35 (GltfLight_t92D88FA076389FAD46793431FBF2D27EFECD41CF* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___U3CWidthU3Ek__BackingField_23 = L_0;
		return;
	}
}
// System.Single TriLibCore.Gltf.GltfLight::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GltfLight_get_Height_mEBAB5C69B7F1EDF6555057DCF4DBFB25A824F077 (GltfLight_t92D88FA076389FAD46793431FBF2D27EFECD41CF* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CHeightU3Ek__BackingField_24;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfLight::set_Height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfLight_set_Height_m08A8A0C8DC5A035DF9B9040FFC26C0722BF8E5FC (GltfLight_t92D88FA076389FAD46793431FBF2D27EFECD41CF* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___U3CHeightU3Ek__BackingField_24 = L_0;
		return;
	}
}
// System.Void TriLibCore.Gltf.GltfLight::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfLight__ctor_m7875CC04CAAB4B7F930FB375751E7DDE04439B0B (GltfLight_t92D88FA076389FAD46793431FBF2D27EFECD41CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CLightTypeU3Ek__BackingField_17 = 2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___U3CColorU3Ek__BackingField_18 = L_0;
		__this->___U3CIntensityU3Ek__BackingField_19 = (1.0f);
		il2cpp_codegen_runtime_class_init_inline(GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC_il2cpp_TypeInfo_var);
		float L_1 = ((GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC_StaticFields*)il2cpp_codegen_static_fields_for(GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC_il2cpp_TypeInfo_var))->___SpotLightDistance_10;
		__this->___U3CRangeU3Ek__BackingField_20 = L_1;
		__this->___U3CInnerSpotAngleU3Ek__BackingField_21 = (90.0f);
		__this->___U3COuterSpotAngleU3Ek__BackingField_22 = (90.0f);
		GltfModel__ctor_m8B12ADEF72EE1FF063181890A6C04E2629E0B711(__this, NULL);
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
// System.String TriLibCore.Gltf.GltfMaterial::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GltfMaterial_get_Name_m47CB5DB8839801408BB26066299F355DB0766FCB (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfMaterial::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfMaterial_set_Name_mA5992C5A76F74E243E858E8383B5F40067A28914 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean TriLibCore.Gltf.GltfMaterial::get_Used()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfMaterial_get_Used_m1921F0430BBB0D906431CA06E39BBACBAA44C76E (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CUsedU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfMaterial::set_Used(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfMaterial_set_Used_mC51D523CB0A56C1DD308138B879A6A15C93F8725 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CUsedU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Boolean TriLibCore.Gltf.GltfMaterial::get_UsesAlpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfMaterial_get_UsesAlpha_m327B904947C75B2F8638F9766DF73F39DE6CB720 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean TriLibCore.Gltf.GltfMaterial::ApplyOffsetAndScale(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfMaterial_ApplyOffsetAndScale_mD1C5A53FC445F998926201AF2CA7F5D790628A56 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) 
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
// System.Int32 TriLibCore.Gltf.GltfMaterial::get_Index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GltfMaterial_get_Index_m268900FB306D60BD6A415BF837CBEAC415EE2D4A (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CIndexU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfMaterial::set_Index(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfMaterial_set_Index_mEEFC1417950781BA04287FD7BE07ECF420A64ABB (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CIndexU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean TriLibCore.Gltf.GltfMaterial::get_IsAutodeskInteractive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfMaterial_get_IsAutodeskInteractive_m4E6CEF2DDD52AF20FD2C1237F575DE2766578D31 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean TriLibCore.Gltf.GltfMaterial::get_Processing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfMaterial_get_Processing_m4562A94FCFF496BBC471E76A36642F04E4045940 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CProcessingU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfMaterial::set_Processing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfMaterial_set_Processing_m9B6FC1E2996A6D2D890E58B6E44428EE600AEE78 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CProcessingU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean TriLibCore.Gltf.GltfMaterial::get_Processed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfMaterial_get_Processed_m8F7C30ED93D868663A629C52ABC6FC2BFEF2E540 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CProcessedU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfMaterial::set_Processed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfMaterial_set_Processed_m8B12DBA41C591A7D7AD2F74F245D11080443091B (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CProcessedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// TriLibCore.General.MaterialShadingSetup TriLibCore.Gltf.GltfMaterial::get_MaterialShadingSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GltfMaterial_get_MaterialShadingSetup_m16F63202A08E37629D47135511CE9F4ACF5396C2 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(0);
	}
}
// System.Boolean TriLibCore.Gltf.GltfMaterial::get_UsingSpecularGlossinness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfMaterial_get_UsingSpecularGlossinness_m9F1138A5E3A0D6D8A541C409ABA3B0DDF65351FA (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12628C55CF81EF3A2202756755D08C33AB0AE23C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral301F2F7310679116695B1862DCE01E6B0829BBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABE878BC3E7E84001C66585B9CF8804E74045F85);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		bool L_0;
		L_0 = GltfMaterial_HasProperty_mA6DD5EED3FAD24F809151168B5732F4D74E73FCA(__this, _stringLiteral301F2F7310679116695B1862DCE01E6B0829BBB0, NULL);
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		bool L_1;
		L_1 = GltfMaterial_HasProperty_mA6DD5EED3FAD24F809151168B5732F4D74E73FCA(__this, _stringLiteral12628C55CF81EF3A2202756755D08C33AB0AE23C, NULL);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = GltfMaterial_HasProperty_mA6DD5EED3FAD24F809151168B5732F4D74E73FCA(__this, _stringLiteralABE878BC3E7E84001C66585B9CF8804E74045F85, NULL);
		G_B4_0 = ((int32_t)(L_2));
		goto IL_0028;
	}

IL_0027:
	{
		G_B4_0 = 1;
	}

IL_0028:
	{
		return (bool)G_B4_0;
	}
}
// System.Void TriLibCore.Gltf.GltfMaterial::AddProperty(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfMaterial_AddProperty_m1DE74DDDB22F08FD69BDE19D7CB3DCA24077EF74 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, String_t* ___propertyName0, RuntimeObject* ___propertyValue1, bool ___isTexture2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E9B20202EAC4F6DA8FF0D1A5D19EADCBB966E2B);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___propertyValue1;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_2 = ___propertyName0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral9E9B20202EAC4F6DA8FF0D1A5D19EADCBB966E2B, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		InterfaceActionInvoker1< int32_t >::Invoke(24 /* System.Void TriLibCore.Interfaces.ITexture::set_TextureFormat(TriLibCore.General.TextureFormat) */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_5, 1);
	}

IL_0027:
	{
		RuntimeObject* L_6 = __this->____properties_5;
		String_t* L_7 = ___propertyName0;
		RuntimeObject* L_8 = ___propertyValue1;
		NullCheck(L_6);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		return;
	}
}
// System.String TriLibCore.Gltf.GltfMaterial::GetGenericPropertyName(TriLibCore.General.GenericMaterialProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GltfMaterial_GetGenericPropertyName_m0BBF0688D772D322BB95BE5408E31D1C82CF5A42 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, int32_t ___genericMaterialProperty0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12628C55CF81EF3A2202756755D08C33AB0AE23C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14DD79B52701F2CACB5918EAD3F341D3538C7302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral301F2F7310679116695B1862DCE01E6B0829BBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CB5E573D9E0B589AC50ACBB9ADDF1B97A5F652B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CF83EF9C835E8180C7A24EE907EAF9AAF67CADD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral592876A9C3FDFBE734EE9DDA787C3C0B6D770399);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral676FBBA565BC1705BE403D032D89194C390815C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C1C42B79B63F7D97E227521BF5DD2528F7BA79C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830A3A84EA1F672CA67D55E71627DAF91D9CF22F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9266B539C8D4E57B50CE6970115C5C2A22DB7689);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E9B20202EAC4F6DA8FF0D1A5D19EADCBB966E2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5ECB8D2CC8AB6F909B8859B9B2B2BA4C5546058);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABE878BC3E7E84001C66585B9CF8804E74045F85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF62F6C81160ADB86B2ADED876DF7594BEA5D2C91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBFE32A9426D9516E037EC0BF89B030D1435C18D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B13_0 = NULL;
	String_t* G_B17_0 = NULL;
	String_t* G_B26_0 = NULL;
	String_t* G_B30_0 = NULL;
	String_t* G_B34_0 = NULL;
	{
		int32_t L_0 = ___genericMaterialProperty0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0048;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_007c;
			}
			case 3:
			{
				goto IL_0092;
			}
			case 4:
			{
				goto IL_00a5;
			}
			case 5:
			{
				goto IL_00ad;
			}
			case 6:
			{
				goto IL_00b5;
			}
			case 7:
			{
				goto IL_0116;
			}
			case 8:
			{
				goto IL_00bd;
			}
			case 9:
			{
				goto IL_00c5;
			}
			case 10:
			{
				goto IL_00cd;
			}
			case 11:
			{
				goto IL_00e0;
			}
			case 12:
			{
				goto IL_010e;
			}
			case 13:
			{
				goto IL_00f7;
			}
		}
	}
	{
		goto IL_0116;
	}

IL_0048:
	{
		bool L_3;
		L_3 = GltfMaterial_get_UsingSpecularGlossinness_m9F1138A5E3A0D6D8A541C409ABA3B0DDF65351FA(__this, NULL);
		if (L_3)
		{
			goto IL_0057;
		}
	}
	{
		G_B5_0 = _stringLiteral7C1C42B79B63F7D97E227521BF5DD2528F7BA79C;
		goto IL_005c;
	}

IL_0057:
	{
		G_B5_0 = _stringLiteralA5ECB8D2CC8AB6F909B8859B9B2B2BA4C5546058;
	}

IL_005c:
	{
		V_2 = G_B5_0;
		goto IL_011a;
	}

IL_0062:
	{
		bool L_4;
		L_4 = GltfMaterial_get_UsingSpecularGlossinness_m9F1138A5E3A0D6D8A541C409ABA3B0DDF65351FA(__this, NULL);
		if (L_4)
		{
			goto IL_0071;
		}
	}
	{
		G_B9_0 = _stringLiteral830A3A84EA1F672CA67D55E71627DAF91D9CF22F;
		goto IL_0076;
	}

IL_0071:
	{
		G_B9_0 = _stringLiteral301F2F7310679116695B1862DCE01E6B0829BBB0;
	}

IL_0076:
	{
		V_2 = G_B9_0;
		goto IL_011a;
	}

IL_007c:
	{
		bool L_5;
		L_5 = GltfMaterial_get_UsingSpecularGlossinness_m9F1138A5E3A0D6D8A541C409ABA3B0DDF65351FA(__this, NULL);
		if (L_5)
		{
			goto IL_0087;
		}
	}
	{
		G_B13_0 = ((String_t*)(NULL));
		goto IL_008c;
	}

IL_0087:
	{
		G_B13_0 = _stringLiteral9266B539C8D4E57B50CE6970115C5C2A22DB7689;
	}

IL_008c:
	{
		V_2 = G_B13_0;
		goto IL_011a;
	}

IL_0092:
	{
		bool L_6;
		L_6 = GltfMaterial_get_UsingSpecularGlossinness_m9F1138A5E3A0D6D8A541C409ABA3B0DDF65351FA(__this, NULL);
		if (L_6)
		{
			goto IL_009d;
		}
	}
	{
		G_B17_0 = ((String_t*)(NULL));
		goto IL_00a2;
	}

IL_009d:
	{
		G_B17_0 = _stringLiteral12628C55CF81EF3A2202756755D08C33AB0AE23C;
	}

IL_00a2:
	{
		V_2 = G_B17_0;
		goto IL_011a;
	}

IL_00a5:
	{
		V_2 = _stringLiteral9E9B20202EAC4F6DA8FF0D1A5D19EADCBB966E2B;
		goto IL_011a;
	}

IL_00ad:
	{
		V_2 = _stringLiteral4CF83EF9C835E8180C7A24EE907EAF9AAF67CADD;
		goto IL_011a;
	}

IL_00b5:
	{
		V_2 = _stringLiteral592876A9C3FDFBE734EE9DDA787C3C0B6D770399;
		goto IL_011a;
	}

IL_00bd:
	{
		V_2 = _stringLiteral14DD79B52701F2CACB5918EAD3F341D3538C7302;
		goto IL_011a;
	}

IL_00c5:
	{
		V_2 = _stringLiteral676FBBA565BC1705BE403D032D89194C390815C0;
		goto IL_011a;
	}

IL_00cd:
	{
		bool L_7;
		L_7 = GltfMaterial_get_UsingSpecularGlossinness_m9F1138A5E3A0D6D8A541C409ABA3B0DDF65351FA(__this, NULL);
		if (L_7)
		{
			goto IL_00dc;
		}
	}
	{
		G_B26_0 = _stringLiteralF62F6C81160ADB86B2ADED876DF7594BEA5D2C91;
		goto IL_00dd;
	}

IL_00dc:
	{
		G_B26_0 = ((String_t*)(NULL));
	}

IL_00dd:
	{
		V_2 = G_B26_0;
		goto IL_011a;
	}

IL_00e0:
	{
		bool L_8;
		L_8 = GltfMaterial_get_UsingSpecularGlossinness_m9F1138A5E3A0D6D8A541C409ABA3B0DDF65351FA(__this, NULL);
		if (L_8)
		{
			goto IL_00ef;
		}
	}
	{
		G_B30_0 = _stringLiteral4CB5E573D9E0B589AC50ACBB9ADDF1B97A5F652B;
		goto IL_00f4;
	}

IL_00ef:
	{
		G_B30_0 = _stringLiteralABE878BC3E7E84001C66585B9CF8804E74045F85;
	}

IL_00f4:
	{
		V_2 = G_B30_0;
		goto IL_011a;
	}

IL_00f7:
	{
		bool L_9;
		L_9 = GltfMaterial_get_UsingSpecularGlossinness_m9F1138A5E3A0D6D8A541C409ABA3B0DDF65351FA(__this, NULL);
		if (L_9)
		{
			goto IL_0106;
		}
	}
	{
		G_B34_0 = _stringLiteralFBFE32A9426D9516E037EC0BF89B030D1435C18D;
		goto IL_010b;
	}

IL_0106:
	{
		G_B34_0 = _stringLiteral12628C55CF81EF3A2202756755D08C33AB0AE23C;
	}

IL_010b:
	{
		V_2 = G_B34_0;
		goto IL_011a;
	}

IL_010e:
	{
		V_2 = _stringLiteralFBFE32A9426D9516E037EC0BF89B030D1435C18D;
		goto IL_011a;
	}

IL_0116:
	{
		V_2 = (String_t*)NULL;
		goto IL_011a;
	}

IL_011a:
	{
		String_t* L_10 = V_2;
		return L_10;
	}
}
// System.Single TriLibCore.Gltf.GltfMaterial::GetGenericFloatValueMultiplied(TriLibCore.General.GenericMaterialProperty,TriLibCore.MaterialMapperContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GltfMaterial_GetGenericFloatValueMultiplied_m490DC0E25E607D0F90F71A347C36BF8D41C04A46 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, int32_t ___genericMaterialProperty0, MaterialMapperContext_t2BDF775C916A28A411960E3787DC933D2E9F0042* ___materialMapperContext1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float G_B5_0 = 0.0f;
	{
		int32_t L_0 = ___genericMaterialProperty0;
		float L_1;
		L_1 = GltfMaterial_GetGenericFloatValue_mDC340F746AEFB667ECFECB861203D55B77C6730D(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___genericMaterialProperty0;
		V_2 = L_2;
		int32_t L_3 = V_2;
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)11))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0029;
	}

IL_0014:
	{
		bool L_5;
		L_5 = GltfMaterial_get_UsingSpecularGlossinness_m9F1138A5E3A0D6D8A541C409ABA3B0DDF65351FA(__this, NULL);
		if (L_5)
		{
			goto IL_0025;
		}
	}
	{
		float L_6 = V_0;
		G_B5_0 = ((float)il2cpp_codegen_subtract((1.0f), L_6));
		goto IL_0026;
	}

IL_0025:
	{
		float L_7 = V_0;
		G_B5_0 = L_7;
	}

IL_0026:
	{
		V_3 = G_B5_0;
		goto IL_002d;
	}

IL_0029:
	{
		float L_8 = V_0;
		V_3 = L_8;
		goto IL_002d;
	}

IL_002d:
	{
		float L_9 = V_3;
		return L_9;
	}
}
// UnityEngine.Color TriLibCore.Gltf.GltfMaterial::GetGenericColorValueMultiplied(TriLibCore.General.GenericMaterialProperty,TriLibCore.MaterialMapperContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GltfMaterial_GetGenericColorValueMultiplied_m3DD471F67DBE99525C8DF8FFC2D578C5AF34E246 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, int32_t ___genericMaterialProperty0, MaterialMapperContext_t2BDF775C916A28A411960E3787DC933D2E9F0042* ___materialMapperContext1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22815003D6700C390333FD30542C38C6D5F8E2CD);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___genericMaterialProperty0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = GltfMaterial_GetGenericColorValue_mF63E308EEE0E1ED25B820336BEBB5247F5C98ADC(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___genericMaterialProperty0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)8))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_4 = __this->____properties_5;
		NullCheck(L_4);
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::ContainsKey(TKey) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_4, _stringLiteral22815003D6700C390333FD30542C38C6D5F8E2CD);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		float L_7;
		L_7 = GltfMaterial_GetFloatValue_mD9DEE32A649C0120D9A69173AD4F61CA934415D1(__this, _stringLiteral22815003D6700C390333FD30542C38C6D5F8E2CD, NULL);
		V_3 = L_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		float L_9 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_8, L_9, NULL);
		V_0 = L_10;
	}

IL_003c:
	{
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = V_0;
		V_4 = L_11;
		goto IL_0042;
	}

IL_0042:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = V_4;
		return L_12;
	}
}
// System.Single TriLibCore.Gltf.GltfMaterial::GetGenericFloatValue(TriLibCore.General.GenericMaterialProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GltfMaterial_GetGenericFloatValue_mDC340F746AEFB667ECFECB861203D55B77C6730D (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, int32_t ___materialProperty0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	bool V_1 = false;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float G_B12_0 = 0.0f;
	{
		int32_t L_0 = ___materialProperty0;
		String_t* L_1;
		L_1 = GltfMaterial_GetGenericPropertyName_m0BBF0688D772D322BB95BE5408E31D1C82CF5A42(__this, L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = GltfMaterial_HasProperty_mA6DD5EED3FAD24F809151168B5732F4D74E73FCA(__this, L_2, NULL);
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
		L_6 = GltfMaterial_GetFloatValue_mD9DEE32A649C0120D9A69173AD4F61CA934415D1(__this, L_5, NULL);
		V_2 = L_6;
		goto IL_0064;
	}

IL_001f:
	{
		int32_t L_7 = ___materialProperty0;
		V_4 = L_7;
		int32_t L_8 = V_4;
		V_3 = L_8;
		int32_t L_9 = V_3;
		if ((((int32_t)L_9) == ((int32_t)5)))
		{
			goto IL_003d;
		}
	}
	{
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_10 = V_3;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, ((int32_t)10)))) > ((uint32_t)1))))
		{
			goto IL_0045;
		}
	}
	{
		goto IL_0034;
	}

IL_0034:
	{
		int32_t L_11 = V_3;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, ((int32_t)14)))) > ((uint32_t)1))))
		{
			goto IL_003d;
		}
	}
	{
		goto IL_005c;
	}

IL_003d:
	{
		V_2 = (1.0f);
		goto IL_0064;
	}

IL_0045:
	{
		bool L_12;
		L_12 = GltfMaterial_get_UsingSpecularGlossinness_m9F1138A5E3A0D6D8A541C409ABA3B0DDF65351FA(__this, NULL);
		if (L_12)
		{
			goto IL_0054;
		}
	}
	{
		G_B12_0 = (0.0f);
		goto IL_0059;
	}

IL_0054:
	{
		G_B12_0 = (1.0f);
	}

IL_0059:
	{
		V_2 = G_B12_0;
		goto IL_0064;
	}

IL_005c:
	{
		V_2 = (0.0f);
		goto IL_0064;
	}

IL_0064:
	{
		float L_13 = V_2;
		return L_13;
	}
}
// System.Int32 TriLibCore.Gltf.GltfMaterial::GetGenericIntValue(TriLibCore.General.GenericMaterialProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GltfMaterial_GetGenericIntValue_m531168ACD81104FFBA5F6864ED395F9FBF4897CD (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, int32_t ___materialProperty0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___materialProperty0;
		String_t* L_1;
		L_1 = GltfMaterial_GetGenericPropertyName_m0BBF0688D772D322BB95BE5408E31D1C82CF5A42(__this, L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		int32_t L_3;
		L_3 = GltfMaterial_GetIntValue_m59F885791C8F5F989A3C2CB040C05FDEDE0CA25D(__this, L_2, NULL);
		V_1 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.String TriLibCore.Gltf.GltfMaterial::GetGenericStringValue(TriLibCore.General.GenericMaterialProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GltfMaterial_GetGenericStringValue_m8794B38FE36B25A93C4AEBA1449FEAA2BE38A8F9 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, int32_t ___materialProperty0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		int32_t L_0 = ___materialProperty0;
		String_t* L_1;
		L_1 = GltfMaterial_GetGenericPropertyName_m0BBF0688D772D322BB95BE5408E31D1C82CF5A42(__this, L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		String_t* L_3;
		L_3 = GltfMaterial_GetStringValue_mC2A8B494577A8F7483A881FEA93172C143F045D4(__this, L_2, NULL);
		V_1 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		String_t* L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Vector3 TriLibCore.Gltf.GltfMaterial::GetGenericVector3Value(TriLibCore.General.GenericMaterialProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GltfMaterial_GetGenericVector3Value_m89B8032E687444BC607766E46E50A044CA617070 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, int32_t ___materialProperty0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___materialProperty0;
		String_t* L_1;
		L_1 = GltfMaterial_GetGenericPropertyName_m0BBF0688D772D322BB95BE5408E31D1C82CF5A42(__this, L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = GltfMaterial_GetVector3Value_m40BA2D4D2B3EC41A4FEDE4812C185BD4B9881180(__this, L_2, NULL);
		V_1 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Vector4 TriLibCore.Gltf.GltfMaterial::GetGenericVector4Value(TriLibCore.General.GenericMaterialProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GltfMaterial_GetGenericVector4Value_m7FF40A7E182A45F47C3469607450F4FBFD8E0730 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, int32_t ___materialProperty0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___materialProperty0;
		String_t* L_1;
		L_1 = GltfMaterial_GetGenericPropertyName_m0BBF0688D772D322BB95BE5408E31D1C82CF5A42(__this, L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = GltfMaterial_GetVector4Value_m839CFD054D36CBE6349E8E65905182B21A079595(__this, L_2, NULL);
		V_1 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Color TriLibCore.Gltf.GltfMaterial::GetGenericColorValue(TriLibCore.General.GenericMaterialProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GltfMaterial_GetGenericColorValue_mF63E308EEE0E1ED25B820336BEBB5247F5C98ADC (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, int32_t ___materialProperty0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	bool V_1 = false;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		int32_t L_0 = ___materialProperty0;
		String_t* L_1;
		L_1 = GltfMaterial_GetGenericPropertyName_m0BBF0688D772D322BB95BE5408E31D1C82CF5A42(__this, L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = GltfMaterial_HasProperty_mA6DD5EED3FAD24F809151168B5732F4D74E73FCA(__this, L_2, NULL);
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
		L_6 = GltfMaterial_GetColorValue_m6EEA5D4DA35D9D9B3C167988EECCA101A549FE3E(__this, L_5, NULL);
		V_2 = L_6;
		goto IL_0032;
	}

IL_001f:
	{
		int32_t L_7 = ___materialProperty0;
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
// TriLibCore.Interfaces.ITexture TriLibCore.Gltf.GltfMaterial::GetGenericTextureValue(TriLibCore.General.GenericMaterialProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfMaterial_GetGenericTextureValue_mE7F2732D888864E04C4C76040AAC14E1EF63956F (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, int32_t ___materialProperty0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = ___materialProperty0;
		String_t* L_1;
		L_1 = GltfMaterial_GetGenericPropertyName_m0BBF0688D772D322BB95BE5408E31D1C82CF5A42(__this, L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		RuntimeObject* L_3;
		L_3 = GltfMaterial_GetTextureValue_mB5300F8670D418FA8E9C13837E1F8453B010AC89(__this, L_2, NULL);
		V_1 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Boolean TriLibCore.Gltf.GltfMaterial::get_DoubleSided()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfMaterial_get_DoubleSided_m83E195DAAF3BA49A6FC88F4CD683F49D76AD758C (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CDoubleSidedU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfMaterial::set_DoubleSided(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfMaterial_set_DoubleSided_m9B850B4962CF6689D275FEB0F83CEE5AA1E8BBBD (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CDoubleSidedU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean TriLibCore.Gltf.GltfMaterial::get_MixAlbedoColorWithTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfMaterial_get_MixAlbedoColorWithTexture_m6D003DAE0DD44343534F8843264ADAB4A652171F (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Single TriLibCore.Gltf.GltfMaterial::GetFloatValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GltfMaterial_GetFloatValue_mD9DEE32A649C0120D9A69173AD4F61CA934415D1 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, String_t* ___propertyName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	float V_2 = 0.0f;
	bool V_3 = false;
	float V_4 = 0.0f;
	int32_t G_B4_0 = 0;
	{
		RuntimeObject* L_0 = __this->____properties_5;
		String_t* L_1 = ___propertyName0;
		bool L_2;
		L_2 = DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9(L_0, L_1, (&V_0), DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		V_2 = ((*(float*)((float*)(float*)UnBox(L_5, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		G_B4_0 = 1;
		goto IL_0027;
	}

IL_0026:
	{
		G_B4_0 = 0;
	}

IL_0027:
	{
		V_3 = (bool)G_B4_0;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		float L_7 = V_2;
		V_4 = L_7;
		goto IL_003b;
	}

IL_0031:
	{
	}

IL_0032:
	{
		V_4 = (0.0f);
		goto IL_003b;
	}

IL_003b:
	{
		float L_8 = V_4;
		return L_8;
	}
}
// System.Int32 TriLibCore.Gltf.GltfMaterial::GetIntValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GltfMaterial_GetIntValue_m59F885791C8F5F989A3C2CB040C05FDEDE0CA25D (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, String_t* ___propertyName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t G_B4_0 = 0;
	{
		RuntimeObject* L_0 = __this->____properties_5;
		String_t* L_1 = ___propertyName0;
		bool L_2;
		L_2 = DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9(L_0, L_1, (&V_0), DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_5, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		G_B4_0 = 1;
		goto IL_0027;
	}

IL_0026:
	{
		G_B4_0 = 0;
	}

IL_0027:
	{
		V_3 = (bool)G_B4_0;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_7 = V_2;
		V_4 = L_7;
		goto IL_0037;
	}

IL_0031:
	{
	}

IL_0032:
	{
		V_4 = 0;
		goto IL_0037;
	}

IL_0037:
	{
		int32_t L_8 = V_4;
		return L_8;
	}
}
// System.String TriLibCore.Gltf.GltfMaterial::GetStringValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GltfMaterial_GetStringValue_mC2A8B494577A8F7483A881FEA93172C143F045D4 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, String_t* ___propertyName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	String_t* V_4 = NULL;
	{
		RuntimeObject* L_0 = __this->____properties_5;
		String_t* L_1 = ___propertyName0;
		bool L_2;
		L_2 = DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9(L_0, L_1, (&V_0), DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		V_2 = ((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var));
		String_t* L_5 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(String_t*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_7 = V_2;
		V_4 = L_7;
		goto IL_002f;
	}

IL_0029:
	{
	}

IL_002a:
	{
		V_4 = (String_t*)NULL;
		goto IL_002f;
	}

IL_002f:
	{
		String_t* L_8 = V_4;
		return L_8;
	}
}
// UnityEngine.Vector3 TriLibCore.Gltf.GltfMaterial::GetVector3Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GltfMaterial_GetVector3Value_m40BA2D4D2B3EC41A4FEDE4812C185BD4B9881180 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, String_t* ___propertyName0, const RuntimeMethod* method) 
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
	bool V_3 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B4_0 = 0;
	{
		RuntimeObject* L_0 = __this->____properties_5;
		String_t* L_1 = ___propertyName0;
		bool L_2;
		L_2 = DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9(L_0, L_1, (&V_0), DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		V_2 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_5, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		G_B4_0 = 1;
		goto IL_0027;
	}

IL_0026:
	{
		G_B4_0 = 0;
	}

IL_0027:
	{
		V_3 = (bool)G_B4_0;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_2;
		V_4 = L_7;
		goto IL_003b;
	}

IL_0031:
	{
	}

IL_0032:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_4 = L_8;
		goto IL_003b;
	}

IL_003b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_4;
		return L_9;
	}
}
// UnityEngine.Vector4 TriLibCore.Gltf.GltfMaterial::GetVector4Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GltfMaterial_GetVector4Value_m839CFD054D36CBE6349E8E65905182B21A079595 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, String_t* ___propertyName0, const RuntimeMethod* method) 
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
	bool V_3 = false;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B4_0 = 0;
	{
		RuntimeObject* L_0 = __this->____properties_5;
		String_t* L_1 = ___propertyName0;
		bool L_2;
		L_2 = DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9(L_0, L_1, (&V_0), DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_4, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var)))
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		V_2 = ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_5, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))));
		G_B4_0 = 1;
		goto IL_0027;
	}

IL_0026:
	{
		G_B4_0 = 0;
	}

IL_0027:
	{
		V_3 = (bool)G_B4_0;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_2;
		V_4 = L_7;
		goto IL_003b;
	}

IL_0031:
	{
	}

IL_0032:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		V_4 = L_8;
		goto IL_003b;
	}

IL_003b:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_4;
		return L_9;
	}
}
// UnityEngine.Color TriLibCore.Gltf.GltfMaterial::GetColorValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GltfMaterial_GetColorValue_m6EEA5D4DA35D9D9B3C167988EECCA101A549FE3E (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, String_t* ___propertyName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B14_0 = 0;
	{
		RuntimeObject* L_0 = __this->____properties_5;
		String_t* L_1 = ___propertyName0;
		bool L_2;
		L_2 = DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9(L_0, L_1, (&V_0), DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_008f;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_4, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var)))
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		V_2 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_5, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var))));
		G_B4_0 = 1;
		goto IL_0027;
	}

IL_0026:
	{
		G_B4_0 = 0;
	}

IL_0027:
	{
		V_5 = (bool)G_B4_0;
		bool L_6 = V_5;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_2;
		V_6 = L_7;
		goto IL_0098;
	}

IL_0033:
	{
		RuntimeObject* L_8 = V_0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_8, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))
		{
			goto IL_0045;
		}
	}
	{
		RuntimeObject* L_9 = V_0;
		V_3 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_9, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		G_B9_0 = 1;
		goto IL_0046;
	}

IL_0045:
	{
		G_B9_0 = 0;
	}

IL_0046:
	{
		V_7 = (bool)G_B9_0;
		bool L_10 = V_7;
		if (!L_10)
		{
			goto IL_0068;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_3;
		float L_12 = L_11.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_3;
		float L_14 = L_13.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_3;
		float L_16 = L_15.___z_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		memset((&L_17), 0, sizeof(L_17));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_17), L_12, L_14, L_16, /*hidden argument*/NULL);
		V_6 = L_17;
		goto IL_0098;
	}

IL_0068:
	{
		RuntimeObject* L_18 = V_0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_18, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var)))
		{
			goto IL_007b;
		}
	}
	{
		RuntimeObject* L_19 = V_0;
		V_4 = ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_19, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))));
		G_B14_0 = 1;
		goto IL_007c;
	}

IL_007b:
	{
		G_B14_0 = 0;
	}

IL_007c:
	{
		V_8 = (bool)G_B14_0;
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_008e;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_21 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Color_op_Implicit_mA8CF4745D766F4F610E1BE0A1ED2F4E5FE5D734C_inline(L_21, NULL);
		V_6 = L_22;
		goto IL_0098;
	}

IL_008e:
	{
	}

IL_008f:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		L_23 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		V_6 = L_23;
		goto IL_0098;
	}

IL_0098:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = V_6;
		return L_24;
	}
}
// TriLibCore.Interfaces.ITexture TriLibCore.Gltf.GltfMaterial::GetTextureValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfMaterial_GetTextureValue_mB5300F8670D418FA8E9C13837E1F8453B010AC89 (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, String_t* ___propertyName0, const RuntimeMethod* method) 
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
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	{
		RuntimeObject* L_0 = __this->____properties_5;
		String_t* L_1 = ___propertyName0;
		bool L_2;
		L_2 = DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9(L_0, L_1, (&V_0), DictionaryExtensions_TryGetValueSafe_TisString_t_TisRuntimeObject_m3A141C0F88D55709D928005262A7173CBC7CE8E9_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var));
		RuntimeObject* L_5 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_7 = V_2;
		V_4 = L_7;
		goto IL_002f;
	}

IL_0029:
	{
	}

IL_002a:
	{
		V_4 = (RuntimeObject*)NULL;
		goto IL_002f;
	}

IL_002f:
	{
		RuntimeObject* L_8 = V_4;
		return L_8;
	}
}
// System.Boolean TriLibCore.Gltf.GltfMaterial::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfMaterial_HasProperty_mA6DD5EED3FAD24F809151168B5732F4D74E73FCA (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, String_t* ___propertyName0, const RuntimeMethod* method) 
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
		String_t* L_0 = ___propertyName0;
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
		RuntimeObject* L_2 = __this->____properties_5;
		String_t* L_3 = ___propertyName0;
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
// System.Boolean TriLibCore.Gltf.GltfMaterial::PostProcessTexture(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfMaterial_PostProcessTexture_mCE826DA015FB8ECC975B385223C94044652D112E (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24144B9DD985637B8056D917AA1DAA4A50A0AEB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E46BAF2CA7F56661FC42E1E4E05810EB0EDAF80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3727CA5934FD71C785CF1E088F7214B4E39F5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCB57C8865963DDF42B31415149ED79F57DDA6CA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_3 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_4 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_5 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_9;
	memset((&V_9), 0, sizeof(V_9));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	String_t* V_12 = NULL;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_13;
	memset((&V_13), 0, sizeof(V_13));
	String_t* V_14 = NULL;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_15;
	memset((&V_15), 0, sizeof(V_15));
	bool V_16 = false;
	bool V_17 = false;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_18;
	memset((&V_18), 0, sizeof(V_18));
	bool V_19 = false;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	bool V_22 = false;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_0 = ___textureLoadingContext0;
		NullCheck(L_0);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_1;
		L_1 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_0, NULL);
		NullCheck(L_1);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_2 = L_1->___Options_34;
		NullCheck(L_2);
		bool L_3 = L_2->___ConvertMaterialTextures_100;
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0235;
	}

IL_0020:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_5 = ___textureLoadingContext0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___TextureType_0;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)3))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0187;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_8 = ___textureLoadingContext0;
		NullCheck(L_8);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_9;
		L_9 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_8, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_10 = ___textureLoadingContext0;
		NullCheck(L_10);
		MaterialMapperContext_t2BDF775C916A28A411960E3787DC933D2E9F0042* L_11 = L_10->___MaterialMapperContext_2;
		NullCheck(L_11);
		RuntimeObject* L_12 = L_11->___Material_0;
		NullCheck(L_9);
		bool L_13;
		L_13 = AssetLoaderContext_TryGetMaterialTexture_m1DE989D5743FF66C8E7727A4F97FD42547BC512B(L_9, L_12, 8, (&V_3), NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_14 = ___textureLoadingContext0;
		NullCheck(L_14);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_15;
		L_15 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_14, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_16 = ___textureLoadingContext0;
		NullCheck(L_16);
		MaterialMapperContext_t2BDF775C916A28A411960E3787DC933D2E9F0042* L_17 = L_16->___MaterialMapperContext_2;
		NullCheck(L_17);
		RuntimeObject* L_18 = L_17->___Material_0;
		NullCheck(L_15);
		bool L_19;
		L_19 = AssetLoaderContext_TryGetMaterialTexture_m1DE989D5743FF66C8E7727A4F97FD42547BC512B(L_15, L_18, 7, (&V_4), NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_20 = ___textureLoadingContext0;
		NullCheck(L_20);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_21;
		L_21 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_20, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_22 = ___textureLoadingContext0;
		NullCheck(L_22);
		MaterialMapperContext_t2BDF775C916A28A411960E3787DC933D2E9F0042* L_23 = L_22->___MaterialMapperContext_2;
		NullCheck(L_23);
		RuntimeObject* L_24 = L_23->___Material_0;
		NullCheck(L_21);
		bool L_25;
		L_25 = AssetLoaderContext_TryGetMaterialTexture_m1DE989D5743FF66C8E7727A4F97FD42547BC512B(L_21, L_24, 1, (&V_5), NULL);
		bool L_26;
		L_26 = GltfMaterial_get_UsingSpecularGlossinness_m9F1138A5E3A0D6D8A541C409ABA3B0DDF65351FA(__this, NULL);
		V_16 = L_26;
		bool L_27 = V_16;
		if (!L_27)
		{
			goto IL_0098;
		}
	}
	{
		V_6 = (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL;
		V_7 = 0;
		V_8 = 3;
		goto IL_00d9;
	}

IL_0098:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_28 = ___textureLoadingContext0;
		NullCheck(L_28);
		MaterialMapperContext_t2BDF775C916A28A411960E3787DC933D2E9F0042* L_29 = L_28->___MaterialMapperContext_2;
		NullCheck(L_29);
		MaterialMapper_t5FE12658D8C551EE66D3441CFBDEDFAE5B85E692* L_30 = L_29->___MaterialMapper_5;
		NullCheck(L_30);
		bool L_31;
		L_31 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean TriLibCore.Mappers.MaterialMapper::get_ExtractMetallicAndSmoothness() */, L_30);
		V_17 = L_31;
		bool L_32 = V_17;
		if (!L_32)
		{
			goto IL_00cd;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_33 = ___textureLoadingContext0;
		TextureUtils_ExtractChannelData_m0BBF62657D76CC729095FF92E022B85DD742B936(2, L_33, _stringLiteral3E46BAF2CA7F56661FC42E1E4E05810EB0EDAF80, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_34 = ___textureLoadingContext0;
		NullCheck(L_34);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_35;
		L_35 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_34, NULL);
		V_6 = L_35;
		V_7 = 0;
		V_8 = 0;
		goto IL_00d9;
	}

IL_00cd:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_36 = V_4;
		V_6 = L_36;
		V_7 = 2;
		V_8 = 1;
	}

IL_00d9:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = GltfMaterial_GetGenericColorValueMultiplied_m3DD471F67DBE99525C8DF8FFC2D578C5AF34E246(__this, 0, (MaterialMapperContext_t2BDF775C916A28A411960E3787DC933D2E9F0042*)NULL, NULL);
		V_9 = L_37;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GltfMaterial_GetGenericColorValueMultiplied_m3DD471F67DBE99525C8DF8FFC2D578C5AF34E246(__this, 2, (MaterialMapperContext_t2BDF775C916A28A411960E3787DC933D2E9F0042*)NULL, NULL);
		V_10 = L_38;
		V_11 = (1.0f);
		String_t* L_39;
		L_39 = GltfMaterial_GetGenericPropertyName_m0BBF0688D772D322BB95BE5408E31D1C82CF5A42(__this, ((int32_t)11), NULL);
		V_12 = L_39;
		String_t* L_40 = V_12;
		bool L_41;
		L_41 = GltfMaterial_HasProperty_mA6DD5EED3FAD24F809151168B5732F4D74E73FCA(__this, L_40, NULL);
		if (L_41)
		{
			goto IL_0114;
		}
	}
	{
		il2cpp_codegen_initobj((&V_18), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_42 = V_18;
		G_B11_0 = L_42;
		goto IL_0121;
	}

IL_0114:
	{
		String_t* L_43 = V_12;
		float L_44;
		L_44 = GltfMaterial_GetFloatValue_mD9DEE32A649C0120D9A69173AD4F61CA934415D1(__this, L_43, NULL);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_45;
		memset((&L_45), 0, sizeof(L_45));
		Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_45), L_44, /*hidden argument*/Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		G_B11_0 = L_45;
	}

IL_0121:
	{
		V_13 = G_B11_0;
		String_t* L_46;
		L_46 = GltfMaterial_GetGenericPropertyName_m0BBF0688D772D322BB95BE5408E31D1C82CF5A42(__this, ((int32_t)10), NULL);
		V_14 = L_46;
		String_t* L_47 = V_14;
		bool L_48;
		L_48 = GltfMaterial_HasProperty_mA6DD5EED3FAD24F809151168B5732F4D74E73FCA(__this, L_47, NULL);
		if (L_48)
		{
			goto IL_0143;
		}
	}
	{
		il2cpp_codegen_initobj((&V_18), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_49 = V_18;
		G_B14_0 = L_49;
		goto IL_0150;
	}

IL_0143:
	{
		String_t* L_50 = V_14;
		float L_51;
		L_51 = GltfMaterial_GetFloatValue_mD9DEE32A649C0120D9A69173AD4F61CA934415D1(__this, L_50, NULL);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_52), L_51, /*hidden argument*/Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		G_B14_0 = L_52;
	}

IL_0150:
	{
		V_15 = G_B14_0;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_53 = ___textureLoadingContext0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_54 = V_5;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_55 = V_6;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_56 = V_3;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_57 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_58 = V_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59 = V_10;
		float L_60 = V_11;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_61 = V_13;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_62 = V_15;
		bool L_63;
		L_63 = GltfMaterial_get_UsingSpecularGlossinness_m9F1138A5E3A0D6D8A541C409ABA3B0DDF65351FA(__this, NULL);
		int32_t L_64 = V_7;
		int32_t L_65 = V_8;
		TextureUtils_BuildMetallicTexture_m8A9FEECB31F24524741135CCFEB387210FBE17ED(L_53, L_54, L_55, L_56, L_57, L_58, L_59, L_60, L_61, L_62, (bool)((((int32_t)L_63) == ((int32_t)0))? 1 : 0), (bool)1, L_64, L_65, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_66 = ___textureLoadingContext0;
		TextureUtils_ApplyTexture2D_m77B80263F99FDEA58D10718F3503C08051FD66F0(L_66, NULL);
		V_1 = (bool)1;
		goto IL_0235;
	}

IL_0187:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_67 = ___textureLoadingContext0;
		NullCheck(L_67);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_68;
		L_68 = TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16(L_67, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_69;
		L_69 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_68, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_19 = L_69;
		bool L_70 = V_19;
		if (!L_70)
		{
			goto IL_0231;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_71 = ___textureLoadingContext0;
		NullCheck(L_71);
		int32_t L_72 = L_71->___TextureType_0;
		V_21 = L_72;
		int32_t L_73 = V_21;
		V_20 = L_73;
		int32_t L_74 = V_20;
		if ((((int32_t)L_74) == ((int32_t)5)))
		{
			goto IL_0203;
		}
	}
	{
		goto IL_01b0;
	}

IL_01b0:
	{
		int32_t L_75 = V_20;
		if ((((int32_t)L_75) == ((int32_t)7)))
		{
			goto IL_01b7;
		}
	}
	{
		goto IL_0230;
	}

IL_01b7:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_76 = ___textureLoadingContext0;
		NullCheck(L_76);
		MaterialMapperContext_t2BDF775C916A28A411960E3787DC933D2E9F0042* L_77 = L_76->___MaterialMapperContext_2;
		NullCheck(L_77);
		MaterialMapper_t5FE12658D8C551EE66D3441CFBDEDFAE5B85E692* L_78 = L_77->___MaterialMapper_5;
		NullCheck(L_78);
		bool L_79;
		L_79 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean TriLibCore.Mappers.MaterialMapper::get_ExtractMetallicAndSmoothness() */, L_78);
		if (L_79)
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0230;
	}

IL_01cb:
	{
		bool L_80;
		L_80 = GltfMaterial_get_UsingSpecularGlossinness_m9F1138A5E3A0D6D8A541C409ABA3B0DDF65351FA(__this, NULL);
		V_22 = L_80;
		bool L_81 = V_22;
		if (!L_81)
		{
			goto IL_01e9;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_82 = ___textureLoadingContext0;
		TextureUtils_ExtractChannelData_m0BBF62657D76CC729095FF92E022B85DD742B936(3, L_82, _stringLiteral7F3727CA5934FD71C785CF1E088F7214B4E39F5E, NULL);
		goto IL_01f8;
	}

IL_01e9:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_83 = ___textureLoadingContext0;
		TextureUtils_ExtractChannelData_m0BBF62657D76CC729095FF92E022B85DD742B936(1, L_83, _stringLiteral24144B9DD985637B8056D917AA1DAA4A50A0AEB3, NULL);
	}

IL_01f8:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_84 = ___textureLoadingContext0;
		TextureUtils_ApplyTexture2D_m77B80263F99FDEA58D10718F3503C08051FD66F0(L_84, NULL);
		V_1 = (bool)1;
		goto IL_0235;
	}

IL_0203:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_85 = ___textureLoadingContext0;
		NullCheck(L_85);
		MaterialMapperContext_t2BDF775C916A28A411960E3787DC933D2E9F0042* L_86 = L_85->___MaterialMapperContext_2;
		NullCheck(L_86);
		MaterialMapper_t5FE12658D8C551EE66D3441CFBDEDFAE5B85E692* L_87 = L_86->___MaterialMapper_5;
		NullCheck(L_87);
		bool L_88;
		L_88 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean TriLibCore.Mappers.MaterialMapper::get_ExtractMetallicAndSmoothness() */, L_87);
		if (L_88)
		{
			goto IL_0217;
		}
	}
	{
		goto IL_0230;
	}

IL_0217:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_89 = ___textureLoadingContext0;
		TextureUtils_ExtractChannelData_m0BBF62657D76CC729095FF92E022B85DD742B936(0, L_89, _stringLiteralDCB57C8865963DDF42B31415149ED79F57DDA6CA, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_90 = ___textureLoadingContext0;
		TextureUtils_ApplyTexture2D_m77B80263F99FDEA58D10718F3503C08051FD66F0(L_90, NULL);
		V_1 = (bool)1;
		goto IL_0235;
	}

IL_0230:
	{
	}

IL_0231:
	{
		V_1 = (bool)0;
		goto IL_0235;
	}

IL_0235:
	{
		bool L_91 = V_1;
		return L_91;
	}
}
// System.Void TriLibCore.Gltf.GltfMaterial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfMaterial__ctor_mD17720BA63228003361DCEFB96E42A17797F22AF (GltfMaterial_t60E9026E19E8F7720B7F4CE46DC5B41FB7BC590F* __this, const RuntimeMethod* method) 
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
		__this->____properties_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____properties_5), (void*)L_0);
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
// System.String TriLibCore.Gltf.GltfModel::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GltfModel_get_Name_m44A2759A9531585217EB070E7BC5B2E12B03B375 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfModel::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfModel_set_Name_m9759886D1B9446C815E5E83EEA5E826711006AB6 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean TriLibCore.Gltf.GltfModel::get_Used()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfModel_get_Used_m5624C21E490B0BC1845A452E476B10AEFDE6EEFD (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CUsedU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfModel::set_Used(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfModel_set_Used_m558B426D62BC3117062AECB2FC27BBE23C5182F3 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CUsedU3Ek__BackingField_1 = L_0;
		return;
	}
}
// UnityEngine.Vector3 TriLibCore.Gltf.GltfModel::get_Pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GltfModel_get_Pivot_mAC4D4B681E1997CBBC04B59D7C8B23C5FB8999F6 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CPivotU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfModel::set_Pivot(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfModel_set_Pivot_m1B0D589CCA503227A6A1EB0D22C03FFD203C8055 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CPivotU3Ek__BackingField_2 = L_0;
		return;
	}
}
// UnityEngine.Vector3 TriLibCore.Gltf.GltfModel::get_LocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GltfModel_get_LocalPosition_m0226FF0DA5FA36427DD272454DA10365DD64ED96 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CLocalPositionU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfModel::set_LocalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfModel_set_LocalPosition_m77A4A4F9C8AEED2810E24A0662814AF58EECF1F9 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CLocalPositionU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Quaternion TriLibCore.Gltf.GltfModel::get_LocalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GltfModel_get_LocalRotation_m9E05B0215974A1CA3C784E15769C54D9FEFC45D1 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CLocalRotationU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfModel::set_LocalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfModel_set_LocalRotation_m7563C98EA8BC6A2CC8CB3F5506E52C7D648A6CAD (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		__this->___U3CLocalRotationU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.Vector3 TriLibCore.Gltf.GltfModel::get_LocalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GltfModel_get_LocalScale_m5AD4BBDA83740FA1C19D5B092401EAAABFDD663D (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CLocalScaleU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfModel::set_LocalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfModel_set_LocalScale_m3B7956B3910519C3DC2E017D27D560AE29615BA0 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CLocalScaleU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean TriLibCore.Gltf.GltfModel::get_Visibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfModel_get_Visibility_m08B91272D8113F4D5CD73467DAB16C515433A0F6 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CVisibilityU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfModel::set_Visibility(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfModel_set_Visibility_mB104FE40D13BF90FF6A1E2E91C79DE230972C684 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CVisibilityU3Ek__BackingField_6 = L_0;
		return;
	}
}
// TriLibCore.Interfaces.IModel TriLibCore.Gltf.GltfModel::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfModel_get_Parent_mF5F72F59E99F973AF93FFF62CFB03213E64120C9 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CParentU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfModel::set_Parent(TriLibCore.Interfaces.IModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfModel_set_Parent_m9085752628B0DBB1ACABCF53BBAF3A3678A3AD28 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CParentU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParentU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Gltf.GltfModel::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfModel_get_Children_m655F8116216113238EE8F72EEA782D61243B459B (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CChildrenU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfModel::set_Children(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfModel_set_Children_m1AECD8080C5A22BF51E87737F20DDD7085E11228 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CChildrenU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CChildrenU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Boolean TriLibCore.Gltf.GltfModel::get_IsBone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfModel_get_IsBone_m920F0CAB5BC52D1CAEFE1DE0BB63CBB23831AF2C (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsBoneU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfModel::set_IsBone(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfModel_set_IsBone_mA0DB47DE0DE5F23DED67A9F40A0517FB808CC0EF (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIsBoneU3Ek__BackingField_9 = L_0;
		return;
	}
}
// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Gltf.GltfModel::get_GeometryGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfModel_get_GeometryGroup_m19B15675E2C846CCD99B0F28CC9FB19EC35EBE58 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CGeometryGroupU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfModel::set_GeometryGroup(TriLibCore.Interfaces.IGeometryGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfModel_set_GeometryGroup_mF3EF4EC9BA894B672A08D886EE970BF8CF8B475D (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CGeometryGroupU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGeometryGroupU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Gltf.GltfModel::get_Bones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfModel_get_Bones_mC4CFEFACEF69E8B609D450BF7504C8AB59FDAF3F (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CBonesU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfModel::set_Bones(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfModel_set_Bones_mF41902CAF9FC7E4D8BFE9712C137EB9557314F40 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CBonesU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBonesU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
// UnityEngine.Matrix4x4[] TriLibCore.Gltf.GltfModel::get_BindPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* GltfModel_get_BindPoses_m5D71ACDFC704EDAA0AB5B1D65608F887AF657C88 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = __this->___U3CBindPosesU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfModel::set_BindPoses(UnityEngine.Matrix4x4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfModel_set_BindPoses_m0E108ECF228CCF68CC24212AD91800C292D92586 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___value0, const RuntimeMethod* method) 
{
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = ___value0;
		__this->___U3CBindPosesU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBindPosesU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Gltf.GltfModel::get_MaterialIndices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfModel_get_MaterialIndices_m8A98A3AAE8799B126E1DD6C4B01970FEA974B73E (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMaterialIndicesU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfModel::set_MaterialIndices(System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfModel_set_MaterialIndices_m440B5521AC5FCBFB425C73381157D0D058D1CC2C (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CMaterialIndicesU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMaterialIndicesU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> TriLibCore.Gltf.GltfModel::get_UserProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* GltfModel_get_UserProperties_m3952CB551AA6EBFE1B3ED2E8EF211EBD78297679 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___U3CUserPropertiesU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfModel::set_UserProperties(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfModel_set_UserProperties_m6DC89D3F1CF57EAFEAE61348655C083E31EFD02C (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___value0;
		__this->___U3CUserPropertiesU3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserPropertiesU3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
// System.Boolean TriLibCore.Gltf.GltfModel::get_HasCustomPivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfModel_get_HasCustomPivot_m5D9DE16BA7432F4E97D559061F7F8E96BE99D523 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CHasCustomPivotU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfModel::set_HasCustomPivot(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfModel_set_HasCustomPivot_mB54D31FD1713B8CCF5ACCBC7FDC0B2323D39688C (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CHasCustomPivotU3Ek__BackingField_15 = L_0;
		return;
	}
}
// UnityEngine.Matrix4x4 TriLibCore.Gltf.GltfModel::get_OriginalGlobalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GltfModel_get_OriginalGlobalMatrix_mCEF2C14403D3CB6AE9681A40D18CC123BF958508 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = __this->___U3COriginalGlobalMatrixU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfModel::set_OriginalGlobalMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfModel_set_OriginalGlobalMatrix_m805C904D252A78E33B0EE6607423213F2CDE81FB (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___value0;
		__this->___U3COriginalGlobalMatrixU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.String TriLibCore.Gltf.GltfModel::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GltfModel_ToString_mAB566101224F8FBEEA984A42DF19B3083233FD04 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = GltfModel_get_Name_m44A2759A9531585217EB070E7BC5B2E12B03B375_inline(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Matrix4x4 TriLibCore.Gltf.GltfModel::GetLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GltfModel_GetLocalMatrix_mABE9D3C3492A5046647BC2DFA23E21F83D97A2F5 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = GltfModel_get_LocalPosition_m0226FF0DA5FA36427DD272454DA10365DD64ED96_inline(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = GltfModel_get_LocalRotation_m9E05B0215974A1CA3C784E15769C54D9FEFC45D1_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = GltfModel_get_LocalScale_m5AD4BBDA83740FA1C19D5B092401EAAABFDD663D_inline(__this, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_001b;
	}

IL_001b:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Matrix4x4 TriLibCore.Gltf.GltfModel::GetGlobalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GltfModel_GetGlobalMatrix_mCCA7530F45F4912B2D9D55209EB7EC13FAE0A09E (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* V_1 = NULL;
	bool V_2 = false;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0;
		L_0 = VirtualFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(38 /* UnityEngine.Matrix4x4 TriLibCore.Gltf.GltfModel::GetLocalMatrix() */, __this);
		V_0 = L_0;
		RuntimeObject* L_1;
		L_1 = GltfModel_get_Parent_mF5F72F59E99F973AF93FFF62CFB03213E64120C9_inline(__this, NULL);
		V_1 = ((GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2*)IsInstClass((RuntimeObject*)L_1, GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2_il2cpp_TypeInfo_var));
		goto IL_0031;
	}

IL_0016:
	{
		GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* L_2 = V_1;
		NullCheck(L_2);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = VirtualFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(38 /* UnityEngine.Matrix4x4 TriLibCore.Gltf.GltfModel::GetLocalMatrix() */, L_2);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_3, L_4, NULL);
		V_0 = L_5;
		GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* L_6 = V_1;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = GltfModel_get_Parent_mF5F72F59E99F973AF93FFF62CFB03213E64120C9_inline(L_6, NULL);
		V_1 = ((GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2*)IsInstClass((RuntimeObject*)L_7, GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2_il2cpp_TypeInfo_var));
	}

IL_0031:
	{
		GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* L_8 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0016;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10 = V_0;
		V_3 = L_10;
		goto IL_003d;
	}

IL_003d:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11 = V_3;
		return L_11;
	}
}
// System.Void TriLibCore.Gltf.GltfModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfModel__ctor_m8B12ADEF72EE1FF063181890A6C04E2629E0B711 (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB381575D9E7BA6706F57C22D567610F51B5CD868_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mB381575D9E7BA6706F57C22D567610F51B5CD868(L_0, 2, Dictionary_2__ctor_mB381575D9E7BA6706F57C22D567610F51B5CD868_RuntimeMethod_var);
		__this->___U3CUserPropertiesU3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserPropertiesU3Ek__BackingField_14), (void*)L_0);
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
// System.String TriLibCore.Gltf.GltfAnimation::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GltfAnimation_get_Name_mB6CC64BC3B0BF5BE076474DC79049473DA8625C0 (GltfAnimation_t5FCB3628EAE37CD7B330DFB088483BEAE15A8BDA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfAnimation::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfAnimation_set_Name_mFA07DB861A0DC03E59C445BF5EA0D31AB732A62A (GltfAnimation_t5FCB3628EAE37CD7B330DFB088483BEAE15A8BDA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean TriLibCore.Gltf.GltfAnimation::get_Used()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfAnimation_get_Used_mD8A5AB7A594401DF23E8F45FC24E874F10534D7A (GltfAnimation_t5FCB3628EAE37CD7B330DFB088483BEAE15A8BDA* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CUsedU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfAnimation::set_Used(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfAnimation_set_Used_m18DA58CB94101ADD348B6BADD684162939B9EB27 (GltfAnimation_t5FCB3628EAE37CD7B330DFB088483BEAE15A8BDA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CUsedU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimationCurveBinding> TriLibCore.Gltf.GltfAnimation::get_AnimationCurveBindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfAnimation_get_AnimationCurveBindings_m55FBB5F3A009E7CA2C34563DEBB260C62768850E (GltfAnimation_t5FCB3628EAE37CD7B330DFB088483BEAE15A8BDA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAnimationCurveBindingsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfAnimation::set_AnimationCurveBindings(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimationCurveBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfAnimation_set_AnimationCurveBindings_m9846DB79E6AA91A7036271DE96516BC5BDC30E25 (GltfAnimation_t5FCB3628EAE37CD7B330DFB088483BEAE15A8BDA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAnimationCurveBindingsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAnimationCurveBindingsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Single TriLibCore.Gltf.GltfAnimation::get_FrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GltfAnimation_get_FrameRate_m2CFD4879A49A5FD166ADD947C8AF81D6AA79E832 (GltfAnimation_t5FCB3628EAE37CD7B330DFB088483BEAE15A8BDA* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CFrameRateU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfAnimation::set_FrameRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfAnimation_set_FrameRate_mF4739D3E40775D82AF85B456C0F8CB7F58B0F785 (GltfAnimation_t5FCB3628EAE37CD7B330DFB088483BEAE15A8BDA* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___U3CFrameRateU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void TriLibCore.Gltf.GltfAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfAnimation__ctor_mB878FBDBBAD4C68A48B6F9C7EC0A7D558498A677 (GltfAnimation_t5FCB3628EAE37CD7B330DFB088483BEAE15A8BDA* __this, const RuntimeMethod* method) 
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
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TriLibCore.Gltf.GltfBlendShapeKey::get_IndexMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* GltfBlendShapeKey_get_IndexMap_m8EFA17939DB083500D8852743E9361D4EF0F9BAA (GltfBlendShapeKey_t80BF2EA6D83A62C9C867162E87B03B9577AF5C01* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_0 = __this->___U3CIndexMapU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfBlendShapeKey::set_IndexMap(System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfBlendShapeKey_set_IndexMap_m0687AE18630E97499C33A34D30F9A466045D2B37 (GltfBlendShapeKey_t80BF2EA6D83A62C9C867162E87B03B9577AF5C01* __this, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___value0, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_0 = ___value0;
		__this->___U3CIndexMapU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIndexMapU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.Vector3> TriLibCore.Gltf.GltfBlendShapeKey::get_Vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfBlendShapeKey_get_Vertices_m05D2EE843DDAC9978763830B86EDC20506DB0DE5 (GltfBlendShapeKey_t80BF2EA6D83A62C9C867162E87B03B9577AF5C01* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CVerticesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfBlendShapeKey::set_Vertices(System.Collections.Generic.IList`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfBlendShapeKey_set_Vertices_mADCE80ED4FE5796FB3AFBB8ACA5A1E4D947176B7 (GltfBlendShapeKey_t80BF2EA6D83A62C9C867162E87B03B9577AF5C01* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CVerticesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVerticesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.Vector3> TriLibCore.Gltf.GltfBlendShapeKey::get_Normals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfBlendShapeKey_get_Normals_mF780E85045E7528C89D2A22094682F3982B677A7 (GltfBlendShapeKey_t80BF2EA6D83A62C9C867162E87B03B9577AF5C01* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CNormalsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfBlendShapeKey::set_Normals(System.Collections.Generic.IList`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfBlendShapeKey_set_Normals_mDB66CD51CF8C1D4CCE450AA5AD6BD699AB994E75 (GltfBlendShapeKey_t80BF2EA6D83A62C9C867162E87B03B9577AF5C01* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CNormalsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNormalsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.Vector3> TriLibCore.Gltf.GltfBlendShapeKey::get_Tangents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfBlendShapeKey_get_Tangents_m758343297885173B8ADCDED7D2E455ED2AAD9D1E (GltfBlendShapeKey_t80BF2EA6D83A62C9C867162E87B03B9577AF5C01* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTangentsU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfBlendShapeKey::set_Tangents(System.Collections.Generic.IList`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfBlendShapeKey_set_Tangents_m004EED846794E183C39C7AED66C1400FDF1E3A8E (GltfBlendShapeKey_t80BF2EA6D83A62C9C867162E87B03B9577AF5C01* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CTangentsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTangentsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Gltf.GltfBlendShapeKey::get_Indices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfBlendShapeKey_get_Indices_mFA8D7B2B1396B7B4B75158F34D98400D3AFF65FF (GltfBlendShapeKey_t80BF2EA6D83A62C9C867162E87B03B9577AF5C01* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CIndicesU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfBlendShapeKey::set_Indices(System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfBlendShapeKey_set_Indices_m6071A9E857B550DC0AE20A5C4C450562963104A3 (GltfBlendShapeKey_t80BF2EA6D83A62C9C867162E87B03B9577AF5C01* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CIndicesU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIndicesU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Single TriLibCore.Gltf.GltfBlendShapeKey::get_FrameWeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GltfBlendShapeKey_get_FrameWeight_mA4FE29F50025C6509192EA2AB3B3CACFE91068ED (GltfBlendShapeKey_t80BF2EA6D83A62C9C867162E87B03B9577AF5C01* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CFrameWeightU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfBlendShapeKey::set_FrameWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfBlendShapeKey_set_FrameWeight_m12FCED3ABB5FE040B8D6753CD9A38E2C31B90D9D (GltfBlendShapeKey_t80BF2EA6D83A62C9C867162E87B03B9577AF5C01* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___U3CFrameWeightU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean TriLibCore.Gltf.GltfBlendShapeKey::get_FullGeometryShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfBlendShapeKey_get_FullGeometryShape_m02CC55662621FC5BC24FCE016E50E8F3BFBB1C47 (GltfBlendShapeKey_t80BF2EA6D83A62C9C867162E87B03B9577AF5C01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CFullGeometryShapeU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfBlendShapeKey::set_FullGeometryShape(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfBlendShapeKey_set_FullGeometryShape_m436E0233BAAE2F224493C944801355645E759936 (GltfBlendShapeKey_t80BF2EA6D83A62C9C867162E87B03B9577AF5C01* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CFullGeometryShapeU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String TriLibCore.Gltf.GltfBlendShapeKey::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GltfBlendShapeKey_get_Name_m7697ED11F04A16AB1CB1846B89A00B774319A5BB (GltfBlendShapeKey_t80BF2EA6D83A62C9C867162E87B03B9577AF5C01* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfBlendShapeKey::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfBlendShapeKey_set_Name_mEB1DFCF256D8D4A59B648D5F2B29BA4F97E5312C (GltfBlendShapeKey_t80BF2EA6D83A62C9C867162E87B03B9577AF5C01* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Boolean TriLibCore.Gltf.GltfBlendShapeKey::get_Used()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfBlendShapeKey_get_Used_m328882C196AE52146393C35997F1A9F10B3D2E6F (GltfBlendShapeKey_t80BF2EA6D83A62C9C867162E87B03B9577AF5C01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CUsedU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfBlendShapeKey::set_Used(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfBlendShapeKey_set_Used_m1B7E2FC52E12F365DF82019BA63E39E0D9174CE6 (GltfBlendShapeKey_t80BF2EA6D83A62C9C867162E87B03B9577AF5C01* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CUsedU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void TriLibCore.Gltf.GltfBlendShapeKey::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfBlendShapeKey__ctor_m632BE487754CDF7DACBBC4603099A531A5DB1018 (GltfBlendShapeKey_t80BF2EA6D83A62C9C867162E87B03B9577AF5C01* __this, const RuntimeMethod* method) 
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
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Gltf.GltfRootModel::get_AllModels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfRootModel_get_AllModels_mF386B800B752FCBEBDBCA436F69680A1EB086A35 (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllModelsU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfRootModel::set_AllModels(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfRootModel_set_AllModels_mA59FAAA3786F339E9B7C466ED0EDD5E905877B16 (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllModelsU3Ek__BackingField_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllModelsU3Ek__BackingField_17), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup> TriLibCore.Gltf.GltfRootModel::get_AllGeometryGroups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfRootModel_get_AllGeometryGroups_mF47CAFDB29ABCD2A0079E26A824362F632285394 (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllGeometryGroupsU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfRootModel::set_AllGeometryGroups(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfRootModel_set_AllGeometryGroups_mA2598A11ACE3D10F0166374C0AEC8F8CC65C9731 (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllGeometryGroupsU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllGeometryGroupsU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation> TriLibCore.Gltf.GltfRootModel::get_AllAnimations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfRootModel_get_AllAnimations_m405C1180695EB4242BA7DC861DE159CEA408AD85 (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllAnimationsU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfRootModel::set_AllAnimations(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfRootModel_set_AllAnimations_mBC336819DA8732F08840DDB3C0F959C2F947AD14 (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllAnimationsU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllAnimationsU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial> TriLibCore.Gltf.GltfRootModel::get_AllMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfRootModel_get_AllMaterials_mEF94EC232849AD8C999F267CB4DFE3C418CFECF5 (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllMaterialsU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfRootModel::set_AllMaterials(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfRootModel_set_AllMaterials_m037E9568BEB219D7FC38DC993904148EE7052EAE (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllMaterialsU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllMaterialsU3Ek__BackingField_20), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture> TriLibCore.Gltf.GltfRootModel::get_AllTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfRootModel_get_AllTextures_mDE913F4B02B61421FDA2C0B139AC7D627301ECE9 (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllTexturesU3Ek__BackingField_21;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfRootModel::set_AllTextures(System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfRootModel_set_AllTextures_m5217932B980A9D4E2542435198C9AECCB47E9DDF (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllTexturesU3Ek__BackingField_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllTexturesU3Ek__BackingField_21), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ICamera> TriLibCore.Gltf.GltfRootModel::get_AllCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfRootModel_get_AllCameras_mC3885AE6569376A8E4EE7C82ACC630BAC8C5926E (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllCamerasU3Ek__BackingField_22;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfRootModel::set_AllCameras(System.Collections.Generic.IList`1<TriLibCore.Interfaces.ICamera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfRootModel_set_AllCameras_m909C7815EAAADA9B1B103EEC3F9A138458D4CC92 (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllCamerasU3Ek__BackingField_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllCamerasU3Ek__BackingField_22), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ILight> TriLibCore.Gltf.GltfRootModel::get_AllLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfRootModel_get_AllLights_m4E16578EA9F6A45D63A9F80409E39ACA8FFD93DD (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllLightsU3Ek__BackingField_23;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfRootModel::set_AllLights(System.Collections.Generic.IList`1<TriLibCore.Interfaces.ILight>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfRootModel_set_AllLights_mA65DEA975E7046A658C821E8B7605D95D9342829 (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllLightsU3Ek__BackingField_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllLightsU3Ek__BackingField_23), (void*)L_0);
		return;
	}
}
// System.Void TriLibCore.Gltf.GltfRootModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfRootModel__ctor_m96F355F5F103CF03D742288869F688E414E0C5CE (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, const RuntimeMethod* method) 
{
	{
		GltfModel__ctor_m8B12ADEF72EE1FF063181890A6C04E2629E0B711(__this, NULL);
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
// TriLibCore.Interfaces.IModel TriLibCore.Gltf.GltfAnimationCurveBinding::get_Model()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfAnimationCurveBinding_get_Model_m524DB53301589C6675817D60DFBFD48C349C76B8 (GltfAnimationCurveBinding_t92A27388709EF32E3FCC6565B2E2804A5106BE6F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CModelU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfAnimationCurveBinding::set_Model(TriLibCore.Interfaces.IModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfAnimationCurveBinding_set_Model_m2052FFDBC5A0204D0DA01DAF0F7AB3E2321051C9 (GltfAnimationCurveBinding_t92A27388709EF32E3FCC6565B2E2804A5106BE6F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CModelU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CModelU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimationCurve> TriLibCore.Gltf.GltfAnimationCurveBinding::get_AnimationCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfAnimationCurveBinding_get_AnimationCurves_m6592E3C44153438D191D81C269CBAC07213B1D4C (GltfAnimationCurveBinding_t92A27388709EF32E3FCC6565B2E2804A5106BE6F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAnimationCurvesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfAnimationCurveBinding::set_AnimationCurves(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimationCurve>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfAnimationCurveBinding_set_AnimationCurves_m7EC7C7286B455E4A74CAC7FC94878BD023508B6D (GltfAnimationCurveBinding_t92A27388709EF32E3FCC6565B2E2804A5106BE6F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAnimationCurvesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAnimationCurvesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void TriLibCore.Gltf.GltfAnimationCurveBinding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfAnimationCurveBinding__ctor_m5763257157DFC2C626FD107E22BEAC908291C0D1 (GltfAnimationCurveBinding_t92A27388709EF32E3FCC6565B2E2804A5106BE6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m050637C82E9575B3CB1DC7720A6432B96DE8F2A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t098836BD89E26112D46D0209C17F10F176C6D586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t098836BD89E26112D46D0209C17F10F176C6D586* L_0 = (List_1_t098836BD89E26112D46D0209C17F10F176C6D586*)il2cpp_codegen_object_new(List_1_t098836BD89E26112D46D0209C17F10F176C6D586_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m050637C82E9575B3CB1DC7720A6432B96DE8F2A1(L_0, 1, List_1__ctor_m050637C82E9575B3CB1DC7720A6432B96DE8F2A1_RuntimeMethod_var);
		__this->___U3CAnimationCurvesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAnimationCurvesU3Ek__BackingField_1), (void*)L_0);
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
// System.String TriLibCore.Gltf.GltfTexture::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GltfTexture_get_Name_m462A1B85755F017D16C4E1BDF14690B4F1D6CCC6 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfTexture::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfTexture_set_Name_m70BE7947472611A64DDDF01FC7E5A12587F4A60E (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean TriLibCore.Gltf.GltfTexture::get_Used()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfTexture_get_Used_mDDDC2B3F19BF809DE4FF8C2E82E306927E63EAD7 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CUsedU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfTexture::set_Used(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfTexture_set_Used_m97E767BD293C544BE61EA6DF552B5CE106414D2B (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CUsedU3Ek__BackingField_1 = L_0;
		return;
	}
}
// TriLibCore.Interfaces.ITexture TriLibCore.Gltf.GltfTexture::GetSubTexture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfTexture_GetSubTexture_m3B0DF169EF4222E3FF5A906839AF91AD5B2B6440 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, int32_t ___index0, const RuntimeMethod* method) 
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
// System.Int32 TriLibCore.Gltf.GltfTexture::GetSubTextureCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GltfTexture_GetSubTextureCount_m9E127A35A4942966BE640381C337B510B3F99234 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
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
// System.Single TriLibCore.Gltf.GltfTexture::GetWeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GltfTexture_GetWeight_m79D8B4182F48DD098B027665A07F70F0E7B170A5 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		goto IL_0009;
	}

IL_0009:
	{
		float L_0 = V_0;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfTexture::AddTexture(TriLibCore.Interfaces.ITexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfTexture_AddTexture_m17AB7C4241C1CFCD8C3F2A944C23292D8B47F7BA (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, RuntimeObject* ___texture0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Byte[] TriLibCore.Gltf.GltfTexture::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GltfTexture_get_Data_mA55436B8A10C5DEBF90123DE263F0B331F71CA61 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CDataU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfTexture::set_Data(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfTexture_set_Data_mF789E54CE306CF963F969C98A56AE40287EB925F (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.IO.Stream TriLibCore.Gltf.GltfTexture::get_DataStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* GltfTexture_get_DataStream_m78C51227548078591E510334983542E3FE55DED8 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___U3CDataStreamU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfTexture::set_DataStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfTexture_set_DataStream_mCF4AA7BEC7E868BE8430F31B0D825DC9B44ECBC1 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___value0, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___value0;
		__this->___U3CDataStreamU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataStreamU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String TriLibCore.Gltf.GltfTexture::get_Filename()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GltfTexture_get_Filename_m79603B286978B911560B7E71FC6A7B6457DF6223 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CFilenameU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfTexture::set_Filename(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfTexture_set_Filename_mC031AA8746A2C2FBFC2691CD2993928B1FF0EEB8 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CFilenameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFilenameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// UnityEngine.TextureWrapMode TriLibCore.Gltf.GltfTexture::get_WrapModeU()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GltfTexture_get_WrapModeU_m7BF98972EE75BDD2C7B89A61354C8140938977BA (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CWrapModeUU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfTexture::set_WrapModeU(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfTexture_set_WrapModeU_m81AD5018616FAF2FE7B7441DEEB0B9A4699649BD (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CWrapModeUU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.TextureWrapMode TriLibCore.Gltf.GltfTexture::get_WrapModeV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GltfTexture_get_WrapModeV_mF4CBE4399CA34B7B6210DDAB1BC3BB97EA01FD83 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CWrapModeVU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfTexture::set_WrapModeV(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfTexture_set_WrapModeV_m2453F4E391C58F881C3218172B058B3902D8F9C3 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CWrapModeVU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.Vector2 TriLibCore.Gltf.GltfTexture::get_Tiling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GltfTexture_get_Tiling_mFEAAB3E8149A9EFD97B1063F43646B07E58AF741 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CTilingU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfTexture::set_Tiling(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfTexture_set_Tiling_m024B66B808551A6DB90428782D94A629D7340989 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CTilingU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.Vector2 TriLibCore.Gltf.GltfTexture::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GltfTexture_get_Offset_mFC4F6AA81B54647B0DB71DF46162B702BC511D98 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3COffsetU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfTexture::set_Offset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfTexture_set_Offset_mC7C4FCA647FAA257CAC7CEE793884E534540DBEE (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3COffsetU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Int32 TriLibCore.Gltf.GltfTexture::get_TextureId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GltfTexture_get_TextureId_m1F53C4D9772FC0A4189FF212084C1AFB50E7DBC2 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTextureIdU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfTexture::set_TextureId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfTexture_set_TextureId_m41C5BC6BB42FFEEA88FFF8F36DABDF403F8495B7 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CTextureIdU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.String TriLibCore.Gltf.GltfTexture::get_ResolvedFilename()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GltfTexture_get_ResolvedFilename_m438E10EB869EC7B6C304FEA1F0BB33BF10E10BDD (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CResolvedFilenameU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfTexture::set_ResolvedFilename(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfTexture_set_ResolvedFilename_m7EB7E162FCA74618F1E52784E68CB54C3F4F056E (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CResolvedFilenameU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResolvedFilenameU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.Int32 TriLibCore.Gltf.GltfTexture::get_Index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GltfTexture_get_Index_m9F2A26ABA4F7A68FF509A8AE7FDE911FDFC4B274 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CIndexU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfTexture::set_Index(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfTexture_set_Index_mEBD01A47246DDFA65D63BFEA418E534CE168204B (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CIndexU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Boolean TriLibCore.Gltf.GltfTexture::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfTexture_get_IsValid_mCCC0DD7CFA9C9B1C67A4AEF195AFE71EE6033046 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		String_t* L_0;
		L_0 = GltfTexture_get_Filename_m79603B286978B911560B7E71FC6A7B6457DF6223_inline(__this, NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2;
		L_2 = GltfTexture_get_DataStream_m78C51227548078591E510334983542E3FE55DED8_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3;
		L_3 = GltfTexture_get_DataStream_m78C51227548078591E510334983542E3FE55DED8_inline(__this, NULL);
		NullCheck(L_3);
		int64_t L_4;
		L_4 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_3);
		G_B4_0 = ((((int64_t)L_4) > ((int64_t)((int64_t)0)))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B4_0 = 0;
	}

IL_0027:
	{
		G_B6_0 = G_B4_0;
		goto IL_002a;
	}

IL_0029:
	{
		G_B6_0 = 1;
	}

IL_002a:
	{
		return (bool)G_B6_0;
	}
}
// System.Boolean TriLibCore.Gltf.GltfTexture::get_HasAlpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfTexture_get_HasAlpha_mB661FD90349B5009F2FAFB7A35611108F46108F3 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CHasAlphaU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfTexture::set_HasAlpha(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfTexture_set_HasAlpha_mEBA232933276122DFC562EF65742FCB95839D6F2 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CHasAlphaU3Ek__BackingField_12 = L_0;
		return;
	}
}
// TriLibCore.General.TextureFormat TriLibCore.Gltf.GltfTexture::get_TextureFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GltfTexture_get_TextureFormat_m3E443311277883CF97207657BE98095C605C90C0 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTextureFormatU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfTexture::set_TextureFormat(TriLibCore.General.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfTexture_set_TextureFormat_mA70D678A60ED5664862252F855EA5F12E0358456 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CTextureFormatU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void TriLibCore.Gltf.GltfTexture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfTexture__ctor_mC5C7D8F8CC9626BA0CF2987C054473396C752967 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t197C7901E591B451319A83E16C668AD8CC21DFFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF2089CE11FD3E3DBF9541C4C1122B489E72BD4AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t606D24ECFC7D63276BAC4BC062DC93AAECC0EB33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CWrapModeUU3Ek__BackingField_5 = 0;
		__this->___U3CWrapModeVU3Ek__BackingField_6 = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		__this->___U3CTilingU3Ek__BackingField_7 = L_0;
		List_1_t606D24ECFC7D63276BAC4BC062DC93AAECC0EB33* L_1 = (List_1_t606D24ECFC7D63276BAC4BC062DC93AAECC0EB33*)il2cpp_codegen_object_new(List_1_t606D24ECFC7D63276BAC4BC062DC93AAECC0EB33_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF2089CE11FD3E3DBF9541C4C1122B489E72BD4AB(L_1, 1, List_1__ctor_mF2089CE11FD3E3DBF9541C4C1122B489E72BD4AB_RuntimeMethod_var);
		__this->___TextureVariations_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TextureVariations_14), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_2 = __this->___TextureVariations_14;
		NullCheck(L_2);
		InterfaceActionInvoker1< GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<TriLibCore.Gltf.GltfTexture>::Add(T) */, ICollection_1_t197C7901E591B451319A83E16C668AD8CC21DFFA_il2cpp_TypeInfo_var, L_2, __this);
		return;
	}
}
// System.Boolean TriLibCore.Gltf.GltfTexture::Equals(TriLibCore.Interfaces.ITexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfTexture_Equals_m7B3AAED47F59B8721CD316B68B031EF00D8BE1FC (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___other0;
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
// System.Boolean TriLibCore.Gltf.GltfTexture::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GltfTexture_Equals_m54D7DDA1CB968F46C66086735A1A717D225759CB (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___obj0;
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
// System.Int32 TriLibCore.Gltf.GltfTexture::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GltfTexture_GetHashCode_m72C0145EB1B73B1BDF2685DB2F39293DE13F3DC0 (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
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
// TriLibCore.Gltf.GltfTexture TriLibCore.Gltf.GltfTexture::GetTextureWithTilingAndOffset(System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture>,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.TextureWrapMode,UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* GltfTexture_GetTextureWithTilingAndOffset_m0DAF60F47E4E43DCB7E77EC6C198F59EC5F6199A (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, RuntimeObject* ___textures0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureTiling1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureOffset2, int32_t ___wrapU3, int32_t ___wrapV4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t197C7901E591B451319A83E16C668AD8CC21DFFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t9D9853EC356A71B3BC036D2810F70EC0DF1361DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t8FA072AE304C235DECF9BBA777C475459F219E80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* V_0 = NULL;
	int32_t V_1 = 0;
	GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* V_2 = NULL;
	bool V_3 = false;
	GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* V_4 = NULL;
	bool V_5 = false;
	int32_t G_B6_0 = 0;
	{
		V_1 = 0;
		goto IL_0058;
	}

IL_0005:
	{
		RuntimeObject* L_0 = __this->___TextureVariations_14;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_2;
		L_2 = InterfaceFuncInvoker1< GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<TriLibCore.Gltf.GltfTexture>::get_Item(System.Int32) */, IList_1_t8FA072AE304C235DECF9BBA777C475459F219E80_il2cpp_TypeInfo_var, L_0, L_1);
		V_2 = L_2;
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_3 = V_2;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = GltfTexture_get_Tiling_mFEAAB3E8149A9EFD97B1063F43646B07E58AF741_inline(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___textureTiling1;
		bool L_6;
		L_6 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_7 = V_2;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = GltfTexture_get_Offset_mFC4F6AA81B54647B0DB71DF46162B702BC511D98_inline(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___textureOffset2;
		bool L_10;
		L_10 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_11 = V_2;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = GltfTexture_get_WrapModeU_m7BF98972EE75BDD2C7B89A61354C8140938977BA_inline(L_11, NULL);
		int32_t L_13 = ___wrapU3;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0045;
		}
	}
	{
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = GltfTexture_get_WrapModeV_mF4CBE4399CA34B7B6210DDAB1BC3BB97EA01FD83_inline(L_14, NULL);
		int32_t L_16 = ___wrapV4;
		G_B6_0 = ((((int32_t)L_15) == ((int32_t)L_16))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B6_0 = 0;
	}

IL_0046:
	{
		V_3 = (bool)G_B6_0;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0053;
		}
	}
	{
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_18 = V_2;
		V_4 = L_18;
		goto IL_0104;
	}

IL_0053:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0058:
	{
		int32_t L_20 = V_1;
		RuntimeObject* L_21 = __this->___TextureVariations_14;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TriLibCore.Gltf.GltfTexture>::get_Count() */, ICollection_1_t197C7901E591B451319A83E16C668AD8CC21DFFA_il2cpp_TypeInfo_var, L_21);
		V_5 = (bool)((((int32_t)L_20) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_0005;
		}
	}
	{
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_24 = (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8*)il2cpp_codegen_object_new(GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		GltfTexture__ctor_mC5C7D8F8CC9626BA0CF2987C054473396C752967(L_24, NULL);
		V_0 = L_24;
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_25 = V_0;
		String_t* L_26;
		L_26 = GltfTexture_get_Name_m462A1B85755F017D16C4E1BDF14690B4F1D6CCC6_inline(__this, NULL);
		NullCheck(L_25);
		GltfTexture_set_Name_m70BE7947472611A64DDDF01FC7E5A12587F4A60E_inline(L_25, L_26, NULL);
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_27 = V_0;
		String_t* L_28;
		L_28 = GltfTexture_get_Filename_m79603B286978B911560B7E71FC6A7B6457DF6223_inline(__this, NULL);
		NullCheck(L_27);
		GltfTexture_set_Filename_mC031AA8746A2C2FBFC2691CD2993928B1FF0EEB8_inline(L_27, L_28, NULL);
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_29 = V_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_30;
		L_30 = GltfTexture_get_DataStream_m78C51227548078591E510334983542E3FE55DED8_inline(__this, NULL);
		NullCheck(L_29);
		GltfTexture_set_DataStream_mCF4AA7BEC7E868BE8430F31B0D825DC9B44ECBC1_inline(L_29, L_30, NULL);
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_31 = V_0;
		int32_t L_32;
		L_32 = GltfTexture_get_WrapModeU_m7BF98972EE75BDD2C7B89A61354C8140938977BA_inline(__this, NULL);
		NullCheck(L_31);
		GltfTexture_set_WrapModeU_m81AD5018616FAF2FE7B7441DEEB0B9A4699649BD_inline(L_31, L_32, NULL);
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_33 = V_0;
		int32_t L_34;
		L_34 = GltfTexture_get_WrapModeV_mF4CBE4399CA34B7B6210DDAB1BC3BB97EA01FD83_inline(__this, NULL);
		NullCheck(L_33);
		GltfTexture_set_WrapModeV_m2453F4E391C58F881C3218172B058B3902D8F9C3_inline(L_33, L_34, NULL);
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_35 = V_0;
		int32_t L_36;
		L_36 = GltfTexture_get_TextureId_m1F53C4D9772FC0A4189FF212084C1AFB50E7DBC2_inline(__this, NULL);
		NullCheck(L_35);
		GltfTexture_set_TextureId_m41C5BC6BB42FFEEA88FFF8F36DABDF403F8495B7_inline(L_35, L_36, NULL);
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_37 = V_0;
		int32_t L_38;
		L_38 = GltfTexture_get_TextureFormat_m3E443311277883CF97207657BE98095C605C90C0_inline(__this, NULL);
		NullCheck(L_37);
		GltfTexture_set_TextureFormat_mA70D678A60ED5664862252F855EA5F12E0358456_inline(L_37, L_38, NULL);
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_39 = V_0;
		RuntimeObject* L_40 = ___textures0;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TriLibCore.Interfaces.ITexture>::get_Count() */, ICollection_1_t9D9853EC356A71B3BC036D2810F70EC0DF1361DD_il2cpp_TypeInfo_var, L_40);
		NullCheck(L_39);
		GltfTexture_set_Index_mEBD01A47246DDFA65D63BFEA418E534CE168204B_inline(L_39, L_41, NULL);
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_42 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = ___textureTiling1;
		NullCheck(L_42);
		GltfTexture_set_Tiling_m024B66B808551A6DB90428782D94A629D7340989_inline(L_42, L_43, NULL);
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_44 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = ___textureOffset2;
		NullCheck(L_44);
		GltfTexture_set_Offset_mC7C4FCA647FAA257CAC7CEE793884E534540DBEE_inline(L_44, L_45, NULL);
		RuntimeObject* L_46 = __this->___TextureVariations_14;
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_47 = V_0;
		NullCheck(L_46);
		InterfaceActionInvoker1< GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<TriLibCore.Gltf.GltfTexture>::Add(T) */, ICollection_1_t197C7901E591B451319A83E16C668AD8CC21DFFA_il2cpp_TypeInfo_var, L_46, L_47);
		RuntimeObject* L_48 = ___textures0;
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_49 = V_0;
		NullCheck(L_48);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<TriLibCore.Interfaces.ITexture>::Add(T) */, ICollection_1_t9D9853EC356A71B3BC036D2810F70EC0DF1361DD_il2cpp_TypeInfo_var, L_48, L_49);
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_50 = V_0;
		V_4 = L_50;
		goto IL_0104;
	}

IL_0104:
	{
		GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* L_51 = V_4;
		return L_51;
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
// System.String TriLibCore.Gltf.GltfAnimationCurve::get_Property()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GltfAnimationCurve_get_Property_m37E01634BB4018CE37D7B9C35C3D6FC426F791E3 (GltfAnimationCurve_t3A66AE2837EE789BFF3DF6E20A7F764F30356D65* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPropertyU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfAnimationCurve::set_Property(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfAnimationCurve_set_Property_mE2E5BAC3623DA3172E1AD4B2A03F6EBFEDD3D785 (GltfAnimationCurve_t3A66AE2837EE789BFF3DF6E20A7F764F30356D65* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CPropertyU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertyU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Type TriLibCore.Gltf.GltfAnimationCurve::get_AnimatedType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* GltfAnimationCurve_get_AnimatedType_m50174912E652DF5FD4772AB820072C71050F2C78 (GltfAnimationCurve_t3A66AE2837EE789BFF3DF6E20A7F764F30356D65* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CAnimatedTypeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfAnimationCurve::set_AnimatedType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfAnimationCurve_set_AnimatedType_m139863FB7E86892032207EF58E23912234D97F63 (GltfAnimationCurve_t3A66AE2837EE789BFF3DF6E20A7F764F30356D65* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CAnimatedTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAnimatedTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// UnityEngine.AnimationCurve TriLibCore.Gltf.GltfAnimationCurve::get_AnimationCurve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* GltfAnimationCurve_get_AnimationCurve_m3E75BE3ADB56E4853431D52C4C97B627D24D73CD (GltfAnimationCurve_t3A66AE2837EE789BFF3DF6E20A7F764F30356D65* __this, const RuntimeMethod* method) 
{
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___U3CAnimationCurveU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfAnimationCurve::set_AnimationCurve(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfAnimationCurve_set_AnimationCurve_m8C752BFC2E3E3ADB809B4A18BF5B51B62D644456 (GltfAnimationCurve_t3A66AE2837EE789BFF3DF6E20A7F764F30356D65* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method) 
{
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___value0;
		__this->___U3CAnimationCurveU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAnimationCurveU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// TriLibCore.General.TangentMode TriLibCore.Gltf.GltfAnimationCurve::get_TangentMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GltfAnimationCurve_get_TangentMode_m46F78E04FF60FFA2622C632FECB5C6E577D7BB9C (GltfAnimationCurve_t3A66AE2837EE789BFF3DF6E20A7F764F30356D65* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTangentModeU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.GltfAnimationCurve::set_TangentMode(TriLibCore.General.TangentMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfAnimationCurve_set_TangentMode_mAD5A4810802F4B5CCDA43B79169A3458070BFA9A (GltfAnimationCurve_t3A66AE2837EE789BFF3DF6E20A7F764F30356D65* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CTangentModeU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void TriLibCore.Gltf.GltfAnimationCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfAnimationCurve__ctor_m93014DCBBCDF4026D14B35E518121439978C20BB (GltfAnimationCurve_t3A66AE2837EE789BFF3DF6E20A7F764F30356D65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		__this->___U3CAnimatedTypeU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAnimatedTypeU3Ek__BackingField_1), (void*)L_1);
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
// Conversion methods for marshalling of: TriLibCore.Gltf.TemporaryString
IL2CPP_EXTERN_C void TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7_marshal_pinvoke(const TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7& unmarshaled, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.____chars_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaled_chars_Length = (unmarshaled.____chars_0)->max_length;
		marshaled.____chars_0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled_chars_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_chars_Length); i++)
		{
			(marshaled.____chars_0)[i] = static_cast<uint8_t>((unmarshaled.____chars_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____chars_0 = NULL;
	}
	marshaled.____charString_1 = il2cpp_codegen_marshal_string(unmarshaled.____charString_1);
	marshaled.____length_2 = unmarshaled.____length_2;
}
IL2CPP_EXTERN_C void TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7_marshal_pinvoke_back(const TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7_marshaled_pinvoke& marshaled, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____chars_0 != NULL)
	{
		if (unmarshaled.____chars_0 == NULL)
		{
			unmarshaled.____chars_0 = reinterpret_cast<CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*>((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____chars_0), (void*)reinterpret_cast<CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*>((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.____chars_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.____chars_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____chars_0)[i]));
		}
	}
	unmarshaled.____charString_1 = il2cpp_codegen_marshal_string_result(marshaled.____charString_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____charString_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.____charString_1));
	int32_t unmarshaled_length_temp_2 = 0;
	unmarshaled_length_temp_2 = marshaled.____length_2;
	unmarshaled.____length_2 = unmarshaled_length_temp_2;
}
// Conversion method for clean up from marshalling of: TriLibCore.Gltf.TemporaryString
IL2CPP_EXTERN_C void TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7_marshal_pinvoke_cleanup(TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7_marshaled_pinvoke& marshaled)
{
	if (marshaled.____chars_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____chars_0);
		marshaled.____chars_0 = NULL;
	}
	il2cpp_codegen_marshal_free(marshaled.____charString_1);
	marshaled.____charString_1 = NULL;
}
// Conversion methods for marshalling of: TriLibCore.Gltf.TemporaryString
IL2CPP_EXTERN_C void TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7_marshal_com(const TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7& unmarshaled, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7_marshaled_com& marshaled)
{
	if (unmarshaled.____chars_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaled_chars_Length = (unmarshaled.____chars_0)->max_length;
		marshaled.____chars_0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled_chars_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_chars_Length); i++)
		{
			(marshaled.____chars_0)[i] = static_cast<uint8_t>((unmarshaled.____chars_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____chars_0 = NULL;
	}
	marshaled.____charString_1 = il2cpp_codegen_marshal_bstring(unmarshaled.____charString_1);
	marshaled.____length_2 = unmarshaled.____length_2;
}
IL2CPP_EXTERN_C void TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7_marshal_com_back(const TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7_marshaled_com& marshaled, TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____chars_0 != NULL)
	{
		if (unmarshaled.____chars_0 == NULL)
		{
			unmarshaled.____chars_0 = reinterpret_cast<CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*>((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____chars_0), (void*)reinterpret_cast<CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*>((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.____chars_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.____chars_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____chars_0)[i]));
		}
	}
	unmarshaled.____charString_1 = il2cpp_codegen_marshal_bstring_result(marshaled.____charString_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____charString_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.____charString_1));
	int32_t unmarshaled_length_temp_2 = 0;
	unmarshaled_length_temp_2 = marshaled.____length_2;
	unmarshaled.____length_2 = unmarshaled_length_temp_2;
}
// Conversion method for clean up from marshalling of: TriLibCore.Gltf.TemporaryString
IL2CPP_EXTERN_C void TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7_marshal_com_cleanup(TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7_marshaled_com& marshaled)
{
	if (marshaled.____chars_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____chars_0);
		marshaled.____chars_0 = NULL;
	}
	il2cpp_codegen_marshal_free_bstring(marshaled.____charString_1);
	marshaled.____charString_1 = NULL;
}
// System.Void TriLibCore.Gltf.TemporaryString::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TemporaryString__ctor_m53730179272D19FE464D2A9AB74E82337BF40C84 (TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7* __this, int32_t ___length0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___length0;
		String_t* L_1;
		L_1 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, 0, L_0, NULL);
		__this->____charString_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charString_1), (void*)L_1);
		int32_t L_2 = ___length0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____chars_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____chars_0), (void*)L_3);
		int32_t L_4 = ___length0;
		__this->____length_2 = L_4;
		return;
	}
}
IL2CPP_EXTERN_C  void TemporaryString__ctor_m53730179272D19FE464D2A9AB74E82337BF40C84_AdjustorThunk (RuntimeObject* __this, int32_t ___length0, const RuntimeMethod* method)
{
	TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7*>(__this + _offset);
	TemporaryString__ctor_m53730179272D19FE464D2A9AB74E82337BF40C84(_thisAdjusted, ___length0, method);
}
// System.String TriLibCore.Gltf.TemporaryString::GetString(TriLibCore.Utils.JsonParser/JsonValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TemporaryString_GetString_m13E0621057D7FE2FC58C8D3E4C8AE05DBAADF725 (TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7* __this, JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, const RuntimeMethod* method) 
{
	Il2CppChar* V_0 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_1 = NULL;
	Il2CppChar* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____chars_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_0016;
		}
	}

IL_0011:
	{
		V_0 = (Il2CppChar*)((uintptr_t)0);
		goto IL_001f;
	}

IL_0016:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (Il2CppChar*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001f:
	{
		Il2CppChar* L_4 = V_0;
		int32_t L_5 = __this->____length_2;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_4, (uint8_t)0, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_5, 2))), NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = __this->____chars_0;
		int32_t L_7;
		L_7 = JsonValue_CopyTo_m19C8979ABD0FF52FCE82585D7724A0AA5E6DFAED((&___value0), L_6, NULL);
		String_t* L_8 = __this->____charString_1;
		V_3 = L_8;
		String_t* L_9 = V_3;
		V_2 = (Il2CppChar*)((uintptr_t)L_9);
		Il2CppChar* L_10 = V_2;
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		Il2CppChar* L_11 = V_2;
		int32_t L_12;
		L_12 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
		V_2 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_11, L_12));
	}

IL_0054:
	{
		Il2CppChar* L_13 = V_2;
		Il2CppChar* L_14 = V_0;
		int32_t L_15 = __this->____length_2;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_13, (void*)L_14, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_15, 2))), NULL);
		V_3 = (String_t*)NULL;
		V_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		String_t* L_16 = __this->____charString_1;
		V_4 = L_16;
		goto IL_0077;
	}

IL_0077:
	{
		String_t* L_17 = V_4;
		return L_17;
	}
}
IL2CPP_EXTERN_C  String_t* TemporaryString_GetString_m13E0621057D7FE2FC58C8D3E4C8AE05DBAADF725_AdjustorThunk (RuntimeObject* __this, JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914 ___value0, const RuntimeMethod* method)
{
	TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TemporaryString_tD8F2669292664D80619D72E9A309F3A04B2096B7*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = TemporaryString_GetString_m13E0621057D7FE2FC58C8D3E4C8AE05DBAADF725(_thisAdjusted, ___value0, method);
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
// System.String[] TriLibCore.Gltf.Reader.GltfReader::GetExtensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GltfReader_GetExtensions_mDDD9AF7AE0AA8264465360CB3995F783D7F58DC4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral119B330A1FA1C051D7BE15A6ABD55D08AFF99689);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA18955232B8E3141B1616DF7C0C29A59B8A13EF3);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral119B330A1FA1C051D7BE15A6ABD55D08AFF99689);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral119B330A1FA1C051D7BE15A6ABD55D08AFF99689);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralA18955232B8E3141B1616DF7C0C29A59B8A13EF3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA18955232B8E3141B1616DF7C0C29A59B8A13EF3);
		V_0 = L_2;
		goto IL_001a;
	}

IL_001a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		return L_3;
	}
}
// System.Void TriLibCore.Gltf.Reader.GltfReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfReader__ctor_m9087A48AE5DF67D502B9DFEF07367B8251835A3B (GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReaderBase__ctor_m5C4FE7A4BC205B65DAB56FF3CC5202D0B04937DA(__this, NULL);
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_0 = (GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A*)il2cpp_codegen_object_new(GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GtlfProcessor__ctor_mFC99051F9A1BB0E858525318A04FA48214844070(L_0, __this, NULL);
		__this->____gtlfProcessor_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gtlfProcessor_11), (void*)L_0);
		return;
	}
}
// System.String TriLibCore.Gltf.Reader.GltfReader::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GltfReader_get_Name_mEC8E40740500B0A5A64B64152830739EF8230AC3 (GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80A749BBF097574027749577C42FF229E10C6B66);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral80A749BBF097574027749577C42FF229E10C6B66;
	}
}
// System.Type TriLibCore.Gltf.Reader.GltfReader::get_LoadingStepEnumType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* GltfReader_get_LoadingStepEnumType_m58735F7B749119178BF34BF4607BACDF4505C57F (GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessingSteps_t85CB655500227D688208A221C3E52FF54DC2B490_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ProcessingSteps_t85CB655500227D688208A221C3E52FF54DC2B490_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Gltf.Reader.GltfReader::ReadStream(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfReader_ReadStream_m7201712D5C1157A13E15E2D6AB9E7DF8125B4597 (GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext1, String_t* ___filename2, Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___onProgress3, const RuntimeMethod* method) 
{
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
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_5 = __this->____gtlfProcessor_11;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___stream0;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = GtlfProcessor_ParseModel_mB501D32A6D08024CF9CF3FC2C01D7A5053D36122(L_5, L_6, NULL);
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
// TriLibCore.Interfaces.IRootModel TriLibCore.Gltf.Reader.GltfReader::CreateRootModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfReader_CreateRootModel_mF5BEA162A470C694D1B34559349C1749A0D6FE8A (GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* L_0 = (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727*)il2cpp_codegen_object_new(GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GltfRootModel__ctor_m96F355F5F103CF03D742288869F688E414E0C5CE(L_0, NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.IEnumerator TriLibCore.Gltf.Reader.GltfReader::ReadStream_Coroutine(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfReader_ReadStream_Coroutine_mDC4D894774323CACEE6B49B2E3EC9F883A97B457 (GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext1, String_t* ___filename2, Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___onProgress3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReadStream_CoroutineU3Ed__12_tFB45C9FFA314E4937845F70F6D39F97DDC3068A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReadStream_CoroutineU3Ed__12_tFB45C9FFA314E4937845F70F6D39F97DDC3068A7* L_0 = (U3CReadStream_CoroutineU3Ed__12_tFB45C9FFA314E4937845F70F6D39F97DDC3068A7*)il2cpp_codegen_object_new(U3CReadStream_CoroutineU3Ed__12_tFB45C9FFA314E4937845F70F6D39F97DDC3068A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CReadStream_CoroutineU3Ed__12__ctor_m8911285E29729A205B40C11F9BCA8C06BBC16DCE(L_0, 0, NULL);
		U3CReadStream_CoroutineU3Ed__12_tFB45C9FFA314E4937845F70F6D39F97DDC3068A7* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_6), (void*)__this);
		U3CReadStream_CoroutineU3Ed__12_tFB45C9FFA314E4937845F70F6D39F97DDC3068A7* L_2 = L_1;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___stream0;
		NullCheck(L_2);
		L_2->___stream_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___stream_2), (void*)L_3);
		U3CReadStream_CoroutineU3Ed__12_tFB45C9FFA314E4937845F70F6D39F97DDC3068A7* L_4 = L_2;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_5 = ___assetLoaderContext1;
		NullCheck(L_4);
		L_4->___assetLoaderContext_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___assetLoaderContext_3), (void*)L_5);
		U3CReadStream_CoroutineU3Ed__12_tFB45C9FFA314E4937845F70F6D39F97DDC3068A7* L_6 = L_4;
		String_t* L_7 = ___filename2;
		NullCheck(L_6);
		L_6->___filename_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___filename_4), (void*)L_7);
		U3CReadStream_CoroutineU3Ed__12_tFB45C9FFA314E4937845F70F6D39F97DDC3068A7* L_8 = L_6;
		Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* L_9 = ___onProgress3;
		NullCheck(L_8);
		L_8->___onProgress_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___onProgress_5), (void*)L_9);
		return L_8;
	}
}
// System.Void TriLibCore.Gltf.Reader.GltfReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfReader__cctor_m898B5A0E3C7EB5C465F4972F3C5F632C5FFADEB5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC_StaticFields*)il2cpp_codegen_static_fields_for(GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC_il2cpp_TypeInfo_var))->___SpotLightDistance_10 = (999999.0f);
		return;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Gltf.Reader.GltfReader::<>n__0(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GltfReader_U3CU3En__0_mE4501CB540D453DAF5AD0A79A66DF8068B3C8A85 (GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext1, String_t* ___filename2, Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___onProgress3, const RuntimeMethod* method) 
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
// System.Void TriLibCore.Gltf.Reader.GltfReader/<ReadStream_Coroutine>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadStream_CoroutineU3Ed__12__ctor_m8911285E29729A205B40C11F9BCA8C06BBC16DCE (U3CReadStream_CoroutineU3Ed__12_tFB45C9FFA314E4937845F70F6D39F97DDC3068A7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TriLibCore.Gltf.Reader.GltfReader/<ReadStream_Coroutine>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadStream_CoroutineU3Ed__12_System_IDisposable_Dispose_m7A90D3E72BFFD188CF266A1D09DB48BD94A133D8 (U3CReadStream_CoroutineU3Ed__12_tFB45C9FFA314E4937845F70F6D39F97DDC3068A7* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TriLibCore.Gltf.Reader.GltfReader/<ReadStream_Coroutine>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReadStream_CoroutineU3Ed__12_MoveNext_mDA32F53E14BF297C1695E10D508D8CF2F5BAA944 (U3CReadStream_CoroutineU3Ed__12_tFB45C9FFA314E4937845F70F6D39F97DDC3068A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRootModel_t83ED40397FD23448FC9A99336523CC7DE8A841BB_il2cpp_TypeInfo_var);
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
		GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* L_3 = __this->___U3CU3E4__this_6;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___stream_2;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_5 = __this->___assetLoaderContext_3;
		String_t* L_6 = __this->___filename_4;
		Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* L_7 = __this->___onProgress_5;
		NullCheck(L_3);
		RuntimeObject* L_8;
		L_8 = GltfReader_U3CU3En__0_mE4501CB540D453DAF5AD0A79A66DF8068B3C8A85(L_3, L_4, L_5, L_6, L_7, NULL);
		GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* L_9 = __this->___U3CU3E4__this_6;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE** L_10 = (&__this->___stream_2);
		NullCheck(L_9);
		ReaderBase_SetupStream_mCDC78453E3657CB3FBB713C40FB50B4941455942(L_9, L_10, NULL);
		GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* L_11 = __this->___U3CU3E4__this_6;
		NullCheck(L_11);
		GtlfProcessor_t9E6F312E0E6B67204245CAC0775677302FCCEF8A* L_12 = L_11->____gtlfProcessor_11;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_13 = __this->___assetLoaderContext_3;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = __this->___stream_2;
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = GtlfProcessor_ParseModel_Coroutine_mB43A2198B50FD3A4CAA715895AB8B3943927F0E7(L_12, L_13, L_14, NULL);
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
		GltfReader_t78F6ACB57FB631BD39DD220810333DD45D639DEC* L_19 = __this->___U3CU3E4__this_6;
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
// System.Object TriLibCore.Gltf.Reader.GltfReader/<ReadStream_Coroutine>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReadStream_CoroutineU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mADF9F43E6954FE4752AED48C0B54AA9B067F9DBE (U3CReadStream_CoroutineU3Ed__12_tFB45C9FFA314E4937845F70F6D39F97DDC3068A7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TriLibCore.Gltf.Reader.GltfReader/<ReadStream_Coroutine>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadStream_CoroutineU3Ed__12_System_Collections_IEnumerator_Reset_m961C1F438F7E8EEC67F857CF89EDFB7900601105 (U3CReadStream_CoroutineU3Ed__12_tFB45C9FFA314E4937845F70F6D39F97DDC3068A7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReadStream_CoroutineU3Ed__12_System_Collections_IEnumerator_Reset_m961C1F438F7E8EEC67F857CF89EDFB7900601105_RuntimeMethod_var)));
	}
}
// System.Object TriLibCore.Gltf.Reader.GltfReader/<ReadStream_Coroutine>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReadStream_CoroutineU3Ed__12_System_Collections_IEnumerator_get_Current_m4C5D1AEE47E79FAB85B26D48DA2CB1491A79A0D5 (U3CReadStream_CoroutineU3Ed__12_tFB45C9FFA314E4937845F70F6D39F97DDC3068A7* __this, const RuntimeMethod* method) 
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF98E565B75872FC9E3F2A26C6075D3D0F99DF5F1 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, const RuntimeMethod* method) 
{
	{
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_0 = __this->___U3CAssetLoaderContextU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfModel_set_Visibility_mB104FE40D13BF90FF6A1E2E91C79DE230972C684_inline (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CVisibilityU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfModel_set_Children_m1AECD8080C5A22BF51E87737F20DDD7085E11228_inline (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CChildrenU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CChildrenU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GltfModel_get_Children_m655F8116216113238EE8F72EEA782D61243B459B_inline (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CChildrenU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfRootModel_set_AllAnimations_mBC336819DA8732F08840DDB3C0F959C2F947AD14_inline (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllAnimationsU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllAnimationsU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfRootModel_set_AllMaterials_m037E9568BEB219D7FC38DC993904148EE7052EAE_inline (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllMaterialsU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllMaterialsU3Ek__BackingField_20), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfRootModel_set_AllTextures_m5217932B980A9D4E2542435198C9AECCB47E9DDF_inline (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllTexturesU3Ek__BackingField_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllTexturesU3Ek__BackingField_21), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfRootModel_set_AllGeometryGroups_mA2598A11ACE3D10F0166374C0AEC8F8CC65C9731_inline (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllGeometryGroupsU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllGeometryGroupsU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfRootModel_set_AllModels_mA59FAAA3786F339E9B7C466ED0EDD5E905877B16_inline (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllModelsU3Ek__BackingField_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllModelsU3Ek__BackingField_17), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfRootModel_set_AllCameras_m909C7815EAAADA9B1B103EEC3F9A138458D4CC92_inline (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllCamerasU3Ek__BackingField_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllCamerasU3Ek__BackingField_22), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfRootModel_set_AllLights_mA65DEA975E7046A658C821E8B7605D95D9342829_inline (GltfRootModel_t7D9C44CC5925392042E483F2A5768105B5EE3727* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllLightsU3Ek__BackingField_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllLightsU3Ek__BackingField_23), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfModel_set_LocalScale_m3B7956B3910519C3DC2E017D27D560AE29615BA0_inline (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CLocalScaleU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonValue_get_Type_m899390B4081FD1FFF0DB96A703C4FB699FC16DFF_inline (JsonValue_t20C2533D6F55A7EA63C03D8149A46C268561F914* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* StreamChunk_get_BaseStream_mF02EC5BD726384BDA32816E4F5C687365CB10367_inline (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___U3CBaseStreamU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StreamChunk_set_BaseStream_mDC58F0B6BB29D0DA04D7F862E603ED9AA2B4A52B_inline (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___value0, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___value0;
		__this->___U3CBaseStreamU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBaseStreamU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t StreamChunk_get_BasePosition_m5B1C69EF3FAC42F4A02B883A44D8029E695A1FBE_inline (StreamChunk_t2029C123B65C76D5FA51AB68B399FAA59657207D* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CBasePositionU3Ek__BackingField_6;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		float L_2 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___a0;
		float L_4 = L_3.___g_1;
		float L_5 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___b_2;
		float L_8 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___a_3;
		float L_11 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Implicit_mA8CF4745D766F4F610E1BE0A1ED2F4E5FE5D734C_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___v0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___v0;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___v0;
		float L_5 = L_4.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___v0;
		float L_7 = L_6.___w_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, const RuntimeMethod* method) 
{
	{
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_0 = __this->___U3CContextU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, const RuntimeMethod* method) 
{
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___U3CUnityTextureU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GltfModel_get_Name_m44A2759A9531585217EB070E7BC5B2E12B03B375_inline (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GltfModel_get_LocalPosition_m0226FF0DA5FA36427DD272454DA10365DD64ED96_inline (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CLocalPositionU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GltfModel_get_LocalRotation_m9E05B0215974A1CA3C784E15769C54D9FEFC45D1_inline (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CLocalRotationU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GltfModel_get_LocalScale_m5AD4BBDA83740FA1C19D5B092401EAAABFDD663D_inline (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CLocalScaleU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GltfModel_get_Parent_mF5F72F59E99F973AF93FFF62CFB03213E64120C9_inline (GltfModel_t7E6F18A9288B4327BA2168BB381893C5E40FB6A2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CParentU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GltfTexture_get_Filename_m79603B286978B911560B7E71FC6A7B6457DF6223_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CFilenameU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* GltfTexture_get_DataStream_m78C51227548078591E510334983542E3FE55DED8_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___U3CDataStreamU3Ek__BackingField_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GltfTexture_get_Tiling_mFEAAB3E8149A9EFD97B1063F43646B07E58AF741_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CTilingU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GltfTexture_get_Offset_mFC4F6AA81B54647B0DB71DF46162B702BC511D98_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3COffsetU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GltfTexture_get_WrapModeU_m7BF98972EE75BDD2C7B89A61354C8140938977BA_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CWrapModeUU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GltfTexture_get_WrapModeV_mF4CBE4399CA34B7B6210DDAB1BC3BB97EA01FD83_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CWrapModeVU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GltfTexture_get_Name_m462A1B85755F017D16C4E1BDF14690B4F1D6CCC6_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfTexture_set_Name_m70BE7947472611A64DDDF01FC7E5A12587F4A60E_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfTexture_set_Filename_mC031AA8746A2C2FBFC2691CD2993928B1FF0EEB8_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CFilenameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFilenameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfTexture_set_DataStream_mCF4AA7BEC7E868BE8430F31B0D825DC9B44ECBC1_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___value0, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___value0;
		__this->___U3CDataStreamU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataStreamU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfTexture_set_WrapModeU_m81AD5018616FAF2FE7B7441DEEB0B9A4699649BD_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CWrapModeUU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfTexture_set_WrapModeV_m2453F4E391C58F881C3218172B058B3902D8F9C3_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CWrapModeVU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GltfTexture_get_TextureId_m1F53C4D9772FC0A4189FF212084C1AFB50E7DBC2_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTextureIdU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfTexture_set_TextureId_m41C5BC6BB42FFEEA88FFF8F36DABDF403F8495B7_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CTextureIdU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GltfTexture_get_TextureFormat_m3E443311277883CF97207657BE98095C605C90C0_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTextureFormatU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfTexture_set_TextureFormat_mA70D678A60ED5664862252F855EA5F12E0358456_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CTextureFormatU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfTexture_set_Index_mEBD01A47246DDFA65D63BFEA418E534CE168204B_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CIndexU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfTexture_set_Tiling_m024B66B808551A6DB90428782D94A629D7340989_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CTilingU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GltfTexture_set_Offset_mC7C4FCA647FAA257CAC7CEE793884E534540DBEE_inline (GltfTexture_t9C29E1BF684E384B94380A23E12183240B25EEA8* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3COffsetU3Ek__BackingField_8 = L_0;
		return;
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
