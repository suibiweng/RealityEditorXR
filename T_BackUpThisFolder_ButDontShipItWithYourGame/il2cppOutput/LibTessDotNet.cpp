#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
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
// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.Dict`1/Node<LibTessDotNet.Tess/ActiveRegion>>
struct DefaultTypePool_1_t90F8C812E092F9734B6A7427BE56A2EAD003F4DF;
// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.Mesh>
struct DefaultTypePool_1_t6BEF63CAF2876270955D9C01C95ACB9C5BF31B77;
// LibTessDotNet.DefaultTypePool`1<System.Object>
struct DefaultTypePool_1_t21660DBAD98411D7DAB65F258E9433630904C28C;
// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Edge>
struct DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC;
// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Face>
struct DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2;
// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Vertex>
struct DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797;
// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.Tess/ActiveRegion>
struct DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4;
// LibTessDotNet.Dict`1<System.Object>
struct Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971;
// LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>
struct Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,TriLibCore.Interfaces.IModel>
struct Dictionary_2_tE704ACFE7C32537A046D8577F8299D1B52ED0C00;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.String>
struct Dictionary_2_t15A9DEF843D5DA84170CD8536BA0EBB039EB4ADF;
// System.Collections.Generic.Dictionary`2<TriLibCore.Interfaces.IModel,UnityEngine.GameObject>
struct Dictionary_2_tADE1FC3F6C786CACD6652C2C7275C3A0FD274A9C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Byte[]>
struct Dictionary_2_t23C2BC333CAB1901F8EC82B59264ED8D028DD1AB;
// System.Collections.Generic.HashSet`1<UnityEngine.Texture>
struct HashSet_1_t70836788BCAF42568800A162B9F23937F5309AE8;
// System.Collections.Generic.IDictionary`2<System.Type,LibTessDotNet.ITypePool>
struct IDictionary_2_t378E428EFD0077FCE9C551DB1EA9EA35B21079DD;
// System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>
struct IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1;
// LibTessDotNet.Dict`1/LessOrEqual<System.Object>
struct LessOrEqual_tD5C2576F19D2F54AAE5769D424704F1378625EF0;
// LibTessDotNet.PriorityHeap`1/LessOrEqual<System.Object>
struct LessOrEqual_tACCF8A4A6BCA3EF8A2CF760C7F6FF7EFDF874918;
// LibTessDotNet.PriorityHeap`1/LessOrEqual<LibTessDotNet.MeshUtils/Vertex>
struct LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00;
// LibTessDotNet.Dict`1/LessOrEqual<LibTessDotNet.Tess/ActiveRegion>
struct LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6;
// System.Collections.Generic.List`1<System.IDisposable>
struct List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551;
// LibTessDotNet.Dict`1/Node<System.Object>
struct Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62;
// LibTessDotNet.Dict`1/Node<LibTessDotNet.Tess/ActiveRegion>
struct Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C;
// LibTessDotNet.PriorityHeap`1<LibTessDotNet.MeshUtils/Vertex>
struct PriorityHeap_1_t398DFD3BBC195F75DD5945E4AEC8492BE85E9112;
// LibTessDotNet.PriorityQueue`1<System.Object>
struct PriorityQueue_1_t42E30E5548EA5BB6D15DE0703FBDDD4E46A7B60F;
// LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>
struct PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29;
// System.Collections.Generic.Queue`1<LibTessDotNet.Dict`1/Node<LibTessDotNet.Tess/ActiveRegion>>
struct Queue_1_t7B0DEA3BB2D2D5298253C633DC862701EDB0E057;
// System.Collections.Generic.Queue`1<TriLibCore.Interfaces.IContextualizedAction>
struct Queue_1_t952DE88AF42216B755D09647735E4235DA7138D4;
// System.Collections.Generic.Queue`1<LibTessDotNet.Mesh>
struct Queue_1_tB0F96AEE1D0C265E5DEC1DE4E1A416A32400AAEE;
// System.Collections.Generic.Queue`1<LibTessDotNet.MeshUtils/Edge>
struct Queue_1_tD16569FEC985028AAF7AD07E944FCFFBE7567730;
// System.Collections.Generic.Queue`1<LibTessDotNet.MeshUtils/Face>
struct Queue_1_t0EF83785A32509AFAD1DECBB79B203F1F8428FFC;
// System.Collections.Generic.Queue`1<LibTessDotNet.MeshUtils/Vertex>
struct Queue_1_tFF89653FA4C031D1CC2D18DF7EE31A9F2DAD19FE;
// System.Collections.Generic.Queue`1<LibTessDotNet.Tess/ActiveRegion>
struct Queue_1_t8C81B5CA8ECFD8367AB4A971F48B5EFEE7966102;
// TriLibCore.Mappers.AnimationClipMapper[]
struct AnimationClipMapperU5BU5D_t8E00A18562A07FD65A6E731D8BA6FF48D80BBFD8;
// LibTessDotNet.ContourVertex[]
struct ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// TriLibCore.Mappers.LipSyncMapper[]
struct LipSyncMapperU5BU5D_t32748FDCB493E8E7550A88244C1CBBB79E54C18A;
// TriLibCore.Mappers.MaterialMapper[]
struct MaterialMapperU5BU5D_tBD3B26C68148AE48AD6F3B44795C7B7B3EE2257B;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TriLibCore.Mappers.TextureMapper[]
struct TextureMapperU5BU5D_t35F575F1D951980713D2A9E7D85F6AE82ABEA79C;
// LibTessDotNet.MeshUtils/Vertex[]
struct VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// TriLibCore.AssetLoaderContext
struct AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C;
// TriLibCore.AssetLoaderOptions
struct AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Avatar
struct Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// LibTessDotNet.CombineCallback
struct CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300;
// LibTessDotNet.DefaultPool
struct DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04;
// System.Delegate
struct Delegate_t;
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
// TriLibCore.General.HumanDescription
struct HumanDescription_t0BD271EF43944EC6940A10C164E94F8C7E750481;
// TriLibCore.Mappers.HumanoidAvatarMapper
struct HumanoidAvatarMapper_t691E00A2CE4455F03562FF79A586CC717D38FB09;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// TriLibCore.Interfaces.IGeometryGroup
struct IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262;
// LibTessDotNet.IPool
struct IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90;
// TriLibCore.Interfaces.IRootModel
struct IRootModel_t83ED40397FD23448FC9A99336523CC7DE8A841BB;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// TriLibCore.Geometries.InterpolatedVertex
struct InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// LibTessDotNet.Mesh
struct Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// LibTessDotNet.NullPool
struct NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D;
// TriLibCore.ReaderBase
struct ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449;
// TriLibCore.Mappers.RootBoneMapper
struct RootBoneMapper_t64AE3E33364A832EE1B74D8B65BC9AA7B448DDA2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Collections.Stack
struct Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// LibTessDotNet.Tess
struct Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8;
// TriLibCore.Mappers.TextureMapper
struct TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD;
// TriLibCore.Mappers.UserPropertiesMapper
struct UserPropertiesMapper_t8437A569EBEB9E02E364D9951BE31F9601C55714;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// LibTessDotNet.MeshUtils/Edge
struct Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966;
// LibTessDotNet.MeshUtils/Face
struct Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF;
// LibTessDotNet.MeshUtils/Vertex
struct Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE;
// LibTessDotNet.Tess/ActiveRegion
struct ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t6BEF63CAF2876270955D9C01C95ACB9C5BF31B77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t90F8C812E092F9734B6A7427BE56A2EAD003F4DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral293D055F04D51798E7BDD8DFB0C6C9C093FD520C;
IL2CPP_EXTERN_C String_t* _stringLiteral82FF2E4A5CEA89085A6360163E86CB104CFC8CE8;
IL2CPP_EXTERN_C String_t* _stringLiteral946F20B48C46FF40D7455EDB50FE366C505B16E8;
IL2CPP_EXTERN_C String_t* _stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE43F3C9BFF18FB637B9A0C90F66040718CEC64;
IL2CPP_EXTERN_C String_t* _stringLiteralD195D0425B8FE98A04F1BE9F8F30B202B33C80ED;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_m041DCE0402C6174692C9D0B42435B0949B653BD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_m38215260A66093A9A304925A43E5F441471D2D9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_m43508E569160C2A3E7DA45E1F1D79E39FB284DA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_mACE98FC86076F9666446FDFABE8886B476CB355F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_mD0D7A1710066169ADDCAFEB0B216912C0DD413A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_mDA80429C65AA20C2F3DB6E607E3A74FB000D1E1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Find_mAF7B5CED2C433BD5E9EADDC6604B3A28BCE7CDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Init_mC013263B0E38EE41CC4C69C6788D088B8122D314_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_InsertBefore_m6E4EB99BCD65F825FE9F1D3FF6EA413B8A1A2390_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Insert_m76E76003906032D37BF3554CA41AAAFB38240615_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Min_m733D0E65ECF2770E0BBF7268E415BC20E49A0A84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Remove_m90AD4E7F57974AB8886C9391C251C694CD9644C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Reset_mB559CCC86C666641C6F1AA9ECB511EB5C8A1EE11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1__ctor_m2E30A50F7408565682813C3C28D87F024029AD42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_get_Empty_m207AA8B0DB8383A4989EC4F54E39794101E51A53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Geom_IsWindingInside_mAECD5C0CDC153F6036441D90EFB993F77C723793_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Helpers_CombineCallback_mC927BFD619A2BEE049E8668FF0119877F3F3262E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mC3881C0DB54C1395F2AA8B02B199660E7A13CF69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_m51643A8B0CFF1C5F247F180DE113F73632C86394_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m1D44A8B041AE4181C7B292F16B2DA3AF32201ADB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_mFA2E73AC4C38C33A3B82FFD67567F8B23126846D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mD253C242EE50DA3A963061B04B5C0F76174A7F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mCBF8A3BE3FE8D567704098C7CE31463CB659E7AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m4733E06FAEB4F5D2B4EC2F22283F60D11B61527B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisNode_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C_m6D1AC4BDFD384D826F3F3CB6451D6F086645B00E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m5CEFA21D8E4256C408CFD2BB3153FFE5533FA1AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m8FDF424BA7A561E9EFF73EC951469946B48EABAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_m0726CFC60490E8225FD007D18719FEC8C3D610F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mF7D72C6E358662F070DBD36C0B7C1BC61E8C145D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_mA46A3ED1C0EC36E0BCE452704A9A5820018D7D18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mCF5A50512654D7E0169573E26532B28C2E5E6FB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Init_mB8A3092D595F065F1DBD85FD3BBC2034DEFB35FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Minimum_mBB08F7A95861A7EE0B1797475861279AAAC0CD86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Remove_mCE983D6C8585217615CAF8DFEE8401A32DEA7BCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1__ctor_m75EE6938A947B7F5F22DCD1E25CFBA4E8936D5EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_get_Empty_mF4201FD267F6A18630FB7144FEEACDCE39D3DA0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_EdgeLeq_m91CF47985D9D5E386D03C685E54E650DA722307A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_InitPriorityQ_m63D067CB8781EC6E25D43FEFFDD0DC407E2875EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess__ctor_mB2C19DD684CEED784DAD77FAD79561ABF4CADDAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t72340EDEA801D6F0C644242E26AA4B29BD6E99CC 
{
};

// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.Dict`1/Node<LibTessDotNet.Tess/ActiveRegion>>
struct DefaultTypePool_1_t90F8C812E092F9734B6A7427BE56A2EAD003F4DF  : public RuntimeObject
{
	// System.Collections.Generic.Queue`1<T> LibTessDotNet.DefaultTypePool`1::_pool
	Queue_1_t7B0DEA3BB2D2D5298253C633DC862701EDB0E057* ____pool_0;
};

// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.Mesh>
struct DefaultTypePool_1_t6BEF63CAF2876270955D9C01C95ACB9C5BF31B77  : public RuntimeObject
{
	// System.Collections.Generic.Queue`1<T> LibTessDotNet.DefaultTypePool`1::_pool
	Queue_1_tB0F96AEE1D0C265E5DEC1DE4E1A416A32400AAEE* ____pool_0;
};

// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Edge>
struct DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC  : public RuntimeObject
{
	// System.Collections.Generic.Queue`1<T> LibTessDotNet.DefaultTypePool`1::_pool
	Queue_1_tD16569FEC985028AAF7AD07E944FCFFBE7567730* ____pool_0;
};

// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Face>
struct DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2  : public RuntimeObject
{
	// System.Collections.Generic.Queue`1<T> LibTessDotNet.DefaultTypePool`1::_pool
	Queue_1_t0EF83785A32509AFAD1DECBB79B203F1F8428FFC* ____pool_0;
};

// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Vertex>
struct DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797  : public RuntimeObject
{
	// System.Collections.Generic.Queue`1<T> LibTessDotNet.DefaultTypePool`1::_pool
	Queue_1_tFF89653FA4C031D1CC2D18DF7EE31A9F2DAD19FE* ____pool_0;
};

// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.Tess/ActiveRegion>
struct DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4  : public RuntimeObject
{
	// System.Collections.Generic.Queue`1<T> LibTessDotNet.DefaultTypePool`1::_pool
	Queue_1_t8C81B5CA8ECFD8367AB4A971F48B5EFEE7966102* ____pool_0;
};

// LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>
struct Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3  : public RuntimeObject
{
	// LibTessDotNet.IPool LibTessDotNet.Dict`1::_pool
	IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ____pool_0;
	// LibTessDotNet.Dict`1/LessOrEqual<TValue> LibTessDotNet.Dict`1::_leq
	LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6* ____leq_1;
	// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1::_head
	Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ____head_2;
};

// LibTessDotNet.Dict`1/Node<LibTessDotNet.Tess/ActiveRegion>
struct Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C  : public RuntimeObject
{
	// TValue LibTessDotNet.Dict`1/Node::_key
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ____key_0;
	// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1/Node::_prev
	Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ____prev_1;
	// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1/Node::_next
	Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ____next_2;
};

// LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>
struct PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29  : public RuntimeObject
{
	// LibTessDotNet.PriorityHeap`1/LessOrEqual<TValue> LibTessDotNet.PriorityQueue`1::_leq
	LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00* ____leq_0;
	// LibTessDotNet.PriorityHeap`1<TValue> LibTessDotNet.PriorityQueue`1::_heap
	PriorityHeap_1_t398DFD3BBC195F75DD5945E4AEC8492BE85E9112* ____heap_1;
	// TValue[] LibTessDotNet.PriorityQueue`1::_keys
	VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* ____keys_2;
	// System.Int32[] LibTessDotNet.PriorityQueue`1::_order
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____order_3;
	// System.Int32 LibTessDotNet.PriorityQueue`1::_size
	int32_t ____size_4;
	// System.Int32 LibTessDotNet.PriorityQueue`1::_max
	int32_t ____max_5;
	// System.Boolean LibTessDotNet.PriorityQueue`1::_initialized
	bool ____initialized_6;
};
struct Il2CppArrayBounds;

// LibTessDotNet.Geom
struct Geom_t2AECC4CF177AE64EA77403838222CB0163C19CA7  : public RuntimeObject
{
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

// LibTessDotNet.Helpers
struct Helpers_t35E1597B88B23DC3FD44DE5F738A81974D9F5D30  : public RuntimeObject
{
};

// LibTessDotNet.IPool
struct IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90  : public RuntimeObject
{
};

// LibTessDotNet.Mesh
struct Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3  : public RuntimeObject
{
	// LibTessDotNet.MeshUtils/Vertex LibTessDotNet.Mesh::_vHead
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ____vHead_0;
	// LibTessDotNet.MeshUtils/Face LibTessDotNet.Mesh::_fHead
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ____fHead_1;
	// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::_eHead
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eHead_2;
	// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::_eHeadSym
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eHeadSym_3;
};

// LibTessDotNet.MeshUtils
struct MeshUtils_t1C2AEE8E7D579C135509E319DA5D1651345F049A  : public RuntimeObject
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

// LibTessDotNet.MeshUtils/Face
struct Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF  : public RuntimeObject
{
	// LibTessDotNet.MeshUtils/Face LibTessDotNet.MeshUtils/Face::_prev
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ____prev_0;
	// LibTessDotNet.MeshUtils/Face LibTessDotNet.MeshUtils/Face::_next
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ____next_1;
	// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Face::_anEdge
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____anEdge_2;
	// LibTessDotNet.MeshUtils/Face LibTessDotNet.MeshUtils/Face::_trail
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ____trail_3;
	// System.Int32 LibTessDotNet.MeshUtils/Face::_n
	int32_t ____n_4;
	// System.Boolean LibTessDotNet.MeshUtils/Face::_marked
	bool ____marked_5;
	// System.Boolean LibTessDotNet.MeshUtils/Face::_inside
	bool ____inside_6;
};

// LibTessDotNet.Tess/ActiveRegion
struct ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47  : public RuntimeObject
{
	// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Tess/ActiveRegion::_eUp
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eUp_0;
	// LibTessDotNet.Dict`1/Node<LibTessDotNet.Tess/ActiveRegion> LibTessDotNet.Tess/ActiveRegion::_nodeUp
	Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ____nodeUp_1;
	// System.Int32 LibTessDotNet.Tess/ActiveRegion::_windingNumber
	int32_t ____windingNumber_2;
	// System.Boolean LibTessDotNet.Tess/ActiveRegion::_inside
	bool ____inside_3;
	// System.Boolean LibTessDotNet.Tess/ActiveRegion::_sentinel
	bool ____sentinel_4;
	// System.Boolean LibTessDotNet.Tess/ActiveRegion::_dirty
	bool ____dirty_5;
	// System.Boolean LibTessDotNet.Tess/ActiveRegion::_fixUpperEdge
	bool ____fixUpperEdge_6;
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

// LibTessDotNet.DefaultPool
struct DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04  : public IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90
{
	// System.Collections.Generic.IDictionary`2<System.Type,LibTessDotNet.ITypePool> LibTessDotNet.DefaultPool::_register
	RuntimeObject* ____register_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// LibTessDotNet.NullPool
struct NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D  : public IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90
{
};

// LibTessDotNet.PQHandle
struct PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 
{
	// System.Int32 LibTessDotNet.PQHandle::_handle
	int32_t ____handle_1;
};

struct PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_StaticFields
{
	// System.Int32 LibTessDotNet.PQHandle::Invalid
	int32_t ___Invalid_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

struct Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields
{
	// LibTessDotNet.Vec3 LibTessDotNet.Vec3::Zero
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___Zero_0;
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

// LibTessDotNet.MeshUtils/EdgePair
struct EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E 
{
	// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/EdgePair::_e
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____e_0;
	// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/EdgePair::_eSym
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eSym_1;
};
// Native definition for P/Invoke marshalling of LibTessDotNet.MeshUtils/EdgePair
struct EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_pinvoke
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____e_0;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eSym_1;
};
// Native definition for COM marshalling of LibTessDotNet.MeshUtils/EdgePair
struct EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_com
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____e_0;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eSym_1;
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

// LibTessDotNet.Tess
struct Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8  : public RuntimeObject
{
	// LibTessDotNet.IPool LibTessDotNet.Tess::_pool
	IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ____pool_0;
	// LibTessDotNet.Mesh LibTessDotNet.Tess::_mesh
	Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* ____mesh_1;
	// LibTessDotNet.Vec3 LibTessDotNet.Tess::_normal
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ____normal_2;
	// LibTessDotNet.Vec3 LibTessDotNet.Tess::_sUnit
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ____sUnit_3;
	// LibTessDotNet.Vec3 LibTessDotNet.Tess::_tUnit
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ____tUnit_4;
	// System.Single LibTessDotNet.Tess::_bminX
	float ____bminX_5;
	// System.Single LibTessDotNet.Tess::_bminY
	float ____bminY_6;
	// System.Single LibTessDotNet.Tess::_bmaxX
	float ____bmaxX_7;
	// System.Single LibTessDotNet.Tess::_bmaxY
	float ____bmaxY_8;
	// LibTessDotNet.WindingRule LibTessDotNet.Tess::_windingRule
	int32_t ____windingRule_9;
	// LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion> LibTessDotNet.Tess::_dict
	Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* ____dict_10;
	// LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex> LibTessDotNet.Tess::_pq
	PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* ____pq_11;
	// LibTessDotNet.MeshUtils/Vertex LibTessDotNet.Tess::_event
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ____event_12;
	// LibTessDotNet.CombineCallback LibTessDotNet.Tess::_combineCallback
	CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* ____combineCallback_13;
	// LibTessDotNet.ContourVertex[] LibTessDotNet.Tess::_vertices
	ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* ____vertices_14;
	// System.Int32 LibTessDotNet.Tess::_vertexCount
	int32_t ____vertexCount_15;
	// System.Int32[] LibTessDotNet.Tess::_elements
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____elements_16;
	// System.Int32 LibTessDotNet.Tess::_elementCount
	int32_t ____elementCount_17;
	// System.Single LibTessDotNet.Tess::SUnitX
	float ___SUnitX_19;
	// System.Single LibTessDotNet.Tess::SUnitY
	float ___SUnitY_20;
	// System.Single LibTessDotNet.Tess::SentinelCoord
	float ___SentinelCoord_21;
	// System.Boolean LibTessDotNet.Tess::NoEmptyPolygons
	bool ___NoEmptyPolygons_22;
};

// LibTessDotNet.MeshUtils/Edge
struct Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966  : public RuntimeObject
{
	// LibTessDotNet.MeshUtils/EdgePair LibTessDotNet.MeshUtils/Edge::_pair
	EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E ____pair_0;
	// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::_next
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____next_1;
	// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::_Sym
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____Sym_2;
	// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::_Onext
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____Onext_3;
	// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::_Lnext
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____Lnext_4;
	// LibTessDotNet.MeshUtils/Vertex LibTessDotNet.MeshUtils/Edge::_Org
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ____Org_5;
	// LibTessDotNet.MeshUtils/Face LibTessDotNet.MeshUtils/Edge::_Lface
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ____Lface_6;
	// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.MeshUtils/Edge::_activeRegion
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ____activeRegion_7;
	// System.Int32 LibTessDotNet.MeshUtils/Edge::_winding
	int32_t ____winding_8;
};

// LibTessDotNet.MeshUtils/Vertex
struct Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE  : public RuntimeObject
{
	// LibTessDotNet.MeshUtils/Vertex LibTessDotNet.MeshUtils/Vertex::_prev
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ____prev_0;
	// LibTessDotNet.MeshUtils/Vertex LibTessDotNet.MeshUtils/Vertex::_next
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ____next_1;
	// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Vertex::_anEdge
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____anEdge_2;
	// LibTessDotNet.Vec3 LibTessDotNet.MeshUtils/Vertex::_coords
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ____coords_3;
	// System.Single LibTessDotNet.MeshUtils/Vertex::_s
	float ____s_4;
	// System.Single LibTessDotNet.MeshUtils/Vertex::_t
	float ____t_5;
	// LibTessDotNet.PQHandle LibTessDotNet.MeshUtils/Vertex::_pqHandle
	PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 ____pqHandle_6;
	// System.Int32 LibTessDotNet.MeshUtils/Vertex::_n
	int32_t ____n_7;
	// System.Object LibTessDotNet.MeshUtils/Vertex::_data
	RuntimeObject* ____data_8;
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

// LibTessDotNet.PriorityHeap`1/LessOrEqual<LibTessDotNet.MeshUtils/Vertex>
struct LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00  : public MulticastDelegate_t
{
};

// LibTessDotNet.Dict`1/LessOrEqual<LibTessDotNet.Tess/ActiveRegion>
struct LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6  : public MulticastDelegate_t
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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// LibTessDotNet.CombineCallback
struct CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300  : public MulticastDelegate_t
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// LibTessDotNet.MeshUtils/Vertex[]
struct VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362  : public RuntimeArray
{
	ALIGN_FIELD (8) Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* m_Items[1];

	inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// System.Void LibTessDotNet.DefaultTypePool`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypePool_1__ctor_mE6C73DA3C09AE80A82DBAC13B58687BAC64F3BF0_gshared (DefaultTypePool_1_t21660DBAD98411D7DAB65F258E9433630904C28C* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Dict`1<System.Object>::Remove(LibTessDotNet.Dict`1/Node<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dict_1_Remove_m1ECF60568C517A776F7601E3FC80096503B38B24_gshared (Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971* __this, Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* ___node0, const RuntimeMethod* method) ;
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<System.Object>::InsertBefore(LibTessDotNet.Dict`1/Node<TValue>,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* Dict_1_InsertBefore_mC0A504DA48ED4EDE834676C75F5B374B8F871E72_gshared (Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971* __this, Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* ___node0, RuntimeObject* ___key1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.PriorityQueue`1<System.Object>::Remove(LibTessDotNet.PQHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1_Remove_m200379F3FF5FAA8F71A8883350DB734E1B79877D_gshared (PriorityQueue_1_t42E30E5548EA5BB6D15DE0703FBDDD4E46A7B60F* __this, PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 ___handle0, const RuntimeMethod* method) ;
// LibTessDotNet.PQHandle LibTessDotNet.PriorityQueue`1<System.Object>::Insert(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 PriorityQueue_1_Insert_mE16B478F9ECD296053127A29F40B879A7C319D7B_gshared (PriorityQueue_1_t42E30E5548EA5BB6D15DE0703FBDDD4E46A7B60F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<System.Object>::Find(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* Dict_1_Find_m20EA586631ADA2B67D42BAC427E0362364B6FCC8_gshared (Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue LibTessDotNet.Dict`1/Node<System.Object>::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_get_Key_m7C2669092F4A0E59D5F38ADC148ADC476A3B15EE_gshared (Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* __this, const RuntimeMethod* method) ;
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<System.Object>::Insert(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* Dict_1_Insert_m8B82DB58FA4552C4915EF5A9A98DFD1DBE942FD8_gshared (Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Dict`1/LessOrEqual<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessOrEqual__ctor_m8C2D651B99415D1A29A1DF26A61FDC854060FE62_gshared (LessOrEqual_tD5C2576F19D2F54AAE5769D424704F1378625EF0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Dict`1<System.Object>::.ctor(LibTessDotNet.IPool,LibTessDotNet.Dict`1/LessOrEqual<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dict_1__ctor_m012B7BE63FC422B7B8A56B2E1799052D80E725CE_gshared (Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, LessOrEqual_tD5C2576F19D2F54AAE5769D424704F1378625EF0* ___leq1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Dict`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dict_1_Init_m2443237CC7C950C96CF66EBEE833B6950BA6E9E8_gshared (Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971* __this, const RuntimeMethod* method) ;
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<System.Object>::Min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* Dict_1_Min_m9C4C6411D4A1EAE059F73DF889310FE968EE6536_gshared (Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971* __this, const RuntimeMethod* method) ;
// System.Boolean LibTessDotNet.Dict`1<System.Object>::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dict_1_get_Empty_m603B77532F60E4DD76F45729E085D1C97D3E420E_gshared (Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Dict`1<System.Object>::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dict_1_Reset_mFB1636B5F2B071F0FE549F466E005014015F7476_gshared (Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.PriorityHeap`1/LessOrEqual<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessOrEqual__ctor_mD0C7C7B0CAA7E57BE551C37CD673590934FD7462_gshared (LessOrEqual_tACCF8A4A6BCA3EF8A2CF760C7F6FF7EFDF874918* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.PriorityQueue`1<System.Object>::.ctor(System.Int32,LibTessDotNet.PriorityHeap`1/LessOrEqual<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1__ctor_mE971438DA807EB747612C28B18E91E2C3997FFDA_gshared (PriorityQueue_1_t42E30E5548EA5BB6D15DE0703FBDDD4E46A7B60F* __this, int32_t ___initialSize0, LessOrEqual_tACCF8A4A6BCA3EF8A2CF760C7F6FF7EFDF874918* ___leq1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.PriorityQueue`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1_Init_mD3AB01D87573BC810FF540F1FD7D0D7890C21D2D_gshared (PriorityQueue_1_t42E30E5548EA5BB6D15DE0703FBDDD4E46A7B60F* __this, const RuntimeMethod* method) ;
// System.Boolean LibTessDotNet.PriorityQueue`1<System.Object>::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PriorityQueue_1_get_Empty_mC52AD72EC09F793C7C5B92E009D3F70ED75F4D63_gshared (PriorityQueue_1_t42E30E5548EA5BB6D15DE0703FBDDD4E46A7B60F* __this, const RuntimeMethod* method) ;
// TValue LibTessDotNet.PriorityQueue`1<System.Object>::Minimum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PriorityQueue_1_Minimum_mC5489757AE11BE9308F890B98F117EB2E894ED35_gshared (PriorityQueue_1_t42E30E5548EA5BB6D15DE0703FBDDD4E46A7B60F* __this, const RuntimeMethod* method) ;
// TValue LibTessDotNet.PriorityQueue`1<System.Object>::ExtractMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PriorityQueue_1_ExtractMin_m89E64C99B02E621CD929E60183C36C0E8866E75E_gshared (PriorityQueue_1_t42E30E5548EA5BB6D15DE0703FBDDD4E46A7B60F* __this, const RuntimeMethod* method) ;

// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean LibTessDotNet.Geom::VertLeq(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___lhs0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F (bool ___condition0, const RuntimeMethod* method) ;
// System.Boolean LibTessDotNet.Geom::TransLeq(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___lhs0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___rhs1, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Vertex LibTessDotNet.MeshUtils/Edge::get__Dst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Geom::Swap(LibTessDotNet.MeshUtils/Vertex&,LibTessDotNet.MeshUtils/Vertex&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** ___a0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** ___b1, const RuntimeMethod* method) ;
// System.Single LibTessDotNet.Geom::EdgeEval(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeEval_mBAA4526E696D91195D0824B9CD891AED17EB6B8F (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___w2, const RuntimeMethod* method) ;
// System.Single LibTessDotNet.Geom::Interpolate(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_Interpolate_m89F4E6101F8FA1D2993DA83CCDB860F571BAF1DF (float ___a0, float ___x1, float ___b2, float ___y3, const RuntimeMethod* method) ;
// System.Single LibTessDotNet.Geom::EdgeSign(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___w2, const RuntimeMethod* method) ;
// System.Single LibTessDotNet.Geom::TransEval(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransEval_mEA3BB959E68DCEBF3010130A22D37B669C03BA5B (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___w2, const RuntimeMethod* method) ;
// System.Single LibTessDotNet.Geom::TransSign(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransSign_m99C6BDBF9001C7DA783B291AA09273B75099E1AA (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___w2, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess__ctor_m9C50EAA56E0DBFFB1B779D0A921ECA9C7984E7A2 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::AddContour(System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>,LibTessDotNet.ContourOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContour_m8EDE4A726EAE9475970B07B9ABA4D7F0F8D1674E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, RuntimeObject* ___vertices0, int32_t ___forceOrientation1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.CombineCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineCallback__ctor_m4C08DD9F36BCA4F132C1AE0D7A6FAA7540EC1C47 (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::Tessellate(LibTessDotNet.WindingRule,LibTessDotNet.ElementType,System.Int32,LibTessDotNet.CombineCallback,LibTessDotNet.Vec3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_Tessellate_m1A288974947B0D69A8FC26556C151259C8C8418E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, int32_t ___windingRule0, int32_t ___elementType1, int32_t ___polySize2, CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* ___combineCallback3, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___normal4, const RuntimeMethod* method) ;
// LibTessDotNet.ContourVertex[] LibTessDotNet.Tess::get_Vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* Tess_get_Vertices_mDBE386129B4DF1C7D1F16A937D2D47FFF3567E45 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Int32[] LibTessDotNet.Tess::get_Elements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Tess_get_Elements_mED221BAB8BAAAC0EA4160C2C5DA5E38803883D7B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.FlexibleVertexDataUtils::BuildAndAddFlexibleVertexData(TriLibCore.Interfaces.IGeometryGroup,TriLibCore.AssetLoaderContext,System.Int32,TriLibCore.Geometries.Geometry,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector4,UnityEngine.Color,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.BoneWeight)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleVertexDataUtils_BuildAndAddFlexibleVertexData_mC35367A0F41EE78D0D41CB73484C229156CC532F (RuntimeObject* ___geometryGroup0, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext1, int32_t ___vertexIndex2, Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147* ___geometry3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal5, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent6, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv08, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv19, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv210, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv311, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F ___boneWeight12, const RuntimeMethod* method) ;
// System.Int32 LibTessDotNet.Tess::get_ElementCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_get_ElementCount_m1D5AF4E9A9295BA0D57AA883D2C226D32C154E3F (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(System.Single,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m59B8215B9A49709B9D299317ECB152C316625559_inline (float ___d0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Addition(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Multiply(System.Single,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m8503E764714E7AEF4E3CCBFDB1E09C930E87EFE4_inline (float ___b0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Addition(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline (float ___d0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.InterpolatedVertex::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpolatedVertex__ctor_mA3F5FBB1EACDDB0F2B33E893A45FB89113C6787C (InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.InterpolatedVertex::SetNormal(UnityEngine.Vector3,TriLibCore.Interfaces.IGeometryGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpolatedVertex_SetNormal_m48EE21D1CFF1D80F3EAAD2689ABEE84102882ADC (InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, RuntimeObject* ___geometryGroup1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.InterpolatedVertex::SetTangent(UnityEngine.Vector4,TriLibCore.Interfaces.IGeometryGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpolatedVertex_SetTangent_m97C9F7E0484643FA4AAAD6A44EC431D2D3439F40 (InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value0, RuntimeObject* ___geometryGroup1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.InterpolatedVertex::SetColor(UnityEngine.Color,TriLibCore.Interfaces.IGeometryGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpolatedVertex_SetColor_m01F89204D2B248BE23E94620AE338F73D8C90AE5 (InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, RuntimeObject* ___geometryGroup1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.InterpolatedVertex::SetUV1(UnityEngine.Vector2,TriLibCore.Interfaces.IGeometryGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpolatedVertex_SetUV1_mA7C291101768A0EE2734CD2589D815DCC2454551 (InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, RuntimeObject* ___geometryGroup1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.InterpolatedVertex::SetUV2(UnityEngine.Vector2,TriLibCore.Interfaces.IGeometryGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpolatedVertex_SetUV2_mAA75BB47566D748099C17B576C40B5DACC07EB7C (InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, RuntimeObject* ___geometryGroup1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.InterpolatedVertex::SetUV3(UnityEngine.Vector2,TriLibCore.Interfaces.IGeometryGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpolatedVertex_SetUV3_mA64C7465897174C7C650D3E11FDC8DF8C5F841CE (InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, RuntimeObject* ___geometryGroup1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.InterpolatedVertex::SetUV4(UnityEngine.Vector2,TriLibCore.Interfaces.IGeometryGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpolatedVertex_SetUV4_m1A25BD25812CDDE554477D1F791463AFF52E0A24 (InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, RuntimeObject* ___geometryGroup1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.InterpolatedVertex::SetVertexIndex(System.Int32,TriLibCore.Interfaces.IGeometryGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpolatedVertex_SetVertexIndex_m2A869CDAB00AC12BBDC88DADB3C2273D46D6345B (InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* __this, int32_t ___value0, RuntimeObject* ___geometryGroup1, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/EdgePair LibTessDotNet.MeshUtils/EdgePair::Create(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E EdgePair_Create_m7196DB2612DDC69F4AF9EE133D20846B86A4E69F (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils::MakeEdge(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* MeshUtils_MakeEdge_m1FBC01F73703AF9899163059E14810E5B54033CB (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eNext1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.MeshUtils::MakeVertex(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeVertex_m0E16EF166956CA6D7DEE0C0C541DD90F9B0F3BAC (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrig1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___vNext2, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.MeshUtils::MakeFace(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeFace_mE0EED973273FBA225485B9D39397577ED118E578 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrig1, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___fNext2, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.MeshUtils::KillVertex(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillVertex_m1CAF836C0795C6B7AE8785EC8667DB16BC3C83AF (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___vDel1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___newOrg2, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.MeshUtils::KillFace(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Face,LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillFace_m75741DEEB1047F98DB2077A37F0C4FAEFDBEB3FD (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___fDel1, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___newLFace2, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.MeshUtils::Splice(LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___a0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___b1, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Face LibTessDotNet.MeshUtils/Edge::get__Rface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Oprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.MeshUtils::KillEdge(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillEdge_mE2132C4410E6FCC3090942C9E37A525B7873F0F1 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eDel1, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::AddEdgeVertex(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_AddEdgeVertex_mBC2ECB3C7B23CEC78EB69BF83E3E49D215676054 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrg1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.MeshUtils/Edge::set__Dst(LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dst_mFC8AB632C1CBED66AC767230468FC1E30DB1682E (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___value0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.MeshUtils/Edge::set__Rface(LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rface_m9A4FEC09331777DF1DC569EE7C8759B96CBD7FBF (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___value0, const RuntimeMethod* method) ;
// System.Int32 LibTessDotNet.MeshUtils/Face::get_VertsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Face_get_VertsCount_m0EB6E9229787A15369C28423410F895E7F211AC0 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* __this, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Lprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
// System.Boolean LibTessDotNet.Geom::VertCCW(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertCCW_m3C73C97020D8B1930F6299B1539CBE4E9962ACF3 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___w2, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Mesh::Delete(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eDel1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, const RuntimeMethod* method) ;
// System.Single LibTessDotNet.Vec3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Vec3::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Vec3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3__ctor_m937D1DD303AF7D61662A455E5F208BDB81106B7C (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String LibTessDotNet.Vec3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vec3_ToString_mA4CE6161CB8D3BC075B3E5D9B94AAFABCB0B2878 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.DefaultTypePool`1<LibTessDotNet.Mesh>::.ctor()
inline void DefaultTypePool_1__ctor_m041DCE0402C6174692C9D0B42435B0949B653BD0 (DefaultTypePool_1_t6BEF63CAF2876270955D9C01C95ACB9C5BF31B77* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t6BEF63CAF2876270955D9C01C95ACB9C5BF31B77*, const RuntimeMethod*))DefaultTypePool_1__ctor_mE6C73DA3C09AE80A82DBAC13B58687BAC64F3BF0_gshared)(__this, method);
}
// System.Void LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Vertex>::.ctor()
inline void DefaultTypePool_1__ctor_m43508E569160C2A3E7DA45E1F1D79E39FB284DA4 (DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797*, const RuntimeMethod*))DefaultTypePool_1__ctor_mE6C73DA3C09AE80A82DBAC13B58687BAC64F3BF0_gshared)(__this, method);
}
// System.Void LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Face>::.ctor()
inline void DefaultTypePool_1__ctor_mD0D7A1710066169ADDCAFEB0B216912C0DD413A5 (DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2*, const RuntimeMethod*))DefaultTypePool_1__ctor_mE6C73DA3C09AE80A82DBAC13B58687BAC64F3BF0_gshared)(__this, method);
}
// System.Void LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Edge>::.ctor()
inline void DefaultTypePool_1__ctor_mACE98FC86076F9666446FDFABE8886B476CB355F (DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC*, const RuntimeMethod*))DefaultTypePool_1__ctor_mE6C73DA3C09AE80A82DBAC13B58687BAC64F3BF0_gshared)(__this, method);
}
// System.Void LibTessDotNet.DefaultTypePool`1<LibTessDotNet.Tess/ActiveRegion>::.ctor()
inline void DefaultTypePool_1__ctor_mDA80429C65AA20C2F3DB6E607E3A74FB000D1E1F (DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4*, const RuntimeMethod*))DefaultTypePool_1__ctor_mE6C73DA3C09AE80A82DBAC13B58687BAC64F3BF0_gshared)(__this, method);
}
// System.Void LibTessDotNet.DefaultTypePool`1<LibTessDotNet.Dict`1/Node<LibTessDotNet.Tess/ActiveRegion>>::.ctor()
inline void DefaultTypePool_1__ctor_m38215260A66093A9A304925A43E5F441471D2D9C (DefaultTypePool_1_t90F8C812E092F9734B6A7427BE56A2EAD003F4DF* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t90F8C812E092F9734B6A7427BE56A2EAD003F4DF*, const RuntimeMethod*))DefaultTypePool_1__ctor_mE6C73DA3C09AE80A82DBAC13B58687BAC64F3BF0_gshared)(__this, method);
}
// System.Void LibTessDotNet.IPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPool__ctor_m29B732D498A77485F01CFD88F4572DF3E3C57F41 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.MeshUtils/Edge::EnsureFirst(LibTessDotNet.MeshUtils/Edge&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_EnsureFirst_m7EB3B9E1FC30A3F92AE831142E9FB11DBACF3788 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** ___e0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.MeshUtils/EdgePair::Reset(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgePair_Reset_mE735EE154A3C3F31761F1094EA0A5F0BC6072482 (EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Rprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>::Remove(LibTessDotNet.Dict`1/Node<TValue>)
inline void Dict_1_Remove_m90AD4E7F57974AB8886C9391C251C694CD9644C9 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ___node0, const RuntimeMethod* method)
{
	((  void (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C*, const RuntimeMethod*))Dict_1_Remove_m1ECF60568C517A776F7601E3FC80096503B38B24_gshared)(__this, ___node0, method);
}
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::RegionAbove(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) ;
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::RegionBelow(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::Connect(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrg1, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eDst2, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::FixUpperEdge(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FixUpperEdge_m1E4236D65D3FB0321FA1FB71BAE30806B18D889B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___newEdge1, const RuntimeMethod* method) ;
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>::InsertBefore(LibTessDotNet.Dict`1/Node<TValue>,TValue)
inline Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* Dict_1_InsertBefore_m6E4EB99BCD65F825FE9F1D3FF6EA413B8A1A2390 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ___node0, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___key1, const RuntimeMethod* method)
{
	return ((  Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C*, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*, const RuntimeMethod*))Dict_1_InsertBefore_mC0A504DA48ED4EDE834676C75F5B374B8F871E72_gshared)(__this, ___node0, ___key1, method);
}
// System.Boolean LibTessDotNet.Geom::IsWindingInside(LibTessDotNet.WindingRule,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_IsWindingInside_mAECD5C0CDC153F6036441D90EFB993F77C723793 (int32_t ___rule0, int32_t ___n1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::DeleteRegion(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::FinishRegion(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FinishRegion_m57A9A719924F3022E03232E2E94228DF7CB5E787 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Mesh::Splice(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrg1, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eDst2, const RuntimeMethod* method) ;
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::AddRegionBelow(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_AddRegionBelow_m0275D421E35EBBEFF2546E2DDEFBBB1061EC700D (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regAbove0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eNewUp1, const RuntimeMethod* method) ;
// System.Boolean LibTessDotNet.Tess::CheckForRightSplice(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForRightSplice_m73E6E5E3B926500479750597286CAEAA603E4F58 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Geom::AddWinding(LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_AddWinding_m6EF7D9E71F27FA2029D3464EBF2828972B0D9A0B (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eDst0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eSrc1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::WalkDirtyRegions(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_WalkDirtyRegions_m5988A5D583346F08BC85EADEEF4D527752099025 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, const RuntimeMethod* method) ;
// System.Single LibTessDotNet.Geom::VertL1dist(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_VertL1dist_mAC0CFD4F9DB8AAE3089193AE779B7A5FE509467B (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::VertexWeights(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_VertexWeights_mF6D88112E28CC0EA4628811DCE8F19EEDAC3D66E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___isect0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___org1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___dst2, float* ___w03, float* ___w14, const RuntimeMethod* method) ;
// System.Object LibTessDotNet.CombineCallback::Invoke(LibTessDotNet.Vec3,System.Object[],System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CombineCallback_Invoke_m567FA415136EB70CAA4B9E3B8D1F5A133EBAD5B3_inline (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method) ;
// System.Boolean LibTessDotNet.Geom::VertEq(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___lhs0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___rhs1, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::SplitEdge(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrg1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>::Remove(LibTessDotNet.PQHandle)
inline void PriorityQueue_1_Remove_mCE983D6C8585217615CAF8DFEE8401A32DEA7BCA (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 ___handle0, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043, const RuntimeMethod*))PriorityQueue_1_Remove_m200379F3FF5FAA8F71A8883350DB734E1B79877D_gshared)(__this, ___handle0, method);
}
// System.Void LibTessDotNet.Tess::SpliceMergeVertices(LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SpliceMergeVertices_m3C1B73AB8A2F388421982B310359B74FE1F73290 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___e10, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___e21, const RuntimeMethod* method) ;
// System.Single System.Math::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mE913811A2F7566294BF4649A434282634E7254B3 (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Geom::EdgeIntersect(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_EdgeIntersect_mEC7935EED47854721B3A81E27749CA3A7F4736D3 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___o10, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___d11, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___o22, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___d23, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v4, const RuntimeMethod* method) ;
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::TopLeftRegion(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_TopLeftRegion_m2FA0AA199DAE05530C04BFFE790A3CB8C83C7F86 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Tess::FinishLeftRegions(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regFirst0, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regLast1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::AddRightEdges(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eFirst1, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eLast2, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eTopLeft3, bool ___cleanUp4, const RuntimeMethod* method) ;
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::TopRightRegion(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_TopRightRegion_m4D715D95F08BD411FFABF59F4DB4FBD0EDC2E1E7 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) ;
// LibTessDotNet.PQHandle LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>::Insert(TValue)
inline PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___value0, const RuntimeMethod* method)
{
	return ((  PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*, const RuntimeMethod*))PriorityQueue_1_Insert_mE16B478F9ECD296053127A29F40B879A7C319D7B_gshared)(__this, ___value0, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::GetIntersectData(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_GetIntersectData_m1EF3ED6C6834CACC2C20DD246F414D854BBFF6CE (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___isect0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___orgUp1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___dstUp2, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___orgLo3, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___dstLo4, const RuntimeMethod* method) ;
// System.Boolean LibTessDotNet.Tess::CheckForLeftSplice(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForLeftSplice_m925CF548154D6A922CEDDDEE3B1662F409D874C2 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, const RuntimeMethod* method) ;
// System.Boolean LibTessDotNet.Tess::CheckForIntersect(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::SweepEvent(LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SweepEvent_mFF232770963565BD3D3DE22E97A67DCA3E749FED (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___vEvent0, const RuntimeMethod* method) ;
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>::Find(TValue)
inline Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* Dict_1_Find_mAF7B5CED2C433BD5E9EADDC6604B3A28BCE7CDB4 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___key0, const RuntimeMethod* method)
{
	return ((  Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*, const RuntimeMethod*))Dict_1_Find_m20EA586631ADA2B67D42BAC427E0362364B6FCC8_gshared)(__this, ___key0, method);
}
// TValue LibTessDotNet.Dict`1/Node<LibTessDotNet.Tess/ActiveRegion>::get_Key()
inline ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D (Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* __this, const RuntimeMethod* method)
{
	return ((  ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* (*) (Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C*, const RuntimeMethod*))Node_get_Key_m7C2669092F4A0E59D5F38ADC148ADC476A3B15EE_gshared)(__this, method);
}
// System.Void LibTessDotNet.Tess::ConnectLeftDegenerate(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___vEvent1, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Dnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Dnext_m7E374925C354672842CF18197905942EA76DD7E7 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::ComputeWinding(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeWinding_m08BB6BDD14F5FD6820052F3833AE916DB6D05B50 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::ConnectLeftVertex(LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftVertex_m7F52A092CDE293862BE3773D7ABA7BF7C6A3121B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___vEvent0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::ConnectRightVertex(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectRightVertex_m014FFD2EC782394218F750F2EA57A40F05E133C6 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eBottomLeft1, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::MakeEdge(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_MakeEdge_m885B759356861633DA4414A5DE88F5FDB0E8B8E7 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) ;
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>::Insert(TValue)
inline Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* Dict_1_Insert_m76E76003906032D37BF3554CA41AAAFB38240615 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___key0, const RuntimeMethod* method)
{
	return ((  Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*, const RuntimeMethod*))Dict_1_Insert_m8B82DB58FA4552C4915EF5A9A98DFD1DBE942FD8_gshared)(__this, ___key0, method);
}
// System.Void LibTessDotNet.Dict`1/LessOrEqual<LibTessDotNet.Tess/ActiveRegion>::.ctor(System.Object,System.IntPtr)
inline void LessOrEqual__ctor_m6556B77F3E07A00B7AFD15AD07B0EF86306BFF0C (LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6*, RuntimeObject*, intptr_t, const RuntimeMethod*))LessOrEqual__ctor_m8C2D651B99415D1A29A1DF26A61FDC854060FE62_gshared)(__this, ___object0, ___method1, method);
}
// System.Void LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>::.ctor(LibTessDotNet.IPool,LibTessDotNet.Dict`1/LessOrEqual<TValue>)
inline void Dict_1__ctor_m2E30A50F7408565682813C3C28D87F024029AD42 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6* ___leq1, const RuntimeMethod* method)
{
	((  void (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90*, LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6*, const RuntimeMethod*))Dict_1__ctor_m012B7BE63FC422B7B8A56B2E1799052D80E725CE_gshared)(__this, ___pool0, ___leq1, method);
}
// System.Void LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>::Init()
inline void Dict_1_Init_mC013263B0E38EE41CC4C69C6788D088B8122D314 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, const RuntimeMethod*))Dict_1_Init_m2443237CC7C950C96CF66EBEE833B6950BA6E9E8_gshared)(__this, method);
}
// System.Void LibTessDotNet.Tess::AddSentinel(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddSentinel_m88FB52E7CF92ECB9C1FF491E64B3CC5E076413D3 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, float ___smin0, float ___smax1, float ___t2, const RuntimeMethod* method) ;
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>::Min()
inline Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* Dict_1_Min_m733D0E65ECF2770E0BBF7268E415BC20E49A0A84 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, const RuntimeMethod* method)
{
	return ((  Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, const RuntimeMethod*))Dict_1_Min_m9C4C6411D4A1EAE059F73DF889310FE968EE6536_gshared)(__this, method);
}
// System.Boolean LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>::get_Empty()
inline bool Dict_1_get_Empty_m207AA8B0DB8383A4989EC4F54E39794101E51A53 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, const RuntimeMethod*))Dict_1_get_Empty_m603B77532F60E4DD76F45729E085D1C97D3E420E_gshared)(__this, method);
}
// System.Void LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>::Reset()
inline void Dict_1_Reset_mB559CCC86C666641C6F1AA9ECB511EB5C8A1EE11 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, const RuntimeMethod*))Dict_1_Reset_mFB1636B5F2B071F0FE549F466E005014015F7476_gshared)(__this, method);
}
// System.Void LibTessDotNet.PriorityHeap`1/LessOrEqual<LibTessDotNet.MeshUtils/Vertex>::.ctor(System.Object,System.IntPtr)
inline void LessOrEqual__ctor_m354C7C326099DA31A5715796F9CCA76DE5067731 (LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00*, RuntimeObject*, intptr_t, const RuntimeMethod*))LessOrEqual__ctor_mD0C7C7B0CAA7E57BE551C37CD673590934FD7462_gshared)(__this, ___object0, ___method1, method);
}
// System.Void LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>::.ctor(System.Int32,LibTessDotNet.PriorityHeap`1/LessOrEqual<TValue>)
inline void PriorityQueue_1__ctor_m75EE6938A947B7F5F22DCD1E25CFBA4E8936D5EF (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, int32_t ___initialSize0, LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00* ___leq1, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, int32_t, LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00*, const RuntimeMethod*))PriorityQueue_1__ctor_mE971438DA807EB747612C28B18E91E2C3997FFDA_gshared)(__this, ___initialSize0, ___leq1, method);
}
// System.Void LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>::Init()
inline void PriorityQueue_1_Init_mB8A3092D595F065F1DBD85FD3BBC2034DEFB35FF (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, const RuntimeMethod*))PriorityQueue_1_Init_mD3AB01D87573BC810FF540F1FD7D0D7890C21D2D_gshared)(__this, method);
}
// System.Boolean LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>::get_Empty()
inline bool PriorityQueue_1_get_Empty_mF4201FD267F6A18630FB7144FEEACDCE39D3DA0A (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, const RuntimeMethod*))PriorityQueue_1_get_Empty_mC52AD72EC09F793C7C5B92E009D3F70ED75F4D63_gshared)(__this, method);
}
// System.Void LibTessDotNet.Tess::RemoveDegenerateEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateEdges_m6F88AF680A0B3E2FF9A8E274FF475C1EDDF025CC (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::InitPriorityQ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitPriorityQ_m63D067CB8781EC6E25D43FEFFDD0DC407E2875EA (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::RemoveDegenerateFaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateFaces_m48F4E1549170751BB553A45C7BB4E54351E15BB4 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::InitEdgeDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitEdgeDict_mEB38032A27EBED333E70337D99F8E0AC09C131A8 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// TValue LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>::Minimum()
inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* PriorityQueue_1_Minimum_mBB08F7A95861A7EE0B1797475861279AAAC0CD86 (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, const RuntimeMethod* method)
{
	return ((  Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, const RuntimeMethod*))PriorityQueue_1_Minimum_mC5489757AE11BE9308F890B98F117EB2E894ED35_gshared)(__this, method);
}
// TValue LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>::ExtractMin()
inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330 (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, const RuntimeMethod* method)
{
	return ((  Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, const RuntimeMethod*))PriorityQueue_1_ExtractMin_m89E64C99B02E621CD929E60183C36C0E8866E75E_gshared)(__this, method);
}
// System.Void LibTessDotNet.Tess::DoneEdgeDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DoneEdgeDict_m35196774C9960C4A2D2ACCD938DB0453C43B9C9E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::DonePriorityQ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DonePriorityQ_m34351749D862BF10E730498E5ED9D502CE00D784 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Mesh::Check()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Check_m60A4227D366A3F601EC5B8D95D672862D9BC8146 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.DefaultPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPool__ctor_m8D4477214AEE206E11961F64854E616FD3530CFD (DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::.ctor(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess__ctor_mB2C19DD684CEED784DAD77FAD79561ABF4CADDAE (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Vec3::Sub(LibTessDotNet.Vec3&,LibTessDotNet.Vec3&,LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Sub_mFA0434EA3AC2F8C1A173BF40E85FCF41120FB008 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___lhs0, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___rhs1, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___result2, const RuntimeMethod* method) ;
// System.Int32 LibTessDotNet.Vec3::LongAxis(LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vec3_LongAxis_mE37BAB8C067EE68DBA8BC23061B6A0F1F175645F (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___v0, const RuntimeMethod* method) ;
// System.Single LibTessDotNet.MeshUtils::FaceArea(LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshUtils_FaceArea_mDE166ED484B8CF884C0846D250D75774E1EBA859 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___f0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Vec3::Neg(LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Neg_m615687EA76621EE708A5F7836B33DF54DC67E58C (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___v0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::ComputeNormal(LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeNormal_m1DB2CFB644D7D35AA0F4495759B28458EA3A6907 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___norm0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Vec3::Dot(LibTessDotNet.Vec3&,LibTessDotNet.Vec3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Dot_m6A3064B83CC6528E85FEB9E6F8D62699AFCE3E65 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___u0, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___v1, float* ___dot2, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::CheckOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_CheckOrientation_m78C0B1CA1B88D946FDA7CC447C44BA91BFFAF469 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Boolean LibTessDotNet.Geom::EdgeGoesLeft(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesLeft_mB470DCF8C4FD679BB83397B8DE58638B3896DC9B (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___e0, const RuntimeMethod* method) ;
// System.Boolean LibTessDotNet.Geom::EdgeGoesRight(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesRight_m5B4F1EB6223DBC3AD38DC58AE036CA922E1319CE (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___e0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::TessellateMonoRegion(LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateMonoRegion_m35381625E13B132270623B38CB8AFA019884D894 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___face0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Mesh::ZapFace(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_ZapFace_m40CB995646CB70A3A752001902CF3A1289CC54E7 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___fZap1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Mesh::MergeConvexFaces(LibTessDotNet.IPool,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MergeConvexFaces_m2452DF609E5F2842DCB3645A91AE38474D00189C (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, int32_t ___maxVertsPerFace1, const RuntimeMethod* method) ;
// System.Int32 LibTessDotNet.Tess::GetNeighbourFace(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_GetNeighbourFace_mDB66AF9ED49A800C6FD51072F7EC9E2DFFACFAA8 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___edge0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::AddContourInternal(System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>,LibTessDotNet.ContourOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContourInternal_mFA84BAC9BB6FA1F7C40B76E6ABC6C7884C666887 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, RuntimeObject* ___vertices0, int32_t ___forceOrientation1, const RuntimeMethod* method) ;
// System.Single LibTessDotNet.Tess::SignedArea(System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tess_SignedArea_m81A5A96E18FE237FDA733FE8D31601142341B841 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, RuntimeObject* ___vertices0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::ProjectPolygon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ProjectPolygon_m22515E7F73F680B50FAC5ADD3BF5290A0FD719B2 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::ComputeInterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeInterior_mFE484BBCF4AAC36E007A54416314B53790663CAD (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::SetWindingNumber(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SetWindingNumber_m67CAD83A0441F03AC00A0988396CC22DDD93FE6A (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, int32_t ___value0, bool ___keepOnlyBoundary1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::TessellateInterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateInterior_mE0300B408C5AF3A1D2ED19A02BA39F5BC21DAD91 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::OutputContours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputContours_mB354AD2F98DCFE73A074C5443A000FDDCBBD0D83 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::OutputPolymesh(LibTessDotNet.ElementType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputPolymesh_mD26B103CACD185034776B1CC6869212B40665B7B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, int32_t ___elementType0, int32_t ___polySize1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.ContourVertex::.ctor(LibTessDotNet.Vec3,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContourVertex__ctor_mB49AE90A9B85CA37EC7EE928BC9EE585D35C8C03 (ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, RuntimeObject* ___data1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String LibTessDotNet.ContourVertex::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContourVertex_ToString_m5C3892C4BC39F4D753E1B3B02B82242DD4FAD66A (ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
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
// System.Boolean LibTessDotNet.Geom::IsWindingInside(LibTessDotNet.WindingRule,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_IsWindingInside_mAECD5C0CDC153F6036441D90EFB993F77C723793 (int32_t ___rule0, int32_t ___n1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B9_0 = 0;
	{
		int32_t L_0 = ___rule0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_0031;
			}
			case 3:
			{
				goto IL_0038;
			}
			case 4:
			{
				goto IL_003f;
			}
		}
	}
	{
		goto IL_0051;
	}

IL_0021:
	{
		int32_t L_3 = ___n1;
		V_2 = (bool)((((int32_t)((int32_t)(L_3&1))) == ((int32_t)1))? 1 : 0);
		goto IL_005c;
	}

IL_002a:
	{
		int32_t L_4 = ___n1;
		V_2 = (bool)((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0);
		goto IL_005c;
	}

IL_0031:
	{
		int32_t L_5 = ___n1;
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		goto IL_005c;
	}

IL_0038:
	{
		int32_t L_6 = ___n1;
		V_2 = (bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0);
		goto IL_005c;
	}

IL_003f:
	{
		int32_t L_7 = ___n1;
		if ((((int32_t)L_7) >= ((int32_t)2)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_8 = ___n1;
		G_B9_0 = ((((int32_t)((((int32_t)L_8) > ((int32_t)((int32_t)-2)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004e;
	}

IL_004d:
	{
		G_B9_0 = 1;
	}

IL_004e:
	{
		V_2 = (bool)G_B9_0;
		goto IL_005c;
	}

IL_0051:
	{
		Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBE43F3C9BFF18FB637B9A0C90F66040718CEC64)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Geom_IsWindingInside_mAECD5C0CDC153F6036441D90EFB993F77C723793_RuntimeMethod_var)));
	}

IL_005c:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
// System.Boolean LibTessDotNet.Geom::VertCCW(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertCCW_m3C73C97020D8B1930F6299B1539CBE4E9962ACF3 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___w2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___u0;
		NullCheck(L_0);
		float L_1 = L_0->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___v1;
		NullCheck(L_2);
		float L_3 = L_2->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___w2;
		NullCheck(L_4);
		float L_5 = L_4->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___v1;
		NullCheck(L_6);
		float L_7 = L_6->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___w2;
		NullCheck(L_8);
		float L_9 = L_8->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___u0;
		NullCheck(L_10);
		float L_11 = L_10->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___w2;
		NullCheck(L_12);
		float L_13 = L_12->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = ___u0;
		NullCheck(L_14);
		float L_15 = L_14->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = ___v1;
		NullCheck(L_16);
		float L_17 = L_16->____t_5;
		V_0 = (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, ((float)il2cpp_codegen_subtract(L_3, L_5)))), ((float)il2cpp_codegen_multiply(L_7, ((float)il2cpp_codegen_subtract(L_9, L_11)))))), ((float)il2cpp_codegen_multiply(L_13, ((float)il2cpp_codegen_subtract(L_15, L_17))))))) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004c;
	}

IL_004c:
	{
		bool L_18 = V_0;
		return L_18;
	}
}
// System.Boolean LibTessDotNet.Geom::VertEq(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___lhs0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___lhs0;
		NullCheck(L_0);
		float L_1 = L_0->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___rhs1;
		NullCheck(L_2);
		float L_3 = L_2->____s_4;
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_001f;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___lhs0;
		NullCheck(L_4);
		float L_5 = L_4->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___rhs1;
		NullCheck(L_6);
		float L_7 = L_6->____t_5;
		G_B3_0 = ((((float)L_5) == ((float)L_7))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Boolean LibTessDotNet.Geom::VertLeq(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___lhs0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___lhs0;
		NullCheck(L_0);
		float L_1 = L_0->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___rhs1;
		NullCheck(L_2);
		float L_3 = L_2->____s_4;
		if ((((float)L_1) < ((float)L_3)))
		{
			goto IL_0033;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___lhs0;
		NullCheck(L_4);
		float L_5 = L_4->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___rhs1;
		NullCheck(L_6);
		float L_7 = L_6->____s_4;
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_0030;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___lhs0;
		NullCheck(L_8);
		float L_9 = L_8->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___rhs1;
		NullCheck(L_10);
		float L_11 = L_10->____t_5;
		G_B4_0 = ((((int32_t)((!(((float)L_9) <= ((float)L_11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B4_0 = 0;
	}

IL_0031:
	{
		G_B6_0 = G_B4_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B6_0 = 1;
	}

IL_0034:
	{
		V_0 = (bool)G_B6_0;
		goto IL_0037;
	}

IL_0037:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Single LibTessDotNet.Geom::EdgeEval(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeEval_mBAA4526E696D91195D0824B9CD891AED17EB6B8F (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___w2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___u0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___v1;
		bool L_2;
		L_2 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = ___v1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___w2;
		bool L_5;
		L_5 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)G_B3_0, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___v1;
		NullCheck(L_6);
		float L_7 = L_6->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___u0;
		NullCheck(L_8);
		float L_9 = L_8->____s_4;
		V_0 = ((float)il2cpp_codegen_subtract(L_7, L_9));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___w2;
		NullCheck(L_10);
		float L_11 = L_10->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___v1;
		NullCheck(L_12);
		float L_13 = L_12->____s_4;
		V_1 = ((float)il2cpp_codegen_subtract(L_11, L_13));
		float L_14 = V_0;
		float L_15 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(L_14, L_15))) > ((float)(0.0f)))? 1 : 0);
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		float L_17 = V_0;
		float L_18 = V_1;
		V_3 = (bool)((((float)L_17) < ((float)L_18))? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_0073;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20 = ___v1;
		NullCheck(L_20);
		float L_21 = L_20->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = ___u0;
		NullCheck(L_22);
		float L_23 = L_22->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = ___u0;
		NullCheck(L_24);
		float L_25 = L_24->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = ___w2;
		NullCheck(L_26);
		float L_27 = L_26->____t_5;
		float L_28 = V_0;
		float L_29 = V_0;
		float L_30 = V_1;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_21, L_23)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_25, L_27)), ((float)(L_28/((float)il2cpp_codegen_add(L_29, L_30))))))));
		goto IL_00a2;
	}

IL_0073:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_31 = ___v1;
		NullCheck(L_31);
		float L_32 = L_31->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = ___w2;
		NullCheck(L_33);
		float L_34 = L_33->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_35 = ___w2;
		NullCheck(L_35);
		float L_36 = L_35->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_37 = ___u0;
		NullCheck(L_37);
		float L_38 = L_37->____t_5;
		float L_39 = V_1;
		float L_40 = V_0;
		float L_41 = V_1;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_32, L_34)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_36, L_38)), ((float)(L_39/((float)il2cpp_codegen_add(L_40, L_41))))))));
		goto IL_00a2;
	}

IL_0099:
	{
		V_4 = (0.0f);
		goto IL_00a2;
	}

IL_00a2:
	{
		float L_42 = V_4;
		return L_42;
	}
}
// System.Single LibTessDotNet.Geom::EdgeSign(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___w2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___u0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___v1;
		bool L_2;
		L_2 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = ___v1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___w2;
		bool L_5;
		L_5 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)G_B3_0, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___v1;
		NullCheck(L_6);
		float L_7 = L_6->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___u0;
		NullCheck(L_8);
		float L_9 = L_8->____s_4;
		V_0 = ((float)il2cpp_codegen_subtract(L_7, L_9));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___w2;
		NullCheck(L_10);
		float L_11 = L_10->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___v1;
		NullCheck(L_12);
		float L_13 = L_12->____s_4;
		V_1 = ((float)il2cpp_codegen_subtract(L_11, L_13));
		float L_14 = V_0;
		float L_15 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(L_14, L_15))) > ((float)(0.0f)))? 1 : 0);
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_0067;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = ___v1;
		NullCheck(L_17);
		float L_18 = L_17->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = ___w2;
		NullCheck(L_19);
		float L_20 = L_19->____t_5;
		float L_21 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = ___v1;
		NullCheck(L_22);
		float L_23 = L_22->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = ___u0;
		NullCheck(L_24);
		float L_25 = L_24->____t_5;
		float L_26 = V_1;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_18, L_20)), L_21)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_23, L_25)), L_26))));
		goto IL_006f;
	}

IL_0067:
	{
		V_3 = (0.0f);
		goto IL_006f;
	}

IL_006f:
	{
		float L_27 = V_3;
		return L_27;
	}
}
// System.Boolean LibTessDotNet.Geom::TransLeq(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___lhs0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___lhs0;
		NullCheck(L_0);
		float L_1 = L_0->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___rhs1;
		NullCheck(L_2);
		float L_3 = L_2->____t_5;
		if ((((float)L_1) < ((float)L_3)))
		{
			goto IL_0033;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___lhs0;
		NullCheck(L_4);
		float L_5 = L_4->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___rhs1;
		NullCheck(L_6);
		float L_7 = L_6->____t_5;
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_0030;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___lhs0;
		NullCheck(L_8);
		float L_9 = L_8->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___rhs1;
		NullCheck(L_10);
		float L_11 = L_10->____s_4;
		G_B4_0 = ((((int32_t)((!(((float)L_9) <= ((float)L_11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B4_0 = 0;
	}

IL_0031:
	{
		G_B6_0 = G_B4_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B6_0 = 1;
	}

IL_0034:
	{
		V_0 = (bool)G_B6_0;
		goto IL_0037;
	}

IL_0037:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Single LibTessDotNet.Geom::TransEval(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransEval_mEA3BB959E68DCEBF3010130A22D37B669C03BA5B (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___w2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___u0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___v1;
		bool L_2;
		L_2 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = ___v1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___w2;
		bool L_5;
		L_5 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)G_B3_0, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___v1;
		NullCheck(L_6);
		float L_7 = L_6->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___u0;
		NullCheck(L_8);
		float L_9 = L_8->____t_5;
		V_0 = ((float)il2cpp_codegen_subtract(L_7, L_9));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___w2;
		NullCheck(L_10);
		float L_11 = L_10->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___v1;
		NullCheck(L_12);
		float L_13 = L_12->____t_5;
		V_1 = ((float)il2cpp_codegen_subtract(L_11, L_13));
		float L_14 = V_0;
		float L_15 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(L_14, L_15))) > ((float)(0.0f)))? 1 : 0);
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		float L_17 = V_0;
		float L_18 = V_1;
		V_3 = (bool)((((float)L_17) < ((float)L_18))? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_0073;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20 = ___v1;
		NullCheck(L_20);
		float L_21 = L_20->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = ___u0;
		NullCheck(L_22);
		float L_23 = L_22->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = ___u0;
		NullCheck(L_24);
		float L_25 = L_24->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = ___w2;
		NullCheck(L_26);
		float L_27 = L_26->____s_4;
		float L_28 = V_0;
		float L_29 = V_0;
		float L_30 = V_1;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_21, L_23)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_25, L_27)), ((float)(L_28/((float)il2cpp_codegen_add(L_29, L_30))))))));
		goto IL_00a2;
	}

IL_0073:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_31 = ___v1;
		NullCheck(L_31);
		float L_32 = L_31->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = ___w2;
		NullCheck(L_33);
		float L_34 = L_33->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_35 = ___w2;
		NullCheck(L_35);
		float L_36 = L_35->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_37 = ___u0;
		NullCheck(L_37);
		float L_38 = L_37->____s_4;
		float L_39 = V_1;
		float L_40 = V_0;
		float L_41 = V_1;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_32, L_34)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_36, L_38)), ((float)(L_39/((float)il2cpp_codegen_add(L_40, L_41))))))));
		goto IL_00a2;
	}

IL_0099:
	{
		V_4 = (0.0f);
		goto IL_00a2;
	}

IL_00a2:
	{
		float L_42 = V_4;
		return L_42;
	}
}
// System.Single LibTessDotNet.Geom::TransSign(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransSign_m99C6BDBF9001C7DA783B291AA09273B75099E1AA (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___w2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___u0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___v1;
		bool L_2;
		L_2 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = ___v1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___w2;
		bool L_5;
		L_5 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)G_B3_0, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___v1;
		NullCheck(L_6);
		float L_7 = L_6->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___u0;
		NullCheck(L_8);
		float L_9 = L_8->____t_5;
		V_0 = ((float)il2cpp_codegen_subtract(L_7, L_9));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___w2;
		NullCheck(L_10);
		float L_11 = L_10->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___v1;
		NullCheck(L_12);
		float L_13 = L_12->____t_5;
		V_1 = ((float)il2cpp_codegen_subtract(L_11, L_13));
		float L_14 = V_0;
		float L_15 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(L_14, L_15))) > ((float)(0.0f)))? 1 : 0);
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_0067;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = ___v1;
		NullCheck(L_17);
		float L_18 = L_17->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = ___w2;
		NullCheck(L_19);
		float L_20 = L_19->____s_4;
		float L_21 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = ___v1;
		NullCheck(L_22);
		float L_23 = L_22->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = ___u0;
		NullCheck(L_24);
		float L_25 = L_24->____s_4;
		float L_26 = V_1;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_18, L_20)), L_21)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_23, L_25)), L_26))));
		goto IL_006f;
	}

IL_0067:
	{
		V_3 = (0.0f);
		goto IL_006f;
	}

IL_006f:
	{
		float L_27 = V_3;
		return L_27;
	}
}
// System.Boolean LibTessDotNet.Geom::EdgeGoesLeft(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesLeft_mB470DCF8C4FD679BB83397B8DE58638B3896DC9B (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___e0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___e0;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1;
		L_1 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_0, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___e0;
		NullCheck(L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = L_2->____Org_5;
		bool L_4;
		L_4 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean LibTessDotNet.Geom::EdgeGoesRight(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesRight_m5B4F1EB6223DBC3AD38DC58AE036CA922E1319CE (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___e0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___e0;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = L_0->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___e0;
		NullCheck(L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3;
		L_3 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_2, NULL);
		bool L_4;
		L_4 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Single LibTessDotNet.Geom::VertL1dist(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_VertL1dist_mAC0CFD4F9DB8AAE3089193AE779B7A5FE509467B (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___u0;
		NullCheck(L_0);
		float L_1 = L_0->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___v1;
		NullCheck(L_2);
		float L_3 = L_2->____s_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = fabsf(((float)il2cpp_codegen_subtract(L_1, L_3)));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = ___u0;
		NullCheck(L_5);
		float L_6 = L_5->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = ___v1;
		NullCheck(L_7);
		float L_8 = L_7->____t_5;
		float L_9;
		L_9 = fabsf(((float)il2cpp_codegen_subtract(L_6, L_8)));
		V_0 = ((float)il2cpp_codegen_add(L_4, L_9));
		goto IL_0029;
	}

IL_0029:
	{
		float L_10 = V_0;
		return L_10;
	}
}
// System.Void LibTessDotNet.Geom::AddWinding(LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_AddWinding_m6EF7D9E71F27FA2029D3464EBF2828972B0D9A0B (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eDst0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eSrc1, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___eDst0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____winding_8;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = ___eSrc1;
		NullCheck(L_3);
		int32_t L_4 = L_3->____winding_8;
		NullCheck(L_1);
		L_1->____winding_8 = ((int32_t)il2cpp_codegen_add(L_2, L_4));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = ___eDst0;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->____winding_8;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___eSrc1;
		NullCheck(L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = L_9->____Sym_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->____winding_8;
		NullCheck(L_7);
		L_7->____winding_8 = ((int32_t)il2cpp_codegen_add(L_8, L_11));
		return;
	}
}
// System.Single LibTessDotNet.Geom::Interpolate(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_Interpolate_m89F4E6101F8FA1D2993DA83CCDB860F571BAF1DF (float ___a0, float ___x1, float ___b2, float ___y3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	float G_B9_0 = 0.0f;
	{
		float L_0 = ___a0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		___a0 = (0.0f);
	}

IL_0016:
	{
		float L_2 = ___b2;
		V_1 = (bool)((((float)L_2) < ((float)(0.0f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		___b2 = (0.0f);
	}

IL_002b:
	{
		float L_4 = ___a0;
		float L_5 = ___b2;
		if ((((float)L_4) <= ((float)L_5)))
		{
			goto IL_003c;
		}
	}
	{
		float L_6 = ___y3;
		float L_7 = ___x1;
		float L_8 = ___y3;
		float L_9 = ___b2;
		float L_10 = ___a0;
		float L_11 = ___b2;
		G_B9_0 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_7, L_8)), ((float)(L_9/((float)il2cpp_codegen_add(L_10, L_11))))))));
		goto IL_005a;
	}

IL_003c:
	{
		float L_12 = ___b2;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0051;
		}
	}
	{
		float L_13 = ___x1;
		float L_14 = ___y3;
		float L_15 = ___x1;
		float L_16 = ___a0;
		float L_17 = ___a0;
		float L_18 = ___b2;
		G_B9_0 = ((float)il2cpp_codegen_add(L_13, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_14, L_15)), ((float)(L_16/((float)il2cpp_codegen_add(L_17, L_18))))))));
		goto IL_005a;
	}

IL_0051:
	{
		float L_19 = ___x1;
		float L_20 = ___y3;
		G_B9_0 = ((float)(((float)il2cpp_codegen_add(L_19, L_20))/(2.0f)));
	}

IL_005a:
	{
		V_2 = G_B9_0;
		goto IL_005d;
	}

IL_005d:
	{
		float L_21 = V_2;
		return L_21;
	}
}
// System.Void LibTessDotNet.Geom::Swap(LibTessDotNet.MeshUtils/Vertex&,LibTessDotNet.MeshUtils/Vertex&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** ___a0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** ___b1, const RuntimeMethod* method) 
{
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** L_0 = ___a0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = *((Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE**)L_0);
		V_0 = L_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** L_2 = ___a0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** L_3 = ___b1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = *((Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE**)L_3);
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_4);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** L_5 = ___b1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = V_0;
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_6);
		return;
	}
}
// System.Void LibTessDotNet.Geom::EdgeIntersect(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_EdgeIntersect_mEC7935EED47854721B3A81E27749CA3A7F4736D3 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___o10, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___d11, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___o22, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___d23, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v4, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	bool V_7 = false;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	bool V_18 = false;
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	bool V_21 = false;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___o10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___d11;
		bool L_2;
		L_2 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___o10), (&___d11), NULL);
	}

IL_001b:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___o22;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = ___d23;
		bool L_6;
		L_6 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_4, L_5, NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___o22), (&___d23), NULL);
	}

IL_0035:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___o10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = ___o22;
		bool L_10;
		L_10 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_8, L_9, NULL);
		V_2 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___o10), (&___o22), NULL);
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___d11), (&___d23), NULL);
	}

IL_0059:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___o22;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = ___d11;
		bool L_14;
		L_14 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_12, L_13, NULL);
		V_3 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0088;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = ___v4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = ___o22;
		NullCheck(L_17);
		float L_18 = L_17->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = ___d11;
		NullCheck(L_19);
		float L_20 = L_19->____s_4;
		NullCheck(L_16);
		L_16->____s_4 = ((float)(((float)il2cpp_codegen_add(L_18, L_20))/(2.0f)));
		goto IL_0138;
	}

IL_0088:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = ___d11;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = ___d23;
		bool L_23;
		L_23 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_21, L_22, NULL);
		V_4 = L_23;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00e7;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = ___o10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = ___o22;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_27 = ___d11;
		float L_28;
		L_28 = Geom_EdgeEval_mBAA4526E696D91195D0824B9CD891AED17EB6B8F(L_25, L_26, L_27, NULL);
		V_5 = L_28;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_29 = ___o22;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_30 = ___d11;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_31 = ___d23;
		float L_32;
		L_32 = Geom_EdgeEval_mBAA4526E696D91195D0824B9CD891AED17EB6B8F(L_29, L_30, L_31, NULL);
		V_6 = L_32;
		float L_33 = V_5;
		float L_34 = V_6;
		V_7 = (bool)((((float)((float)il2cpp_codegen_add(L_33, L_34))) < ((float)(0.0f)))? 1 : 0);
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_00c8;
		}
	}
	{
		float L_36 = V_5;
		V_5 = ((-L_36));
		float L_37 = V_6;
		V_6 = ((-L_37));
	}

IL_00c8:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_38 = ___v4;
		float L_39 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_40 = ___o22;
		NullCheck(L_40);
		float L_41 = L_40->____s_4;
		float L_42 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = ___d11;
		NullCheck(L_43);
		float L_44 = L_43->____s_4;
		float L_45;
		L_45 = Geom_Interpolate_m89F4E6101F8FA1D2993DA83CCDB860F571BAF1DF(L_39, L_41, L_42, L_44, NULL);
		NullCheck(L_38);
		L_38->____s_4 = L_45;
		goto IL_0138;
	}

IL_00e7:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_46 = ___o10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_47 = ___o22;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_48 = ___d11;
		float L_49;
		L_49 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_46, L_47, L_48, NULL);
		V_8 = L_49;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_50 = ___o10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_51 = ___d23;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_52 = ___d11;
		float L_53;
		L_53 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_50, L_51, L_52, NULL);
		V_9 = ((-L_53));
		float L_54 = V_8;
		float L_55 = V_9;
		V_10 = (bool)((((float)((float)il2cpp_codegen_add(L_54, L_55))) < ((float)(0.0f)))? 1 : 0);
		bool L_56 = V_10;
		if (!L_56)
		{
			goto IL_011b;
		}
	}
	{
		float L_57 = V_8;
		V_8 = ((-L_57));
		float L_58 = V_9;
		V_9 = ((-L_58));
	}

IL_011b:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_59 = ___v4;
		float L_60 = V_8;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_61 = ___o22;
		NullCheck(L_61);
		float L_62 = L_61->____s_4;
		float L_63 = V_9;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_64 = ___d23;
		NullCheck(L_64);
		float L_65 = L_64->____s_4;
		float L_66;
		L_66 = Geom_Interpolate_m89F4E6101F8FA1D2993DA83CCDB860F571BAF1DF(L_60, L_62, L_63, L_65, NULL);
		NullCheck(L_59);
		L_59->____s_4 = L_66;
	}

IL_0138:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_67 = ___o10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_68 = ___d11;
		bool L_69;
		L_69 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_67, L_68, NULL);
		V_11 = (bool)((((int32_t)L_69) == ((int32_t)0))? 1 : 0);
		bool L_70 = V_11;
		if (!L_70)
		{
			goto IL_0154;
		}
	}
	{
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___o10), (&___d11), NULL);
	}

IL_0154:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_71 = ___o22;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_72 = ___d23;
		bool L_73;
		L_73 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_71, L_72, NULL);
		V_12 = (bool)((((int32_t)L_73) == ((int32_t)0))? 1 : 0);
		bool L_74 = V_12;
		if (!L_74)
		{
			goto IL_0170;
		}
	}
	{
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___o22), (&___d23), NULL);
	}

IL_0170:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_75 = ___o10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_76 = ___o22;
		bool L_77;
		L_77 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_75, L_76, NULL);
		V_13 = (bool)((((int32_t)L_77) == ((int32_t)0))? 1 : 0);
		bool L_78 = V_13;
		if (!L_78)
		{
			goto IL_0196;
		}
	}
	{
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___o10), (&___o22), NULL);
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___d11), (&___d23), NULL);
	}

IL_0196:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_79 = ___o22;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_80 = ___d11;
		bool L_81;
		L_81 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_79, L_80, NULL);
		V_14 = (bool)((((int32_t)L_81) == ((int32_t)0))? 1 : 0);
		bool L_82 = V_14;
		if (!L_82)
		{
			goto IL_01c7;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_83 = ___v4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_84 = ___o22;
		NullCheck(L_84);
		float L_85 = L_84->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_86 = ___d11;
		NullCheck(L_86);
		float L_87 = L_86->____t_5;
		NullCheck(L_83);
		L_83->____t_5 = ((float)(((float)il2cpp_codegen_add(L_85, L_87))/(2.0f)));
		goto IL_0277;
	}

IL_01c7:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_88 = ___d11;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_89 = ___d23;
		bool L_90;
		L_90 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_88, L_89, NULL);
		V_15 = L_90;
		bool L_91 = V_15;
		if (!L_91)
		{
			goto IL_0226;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_92 = ___o10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_93 = ___o22;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_94 = ___d11;
		float L_95;
		L_95 = Geom_TransEval_mEA3BB959E68DCEBF3010130A22D37B669C03BA5B(L_92, L_93, L_94, NULL);
		V_16 = L_95;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_96 = ___o22;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_97 = ___d11;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_98 = ___d23;
		float L_99;
		L_99 = Geom_TransEval_mEA3BB959E68DCEBF3010130A22D37B669C03BA5B(L_96, L_97, L_98, NULL);
		V_17 = L_99;
		float L_100 = V_16;
		float L_101 = V_17;
		V_18 = (bool)((((float)((float)il2cpp_codegen_add(L_100, L_101))) < ((float)(0.0f)))? 1 : 0);
		bool L_102 = V_18;
		if (!L_102)
		{
			goto IL_0207;
		}
	}
	{
		float L_103 = V_16;
		V_16 = ((-L_103));
		float L_104 = V_17;
		V_17 = ((-L_104));
	}

IL_0207:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_105 = ___v4;
		float L_106 = V_16;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_107 = ___o22;
		NullCheck(L_107);
		float L_108 = L_107->____t_5;
		float L_109 = V_17;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_110 = ___d11;
		NullCheck(L_110);
		float L_111 = L_110->____t_5;
		float L_112;
		L_112 = Geom_Interpolate_m89F4E6101F8FA1D2993DA83CCDB860F571BAF1DF(L_106, L_108, L_109, L_111, NULL);
		NullCheck(L_105);
		L_105->____t_5 = L_112;
		goto IL_0277;
	}

IL_0226:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_113 = ___o10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_114 = ___o22;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_115 = ___d11;
		float L_116;
		L_116 = Geom_TransSign_m99C6BDBF9001C7DA783B291AA09273B75099E1AA(L_113, L_114, L_115, NULL);
		V_19 = L_116;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_117 = ___o10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_118 = ___d23;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_119 = ___d11;
		float L_120;
		L_120 = Geom_TransSign_m99C6BDBF9001C7DA783B291AA09273B75099E1AA(L_117, L_118, L_119, NULL);
		V_20 = ((-L_120));
		float L_121 = V_19;
		float L_122 = V_20;
		V_21 = (bool)((((float)((float)il2cpp_codegen_add(L_121, L_122))) < ((float)(0.0f)))? 1 : 0);
		bool L_123 = V_21;
		if (!L_123)
		{
			goto IL_025a;
		}
	}
	{
		float L_124 = V_19;
		V_19 = ((-L_124));
		float L_125 = V_20;
		V_20 = ((-L_125));
	}

IL_025a:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_126 = ___v4;
		float L_127 = V_19;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_128 = ___o22;
		NullCheck(L_128);
		float L_129 = L_128->____t_5;
		float L_130 = V_20;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_131 = ___d23;
		NullCheck(L_131);
		float L_132 = L_131->____t_5;
		float L_133;
		L_133 = Geom_Interpolate_m89F4E6101F8FA1D2993DA83CCDB860F571BAF1DF(L_127, L_129, L_130, L_132, NULL);
		NullCheck(L_126);
		L_126->____t_5 = L_133;
	}

IL_0277:
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
// System.Void LibTessDotNet.Helpers::Tesselate(System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>,TriLibCore.AssetLoaderContext,TriLibCore.Geometries.Geometry,TriLibCore.Interfaces.IGeometryGroup,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Helpers_Tesselate_m52BC0268EF5AEEEECF07746E8B25E59026DAC804 (RuntimeObject* ___contourVertices0, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext1, Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147* ___geometry2, RuntimeObject* ___geometryGroup3, bool ___counterClockwise4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Helpers_CombineCallback_mC927BFD619A2BEE049E8668FF0119877F3F3262E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* V_0 = NULL;
	bool V_1 = false;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	{
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_0 = ___assetLoaderContext1;
		NullCheck(L_0);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_1 = L_0->___Options_34;
		NullCheck(L_1);
		bool L_2 = L_1->___DisableTesselation_102;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		goto IL_02f6;
	}

IL_0016:
	{
		Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* L_4 = (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8*)il2cpp_codegen_object_new(Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Tess__ctor_m9C50EAA56E0DBFFB1B779D0A921ECA9C7984E7A2(L_4, NULL);
		V_0 = L_4;
		Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* L_5 = V_0;
		RuntimeObject* L_6 = ___contourVertices0;
		NullCheck(L_5);
		Tess_AddContour_m8EDE4A726EAE9475970B07B9ABA4D7F0F8D1674E(L_5, L_6, 0, NULL);
		Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* L_7 = V_0;
		CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* L_8 = (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300*)il2cpp_codegen_object_new(CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		CombineCallback__ctor_m4C08DD9F36BCA4F132C1AE0D7A6FAA7540EC1C47(L_8, NULL, (intptr_t)((void*)Helpers_CombineCallback_mC927BFD619A2BEE049E8668FF0119877F3F3262E_RuntimeMethod_var), NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_9 = V_2;
		NullCheck(L_7);
		Tess_Tessellate_m1A288974947B0D69A8FC26556C151259C8C8418E(L_7, 0, 0, 3, L_8, L_9, NULL);
		V_3 = 0;
		goto IL_02e4;
	}

IL_004b:
	{
		int32_t L_10 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_multiply(L_10, 3));
		Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* L_11 = V_0;
		NullCheck(L_11);
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_12;
		L_12 = Tess_get_Vertices_mDBE386129B4DF1C7D1F16A937D2D47FFF3567E45(L_11, NULL);
		Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* L_13 = V_0;
		NullCheck(L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14;
		L_14 = Tess_get_Elements_mED221BAB8BAAAC0EA4160C2C5DA5E38803883D7B(L_13, NULL);
		int32_t L_15 = V_4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		RuntimeObject* L_18 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___Data_1;
		V_5 = ((RuntimeObject*)Castclass((RuntimeObject*)L_18, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var));
		Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* L_19 = V_0;
		NullCheck(L_19);
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_20;
		L_20 = Tess_get_Vertices_mDBE386129B4DF1C7D1F16A937D2D47FFF3567E45(L_19, NULL);
		Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* L_21 = V_0;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22;
		L_22 = Tess_get_Elements_mED221BAB8BAAAC0EA4160C2C5DA5E38803883D7B(L_21, NULL);
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_20);
		RuntimeObject* L_26 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___Data_1;
		V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_26, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var));
		Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* L_27 = V_0;
		NullCheck(L_27);
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_28;
		L_28 = Tess_get_Vertices_mDBE386129B4DF1C7D1F16A937D2D47FFF3567E45(L_27, NULL);
		Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* L_29 = V_0;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30;
		L_30 = Tess_get_Elements_mED221BAB8BAAAC0EA4160C2C5DA5E38803883D7B(L_29, NULL);
		int32_t L_31 = V_4;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add(L_31, 2));
		int32_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_28);
		RuntimeObject* L_34 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___Data_1;
		V_7 = ((RuntimeObject*)Castclass((RuntimeObject*)L_34, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var));
		bool L_35 = ___counterClockwise4;
		V_8 = L_35;
		bool L_36 = V_8;
		if (!L_36)
		{
			goto IL_01d2;
		}
	}
	{
		RuntimeObject* L_37 = ___geometryGroup3;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_38 = ___assetLoaderContext1;
		RuntimeObject* L_39 = V_7;
		RuntimeObject* L_40 = ___geometryGroup3;
		NullCheck(L_39);
		int32_t L_41;
		L_41 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 TriLibCore.Geometries.IVertexData::GetVertexIndex(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_39, L_40);
		Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147* L_42 = ___geometry2;
		RuntimeObject* L_43 = V_7;
		RuntimeObject* L_44 = ___geometryGroup3;
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject* >::Invoke(3 /* UnityEngine.Vector3 TriLibCore.Geometries.IVertexData::GetPosition(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_43, L_44);
		RuntimeObject* L_46 = V_7;
		RuntimeObject* L_47 = ___geometryGroup3;
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject* >::Invoke(5 /* UnityEngine.Vector3 TriLibCore.Geometries.IVertexData::GetNormal(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_46, L_47);
		RuntimeObject* L_49 = V_7;
		RuntimeObject* L_50 = ___geometryGroup3;
		NullCheck(L_49);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_51;
		L_51 = InterfaceFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, RuntimeObject* >::Invoke(7 /* UnityEngine.Vector4 TriLibCore.Geometries.IVertexData::GetTangent(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_49, L_50);
		RuntimeObject* L_52 = V_7;
		RuntimeObject* L_53 = ___geometryGroup3;
		NullCheck(L_52);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_54;
		L_54 = InterfaceFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, RuntimeObject* >::Invoke(9 /* UnityEngine.Color TriLibCore.Geometries.IVertexData::GetColor(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_52, L_53);
		RuntimeObject* L_55 = V_7;
		RuntimeObject* L_56 = ___geometryGroup3;
		NullCheck(L_55);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		L_57 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(11 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV1(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_55, L_56);
		RuntimeObject* L_58 = V_7;
		RuntimeObject* L_59 = ___geometryGroup3;
		NullCheck(L_58);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60;
		L_60 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(13 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV2(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_58, L_59);
		RuntimeObject* L_61 = V_7;
		RuntimeObject* L_62 = ___geometryGroup3;
		NullCheck(L_61);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63;
		L_63 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(15 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV3(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_61, L_62);
		RuntimeObject* L_64 = V_7;
		RuntimeObject* L_65 = ___geometryGroup3;
		NullCheck(L_64);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66;
		L_66 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(17 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV4(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_64, L_65);
		RuntimeObject* L_67 = V_7;
		RuntimeObject* L_68 = ___geometryGroup3;
		NullCheck(L_67);
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_69;
		L_69 = InterfaceFuncInvoker1< BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F, RuntimeObject* >::Invoke(19 /* UnityEngine.BoneWeight TriLibCore.Geometries.IVertexData::GetBoneWeight(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_67, L_68);
		FlexibleVertexDataUtils_BuildAndAddFlexibleVertexData_mC35367A0F41EE78D0D41CB73484C229156CC532F(L_37, L_38, L_41, L_42, L_45, L_48, L_51, L_54, L_57, L_60, L_63, L_66, L_69, NULL);
		RuntimeObject* L_70 = ___geometryGroup3;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_71 = ___assetLoaderContext1;
		RuntimeObject* L_72 = V_6;
		RuntimeObject* L_73 = ___geometryGroup3;
		NullCheck(L_72);
		int32_t L_74;
		L_74 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 TriLibCore.Geometries.IVertexData::GetVertexIndex(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_72, L_73);
		Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147* L_75 = ___geometry2;
		RuntimeObject* L_76 = V_6;
		RuntimeObject* L_77 = ___geometryGroup3;
		NullCheck(L_76);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject* >::Invoke(3 /* UnityEngine.Vector3 TriLibCore.Geometries.IVertexData::GetPosition(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_76, L_77);
		RuntimeObject* L_79 = V_6;
		RuntimeObject* L_80 = ___geometryGroup3;
		NullCheck(L_79);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject* >::Invoke(5 /* UnityEngine.Vector3 TriLibCore.Geometries.IVertexData::GetNormal(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_79, L_80);
		RuntimeObject* L_82 = V_6;
		RuntimeObject* L_83 = ___geometryGroup3;
		NullCheck(L_82);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_84;
		L_84 = InterfaceFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, RuntimeObject* >::Invoke(7 /* UnityEngine.Vector4 TriLibCore.Geometries.IVertexData::GetTangent(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_82, L_83);
		RuntimeObject* L_85 = V_6;
		RuntimeObject* L_86 = ___geometryGroup3;
		NullCheck(L_85);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_87;
		L_87 = InterfaceFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, RuntimeObject* >::Invoke(9 /* UnityEngine.Color TriLibCore.Geometries.IVertexData::GetColor(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_85, L_86);
		RuntimeObject* L_88 = V_6;
		RuntimeObject* L_89 = ___geometryGroup3;
		NullCheck(L_88);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_90;
		L_90 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(11 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV1(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_88, L_89);
		RuntimeObject* L_91 = V_6;
		RuntimeObject* L_92 = ___geometryGroup3;
		NullCheck(L_91);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_93;
		L_93 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(13 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV2(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_91, L_92);
		RuntimeObject* L_94 = V_6;
		RuntimeObject* L_95 = ___geometryGroup3;
		NullCheck(L_94);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_96;
		L_96 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(15 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV3(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_94, L_95);
		RuntimeObject* L_97 = V_6;
		RuntimeObject* L_98 = ___geometryGroup3;
		NullCheck(L_97);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99;
		L_99 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(17 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV4(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_97, L_98);
		RuntimeObject* L_100 = V_6;
		RuntimeObject* L_101 = ___geometryGroup3;
		NullCheck(L_100);
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_102;
		L_102 = InterfaceFuncInvoker1< BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F, RuntimeObject* >::Invoke(19 /* UnityEngine.BoneWeight TriLibCore.Geometries.IVertexData::GetBoneWeight(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_100, L_101);
		FlexibleVertexDataUtils_BuildAndAddFlexibleVertexData_mC35367A0F41EE78D0D41CB73484C229156CC532F(L_70, L_71, L_74, L_75, L_78, L_81, L_84, L_87, L_90, L_93, L_96, L_99, L_102, NULL);
		RuntimeObject* L_103 = ___geometryGroup3;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_104 = ___assetLoaderContext1;
		RuntimeObject* L_105 = V_5;
		RuntimeObject* L_106 = ___geometryGroup3;
		NullCheck(L_105);
		int32_t L_107;
		L_107 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 TriLibCore.Geometries.IVertexData::GetVertexIndex(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_105, L_106);
		Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147* L_108 = ___geometry2;
		RuntimeObject* L_109 = V_5;
		RuntimeObject* L_110 = ___geometryGroup3;
		NullCheck(L_109);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject* >::Invoke(3 /* UnityEngine.Vector3 TriLibCore.Geometries.IVertexData::GetPosition(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_109, L_110);
		RuntimeObject* L_112 = V_5;
		RuntimeObject* L_113 = ___geometryGroup3;
		NullCheck(L_112);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject* >::Invoke(5 /* UnityEngine.Vector3 TriLibCore.Geometries.IVertexData::GetNormal(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_112, L_113);
		RuntimeObject* L_115 = V_5;
		RuntimeObject* L_116 = ___geometryGroup3;
		NullCheck(L_115);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_117;
		L_117 = InterfaceFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, RuntimeObject* >::Invoke(7 /* UnityEngine.Vector4 TriLibCore.Geometries.IVertexData::GetTangent(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_115, L_116);
		RuntimeObject* L_118 = V_5;
		RuntimeObject* L_119 = ___geometryGroup3;
		NullCheck(L_118);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_120;
		L_120 = InterfaceFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, RuntimeObject* >::Invoke(9 /* UnityEngine.Color TriLibCore.Geometries.IVertexData::GetColor(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_118, L_119);
		RuntimeObject* L_121 = V_5;
		RuntimeObject* L_122 = ___geometryGroup3;
		NullCheck(L_121);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_123;
		L_123 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(11 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV1(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_121, L_122);
		RuntimeObject* L_124 = V_5;
		RuntimeObject* L_125 = ___geometryGroup3;
		NullCheck(L_124);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_126;
		L_126 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(13 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV2(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_124, L_125);
		RuntimeObject* L_127 = V_5;
		RuntimeObject* L_128 = ___geometryGroup3;
		NullCheck(L_127);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_129;
		L_129 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(15 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV3(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_127, L_128);
		RuntimeObject* L_130 = V_5;
		RuntimeObject* L_131 = ___geometryGroup3;
		NullCheck(L_130);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_132;
		L_132 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(17 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV4(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_130, L_131);
		RuntimeObject* L_133 = V_5;
		RuntimeObject* L_134 = ___geometryGroup3;
		NullCheck(L_133);
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_135;
		L_135 = InterfaceFuncInvoker1< BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F, RuntimeObject* >::Invoke(19 /* UnityEngine.BoneWeight TriLibCore.Geometries.IVertexData::GetBoneWeight(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_133, L_134);
		FlexibleVertexDataUtils_BuildAndAddFlexibleVertexData_mC35367A0F41EE78D0D41CB73484C229156CC532F(L_103, L_104, L_107, L_108, L_111, L_114, L_117, L_120, L_123, L_126, L_129, L_132, L_135, NULL);
		goto IL_02df;
	}

IL_01d2:
	{
		RuntimeObject* L_136 = ___geometryGroup3;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_137 = ___assetLoaderContext1;
		RuntimeObject* L_138 = V_5;
		RuntimeObject* L_139 = ___geometryGroup3;
		NullCheck(L_138);
		int32_t L_140;
		L_140 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 TriLibCore.Geometries.IVertexData::GetVertexIndex(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_138, L_139);
		Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147* L_141 = ___geometry2;
		RuntimeObject* L_142 = V_5;
		RuntimeObject* L_143 = ___geometryGroup3;
		NullCheck(L_142);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144;
		L_144 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject* >::Invoke(3 /* UnityEngine.Vector3 TriLibCore.Geometries.IVertexData::GetPosition(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_142, L_143);
		RuntimeObject* L_145 = V_5;
		RuntimeObject* L_146 = ___geometryGroup3;
		NullCheck(L_145);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_147;
		L_147 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject* >::Invoke(5 /* UnityEngine.Vector3 TriLibCore.Geometries.IVertexData::GetNormal(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_145, L_146);
		RuntimeObject* L_148 = V_5;
		RuntimeObject* L_149 = ___geometryGroup3;
		NullCheck(L_148);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_150;
		L_150 = InterfaceFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, RuntimeObject* >::Invoke(7 /* UnityEngine.Vector4 TriLibCore.Geometries.IVertexData::GetTangent(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_148, L_149);
		RuntimeObject* L_151 = V_5;
		RuntimeObject* L_152 = ___geometryGroup3;
		NullCheck(L_151);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_153;
		L_153 = InterfaceFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, RuntimeObject* >::Invoke(9 /* UnityEngine.Color TriLibCore.Geometries.IVertexData::GetColor(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_151, L_152);
		RuntimeObject* L_154 = V_5;
		RuntimeObject* L_155 = ___geometryGroup3;
		NullCheck(L_154);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_156;
		L_156 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(11 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV1(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_154, L_155);
		RuntimeObject* L_157 = V_5;
		RuntimeObject* L_158 = ___geometryGroup3;
		NullCheck(L_157);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_159;
		L_159 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(13 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV2(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_157, L_158);
		RuntimeObject* L_160 = V_5;
		RuntimeObject* L_161 = ___geometryGroup3;
		NullCheck(L_160);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_162;
		L_162 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(15 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV3(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_160, L_161);
		RuntimeObject* L_163 = V_5;
		RuntimeObject* L_164 = ___geometryGroup3;
		NullCheck(L_163);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_165;
		L_165 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(17 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV4(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_163, L_164);
		RuntimeObject* L_166 = V_5;
		RuntimeObject* L_167 = ___geometryGroup3;
		NullCheck(L_166);
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_168;
		L_168 = InterfaceFuncInvoker1< BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F, RuntimeObject* >::Invoke(19 /* UnityEngine.BoneWeight TriLibCore.Geometries.IVertexData::GetBoneWeight(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_166, L_167);
		FlexibleVertexDataUtils_BuildAndAddFlexibleVertexData_mC35367A0F41EE78D0D41CB73484C229156CC532F(L_136, L_137, L_140, L_141, L_144, L_147, L_150, L_153, L_156, L_159, L_162, L_165, L_168, NULL);
		RuntimeObject* L_169 = ___geometryGroup3;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_170 = ___assetLoaderContext1;
		RuntimeObject* L_171 = V_6;
		RuntimeObject* L_172 = ___geometryGroup3;
		NullCheck(L_171);
		int32_t L_173;
		L_173 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 TriLibCore.Geometries.IVertexData::GetVertexIndex(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_171, L_172);
		Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147* L_174 = ___geometry2;
		RuntimeObject* L_175 = V_6;
		RuntimeObject* L_176 = ___geometryGroup3;
		NullCheck(L_175);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_177;
		L_177 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject* >::Invoke(3 /* UnityEngine.Vector3 TriLibCore.Geometries.IVertexData::GetPosition(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_175, L_176);
		RuntimeObject* L_178 = V_6;
		RuntimeObject* L_179 = ___geometryGroup3;
		NullCheck(L_178);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_180;
		L_180 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject* >::Invoke(5 /* UnityEngine.Vector3 TriLibCore.Geometries.IVertexData::GetNormal(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_178, L_179);
		RuntimeObject* L_181 = V_6;
		RuntimeObject* L_182 = ___geometryGroup3;
		NullCheck(L_181);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_183;
		L_183 = InterfaceFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, RuntimeObject* >::Invoke(7 /* UnityEngine.Vector4 TriLibCore.Geometries.IVertexData::GetTangent(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_181, L_182);
		RuntimeObject* L_184 = V_6;
		RuntimeObject* L_185 = ___geometryGroup3;
		NullCheck(L_184);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_186;
		L_186 = InterfaceFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, RuntimeObject* >::Invoke(9 /* UnityEngine.Color TriLibCore.Geometries.IVertexData::GetColor(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_184, L_185);
		RuntimeObject* L_187 = V_6;
		RuntimeObject* L_188 = ___geometryGroup3;
		NullCheck(L_187);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_189;
		L_189 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(11 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV1(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_187, L_188);
		RuntimeObject* L_190 = V_6;
		RuntimeObject* L_191 = ___geometryGroup3;
		NullCheck(L_190);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_192;
		L_192 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(13 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV2(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_190, L_191);
		RuntimeObject* L_193 = V_6;
		RuntimeObject* L_194 = ___geometryGroup3;
		NullCheck(L_193);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_195;
		L_195 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(15 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV3(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_193, L_194);
		RuntimeObject* L_196 = V_6;
		RuntimeObject* L_197 = ___geometryGroup3;
		NullCheck(L_196);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_198;
		L_198 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(17 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV4(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_196, L_197);
		RuntimeObject* L_199 = V_6;
		RuntimeObject* L_200 = ___geometryGroup3;
		NullCheck(L_199);
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_201;
		L_201 = InterfaceFuncInvoker1< BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F, RuntimeObject* >::Invoke(19 /* UnityEngine.BoneWeight TriLibCore.Geometries.IVertexData::GetBoneWeight(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_199, L_200);
		FlexibleVertexDataUtils_BuildAndAddFlexibleVertexData_mC35367A0F41EE78D0D41CB73484C229156CC532F(L_169, L_170, L_173, L_174, L_177, L_180, L_183, L_186, L_189, L_192, L_195, L_198, L_201, NULL);
		RuntimeObject* L_202 = ___geometryGroup3;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_203 = ___assetLoaderContext1;
		RuntimeObject* L_204 = V_7;
		RuntimeObject* L_205 = ___geometryGroup3;
		NullCheck(L_204);
		int32_t L_206;
		L_206 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 TriLibCore.Geometries.IVertexData::GetVertexIndex(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_204, L_205);
		Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147* L_207 = ___geometry2;
		RuntimeObject* L_208 = V_7;
		RuntimeObject* L_209 = ___geometryGroup3;
		NullCheck(L_208);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_210;
		L_210 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject* >::Invoke(3 /* UnityEngine.Vector3 TriLibCore.Geometries.IVertexData::GetPosition(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_208, L_209);
		RuntimeObject* L_211 = V_7;
		RuntimeObject* L_212 = ___geometryGroup3;
		NullCheck(L_211);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_213;
		L_213 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject* >::Invoke(5 /* UnityEngine.Vector3 TriLibCore.Geometries.IVertexData::GetNormal(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_211, L_212);
		RuntimeObject* L_214 = V_7;
		RuntimeObject* L_215 = ___geometryGroup3;
		NullCheck(L_214);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_216;
		L_216 = InterfaceFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, RuntimeObject* >::Invoke(7 /* UnityEngine.Vector4 TriLibCore.Geometries.IVertexData::GetTangent(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_214, L_215);
		RuntimeObject* L_217 = V_7;
		RuntimeObject* L_218 = ___geometryGroup3;
		NullCheck(L_217);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_219;
		L_219 = InterfaceFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, RuntimeObject* >::Invoke(9 /* UnityEngine.Color TriLibCore.Geometries.IVertexData::GetColor(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_217, L_218);
		RuntimeObject* L_220 = V_7;
		RuntimeObject* L_221 = ___geometryGroup3;
		NullCheck(L_220);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_222;
		L_222 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(11 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV1(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_220, L_221);
		RuntimeObject* L_223 = V_7;
		RuntimeObject* L_224 = ___geometryGroup3;
		NullCheck(L_223);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_225;
		L_225 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(13 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV2(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_223, L_224);
		RuntimeObject* L_226 = V_7;
		RuntimeObject* L_227 = ___geometryGroup3;
		NullCheck(L_226);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_228;
		L_228 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(15 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV3(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_226, L_227);
		RuntimeObject* L_229 = V_7;
		RuntimeObject* L_230 = ___geometryGroup3;
		NullCheck(L_229);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_231;
		L_231 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(17 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV4(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_229, L_230);
		RuntimeObject* L_232 = V_7;
		RuntimeObject* L_233 = ___geometryGroup3;
		NullCheck(L_232);
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_234;
		L_234 = InterfaceFuncInvoker1< BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F, RuntimeObject* >::Invoke(19 /* UnityEngine.BoneWeight TriLibCore.Geometries.IVertexData::GetBoneWeight(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_232, L_233);
		FlexibleVertexDataUtils_BuildAndAddFlexibleVertexData_mC35367A0F41EE78D0D41CB73484C229156CC532F(L_202, L_203, L_206, L_207, L_210, L_213, L_216, L_219, L_222, L_225, L_228, L_231, L_234, NULL);
	}

IL_02df:
	{
		int32_t L_235 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_235, 1));
	}

IL_02e4:
	{
		int32_t L_236 = V_3;
		Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* L_237 = V_0;
		NullCheck(L_237);
		int32_t L_238;
		L_238 = Tess_get_ElementCount_m1D5AF4E9A9295BA0D57AA883D2C226D32C154E3F(L_237, NULL);
		V_9 = (bool)((((int32_t)L_236) < ((int32_t)L_238))? 1 : 0);
		bool L_239 = V_9;
		if (L_239)
		{
			goto IL_004b;
		}
	}

IL_02f6:
	{
		return;
	}
}
// System.Object LibTessDotNet.Helpers::CombineCallback(LibTessDotNet.Vec3,System.Object[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Helpers_CombineCallback_mC927BFD619A2BEE049E8668FF0119877F3F3262E (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* V_9 = NULL;
	int32_t V_10 = 0;
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	RuntimeObject* V_14 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		il2cpp_codegen_initobj((&V_2), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		il2cpp_codegen_initobj((&V_3), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		il2cpp_codegen_initobj((&V_4), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		il2cpp_codegen_initobj((&V_5), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		il2cpp_codegen_initobj((&V_6), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		il2cpp_codegen_initobj((&V_7), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		V_8 = 0;
		V_10 = 0;
		goto IL_013e;
	}

IL_004c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___data1;
		int32_t L_1 = V_10;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_11 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var));
		int32_t L_4 = V_10;
		V_12 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_12;
		if (!L_5)
		{
			goto IL_006f;
		}
	}
	{
		RuntimeObject* L_6 = V_11;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 TriLibCore.Geometries.IVertexData::GetVertexIndex(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_6, (RuntimeObject*)NULL);
		V_8 = L_7;
	}

IL_006f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___weights2;
		int32_t L_10 = V_10;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		float L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		RuntimeObject* L_13 = V_11;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject* >::Invoke(3 /* UnityEngine.Vector3 TriLibCore.Geometries.IVertexData::GetPosition(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_13, (RuntimeObject*)NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_12, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_15, NULL);
		V_0 = L_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = ___weights2;
		int32_t L_19 = V_10;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		float L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		RuntimeObject* L_22 = V_11;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject* >::Invoke(5 /* UnityEngine.Vector3 TriLibCore.Geometries.IVertexData::GetNormal(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_22, (RuntimeObject*)NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_21, L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_24, NULL);
		V_1 = L_25;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = ___weights2;
		int32_t L_28 = V_10;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		float L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		RuntimeObject* L_31 = V_11;
		NullCheck(L_31);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_32;
		L_32 = InterfaceFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, RuntimeObject* >::Invoke(7 /* UnityEngine.Vector4 TriLibCore.Geometries.IVertexData::GetTangent(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_31, (RuntimeObject*)NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_33;
		L_33 = Vector4_op_Multiply_m59B8215B9A49709B9D299317ECB152C316625559_inline(L_30, L_32, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_34;
		L_34 = Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline(L_26, L_33, NULL);
		V_2 = L_34;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35 = V_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_36 = ___weights2;
		int32_t L_37 = V_10;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		float L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		RuntimeObject* L_40 = V_11;
		NullCheck(L_40);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = InterfaceFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, RuntimeObject* >::Invoke(9 /* UnityEngine.Color TriLibCore.Geometries.IVertexData::GetColor(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_40, (RuntimeObject*)NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42;
		L_42 = Color_op_Multiply_m8503E764714E7AEF4E3CCBFDB1E09C930E87EFE4_inline(L_39, L_41, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_35, L_42, NULL);
		V_3 = L_43;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = V_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = ___weights2;
		int32_t L_46 = V_10;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		float L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		RuntimeObject* L_49 = V_11;
		NullCheck(L_49);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
		L_50 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(11 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV1(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_49, (RuntimeObject*)NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51;
		L_51 = Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline(L_48, L_50, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		L_52 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_44, L_51, NULL);
		V_4 = L_52;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = V_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_54 = ___weights2;
		int32_t L_55 = V_10;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		float L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		RuntimeObject* L_58 = V_11;
		NullCheck(L_58);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(13 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV2(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_58, (RuntimeObject*)NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60;
		L_60 = Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline(L_57, L_59, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_53, L_60, NULL);
		V_5 = L_61;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_6;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_63 = ___weights2;
		int32_t L_64 = V_10;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		float L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		RuntimeObject* L_67 = V_11;
		NullCheck(L_67);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_68;
		L_68 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(15 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV3(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_67, (RuntimeObject*)NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69;
		L_69 = Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline(L_66, L_68, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70;
		L_70 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_62, L_69, NULL);
		V_6 = L_70;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71 = V_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_72 = ___weights2;
		int32_t L_73 = V_10;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		float L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		RuntimeObject* L_76 = V_11;
		NullCheck(L_76);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77;
		L_77 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(17 /* UnityEngine.Vector2 TriLibCore.Geometries.IVertexData::GetUV4(TriLibCore.Interfaces.IGeometryGroup) */, IVertexData_t0722DCB350D35DAB7A2596998EFC2AD210C14C75_il2cpp_TypeInfo_var, L_76, (RuntimeObject*)NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_78;
		L_78 = Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline(L_75, L_77, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79;
		L_79 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_71, L_78, NULL);
		V_7 = L_79;
		int32_t L_80 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_013e:
	{
		int32_t L_81 = V_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_82 = ___data1;
		NullCheck(L_82);
		V_13 = (bool)((((int32_t)L_81) < ((int32_t)((int32_t)(((RuntimeArray*)L_82)->max_length))))? 1 : 0);
		bool L_83 = V_13;
		if (L_83)
		{
			goto IL_004c;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = V_0;
		InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* L_85 = (InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5*)il2cpp_codegen_object_new(InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5_il2cpp_TypeInfo_var);
		NullCheck(L_85);
		InterpolatedVertex__ctor_mA3F5FBB1EACDDB0F2B33E893A45FB89113C6787C(L_85, L_84, NULL);
		V_9 = L_85;
		InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* L_86 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87 = V_1;
		NullCheck(L_86);
		InterpolatedVertex_SetNormal_m48EE21D1CFF1D80F3EAAD2689ABEE84102882ADC(L_86, L_87, (RuntimeObject*)NULL, NULL);
		InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* L_88 = V_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_89 = V_2;
		NullCheck(L_88);
		InterpolatedVertex_SetTangent_m97C9F7E0484643FA4AAAD6A44EC431D2D3439F40(L_88, L_89, (RuntimeObject*)NULL, NULL);
		InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* L_90 = V_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_91 = V_3;
		NullCheck(L_90);
		InterpolatedVertex_SetColor_m01F89204D2B248BE23E94620AE338F73D8C90AE5(L_90, L_91, (RuntimeObject*)NULL, NULL);
		InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* L_92 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_93 = V_4;
		NullCheck(L_92);
		InterpolatedVertex_SetUV1_mA7C291101768A0EE2734CD2589D815DCC2454551(L_92, L_93, (RuntimeObject*)NULL, NULL);
		InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* L_94 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_95 = V_5;
		NullCheck(L_94);
		InterpolatedVertex_SetUV2_mAA75BB47566D748099C17B576C40B5DACC07EB7C(L_94, L_95, (RuntimeObject*)NULL, NULL);
		InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* L_96 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_97 = V_6;
		NullCheck(L_96);
		InterpolatedVertex_SetUV3_mA64C7465897174C7C650D3E11FDC8DF8C5F841CE(L_96, L_97, (RuntimeObject*)NULL, NULL);
		InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* L_98 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_7;
		NullCheck(L_98);
		InterpolatedVertex_SetUV4_m1A25BD25812CDDE554477D1F791463AFF52E0A24(L_98, L_99, (RuntimeObject*)NULL, NULL);
		InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* L_100 = V_9;
		int32_t L_101 = V_8;
		NullCheck(L_100);
		InterpolatedVertex_SetVertexIndex_m2A869CDAB00AC12BBDC88DADB3C2273D46D6345B(L_100, L_101, (RuntimeObject*)NULL, NULL);
		InterpolatedVertex_t57E0770B25FEB89C3BF25E3D491AD3B00C9171B5* L_102 = V_9;
		V_14 = L_102;
		goto IL_01b1;
	}

IL_01b1:
	{
		RuntimeObject* L_103 = V_14;
		return L_103;
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
// System.Void LibTessDotNet.Mesh::Init(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Init_mD8243AFF3EE5E3F72571310BD8BB14459F946B80 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_m51643A8B0CFF1C5F247F180DE113F73632C86394_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E V_2;
	memset((&V_2), 0, sizeof(V_2));
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_5 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_6 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_7 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___pool0;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1;
		L_1 = GenericVirtualFuncInvoker0< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var, L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = L_1;
		V_5 = L_2;
		__this->____vHead_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vHead_0), (void*)L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = V_5;
		V_0 = L_3;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_4 = ___pool0;
		NullCheck(L_4);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5;
		L_5 = GenericVirtualFuncInvoker0< Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* >::Invoke(IPool_Get_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_m51643A8B0CFF1C5F247F180DE113F73632C86394_RuntimeMethod_var, L_4);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6 = L_5;
		V_6 = L_6;
		__this->____fHead_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fHead_1), (void*)L_6);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_7 = V_6;
		V_1 = L_7;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_8 = ___pool0;
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_9;
		L_9 = EdgePair_Create_m7196DB2612DDC69F4AF9EE133D20846B86A4E69F(L_8, NULL);
		V_2 = L_9;
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_10 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = L_10.____e_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = L_11;
		V_7 = L_12;
		__this->____eHead_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHead_2), (void*)L_12);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_7;
		V_3 = L_13;
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_14 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = L_14.____eSym_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = L_15;
		V_7 = L_16;
		__this->____eHeadSym_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHeadSym_3), (void*)L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_7;
		V_4 = L_17;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = L_20;
		V_5 = L_21;
		NullCheck(L_19);
		L_19->____prev_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->____prev_0), (void*)L_21);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = V_5;
		NullCheck(L_18);
		L_18->____next_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->____next_1), (void*)L_22);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23 = V_0;
		NullCheck(L_23);
		L_23->____anEdge_2 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->____anEdge_2), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_24 = V_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_25 = V_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_26 = V_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_27 = L_26;
		V_6 = L_27;
		NullCheck(L_25);
		L_25->____prev_0 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->____prev_0), (void*)L_27);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_28 = V_6;
		NullCheck(L_24);
		L_24->____next_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->____next_1), (void*)L_28);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_29 = V_1;
		NullCheck(L_29);
		L_29->____anEdge_2 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->____anEdge_2), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_30 = V_1;
		NullCheck(L_30);
		L_30->____trail_3 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_30->____trail_3), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_31 = V_1;
		NullCheck(L_31);
		L_31->____marked_5 = (bool)0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_32 = V_1;
		NullCheck(L_32);
		L_32->____inside_6 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_3;
		NullCheck(L_33);
		L_33->____next_1 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_33->____next_1), (void*)L_34);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_4;
		NullCheck(L_35);
		L_35->____Sym_2 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&L_35->____Sym_2), (void*)L_36);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = V_3;
		NullCheck(L_37);
		L_37->____Onext_3 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_37->____Onext_3), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_3;
		NullCheck(L_38);
		L_38->____Lnext_4 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->____Lnext_4), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_3;
		NullCheck(L_39);
		L_39->____Org_5 = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_39->____Org_5), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = V_3;
		NullCheck(L_40);
		L_40->____Lface_6 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_40->____Lface_6), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = V_3;
		NullCheck(L_41);
		L_41->____winding_8 = 0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_3;
		NullCheck(L_42);
		L_42->____activeRegion_7 = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_42->____activeRegion_7), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43 = V_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_4;
		NullCheck(L_43);
		L_43->____next_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&L_43->____next_1), (void*)L_44);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = V_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_3;
		NullCheck(L_45);
		L_45->____Sym_2 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&L_45->____Sym_2), (void*)L_46);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = V_4;
		NullCheck(L_47);
		L_47->____Onext_3 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_47->____Onext_3), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_4;
		NullCheck(L_48);
		L_48->____Lnext_4 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_48->____Lnext_4), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = V_4;
		NullCheck(L_49);
		L_49->____Org_5 = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_49->____Org_5), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_4;
		NullCheck(L_50);
		L_50->____Lface_6 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_50->____Lface_6), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = V_4;
		NullCheck(L_51);
		L_51->____winding_8 = 0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52 = V_4;
		NullCheck(L_52);
		L_52->____activeRegion_7 = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_52->____activeRegion_7), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		return;
	}
}
// System.Void LibTessDotNet.Mesh::Reset(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Reset_m7D0904C1C1CFE59B8C52DBD2144FB4090E9187D3 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_m0726CFC60490E8225FD007D18719FEC8C3D610F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mF7D72C6E358662F070DBD36C0B7C1BC61E8C145D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mCF5A50512654D7E0169573E26532B28C2E5E6FB2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	bool V_2 = false;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_3 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_4 = NULL;
	bool V_5 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_6 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_7 = NULL;
	bool V_8 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_9 = NULL;
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = __this->____fHead_1;
		V_0 = L_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = __this->____fHead_1;
		V_1 = L_1;
		goto IL_0025;
	}

IL_0011:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = V_0;
		NullCheck(L_2);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = L_2->____next_1;
		V_1 = L_3;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_4 = ___pool0;
		NullCheck(L_4);
		GenericVirtualActionInvoker1< Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF** >::Invoke(IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mF7D72C6E358662F070DBD36C0B7C1BC61E8C145D_RuntimeMethod_var, L_4, (&V_0));
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_1;
		V_0 = L_5;
	}

IL_0025:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6 = V_0;
		NullCheck(L_6);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_7 = L_6->____next_1;
		V_2 = (bool)((!(((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0011;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = __this->____vHead_0;
		V_3 = L_9;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = __this->____vHead_0;
		V_4 = L_10;
		goto IL_0059;
	}

IL_0043:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = V_3;
		NullCheck(L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = L_11->____next_1;
		V_4 = L_12;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_13 = ___pool0;
		NullCheck(L_13);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mCF5A50512654D7E0169573E26532B28C2E5E6FB2_RuntimeMethod_var, L_13, (&V_3));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = V_4;
		V_3 = L_14;
	}

IL_0059:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = V_3;
		NullCheck(L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = L_15->____next_1;
		V_5 = (bool)((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_16) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_17 = V_5;
		if (L_17)
		{
			goto IL_0043;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = __this->____eHead_2;
		V_6 = L_18;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = __this->____eHead_2;
		V_7 = L_19;
		goto IL_00a0;
	}

IL_007a:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_6;
		NullCheck(L_20);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = L_20->____next_1;
		V_7 = L_21;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_22 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_6;
		NullCheck(L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** L_24 = (&L_23->____Sym_2);
		NullCheck(L_22);
		GenericVirtualActionInvoker1< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** >::Invoke(IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_m0726CFC60490E8225FD007D18719FEC8C3D610F7_RuntimeMethod_var, L_22, L_24);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_25 = ___pool0;
		NullCheck(L_25);
		GenericVirtualActionInvoker1< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** >::Invoke(IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_m0726CFC60490E8225FD007D18719FEC8C3D610F7_RuntimeMethod_var, L_25, (&V_6));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_7;
		V_6 = L_26;
	}

IL_00a0:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_6;
		NullCheck(L_27);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = L_27->____next_1;
		V_8 = (bool)((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_28) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_29 = V_8;
		if (L_29)
		{
			goto IL_007a;
		}
	}
	{
		__this->____vHead_0 = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vHead_0), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		__this->____fHead_1 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fHead_1), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		V_9 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		__this->____eHeadSym_3 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHeadSym_3), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_9;
		__this->____eHead_2 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHead_2), (void*)L_30);
		return;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::MakeEdge(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_MakeEdge_m885B759356861633DA4414A5DE88F5FDB0E8B8E7 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = __this->____eHead_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2;
		L_2 = MeshUtils_MakeEdge_m1FBC01F73703AF9899163059E14810E5B54033CB(L_0, L_1, NULL);
		V_0 = L_2;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_3 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = __this->____vHead_0;
		MeshUtils_MakeVertex_m0E16EF166956CA6D7DEE0C0C541DD90F9B0F3BAC(L_3, L_4, L_5, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_6 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_0;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7->____Sym_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = __this->____vHead_0;
		MeshUtils_MakeVertex_m0E16EF166956CA6D7DEE0C0C541DD90F9B0F3BAC(L_6, L_8, L_9, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_10 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = __this->____fHead_1;
		MeshUtils_MakeFace_mE0EED973273FBA225485B9D39397577ED118E578(L_10, L_11, L_12, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		V_1 = L_13;
		goto IL_0041;
	}

IL_0041:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = V_1;
		return L_14;
	}
}
// System.Void LibTessDotNet.Mesh::Splice(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrg1, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eDst2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___eOrg1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___eDst2;
		V_2 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_0) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_1))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_00c1;
	}

IL_000f:
	{
		V_0 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = ___eDst2;
		NullCheck(L_3);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = L_3->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = ___eOrg1;
		NullCheck(L_5);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = L_5->____Org_5;
		V_3 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_4) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		V_0 = (bool)1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_8 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___eDst2;
		NullCheck(L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = L_9->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = ___eOrg1;
		NullCheck(L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = L_11->____Org_5;
		MeshUtils_KillVertex_m1CAF836C0795C6B7AE8785EC8667DB16BC3C83AF(L_8, L_10, L_12, NULL);
	}

IL_003d:
	{
		V_1 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___eDst2;
		NullCheck(L_13);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = L_13->____Lface_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = ___eOrg1;
		NullCheck(L_15);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_16 = L_15->____Lface_6;
		V_4 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_14) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_006d;
		}
	}
	{
		V_1 = (bool)1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_18 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = ___eDst2;
		NullCheck(L_19);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_20 = L_19->____Lface_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = ___eOrg1;
		NullCheck(L_21);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_22 = L_21->____Lface_6;
		MeshUtils_KillFace_m75741DEEB1047F98DB2077A37F0C4FAEFDBEB3FD(L_18, L_20, L_22, NULL);
	}

IL_006d:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = ___eDst2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = ___eOrg1;
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_23, L_24, NULL);
		bool L_25 = V_0;
		V_5 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_009b;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_27 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = ___eDst2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = ___eOrg1;
		NullCheck(L_29);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_30 = L_29->____Org_5;
		MeshUtils_MakeVertex_m0E16EF166956CA6D7DEE0C0C541DD90F9B0F3BAC(L_27, L_28, L_30, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = ___eOrg1;
		NullCheck(L_31);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_32 = L_31->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = ___eOrg1;
		NullCheck(L_32);
		L_32->____anEdge_2 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->____anEdge_2), (void*)L_33);
	}

IL_009b:
	{
		bool L_34 = V_1;
		V_6 = (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_6;
		if (!L_35)
		{
			goto IL_00c1;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_36 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = ___eDst2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = ___eOrg1;
		NullCheck(L_38);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_39 = L_38->____Lface_6;
		MeshUtils_MakeFace_mE0EED973273FBA225485B9D39397577ED118E578(L_36, L_37, L_39, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = ___eOrg1;
		NullCheck(L_40);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_41 = L_40->____Lface_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = ___eOrg1;
		NullCheck(L_41);
		L_41->____anEdge_2 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&L_41->____anEdge_2), (void*)L_42);
	}

IL_00c1:
	{
		return;
	}
}
// System.Void LibTessDotNet.Mesh::Delete(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eDel1, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___eDel1;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Sym_2;
		V_0 = L_1;
		V_1 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___eDel1;
		NullCheck(L_2);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = L_2->____Lface_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = ___eDel1;
		NullCheck(L_4);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5;
		L_5 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_4, NULL);
		V_2 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_3) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		V_1 = (bool)1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_7 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = ___eDel1;
		NullCheck(L_8);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9 = L_8->____Lface_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = ___eDel1;
		NullCheck(L_10);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_11;
		L_11 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_10, NULL);
		MeshUtils_KillFace_m75741DEEB1047F98DB2077A37F0C4FAEFDBEB3FD(L_7, L_9, L_11, NULL);
	}

IL_0036:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = ___eDel1;
		NullCheck(L_12);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = L_12->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = ___eDel1;
		V_3 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_13) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0055;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_16 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = ___eDel1;
		NullCheck(L_17);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = L_17->____Org_5;
		MeshUtils_KillVertex_m1CAF836C0795C6B7AE8785EC8667DB16BC3C83AF(L_16, L_18, (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL, NULL);
		goto IL_00a0;
	}

IL_0055:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = ___eDel1;
		NullCheck(L_19);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_20;
		L_20 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_19, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = ___eDel1;
		NullCheck(L_21);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22;
		L_22 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_21, NULL);
		NullCheck(L_20);
		L_20->____anEdge_2 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____anEdge_2), (void*)L_22);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = ___eDel1;
		NullCheck(L_23);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = L_23->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = ___eDel1;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = L_25->____Onext_3;
		NullCheck(L_24);
		L_24->____anEdge_2 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->____anEdge_2), (void*)L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = ___eDel1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = ___eDel1;
		NullCheck(L_28);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29;
		L_29 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_28, NULL);
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_27, L_29, NULL);
		bool L_30 = V_1;
		V_4 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_4;
		if (!L_31)
		{
			goto IL_009f;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_32 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = ___eDel1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = ___eDel1;
		NullCheck(L_34);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_35 = L_34->____Lface_6;
		MeshUtils_MakeFace_mE0EED973273FBA225485B9D39397577ED118E578(L_32, L_33, L_35, NULL);
	}

IL_009f:
	{
	}

IL_00a0:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_0;
		NullCheck(L_36);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = L_36->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_0;
		V_5 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_37) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_38))? 1 : 0);
		bool L_39 = V_5;
		if (!L_39)
		{
			goto IL_00cf;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_40 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = V_0;
		NullCheck(L_41);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_42 = L_41->____Org_5;
		MeshUtils_KillVertex_m1CAF836C0795C6B7AE8785EC8667DB16BC3C83AF(L_40, L_42, (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_43 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_0;
		NullCheck(L_44);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_45 = L_44->____Lface_6;
		MeshUtils_KillFace_m75741DEEB1047F98DB2077A37F0C4FAEFDBEB3FD(L_43, L_45, (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL, NULL);
		goto IL_0100;
	}

IL_00cf:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = ___eDel1;
		NullCheck(L_46);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_47 = L_46->____Lface_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_0;
		NullCheck(L_48);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49;
		L_49 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_48, NULL);
		NullCheck(L_47);
		L_47->____anEdge_2 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&L_47->____anEdge_2), (void*)L_49);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_0;
		NullCheck(L_50);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_51 = L_50->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52 = V_0;
		NullCheck(L_52);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_53 = L_52->____Onext_3;
		NullCheck(L_51);
		L_51->____anEdge_2 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&L_51->____anEdge_2), (void*)L_53);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_55 = V_0;
		NullCheck(L_55);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_56;
		L_56 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_55, NULL);
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_54, L_56, NULL);
	}

IL_0100:
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_57 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_58 = ___eDel1;
		MeshUtils_KillEdge_mE2132C4410E6FCC3090942C9E37A525B7873F0F1(L_57, L_58, NULL);
		return;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::AddEdgeVertex(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_AddEdgeVertex_mBC2ECB3C7B23CEC78EB69BF83E3E49D215676054 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrg1, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___eOrg1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2;
		L_2 = MeshUtils_MakeEdge_m1FBC01F73703AF9899163059E14810E5B54033CB(L_0, L_1, NULL);
		V_0 = L_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_0;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____Sym_2;
		V_1 = L_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = ___eOrg1;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____Lnext_4;
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_5, L_7, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___eOrg1;
		NullCheck(L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10;
		L_10 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_9, NULL);
		NullCheck(L_8);
		L_8->____Org_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____Org_5), (void*)L_10);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_11 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_13);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = L_13->____Org_5;
		MeshUtils_MakeVertex_m0E16EF166956CA6D7DEE0C0C541DD90F9B0F3BAC(L_11, L_12, L_14, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = ___eOrg1;
		NullCheck(L_17);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18 = L_17->____Lface_6;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_19 = L_18;
		V_2 = L_19;
		NullCheck(L_16);
		L_16->____Lface_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->____Lface_6), (void*)L_19);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_20 = V_2;
		NullCheck(L_15);
		L_15->____Lface_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____Lface_6), (void*)L_20);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_0;
		V_3 = L_21;
		goto IL_0050;
	}

IL_0050:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_3;
		return L_22;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::SplitEdge(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrg1, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___eOrg1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2;
		L_2 = Mesh_AddEdgeVertex_mBC2ECB3C7B23CEC78EB69BF83E3E49D215676054(__this, L_0, L_1, NULL);
		V_0 = L_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_0;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____Sym_2;
		V_1 = L_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = ___eOrg1;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = ___eOrg1;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7->____Sym_2;
		NullCheck(L_8);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9;
		L_9 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_8, NULL);
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_6, L_9, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = ___eOrg1;
		NullCheck(L_10);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = L_10->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_1;
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_11, L_12, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___eOrg1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = V_1;
		NullCheck(L_14);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = L_14->____Org_5;
		NullCheck(L_13);
		Edge_set__Dst_mFC8AB632C1CBED66AC767230468FC1E30DB1682E(L_13, L_15, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_1;
		NullCheck(L_16);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17;
		L_17 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_16, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = V_1;
		NullCheck(L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = L_18->____Sym_2;
		NullCheck(L_17);
		L_17->____anEdge_2 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->____anEdge_2), (void*)L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = ___eOrg1;
		NullCheck(L_21);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_22;
		L_22 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_21, NULL);
		NullCheck(L_20);
		Edge_set__Rface_m9A4FEC09331777DF1DC569EE7C8759B96CBD7FBF(L_20, L_22, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = ___eOrg1;
		NullCheck(L_24);
		int32_t L_25 = L_24->____winding_8;
		NullCheck(L_23);
		L_23->____winding_8 = L_25;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_1;
		NullCheck(L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = L_26->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = ___eOrg1;
		NullCheck(L_28);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = L_28->____Sym_2;
		NullCheck(L_29);
		int32_t L_30 = L_29->____winding_8;
		NullCheck(L_27);
		L_27->____winding_8 = L_30;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_1;
		V_2 = L_31;
		goto IL_0086;
	}

IL_0086:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_2;
		return L_32;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::Connect(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrg1, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eDst2, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_4 = NULL;
	bool V_5 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_6 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___eOrg1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2;
		L_2 = MeshUtils_MakeEdge_m1FBC01F73703AF9899163059E14810E5B54033CB(L_0, L_1, NULL);
		V_0 = L_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_0;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____Sym_2;
		V_1 = L_4;
		V_2 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = ___eDst2;
		NullCheck(L_5);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6 = L_5->____Lface_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = ___eOrg1;
		NullCheck(L_7);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_8 = L_7->____Lface_6;
		V_3 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_6) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		V_2 = (bool)1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_10 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = ___eDst2;
		NullCheck(L_11);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = L_11->____Lface_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___eOrg1;
		NullCheck(L_13);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = L_13->____Lface_6;
		MeshUtils_KillFace_m75741DEEB1047F98DB2077A37F0C4FAEFDBEB3FD(L_10, L_12, L_14, NULL);
	}

IL_003e:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = ___eOrg1;
		NullCheck(L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = L_16->____Lnext_4;
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_15, L_17, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = ___eDst2;
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_18, L_19, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = ___eOrg1;
		NullCheck(L_21);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22;
		L_22 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_21, NULL);
		NullCheck(L_20);
		L_20->____Org_5 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____Org_5), (void*)L_22);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = ___eDst2;
		NullCheck(L_24);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = L_24->____Org_5;
		NullCheck(L_23);
		L_23->____Org_5 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->____Org_5), (void*)L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = ___eOrg1;
		NullCheck(L_28);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_29 = L_28->____Lface_6;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_30 = L_29;
		V_4 = L_30;
		NullCheck(L_27);
		L_27->____Lface_6 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->____Lface_6), (void*)L_30);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_31 = V_4;
		NullCheck(L_26);
		L_26->____Lface_6 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->____Lface_6), (void*)L_31);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = ___eOrg1;
		NullCheck(L_32);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_33 = L_32->____Lface_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_1;
		NullCheck(L_33);
		L_33->____anEdge_2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_33->____anEdge_2), (void*)L_34);
		bool L_35 = V_2;
		V_5 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_5;
		if (!L_36)
		{
			goto IL_00a8;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_37 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = ___eOrg1;
		NullCheck(L_39);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_40 = L_39->____Lface_6;
		MeshUtils_MakeFace_mE0EED973273FBA225485B9D39397577ED118E578(L_37, L_38, L_40, NULL);
	}

IL_00a8:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = V_0;
		V_6 = L_41;
		goto IL_00ad;
	}

IL_00ad:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_6;
		return L_42;
	}
}
// System.Void LibTessDotNet.Mesh::ZapFace(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_ZapFace_m40CB995646CB70A3A752001902CF3A1289CC54E7 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___fZap1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mF7D72C6E358662F070DBD36C0B7C1BC61E8C145D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_4 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = ___fZap1;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____anEdge_2;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____Lnext_4;
		V_1 = L_3;
	}

IL_000f:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_1;
		V_2 = L_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_2;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Lnext_4;
		V_1 = L_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_2;
		NullCheck(L_7);
		L_7->____Lface_6 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->____Lface_6), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_2;
		NullCheck(L_8);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9;
		L_9 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_8, NULL);
		V_6 = (bool)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_00c5;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_2;
		NullCheck(L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = L_11->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_2;
		V_7 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_12) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_13))? 1 : 0);
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_0054;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_15 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_2;
		NullCheck(L_16);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = L_16->____Org_5;
		MeshUtils_KillVertex_m1CAF836C0795C6B7AE8785EC8667DB16BC3C83AF(L_15, L_17, (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL, NULL);
		goto IL_0074;
	}

IL_0054:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = V_2;
		NullCheck(L_18);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = L_18->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_2;
		NullCheck(L_20);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = L_20->____Onext_3;
		NullCheck(L_19);
		L_19->____anEdge_2 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->____anEdge_2), (void*)L_21);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_2;
		NullCheck(L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24;
		L_24 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_23, NULL);
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_22, L_24, NULL);
	}

IL_0074:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_2;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = L_25->____Sym_2;
		V_3 = L_26;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_3;
		NullCheck(L_27);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = L_27->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_3;
		V_8 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_28) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_29))? 1 : 0);
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_009c;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_31 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_3;
		NullCheck(L_32);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = L_32->____Org_5;
		MeshUtils_KillVertex_m1CAF836C0795C6B7AE8785EC8667DB16BC3C83AF(L_31, L_33, (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL, NULL);
		goto IL_00bc;
	}

IL_009c:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_3;
		NullCheck(L_34);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_35 = L_34->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_3;
		NullCheck(L_36);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = L_36->____Onext_3;
		NullCheck(L_35);
		L_35->____anEdge_2 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&L_35->____anEdge_2), (void*)L_37);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_3;
		NullCheck(L_39);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40;
		L_40 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_39, NULL);
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_38, L_40, NULL);
	}

IL_00bc:
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_41 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_2;
		MeshUtils_KillEdge_mE2132C4410E6FCC3090942C9E37A525B7873F0F1(L_41, L_42, NULL);
	}

IL_00c5:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_0;
		V_9 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_43) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_44))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_9;
		if (L_45)
		{
			goto IL_000f;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_46 = ___fZap1;
		NullCheck(L_46);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_47 = L_46->____prev_0;
		V_4 = L_47;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_48 = ___fZap1;
		NullCheck(L_48);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_49 = L_48->____next_1;
		V_5 = L_49;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_50 = V_5;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_51 = V_4;
		NullCheck(L_50);
		L_50->____prev_0 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&L_50->____prev_0), (void*)L_51);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_52 = V_4;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_53 = V_5;
		NullCheck(L_52);
		L_52->____next_1 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&L_52->____next_1), (void*)L_53);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_54 = ___pool0;
		NullCheck(L_54);
		GenericVirtualActionInvoker1< Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF** >::Invoke(IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mF7D72C6E358662F070DBD36C0B7C1BC61E8C145D_RuntimeMethod_var, L_54, (&___fZap1));
		return;
	}
}
// System.Void LibTessDotNet.Mesh::MergeConvexFaces(LibTessDotNet.IPool,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MergeConvexFaces_m2452DF609E5F2842DCB3645A91AE38474D00189C (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, int32_t ___maxVertsPerFace1, const RuntimeMethod* method) 
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_2 = NULL;
	bool V_3 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_5 = NULL;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B20_0 = 0;
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = __this->____fHead_1;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____next_1;
		V_0 = L_1;
		goto IL_013d;
	}

IL_0012:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = L_2->____inside_6;
		V_3 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0136;
	}

IL_0026:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_0;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____anEdge_2;
		V_1 = L_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		NullCheck(L_7);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = L_7->____Org_5;
		V_2 = L_8;
		goto IL_012d;
	}

IL_0039:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_1;
		NullCheck(L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = L_9->____Lnext_4;
		V_4 = L_10;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_1;
		NullCheck(L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = L_11->____Sym_2;
		V_5 = L_12;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_5;
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = V_5;
		NullCheck(L_14);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_15 = L_14->____Lface_6;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_5;
		NullCheck(L_16);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_17 = L_16->____Lface_6;
		NullCheck(L_17);
		bool L_18 = L_17->____inside_6;
		G_B8_0 = ((int32_t)(L_18));
		goto IL_0066;
	}

IL_0065:
	{
		G_B8_0 = 0;
	}

IL_0066:
	{
		V_6 = (bool)G_B8_0;
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_010d;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Face_get_VertsCount_m0EB6E9229787A15369C28423410F895E7F211AC0(L_20, NULL);
		V_7 = L_21;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_5;
		NullCheck(L_22);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_23 = L_22->____Lface_6;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = Face_get_VertsCount_m0EB6E9229787A15369C28423410F895E7F211AC0(L_23, NULL);
		V_8 = L_24;
		int32_t L_25 = V_7;
		int32_t L_26 = V_8;
		int32_t L_27 = ___maxVertsPerFace1;
		V_9 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_25, L_26)), 2))) > ((int32_t)L_27))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_010c;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_1;
		NullCheck(L_29);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30;
		L_30 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_29, NULL);
		NullCheck(L_30);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_31 = L_30->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_1;
		NullCheck(L_32);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = L_32->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_5;
		NullCheck(L_34);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = L_34->____Lnext_4;
		NullCheck(L_35);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = L_35->____Lnext_4;
		NullCheck(L_36);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_37 = L_36->____Org_5;
		bool L_38;
		L_38 = Geom_VertCCW_m3C73C97020D8B1930F6299B1539CBE4E9962ACF3(L_31, L_33, L_37, NULL);
		if (!L_38)
		{
			goto IL_00ed;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_5;
		NullCheck(L_39);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40;
		L_40 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_39, NULL);
		NullCheck(L_40);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_41 = L_40->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_5;
		NullCheck(L_42);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = L_42->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_1;
		NullCheck(L_44);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = L_44->____Lnext_4;
		NullCheck(L_45);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = L_45->____Lnext_4;
		NullCheck(L_46);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_47 = L_46->____Org_5;
		bool L_48;
		L_48 = Geom_VertCCW_m3C73C97020D8B1930F6299B1539CBE4E9962ACF3(L_41, L_43, L_47, NULL);
		G_B13_0 = ((int32_t)(L_48));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B13_0 = 0;
	}

IL_00ee:
	{
		V_10 = (bool)G_B13_0;
		bool L_49 = V_10;
		if (!L_49)
		{
			goto IL_010b;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_5;
		NullCheck(L_50);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = L_50->____Lnext_4;
		V_4 = L_51;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_52 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_53 = V_5;
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(__this, L_52, L_53, NULL);
		V_1 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
	}

IL_010b:
	{
	}

IL_010c:
	{
	}

IL_010d:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = V_1;
		if (!L_54)
		{
			goto IL_0120;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_55 = V_1;
		NullCheck(L_55);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_56 = L_55->____Lnext_4;
		NullCheck(L_56);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_57 = L_56->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_58 = V_2;
		G_B20_0 = ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_57) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_58))? 1 : 0);
		goto IL_0121;
	}

IL_0120:
	{
		G_B20_0 = 0;
	}

IL_0121:
	{
		V_11 = (bool)G_B20_0;
		bool L_59 = V_11;
		if (!L_59)
		{
			goto IL_0129;
		}
	}
	{
		goto IL_0135;
	}

IL_0129:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_60 = V_4;
		V_1 = L_60;
	}

IL_012d:
	{
		V_12 = (bool)1;
		goto IL_0039;
	}

IL_0135:
	{
	}

IL_0136:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_61 = V_0;
		NullCheck(L_61);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_62 = L_61->____next_1;
		V_0 = L_62;
	}

IL_013d:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_63 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_64 = __this->____fHead_1;
		V_13 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_63) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_64))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_65 = V_13;
		if (L_65)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Mesh::Check()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Check_m60A4227D366A3F601EC5B8D95D672862D9BC8146 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_2 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_3 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_4 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B27_0 = 0;
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = __this->____fHead_1;
		V_1 = L_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = __this->____fHead_1;
		V_1 = L_1;
		goto IL_00a4;
	}

IL_0014:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = V_2;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____anEdge_2;
		V_0 = L_3;
	}

IL_001c:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_5) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_0;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7->____Sym_2;
		NullCheck(L_8);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = L_8->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_9) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_10))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_0;
		NullCheck(L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = L_11->____Lnext_4;
		NullCheck(L_12);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = L_12->____Onext_3;
		NullCheck(L_13);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = L_13->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_14) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_15))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_0;
		NullCheck(L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = L_16->____Onext_3;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = L_17->____Sym_2;
		NullCheck(L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = L_18->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_19) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_20))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_0;
		NullCheck(L_21);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_22 = L_21->____Lface_6;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_23 = V_2;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_22) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_23))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_0;
		NullCheck(L_24);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = L_24->____Lnext_4;
		V_0 = L_25;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_27 = V_2;
		NullCheck(L_27);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = L_27->____anEdge_2;
		V_6 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_26) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_28))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_6;
		if (L_29)
		{
			goto IL_001c;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_30 = V_2;
		V_1 = L_30;
	}

IL_00a4:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_31 = V_1;
		NullCheck(L_31);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_32 = L_31->____next_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_33 = L_32;
		V_2 = L_33;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_34 = __this->____fHead_1;
		V_7 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_33) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_34))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_7;
		if (L_35)
		{
			goto IL_0014;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_36 = V_2;
		NullCheck(L_36);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_37 = L_36->____prev_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_38 = V_1;
		if ((!(((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_37) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_38))))
		{
			goto IL_00d4;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_39 = V_2;
		NullCheck(L_39);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = L_39->____anEdge_2;
		G_B8_0 = ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_40) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_00d5;
	}

IL_00d4:
	{
		G_B8_0 = 0;
	}

IL_00d5:
	{
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)G_B8_0, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_41 = __this->____vHead_0;
		V_3 = L_41;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_42 = __this->____vHead_0;
		V_3 = L_42;
		goto IL_0192;
	}

IL_00ee:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = V_4;
		NullCheck(L_43);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_44 = L_43->____prev_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_45 = V_3;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_44) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_45))? 1 : 0), NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_46 = V_4;
		NullCheck(L_46);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = L_46->____anEdge_2;
		V_0 = L_47;
	}

IL_0107:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_0;
		NullCheck(L_48);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = L_48->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_49) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = V_0;
		NullCheck(L_51);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52 = L_51->____Sym_2;
		NullCheck(L_52);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_53 = L_52->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_53) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_54))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_55 = V_0;
		NullCheck(L_55);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_56 = L_55->____Lnext_4;
		NullCheck(L_56);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_57 = L_56->____Onext_3;
		NullCheck(L_57);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_58 = L_57->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_59 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_58) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_59))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_60 = V_0;
		NullCheck(L_60);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_61 = L_60->____Onext_3;
		NullCheck(L_61);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_62 = L_61->____Sym_2;
		NullCheck(L_62);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_63 = L_62->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_64 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_63) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_64))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_65 = V_0;
		NullCheck(L_65);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_66 = L_65->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_67 = V_4;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_66) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_67))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_68 = V_0;
		NullCheck(L_68);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_69 = L_68->____Onext_3;
		V_0 = L_69;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_70 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_71 = V_4;
		NullCheck(L_71);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_72 = L_71->____anEdge_2;
		V_8 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_70) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_72))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_73 = V_8;
		if (L_73)
		{
			goto IL_0107;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_74 = V_4;
		V_3 = L_74;
	}

IL_0192:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_75 = V_3;
		NullCheck(L_75);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_76 = L_75->____next_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_77 = L_76;
		V_4 = L_77;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_78 = __this->____vHead_0;
		V_9 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_77) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_78))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_79 = V_9;
		if (L_79)
		{
			goto IL_00ee;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_80 = V_4;
		NullCheck(L_80);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_81 = L_80->____prev_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_82 = V_3;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_81) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_82))))
		{
			goto IL_01c5;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_83 = V_4;
		NullCheck(L_83);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_84 = L_83->____anEdge_2;
		G_B16_0 = ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_01c6;
	}

IL_01c5:
	{
		G_B16_0 = 0;
	}

IL_01c6:
	{
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)G_B16_0, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_85 = __this->____eHead_2;
		V_5 = L_85;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_86 = __this->____eHead_2;
		V_5 = L_86;
		goto IL_0276;
	}

IL_01e1:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_87 = V_0;
		NullCheck(L_87);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_88 = L_87->____Sym_2;
		NullCheck(L_88);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_89 = L_88->____next_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_90 = V_5;
		NullCheck(L_90);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_91 = L_90->____Sym_2;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_89) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_91))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_92 = V_0;
		NullCheck(L_92);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_93 = L_92->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_94 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_93) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_94))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_95 = V_0;
		NullCheck(L_95);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_96 = L_95->____Sym_2;
		NullCheck(L_96);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_97 = L_96->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_98 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_97) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_98))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_99 = V_0;
		NullCheck(L_99);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_100 = L_99->____Org_5;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_100) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_101 = V_0;
		NullCheck(L_101);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_102;
		L_102 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_101, NULL);
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_102) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_103 = V_0;
		NullCheck(L_103);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_104 = L_103->____Lnext_4;
		NullCheck(L_104);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_105 = L_104->____Onext_3;
		NullCheck(L_105);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_106 = L_105->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_107 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_106) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_107))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_108 = V_0;
		NullCheck(L_108);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_109 = L_108->____Onext_3;
		NullCheck(L_109);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_110 = L_109->____Sym_2;
		NullCheck(L_110);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_111 = L_110->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_112 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_111) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_112))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_113 = V_0;
		V_5 = L_113;
	}

IL_0276:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_114 = V_5;
		NullCheck(L_114);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_115 = L_114->____next_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_116 = L_115;
		V_0 = L_116;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_117 = __this->____eHead_2;
		V_10 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_116) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_117))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_118 = V_10;
		if (L_118)
		{
			goto IL_01e1;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_119 = V_0;
		NullCheck(L_119);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_120 = L_119->____Sym_2;
		NullCheck(L_120);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_121 = L_120->____next_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_122 = V_5;
		NullCheck(L_122);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_123 = L_122->____Sym_2;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_121) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_123))))
		{
			goto IL_02e6;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_124 = V_0;
		NullCheck(L_124);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_125 = L_124->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_126 = __this->____eHeadSym_3;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_125) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_126))))
		{
			goto IL_02e6;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_127 = V_0;
		NullCheck(L_127);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_128 = L_127->____Sym_2;
		NullCheck(L_128);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_129 = L_128->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_130 = V_0;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_129) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_130))))
		{
			goto IL_02e6;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_131 = V_0;
		NullCheck(L_131);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_132 = L_131->____Org_5;
		if (L_132)
		{
			goto IL_02e6;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_133 = V_0;
		NullCheck(L_133);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_134;
		L_134 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_133, NULL);
		if (L_134)
		{
			goto IL_02e6;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_135 = V_0;
		NullCheck(L_135);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_136 = L_135->____Lface_6;
		if (L_136)
		{
			goto IL_02e6;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_137 = V_0;
		NullCheck(L_137);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_138;
		L_138 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_137, NULL);
		G_B27_0 = ((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_138) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_02e7;
	}

IL_02e6:
	{
		G_B27_0 = 0;
	}

IL_02e7:
	{
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)G_B27_0, NULL);
		return;
	}
}
// System.Void LibTessDotNet.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m8BF4E325A856B4818EBD72204EC256BF74D7D6EF (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, const RuntimeMethod* method) 
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
// System.Single LibTessDotNet.Vec3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	{
		int32_t L_0 = ___index0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		float L_2 = __this->___X_1;
		V_1 = L_2;
		goto IL_003a;
	}

IL_0012:
	{
		int32_t L_3 = ___index0;
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = __this->___Y_2;
		V_1 = L_5;
		goto IL_003a;
	}

IL_0023:
	{
		int32_t L_6 = ___index0;
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)2))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		float L_8 = __this->___Z_3;
		V_1 = L_8;
		goto IL_003a;
	}

IL_0034:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF(L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318_RuntimeMethod_var)));
	}

IL_003a:
	{
		float L_10 = V_1;
		return L_10;
	}
}
IL2CPP_EXTERN_C  float Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*>(__this + _offset);
	float _returnValue;
	_returnValue = Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void LibTessDotNet.Vec3::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = ___index0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		float L_2 = ___value1;
		__this->___X_1 = L_2;
		goto IL_003a;
	}

IL_0012:
	{
		int32_t L_3 = ___index0;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = ___value1;
		__this->___Y_2 = L_5;
		goto IL_003a;
	}

IL_0023:
	{
		int32_t L_6 = ___index0;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)2))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		float L_8 = ___value1;
		__this->___Z_3 = L_8;
		goto IL_003a;
	}

IL_0034:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF(L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857_RuntimeMethod_var)));
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*>(__this + _offset);
	Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(_thisAdjusted, ___index0, ___value1, method);
}
// System.Void LibTessDotNet.Vec3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3__ctor_m937D1DD303AF7D61662A455E5F208BDB81106B7C (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___X_1 = L_0;
		float L_1 = ___y1;
		__this->___Y_2 = L_1;
		float L_2 = ___z2;
		__this->___Z_3 = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void Vec3__ctor_m937D1DD303AF7D61662A455E5F208BDB81106B7C_AdjustorThunk (RuntimeObject* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*>(__this + _offset);
	Vec3__ctor_m937D1DD303AF7D61662A455E5F208BDB81106B7C(_thisAdjusted, ___x0, ___y1, ___z2, method);
}
// System.Void LibTessDotNet.Vec3::Sub(LibTessDotNet.Vec3&,LibTessDotNet.Vec3&,LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Sub_mFA0434EA3AC2F8C1A173BF40E85FCF41120FB008 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___lhs0, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___rhs1, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___result2, const RuntimeMethod* method) 
{
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_0 = ___result2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_1 = ___lhs0;
		float L_2 = L_1->___X_1;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_3 = ___rhs1;
		float L_4 = L_3->___X_1;
		L_0->___X_1 = ((float)il2cpp_codegen_subtract(L_2, L_4));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_5 = ___result2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_6 = ___lhs0;
		float L_7 = L_6->___Y_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_8 = ___rhs1;
		float L_9 = L_8->___Y_2;
		L_5->___Y_2 = ((float)il2cpp_codegen_subtract(L_7, L_9));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_10 = ___result2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_11 = ___lhs0;
		float L_12 = L_11->___Z_3;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_13 = ___rhs1;
		float L_14 = L_13->___Z_3;
		L_10->___Z_3 = ((float)il2cpp_codegen_subtract(L_12, L_14));
		return;
	}
}
// System.Void LibTessDotNet.Vec3::Neg(LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Neg_m615687EA76621EE708A5F7836B33DF54DC67E58C (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___v0, const RuntimeMethod* method) 
{
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_0 = ___v0;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_1 = ___v0;
		float L_2 = L_1->___X_1;
		L_0->___X_1 = ((-L_2));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_3 = ___v0;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_4 = ___v0;
		float L_5 = L_4->___Y_2;
		L_3->___Y_2 = ((-L_5));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_6 = ___v0;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_7 = ___v0;
		float L_8 = L_7->___Z_3;
		L_6->___Z_3 = ((-L_8));
		return;
	}
}
// System.Void LibTessDotNet.Vec3::Dot(LibTessDotNet.Vec3&,LibTessDotNet.Vec3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Dot_m6A3064B83CC6528E85FEB9E6F8D62699AFCE3E65 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___u0, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___v1, float* ___dot2, const RuntimeMethod* method) 
{
	{
		float* L_0 = ___dot2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_1 = ___u0;
		float L_2 = L_1->___X_1;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_3 = ___v1;
		float L_4 = L_3->___X_1;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_5 = ___u0;
		float L_6 = L_5->___Y_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_7 = ___v1;
		float L_8 = L_7->___Y_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_9 = ___u0;
		float L_10 = L_9->___Z_3;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_11 = ___v1;
		float L_12 = L_11->___Z_3;
		*((float*)L_0) = (float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_2, L_4)), ((float)il2cpp_codegen_multiply(L_6, L_8)))), ((float)il2cpp_codegen_multiply(L_10, L_12))));
		return;
	}
}
// System.Void LibTessDotNet.Vec3::Normalize(LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Normalize_m5C2A23AF12F5D6FF4025D08DBBD39199F98F69AB (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_0 = ___v0;
		float L_1 = L_0->___X_1;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_2 = ___v0;
		float L_3 = L_2->___X_1;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_4 = ___v0;
		float L_5 = L_4->___Y_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_6 = ___v0;
		float L_7 = L_6->___Y_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_8 = ___v0;
		float L_9 = L_8->___Z_3;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_10 = ___v0;
		float L_11 = L_10->___Z_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		float L_12 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((!(((float)L_12) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		float L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_14;
		L_14 = sqrt(((double)L_13));
		V_0 = ((float)((1.0f)/((float)L_14)));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_15 = ___v0;
		float* L_16 = (&L_15->___X_1);
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		float L_19 = V_0;
		*((float*)L_17) = (float)((float)il2cpp_codegen_multiply(L_18, L_19));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_20 = ___v0;
		float* L_21 = (&L_20->___Y_2);
		float* L_22 = L_21;
		float L_23 = *((float*)L_22);
		float L_24 = V_0;
		*((float*)L_22) = (float)((float)il2cpp_codegen_multiply(L_23, L_24));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_25 = ___v0;
		float* L_26 = (&L_25->___Z_3);
		float* L_27 = L_26;
		float L_28 = *((float*)L_27);
		float L_29 = V_0;
		*((float*)L_27) = (float)((float)il2cpp_codegen_multiply(L_28, L_29));
		return;
	}
}
// System.Int32 LibTessDotNet.Vec3::LongAxis(LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vec3_LongAxis_mE37BAB8C067EE68DBA8BC23061B6A0F1F175645F (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	float G_B4_0 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	{
		V_0 = 0;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_0 = ___v0;
		float L_1 = L_0->___Y_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = fabsf(L_1);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_3 = ___v0;
		float L_4 = L_3->___X_1;
		float L_5;
		L_5 = fabsf(L_4);
		V_1 = (bool)((((float)L_2) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		V_0 = 1;
	}

IL_0021:
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_7 = ___v0;
		float L_8 = L_7->___Z_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_9;
		L_9 = fabsf(L_8);
		int32_t L_10 = V_0;
		G_B3_0 = L_9;
		if (!L_10)
		{
			G_B4_0 = L_9;
			goto IL_0037;
		}
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_11 = ___v0;
		float L_12 = L_11->___Y_2;
		G_B5_0 = L_12;
		G_B5_1 = G_B3_0;
		goto IL_003d;
	}

IL_0037:
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_13 = ___v0;
		float L_14 = L_13->___X_1;
		G_B5_0 = L_14;
		G_B5_1 = G_B4_0;
	}

IL_003d:
	{
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_15;
		L_15 = fabsf(G_B5_0);
		V_2 = (bool)((((float)G_B5_1) > ((float)L_15))? 1 : 0);
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_004a;
		}
	}
	{
		V_0 = 2;
	}

IL_004a:
	{
		int32_t L_17 = V_0;
		V_3 = L_17;
		goto IL_004e;
	}

IL_004e:
	{
		int32_t L_18 = V_3;
		return L_18;
	}
}
// System.String LibTessDotNet.Vec3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vec3_ToString_mA4CE6161CB8D3BC075B3E5D9B94AAFABCB0B2878 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82FF2E4A5CEA89085A6360163E86CB104CFC8CE8);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		float L_0 = __this->___X_1;
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		float L_3 = __this->___Y_2;
		float L_4 = L_3;
		RuntimeObject* L_5 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_4);
		float L_6 = __this->___Z_3;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral82FF2E4A5CEA89085A6360163E86CB104CFC8CE8, L_2, L_5, L_8, NULL);
		V_0 = L_9;
		goto IL_002f;
	}

IL_002f:
	{
		String_t* L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C  String_t* Vec3_ToString_mA4CE6161CB8D3BC075B3E5D9B94AAFABCB0B2878_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vec3_ToString_mA4CE6161CB8D3BC075B3E5D9B94AAFABCB0B2878(_thisAdjusted, method);
	return _returnValue;
}
// System.Void LibTessDotNet.Vec3::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3__cctor_mEC878F17CD8277FE62C5523AFB7470B3F69F4CEE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_initobj((&((Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var))->___Zero_0), sizeof(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6));
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
// System.Void LibTessDotNet.IPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPool__ctor_m29B732D498A77485F01CFD88F4572DF3E3C57F41 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_m041DCE0402C6174692C9D0B42435B0949B653BD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_m38215260A66093A9A304925A43E5F441471D2D9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_m43508E569160C2A3E7DA45E1F1D79E39FB284DA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_mACE98FC86076F9666446FDFABE8886B476CB355F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_mD0D7A1710066169ADDCAFEB0B216912C0DD413A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_mDA80429C65AA20C2F3DB6E607E3A74FB000D1E1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_t6BEF63CAF2876270955D9C01C95ACB9C5BF31B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_t90F8C812E092F9734B6A7427BE56A2EAD003F4DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_mFA2E73AC4C38C33A3B82FFD67567F8B23126846D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mD253C242EE50DA3A963061B04B5C0F76174A7F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mCBF8A3BE3FE8D567704098C7CE31463CB659E7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m4733E06FAEB4F5D2B4EC2F22283F60D11B61527B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisNode_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C_m6D1AC4BDFD384D826F3F3CB6451D6F086645B00E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m5CEFA21D8E4256C408CFD2BB3153FFE5533FA1AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		DefaultTypePool_1_t6BEF63CAF2876270955D9C01C95ACB9C5BF31B77* L_0 = (DefaultTypePool_1_t6BEF63CAF2876270955D9C01C95ACB9C5BF31B77*)il2cpp_codegen_object_new(DefaultTypePool_1_t6BEF63CAF2876270955D9C01C95ACB9C5BF31B77_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DefaultTypePool_1__ctor_m041DCE0402C6174692C9D0B42435B0949B653BD0(L_0, DefaultTypePool_1__ctor_m041DCE0402C6174692C9D0B42435B0949B653BD0_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m4733E06FAEB4F5D2B4EC2F22283F60D11B61527B_RuntimeMethod_var, __this, L_0);
		DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797* L_1 = (DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797*)il2cpp_codegen_object_new(DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DefaultTypePool_1__ctor_m43508E569160C2A3E7DA45E1F1D79E39FB284DA4(L_1, DefaultTypePool_1__ctor_m43508E569160C2A3E7DA45E1F1D79E39FB284DA4_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m5CEFA21D8E4256C408CFD2BB3153FFE5533FA1AA_RuntimeMethod_var, __this, L_1);
		DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2* L_2 = (DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2*)il2cpp_codegen_object_new(DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DefaultTypePool_1__ctor_mD0D7A1710066169ADDCAFEB0B216912C0DD413A5(L_2, DefaultTypePool_1__ctor_mD0D7A1710066169ADDCAFEB0B216912C0DD413A5_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mCBF8A3BE3FE8D567704098C7CE31463CB659E7AF_RuntimeMethod_var, __this, L_2);
		DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC* L_3 = (DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC*)il2cpp_codegen_object_new(DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DefaultTypePool_1__ctor_mACE98FC86076F9666446FDFABE8886B476CB355F(L_3, DefaultTypePool_1__ctor_mACE98FC86076F9666446FDFABE8886B476CB355F_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mD253C242EE50DA3A963061B04B5C0F76174A7F16_RuntimeMethod_var, __this, L_3);
		DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4* L_4 = (DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4*)il2cpp_codegen_object_new(DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		DefaultTypePool_1__ctor_mDA80429C65AA20C2F3DB6E607E3A74FB000D1E1F(L_4, DefaultTypePool_1__ctor_mDA80429C65AA20C2F3DB6E607E3A74FB000D1E1F_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_mFA2E73AC4C38C33A3B82FFD67567F8B23126846D_RuntimeMethod_var, __this, L_4);
		DefaultTypePool_1_t90F8C812E092F9734B6A7427BE56A2EAD003F4DF* L_5 = (DefaultTypePool_1_t90F8C812E092F9734B6A7427BE56A2EAD003F4DF*)il2cpp_codegen_object_new(DefaultTypePool_1_t90F8C812E092F9734B6A7427BE56A2EAD003F4DF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		DefaultTypePool_1__ctor_m38215260A66093A9A304925A43E5F441471D2D9C(L_5, DefaultTypePool_1__ctor_m38215260A66093A9A304925A43E5F441471D2D9C_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisNode_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C_m6D1AC4BDFD384D826F3F3CB6451D6F086645B00E_RuntimeMethod_var, __this, L_5);
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
// System.Void LibTessDotNet.NullPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPool__ctor_mA9794AE1C4917832E71637ADA7B763D44F1AADCA (NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D* __this, const RuntimeMethod* method) 
{
	{
		IPool__ctor_m29B732D498A77485F01CFD88F4572DF3E3C57F41(__this, NULL);
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
// System.Void LibTessDotNet.DefaultPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPool__ctor_m8D4477214AEE206E11961F64854E616FD3530CFD (DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04* __this, const RuntimeMethod* method) 
{
	{
		IPool__ctor_m29B732D498A77485F01CFD88F4572DF3E3C57F41(__this, NULL);
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
// System.Void LibTessDotNet.MeshUtils::Splice(LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___a0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___b1, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___a0;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Onext_3;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___b1;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____Onext_3;
		V_1 = L_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = ___b1;
		NullCheck(L_5);
		L_5->____Lnext_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____Lnext_4), (void*)L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___a0;
		NullCheck(L_8);
		L_8->____Lnext_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____Lnext_4), (void*)L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = ___a0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_1;
		NullCheck(L_10);
		L_10->____Onext_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____Onext_3), (void*)L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = ___b1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_12);
		L_12->____Onext_3 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->____Onext_3), (void*)L_13);
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils::MakeVertex(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeVertex_m0E16EF166956CA6D7DEE0C0C541DD90F9B0F3BAC (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrig1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___vNext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	bool V_3 = false;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___pool0;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1;
		L_1 = GenericVirtualFuncInvoker0< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var, L_0);
		V_0 = L_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___vNext2;
		NullCheck(L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = L_2->____prev_0;
		V_1 = L_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = V_1;
		NullCheck(L_4);
		L_4->____prev_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____prev_0), (void*)L_5);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = V_0;
		NullCheck(L_6);
		L_6->____next_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____next_1), (void*)L_7);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = ___vNext2;
		NullCheck(L_8);
		L_8->____next_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____next_1), (void*)L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___vNext2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = V_0;
		NullCheck(L_10);
		L_10->____prev_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____prev_0), (void*)L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___eOrig1;
		NullCheck(L_12);
		L_12->____anEdge_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->____anEdge_2), (void*)L_13);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = ___eOrig1;
		V_2 = L_14;
	}

IL_0034:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = V_0;
		NullCheck(L_15);
		L_15->____Org_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____Org_5), (void*)L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_2;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = L_17->____Onext_3;
		V_2 = L_18;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = ___eOrig1;
		V_3 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_19) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_3;
		if (L_21)
		{
			goto IL_0034;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils::MakeFace(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeFace_mE0EED973273FBA225485B9D39397577ED118E578 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrig1, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___fNext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_m51643A8B0CFF1C5F247F180DE113F73632C86394_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	bool V_3 = false;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___pool0;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1;
		L_1 = GenericVirtualFuncInvoker0< Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* >::Invoke(IPool_Get_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_m51643A8B0CFF1C5F247F180DE113F73632C86394_RuntimeMethod_var, L_0);
		V_0 = L_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = ___fNext2;
		NullCheck(L_2);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = L_2->____prev_0;
		V_1 = L_3;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_1;
		NullCheck(L_4);
		L_4->____prev_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____prev_0), (void*)L_5);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6 = V_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_7 = V_0;
		NullCheck(L_6);
		L_6->____next_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____next_1), (void*)L_7);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_8 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9 = ___fNext2;
		NullCheck(L_8);
		L_8->____next_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____next_1), (void*)L_9);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_10 = ___fNext2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_11 = V_0;
		NullCheck(L_10);
		L_10->____prev_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____prev_0), (void*)L_11);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___eOrig1;
		NullCheck(L_12);
		L_12->____anEdge_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->____anEdge_2), (void*)L_13);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = V_0;
		NullCheck(L_14);
		L_14->____trail_3 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->____trail_3), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_15 = V_0;
		NullCheck(L_15);
		L_15->____marked_5 = (bool)0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_16 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_17 = ___fNext2;
		NullCheck(L_17);
		bool L_18 = L_17->____inside_6;
		NullCheck(L_16);
		L_16->____inside_6 = L_18;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = ___eOrig1;
		V_2 = L_19;
	}

IL_004e:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_21 = V_0;
		NullCheck(L_20);
		L_20->____Lface_6 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____Lface_6), (void*)L_21);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_2;
		NullCheck(L_22);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = L_22->____Lnext_4;
		V_2 = L_23;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = ___eOrig1;
		V_3 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_24) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_25))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_3;
		if (L_26)
		{
			goto IL_004e;
		}
	}
	{
		return;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils::MakeEdge(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* MeshUtils_MakeEdge_m1FBC01F73703AF9899163059E14810E5B54033CB (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eNext1, const RuntimeMethod* method) 
{
	EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E V_0;
	memset((&V_0), 0, sizeof(V_0));
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___eNext1;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_1 = ___pool0;
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_2;
		L_2 = EdgePair_Create_m7196DB2612DDC69F4AF9EE133D20846B86A4E69F(L_1, NULL);
		V_0 = L_2;
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_3 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3.____e_0;
		V_1 = L_4;
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_5 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5.____eSym_1;
		V_2 = L_6;
		Edge_EnsureFirst_m7EB3B9E1FC30A3F92AE831142E9FB11DBACF3788((&___eNext1), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = ___eNext1;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7->____Sym_2;
		NullCheck(L_8);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = L_8->____next_1;
		V_3 = L_9;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_3;
		NullCheck(L_10);
		L_10->____next_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____next_1), (void*)L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_3;
		NullCheck(L_12);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = L_12->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = V_1;
		NullCheck(L_13);
		L_13->____next_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____next_1), (void*)L_14);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = ___eNext1;
		NullCheck(L_15);
		L_15->____next_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____next_1), (void*)L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = ___eNext1;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = L_17->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_2;
		NullCheck(L_18);
		L_18->____next_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->____next_1), (void*)L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_2;
		NullCheck(L_20);
		L_20->____Sym_2 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____Sym_2), (void*)L_21);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_1;
		NullCheck(L_22);
		L_22->____Onext_3 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->____Onext_3), (void*)L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_2;
		NullCheck(L_24);
		L_24->____Lnext_4 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->____Lnext_4), (void*)L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_1;
		NullCheck(L_26);
		L_26->____Org_5 = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->____Org_5), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_1;
		NullCheck(L_27);
		L_27->____Lface_6 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->____Lface_6), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_1;
		NullCheck(L_28);
		L_28->____winding_8 = 0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_1;
		NullCheck(L_29);
		L_29->____activeRegion_7 = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->____activeRegion_7), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_1;
		NullCheck(L_30);
		L_30->____Sym_2 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_30->____Sym_2), (void*)L_31);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_2;
		NullCheck(L_32);
		L_32->____Onext_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->____Onext_3), (void*)L_33);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_1;
		NullCheck(L_34);
		L_34->____Lnext_4 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->____Lnext_4), (void*)L_35);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_2;
		NullCheck(L_36);
		L_36->____Org_5 = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->____Org_5), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = V_2;
		NullCheck(L_37);
		L_37->____Lface_6 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_37->____Lface_6), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_2;
		NullCheck(L_38);
		L_38->____winding_8 = 0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_2;
		NullCheck(L_39);
		L_39->____activeRegion_7 = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_39->____activeRegion_7), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = V_1;
		V_4 = L_40;
		goto IL_00c1;
	}

IL_00c1:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = V_4;
		return L_41;
	}
}
// System.Void LibTessDotNet.MeshUtils::KillEdge(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillEdge_mE2132C4410E6FCC3090942C9E37A525B7873F0F1 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eDel1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_m0726CFC60490E8225FD007D18719FEC8C3D610F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	{
		Edge_EnsureFirst_m7EB3B9E1FC30A3F92AE831142E9FB11DBACF3788((&___eDel1), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___eDel1;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____next_1;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___eDel1;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____Sym_2;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____next_1;
		V_1 = L_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_0;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		NullCheck(L_6);
		L_6->____next_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____next_1), (void*)L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_1;
		NullCheck(L_8);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = L_8->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_0;
		NullCheck(L_9);
		L_9->____next_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->____next_1), (void*)L_10);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_11 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = ___eDel1;
		NullCheck(L_12);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** L_13 = (&L_12->____Sym_2);
		NullCheck(L_11);
		GenericVirtualActionInvoker1< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** >::Invoke(IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_m0726CFC60490E8225FD007D18719FEC8C3D610F7_RuntimeMethod_var, L_11, L_13);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_14 = ___pool0;
		NullCheck(L_14);
		GenericVirtualActionInvoker1< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** >::Invoke(IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_m0726CFC60490E8225FD007D18719FEC8C3D610F7_RuntimeMethod_var, L_14, (&___eDel1));
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils::KillVertex(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillVertex_m1CAF836C0795C6B7AE8785EC8667DB16BC3C83AF (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___vDel1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___newOrg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mCF5A50512654D7E0169573E26532B28C2E5E6FB2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_2 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_3 = NULL;
	bool V_4 = false;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___vDel1;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____anEdge_2;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		V_1 = L_2;
	}

IL_000a:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___newOrg2;
		NullCheck(L_3);
		L_3->____Org_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____Org_5), (void*)L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_1;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Onext_3;
		V_1 = L_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_0;
		V_4 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_7) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___vDel1;
		NullCheck(L_10);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = L_10->____prev_0;
		V_2 = L_11;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___vDel1;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = L_12->____next_1;
		V_3 = L_13;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = V_2;
		NullCheck(L_14);
		L_14->____prev_0 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->____prev_0), (void*)L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = V_3;
		NullCheck(L_16);
		L_16->____next_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->____next_1), (void*)L_17);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_18 = ___pool0;
		NullCheck(L_18);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mCF5A50512654D7E0169573E26532B28C2E5E6FB2_RuntimeMethod_var, L_18, (&___vDel1));
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils::KillFace(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Face,LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillFace_m75741DEEB1047F98DB2077A37F0C4FAEFDBEB3FD (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___fDel1, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___newLFace2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mF7D72C6E358662F070DBD36C0B7C1BC61E8C145D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_2 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_3 = NULL;
	bool V_4 = false;
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = ___fDel1;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____anEdge_2;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		V_1 = L_2;
	}

IL_000a:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = ___newLFace2;
		NullCheck(L_3);
		L_3->____Lface_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____Lface_6), (void*)L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_1;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Lnext_4;
		V_1 = L_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_0;
		V_4 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_7) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_10 = ___fDel1;
		NullCheck(L_10);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_11 = L_10->____prev_0;
		V_2 = L_11;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = ___fDel1;
		NullCheck(L_12);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_13 = L_12->____next_1;
		V_3 = L_13;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = V_3;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_15 = V_2;
		NullCheck(L_14);
		L_14->____prev_0 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->____prev_0), (void*)L_15);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_16 = V_2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_17 = V_3;
		NullCheck(L_16);
		L_16->____next_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->____next_1), (void*)L_17);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_18 = ___pool0;
		NullCheck(L_18);
		GenericVirtualActionInvoker1< Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF** >::Invoke(IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mF7D72C6E358662F070DBD36C0B7C1BC61E8C145D_RuntimeMethod_var, L_18, (&___fDel1));
		return;
	}
}
// System.Single LibTessDotNet.MeshUtils::FaceArea(LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshUtils_FaceArea_mDE166ED484B8CF884C0846D250D75774E1EBA859 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		V_0 = (0.0f);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = ___f0;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____anEdge_2;
		V_1 = L_1;
	}

IL_000e:
	{
		float L_2 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_1;
		NullCheck(L_3);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = L_3->____Org_5;
		NullCheck(L_4);
		float L_5 = L_4->____s_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7;
		L_7 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_6, NULL);
		NullCheck(L_7);
		float L_8 = L_7->____s_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_1;
		NullCheck(L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = L_9->____Org_5;
		NullCheck(L_10);
		float L_11 = L_10->____t_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_1;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13;
		L_13 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_12, NULL);
		NullCheck(L_13);
		float L_14 = L_13->____t_5;
		V_0 = ((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_8)), ((float)il2cpp_codegen_add(L_11, L_14))))));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_1;
		NullCheck(L_15);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = L_15->____Lnext_4;
		V_1 = L_16;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18 = ___f0;
		NullCheck(L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = L_18->____anEdge_2;
		V_2 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_17) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_2;
		if (L_20)
		{
			goto IL_000e;
		}
	}
	{
		float L_21 = V_0;
		V_3 = L_21;
		goto IL_005d;
	}

IL_005d:
	{
		float L_22 = V_3;
		return L_22;
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
// System.Void LibTessDotNet.MeshUtils/Vertex::Init(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex_Init_m3BBE75E5B051EE36FEC84AB7A343878D8A31125E (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils/Vertex::Reset(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex_Reset_mA465348BA96A189842668A660718EA65A96F3F79 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	{
		V_0 = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		__this->____next_1 = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____next_1), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = V_0;
		__this->____prev_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____prev_0), (void*)L_0);
		__this->____anEdge_2 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____anEdge_2), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_1 = ((Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var))->___Zero_0;
		__this->____coords_3 = L_1;
		__this->____s_4 = (0.0f);
		__this->____t_5 = (0.0f);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043* L_2 = (&__this->____pqHandle_6);
		il2cpp_codegen_initobj(L_2, sizeof(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043));
		__this->____n_7 = 0;
		__this->____data_8 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_8), (void*)NULL);
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils/Vertex::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_mF0524539C2A7708D255C415B73D6253EAF2CBF3C (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* __this, const RuntimeMethod* method) 
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
// System.Int32 LibTessDotNet.MeshUtils/Face::get_VertsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Face_get_VertsCount_m0EB6E9229787A15369C28423410F895E7F211AC0 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____anEdge_2;
		V_1 = L_0;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_1;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____Lnext_4;
		V_1 = L_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = __this->____anEdge_2;
		V_2 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_4) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (L_6)
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_7 = V_0;
		V_3 = L_7;
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_8 = V_3;
		return L_8;
	}
}
// System.Void LibTessDotNet.MeshUtils/Face::Init(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face_Init_m03F7722EFAFCD37C885A8C161DD89CDFD2245847 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils/Face::Reset(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face_Reset_mCE1993AB18C22B85935F5CF6E60AD07A63D97B02 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	{
		V_0 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		__this->____next_1 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____next_1), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = V_0;
		__this->____prev_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____prev_0), (void*)L_0);
		__this->____anEdge_2 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____anEdge_2), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		__this->____trail_3 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____trail_3), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		__this->____n_4 = 0;
		__this->____marked_5 = (bool)0;
		__this->____inside_6 = (bool)0;
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils/Face::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face__ctor_mC2E2FBE2A1C7557E01D2324B38344BE5C0825E57 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* __this, const RuntimeMethod* method) 
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
// Conversion methods for marshalling of: LibTessDotNet.MeshUtils/EdgePair
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_pinvoke(const EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E& unmarshaled, EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_pinvoke& marshaled)
{
	Exception_t* ____e_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____e_0Exception, NULL);
}
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_pinvoke_back(const EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_pinvoke& marshaled, EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E& unmarshaled)
{
	Exception_t* ____e_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____e_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LibTessDotNet.MeshUtils/EdgePair
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_pinvoke_cleanup(EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LibTessDotNet.MeshUtils/EdgePair
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_com(const EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E& unmarshaled, EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_com& marshaled)
{
	Exception_t* ____e_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____e_0Exception, NULL);
}
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_com_back(const EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_com& marshaled, EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E& unmarshaled)
{
	Exception_t* ____e_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____e_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LibTessDotNet.MeshUtils/EdgePair
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_com_cleanup(EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_com& marshaled)
{
}
// LibTessDotNet.MeshUtils/EdgePair LibTessDotNet.MeshUtils/EdgePair::Create(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E EdgePair_Create_m7196DB2612DDC69F4AF9EE133D20846B86A4E69F (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mC3881C0DB54C1395F2AA8B02B199660E7A13CF69_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___pool0;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1;
		L_1 = GenericVirtualFuncInvoker0< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* >::Invoke(IPool_Get_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mC3881C0DB54C1395F2AA8B02B199660E7A13CF69_RuntimeMethod_var, L_0);
		V_0 = L_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_2 = ___pool0;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3;
		L_3 = GenericVirtualFuncInvoker0< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* >::Invoke(IPool_Get_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mC3881C0DB54C1395F2AA8B02B199660E7A13CF69_RuntimeMethod_var, L_2);
		V_1 = L_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		NullCheck(L_4);
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* L_5 = (&L_4->____pair_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_0;
		L_5->____e_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____e_0), (void*)L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_0;
		NullCheck(L_7);
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* L_8 = (&L_7->____pair_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_1;
		L_8->____eSym_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____eSym_1), (void*)L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_0;
		NullCheck(L_11);
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_12 = L_11->____pair_0;
		NullCheck(L_10);
		L_10->____pair_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_10->____pair_0))->____e_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_10->____pair_0))->____eSym_1), (void*)NULL);
		#endif
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_13);
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_14 = L_13->____pair_0;
		V_2 = L_14;
		goto IL_003c;
	}

IL_003c:
	{
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_15 = V_2;
		return L_15;
	}
}
// System.Void LibTessDotNet.MeshUtils/EdgePair::Reset(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgePair_Reset_mE735EE154A3C3F31761F1094EA0A5F0BC6072482 (EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		V_0 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		__this->____eSym_1 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eSym_1), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = V_0;
		__this->____e_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____e_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void EdgePair_Reset_mE735EE154A3C3F31761F1094EA0A5F0BC6072482_AdjustorThunk (RuntimeObject* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method)
{
	EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E*>(__this + _offset);
	EdgePair_Reset_mE735EE154A3C3F31761F1094EA0A5F0BC6072482(_thisAdjusted, ___pool0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// LibTessDotNet.MeshUtils/Face LibTessDotNet.MeshUtils/Edge::get__Rface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym_2;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____Lface_6;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = V_0;
		return L_2;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::set__Rface(LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rface_m9A4FEC09331777DF1DC569EE7C8759B96CBD7FBF (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___value0, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym_2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Lface_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Lface_6), (void*)L_1);
		return;
	}
}
// LibTessDotNet.MeshUtils/Vertex LibTessDotNet.MeshUtils/Edge::get__Dst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym_2;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = L_0->____Org_5;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = V_0;
		return L_2;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::set__Dst(LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dst_mFC8AB632C1CBED66AC767230468FC1E30DB1682E (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___value0, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Org_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Org_5), (void*)L_1);
		return;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Oprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym_2;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Lnext_4;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		return L_2;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::set__Oprev(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Oprev_m8546D649B9C09D86BCC5409860FF7C1B52B654DE (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___value0, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Lnext_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Lnext_4), (void*)L_1);
		return;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Lprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Onext_3;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Sym_2;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		return L_2;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::set__Lprev(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Lprev_mD73100E86177F935996719708235E5EC89E68CBB (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___value0, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Sym_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Sym_2), (void*)L_1);
		return;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Dprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Dprev_mD7DD853008B25880C3033A655BD3E24587330CBE (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Lnext_4;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Sym_2;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		return L_2;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::set__Dprev(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dprev_m910CB7AD7C0830726F21D6B5A23DEAFDB8854067 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___value0, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Sym_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Sym_2), (void*)L_1);
		return;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Rprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym_2;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Onext_3;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		return L_2;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::set__Rprev(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rprev_m1210B35EEBF501A907DDEBFCE242289816D2C394 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___value0, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Onext_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Onext_3), (void*)L_1);
		return;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Dnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Dnext_m7E374925C354672842CF18197905942EA76DD7E7 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0;
		L_0 = Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174(__this, NULL);
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Sym_2;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		return L_2;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::set__Dnext(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dnext_mBCF18FEE0F52593B49287BE89CCF4046B267E048 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___value0, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0;
		L_0 = Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174(__this, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Sym_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Sym_2), (void*)L_1);
		return;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Rnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Rnext_mC55A8695BDDE88F2AE4DD7701208A4C3AF207698 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0;
		L_0 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(__this, NULL);
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Sym_2;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		return L_2;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::set__Rnext(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rnext_m5FDD1F90616E9DFF623FBDA9CDD7538DBEFB8253 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___value0, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0;
		L_0 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(__this, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Sym_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Sym_2), (void*)L_1);
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::EnsureFirst(LibTessDotNet.MeshUtils/Edge&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_EnsureFirst_m7EB3B9E1FC30A3F92AE831142E9FB11DBACF3788 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** ___e0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** L_0 = ___e0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = *((Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966**)L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** L_2 = ___e0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = *((Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966**)L_2);
		NullCheck(L_3);
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* L_4 = (&L_3->____pair_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eSym_1;
		V_0 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_1) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_5))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** L_7 = ___e0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** L_8 = ___e0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = *((Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966**)L_8);
		NullCheck(L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = L_9->____Sym_2;
		*((RuntimeObject**)L_7) = (RuntimeObject*)L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)L_10);
	}

IL_0020:
	{
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::Init(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_Init_mAA9EFDE3C5AC0F238629D2134D72F372337BA0B7 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::Reset(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_Reset_m5660C4D534CBBF59F2E32F423E56517E41042542 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* L_0 = (&__this->____pair_0);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_1 = ___pool0;
		EdgePair_Reset_mE735EE154A3C3F31761F1094EA0A5F0BC6072482(L_0, L_1, NULL);
		V_0 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		__this->____Lnext_4 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Lnext_4), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2;
		V_0 = L_3;
		__this->____Onext_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Onext_3), (void*)L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4;
		V_0 = L_5;
		__this->____Sym_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Sym_2), (void*)L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_0;
		__this->____next_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____next_1), (void*)L_6);
		__this->____Org_5 = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Org_5), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		__this->____Lface_6 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Lface_6), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		__this->____activeRegion_7 = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeRegion_7), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		__this->____winding_8 = 0;
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge__ctor_m349424407337EC75E8156A48AFE20702CFF727DE (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
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
// System.Void LibTessDotNet.PQHandle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PQHandle__cctor_mD8C4AC80F990EA1FFB03A124B5370D10E39F9763 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_StaticFields*)il2cpp_codegen_static_fields_for(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var))->___Invalid_0 = ((int32_t)268435455);
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
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::RegionBelow(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) 
{
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___reg0;
		NullCheck(L_0);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_1 = L_0->____nodeUp_1;
		NullCheck(L_1);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_2 = L_1->____prev_1;
		NullCheck(L_2);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = L_2->____key_0;
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		return L_4;
	}
}
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::RegionAbove(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) 
{
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___reg0;
		NullCheck(L_0);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_1 = L_0->____nodeUp_1;
		NullCheck(L_1);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_2 = L_1->____next_2;
		NullCheck(L_2);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = L_2->____key_0;
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean LibTessDotNet.Tess::EdgeLeq(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_EdgeLeq_m91CF47985D9D5E386D03C685E54E650DA722307A (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg10, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg21, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___reg10;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eUp_0;
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___reg21;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____eUp_0;
		V_1 = L_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		NullCheck(L_4);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5;
		L_5 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_4, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = __this->____event_12;
		V_4 = (bool)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_5) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_6))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_00c9;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_1;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9;
		L_9 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_8, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = __this->____event_12;
		V_5 = (bool)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_9) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_00a4;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_0;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = L_12->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = V_1;
		NullCheck(L_14);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = L_14->____Org_5;
		bool L_16;
		L_16 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_13, L_15, NULL);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_007c;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = V_1;
		NullCheck(L_18);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19;
		L_19 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_18, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_0;
		NullCheck(L_20);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = L_20->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_1;
		NullCheck(L_22);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23 = L_22->____Org_5;
		float L_24;
		L_24 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_19, L_21, L_23, NULL);
		V_7 = (bool)((((int32_t)((!(((float)L_24) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_013e;
	}

IL_007c:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_0;
		NullCheck(L_25);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26;
		L_26 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_25, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_1;
		NullCheck(L_27);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28 = L_27->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_0;
		NullCheck(L_29);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_30 = L_29->____Org_5;
		float L_31;
		L_31 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_26, L_28, L_30, NULL);
		V_7 = (bool)((((int32_t)((!(((float)L_31) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_013e;
	}

IL_00a4:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_1;
		NullCheck(L_32);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33;
		L_33 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_32, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_34 = __this->____event_12;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_1;
		NullCheck(L_35);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_36 = L_35->____Org_5;
		float L_37;
		L_37 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_33, L_34, L_36, NULL);
		V_7 = (bool)((((int32_t)((!(((float)L_37) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_013e;
	}

IL_00c9:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_1;
		NullCheck(L_38);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_39;
		L_39 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_38, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_40 = __this->____event_12;
		V_8 = (bool)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_39) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_40))? 1 : 0);
		bool L_41 = V_8;
		if (!L_41)
		{
			goto IL_0103;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_0;
		NullCheck(L_42);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43;
		L_43 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_42, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_44 = __this->____event_12;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = V_0;
		NullCheck(L_45);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_46 = L_45->____Org_5;
		float L_47;
		L_47 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_43, L_44, L_46, NULL);
		V_7 = (bool)((((int32_t)((!(((float)L_47) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_013e;
	}

IL_0103:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_0;
		NullCheck(L_48);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_49;
		L_49 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_48, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_50 = __this->____event_12;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = V_0;
		NullCheck(L_51);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_52 = L_51->____Org_5;
		float L_53;
		L_53 = Geom_EdgeEval_mBAA4526E696D91195D0824B9CD891AED17EB6B8F(L_49, L_50, L_52, NULL);
		V_2 = L_53;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = V_1;
		NullCheck(L_54);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_55;
		L_55 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_54, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_56 = __this->____event_12;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_57 = V_1;
		NullCheck(L_57);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_58 = L_57->____Org_5;
		float L_59;
		L_59 = Geom_EdgeEval_mBAA4526E696D91195D0824B9CD891AED17EB6B8F(L_55, L_56, L_58, NULL);
		V_3 = L_59;
		float L_60 = V_2;
		float L_61 = V_3;
		V_7 = (bool)((((int32_t)((!(((float)L_60) >= ((float)L_61)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_013e;
	}

IL_013e:
	{
		bool L_62 = V_7;
		return L_62;
	}
}
// System.Void LibTessDotNet.Tess::DeleteRegion(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Remove_m90AD4E7F57974AB8886C9391C251C694CD9644C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m8FDF424BA7A561E9EFF73EC951469946B48EABAA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___reg0;
		NullCheck(L_0);
		bool L_1 = L_0->____fixUpperEdge_6;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = ___reg0;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____eUp_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->____winding_8;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_0021:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_6 = ___reg0;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____eUp_0;
		NullCheck(L_7);
		L_7->____activeRegion_7 = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->____activeRegion_7), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_8 = __this->____dict_10;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_9 = ___reg0;
		NullCheck(L_9);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_10 = L_9->____nodeUp_1;
		NullCheck(L_8);
		Dict_1_Remove_m90AD4E7F57974AB8886C9391C251C694CD9644C9(L_8, L_10, Dict_1_Remove_m90AD4E7F57974AB8886C9391C251C694CD9644C9_RuntimeMethod_var);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_11 = __this->____pool_0;
		NullCheck(L_11);
		GenericVirtualActionInvoker1< ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47** >::Invoke(IPool_Return_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m8FDF424BA7A561E9EFF73EC951469946B48EABAA_RuntimeMethod_var, L_11, (&___reg0));
		return;
	}
}
// System.Void LibTessDotNet.Tess::FixUpperEdge(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FixUpperEdge_m1E4236D65D3FB0321FA1FB71BAE30806B18D889B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___newEdge1, const RuntimeMethod* method) 
{
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___reg0;
		NullCheck(L_0);
		bool L_1 = L_0->____fixUpperEdge_6;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F(L_1, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_2 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_3 = __this->____pool_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = ___reg0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eUp_0;
		NullCheck(L_2);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_2, L_3, L_5, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_6 = ___reg0;
		NullCheck(L_6);
		L_6->____fixUpperEdge_6 = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_7 = ___reg0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = ___newEdge1;
		NullCheck(L_7);
		L_7->____eUp_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->____eUp_0), (void*)L_8);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___newEdge1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_10 = ___reg0;
		NullCheck(L_9);
		L_9->____activeRegion_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->____activeRegion_7), (void*)L_10);
		return;
	}
}
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::TopLeftRegion(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_TopLeftRegion_m2FA0AA199DAE05530C04BFFE790A3CB8C83C7F86 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) 
{
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_4 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___reg0;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eUp_0;
		NullCheck(L_1);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = L_1->____Org_5;
		V_0 = L_2;
	}

IL_000d:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = ___reg0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4;
		L_4 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_3, NULL);
		___reg0 = L_4;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5 = ___reg0;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____eUp_0;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = L_6->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = V_0;
		V_1 = (bool)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_7) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_8))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_000d;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_10 = ___reg0;
		NullCheck(L_10);
		bool L_11 = L_10->____fixUpperEdge_6;
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0076;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_13 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_14 = __this->____pool_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_15 = ___reg0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_16;
		L_16 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_15, NULL);
		NullCheck(L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = L_16->____eUp_0;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = L_17->____Sym_2;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_19 = ___reg0;
		NullCheck(L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = L_19->____eUp_0;
		NullCheck(L_20);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = L_20->____Lnext_4;
		NullCheck(L_13);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22;
		L_22 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_13, L_14, L_18, L_21, NULL);
		V_3 = L_22;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_23 = ___reg0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_3;
		Tess_FixUpperEdge_m1E4236D65D3FB0321FA1FB71BAE30806B18D889B(__this, L_23, L_24, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_25 = ___reg0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_26;
		L_26 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_25, NULL);
		___reg0 = L_26;
	}

IL_0076:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_27 = ___reg0;
		V_4 = L_27;
		goto IL_007b;
	}

IL_007b:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_28 = V_4;
		return L_28;
	}
}
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::TopRightRegion(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_TopRightRegion_m4D715D95F08BD411FFABF59F4DB4FBD0EDC2E1E7 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) 
{
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	bool V_1 = false;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_2 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___reg0;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eUp_0;
		NullCheck(L_1);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2;
		L_2 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_1, NULL);
		V_0 = L_2;
	}

IL_000d:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = ___reg0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4;
		L_4 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_3, NULL);
		___reg0 = L_4;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5 = ___reg0;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____eUp_0;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7;
		L_7 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_6, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = V_0;
		V_1 = (bool)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_7) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_8))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_000d;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_10 = ___reg0;
		V_2 = L_10;
		goto IL_002e;
	}

IL_002e:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_11 = V_2;
		return L_11;
	}
}
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::AddRegionBelow(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_AddRegionBelow_m0275D421E35EBBEFF2546E2DDEFBBB1061EC700D (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regAbove0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eNewUp1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_InsertBefore_m6E4EB99BCD65F825FE9F1D3FF6EA413B8A1A2390_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_1 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = __this->____pool_0;
		NullCheck(L_0);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = GenericVirtualFuncInvoker0< ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* >::Invoke(IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var, L_0);
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = ___eNewUp1;
		NullCheck(L_2);
		L_2->____eUp_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____eUp_0), (void*)L_3);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_5 = __this->____dict_10;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_6 = ___regAbove0;
		NullCheck(L_6);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_7 = L_6->____nodeUp_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_8 = V_0;
		NullCheck(L_5);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_9;
		L_9 = Dict_1_InsertBefore_m6E4EB99BCD65F825FE9F1D3FF6EA413B8A1A2390(L_5, L_7, L_8, Dict_1_InsertBefore_m6E4EB99BCD65F825FE9F1D3FF6EA413B8A1A2390_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->____nodeUp_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____nodeUp_1), (void*)L_9);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_10 = V_0;
		NullCheck(L_10);
		L_10->____fixUpperEdge_6 = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_11 = V_0;
		NullCheck(L_11);
		L_11->____sentinel_4 = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_12 = V_0;
		NullCheck(L_12);
		L_12->____dirty_5 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___eNewUp1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_14 = V_0;
		NullCheck(L_13);
		L_13->____activeRegion_7 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____activeRegion_7), (void*)L_14);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_15 = V_0;
		V_1 = L_15;
		goto IL_004c;
	}

IL_004c:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_16 = V_1;
		return L_16;
	}
}
// System.Void LibTessDotNet.Tess::ComputeWinding(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeWinding_m08BB6BDD14F5FD6820052F3833AE916DB6D05B50 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) 
{
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___reg0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1 = ___reg0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2;
		L_2 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_1, NULL);
		NullCheck(L_2);
		int32_t L_3 = L_2->____windingNumber_2;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = ___reg0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eUp_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->____winding_8;
		NullCheck(L_0);
		L_0->____windingNumber_2 = ((int32_t)il2cpp_codegen_add(L_3, L_6));
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_7 = ___reg0;
		int32_t L_8 = __this->____windingRule_9;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_9 = ___reg0;
		NullCheck(L_9);
		int32_t L_10 = L_9->____windingNumber_2;
		bool L_11;
		L_11 = Geom_IsWindingInside_mAECD5C0CDC153F6036441D90EFB993F77C723793(L_8, L_10, NULL);
		NullCheck(L_7);
		L_7->____inside_3 = L_11;
		return;
	}
}
// System.Void LibTessDotNet.Tess::FinishRegion(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FinishRegion_m57A9A719924F3022E03232E2E94228DF7CB5E787 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___reg0;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eUp_0;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		NullCheck(L_2);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = L_2->____Lface_6;
		V_1 = L_3;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = V_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5 = ___reg0;
		NullCheck(L_5);
		bool L_6 = L_5->____inside_3;
		NullCheck(L_4);
		L_4->____inside_6 = L_6;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_7 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_0;
		NullCheck(L_7);
		L_7->____anEdge_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->____anEdge_2), (void*)L_8);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_9 = ___reg0;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_9, NULL);
		return;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Tess::FinishLeftRegions(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regFirst0, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regLast1, const RuntimeMethod* method) 
{
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_8 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___regFirst0;
		V_0 = L_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1 = ___regFirst0;
		NullCheck(L_1);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = L_1->____eUp_0;
		V_1 = L_2;
		goto IL_00d6;
	}

IL_000f:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = V_0;
		NullCheck(L_3);
		L_3->____fixUpperEdge_6 = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5;
		L_5 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_4, NULL);
		V_2 = L_5;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_6 = V_2;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____eUp_0;
		V_3 = L_7;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_3;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = L_8->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		NullCheck(L_10);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = L_10->____Org_5;
		V_4 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_9) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0083;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_13 = V_2;
		NullCheck(L_13);
		bool L_14 = L_13->____fixUpperEdge_6;
		V_5 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_005b;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_16 = V_0;
		Tess_FinishRegion_m57A9A719924F3022E03232E2E94228DF7CB5E787(__this, L_16, NULL);
		goto IL_00e6;
	}

IL_005b:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_17 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_18 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_1;
		NullCheck(L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20;
		L_20 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_19, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_3;
		NullCheck(L_21);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = L_21->____Sym_2;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23;
		L_23 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_17, L_18, L_20, L_22, NULL);
		V_3 = L_23;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_24 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_3;
		Tess_FixUpperEdge_m1E4236D65D3FB0321FA1FB71BAE30806B18D889B(__this, L_24, L_25, NULL);
	}

IL_0083:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_1;
		NullCheck(L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = L_26->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_3;
		V_6 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_27) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_28))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_6;
		if (!L_29)
		{
			goto IL_00c4;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_30 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_31 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_3;
		NullCheck(L_32);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33;
		L_33 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_32, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_3;
		NullCheck(L_30);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_30, L_31, L_33, L_34, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_35 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_36 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_3;
		NullCheck(L_35);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_35, L_36, L_37, L_38, NULL);
	}

IL_00c4:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_39 = V_0;
		Tess_FinishRegion_m57A9A719924F3022E03232E2E94228DF7CB5E787(__this, L_39, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_40 = V_2;
		NullCheck(L_40);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = L_40->____eUp_0;
		V_1 = L_41;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_42 = V_2;
		V_0 = L_42;
	}

IL_00d6:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_43 = V_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_44 = ___regLast1;
		V_7 = (bool)((((int32_t)((((RuntimeObject*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)L_43) == ((RuntimeObject*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)L_44))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_7;
		if (L_45)
		{
			goto IL_000f;
		}
	}

IL_00e6:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_1;
		V_8 = L_46;
		goto IL_00eb;
	}

IL_00eb:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = V_8;
		return L_47;
	}
}
// System.Void LibTessDotNet.Tess::AddRightEdges(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eFirst1, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eLast2, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eTopLeft3, bool ___cleanUp4, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_2 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_3 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B12_0 = 0;
	{
		V_0 = (bool)1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___eFirst1;
		V_1 = L_0;
	}

IL_0005:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = V_1;
		NullCheck(L_1);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = L_1->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_1;
		NullCheck(L_3);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4;
		L_4 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_3, NULL);
		bool L_5;
		L_5 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_2, L_4, NULL);
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F(L_5, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_6 = ___regUp0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7->____Sym_2;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_9;
		L_9 = Tess_AddRegionBelow_m0275D421E35EBBEFF2546E2DDEFBBB1061EC700D(__this, L_6, L_8, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		NullCheck(L_10);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = L_10->____Onext_3;
		V_1 = L_11;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___eLast2;
		V_5 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_12) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_5;
		if (L_14)
		{
			goto IL_0005;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = ___eTopLeft3;
		V_6 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_15) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_0060;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_17 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_18;
		L_18 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_17, NULL);
		NullCheck(L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = L_18->____eUp_0;
		NullCheck(L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20;
		L_20 = Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174(L_19, NULL);
		___eTopLeft3 = L_20;
	}

IL_0060:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_21 = ___regUp0;
		V_2 = L_21;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = ___eTopLeft3;
		V_4 = L_22;
		goto IL_0158;
	}

IL_006b:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_23 = V_2;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_24;
		L_24 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_23, NULL);
		V_3 = L_24;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_25 = V_3;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = L_25->____eUp_0;
		NullCheck(L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = L_26->____Sym_2;
		V_1 = L_27;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_1;
		NullCheck(L_28);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_29 = L_28->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_4;
		NullCheck(L_30);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_31 = L_30->____Org_5;
		V_7 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_29) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_31))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_7;
		if (!L_32)
		{
			goto IL_009d;
		}
	}
	{
		goto IL_0160;
	}

IL_009d:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_1;
		NullCheck(L_33);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = L_33->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_4;
		V_8 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_34) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_35))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_8;
		if (!L_36)
		{
			goto IL_00e5;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_37 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_38 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_1;
		NullCheck(L_39);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40;
		L_40 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_39, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = V_1;
		NullCheck(L_37);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_37, L_38, L_40, L_41, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_42 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_43 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_4;
		NullCheck(L_44);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45;
		L_45 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_44, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_1;
		NullCheck(L_42);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_42, L_43, L_45, L_46, NULL);
	}

IL_00e5:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_47 = V_3;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_48 = V_2;
		NullCheck(L_48);
		int32_t L_49 = L_48->____windingNumber_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_1;
		NullCheck(L_50);
		int32_t L_51 = L_50->____winding_8;
		NullCheck(L_47);
		L_47->____windingNumber_2 = ((int32_t)il2cpp_codegen_subtract(L_49, L_51));
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_52 = V_3;
		int32_t L_53 = __this->____windingRule_9;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_54 = V_3;
		NullCheck(L_54);
		int32_t L_55 = L_54->____windingNumber_2;
		bool L_56;
		L_56 = Geom_IsWindingInside_mAECD5C0CDC153F6036441D90EFB993F77C723793(L_53, L_55, NULL);
		NullCheck(L_52);
		L_52->____inside_3 = L_56;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_57 = V_2;
		NullCheck(L_57);
		L_57->____dirty_5 = (bool)1;
		bool L_58 = V_0;
		if (L_58)
		{
			goto IL_0122;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_59 = V_2;
		bool L_60;
		L_60 = Tess_CheckForRightSplice_m73E6E5E3B926500479750597286CAEAA603E4F58(__this, L_59, NULL);
		G_B12_0 = ((int32_t)(L_60));
		goto IL_0123;
	}

IL_0122:
	{
		G_B12_0 = 0;
	}

IL_0123:
	{
		V_9 = (bool)G_B12_0;
		bool L_61 = V_9;
		if (!L_61)
		{
			goto IL_0150;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_62 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_63 = V_4;
		Geom_AddWinding_m6EF7D9E71F27FA2029D3464EBF2828972B0D9A0B(L_62, L_63, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_64 = V_2;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_64, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_65 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_66 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_67 = V_4;
		NullCheck(L_65);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_65, L_66, L_67, NULL);
	}

IL_0150:
	{
		V_0 = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_68 = V_3;
		V_2 = L_68;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_69 = V_1;
		V_4 = L_69;
	}

IL_0158:
	{
		V_10 = (bool)1;
		goto IL_006b;
	}

IL_0160:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_70 = V_2;
		NullCheck(L_70);
		L_70->____dirty_5 = (bool)1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_71 = V_2;
		NullCheck(L_71);
		int32_t L_72 = L_71->____windingNumber_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_73 = V_1;
		NullCheck(L_73);
		int32_t L_74 = L_73->____winding_8;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_75 = V_3;
		NullCheck(L_75);
		int32_t L_76 = L_75->____windingNumber_2;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((int32_t)il2cpp_codegen_subtract(L_72, L_74))) == ((int32_t)L_76))? 1 : 0), NULL);
		bool L_77 = ___cleanUp4;
		V_11 = L_77;
		bool L_78 = V_11;
		if (!L_78)
		{
			goto IL_0194;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_79 = V_2;
		Tess_WalkDirtyRegions_m5988A5D583346F08BC85EADEEF4D527752099025(__this, L_79, NULL);
	}

IL_0194:
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::SpliceMergeVertices(LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SpliceMergeVertices_m3C1B73AB8A2F388421982B310359B74FE1F73290 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___e10, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___e21, const RuntimeMethod* method) 
{
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_1 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___e10;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = ___e21;
		NullCheck(L_0);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::VertexWeights(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_VertexWeights_mF6D88112E28CC0EA4628811DCE8F19EEDAC3D66E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___isect0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___org1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___dst2, float* ___w03, float* ___w14, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___org1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___isect0;
		float L_2;
		L_2 = Geom_VertL1dist_mAC0CFD4F9DB8AAE3089193AE779B7A5FE509467B(L_0, L_1, NULL);
		V_0 = L_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = ___dst2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___isect0;
		float L_5;
		L_5 = Geom_VertL1dist_mAC0CFD4F9DB8AAE3089193AE779B7A5FE509467B(L_3, L_4, NULL);
		V_1 = L_5;
		float* L_6 = ___w03;
		float L_7 = V_1;
		float L_8 = V_0;
		float L_9 = V_1;
		*((float*)L_6) = (float)((float)(((float)(L_7/((float)il2cpp_codegen_add(L_8, L_9))))/(2.0f)));
		float* L_10 = ___w14;
		float L_11 = V_0;
		float L_12 = V_0;
		float L_13 = V_1;
		*((float*)L_10) = (float)((float)(((float)(L_11/((float)il2cpp_codegen_add(L_12, L_13))))/(2.0f)));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = ___isect0;
		NullCheck(L_14);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_15 = (&L_14->____coords_3);
		float* L_16 = (&L_15->___X_1);
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		float* L_19 = ___w03;
		float L_20 = *((float*)L_19);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = ___org1;
		NullCheck(L_21);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_22 = (&L_21->____coords_3);
		float L_23 = L_22->___X_1;
		float* L_24 = ___w14;
		float L_25 = *((float*)L_24);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = ___dst2;
		NullCheck(L_26);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_27 = (&L_26->____coords_3);
		float L_28 = L_27->___X_1;
		*((float*)L_17) = (float)((float)il2cpp_codegen_add(L_18, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_20, L_23)), ((float)il2cpp_codegen_multiply(L_25, L_28))))));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_29 = ___isect0;
		NullCheck(L_29);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_30 = (&L_29->____coords_3);
		float* L_31 = (&L_30->___Y_2);
		float* L_32 = L_31;
		float L_33 = *((float*)L_32);
		float* L_34 = ___w03;
		float L_35 = *((float*)L_34);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_36 = ___org1;
		NullCheck(L_36);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_37 = (&L_36->____coords_3);
		float L_38 = L_37->___Y_2;
		float* L_39 = ___w14;
		float L_40 = *((float*)L_39);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_41 = ___dst2;
		NullCheck(L_41);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_42 = (&L_41->____coords_3);
		float L_43 = L_42->___Y_2;
		*((float*)L_32) = (float)((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_35, L_38)), ((float)il2cpp_codegen_multiply(L_40, L_43))))));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_44 = ___isect0;
		NullCheck(L_44);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_45 = (&L_44->____coords_3);
		float* L_46 = (&L_45->___Z_3);
		float* L_47 = L_46;
		float L_48 = *((float*)L_47);
		float* L_49 = ___w03;
		float L_50 = *((float*)L_49);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_51 = ___org1;
		NullCheck(L_51);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_52 = (&L_51->____coords_3);
		float L_53 = L_52->___Z_3;
		float* L_54 = ___w14;
		float L_55 = *((float*)L_54);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_56 = ___dst2;
		NullCheck(L_56);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_57 = (&L_56->____coords_3);
		float L_58 = L_57->___Z_3;
		*((float*)L_47) = (float)((float)il2cpp_codegen_add(L_48, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_50, L_53)), ((float)il2cpp_codegen_multiply(L_55, L_58))))));
		return;
	}
}
// System.Void LibTessDotNet.Tess::GetIntersectData(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_GetIntersectData_m1EF3ED6C6834CACC2C20DD246F414D854BBFF6CE (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___isect0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___orgUp1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___dstUp2, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___orgLo3, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___dstLo4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___isect0;
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_1 = ((Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var))->___Zero_0;
		NullCheck(L_0);
		L_0->____coords_3 = L_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___isect0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = ___orgUp1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___dstUp2;
		Tess_VertexWeights_mF6D88112E28CC0EA4628811DCE8F19EEDAC3D66E(__this, L_2, L_3, L_4, (&V_0), (&V_1), NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = ___isect0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___orgLo3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = ___dstLo4;
		Tess_VertexWeights_mF6D88112E28CC0EA4628811DCE8F19EEDAC3D66E(__this, L_5, L_6, L_7, (&V_2), (&V_3), NULL);
		CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* L_8 = __this->____combineCallback_13;
		V_4 = (bool)((!(((RuntimeObject*)(CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0094;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___isect0;
		CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* L_11 = __this->____combineCallback_13;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___isect0;
		NullCheck(L_12);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_13 = L_12->____coords_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = ___orgUp1;
		NullCheck(L_16);
		RuntimeObject* L_17 = L_16->____data_8;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_15;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = ___dstUp2;
		NullCheck(L_19);
		RuntimeObject* L_20 = L_19->____data_8;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_18;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = ___orgLo3;
		NullCheck(L_22);
		RuntimeObject* L_23 = L_22->____data_8;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_21;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = ___dstLo4;
		NullCheck(L_25);
		RuntimeObject* L_26 = L_25->____data_8;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_26);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = L_27;
		float L_29 = V_0;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_29);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_30 = L_28;
		float L_31 = V_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_31);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = L_30;
		float L_33 = V_2;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_33);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_34 = L_32;
		float L_35 = V_3;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)L_35);
		NullCheck(L_11);
		RuntimeObject* L_36;
		L_36 = CombineCallback_Invoke_m567FA415136EB70CAA4B9E3B8D1F5A133EBAD5B3_inline(L_11, L_13, L_24, L_34, NULL);
		NullCheck(L_10);
		L_10->____data_8 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____data_8), (void*)L_36);
	}

IL_0094:
	{
		return;
	}
}
// System.Boolean LibTessDotNet.Tess::CheckForRightSplice(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForRightSplice_m73E6E5E3B926500479750597286CAEAA603E4F58 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Remove_mCE983D6C8585217615CAF8DFEE8401A32DEA7BCA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_0, NULL);
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___regUp0;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____eUp_0;
		V_1 = L_3;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eUp_0;
		V_2 = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = L_6->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = L_8->____Org_5;
		bool L_10;
		L_10 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_7, L_9, NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_00ff;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_2;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13;
		L_13 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_12, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = V_1;
		NullCheck(L_14);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = L_14->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_2;
		NullCheck(L_16);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = L_16->____Org_5;
		float L_18;
		L_18 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_13, L_15, L_17, NULL);
		V_4 = (bool)((((float)L_18) > ((float)(0.0f)))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_005d;
		}
	}
	{
		V_5 = (bool)0;
		goto IL_0179;
	}

IL_005d:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_1;
		NullCheck(L_20);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = L_20->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_2;
		NullCheck(L_22);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23 = L_22->____Org_5;
		bool L_24;
		L_24 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_21, L_23, NULL);
		V_6 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_00be;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_26 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_27 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_2;
		NullCheck(L_28);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = L_28->____Sym_2;
		NullCheck(L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30;
		L_30 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_26, L_27, L_29, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_31 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_32 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_2;
		NullCheck(L_34);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35;
		L_35 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_34, NULL);
		NullCheck(L_31);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_31, L_32, L_33, L_35, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_36 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_37 = V_0;
		int32_t L_38 = 1;
		V_7 = (bool)L_38;
		NullCheck(L_37);
		L_37->____dirty_5 = (bool)L_38;
		bool L_39 = V_7;
		NullCheck(L_36);
		L_36->____dirty_5 = L_39;
		goto IL_00fc;
	}

IL_00be:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = V_1;
		NullCheck(L_40);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_41 = L_40->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_2;
		NullCheck(L_42);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = L_42->____Org_5;
		V_8 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_41) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_43))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_8;
		if (!L_44)
		{
			goto IL_00fc;
		}
	}
	{
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_45 = __this->____pq_11;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_1;
		NullCheck(L_46);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_47 = L_46->____Org_5;
		NullCheck(L_47);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 L_48 = L_47->____pqHandle_6;
		NullCheck(L_45);
		PriorityQueue_1_Remove_mCE983D6C8585217615CAF8DFEE8401A32DEA7BCA(L_45, L_48, PriorityQueue_1_Remove_mCE983D6C8585217615CAF8DFEE8401A32DEA7BCA_RuntimeMethod_var);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = V_2;
		NullCheck(L_49);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50;
		L_50 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_49, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = V_1;
		Tess_SpliceMergeVertices_m3C1B73AB8A2F388421982B310359B74FE1F73290(__this, L_50, L_51, NULL);
	}

IL_00fc:
	{
		goto IL_0174;
	}

IL_00ff:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52 = V_1;
		NullCheck(L_52);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_53;
		L_53 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_52, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = V_2;
		NullCheck(L_54);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_55 = L_54->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_56 = V_1;
		NullCheck(L_56);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_57 = L_56->____Org_5;
		float L_58;
		L_58 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_53, L_55, L_57, NULL);
		V_9 = (bool)((((float)L_58) < ((float)(0.0f)))? 1 : 0);
		bool L_59 = V_9;
		if (!L_59)
		{
			goto IL_012a;
		}
	}
	{
		V_5 = (bool)0;
		goto IL_0179;
	}

IL_012a:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_60 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_61;
		L_61 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_60, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_62 = ___regUp0;
		int32_t L_63 = 1;
		V_7 = (bool)L_63;
		NullCheck(L_62);
		L_62->____dirty_5 = (bool)L_63;
		bool L_64 = V_7;
		NullCheck(L_61);
		L_61->____dirty_5 = L_64;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_65 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_66 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_67 = V_1;
		NullCheck(L_67);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_68 = L_67->____Sym_2;
		NullCheck(L_65);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_69;
		L_69 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_65, L_66, L_68, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_70 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_71 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_72 = V_2;
		NullCheck(L_72);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_73;
		L_73 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_72, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_74 = V_1;
		NullCheck(L_70);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_70, L_71, L_73, L_74, NULL);
	}

IL_0174:
	{
		V_5 = (bool)1;
		goto IL_0179;
	}

IL_0179:
	{
		bool L_75 = V_5;
		return L_75;
	}
}
// System.Boolean LibTessDotNet.Tess::CheckForLeftSplice(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForLeftSplice_m925CF548154D6A922CEDDDEE3B1662F409D874C2 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, const RuntimeMethod* method) 
{
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	bool V_3 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_8 = NULL;
	bool V_9 = false;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_0, NULL);
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___regUp0;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____eUp_0;
		V_1 = L_3;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eUp_0;
		V_2 = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7;
		L_7 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_6, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9;
		L_9 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_8, NULL);
		bool L_10;
		L_10 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_7, L_9, NULL);
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_1;
		NullCheck(L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12;
		L_12 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_11, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_2;
		NullCheck(L_13);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14;
		L_14 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_13, NULL);
		bool L_15;
		L_15 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_12, L_14, NULL);
		V_3 = L_15;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_00d5;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_1;
		NullCheck(L_17);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18;
		L_18 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_17, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_2;
		NullCheck(L_19);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20;
		L_20 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_19, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_1;
		NullCheck(L_21);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = L_21->____Org_5;
		float L_23;
		L_23 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_18, L_20, L_22, NULL);
		V_5 = (bool)((((float)L_23) < ((float)(0.0f)))? 1 : 0);
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_0077;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_015c;
	}

IL_0077:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_25 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_26;
		L_26 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_25, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_27 = ___regUp0;
		int32_t L_28 = 1;
		V_7 = (bool)L_28;
		NullCheck(L_27);
		L_27->____dirty_5 = (bool)L_28;
		bool L_29 = V_7;
		NullCheck(L_26);
		L_26->____dirty_5 = L_29;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_30 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_31 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_1;
		NullCheck(L_30);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33;
		L_33 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_30, L_31, L_32, NULL);
		V_4 = L_33;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_34 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_35 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_2;
		NullCheck(L_36);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = L_36->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_4;
		NullCheck(L_34);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_34, L_35, L_37, L_38, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_4;
		NullCheck(L_39);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_40 = L_39->____Lface_6;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_41 = ___regUp0;
		NullCheck(L_41);
		bool L_42 = L_41->____inside_3;
		NullCheck(L_40);
		L_40->____inside_6 = L_42;
		goto IL_0157;
	}

IL_00d5:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43 = V_2;
		NullCheck(L_43);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_44;
		L_44 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_43, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = V_1;
		NullCheck(L_45);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_46;
		L_46 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_45, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = V_2;
		NullCheck(L_47);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_48 = L_47->____Org_5;
		float L_49;
		L_49 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_44, L_46, L_48, NULL);
		V_9 = (bool)((((float)L_49) > ((float)(0.0f)))? 1 : 0);
		bool L_50 = V_9;
		if (!L_50)
		{
			goto IL_0100;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_015c;
	}

IL_0100:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_51 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_52 = V_0;
		int32_t L_53 = 1;
		V_7 = (bool)L_53;
		NullCheck(L_52);
		L_52->____dirty_5 = (bool)L_53;
		bool L_54 = V_7;
		NullCheck(L_51);
		L_51->____dirty_5 = L_54;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_55 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_56 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_57 = V_2;
		NullCheck(L_55);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_58;
		L_58 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_55, L_56, L_57, NULL);
		V_8 = L_58;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_59 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_60 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_61 = V_1;
		NullCheck(L_61);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_62 = L_61->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_63 = V_2;
		NullCheck(L_63);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_64 = L_63->____Sym_2;
		NullCheck(L_59);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_59, L_60, L_62, L_64, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_65 = V_8;
		NullCheck(L_65);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_66;
		L_66 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_65, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_67 = ___regUp0;
		NullCheck(L_67);
		bool L_68 = L_67->____inside_3;
		NullCheck(L_66);
		L_66->____inside_6 = L_68;
	}

IL_0157:
	{
		V_6 = (bool)1;
		goto IL_015c;
	}

IL_015c:
	{
		bool L_69 = V_6;
		return L_69;
	}
}
// System.Boolean LibTessDotNet.Tess::CheckForIntersect(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mCF5A50512654D7E0169573E26532B28C2E5E6FB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_3 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_4 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_5 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_6 = NULL;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_9 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_10 = NULL;
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
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_23 = NULL;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* G_B22_0 = NULL;
	int32_t G_B27_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B36_0 = 0;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_0, NULL);
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___regUp0;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____eUp_0;
		V_1 = L_3;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eUp_0;
		V_2 = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = L_6->____Org_5;
		V_3 = L_7;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = L_8->____Org_5;
		V_4 = L_9;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		NullCheck(L_10);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11;
		L_11 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_10, NULL);
		V_5 = L_11;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_2;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13;
		L_13 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_12, NULL);
		V_6 = L_13;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = V_5;
		bool L_16;
		L_16 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_14, L_15, NULL);
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0), NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = __this->____event_12;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = V_3;
		float L_20;
		L_20 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_17, L_18, L_19, NULL);
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((!(((float)L_20) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = __this->____event_12;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23 = V_4;
		float L_24;
		L_24 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_21, L_22, L_23, NULL);
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((!(((float)L_24) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = __this->____event_12;
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_25) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_26)))
		{
			goto IL_009d;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_27 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28 = __this->____event_12;
		G_B3_0 = ((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_27) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_28))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_009e;
	}

IL_009d:
	{
		G_B3_0 = 0;
	}

IL_009e:
	{
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)G_B3_0, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_29 = ___regUp0;
		NullCheck(L_29);
		bool L_30 = L_29->____fixUpperEdge_6;
		if (L_30)
		{
			goto IL_00b7;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_31 = V_0;
		NullCheck(L_31);
		bool L_32 = L_31->____fixUpperEdge_6;
		G_B6_0 = ((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		goto IL_00b8;
	}

IL_00b7:
	{
		G_B6_0 = 0;
	}

IL_00b8:
	{
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)G_B6_0, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_34 = V_4;
		V_11 = (bool)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_33) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_34))? 1 : 0);
		bool L_35 = V_11;
		if (!L_35)
		{
			goto IL_00d2;
		}
	}
	{
		V_12 = (bool)0;
		goto IL_0662;
	}

IL_00d2:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_36 = V_3;
		NullCheck(L_36);
		float L_37 = L_36->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_38 = V_5;
		NullCheck(L_38);
		float L_39 = L_38->____t_5;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_40;
		L_40 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_37, L_39, NULL);
		V_7 = L_40;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_41 = V_4;
		NullCheck(L_41);
		float L_42 = L_41->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = V_6;
		NullCheck(L_43);
		float L_44 = L_43->____t_5;
		float L_45;
		L_45 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_42, L_44, NULL);
		V_8 = L_45;
		float L_46 = V_7;
		float L_47 = V_8;
		V_13 = (bool)((((float)L_46) > ((float)L_47))? 1 : 0);
		bool L_48 = V_13;
		if (!L_48)
		{
			goto IL_0110;
		}
	}
	{
		V_12 = (bool)0;
		goto IL_0662;
	}

IL_0110:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_49 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_50 = V_4;
		bool L_51;
		L_51 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_49, L_50, NULL);
		V_14 = L_51;
		bool L_52 = V_14;
		if (!L_52)
		{
			goto IL_0142;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_53 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_54 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_55 = V_4;
		float L_56;
		L_56 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_53, L_54, L_55, NULL);
		V_15 = (bool)((((float)L_56) > ((float)(0.0f)))? 1 : 0);
		bool L_57 = V_15;
		if (!L_57)
		{
			goto IL_013f;
		}
	}
	{
		V_12 = (bool)0;
		goto IL_0662;
	}

IL_013f:
	{
		goto IL_0164;
	}

IL_0142:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_58 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_59 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_60 = V_3;
		float L_61;
		L_61 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_58, L_59, L_60, NULL);
		V_16 = (bool)((((float)L_61) < ((float)(0.0f)))? 1 : 0);
		bool L_62 = V_16;
		if (!L_62)
		{
			goto IL_0163;
		}
	}
	{
		V_12 = (bool)0;
		goto IL_0662;
	}

IL_0163:
	{
	}

IL_0164:
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_63 = __this->____pool_0;
		NullCheck(L_63);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_64;
		L_64 = GenericVirtualFuncInvoker0< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var, L_63);
		V_9 = L_64;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_65 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_66 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_67 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_68 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_69 = V_9;
		Geom_EdgeIntersect_mEC7935EED47854721B3A81E27749CA3A7F4736D3(L_65, L_66, L_67, L_68, L_69, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_70 = V_3;
		NullCheck(L_70);
		float L_71 = L_70->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_72 = V_5;
		NullCheck(L_72);
		float L_73 = L_72->____t_5;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_74;
		L_74 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_71, L_73, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_75 = V_9;
		NullCheck(L_75);
		float L_76 = L_75->____t_5;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((!(((float)L_74) <= ((float)L_76)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_77 = V_9;
		NullCheck(L_77);
		float L_78 = L_77->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_79 = V_4;
		NullCheck(L_79);
		float L_80 = L_79->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_81 = V_6;
		NullCheck(L_81);
		float L_82 = L_81->____t_5;
		float L_83;
		L_83 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_80, L_82, NULL);
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((!(((float)L_78) <= ((float)L_83)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_84 = V_6;
		NullCheck(L_84);
		float L_85 = L_84->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_86 = V_5;
		NullCheck(L_86);
		float L_87 = L_86->____s_4;
		float L_88;
		L_88 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_85, L_87, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_89 = V_9;
		NullCheck(L_89);
		float L_90 = L_89->____s_4;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((!(((float)L_88) <= ((float)L_90)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_91 = V_9;
		NullCheck(L_91);
		float L_92 = L_91->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_93 = V_4;
		NullCheck(L_93);
		float L_94 = L_93->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_95 = V_3;
		NullCheck(L_95);
		float L_96 = L_95->____s_4;
		float L_97;
		L_97 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_94, L_96, NULL);
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((!(((float)L_92) <= ((float)L_97)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_98 = V_9;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_99 = __this->____event_12;
		bool L_100;
		L_100 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_98, L_99, NULL);
		V_17 = L_100;
		bool L_101 = V_17;
		if (!L_101)
		{
			goto IL_024b;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_102 = V_9;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_103 = __this->____event_12;
		NullCheck(L_103);
		float L_104 = L_103->____s_4;
		NullCheck(L_102);
		L_102->____s_4 = L_104;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_105 = V_9;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_106 = __this->____event_12;
		NullCheck(L_106);
		float L_107 = L_106->____t_5;
		NullCheck(L_105);
		L_105->____t_5 = L_107;
	}

IL_024b:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_108 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_109 = V_4;
		bool L_110;
		L_110 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_108, L_109, NULL);
		if (L_110)
		{
			goto IL_0259;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_111 = V_4;
		G_B22_0 = L_111;
		goto IL_025a;
	}

IL_0259:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_112 = V_3;
		G_B22_0 = L_112;
	}

IL_025a:
	{
		V_10 = G_B22_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_113 = V_10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_114 = V_9;
		bool L_115;
		L_115 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_113, L_114, NULL);
		V_18 = L_115;
		bool L_116 = V_18;
		if (!L_116)
		{
			goto IL_0289;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_117 = V_9;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_118 = V_10;
		NullCheck(L_118);
		float L_119 = L_118->____s_4;
		NullCheck(L_117);
		L_117->____s_4 = L_119;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_120 = V_9;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_121 = V_10;
		NullCheck(L_121);
		float L_122 = L_121->____t_5;
		NullCheck(L_120);
		L_120->____t_5 = L_122;
	}

IL_0289:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_123 = V_9;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_124 = V_3;
		bool L_125;
		L_125 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_123, L_124, NULL);
		if (L_125)
		{
			goto IL_029e;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_126 = V_9;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_127 = V_4;
		bool L_128;
		L_128 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_126, L_127, NULL);
		G_B27_0 = ((int32_t)(L_128));
		goto IL_029f;
	}

IL_029e:
	{
		G_B27_0 = 1;
	}

IL_029f:
	{
		V_19 = (bool)G_B27_0;
		bool L_129 = V_19;
		if (!L_129)
		{
			goto IL_02c4;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_130 = ___regUp0;
		bool L_131;
		L_131 = Tess_CheckForRightSplice_m73E6E5E3B926500479750597286CAEAA603E4F58(__this, L_130, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_132 = __this->____pool_0;
		NullCheck(L_132);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mCF5A50512654D7E0169573E26532B28C2E5E6FB2_RuntimeMethod_var, L_132, (&V_9));
		V_12 = (bool)0;
		goto IL_0662;
	}

IL_02c4:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_133 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_134 = __this->____event_12;
		bool L_135;
		L_135 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_133, L_134, NULL);
		if (L_135)
		{
			goto IL_02e9;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_136 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_137 = __this->____event_12;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_138 = V_9;
		float L_139;
		L_139 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_136, L_137, L_138, NULL);
		if ((((float)L_139) >= ((float)(0.0f))))
		{
			goto IL_0316;
		}
	}

IL_02e9:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_140 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_141 = __this->____event_12;
		bool L_142;
		L_142 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_140, L_141, NULL);
		if (L_142)
		{
			goto IL_0313;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_143 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_144 = __this->____event_12;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_145 = V_9;
		float L_146;
		L_146 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_143, L_144, L_145, NULL);
		G_B34_0 = ((((int32_t)((!(((float)L_146) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0314;
	}

IL_0313:
	{
		G_B34_0 = 0;
	}

IL_0314:
	{
		G_B36_0 = G_B34_0;
		goto IL_0317;
	}

IL_0316:
	{
		G_B36_0 = 1;
	}

IL_0317:
	{
		V_20 = (bool)G_B36_0;
		bool L_147 = V_20;
		if (!L_147)
		{
			goto IL_0563;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_148 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_149 = __this->____event_12;
		V_21 = (bool)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_148) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_149))? 1 : 0);
		bool L_150 = V_21;
		if (!L_150)
		{
			goto IL_03af;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_151 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_152 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_153 = V_1;
		NullCheck(L_153);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_154 = L_153->____Sym_2;
		NullCheck(L_151);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_155;
		L_155 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_151, L_152, L_154, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_156 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_157 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_158 = V_2;
		NullCheck(L_158);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_159 = L_158->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_160 = V_1;
		NullCheck(L_156);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_156, L_157, L_159, L_160, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_161 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_162;
		L_162 = Tess_TopLeftRegion_m2FA0AA199DAE05530C04BFFE790A3CB8C83C7F86(__this, L_161, NULL);
		___regUp0 = L_162;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_163 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_164;
		L_164 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_163, NULL);
		NullCheck(L_164);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_165 = L_164->____eUp_0;
		V_1 = L_165;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_166 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_167;
		L_167 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_166, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_168 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_169;
		L_169 = Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82(__this, L_167, L_168, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_170 = ___regUp0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_171 = V_1;
		NullCheck(L_171);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_172;
		L_172 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_171, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_173 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_174 = V_1;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_170, L_172, L_173, L_174, (bool)1, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_175 = __this->____pool_0;
		NullCheck(L_175);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mCF5A50512654D7E0169573E26532B28C2E5E6FB2_RuntimeMethod_var, L_175, (&V_9));
		V_12 = (bool)1;
		goto IL_0662;
	}

IL_03af:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_176 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_177 = __this->____event_12;
		V_22 = (bool)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_176) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_177))? 1 : 0);
		bool L_178 = V_22;
		if (!L_178)
		{
			goto IL_0459;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_179 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_180 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_181 = V_2;
		NullCheck(L_181);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_182 = L_181->____Sym_2;
		NullCheck(L_179);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_183;
		L_183 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_179, L_180, L_182, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_184 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_185 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_186 = V_1;
		NullCheck(L_186);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_187 = L_186->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_188 = V_2;
		NullCheck(L_188);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_189;
		L_189 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_188, NULL);
		NullCheck(L_184);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_184, L_185, L_187, L_189, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_190 = ___regUp0;
		V_0 = L_190;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_191 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_192;
		L_192 = Tess_TopRightRegion_m4D715D95F08BD411FFABF59F4DB4FBD0EDC2E1E7(__this, L_191, NULL);
		___regUp0 = L_192;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_193 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_194;
		L_194 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_193, NULL);
		NullCheck(L_194);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_195 = L_194->____eUp_0;
		NullCheck(L_195);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_196;
		L_196 = Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174(L_195, NULL);
		V_23 = L_196;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_197 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_198 = V_2;
		NullCheck(L_198);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_199;
		L_199 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_198, NULL);
		NullCheck(L_197);
		L_197->____eUp_0 = L_199;
		Il2CppCodeGenWriteBarrier((void**)(&L_197->____eUp_0), (void*)L_199);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_200 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_201;
		L_201 = Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82(__this, L_200, (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL, NULL);
		V_2 = L_201;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_202 = ___regUp0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_203 = V_2;
		NullCheck(L_203);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_204 = L_203->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_205 = V_1;
		NullCheck(L_205);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_206;
		L_206 = Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174(L_205, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_207 = V_23;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_202, L_204, L_206, L_207, (bool)1, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_208 = __this->____pool_0;
		NullCheck(L_208);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mCF5A50512654D7E0169573E26532B28C2E5E6FB2_RuntimeMethod_var, L_208, (&V_9));
		V_12 = (bool)1;
		goto IL_0662;
	}

IL_0459:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_209 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_210 = __this->____event_12;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_211 = V_9;
		float L_212;
		L_212 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_209, L_210, L_211, NULL);
		V_24 = (bool)((((int32_t)((!(((float)L_212) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_213 = V_24;
		if (!L_213)
		{
			goto IL_04d6;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_214 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_215;
		L_215 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_214, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_216 = ___regUp0;
		int32_t L_217 = 1;
		V_25 = (bool)L_217;
		NullCheck(L_216);
		L_216->____dirty_5 = (bool)L_217;
		bool L_218 = V_25;
		NullCheck(L_215);
		L_215->____dirty_5 = L_218;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_219 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_220 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_221 = V_1;
		NullCheck(L_221);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_222 = L_221->____Sym_2;
		NullCheck(L_219);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_223;
		L_223 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_219, L_220, L_222, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_224 = V_1;
		NullCheck(L_224);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_225 = L_224->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_226 = __this->____event_12;
		NullCheck(L_226);
		float L_227 = L_226->____s_4;
		NullCheck(L_225);
		L_225->____s_4 = L_227;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_228 = V_1;
		NullCheck(L_228);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_229 = L_228->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_230 = __this->____event_12;
		NullCheck(L_230);
		float L_231 = L_230->____t_5;
		NullCheck(L_229);
		L_229->____t_5 = L_231;
	}

IL_04d6:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_232 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_233 = __this->____event_12;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_234 = V_9;
		float L_235;
		L_235 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_232, L_233, L_234, NULL);
		V_26 = (bool)((((int32_t)((!(((float)L_235) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_236 = V_26;
		if (!L_236)
		{
			goto IL_054d;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_237 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_238 = V_0;
		int32_t L_239 = 1;
		V_25 = (bool)L_239;
		NullCheck(L_238);
		L_238->____dirty_5 = (bool)L_239;
		bool L_240 = V_25;
		NullCheck(L_237);
		L_237->____dirty_5 = L_240;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_241 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_242 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_243 = V_2;
		NullCheck(L_243);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_244 = L_243->____Sym_2;
		NullCheck(L_241);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_245;
		L_245 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_241, L_242, L_244, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_246 = V_2;
		NullCheck(L_246);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_247 = L_246->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_248 = __this->____event_12;
		NullCheck(L_248);
		float L_249 = L_248->____s_4;
		NullCheck(L_247);
		L_247->____s_4 = L_249;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_250 = V_2;
		NullCheck(L_250);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_251 = L_250->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_252 = __this->____event_12;
		NullCheck(L_252);
		float L_253 = L_252->____t_5;
		NullCheck(L_251);
		L_251->____t_5 = L_253;
	}

IL_054d:
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_254 = __this->____pool_0;
		NullCheck(L_254);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mCF5A50512654D7E0169573E26532B28C2E5E6FB2_RuntimeMethod_var, L_254, (&V_9));
		V_12 = (bool)0;
		goto IL_0662;
	}

IL_0563:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_255 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_256 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_257 = V_1;
		NullCheck(L_257);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_258 = L_257->____Sym_2;
		NullCheck(L_255);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_259;
		L_259 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_255, L_256, L_258, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_260 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_261 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_262 = V_2;
		NullCheck(L_262);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_263 = L_262->____Sym_2;
		NullCheck(L_260);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_264;
		L_264 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_260, L_261, L_263, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_265 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_266 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_267 = V_2;
		NullCheck(L_267);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_268;
		L_268 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_267, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_269 = V_1;
		NullCheck(L_265);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_265, L_266, L_268, L_269, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_270 = V_1;
		NullCheck(L_270);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_271 = L_270->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_272 = V_9;
		NullCheck(L_272);
		float L_273 = L_272->____s_4;
		NullCheck(L_271);
		L_271->____s_4 = L_273;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_274 = V_1;
		NullCheck(L_274);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_275 = L_274->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_276 = V_9;
		NullCheck(L_276);
		float L_277 = L_276->____t_5;
		NullCheck(L_275);
		L_275->____t_5 = L_277;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_278 = __this->____pool_0;
		NullCheck(L_278);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mCF5A50512654D7E0169573E26532B28C2E5E6FB2_RuntimeMethod_var, L_278, (&V_9));
		V_9 = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_279 = V_1;
		NullCheck(L_279);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_280 = L_279->____Org_5;
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_281 = __this->____pq_11;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_282 = V_1;
		NullCheck(L_282);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_283 = L_282->____Org_5;
		NullCheck(L_281);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 L_284;
		L_284 = PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA(L_281, L_283, PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA_RuntimeMethod_var);
		NullCheck(L_280);
		L_280->____pqHandle_6 = L_284;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_285 = V_1;
		NullCheck(L_285);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_286 = L_285->____Org_5;
		NullCheck(L_286);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043* L_287 = (&L_286->____pqHandle_6);
		int32_t L_288 = L_287->____handle_1;
		il2cpp_codegen_runtime_class_init_inline(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var);
		int32_t L_289 = ((PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_StaticFields*)il2cpp_codegen_static_fields_for(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var))->___Invalid_0;
		V_27 = (bool)((((int32_t)L_288) == ((int32_t)L_289))? 1 : 0);
		bool L_290 = V_27;
		if (!L_290)
		{
			goto IL_0626;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_291 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_291);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_291, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD195D0425B8FE98A04F1BE9F8F30B202B33C80ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_291, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299_RuntimeMethod_var)));
	}

IL_0626:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_292 = V_1;
		NullCheck(L_292);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_293 = L_292->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_294 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_295 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_296 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_297 = V_6;
		Tess_GetIntersectData_m1EF3ED6C6834CACC2C20DD246F414D854BBFF6CE(__this, L_293, L_294, L_295, L_296, L_297, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_298 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_299;
		L_299 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_298, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_300 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_301 = V_0;
		int32_t L_302 = 1;
		V_25 = (bool)L_302;
		NullCheck(L_301);
		L_301->____dirty_5 = (bool)L_302;
		bool L_303 = V_25;
		bool L_304 = L_303;
		V_25 = L_304;
		NullCheck(L_300);
		L_300->____dirty_5 = L_304;
		bool L_305 = V_25;
		NullCheck(L_299);
		L_299->____dirty_5 = L_305;
		V_12 = (bool)0;
		goto IL_0662;
	}

IL_0662:
	{
		bool L_306 = V_12;
		return L_306;
	}
}
// System.Void LibTessDotNet.Tess::WalkDirtyRegions(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_WalkDirtyRegions_m5988A5D583346F08BC85EADEEF4D527752099025 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, const RuntimeMethod* method) 
{
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
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
	int32_t G_B8_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B37_0 = 0;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_01e3;
	}

IL_000e:
	{
		goto IL_001e;
	}

IL_0011:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = V_0;
		___regUp0 = L_2;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = V_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4;
		L_4 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_3, NULL);
		V_0 = L_4;
	}

IL_001e:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->____dirty_5;
		V_3 = L_6;
		bool L_7 = V_3;
		if (L_7)
		{
			goto IL_0011;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_8 = ___regUp0;
		NullCheck(L_8);
		bool L_9 = L_8->____dirty_5;
		V_4 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_11 = ___regUp0;
		V_0 = L_11;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_12 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_13;
		L_13 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_12, NULL);
		___regUp0 = L_13;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_14 = ___regUp0;
		if (!L_14)
		{
			goto IL_0051;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_15 = ___regUp0;
		NullCheck(L_15);
		bool L_16 = L_15->____dirty_5;
		G_B8_0 = ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		goto IL_0052;
	}

IL_0051:
	{
		G_B8_0 = 1;
	}

IL_0052:
	{
		V_5 = (bool)G_B8_0;
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_005e;
		}
	}
	{
		goto IL_01eb;
	}

IL_005e:
	{
	}

IL_005f:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_18 = ___regUp0;
		NullCheck(L_18);
		L_18->____dirty_5 = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_19 = ___regUp0;
		NullCheck(L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = L_19->____eUp_0;
		V_1 = L_20;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_21 = V_0;
		NullCheck(L_21);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = L_21->____eUp_0;
		V_2 = L_22;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_1;
		NullCheck(L_23);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24;
		L_24 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_23, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_2;
		NullCheck(L_25);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26;
		L_26 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_25, NULL);
		V_6 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_24) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_26))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_0112;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_28 = ___regUp0;
		bool L_29;
		L_29 = Tess_CheckForLeftSplice_m925CF548154D6A922CEDDDEE3B1662F409D874C2(__this, L_28, NULL);
		V_7 = L_29;
		bool L_30 = V_7;
		if (!L_30)
		{
			goto IL_0111;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_31 = V_0;
		NullCheck(L_31);
		bool L_32 = L_31->____fixUpperEdge_6;
		V_8 = L_32;
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_00d7;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_34 = V_0;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_34, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_35 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_36 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = V_2;
		NullCheck(L_35);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_35, L_36, L_37, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_38 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_39;
		L_39 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_38, NULL);
		V_0 = L_39;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_40 = V_0;
		NullCheck(L_40);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = L_40->____eUp_0;
		V_2 = L_41;
		goto IL_0110;
	}

IL_00d7:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_42 = ___regUp0;
		NullCheck(L_42);
		bool L_43 = L_42->____fixUpperEdge_6;
		V_9 = L_43;
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_0110;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_45 = ___regUp0;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_45, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_46 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_47 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_1;
		NullCheck(L_46);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_46, L_47, L_48, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_49 = V_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_50;
		L_50 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_49, NULL);
		___regUp0 = L_50;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_51 = ___regUp0;
		NullCheck(L_51);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52 = L_51->____eUp_0;
		V_1 = L_52;
	}

IL_0110:
	{
	}

IL_0111:
	{
	}

IL_0112:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_53 = V_1;
		NullCheck(L_53);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_54 = L_53->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_55 = V_2;
		NullCheck(L_55);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_56 = L_55->____Org_5;
		V_10 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_54) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_56))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_57 = V_10;
		if (!L_57)
		{
			goto IL_018f;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_58 = V_1;
		NullCheck(L_58);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_59;
		L_59 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_58, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_60 = V_2;
		NullCheck(L_60);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_61;
		L_61 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_60, NULL);
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_59) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_61)))
		{
			goto IL_0169;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_62 = ___regUp0;
		NullCheck(L_62);
		bool L_63 = L_62->____fixUpperEdge_6;
		if (L_63)
		{
			goto IL_0169;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_64 = V_0;
		NullCheck(L_64);
		bool L_65 = L_64->____fixUpperEdge_6;
		if (L_65)
		{
			goto IL_0169;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_66 = V_1;
		NullCheck(L_66);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_67;
		L_67 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_66, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_68 = __this->____event_12;
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_67) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_68)))
		{
			goto IL_0166;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_69 = V_2;
		NullCheck(L_69);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_70;
		L_70 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_69, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_71 = __this->____event_12;
		G_B26_0 = ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_70) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_71))? 1 : 0);
		goto IL_0167;
	}

IL_0166:
	{
		G_B26_0 = 1;
	}

IL_0167:
	{
		G_B28_0 = G_B26_0;
		goto IL_016a;
	}

IL_0169:
	{
		G_B28_0 = 0;
	}

IL_016a:
	{
		V_11 = (bool)G_B28_0;
		bool L_72 = V_11;
		if (!L_72)
		{
			goto IL_0184;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_73 = ___regUp0;
		bool L_74;
		L_74 = Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299(__this, L_73, NULL);
		V_12 = L_74;
		bool L_75 = V_12;
		if (!L_75)
		{
			goto IL_0181;
		}
	}
	{
		goto IL_01eb;
	}

IL_0181:
	{
		goto IL_018e;
	}

IL_0184:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_76 = ___regUp0;
		bool L_77;
		L_77 = Tess_CheckForRightSplice_m73E6E5E3B926500479750597286CAEAA603E4F58(__this, L_76, NULL);
	}

IL_018e:
	{
	}

IL_018f:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_78 = V_1;
		NullCheck(L_78);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_79 = L_78->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_80 = V_2;
		NullCheck(L_80);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_81 = L_80->____Org_5;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_79) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_81))))
		{
			goto IL_01ad;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_82 = V_1;
		NullCheck(L_82);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_83;
		L_83 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_82, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_84 = V_2;
		NullCheck(L_84);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_85;
		L_85 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_84, NULL);
		G_B37_0 = ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_83) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_85))? 1 : 0);
		goto IL_01ae;
	}

IL_01ad:
	{
		G_B37_0 = 0;
	}

IL_01ae:
	{
		V_13 = (bool)G_B37_0;
		bool L_86 = V_13;
		if (!L_86)
		{
			goto IL_01e2;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_87 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_88 = V_1;
		Geom_AddWinding_m6EF7D9E71F27FA2029D3464EBF2828972B0D9A0B(L_87, L_88, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_89 = ___regUp0;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_89, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_90 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_91 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_92 = V_1;
		NullCheck(L_90);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_90, L_91, L_92, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_93 = V_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_94;
		L_94 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_93, NULL);
		___regUp0 = L_94;
	}

IL_01e2:
	{
	}

IL_01e3:
	{
		V_14 = (bool)1;
		goto IL_000e;
	}

IL_01eb:
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::ConnectRightVertex(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectRightVertex_m014FFD2EC782394218F750F2EA57A40F05E133C6 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eBottomLeft1, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	bool V_4 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___eBottomLeft1;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Onext_3;
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3;
		L_3 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_2, NULL);
		V_1 = L_3;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = ___regUp0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eUp_0;
		V_2 = L_5;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_6 = V_1;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____eUp_0;
		V_3 = L_7;
		V_4 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9;
		L_9 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_8, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_3;
		NullCheck(L_10);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11;
		L_11 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_10, NULL);
		V_6 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_9) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0042;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_13 = ___regUp0;
		bool L_14;
		L_14 = Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299(__this, L_13, NULL);
	}

IL_0042:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_2;
		NullCheck(L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = L_15->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = __this->____event_12;
		bool L_18;
		L_18 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_16, L_17, NULL);
		V_7 = L_18;
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_009c;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_20 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_21 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_0;
		NullCheck(L_22);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23;
		L_23 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_22, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_2;
		NullCheck(L_20);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_20, L_21, L_23, L_24, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_25 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_26;
		L_26 = Tess_TopLeftRegion_m2FA0AA199DAE05530C04BFFE790A3CB8C83C7F86(__this, L_25, NULL);
		___regUp0 = L_26;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_27 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_28;
		L_28 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_27, NULL);
		NullCheck(L_28);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = L_28->____eUp_0;
		V_0 = L_29;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_30 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_31;
		L_31 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_30, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_32 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33;
		L_33 = Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82(__this, L_31, L_32, NULL);
		V_4 = (bool)1;
	}

IL_009c:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_3;
		NullCheck(L_34);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_35 = L_34->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_36 = __this->____event_12;
		bool L_37;
		L_37 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_35, L_36, NULL);
		V_8 = L_37;
		bool L_38 = V_8;
		if (!L_38)
		{
			goto IL_00db;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_39 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_40 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = ___eBottomLeft1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_3;
		NullCheck(L_42);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43;
		L_43 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_42, NULL);
		NullCheck(L_39);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_39, L_40, L_41, L_43, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_44 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45;
		L_45 = Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82(__this, L_44, (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL, NULL);
		___eBottomLeft1 = L_45;
		V_4 = (bool)1;
	}

IL_00db:
	{
		bool L_46 = V_4;
		V_9 = L_46;
		bool L_47 = V_9;
		if (!L_47)
		{
			goto IL_00f7;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_48 = ___regUp0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = ___eBottomLeft1;
		NullCheck(L_49);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = L_49->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52 = V_0;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_48, L_50, L_51, L_52, (bool)1, NULL);
		goto IL_016d;
	}

IL_00f7:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_53 = V_3;
		NullCheck(L_53);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_54 = L_53->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_55 = V_2;
		NullCheck(L_55);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_56 = L_55->____Org_5;
		bool L_57;
		L_57 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_54, L_56, NULL);
		V_10 = L_57;
		bool L_58 = V_10;
		if (!L_58)
		{
			goto IL_011a;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_59 = V_3;
		NullCheck(L_59);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_60;
		L_60 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_59, NULL);
		V_5 = L_60;
		goto IL_011f;
	}

IL_011a:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_61 = V_2;
		V_5 = L_61;
	}

IL_011f:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_62 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_63 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_64 = ___eBottomLeft1;
		NullCheck(L_64);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_65;
		L_65 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_64, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_66 = V_5;
		NullCheck(L_62);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_67;
		L_67 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_62, L_63, L_65, L_66, NULL);
		V_5 = L_67;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_68 = ___regUp0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_69 = V_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_70 = V_5;
		NullCheck(L_70);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_71 = L_70->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_72 = V_5;
		NullCheck(L_72);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_73 = L_72->____Onext_3;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_68, L_69, L_71, L_73, (bool)0, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_74 = V_5;
		NullCheck(L_74);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_75 = L_74->____Sym_2;
		NullCheck(L_75);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_76 = L_75->____activeRegion_7;
		NullCheck(L_76);
		L_76->____fixUpperEdge_6 = (bool)1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_77 = ___regUp0;
		Tess_WalkDirtyRegions_m5988A5D583346F08BC85EADEEF4D527752099025(__this, L_77, NULL);
	}

IL_016d:
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::ConnectLeftDegenerate(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___vEvent1, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___regUp0;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eUp_0;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		NullCheck(L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = L_2->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___vEvent1;
		bool L_5;
		L_5 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_3, L_4, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral293D055F04D51798E7BDD8DFB0C6C9C093FD520C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44_RuntimeMethod_var)));
	}

IL_0024:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_0;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9;
		L_9 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_8, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___vEvent1;
		bool L_11;
		L_11 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_9, L_10, NULL);
		V_2 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_009e;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_13 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_14 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_0;
		NullCheck(L_15);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = L_15->____Sym_2;
		NullCheck(L_13);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17;
		L_17 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_13, L_14, L_16, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_18 = ___regUp0;
		NullCheck(L_18);
		bool L_19 = L_18->____fixUpperEdge_6;
		V_3 = L_19;
		bool L_20 = V_3;
		if (!L_20)
		{
			goto IL_007b;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_21 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_22 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_0;
		NullCheck(L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = L_23->____Onext_3;
		NullCheck(L_21);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_21, L_22, L_24, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_25 = ___regUp0;
		NullCheck(L_25);
		L_25->____fixUpperEdge_6 = (bool)0;
	}

IL_007b:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_26 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_27 = __this->____pool_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28 = ___vEvent1;
		NullCheck(L_28);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = L_28->____anEdge_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_0;
		NullCheck(L_26);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_26, L_27, L_29, L_30, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_31 = ___vEvent1;
		Tess_SweepEvent_mFF232770963565BD3D3DE22E97A67DCA3E749FED(__this, L_31, NULL);
		goto IL_00a9;
	}

IL_009e:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_32 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_32);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral293D055F04D51798E7BDD8DFB0C6C9C093FD520C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44_RuntimeMethod_var)));
	}

IL_00a9:
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::ConnectLeftVertex(LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftVertex_m7F52A092CDE293862BE3773D7ABA7BF7C6A3121B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___vEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Find_mAF7B5CED2C433BD5E9EADDC6604B3A28BCE7CDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m8FDF424BA7A561E9EFF73EC951469946B48EABAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_1 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* G_B7_0 = NULL;
	int32_t G_B10_0 = 0;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = __this->____pool_0;
		NullCheck(L_0);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = GenericVirtualFuncInvoker0< ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* >::Invoke(IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var, L_0);
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = ___vEvent0;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____anEdge_2;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____Sym_2;
		NullCheck(L_2);
		L_2->____eUp_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____eUp_0), (void*)L_5);
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_6 = __this->____dict_10;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_7 = V_0;
		NullCheck(L_6);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_8;
		L_8 = Dict_1_Find_mAF7B5CED2C433BD5E9EADDC6604B3A28BCE7CDB4(L_6, L_7, Dict_1_Find_mAF7B5CED2C433BD5E9EADDC6604B3A28BCE7CDB4_RuntimeMethod_var);
		NullCheck(L_8);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_9;
		L_9 = Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D(L_8, Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D_RuntimeMethod_var);
		V_1 = L_9;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_10 = __this->____pool_0;
		NullCheck(L_10);
		GenericVirtualActionInvoker1< ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47** >::Invoke(IPool_Return_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m8FDF424BA7A561E9EFF73EC951469946B48EABAA_RuntimeMethod_var, L_10, (&V_0));
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_11 = V_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_12;
		L_12 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_11, NULL);
		V_2 = L_12;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_13 = V_2;
		V_6 = (bool)((((RuntimeObject*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)L_13) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_0056;
		}
	}
	{
		goto IL_0174;
	}

IL_0056:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_15 = V_1;
		NullCheck(L_15);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = L_15->____eUp_0;
		V_3 = L_16;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_17 = V_2;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = L_17->____eUp_0;
		V_4 = L_18;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_3;
		NullCheck(L_19);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20;
		L_20 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_19, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = ___vEvent0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_3;
		NullCheck(L_22);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23 = L_22->____Org_5;
		float L_24;
		L_24 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_20, L_21, L_23, NULL);
		V_7 = (bool)((((float)L_24) == ((float)(0.0f)))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_0093;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_26 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_27 = ___vEvent0;
		Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44(__this, L_26, L_27, NULL);
		goto IL_0174;
	}

IL_0093:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_4;
		NullCheck(L_28);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_29;
		L_29 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_28, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_3;
		NullCheck(L_30);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_31;
		L_31 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_30, NULL);
		bool L_32;
		L_32 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_29, L_31, NULL);
		if (L_32)
		{
			goto IL_00aa;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_33 = V_2;
		G_B7_0 = L_33;
		goto IL_00ab;
	}

IL_00aa:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_34 = V_1;
		G_B7_0 = L_34;
	}

IL_00ab:
	{
		V_5 = G_B7_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_35 = V_1;
		NullCheck(L_35);
		bool L_36 = L_35->____inside_3;
		if (L_36)
		{
			goto IL_00be;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_37 = V_5;
		NullCheck(L_37);
		bool L_38 = L_37->____fixUpperEdge_6;
		G_B10_0 = ((int32_t)(L_38));
		goto IL_00bf;
	}

IL_00be:
	{
		G_B10_0 = 1;
	}

IL_00bf:
	{
		V_8 = (bool)G_B10_0;
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_015c;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_40 = V_5;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_41 = V_1;
		V_10 = (bool)((((RuntimeObject*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)L_40) == ((RuntimeObject*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)L_41))? 1 : 0);
		bool L_42 = V_10;
		if (!L_42)
		{
			goto IL_00fc;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_43 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_44 = __this->____pool_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_45 = ___vEvent0;
		NullCheck(L_45);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = L_45->____anEdge_2;
		NullCheck(L_46);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = L_46->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_3;
		NullCheck(L_48);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = L_48->____Lnext_4;
		NullCheck(L_43);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50;
		L_50 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_43, L_44, L_47, L_49, NULL);
		V_9 = L_50;
		goto IL_0123;
	}

IL_00fc:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_51 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_52 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_53 = V_4;
		NullCheck(L_53);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54;
		L_54 = Edge_get__Dnext_m7E374925C354672842CF18197905942EA76DD7E7(L_53, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_55 = ___vEvent0;
		NullCheck(L_55);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_56 = L_55->____anEdge_2;
		NullCheck(L_51);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_57;
		L_57 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_51, L_52, L_54, L_56, NULL);
		NullCheck(L_57);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_58 = L_57->____Sym_2;
		V_9 = L_58;
	}

IL_0123:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_59 = V_5;
		NullCheck(L_59);
		bool L_60 = L_59->____fixUpperEdge_6;
		V_11 = L_60;
		bool L_61 = V_11;
		if (!L_61)
		{
			goto IL_013f;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_62 = V_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_63 = V_9;
		Tess_FixUpperEdge_m1E4236D65D3FB0321FA1FB71BAE30806B18D889B(__this, L_62, L_63, NULL);
		goto IL_0151;
	}

IL_013f:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_64 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_65 = V_9;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_66;
		L_66 = Tess_AddRegionBelow_m0275D421E35EBBEFF2546E2DDEFBBB1061EC700D(__this, L_64, L_65, NULL);
		Tess_ComputeWinding_m08BB6BDD14F5FD6820052F3833AE916DB6D05B50(__this, L_66, NULL);
	}

IL_0151:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_67 = ___vEvent0;
		Tess_SweepEvent_mFF232770963565BD3D3DE22E97A67DCA3E749FED(__this, L_67, NULL);
		goto IL_0174;
	}

IL_015c:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_68 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_69 = ___vEvent0;
		NullCheck(L_69);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_70 = L_69->____anEdge_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_71 = ___vEvent0;
		NullCheck(L_71);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_72 = L_71->____anEdge_2;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_68, L_70, L_72, (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL, (bool)1, NULL);
	}

IL_0174:
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::SweepEvent(LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SweepEvent_mFF232770963565BD3D3DE22E97A67DCA3E749FED (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___vEvent0, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_1 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___vEvent0;
		__this->____event_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____event_12), (void*)L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___vEvent0;
		NullCheck(L_1);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = L_1->____anEdge_2;
		V_0 = L_2;
		goto IL_0034;
	}

IL_0011:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_0;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____Onext_3;
		V_0 = L_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___vEvent0;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____anEdge_2;
		V_5 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_5) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_7))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = ___vEvent0;
		Tess_ConnectLeftVertex_m7F52A092CDE293862BE3773D7ABA7BF7C6A3121B(__this, L_9, NULL);
		goto IL_009b;
	}

IL_0033:
	{
	}

IL_0034:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_0;
		NullCheck(L_10);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_11 = L_10->____activeRegion_7;
		V_6 = (bool)((((RuntimeObject*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)L_11) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_12 = V_6;
		if (L_12)
		{
			goto IL_0011;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_13);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_14 = L_13->____activeRegion_7;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_15;
		L_15 = Tess_TopLeftRegion_m2FA0AA199DAE05530C04BFFE790A3CB8C83C7F86(__this, L_14, NULL);
		V_1 = L_15;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_16 = V_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_17;
		L_17 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_16, NULL);
		V_2 = L_17;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_18 = V_2;
		NullCheck(L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = L_18->____eUp_0;
		V_3 = L_19;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_20 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21;
		L_21 = Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82(__this, L_20, (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL, NULL);
		V_4 = L_21;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_4;
		NullCheck(L_22);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = L_22->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_3;
		V_7 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_23) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_24))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_0087;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_26 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_4;
		Tess_ConnectRightVertex_m014FFD2EC782394218F750F2EA57A40F05E133C6(__this, L_26, L_27, NULL);
		goto IL_009b;
	}

IL_0087:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_28 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_4;
		NullCheck(L_29);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = L_29->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_3;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_28, L_30, L_31, L_32, (bool)1, NULL);
	}

IL_009b:
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::AddSentinel(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddSentinel_m88FB52E7CF92ECB9C1FF491E64B3CC5E076413D3 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, float ___smin0, float ___smax1, float ___t2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Insert_m76E76003906032D37BF3554CA41AAAFB38240615_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_1 = NULL;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_1 = __this->____pool_0;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2;
		L_2 = Mesh_MakeEdge_m885B759356861633DA4414A5DE88F5FDB0E8B8E7(L_0, L_1, NULL);
		V_0 = L_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_0;
		NullCheck(L_3);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = L_3->____Org_5;
		float L_5 = ___smax1;
		NullCheck(L_4);
		L_4->____s_4 = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_0;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = L_6->____Org_5;
		float L_8 = ___t2;
		NullCheck(L_7);
		L_7->____t_5 = L_8;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_0;
		NullCheck(L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10;
		L_10 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_9, NULL);
		float L_11 = ___smin0;
		NullCheck(L_10);
		L_10->____s_4 = L_11;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_0;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13;
		L_13 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_12, NULL);
		float L_14 = ___t2;
		NullCheck(L_13);
		L_13->____t_5 = L_14;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_0;
		NullCheck(L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16;
		L_16 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_15, NULL);
		__this->____event_12 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____event_12), (void*)L_16);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_17 = __this->____pool_0;
		NullCheck(L_17);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_18;
		L_18 = GenericVirtualFuncInvoker0< ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* >::Invoke(IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var, L_17);
		V_1 = L_18;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_19 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_0;
		NullCheck(L_19);
		L_19->____eUp_0 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->____eUp_0), (void*)L_20);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_21 = V_1;
		NullCheck(L_21);
		L_21->____windingNumber_2 = 0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_22 = V_1;
		NullCheck(L_22);
		L_22->____inside_3 = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_23 = V_1;
		NullCheck(L_23);
		L_23->____fixUpperEdge_6 = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_24 = V_1;
		NullCheck(L_24);
		L_24->____sentinel_4 = (bool)1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_25 = V_1;
		NullCheck(L_25);
		L_25->____dirty_5 = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_26 = V_1;
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_27 = __this->____dict_10;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_28 = V_1;
		NullCheck(L_27);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_29;
		L_29 = Dict_1_Insert_m76E76003906032D37BF3554CA41AAAFB38240615(L_27, L_28, Dict_1_Insert_m76E76003906032D37BF3554CA41AAAFB38240615_RuntimeMethod_var);
		NullCheck(L_26);
		L_26->____nodeUp_1 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->____nodeUp_1), (void*)L_29);
		return;
	}
}
// System.Void LibTessDotNet.Tess::InitEdgeDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitEdgeDict_mEB38032A27EBED333E70337D99F8E0AC09C131A8 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Init_mC013263B0E38EE41CC4C69C6788D088B8122D314_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1__ctor_m2E30A50F7408565682813C3C28D87F024029AD42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tess_EdgeLeq_m91CF47985D9D5E386D03C685E54E650DA722307A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_0 = __this->____dict_10;
		V_0 = (bool)((((RuntimeObject*)(Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_2 = __this->____pool_0;
		LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6* L_3 = (LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6*)il2cpp_codegen_object_new(LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LessOrEqual__ctor_m6556B77F3E07A00B7AFD15AD07B0EF86306BFF0C(L_3, __this, (intptr_t)((void*)Tess_EdgeLeq_m91CF47985D9D5E386D03C685E54E650DA722307A_RuntimeMethod_var), NULL);
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_4 = (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*)il2cpp_codegen_object_new(Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dict_1__ctor_m2E30A50F7408565682813C3C28D87F024029AD42(L_4, L_2, L_3, Dict_1__ctor_m2E30A50F7408565682813C3C28D87F024029AD42_RuntimeMethod_var);
		__this->____dict_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dict_10), (void*)L_4);
		goto IL_003d;
	}

IL_002f:
	{
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_5 = __this->____dict_10;
		NullCheck(L_5);
		Dict_1_Init_mC013263B0E38EE41CC4C69C6788D088B8122D314(L_5, Dict_1_Init_mC013263B0E38EE41CC4C69C6788D088B8122D314_RuntimeMethod_var);
	}

IL_003d:
	{
		float L_6 = __this->___SentinelCoord_21;
		float L_7 = __this->___SentinelCoord_21;
		float L_8 = __this->___SentinelCoord_21;
		Tess_AddSentinel_m88FB52E7CF92ECB9C1FF491E64B3CC5E076413D3(__this, ((-L_6)), L_7, ((-L_8)), NULL);
		float L_9 = __this->___SentinelCoord_21;
		float L_10 = __this->___SentinelCoord_21;
		float L_11 = __this->___SentinelCoord_21;
		Tess_AddSentinel_m88FB52E7CF92ECB9C1FF491E64B3CC5E076413D3(__this, ((-L_9)), L_10, L_11, NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::DoneEdgeDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DoneEdgeDict_m35196774C9960C4A2D2ACCD938DB0453C43B9C9E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Min_m733D0E65ECF2770E0BBF7268E415BC20E49A0A84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Reset_mB559CCC86C666641C6F1AA9ECB511EB5C8A1EE11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_get_Empty_m207AA8B0DB8383A4989EC4F54E39794101E51A53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = 0;
		goto IL_0047;
	}

IL_0005:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = V_1;
		NullCheck(L_0);
		bool L_1 = L_0->____sentinel_4;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = V_1;
		NullCheck(L_3);
		bool L_4 = L_3->____fixUpperEdge_6;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F(L_4, NULL);
		int32_t L_5 = V_0;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		V_0 = L_6;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)L_6) == ((int32_t)1))? 1 : 0), NULL);
	}

IL_002f:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->____windingNumber_2;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0), NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_9 = V_1;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_9, NULL);
	}

IL_0047:
	{
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_10 = __this->____dict_10;
		NullCheck(L_10);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_11;
		L_11 = Dict_1_Min_m733D0E65ECF2770E0BBF7268E415BC20E49A0A84(L_10, Dict_1_Min_m733D0E65ECF2770E0BBF7268E415BC20E49A0A84_RuntimeMethod_var);
		NullCheck(L_11);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_12;
		L_12 = Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D(L_11, Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D_RuntimeMethod_var);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_13 = L_12;
		V_1 = L_13;
		V_3 = (bool)((!(((RuntimeObject*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)L_13) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_0005;
		}
	}
	{
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_15 = __this->____dict_10;
		NullCheck(L_15);
		bool L_16;
		L_16 = Dict_1_get_Empty_m207AA8B0DB8383A4989EC4F54E39794101E51A53(L_15, Dict_1_get_Empty_m207AA8B0DB8383A4989EC4F54E39794101E51A53_RuntimeMethod_var);
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F(L_16, NULL);
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_17 = __this->____dict_10;
		NullCheck(L_17);
		Dict_1_Reset_mB559CCC86C666641C6F1AA9ECB511EB5C8A1EE11(L_17, Dict_1_Reset_mB559CCC86C666641C6F1AA9ECB511EB5C8A1EE11_RuntimeMethod_var);
		return;
	}
}
// System.Void LibTessDotNet.Tess::RemoveDegenerateEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateEdges_m6F88AF680A0B3E2FF9A8E274FF475C1EDDF025CC (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B17_0 = 0;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eHead_2;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____next_1;
		V_1 = L_3;
		goto IL_0103;
	}

IL_0019:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_1;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____next_1;
		V_2 = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_1;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____Lnext_4;
		V_3 = L_7;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_1;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = L_8->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		NullCheck(L_10);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11;
		L_11 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_10, NULL);
		bool L_12;
		L_12 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_004e;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_1;
		NullCheck(L_13);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = L_13->____Lnext_4;
		NullCheck(L_14);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = L_14->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_1;
		G_B4_0 = ((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_15) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004f;
	}

IL_004e:
	{
		G_B4_0 = 0;
	}

IL_004f:
	{
		V_4 = (bool)G_B4_0;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007c;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_1;
		Tess_SpliceMergeVertices_m3C1B73AB8A2F388421982B310359B74FE1F73290(__this, L_18, L_19, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_20 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_21 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_1;
		NullCheck(L_20);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_20, L_21, L_22, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_3;
		V_1 = L_23;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_1;
		NullCheck(L_24);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = L_24->____Lnext_4;
		V_3 = L_25;
	}

IL_007c:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_3;
		NullCheck(L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = L_26->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_1;
		V_5 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_27) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_28))? 1 : 0);
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_0100;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_1;
		V_6 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_30) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_31))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_00cd;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_2;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_33) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_34)))
		{
			goto IL_00a9;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_2;
		NullCheck(L_36);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = L_36->____Sym_2;
		G_B11_0 = ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_35) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_37))? 1 : 0);
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B11_0 = 1;
	}

IL_00aa:
	{
		V_7 = (bool)G_B11_0;
		bool L_38 = V_7;
		if (!L_38)
		{
			goto IL_00b9;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_2;
		NullCheck(L_39);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = L_39->____next_1;
		V_2 = L_40;
	}

IL_00b9:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_41 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_42 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43 = V_3;
		NullCheck(L_41);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_41, L_42, L_43, NULL);
	}

IL_00cd:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = V_2;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_44) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_45)))
		{
			goto IL_00dc;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = V_2;
		NullCheck(L_47);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = L_47->____Sym_2;
		G_B17_0 = ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_46) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_48))? 1 : 0);
		goto IL_00dd;
	}

IL_00dc:
	{
		G_B17_0 = 1;
	}

IL_00dd:
	{
		V_8 = (bool)G_B17_0;
		bool L_49 = V_8;
		if (!L_49)
		{
			goto IL_00ec;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_2;
		NullCheck(L_50);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = L_50->____next_1;
		V_2 = L_51;
	}

IL_00ec:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_52 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_53 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = V_1;
		NullCheck(L_52);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_52, L_53, L_54, NULL);
	}

IL_0100:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_55 = V_2;
		V_1 = L_55;
	}

IL_0103:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_56 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_57 = V_0;
		V_9 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_56) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_57))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_58 = V_9;
		if (L_58)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::InitPriorityQ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitPriorityQ_m63D067CB8781EC6E25D43FEFFDD0DC407E2875EA (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Init_mB8A3092D595F065F1DBD85FD3BBC2034DEFB35FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1__ctor_m75EE6938A947B7F5F22DCD1E25CFBA4E8936D5EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = L_0->____vHead_0;
		V_0 = L_1;
		V_2 = 0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = V_0;
		NullCheck(L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = L_2->____next_1;
		V_1 = L_3;
		goto IL_0025;
	}

IL_0018:
	{
		int32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = V_1;
		NullCheck(L_5);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = L_5->____next_1;
		V_1 = L_6;
	}

IL_0025:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = V_0;
		V_3 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_7) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 8));
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_11 = __this->____pq_11;
		V_4 = (bool)((((RuntimeObject*)(PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*)L_11) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_13 = V_2;
		LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00* L_14 = (LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00*)il2cpp_codegen_object_new(LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		LessOrEqual__ctor_m354C7C326099DA31A5715796F9CCA76DE5067731(L_14, NULL, (intptr_t)((void*)Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819_RuntimeMethod_var), NULL);
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_15 = (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*)il2cpp_codegen_object_new(PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		PriorityQueue_1__ctor_m75EE6938A947B7F5F22DCD1E25CFBA4E8936D5EF(L_15, L_13, L_14, PriorityQueue_1__ctor_m75EE6938A947B7F5F22DCD1E25CFBA4E8936D5EF_RuntimeMethod_var);
		__this->____pq_11 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pq_11), (void*)L_15);
	}

IL_005d:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_16 = __this->____mesh_1;
		NullCheck(L_16);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = L_16->____vHead_0;
		V_0 = L_17;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = V_0;
		NullCheck(L_18);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = L_18->____next_1;
		V_1 = L_19;
		goto IL_00b1;
	}

IL_0072:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20 = V_1;
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_21 = __this->____pq_11;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = V_1;
		NullCheck(L_21);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 L_23;
		L_23 = PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA(L_21, L_22, PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA_RuntimeMethod_var);
		NullCheck(L_20);
		L_20->____pqHandle_6 = L_23;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = V_1;
		NullCheck(L_24);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043* L_25 = (&L_24->____pqHandle_6);
		int32_t L_26 = L_25->____handle_1;
		il2cpp_codegen_runtime_class_init_inline(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var);
		int32_t L_27 = ((PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_StaticFields*)il2cpp_codegen_static_fields_for(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var))->___Invalid_0;
		V_5 = (bool)((((int32_t)L_26) == ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_5;
		if (!L_28)
		{
			goto IL_00a9;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_29 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_29);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD195D0425B8FE98A04F1BE9F8F30B202B33C80ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_InitPriorityQ_m63D067CB8781EC6E25D43FEFFDD0DC407E2875EA_RuntimeMethod_var)));
	}

IL_00a9:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_30 = V_1;
		NullCheck(L_30);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_31 = L_30->____next_1;
		V_1 = L_31;
	}

IL_00b1:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_32 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = V_0;
		V_6 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_32) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_33))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_6;
		if (L_34)
		{
			goto IL_0072;
		}
	}
	{
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_35 = __this->____pq_11;
		NullCheck(L_35);
		PriorityQueue_1_Init_mB8A3092D595F065F1DBD85FD3BBC2034DEFB35FF(L_35, PriorityQueue_1_Init_mB8A3092D595F065F1DBD85FD3BBC2034DEFB35FF_RuntimeMethod_var);
		return;
	}
}
// System.Void LibTessDotNet.Tess::DonePriorityQ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DonePriorityQ_m34351749D862BF10E730498E5ED9D502CE00D784 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_get_Empty_mF4201FD267F6A18630FB7144FEEACDCE39D3DA0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_0 = __this->____pq_11;
		NullCheck(L_0);
		bool L_1;
		L_1 = PriorityQueue_1_get_Empty_mF4201FD267F6A18630FB7144FEEACDCE39D3DA0A(L_0, PriorityQueue_1_get_Empty_mF4201FD267F6A18630FB7144FEEACDCE39D3DA0A_RuntimeMethod_var);
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F(L_1, NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::RemoveDegenerateFaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateFaces_m48F4E1549170751BB553A45C7BB4E54351E15BB4 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____fHead_1;
		NullCheck(L_1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = L_1->____next_1;
		V_0 = L_2;
		goto IL_006c;
	}

IL_0014:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = V_0;
		NullCheck(L_3);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = L_3->____next_1;
		V_1 = L_4;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_0;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____anEdge_2;
		V_2 = L_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_2;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_2;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_8) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_2;
		NullCheck(L_10);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = L_10->____Lnext_4;
		NullCheck(L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = L_11->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_2;
		V_3 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_12) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_13))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0069;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_2;
		NullCheck(L_15);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = L_15->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_2;
		Geom_AddWinding_m6EF7D9E71F27FA2029D3464EBF2828972B0D9A0B(L_16, L_17, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_18 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_19 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_2;
		NullCheck(L_18);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_18, L_19, L_20, NULL);
	}

IL_0069:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_21 = V_1;
		V_0 = L_21;
	}

IL_006c:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_22 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_23 = __this->____mesh_1;
		NullCheck(L_23);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_24 = L_23->____fHead_1;
		V_4 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_22) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_24))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_4;
		if (L_25)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::ComputeInterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeInterior_mFE484BBCF4AAC36E007A54416314B53790663CAD (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Minimum_mBB08F7A95861A7EE0B1797475861279AAAC0CD86_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B5_0 = 0;
	{
		Tess_RemoveDegenerateEdges_m6F88AF680A0B3E2FF9A8E274FF475C1EDDF025CC(__this, NULL);
		Tess_InitPriorityQ_m63D067CB8781EC6E25D43FEFFDD0DC407E2875EA(__this, NULL);
		Tess_RemoveDegenerateFaces_m48F4E1549170751BB553A45C7BB4E54351E15BB4(__this, NULL);
		Tess_InitEdgeDict_mEB38032A27EBED333E70337D99F8E0AC09C131A8(__this, NULL);
		goto IL_0073;
	}

IL_001f:
	{
		goto IL_0066;
	}

IL_0022:
	{
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_0 = __this->____pq_11;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1;
		L_1 = PriorityQueue_1_Minimum_mBB08F7A95861A7EE0B1797475861279AAAC0CD86(L_0, PriorityQueue_1_Minimum_mBB08F7A95861A7EE0B1797475861279AAAC0CD86_RuntimeMethod_var);
		V_1 = L_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = V_1;
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = V_0;
		bool L_5;
		L_5 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_3, L_4, NULL);
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B5_0 = 1;
	}

IL_003f:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		goto IL_006a;
	}

IL_0046:
	{
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_7 = __this->____pq_11;
		NullCheck(L_7);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8;
		L_8 = PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330(L_7, PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330_RuntimeMethod_var);
		V_1 = L_8;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = V_0;
		NullCheck(L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = L_9->____anEdge_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = V_1;
		NullCheck(L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = L_11->____anEdge_2;
		Tess_SpliceMergeVertices_m3C1B73AB8A2F388421982B310359B74FE1F73290(__this, L_10, L_12, NULL);
	}

IL_0066:
	{
		V_3 = (bool)1;
		goto IL_0022;
	}

IL_006a:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = V_0;
		Tess_SweepEvent_mFF232770963565BD3D3DE22E97A67DCA3E749FED(__this, L_13, NULL);
	}

IL_0073:
	{
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_14 = __this->____pq_11;
		NullCheck(L_14);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15;
		L_15 = PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330(L_14, PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330_RuntimeMethod_var);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = L_15;
		V_0 = L_16;
		V_4 = (bool)((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_16) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_001f;
		}
	}
	{
		Tess_DoneEdgeDict_m35196774C9960C4A2D2ACCD938DB0453C43B9C9E(__this, NULL);
		Tess_DonePriorityQ_m34351749D862BF10E730498E5ED9D502CE00D784(__this, NULL);
		Tess_RemoveDegenerateFaces_m48F4E1549170751BB553A45C7BB4E54351E15BB4(__this, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_18 = __this->____mesh_1;
		NullCheck(L_18);
		Mesh_Check_m60A4227D366A3F601EC5B8D95D672862D9BC8146(L_18, NULL);
		return;
	}
}
// LibTessDotNet.Vec3 LibTessDotNet.Tess::get_Normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 Tess_get_Normal_mCDA91ACB90DDB93FB587F1DDCD639F0D46AA0405 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_0 = __this->____normal_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_1 = V_0;
		return L_1;
	}
}
// LibTessDotNet.ContourVertex[] LibTessDotNet.Tess::get_Vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* Tess_get_Vertices_mDBE386129B4DF1C7D1F16A937D2D47FFF3567E45 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* V_0 = NULL;
	{
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_0 = __this->____vertices_14;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 LibTessDotNet.Tess::get_VertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_get_VertexCount_m243B19BDF8F6767DA70606FA5D8C26C590A9D210 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____vertexCount_15;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32[] LibTessDotNet.Tess::get_Elements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Tess_get_Elements_mED221BAB8BAAAC0EA4160C2C5DA5E38803883D7B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____elements_16;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 LibTessDotNet.Tess::get_ElementCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_get_ElementCount_m1D5AF4E9A9295BA0D57AA883D2C226D32C154E3F (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____elementCount_17;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void LibTessDotNet.Tess::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess__ctor_m9C50EAA56E0DBFFB1B779D0A921ECA9C7984E7A2 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04* L_0 = (DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04*)il2cpp_codegen_object_new(DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DefaultPool__ctor_m8D4477214AEE206E11961F64854E616FD3530CFD(L_0, NULL);
		Tess__ctor_mB2C19DD684CEED784DAD77FAD79561ABF4CADDAE(__this, L_0, NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::.ctor(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess__ctor_mB2C19DD684CEED784DAD77FAD79561ABF4CADDAE (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		__this->___SUnitX_19 = (1.0f);
		__this->___SUnitY_20 = (0.0f);
		__this->___SentinelCoord_21 = (4.00000006E+30f);
		__this->___NoEmptyPolygons_22 = (bool)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___pool0;
		V_0 = (bool)((((RuntimeObject*)(IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral946F20B48C46FF40D7455EDB50FE366C505B16E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess__ctor_mB2C19DD684CEED784DAD77FAD79561ABF4CADDAE_RuntimeMethod_var)));
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_3 = ((Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var))->___Zero_0;
		__this->____normal_2 = L_3;
		float L_4 = (0.0f);
		V_1 = L_4;
		__this->____bmaxY_8 = L_4;
		float L_5 = V_1;
		float L_6 = L_5;
		V_1 = L_6;
		__this->____bmaxX_7 = L_6;
		float L_7 = V_1;
		float L_8 = L_7;
		V_1 = L_8;
		__this->____bminY_6 = L_8;
		float L_9 = V_1;
		__this->____bminX_5 = L_9;
		__this->____windingRule_9 = 0;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_10 = ___pool0;
		__this->____pool_0 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pool_0), (void*)L_10);
		__this->____mesh_1 = (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mesh_1), (void*)(Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3*)NULL);
		__this->____vertices_14 = (ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices_14), (void*)(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)NULL);
		__this->____vertexCount_15 = 0;
		__this->____elements_16 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements_16), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____elementCount_17 = 0;
		return;
	}
}
// System.Void LibTessDotNet.Tess::ComputeNormal(LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeNormal_m1DB2CFB644D7D35AA0F4495759B28458EA3A6907 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___norm0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* V_2 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_3 = NULL;
	VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* V_4 = NULL;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_8 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_9 = NULL;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 V_12;
	memset((&V_12), 0, sizeof(V_12));
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
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = L_0->____vHead_0;
		NullCheck(L_1);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = L_1->____next_1;
		V_0 = L_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = V_0;
		NullCheck(L_5);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_6 = (&L_5->____coords_3);
		float L_7 = L_6->___X_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_7);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = L_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = V_0;
		NullCheck(L_9);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_10 = (&L_9->____coords_3);
		float L_11 = L_10->___Y_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_11);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = L_8;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = V_0;
		NullCheck(L_13);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_14 = (&L_13->____coords_3);
		float L_15 = L_14->___Z_3;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_15);
		V_1 = L_12;
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_16 = (VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362*)(VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362*)SZArrayNew(VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362_il2cpp_TypeInfo_var, (uint32_t)3);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_17 = L_16;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = V_0;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_18);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_19 = L_17;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20 = V_0;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_20);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_21 = L_19;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = V_0;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_22);
		V_2 = L_21;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = L_23;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = V_0;
		NullCheck(L_25);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_26 = (&L_25->____coords_3);
		float L_27 = L_26->___X_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_27);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = L_24;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_29 = V_0;
		NullCheck(L_29);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_30 = (&L_29->____coords_3);
		float L_31 = L_30->___Y_2;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_31);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = L_28;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = V_0;
		NullCheck(L_33);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_34 = (&L_33->____coords_3);
		float L_35 = L_34->___Z_3;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_35);
		V_3 = L_32;
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_36 = (VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362*)(VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362*)SZArrayNew(VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362_il2cpp_TypeInfo_var, (uint32_t)3);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_37 = L_36;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_38 = V_0;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_38);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_39 = L_37;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_40 = V_0;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_40);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_41 = L_39;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_42 = V_0;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_42);
		V_4 = L_41;
		goto IL_01a8;
	}

IL_00a0:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = V_0;
		NullCheck(L_43);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_44 = (&L_43->____coords_3);
		float L_45 = L_44->___X_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46 = V_1;
		NullCheck(L_46);
		int32_t L_47 = 0;
		float L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_13 = (bool)((((float)L_45) < ((float)L_48))? 1 : 0);
		bool L_49 = V_13;
		if (!L_49)
		{
			goto IL_00cb;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_51 = V_0;
		NullCheck(L_51);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_52 = (&L_51->____coords_3);
		float L_53 = L_52->___X_1;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_53);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_54 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_55 = V_0;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_55);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_55);
	}

IL_00cb:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_56 = V_0;
		NullCheck(L_56);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_57 = (&L_56->____coords_3);
		float L_58 = L_57->___Y_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_59 = V_1;
		NullCheck(L_59);
		int32_t L_60 = 1;
		float L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_14 = (bool)((((float)L_58) < ((float)L_61))? 1 : 0);
		bool L_62 = V_14;
		if (!L_62)
		{
			goto IL_00f5;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_63 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_64 = V_0;
		NullCheck(L_64);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_65 = (&L_64->____coords_3);
		float L_66 = L_65->___Y_2;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_66);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_67 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_68 = V_0;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_68);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_68);
	}

IL_00f5:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_69 = V_0;
		NullCheck(L_69);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_70 = (&L_69->____coords_3);
		float L_71 = L_70->___Z_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_72 = V_1;
		NullCheck(L_72);
		int32_t L_73 = 2;
		float L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_15 = (bool)((((float)L_71) < ((float)L_74))? 1 : 0);
		bool L_75 = V_15;
		if (!L_75)
		{
			goto IL_011f;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_76 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_77 = V_0;
		NullCheck(L_77);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_78 = (&L_77->____coords_3);
		float L_79 = L_78->___Z_3;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_79);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_80 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_81 = V_0;
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, L_81);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_81);
	}

IL_011f:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_82 = V_0;
		NullCheck(L_82);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_83 = (&L_82->____coords_3);
		float L_84 = L_83->___X_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_85 = V_3;
		NullCheck(L_85);
		int32_t L_86 = 0;
		float L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_16 = (bool)((((float)L_84) > ((float)L_87))? 1 : 0);
		bool L_88 = V_16;
		if (!L_88)
		{
			goto IL_014a;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_89 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_90 = V_0;
		NullCheck(L_90);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_91 = (&L_90->____coords_3);
		float L_92 = L_91->___X_1;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_92);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_93 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_94 = V_0;
		NullCheck(L_93);
		ArrayElementTypeCheck (L_93, L_94);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_94);
	}

IL_014a:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_95 = V_0;
		NullCheck(L_95);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_96 = (&L_95->____coords_3);
		float L_97 = L_96->___Y_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_98 = V_3;
		NullCheck(L_98);
		int32_t L_99 = 1;
		float L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		V_17 = (bool)((((float)L_97) > ((float)L_100))? 1 : 0);
		bool L_101 = V_17;
		if (!L_101)
		{
			goto IL_0175;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_102 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_103 = V_0;
		NullCheck(L_103);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_104 = (&L_103->____coords_3);
		float L_105 = L_104->___Y_2;
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_105);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_106 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_107 = V_0;
		NullCheck(L_106);
		ArrayElementTypeCheck (L_106, L_107);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_107);
	}

IL_0175:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_108 = V_0;
		NullCheck(L_108);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_109 = (&L_108->____coords_3);
		float L_110 = L_109->___Z_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_111 = V_3;
		NullCheck(L_111);
		int32_t L_112 = 2;
		float L_113 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_18 = (bool)((((float)L_110) > ((float)L_113))? 1 : 0);
		bool L_114 = V_18;
		if (!L_114)
		{
			goto IL_01a0;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_115 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_116 = V_0;
		NullCheck(L_116);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_117 = (&L_116->____coords_3);
		float L_118 = L_117->___Z_3;
		NullCheck(L_115);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_118);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_119 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_120 = V_0;
		NullCheck(L_119);
		ArrayElementTypeCheck (L_119, L_120);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_120);
	}

IL_01a0:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_121 = V_0;
		NullCheck(L_121);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_122 = L_121->____next_1;
		V_0 = L_122;
	}

IL_01a8:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_123 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_124 = __this->____mesh_1;
		NullCheck(L_124);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_125 = L_124->____vHead_0;
		V_19 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_123) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_125))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_126 = V_19;
		if (L_126)
		{
			goto IL_00a0;
		}
	}
	{
		V_5 = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_127 = V_3;
		NullCheck(L_127);
		int32_t L_128 = 1;
		float L_129 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_130 = V_1;
		NullCheck(L_130);
		int32_t L_131 = 1;
		float L_132 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_133 = V_3;
		NullCheck(L_133);
		int32_t L_134 = 0;
		float L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_136 = V_1;
		NullCheck(L_136);
		int32_t L_137 = 0;
		float L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		V_20 = (bool)((((float)((float)il2cpp_codegen_subtract(L_129, L_132))) > ((float)((float)il2cpp_codegen_subtract(L_135, L_138))))? 1 : 0);
		bool L_139 = V_20;
		if (!L_139)
		{
			goto IL_01e0;
		}
	}
	{
		V_5 = 1;
	}

IL_01e0:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_140 = V_3;
		NullCheck(L_140);
		int32_t L_141 = 2;
		float L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_143 = V_1;
		NullCheck(L_143);
		int32_t L_144 = 2;
		float L_145 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_146 = V_3;
		int32_t L_147 = V_5;
		NullCheck(L_146);
		int32_t L_148 = L_147;
		float L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_150 = V_1;
		int32_t L_151 = V_5;
		NullCheck(L_150);
		int32_t L_152 = L_151;
		float L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		V_21 = (bool)((((float)((float)il2cpp_codegen_subtract(L_142, L_145))) > ((float)((float)il2cpp_codegen_subtract(L_149, L_153))))? 1 : 0);
		bool L_154 = V_21;
		if (!L_154)
		{
			goto IL_01fd;
		}
	}
	{
		V_5 = 2;
	}

IL_01fd:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_155 = V_1;
		int32_t L_156 = V_5;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		float L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_159 = V_3;
		int32_t L_160 = V_5;
		NullCheck(L_159);
		int32_t L_161 = L_160;
		float L_162 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		V_22 = (bool)((((int32_t)((!(((float)L_158) >= ((float)L_162)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_163 = V_22;
		if (!L_163)
		{
			goto IL_0230;
		}
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_164 = ___norm0;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_165;
		memset((&L_165), 0, sizeof(L_165));
		Vec3__ctor_m937D1DD303AF7D61662A455E5F208BDB81106B7C((&L_165), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		*(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)L_164 = L_165;
		goto IL_039b;
	}

IL_0230:
	{
		V_6 = (0.0f);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_166 = V_2;
		int32_t L_167 = V_5;
		NullCheck(L_166);
		int32_t L_168 = L_167;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_169 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		V_8 = L_169;
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_170 = V_4;
		int32_t L_171 = V_5;
		NullCheck(L_170);
		int32_t L_172 = L_171;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_173 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		V_9 = L_173;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_174 = V_8;
		NullCheck(L_174);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_175 = (&L_174->____coords_3);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_176 = V_9;
		NullCheck(L_176);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_177 = (&L_176->____coords_3);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_Sub_mFA0434EA3AC2F8C1A173BF40E85FCF41120FB008(L_175, L_177, (&V_10), NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_178 = __this->____mesh_1;
		NullCheck(L_178);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_179 = L_178->____vHead_0;
		NullCheck(L_179);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_180 = L_179->____next_1;
		V_0 = L_180;
		goto IL_034b;
	}

IL_0270:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_181 = V_0;
		NullCheck(L_181);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_182 = (&L_181->____coords_3);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_183 = V_9;
		NullCheck(L_183);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_184 = (&L_183->____coords_3);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_Sub_mFA0434EA3AC2F8C1A173BF40E85FCF41120FB008(L_182, L_184, (&V_11), NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_185 = V_10;
		float L_186 = L_185.___Y_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_187 = V_11;
		float L_188 = L_187.___Z_3;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_189 = V_10;
		float L_190 = L_189.___Z_3;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_191 = V_11;
		float L_192 = L_191.___Y_2;
		(&V_12)->___X_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_186, L_188)), ((float)il2cpp_codegen_multiply(L_190, L_192))));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_193 = V_10;
		float L_194 = L_193.___Z_3;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_195 = V_11;
		float L_196 = L_195.___X_1;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_197 = V_10;
		float L_198 = L_197.___X_1;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_199 = V_11;
		float L_200 = L_199.___Z_3;
		(&V_12)->___Y_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_194, L_196)), ((float)il2cpp_codegen_multiply(L_198, L_200))));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_201 = V_10;
		float L_202 = L_201.___X_1;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_203 = V_11;
		float L_204 = L_203.___Y_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_205 = V_10;
		float L_206 = L_205.___Y_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_207 = V_11;
		float L_208 = L_207.___X_1;
		(&V_12)->___Z_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_202, L_204)), ((float)il2cpp_codegen_multiply(L_206, L_208))));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_209 = V_12;
		float L_210 = L_209.___X_1;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_211 = V_12;
		float L_212 = L_211.___X_1;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_213 = V_12;
		float L_214 = L_213.___Y_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_215 = V_12;
		float L_216 = L_215.___Y_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_217 = V_12;
		float L_218 = L_217.___Z_3;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_219 = V_12;
		float L_220 = L_219.___Z_3;
		V_7 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_210, L_212)), ((float)il2cpp_codegen_multiply(L_214, L_216)))), ((float)il2cpp_codegen_multiply(L_218, L_220))));
		float L_221 = V_7;
		float L_222 = V_6;
		V_23 = (bool)((((float)L_221) > ((float)L_222))? 1 : 0);
		bool L_223 = V_23;
		if (!L_223)
		{
			goto IL_0343;
		}
	}
	{
		float L_224 = V_7;
		V_6 = L_224;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_225 = ___norm0;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_226 = V_12;
		*(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)L_225 = L_226;
	}

IL_0343:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_227 = V_0;
		NullCheck(L_227);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_228 = L_227->____next_1;
		V_0 = L_228;
	}

IL_034b:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_229 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_230 = __this->____mesh_1;
		NullCheck(L_230);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_231 = L_230->____vHead_0;
		V_24 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_229) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_231))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_232 = V_24;
		if (L_232)
		{
			goto IL_0270;
		}
	}
	{
		float L_233 = V_6;
		V_25 = (bool)((((int32_t)((!(((float)L_233) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_234 = V_25;
		if (!L_234)
		{
			goto IL_039b;
		}
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_235 = ___norm0;
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_236 = ((Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var))->___Zero_0;
		*(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)L_235 = L_236;
		int32_t L_237;
		L_237 = Vec3_LongAxis_mE37BAB8C067EE68DBA8BC23061B6A0F1F175645F((&V_10), NULL);
		V_5 = L_237;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_238 = ___norm0;
		int32_t L_239 = V_5;
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(L_238, L_239, (1.0f), NULL);
	}

IL_039b:
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::CheckOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_CheckOrientation_m78C0B1CA1B88D946FDA7CC447C44BA91BFFAF469 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_5 = NULL;
	bool V_6 = false;
	{
		V_0 = (0.0f);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____fHead_1;
		NullCheck(L_1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = L_1->____next_1;
		V_1 = L_2;
		goto IL_0044;
	}

IL_001a:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = V_1;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____anEdge_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->____winding_8;
		V_2 = (bool)((((int32_t)((((int32_t)L_5) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		goto IL_003d;
	}

IL_0033:
	{
		float L_7 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_8 = V_1;
		float L_9;
		L_9 = MeshUtils_FaceArea_mDE166ED484B8CF884C0846D250D75774E1EBA859(L_8, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_7, L_9));
	}

IL_003d:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_10 = V_1;
		NullCheck(L_10);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_11 = L_10->____next_1;
		V_1 = L_11;
	}

IL_0044:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = V_1;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_13 = __this->____mesh_1;
		NullCheck(L_13);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = L_13->____fHead_1;
		V_3 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_12) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_14))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_001a;
		}
	}
	{
		float L_16 = V_0;
		V_4 = (bool)((((float)L_16) < ((float)(0.0f)))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_00bb;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_18 = __this->____mesh_1;
		NullCheck(L_18);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = L_18->____vHead_0;
		NullCheck(L_19);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20 = L_19->____next_1;
		V_5 = L_20;
		goto IL_0096;
	}

IL_007c:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = V_5;
		NullCheck(L_22);
		float L_23 = L_22->____t_5;
		NullCheck(L_21);
		L_21->____t_5 = ((-L_23));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = V_5;
		NullCheck(L_24);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = L_24->____next_1;
		V_5 = L_25;
	}

IL_0096:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = V_5;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_27 = __this->____mesh_1;
		NullCheck(L_27);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28 = L_27->____vHead_0;
		V_6 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_26) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_28))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_6;
		if (L_29)
		{
			goto IL_007c;
		}
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_30 = (&__this->____tUnit_4);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_Neg_m615687EA76621EE708A5F7836B33DF54DC67E58C(L_30, NULL);
	}

IL_00bb:
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::ProjectPolygon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ProjectPolygon_m22515E7F73F680B50FAC5ADD3BF5290A0FD719B2 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_8 = NULL;
	bool V_9 = false;
	float V_10 = 0.0f;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B8_1 = NULL;
	int32_t G_B7_0 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	int32_t G_B9_1 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B9_2 = NULL;
	int32_t G_B11_0 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B11_1 = NULL;
	int32_t G_B10_0 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B10_1 = NULL;
	float G_B12_0 = 0.0f;
	int32_t G_B12_1 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B12_2 = NULL;
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_0 = __this->____normal_2;
		V_0 = L_0;
		V_1 = (bool)0;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_1 = V_0;
		float L_2 = L_1.___X_1;
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0033;
		}
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_3 = V_0;
		float L_4 = L_3.___Y_2;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_0033;
		}
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_5 = V_0;
		float L_6 = L_5.___Z_3;
		G_B4_0 = ((((float)L_6) == ((float)(0.0f)))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B4_0 = 0;
	}

IL_0034:
	{
		V_4 = (bool)G_B4_0;
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		Tess_ComputeNormal_m1DB2CFB644D7D35AA0F4495759B28458EA3A6907(__this, (&V_0), NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_8 = V_0;
		__this->____normal_2 = L_8;
		V_1 = (bool)1;
	}

IL_004e:
	{
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = Vec3_LongAxis_mE37BAB8C067EE68DBA8BC23061B6A0F1F175645F((&V_0), NULL);
		V_2 = L_9;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_10 = (&__this->____sUnit_3);
		int32_t L_11 = V_2;
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(L_10, L_11, (0.0f), NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_12 = (&__this->____sUnit_3);
		int32_t L_13 = V_2;
		float L_14 = __this->___SUnitX_19;
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(L_12, ((int32_t)(((int32_t)il2cpp_codegen_add(L_13, 1))%3)), L_14, NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_15 = (&__this->____sUnit_3);
		int32_t L_16 = V_2;
		float L_17 = __this->___SUnitY_20;
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(L_15, ((int32_t)(((int32_t)il2cpp_codegen_add(L_16, 2))%3)), L_17, NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_18 = (&__this->____tUnit_4);
		int32_t L_19 = V_2;
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(L_18, L_19, (0.0f), NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_20 = (&__this->____tUnit_4);
		int32_t L_21 = V_2;
		int32_t L_22 = V_2;
		float L_23;
		L_23 = Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318((&V_0), L_22, NULL);
		G_B7_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_21, 1))%3));
		G_B7_1 = L_20;
		if ((((float)L_23) > ((float)(0.0f))))
		{
			G_B8_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_21, 1))%3));
			G_B8_1 = L_20;
			goto IL_00ca;
		}
	}
	{
		float L_24 = __this->___SUnitY_20;
		G_B9_0 = L_24;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_00d1;
	}

IL_00ca:
	{
		float L_25 = __this->___SUnitY_20;
		G_B9_0 = ((-L_25));
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_00d1:
	{
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(G_B9_2, G_B9_1, G_B9_0, NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_26 = (&__this->____tUnit_4);
		int32_t L_27 = V_2;
		int32_t L_28 = V_2;
		float L_29;
		L_29 = Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318((&V_0), L_28, NULL);
		G_B10_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_27, 2))%3));
		G_B10_1 = L_26;
		if ((((float)L_29) > ((float)(0.0f))))
		{
			G_B11_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_27, 2))%3));
			G_B11_1 = L_26;
			goto IL_00fa;
		}
	}
	{
		float L_30 = __this->___SUnitX_19;
		G_B12_0 = ((-L_30));
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		goto IL_0100;
	}

IL_00fa:
	{
		float L_31 = __this->___SUnitX_19;
		G_B12_0 = L_31;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
	}

IL_0100:
	{
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(G_B12_2, G_B12_1, G_B12_0, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_32 = __this->____mesh_1;
		NullCheck(L_32);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = L_32->____vHead_0;
		NullCheck(L_33);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_34 = L_33->____next_1;
		V_5 = L_34;
		goto IL_0159;
	}

IL_011a:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_35 = V_5;
		NullCheck(L_35);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_36 = (&L_35->____coords_3);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_37 = (&__this->____sUnit_3);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_38 = V_5;
		NullCheck(L_38);
		float* L_39 = (&L_38->____s_4);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_Dot_m6A3064B83CC6528E85FEB9E6F8D62699AFCE3E65(L_36, L_37, L_39, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_40 = V_5;
		NullCheck(L_40);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_41 = (&L_40->____coords_3);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_42 = (&__this->____tUnit_4);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = V_5;
		NullCheck(L_43);
		float* L_44 = (&L_43->____t_5);
		Vec3_Dot_m6A3064B83CC6528E85FEB9E6F8D62699AFCE3E65(L_41, L_42, L_44, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_45 = V_5;
		NullCheck(L_45);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_46 = L_45->____next_1;
		V_5 = L_46;
	}

IL_0159:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_47 = V_5;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_48 = __this->____mesh_1;
		NullCheck(L_48);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_49 = L_48->____vHead_0;
		V_6 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_47) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_49))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_50 = V_6;
		if (L_50)
		{
			goto IL_011a;
		}
	}
	{
		bool L_51 = V_1;
		V_7 = L_51;
		bool L_52 = V_7;
		if (!L_52)
		{
			goto IL_0181;
		}
	}
	{
		Tess_CheckOrientation_m78C0B1CA1B88D946FDA7CC447C44BA91BFFAF469(__this, NULL);
	}

IL_0181:
	{
		V_3 = (bool)1;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_53 = __this->____mesh_1;
		NullCheck(L_53);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_54 = L_53->____vHead_0;
		NullCheck(L_54);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_55 = L_54->____next_1;
		V_8 = L_55;
		goto IL_026f;
	}

IL_019a:
	{
		bool L_56 = V_3;
		V_9 = L_56;
		bool L_57 = V_9;
		if (!L_57)
		{
			goto IL_01db;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_58 = V_8;
		NullCheck(L_58);
		float L_59 = L_58->____s_4;
		float L_60 = L_59;
		V_10 = L_60;
		__this->____bmaxX_7 = L_60;
		float L_61 = V_10;
		__this->____bminX_5 = L_61;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_62 = V_8;
		NullCheck(L_62);
		float L_63 = L_62->____t_5;
		float L_64 = L_63;
		V_10 = L_64;
		__this->____bmaxY_8 = L_64;
		float L_65 = V_10;
		__this->____bminY_6 = L_65;
		V_3 = (bool)0;
		goto IL_0265;
	}

IL_01db:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_66 = V_8;
		NullCheck(L_66);
		float L_67 = L_66->____s_4;
		float L_68 = __this->____bminX_5;
		V_11 = (bool)((((float)L_67) < ((float)L_68))? 1 : 0);
		bool L_69 = V_11;
		if (!L_69)
		{
			goto IL_01fe;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_70 = V_8;
		NullCheck(L_70);
		float L_71 = L_70->____s_4;
		__this->____bminX_5 = L_71;
	}

IL_01fe:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_72 = V_8;
		NullCheck(L_72);
		float L_73 = L_72->____s_4;
		float L_74 = __this->____bmaxX_7;
		V_12 = (bool)((((float)L_73) > ((float)L_74))? 1 : 0);
		bool L_75 = V_12;
		if (!L_75)
		{
			goto IL_0220;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_76 = V_8;
		NullCheck(L_76);
		float L_77 = L_76->____s_4;
		__this->____bmaxX_7 = L_77;
	}

IL_0220:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_78 = V_8;
		NullCheck(L_78);
		float L_79 = L_78->____t_5;
		float L_80 = __this->____bminY_6;
		V_13 = (bool)((((float)L_79) < ((float)L_80))? 1 : 0);
		bool L_81 = V_13;
		if (!L_81)
		{
			goto IL_0242;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_82 = V_8;
		NullCheck(L_82);
		float L_83 = L_82->____t_5;
		__this->____bminY_6 = L_83;
	}

IL_0242:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_84 = V_8;
		NullCheck(L_84);
		float L_85 = L_84->____t_5;
		float L_86 = __this->____bmaxY_8;
		V_14 = (bool)((((float)L_85) > ((float)L_86))? 1 : 0);
		bool L_87 = V_14;
		if (!L_87)
		{
			goto IL_0264;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_88 = V_8;
		NullCheck(L_88);
		float L_89 = L_88->____t_5;
		__this->____bmaxY_8 = L_89;
	}

IL_0264:
	{
	}

IL_0265:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_90 = V_8;
		NullCheck(L_90);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_91 = L_90->____next_1;
		V_8 = L_91;
	}

IL_026f:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_92 = V_8;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_93 = __this->____mesh_1;
		NullCheck(L_93);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_94 = L_93->____vHead_0;
		V_15 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_92) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_94))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_95 = V_15;
		if (L_95)
		{
			goto IL_019a;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::TessellateMonoRegion(LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateMonoRegion_m35381625E13B132270623B38CB8AFA019884D894 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___face0, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B29_0 = 0;
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = ___face0;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____anEdge_2;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_3) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_4)))
		{
			goto IL_0024;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_0;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Lnext_4;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_0;
		G_B3_0 = ((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_7) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)G_B3_0, NULL);
		goto IL_0034;
	}

IL_002d:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_0;
		NullCheck(L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10;
		L_10 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_9, NULL);
		V_0 = L_10;
	}

IL_0034:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_0;
		NullCheck(L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12;
		L_12 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_11, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_13);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = L_13->____Org_5;
		bool L_15;
		L_15 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_12, L_14, NULL);
		V_2 = L_15;
		bool L_16 = V_2;
		if (L_16)
		{
			goto IL_002d;
		}
	}
	{
		goto IL_0052;
	}

IL_004b:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_0;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = L_17->____Lnext_4;
		V_0 = L_18;
	}

IL_0052:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_0;
		NullCheck(L_19);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20 = L_19->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_0;
		NullCheck(L_21);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22;
		L_22 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_21, NULL);
		bool L_23;
		L_23 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_20, L_22, NULL);
		V_3 = L_23;
		bool L_24 = V_3;
		if (L_24)
		{
			goto IL_004b;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_0;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26;
		L_26 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_25, NULL);
		V_1 = L_26;
		goto IL_0174;
	}

IL_0073:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_0;
		NullCheck(L_27);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28;
		L_28 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_27, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_1;
		NullCheck(L_29);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_30 = L_29->____Org_5;
		bool L_31;
		L_31 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_28, L_30, NULL);
		V_4 = L_31;
		bool L_32 = V_4;
		if (!L_32)
		{
			goto IL_0100;
		}
	}
	{
		goto IL_00ae;
	}

IL_008e:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_33 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_34 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_1;
		NullCheck(L_35);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = L_35->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = V_1;
		NullCheck(L_33);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38;
		L_38 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_33, L_34, L_36, L_37, NULL);
		NullCheck(L_38);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = L_38->____Sym_2;
		V_1 = L_39;
	}

IL_00ae:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = V_1;
		NullCheck(L_40);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = L_40->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_0;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_41) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_42)))
		{
			goto IL_00ef;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43 = V_1;
		NullCheck(L_43);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = L_43->____Lnext_4;
		bool L_45;
		L_45 = Geom_EdgeGoesLeft_mB470DCF8C4FD679BB83397B8DE58638B3896DC9B(L_44, NULL);
		if (L_45)
		{
			goto IL_00ec;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_1;
		NullCheck(L_46);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_47 = L_46->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_1;
		NullCheck(L_48);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_49;
		L_49 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_48, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_1;
		NullCheck(L_50);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = L_50->____Lnext_4;
		NullCheck(L_51);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_52;
		L_52 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_51, NULL);
		float L_53;
		L_53 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_47, L_49, L_52, NULL);
		G_B17_0 = ((((int32_t)((!(((float)L_53) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ed;
	}

IL_00ec:
	{
		G_B17_0 = 1;
	}

IL_00ed:
	{
		G_B19_0 = G_B17_0;
		goto IL_00f0;
	}

IL_00ef:
	{
		G_B19_0 = 0;
	}

IL_00f0:
	{
		V_5 = (bool)G_B19_0;
		bool L_54 = V_5;
		if (L_54)
		{
			goto IL_008e;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_55 = V_1;
		NullCheck(L_55);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_56;
		L_56 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_55, NULL);
		V_1 = L_56;
		goto IL_0173;
	}

IL_0100:
	{
		goto IL_0123;
	}

IL_0103:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_57 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_58 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_59 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_60 = V_0;
		NullCheck(L_60);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_61;
		L_61 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_60, NULL);
		NullCheck(L_57);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_62;
		L_62 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_57, L_58, L_59, L_61, NULL);
		NullCheck(L_62);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_63 = L_62->____Sym_2;
		V_0 = L_63;
	}

IL_0123:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_64 = V_1;
		NullCheck(L_64);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_65 = L_64->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_66 = V_0;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_65) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_66)))
		{
			goto IL_0164;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_67 = V_0;
		NullCheck(L_67);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_68;
		L_68 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_67, NULL);
		bool L_69;
		L_69 = Geom_EdgeGoesRight_m5B4F1EB6223DBC3AD38DC58AE036CA922E1319CE(L_68, NULL);
		if (L_69)
		{
			goto IL_0161;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_70 = V_0;
		NullCheck(L_70);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_71;
		L_71 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_70, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_72 = V_0;
		NullCheck(L_72);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_73 = L_72->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_74 = V_0;
		NullCheck(L_74);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_75;
		L_75 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_74, NULL);
		NullCheck(L_75);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_76 = L_75->____Org_5;
		float L_77;
		L_77 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_71, L_73, L_76, NULL);
		G_B27_0 = ((((int32_t)((!(((float)L_77) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0162;
	}

IL_0161:
	{
		G_B27_0 = 1;
	}

IL_0162:
	{
		G_B29_0 = G_B27_0;
		goto IL_0165;
	}

IL_0164:
	{
		G_B29_0 = 0;
	}

IL_0165:
	{
		V_6 = (bool)G_B29_0;
		bool L_78 = V_6;
		if (L_78)
		{
			goto IL_0103;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_79 = V_0;
		NullCheck(L_79);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_80 = L_79->____Lnext_4;
		V_0 = L_80;
	}

IL_0173:
	{
	}

IL_0174:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_81 = V_0;
		NullCheck(L_81);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_82 = L_81->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_83 = V_1;
		V_7 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_82) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_83))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_84 = V_7;
		if (L_84)
		{
			goto IL_0073;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_85 = V_1;
		NullCheck(L_85);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_86 = L_85->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_87 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_86) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_87))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		goto IL_01bd;
	}

IL_019d:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_88 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_89 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_90 = V_1;
		NullCheck(L_90);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_91 = L_90->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_92 = V_1;
		NullCheck(L_88);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_93;
		L_93 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_88, L_89, L_91, L_92, NULL);
		NullCheck(L_93);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_94 = L_93->____Sym_2;
		V_1 = L_94;
	}

IL_01bd:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_95 = V_1;
		NullCheck(L_95);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_96 = L_95->____Lnext_4;
		NullCheck(L_96);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_97 = L_96->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_98 = V_0;
		V_8 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_97) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_98))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_99 = V_8;
		if (L_99)
		{
			goto IL_019d;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::TessellateInterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateInterior_mE0300B408C5AF3A1D2ED19A02BA39F5BC21DAD91 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____fHead_1;
		NullCheck(L_1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = L_1->____next_1;
		V_0 = L_2;
		goto IL_0033;
	}

IL_0014:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = V_0;
		NullCheck(L_3);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = L_3->____next_1;
		V_1 = L_4;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->____inside_6;
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_8 = V_0;
		Tess_TessellateMonoRegion_m35381625E13B132270623B38CB8AFA019884D894(__this, L_8, NULL);
	}

IL_0030:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9 = V_1;
		V_0 = L_9;
	}

IL_0033:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_10 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_11 = __this->____mesh_1;
		NullCheck(L_11);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = L_11->____fHead_1;
		V_3 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_10) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::DiscardExterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DiscardExterior_m4AAC0C1966660472AC09B4A209FD519837598ECD (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____fHead_1;
		NullCheck(L_1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = L_1->____next_1;
		V_0 = L_2;
		goto IL_0041;
	}

IL_0014:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = V_0;
		NullCheck(L_3);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = L_3->____next_1;
		V_1 = L_4;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->____inside_6;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_8 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_9 = __this->____pool_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_10 = V_0;
		NullCheck(L_8);
		Mesh_ZapFace_m40CB995646CB70A3A752001902CF3A1289CC54E7(L_8, L_9, L_10, NULL);
	}

IL_003e:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_11 = V_1;
		V_0 = L_11;
	}

IL_0041:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_13 = __this->____mesh_1;
		NullCheck(L_13);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = L_13->____fHead_1;
		V_3 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_12) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_14))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::SetWindingNumber(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SetWindingNumber_m67CAD83A0441F03AC00A0988396CC22DDD93FE6A (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, int32_t ___value0, bool ___keepOnlyBoundary1, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* G_B4_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* G_B5_1 = NULL;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eHead_2;
		NullCheck(L_1);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = L_1->____next_1;
		V_0 = L_2;
		goto IL_0084;
	}

IL_0014:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_0;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____next_1;
		V_1 = L_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_0;
		NullCheck(L_5);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6;
		L_6 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_5, NULL);
		NullCheck(L_6);
		bool L_7 = L_6->____inside_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_0;
		NullCheck(L_8);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9 = L_8->____Lface_6;
		NullCheck(L_9);
		bool L_10 = L_9->____inside_6;
		V_2 = (bool)((((int32_t)((((int32_t)L_7) == ((int32_t)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0057;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_13);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = L_13->____Lface_6;
		NullCheck(L_14);
		bool L_15 = L_14->____inside_6;
		G_B3_0 = L_12;
		if (L_15)
		{
			G_B4_0 = L_12;
			goto IL_004e;
		}
	}
	{
		int32_t L_16 = ___value0;
		G_B5_0 = ((-L_16));
		G_B5_1 = G_B3_0;
		goto IL_004f;
	}

IL_004e:
	{
		int32_t L_17 = ___value0;
		G_B5_0 = L_17;
		G_B5_1 = G_B4_0;
	}

IL_004f:
	{
		NullCheck(G_B5_1);
		G_B5_1->____winding_8 = G_B5_0;
		goto IL_0081;
	}

IL_0057:
	{
		bool L_18 = ___keepOnlyBoundary1;
		V_3 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_006b;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_0;
		NullCheck(L_20);
		L_20->____winding_8 = 0;
		goto IL_0080;
	}

IL_006b:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_21 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_22 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_0;
		NullCheck(L_21);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_21, L_22, L_23, NULL);
	}

IL_0080:
	{
	}

IL_0081:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_1;
		V_0 = L_24;
	}

IL_0084:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_26 = __this->____mesh_1;
		NullCheck(L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = L_26->____eHead_2;
		V_4 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_25) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_27))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_4;
		if (L_28)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Int32 LibTessDotNet.Tess::GetNeighbourFace(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_GetNeighbourFace_mDB66AF9ED49A800C6FD51072F7EC9E2DFFACFAA8 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___edge0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___edge0;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1;
		L_1 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_0, NULL);
		V_0 = (bool)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = (-1);
		goto IL_0036;
	}

IL_0012:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = ___edge0;
		NullCheck(L_3);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4;
		L_4 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_3, NULL);
		NullCheck(L_4);
		bool L_5 = L_4->____inside_6;
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		V_1 = (-1);
		goto IL_0036;
	}

IL_0028:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = ___edge0;
		NullCheck(L_7);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_8;
		L_8 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_7, NULL);
		NullCheck(L_8);
		int32_t L_9 = L_8->____n_4;
		V_1 = L_9;
		goto IL_0036;
	}

IL_0036:
	{
		int32_t L_10 = V_1;
		return L_10;
	}
}
// System.Void LibTessDotNet.Tess::OutputPolymesh(LibTessDotNet.ElementType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputPolymesh_mD26B103CACD185034776B1CC6869212B40665B7B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, int32_t ___elementType0, int32_t ___polySize1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	float V_13 = 0.0f;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	float V_23 = 0.0f;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	{
		V_3 = 0;
		V_4 = 0;
		int32_t L_0 = ___polySize1;
		V_8 = (bool)((((int32_t)L_0) < ((int32_t)3))? 1 : 0);
		bool L_1 = V_8;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		___polySize1 = 3;
	}

IL_0015:
	{
		int32_t L_2 = ___polySize1;
		V_9 = (bool)((((int32_t)L_2) > ((int32_t)3))? 1 : 0);
		bool L_3 = V_9;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_4 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_5 = __this->____pool_0;
		int32_t L_6 = ___polySize1;
		NullCheck(L_4);
		Mesh_MergeConvexFaces_m2452DF609E5F2842DCB3645A91AE38474D00189C(L_4, L_5, L_6, NULL);
	}

IL_0034:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_7 = __this->____mesh_1;
		NullCheck(L_7);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = L_7->____vHead_0;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = L_8->____next_1;
		V_0 = L_9;
		goto IL_0055;
	}

IL_0047:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = V_0;
		NullCheck(L_10);
		L_10->____n_7 = (-1);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = V_0;
		NullCheck(L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = L_11->____next_1;
		V_0 = L_12;
	}

IL_0055:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_14 = __this->____mesh_1;
		NullCheck(L_14);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = L_14->____vHead_0;
		V_10 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_13) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_10;
		if (L_16)
		{
			goto IL_0047;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_17 = __this->____mesh_1;
		NullCheck(L_17);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18 = L_17->____fHead_1;
		NullCheck(L_18);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_19 = L_18->____next_1;
		V_1 = L_19;
		goto IL_013d;
	}

IL_0082:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_20 = V_1;
		NullCheck(L_20);
		L_20->____n_4 = (-1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_21 = V_1;
		NullCheck(L_21);
		bool L_22 = L_21->____inside_6;
		V_11 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_11;
		if (!L_23)
		{
			goto IL_009e;
		}
	}
	{
		goto IL_0136;
	}

IL_009e:
	{
		bool L_24 = __this->___NoEmptyPolygons_22;
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00cb;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_26 = V_1;
		float L_27;
		L_27 = MeshUtils_FaceArea_mDE166ED484B8CF884C0846D250D75774E1EBA859(L_26, NULL);
		V_13 = L_27;
		float L_28 = V_13;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_29;
		L_29 = fabsf(L_28);
		V_14 = (bool)((((float)L_29) < ((float)(1.40129846E-45f)))? 1 : 0);
		bool L_30 = V_14;
		if (!L_30)
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0136;
	}

IL_00ca:
	{
	}

IL_00cb:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_31 = V_1;
		NullCheck(L_31);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = L_31->____anEdge_2;
		V_2 = L_32;
		V_5 = 0;
	}

IL_00d5:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_2;
		NullCheck(L_33);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_34 = L_33->____Org_5;
		V_0 = L_34;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_35 = V_0;
		NullCheck(L_35);
		int32_t L_36 = L_35->____n_7;
		V_15 = (bool)((((int32_t)L_36) == ((int32_t)(-1)))? 1 : 0);
		bool L_37 = V_15;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_38 = V_0;
		int32_t L_39 = V_4;
		NullCheck(L_38);
		L_38->____n_7 = L_39;
		int32_t L_40 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00fc:
	{
		int32_t L_41 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_2;
		NullCheck(L_42);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43 = L_42->____Lnext_4;
		V_2 = L_43;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_45 = V_1;
		NullCheck(L_45);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = L_45->____anEdge_2;
		V_16 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_44) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_46))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_16;
		if (L_47)
		{
			goto IL_00d5;
		}
	}
	{
		int32_t L_48 = V_5;
		int32_t L_49 = ___polySize1;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((((int32_t)L_48) > ((int32_t)L_49))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_50 = V_1;
		int32_t L_51 = V_3;
		NullCheck(L_50);
		L_50->____n_4 = L_51;
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_0136:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_53 = V_1;
		NullCheck(L_53);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_54 = L_53->____next_1;
		V_1 = L_54;
	}

IL_013d:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_55 = V_1;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_56 = __this->____mesh_1;
		NullCheck(L_56);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_57 = L_56->____fHead_1;
		V_17 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_55) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_57))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_58 = V_17;
		if (L_58)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_59 = V_3;
		__this->____elementCount_17 = L_59;
		int32_t L_60 = ___elementType0;
		V_18 = (bool)((((int32_t)L_60) == ((int32_t)1))? 1 : 0);
		bool L_61 = V_18;
		if (!L_61)
		{
			goto IL_016c;
		}
	}
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_62, 2));
	}

IL_016c:
	{
		int32_t L_63 = V_3;
		int32_t L_64 = ___polySize1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_63, L_64)));
		__this->____elements_16 = L_65;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements_16), (void*)L_65);
		int32_t L_66 = V_4;
		__this->____vertexCount_15 = L_66;
		int32_t L_67 = __this->____vertexCount_15;
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_68 = (ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)SZArrayNew(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var, (uint32_t)L_67);
		__this->____vertices_14 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices_14), (void*)L_68);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_69 = __this->____mesh_1;
		NullCheck(L_69);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_70 = L_69->____vHead_0;
		NullCheck(L_70);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_71 = L_70->____next_1;
		V_0 = L_71;
		goto IL_01fb;
	}

IL_01a6:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_72 = V_0;
		NullCheck(L_72);
		int32_t L_73 = L_72->____n_7;
		V_19 = (bool)((((int32_t)((((int32_t)L_73) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_74 = V_19;
		if (!L_74)
		{
			goto IL_01f3;
		}
	}
	{
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_75 = __this->____vertices_14;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_76 = V_0;
		NullCheck(L_76);
		int32_t L_77 = L_76->____n_7;
		NullCheck(L_75);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_78 = V_0;
		NullCheck(L_78);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_79 = L_78->____coords_3;
		((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_77)))->___Position_0 = L_79;
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_80 = __this->____vertices_14;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_81 = V_0;
		NullCheck(L_81);
		int32_t L_82 = L_81->____n_7;
		NullCheck(L_80);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_83 = V_0;
		NullCheck(L_83);
		RuntimeObject* L_84 = L_83->____data_8;
		((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_82)))->___Data_1 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_82)))->___Data_1), (void*)L_84);
	}

IL_01f3:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_85 = V_0;
		NullCheck(L_85);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_86 = L_85->____next_1;
		V_0 = L_86;
	}

IL_01fb:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_87 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_88 = __this->____mesh_1;
		NullCheck(L_88);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_89 = L_88->____vHead_0;
		V_20 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_87) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_89))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_90 = V_20;
		if (L_90)
		{
			goto IL_01a6;
		}
	}
	{
		V_7 = 0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_91 = __this->____mesh_1;
		NullCheck(L_91);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_92 = L_91->____fHead_1;
		NullCheck(L_92);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_93 = L_92->____next_1;
		V_1 = L_93;
		goto IL_0351;
	}

IL_022b:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_94 = V_1;
		NullCheck(L_94);
		bool L_95 = L_94->____inside_6;
		V_21 = (bool)((((int32_t)L_95) == ((int32_t)0))? 1 : 0);
		bool L_96 = V_21;
		if (!L_96)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_034a;
	}

IL_0240:
	{
		bool L_97 = __this->___NoEmptyPolygons_22;
		V_22 = L_97;
		bool L_98 = V_22;
		if (!L_98)
		{
			goto IL_0270;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_99 = V_1;
		float L_100;
		L_100 = MeshUtils_FaceArea_mDE166ED484B8CF884C0846D250D75774E1EBA859(L_99, NULL);
		V_23 = L_100;
		float L_101 = V_23;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_102;
		L_102 = fabsf(L_101);
		V_24 = (bool)((((float)L_102) < ((float)(1.40129846E-45f)))? 1 : 0);
		bool L_103 = V_24;
		if (!L_103)
		{
			goto IL_026f;
		}
	}
	{
		goto IL_034a;
	}

IL_026f:
	{
	}

IL_0270:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_104 = V_1;
		NullCheck(L_104);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_105 = L_104->____anEdge_2;
		V_2 = L_105;
		V_5 = 0;
	}

IL_027a:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_106 = V_2;
		NullCheck(L_106);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_107 = L_106->____Org_5;
		V_0 = L_107;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____elements_16;
		int32_t L_109 = V_7;
		int32_t L_110 = L_109;
		V_7 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_111 = V_0;
		NullCheck(L_111);
		int32_t L_112 = L_111->____n_7;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(L_110), (int32_t)L_112);
		int32_t L_113 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_113, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_114 = V_2;
		NullCheck(L_114);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_115 = L_114->____Lnext_4;
		V_2 = L_115;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_116 = V_2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_117 = V_1;
		NullCheck(L_117);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_118 = L_117->____anEdge_2;
		V_25 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_116) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_118))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_119 = V_25;
		if (L_119)
		{
			goto IL_027a;
		}
	}
	{
		int32_t L_120 = V_5;
		V_6 = L_120;
		goto IL_02d3;
	}

IL_02bc:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = __this->____elements_16;
		int32_t L_122 = V_7;
		int32_t L_123 = L_122;
		V_7 = ((int32_t)il2cpp_codegen_add(L_123, 1));
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(L_123), (int32_t)(-1));
		int32_t L_124 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_124, 1));
	}

IL_02d3:
	{
		int32_t L_125 = V_6;
		int32_t L_126 = ___polySize1;
		V_26 = (bool)((((int32_t)L_125) < ((int32_t)L_126))? 1 : 0);
		bool L_127 = V_26;
		if (L_127)
		{
			goto IL_02bc;
		}
	}
	{
		int32_t L_128 = ___elementType0;
		V_27 = (bool)((((int32_t)L_128) == ((int32_t)1))? 1 : 0);
		bool L_129 = V_27;
		if (!L_129)
		{
			goto IL_0349;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_130 = V_1;
		NullCheck(L_130);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_131 = L_130->____anEdge_2;
		V_2 = L_131;
	}

IL_02f0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = __this->____elements_16;
		int32_t L_133 = V_7;
		int32_t L_134 = L_133;
		V_7 = ((int32_t)il2cpp_codegen_add(L_134, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_135 = V_2;
		int32_t L_136;
		L_136 = Tess_GetNeighbourFace_mDB66AF9ED49A800C6FD51072F7EC9E2DFFACFAA8(__this, L_135, NULL);
		NullCheck(L_132);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(L_134), (int32_t)L_136);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_137 = V_2;
		NullCheck(L_137);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_138 = L_137->____Lnext_4;
		V_2 = L_138;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_139 = V_2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_140 = V_1;
		NullCheck(L_140);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_141 = L_140->____anEdge_2;
		V_28 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_139) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_141))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_142 = V_28;
		if (L_142)
		{
			goto IL_02f0;
		}
	}
	{
		int32_t L_143 = V_5;
		V_6 = L_143;
		goto IL_033d;
	}

IL_0326:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_144 = __this->____elements_16;
		int32_t L_145 = V_7;
		int32_t L_146 = L_145;
		V_7 = ((int32_t)il2cpp_codegen_add(L_146, 1));
		NullCheck(L_144);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(L_146), (int32_t)(-1));
		int32_t L_147 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_147, 1));
	}

IL_033d:
	{
		int32_t L_148 = V_6;
		int32_t L_149 = ___polySize1;
		V_29 = (bool)((((int32_t)L_148) < ((int32_t)L_149))? 1 : 0);
		bool L_150 = V_29;
		if (L_150)
		{
			goto IL_0326;
		}
	}
	{
	}

IL_0349:
	{
	}

IL_034a:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_151 = V_1;
		NullCheck(L_151);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_152 = L_151->____next_1;
		V_1 = L_152;
	}

IL_0351:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_153 = V_1;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_154 = __this->____mesh_1;
		NullCheck(L_154);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_155 = L_154->____fHead_1;
		V_30 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_153) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_155))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_156 = V_30;
		if (L_156)
		{
			goto IL_022b;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::OutputContours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputContours_mB354AD2F98DCFE73A074C5443A000FDDCBBD0D83 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	{
		V_3 = 0;
		V_4 = 0;
		__this->____vertexCount_15 = 0;
		__this->____elementCount_17 = 0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____fHead_1;
		NullCheck(L_1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = L_1->____next_1;
		V_0 = L_2;
		goto IL_007c;
	}

IL_0027:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = L_3->____inside_6;
		V_7 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_7;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0075;
	}

IL_0039:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6 = V_0;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____anEdge_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7;
		V_1 = L_8;
		V_2 = L_8;
	}

IL_0042:
	{
		int32_t L_9 = __this->____vertexCount_15;
		__this->____vertexCount_15 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		NullCheck(L_10);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = L_10->____Lnext_4;
		V_1 = L_11;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_2;
		V_8 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_12) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_8;
		if (L_14)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_15 = __this->____elementCount_17;
		__this->____elementCount_17 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0075:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_16 = V_0;
		NullCheck(L_16);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_17 = L_16->____next_1;
		V_0 = L_17;
	}

IL_007c:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_19 = __this->____mesh_1;
		NullCheck(L_19);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_20 = L_19->____fHead_1;
		V_9 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_18) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_9;
		if (L_21)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_22 = __this->____elementCount_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_22, 2)));
		__this->____elements_16 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements_16), (void*)L_23);
		int32_t L_24 = __this->____vertexCount_15;
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_25 = (ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)SZArrayNew(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var, (uint32_t)L_24);
		__this->____vertices_14 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices_14), (void*)L_25);
		V_5 = 0;
		V_6 = 0;
		V_3 = 0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_26 = __this->____mesh_1;
		NullCheck(L_26);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_27 = L_26->____fHead_1;
		NullCheck(L_27);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_28 = L_27->____next_1;
		V_0 = L_28;
		goto IL_017e;
	}

IL_00d5:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_29 = V_0;
		NullCheck(L_29);
		bool L_30 = L_29->____inside_6;
		V_10 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_10;
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		goto IL_0177;
	}

IL_00ea:
	{
		V_4 = 0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_32 = V_0;
		NullCheck(L_32);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = L_32->____anEdge_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = L_33;
		V_1 = L_34;
		V_2 = L_34;
	}

IL_00f6:
	{
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_35 = __this->____vertices_14;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = V_1;
		NullCheck(L_37);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_38 = L_37->____Org_5;
		NullCheck(L_38);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_39 = L_38->____coords_3;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___Position_0 = L_39;
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_40 = __this->____vertices_14;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_1;
		NullCheck(L_42);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = L_42->____Org_5;
		NullCheck(L_43);
		RuntimeObject* L_44 = L_43->____data_8;
		((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___Data_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___Data_1), (void*)L_44);
		int32_t L_45 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = V_1;
		NullCheck(L_47);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = L_47->____Lnext_4;
		V_1 = L_48;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_2;
		V_11 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_49) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_51 = V_11;
		if (L_51)
		{
			goto IL_00f6;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = __this->____elements_16;
		int32_t L_53 = V_6;
		int32_t L_54 = L_53;
		V_6 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		int32_t L_55 = V_3;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (int32_t)L_55);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = __this->____elements_16;
		int32_t L_57 = V_6;
		int32_t L_58 = L_57;
		V_6 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		int32_t L_59 = V_4;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)L_59);
		int32_t L_60 = V_3;
		int32_t L_61 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_add(L_60, L_61));
	}

IL_0177:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_62 = V_0;
		NullCheck(L_62);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_63 = L_62->____next_1;
		V_0 = L_63;
	}

IL_017e:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_64 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_65 = __this->____mesh_1;
		NullCheck(L_65);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_66 = L_65->____fHead_1;
		V_12 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_64) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_66))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_67 = V_12;
		if (L_67)
		{
			goto IL_00d5;
		}
	}
	{
		return;
	}
}
// System.Single LibTessDotNet.Tess::SignedArea(System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tess_SignedArea_m81A5A96E18FE237FDA733FE8D31601142341B841 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, RuntimeObject* ___vertices0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F V_2;
	memset((&V_2), 0, sizeof(V_2));
	ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	float V_5 = 0.0f;
	{
		V_0 = (0.0f);
		V_1 = 0;
		goto IL_005e;
	}

IL_000b:
	{
		RuntimeObject* L_0 = ___vertices0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_2;
		L_2 = InterfaceFuncInvoker1< ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>::get_Item(System.Int32) */, IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var, L_0, L_1);
		V_2 = L_2;
		RuntimeObject* L_3 = ___vertices0;
		int32_t L_4 = V_1;
		RuntimeObject* L_5 = ___vertices0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<LibTessDotNet.ContourVertex>::get_Count() */, ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_3);
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_7;
		L_7 = InterfaceFuncInvoker1< ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>::get_Item(System.Int32) */, IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var, L_3, ((int32_t)(((int32_t)il2cpp_codegen_add(L_4, 1))%L_6)));
		V_3 = L_7;
		float L_8 = V_0;
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_9 = V_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_10 = L_9.___Position_0;
		float L_11 = L_10.___X_1;
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_12 = V_3;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_13 = L_12.___Position_0;
		float L_14 = L_13.___Y_2;
		V_0 = ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(L_11, L_14))));
		float L_15 = V_0;
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_16 = V_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_17 = L_16.___Position_0;
		float L_18 = L_17.___Y_2;
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_19 = V_3;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_20 = L_19.___Position_0;
		float L_21 = L_20.___X_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_15, ((float)il2cpp_codegen_multiply(L_18, L_21))));
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_005e:
	{
		int32_t L_23 = V_1;
		RuntimeObject* L_24 = ___vertices0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<LibTessDotNet.ContourVertex>::get_Count() */, ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var, L_24);
		V_4 = (bool)((((int32_t)L_23) < ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_4;
		if (L_26)
		{
			goto IL_000b;
		}
	}
	{
		float L_27 = V_0;
		V_5 = ((float)il2cpp_codegen_multiply((0.5f), L_27));
		goto IL_0078;
	}

IL_0078:
	{
		float L_28 = V_5;
		return L_28;
	}
}
// System.Void LibTessDotNet.Tess::AddContour(LibTessDotNet.ContourVertex[],LibTessDotNet.ContourOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContour_mF667311A04886C578E9808D715A4D6470D0AD5A5 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* ___vertices0, int32_t ___forceOrientation1, const RuntimeMethod* method) 
{
	{
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_0 = ___vertices0;
		int32_t L_1 = ___forceOrientation1;
		Tess_AddContourInternal_mFA84BAC9BB6FA1F7C40B76E6ABC6C7884C666887(__this, (RuntimeObject*)L_0, L_1, NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::AddContour(System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>,LibTessDotNet.ContourOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContour_m8EDE4A726EAE9475970B07B9ABA4D7F0F8D1674E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, RuntimeObject* ___vertices0, int32_t ___forceOrientation1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___vertices0;
		int32_t L_1 = ___forceOrientation1;
		Tess_AddContourInternal_mFA84BAC9BB6FA1F7C40B76E6ABC6C7884C666887(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::AddContourInternal(System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>,LibTessDotNet.ContourOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContourInternal_mFA84BAC9BB6FA1F7C40B76E6ABC6C7884C666887 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, RuntimeObject* ___vertices0, int32_t ___forceOrientation1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m1D44A8B041AE4181C7B292F16B2DA3AF32201ADB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B18_0 = 0;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		V_2 = (bool)((((RuntimeObject*)(Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_2 = __this->____pool_0;
		NullCheck(L_2);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_3;
		L_3 = GenericVirtualFuncInvoker0< Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* >::Invoke(IPool_Get_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m1D44A8B041AE4181C7B292F16B2DA3AF32201ADB_RuntimeMethod_var, L_2);
		__this->____mesh_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mesh_1), (void*)L_3);
	}

IL_0021:
	{
		V_0 = (bool)0;
		int32_t L_4 = ___forceOrientation1;
		V_3 = (bool)((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_6 = ___vertices0;
		float L_7;
		L_7 = Tess_SignedArea_m81A5A96E18FE237FDA733FE8D31601142341B841(__this, L_6, NULL);
		V_4 = L_7;
		int32_t L_8 = ___forceOrientation1;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		float L_9 = V_4;
		if ((((float)L_9) < ((float)(0.0f))))
		{
			goto IL_0054;
		}
	}

IL_0042:
	{
		int32_t L_10 = ___forceOrientation1;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0051;
		}
	}
	{
		float L_11 = V_4;
		G_B8_0 = ((((float)L_11) > ((float)(0.0f)))? 1 : 0);
		goto IL_0052;
	}

IL_0051:
	{
		G_B8_0 = 0;
	}

IL_0052:
	{
		G_B10_0 = G_B8_0;
		goto IL_0055;
	}

IL_0054:
	{
		G_B10_0 = 1;
	}

IL_0055:
	{
		V_0 = (bool)G_B10_0;
	}

IL_0057:
	{
		V_1 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		V_5 = 0;
		goto IL_0115;
	}

IL_0061:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_1;
		V_7 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_12) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_13 = V_7;
		if (!L_13)
		{
			goto IL_009b;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_14 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_15 = __this->____pool_0;
		NullCheck(L_14);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16;
		L_16 = Mesh_MakeEdge_m885B759356861633DA4414A5DE88F5FDB0E8B8E7(L_14, L_15, NULL);
		V_1 = L_16;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_17 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_18 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_1;
		NullCheck(L_20);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = L_20->____Sym_2;
		NullCheck(L_17);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_17, L_18, L_19, L_21, NULL);
		goto IL_00b7;
	}

IL_009b:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_22 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_23 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_1;
		NullCheck(L_22);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25;
		L_25 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_22, L_23, L_24, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_1;
		NullCheck(L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = L_26->____Lnext_4;
		V_1 = L_27;
	}

IL_00b7:
	{
		bool L_28 = V_0;
		if (L_28)
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_29 = V_5;
		G_B18_0 = L_29;
		goto IL_00c9;
	}

IL_00be:
	{
		RuntimeObject* L_30 = ___vertices0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<LibTessDotNet.ContourVertex>::get_Count() */, ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var, L_30);
		int32_t L_32 = V_5;
		G_B18_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_31, 1)), L_32));
	}

IL_00c9:
	{
		V_6 = G_B18_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_1;
		NullCheck(L_33);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_34 = L_33->____Org_5;
		RuntimeObject* L_35 = ___vertices0;
		int32_t L_36 = V_6;
		NullCheck(L_35);
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_37;
		L_37 = InterfaceFuncInvoker1< ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>::get_Item(System.Int32) */, IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var, L_35, L_36);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_38 = L_37.___Position_0;
		NullCheck(L_34);
		L_34->____coords_3 = L_38;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_1;
		NullCheck(L_39);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_40 = L_39->____Org_5;
		RuntimeObject* L_41 = ___vertices0;
		int32_t L_42 = V_6;
		NullCheck(L_41);
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_43;
		L_43 = InterfaceFuncInvoker1< ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>::get_Item(System.Int32) */, IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var, L_41, L_42);
		RuntimeObject* L_44 = L_43.___Data_1;
		NullCheck(L_40);
		L_40->____data_8 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&L_40->____data_8), (void*)L_44);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = V_1;
		NullCheck(L_45);
		L_45->____winding_8 = 1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_1;
		NullCheck(L_46);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = L_46->____Sym_2;
		NullCheck(L_47);
		L_47->____winding_8 = (-1);
		int32_t L_48 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0115:
	{
		int32_t L_49 = V_5;
		RuntimeObject* L_50 = ___vertices0;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<LibTessDotNet.ContourVertex>::get_Count() */, ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var, L_50);
		V_8 = (bool)((((int32_t)L_49) < ((int32_t)L_51))? 1 : 0);
		bool L_52 = V_8;
		if (L_52)
		{
			goto IL_0061;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::Tessellate(LibTessDotNet.WindingRule,LibTessDotNet.ElementType,System.Int32,LibTessDotNet.CombineCallback,LibTessDotNet.Vec3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_Tessellate_m1A288974947B0D69A8FC26556C151259C8C8418E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, int32_t ___windingRule0, int32_t ___elementType1, int32_t ___polySize2, CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* ___combineCallback3, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___normal4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_mA46A3ED1C0EC36E0BCE452704A9A5820018D7D18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_0 = ___normal4;
		__this->____normal_2 = L_0;
		__this->____vertices_14 = (ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices_14), (void*)(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)NULL);
		__this->____elements_16 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements_16), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		int32_t L_1 = ___windingRule0;
		__this->____windingRule_9 = L_1;
		CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* L_2 = ___combineCallback3;
		__this->____combineCallback_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____combineCallback_13), (void*)L_2);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_3 = __this->____mesh_1;
		V_0 = (bool)((((RuntimeObject*)(Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		goto IL_009e;
	}

IL_0036:
	{
		Tess_ProjectPolygon_m22515E7F73F680B50FAC5ADD3BF5290A0FD719B2(__this, NULL);
		Tess_ComputeInterior_mFE484BBCF4AAC36E007A54416314B53790663CAD(__this, NULL);
		int32_t L_5 = ___elementType1;
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)2))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0059;
		}
	}
	{
		Tess_SetWindingNumber_m67CAD83A0441F03AC00A0988396CC22DDD93FE6A(__this, 1, (bool)1, NULL);
		goto IL_0062;
	}

IL_0059:
	{
		Tess_TessellateInterior_mE0300B408C5AF3A1D2ED19A02BA39F5BC21DAD91(__this, NULL);
	}

IL_0062:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_7 = __this->____mesh_1;
		NullCheck(L_7);
		Mesh_Check_m60A4227D366A3F601EC5B8D95D672862D9BC8146(L_7, NULL);
		int32_t L_8 = ___elementType1;
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)2))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0081;
		}
	}
	{
		Tess_OutputContours_mB354AD2F98DCFE73A074C5443A000FDDCBBD0D83(__this, NULL);
		goto IL_008c;
	}

IL_0081:
	{
		int32_t L_10 = ___elementType1;
		int32_t L_11 = ___polySize2;
		Tess_OutputPolymesh_mD26B103CACD185034776B1CC6869212B40665B7B(__this, L_10, L_11, NULL);
	}

IL_008c:
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_12 = __this->____pool_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3** L_13 = (&__this->____mesh_1);
		NullCheck(L_12);
		GenericVirtualActionInvoker1< Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3** >::Invoke(IPool_Return_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_mA46A3ED1C0EC36E0BCE452704A9A5820018D7D18_RuntimeMethod_var, L_12, L_13);
	}

IL_009e:
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
// System.Void LibTessDotNet.Tess/ActiveRegion::Init(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion_Init_m80C01AA8B6EF1AF955B6E6D038266AC164C7C7B8 (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess/ActiveRegion::Reset(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion_Reset_m48644BA3A77C7E987752B537061AB5CE6ADD78DD (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	{
		__this->____eUp_0 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eUp_0), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		__this->____nodeUp_1 = (Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nodeUp_1), (void*)(Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C*)NULL);
		__this->____windingNumber_2 = 0;
		__this->____inside_3 = (bool)0;
		__this->____sentinel_4 = (bool)0;
		__this->____dirty_5 = (bool)0;
		__this->____fixUpperEdge_6 = (bool)0;
		return;
	}
}
// System.Void LibTessDotNet.Tess/ActiveRegion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion__ctor_m30F0FDCDC7ACA4654AE05183BB52C250FFD904C2 (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* __this, const RuntimeMethod* method) 
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
// Conversion methods for marshalling of: LibTessDotNet.ContourVertex
IL2CPP_EXTERN_C void ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshal_pinvoke(const ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F& unmarshaled, ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshaled_pinvoke& marshaled)
{
	marshaled.___Position_0 = unmarshaled.___Position_0;
	if (unmarshaled.___Data_1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Data_1))
		{
			marshaled.___Data_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___Data_1));
			(marshaled.___Data_1)->AddRef();
		}
		else
		{
			marshaled.___Data_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___Data_1);
		}
	}
	else
	{
		marshaled.___Data_1 = NULL;
	}
}
IL2CPP_EXTERN_C void ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshal_pinvoke_back(const ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshaled_pinvoke& marshaled, ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 unmarshaledPosition_temp_0;
	memset((&unmarshaledPosition_temp_0), 0, sizeof(unmarshaledPosition_temp_0));
	unmarshaledPosition_temp_0 = marshaled.___Position_0;
	unmarshaled.___Position_0 = unmarshaledPosition_temp_0;
	if (marshaled.___Data_1 != NULL)
	{
		unmarshaled.___Data_1 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Data_1, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data_1), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Data_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Data_1))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___Data_1), Il2CppIUnknown::IID, marshaled.___Data_1);
		}
	}
	else
	{
		unmarshaled.___Data_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data_1), (void*)NULL);
	}
}
// Conversion method for clean up from marshalling of: LibTessDotNet.ContourVertex
IL2CPP_EXTERN_C void ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshal_pinvoke_cleanup(ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshaled_pinvoke& marshaled)
{
	if (marshaled.___Data_1 != NULL)
	{
		(marshaled.___Data_1)->Release();
		marshaled.___Data_1 = NULL;
	}
}
// Conversion methods for marshalling of: LibTessDotNet.ContourVertex
IL2CPP_EXTERN_C void ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshal_com(const ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F& unmarshaled, ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshaled_com& marshaled)
{
	marshaled.___Position_0 = unmarshaled.___Position_0;
	if (unmarshaled.___Data_1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Data_1))
		{
			marshaled.___Data_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___Data_1));
			(marshaled.___Data_1)->AddRef();
		}
		else
		{
			marshaled.___Data_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___Data_1);
		}
	}
	else
	{
		marshaled.___Data_1 = NULL;
	}
}
IL2CPP_EXTERN_C void ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshal_com_back(const ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshaled_com& marshaled, ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 unmarshaledPosition_temp_0;
	memset((&unmarshaledPosition_temp_0), 0, sizeof(unmarshaledPosition_temp_0));
	unmarshaledPosition_temp_0 = marshaled.___Position_0;
	unmarshaled.___Position_0 = unmarshaledPosition_temp_0;
	if (marshaled.___Data_1 != NULL)
	{
		unmarshaled.___Data_1 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Data_1, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data_1), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Data_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Data_1))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___Data_1), Il2CppIUnknown::IID, marshaled.___Data_1);
		}
	}
	else
	{
		unmarshaled.___Data_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data_1), (void*)NULL);
	}
}
// Conversion method for clean up from marshalling of: LibTessDotNet.ContourVertex
IL2CPP_EXTERN_C void ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshal_com_cleanup(ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshaled_com& marshaled)
{
	if (marshaled.___Data_1 != NULL)
	{
		(marshaled.___Data_1)->Release();
		marshaled.___Data_1 = NULL;
	}
}
// System.Void LibTessDotNet.ContourVertex::.ctor(LibTessDotNet.Vec3,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContourVertex__ctor_mB49AE90A9B85CA37EC7EE928BC9EE585D35C8C03 (ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, RuntimeObject* ___data1, const RuntimeMethod* method) 
{
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_0 = ___position0;
		__this->___Position_0 = L_0;
		RuntimeObject* L_1 = ___data1;
		__this->___Data_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data_1), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void ContourVertex__ctor_mB49AE90A9B85CA37EC7EE928BC9EE585D35C8C03_AdjustorThunk (RuntimeObject* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, RuntimeObject* ___data1, const RuntimeMethod* method)
{
	ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F*>(__this + _offset);
	ContourVertex__ctor_mB49AE90A9B85CA37EC7EE928BC9EE585D35C8C03(_thisAdjusted, ___position0, ___data1, method);
}
// System.String LibTessDotNet.ContourVertex::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContourVertex_ToString_m5C3892C4BC39F4D753E1B3B02B82242DD4FAD66A (ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_0 = __this->___Position_0;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_1 = L_0;
		RuntimeObject* L_2 = Box(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject* L_3 = __this->___Data_1;
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  String_t* ContourVertex_ToString_m5C3892C4BC39F4D753E1B3B02B82242DD4FAD66A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ContourVertex_ToString_m5C3892C4BC39F4D753E1B3B02B82242DD4FAD66A(_thisAdjusted, method);
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
RuntimeObject* CombineCallback_Invoke_m567FA415136EB70CAA4B9E3B8D1F5A133EBAD5B3_Multicast(CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* currentDelegate = reinterpret_cast<CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___position0, ___data1, ___weights2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* CombineCallback_Invoke_m567FA415136EB70CAA4B9E3B8D1F5A133EBAD5B3_OpenInst(CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___position0, ___data1, ___weights2, method);
}
RuntimeObject* CombineCallback_Invoke_m567FA415136EB70CAA4B9E3B8D1F5A133EBAD5B3_OpenStatic(CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___position0, ___data1, ___weights2, method);
}
RuntimeObject* CombineCallback_Invoke_m567FA415136EB70CAA4B9E3B8D1F5A133EBAD5B3_OpenStaticInvoker(CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< RuntimeObject*, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(__this->___method_ptr_0, method, NULL, ___position0, ___data1, ___weights2);
}
RuntimeObject* CombineCallback_Invoke_m567FA415136EB70CAA4B9E3B8D1F5A133EBAD5B3_ClosedStaticInvoker(CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< RuntimeObject*, RuntimeObject*, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___position0, ___data1, ___weights2);
}
// System.Void LibTessDotNet.CombineCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineCallback__ctor_m4C08DD9F36BCA4F132C1AE0D7A6FAA7540EC1C47 (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CombineCallback_Invoke_m567FA415136EB70CAA4B9E3B8D1F5A133EBAD5B3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CombineCallback_Invoke_m567FA415136EB70CAA4B9E3B8D1F5A133EBAD5B3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CombineCallback_Invoke_m567FA415136EB70CAA4B9E3B8D1F5A133EBAD5B3_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&CombineCallback_Invoke_m567FA415136EB70CAA4B9E3B8D1F5A133EBAD5B3_Multicast;
}
// System.Object LibTessDotNet.CombineCallback::Invoke(LibTessDotNet.Vec3,System.Object[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineCallback_Invoke_m567FA415136EB70CAA4B9E3B8D1F5A133EBAD5B3 (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, ___data1, ___weights2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult LibTessDotNet.CombineCallback::BeginInvoke(LibTessDotNet.Vec3,System.Object[],System.Single[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineCallback_BeginInvoke_m09E8A0532AEF980A61621340B2771D1C82EAAF55 (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var, &___position0);
	__d_args[1] = ___data1;
	__d_args[2] = ___weights2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Object LibTessDotNet.CombineCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineCallback_EndInvoke_mC4E88FBD080C9434FB5F0E99038239BF43DB8173 (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m59B8215B9A49709B9D299317ECB152C316625559_inline (float ___d0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a1;
		float L_1 = L_0.___x_1;
		float L_2 = ___d0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___a1;
		float L_4 = L_3.___y_2;
		float L_5 = ___d0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___a1;
		float L_7 = L_6.___z_3;
		float L_8 = ___d0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___a1;
		float L_10 = L_9.___w_4;
		float L_11 = ___d0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___b1;
		float L_3 = L_2.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___a0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___b1;
		float L_7 = L_6.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___a0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___b1;
		float L_11 = L_10.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___a0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___b1;
		float L_15 = L_14.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m8503E764714E7AEF4E3CCBFDB1E09C930E87EFE4_inline (float ___b0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a1;
		float L_1 = L_0.___r_0;
		float L_2 = ___b0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___a1;
		float L_4 = L_3.___g_1;
		float L_5 = ___b0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a1;
		float L_7 = L_6.___b_2;
		float L_8 = ___b0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a1;
		float L_10 = L_9.___a_3;
		float L_11 = ___b0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___b1;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___a0;
		float L_5 = L_4.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___b1;
		float L_7 = L_6.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___a0;
		float L_9 = L_8.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___b1;
		float L_11 = L_10.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___a0;
		float L_13 = L_12.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___b1;
		float L_15 = L_14.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline (float ___d0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a1;
		float L_1 = L_0.___x_0;
		float L_2 = ___d0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a1;
		float L_4 = L_3.___y_1;
		float L_5 = ___d0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CombineCallback_Invoke_m567FA415136EB70CAA4B9E3B8D1F5A133EBAD5B3_inline (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, ___data1, ___weights2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
