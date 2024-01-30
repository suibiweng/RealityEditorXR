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
// System.Action`2<TriLibCore.AssetLoaderContext,System.Single>
struct Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD;
// System.Comparison`1<System.Object>
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645;
// System.Comparison`1<TriLibCore.Mappers.TextureMapper>
struct Comparison_1_tC7A2B9CAE6FE5036370E20D7A75E1B055DB230FB;
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
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color>
struct Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture>
struct Dictionary_2_t2E06FE62EACD0AB250C1C292D1592E12210C876D;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Vector3>
struct Dictionary_2_t1B115DB96F2674765975721520F73253084A610E;
// System.Collections.Generic.HashSet`1<TriLibCore.General.GenericMaterialProperty>
struct HashSet_1_t957C99973D0A3BCF1BB5FECDAF5541AE077491B3;
// System.Collections.Generic.HashSet`1<UnityEngine.Texture>
struct HashSet_1_t70836788BCAF42568800A162B9F23937F5309AE8;
// System.Collections.Generic.List`1<System.IDisposable>
struct List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551;
// System.Collections.Generic.Queue`1<TriLibCore.Interfaces.IContextualizedAction>
struct Queue_1_t952DE88AF42216B755D09647735E4235DA7138D4;
// System.Action`1<TriLibCore.TextureLoadingContext>[]
struct Action_1U5BU5D_t7706604B0FB5F3A4270EB313972114755AE7A123;
// TriLibCore.Mappers.AnimationClipMapper[]
struct AnimationClipMapperU5BU5D_t8E00A18562A07FD65A6E731D8BA6FF48D80BBFD8;
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
// TriLibCore.Mappers.LipSyncMapper[]
struct LipSyncMapperU5BU5D_t32748FDCB493E8E7550A88244C1CBBB79E54C18A;
// TriLibCore.Mappers.MaterialMapper[]
struct MaterialMapperU5BU5D_tBD3B26C68148AE48AD6F3B44795C7B7B3EE2257B;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TriLibCore.Mappers.TextureMapper[]
struct TextureMapperU5BU5D_t35F575F1D951980713D2A9E7D85F6AE82ABEA79C;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// TriLibCore.AssetLoaderContext
struct AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C;
// TriLibCore.AssetLoaderOptions
struct AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6;
// UnityEngine.Avatar
struct Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// TriLibCore.Mappers.ExternalDataMapper
struct ExternalDataMapper_t809726D72207DAF57227F4A5D67B9D01394B760A;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// TriLibCore.General.HumanDescription
struct HumanDescription_t0BD271EF43944EC6940A10C164E94F8C7E750481;
// TriLibCore.Mappers.HumanoidAvatarMapper
struct HumanoidAvatarMapper_t691E00A2CE4455F03562FF79A586CC717D38FB09;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// TriLibCore.Interfaces.IMaterial
struct IMaterial_t803D44AB6CC3544CCD396131BAE42FB12B128EE5;
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
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// TriLibCore.ReaderBase
struct ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// TriLibCore.Mappers.RootBoneMapper
struct RootBoneMapper_t64AE3E33364A832EE1B74D8B65BC9AA7B448DDA2;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
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
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TriLibCore.TextureDataContext
struct TextureDataContext_tFA6C9B1525B47F9A11A34ACBF3BE7D238187B72D;
// TriLibCore.TextureLoadingContext
struct TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879;
// TriLibCore.Mappers.TextureMapper
struct TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD;
// TriLibCore.Mappers.UserPropertiesMapper
struct UserPropertiesMapper_t8437A569EBEB9E02E364D9951BE31F9601C55714;
// TriLibCore.General.VirtualMaterial
struct VirtualMaterial_t0610B7A6460E24DADF06569B4DA1D9FC487A52DB;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// StbImageSharp.StbImage/stbi__context
struct stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// TriLibCore.Textures.TextureLoaders/<>c
struct U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251;

IL2CPP_EXTERN_C RuntimeClass* CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_tC7A2B9CAE6FE5036370E20D7A75E1B055DB230FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMaterial_t803D44AB6CC3544CCD396131BAE42FB12B128EE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureCreationFlags_t7671FF285C96A03BDCD7BA2F50388C09ED4A54A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral036C10F0B98CF33047A90200800F1755E092E09B;
IL2CPP_EXTERN_C String_t* _stringLiteral0D459FA007D32192A9431B6A7BE658E9DCB2174D;
IL2CPP_EXTERN_C String_t* _stringLiteral0FF0F6ABEC9720CE53C87D152864D881E99E6A55;
IL2CPP_EXTERN_C String_t* _stringLiteral17EC97923831F17778E40B7199A141873C93FAD5;
IL2CPP_EXTERN_C String_t* _stringLiteral1C19B3E9795CB33B3ACB724FF178ADDEC6A69006;
IL2CPP_EXTERN_C String_t* _stringLiteral1CE04C77818442707CAC1B520BAAC4AF805B1479;
IL2CPP_EXTERN_C String_t* _stringLiteral1EE91C5F3C9005B425387F0CA231DAE662ADA085;
IL2CPP_EXTERN_C String_t* _stringLiteral267DF2A157952DDD8F6975E65DF5649A1D262662;
IL2CPP_EXTERN_C String_t* _stringLiteral28A4059B163B8DE147DC08DAFEF5E3E3593C9764;
IL2CPP_EXTERN_C String_t* _stringLiteral29E89B68349B5ADC4F6EE256721DC418018271B8;
IL2CPP_EXTERN_C String_t* _stringLiteral2E830F91387FC053954E7F4BEEA6E9C2963F3EB2;
IL2CPP_EXTERN_C String_t* _stringLiteral2F02BF547264FC1E6982A2704D132053DD66CAF4;
IL2CPP_EXTERN_C String_t* _stringLiteral334952F55DBD0D53ED7447432DFEB0D893BD7CCF;
IL2CPP_EXTERN_C String_t* _stringLiteral34225B257D44E1FD77092CABE6A27981E78585B7;
IL2CPP_EXTERN_C String_t* _stringLiteral3833F7AEC492E9B13522CC39BB90E8300610029F;
IL2CPP_EXTERN_C String_t* _stringLiteral3B3C86CBBF642F507CAD52E883769212E941116D;
IL2CPP_EXTERN_C String_t* _stringLiteral3B5B4700DFFCE53FFB81288D310D59921A9F8493;
IL2CPP_EXTERN_C String_t* _stringLiteral41464D53987D1CFCEFD1335FEF3EC7EDA76EC5C1;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral4E0BE55ACCED21FADA5A487427198527ECC4C09A;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral531588C3237841B3CB6556B3036EDC0CDC3E49EC;
IL2CPP_EXTERN_C String_t* _stringLiteral5DC0B9DB1C33CBE45938326136E078C89D5F82F2;
IL2CPP_EXTERN_C String_t* _stringLiteral618505A4BD72F72100747D1E06EF9695254C1497;
IL2CPP_EXTERN_C String_t* _stringLiteral6CA852C55C3313ED752F5307B264815B649712D7;
IL2CPP_EXTERN_C String_t* _stringLiteral6E630AE63717B2B5680B6AFCE21AA2CBDFB52718;
IL2CPP_EXTERN_C String_t* _stringLiteral7BDCC3697B3409C95D2D74CFB62AA1965CB64033;
IL2CPP_EXTERN_C String_t* _stringLiteral7C8D0C8DF43E73F7271CE108EFF8C68873301942;
IL2CPP_EXTERN_C String_t* _stringLiteral7DFC5FEE55F79D7A25FBF5597A667180ED9DC2B6;
IL2CPP_EXTERN_C String_t* _stringLiteral81681BA542B3287297EFFEAB02258DB1088A6439;
IL2CPP_EXTERN_C String_t* _stringLiteral83F10AF568B5338217F6C94A0CE7AC43A0ECDD9C;
IL2CPP_EXTERN_C String_t* _stringLiteral85BFF7D16D8191ADD4734B73DB4297316500D25A;
IL2CPP_EXTERN_C String_t* _stringLiteral88F1BD8C260CF805C45EA4264672A6AFB579DE27;
IL2CPP_EXTERN_C String_t* _stringLiteral89A8BD29EF1777BB8CE0B08DAA198620E2D6B044;
IL2CPP_EXTERN_C String_t* _stringLiteral8A6FA8BE19B1926FEA2A38F9E216E707834FD8DE;
IL2CPP_EXTERN_C String_t* _stringLiteral8BE9C7BA6299E2F05C746C2E90D82F3E141A498E;
IL2CPP_EXTERN_C String_t* _stringLiteral90A0129D3F3360B19BFECC7D423E939972EB4F2F;
IL2CPP_EXTERN_C String_t* _stringLiteral92C90FD5CE9BDF053ECC0D267132FA650D206E3D;
IL2CPP_EXTERN_C String_t* _stringLiteral9AF9ACF2EC5DF9D149FF233937A249BA67DCEBA7;
IL2CPP_EXTERN_C String_t* _stringLiteralA58644EE4F529728ADFE9649921FDFB428A227E9;
IL2CPP_EXTERN_C String_t* _stringLiteralA76972EA766844797FF5D91D839701611E317C90;
IL2CPP_EXTERN_C String_t* _stringLiteralB02302DD0B4383A93B790E58810D43AAA72A2460;
IL2CPP_EXTERN_C String_t* _stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400;
IL2CPP_EXTERN_C String_t* _stringLiteralBD97A5D2905749283CE4B6353C0A032649F88DF1;
IL2CPP_EXTERN_C String_t* _stringLiteralBE48BAD15E291EBD88348CDC98CC669B67751ECA;
IL2CPP_EXTERN_C String_t* _stringLiteralC48C4C94F80A2D5A88C4CC6D7D22617ED7CFED5D;
IL2CPP_EXTERN_C String_t* _stringLiteralC64F769474644BE4BE5165B07974FC35E271DF0E;
IL2CPP_EXTERN_C String_t* _stringLiteralC742BC3216FA8DFB66453C121F52BDD7F9AEAA09;
IL2CPP_EXTERN_C String_t* _stringLiteralC7AA93599C1CC8CBA96C61B824072A0A7C357B71;
IL2CPP_EXTERN_C String_t* _stringLiteralD0463FCE28FDE37EFF0CF69F3E026C08E10AE6B4;
IL2CPP_EXTERN_C String_t* _stringLiteralD9B94A57BAE5E2EF015C7903D5808B129F9B0E6F;
IL2CPP_EXTERN_C String_t* _stringLiteralDB43BB3E8DECD1C09712166B30EDD7E49C0204E3;
IL2CPP_EXTERN_C String_t* _stringLiteralDCB6E4543D22E141622A74A3EA9CBCF5004EA31D;
IL2CPP_EXTERN_C String_t* _stringLiteralDF9B5C5B62CEB0019EB41C5D34B870871605A796;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE714AEC78F51EED2CD41D8AA780CD55E2FE8CB84;
IL2CPP_EXTERN_C String_t* _stringLiteralF2994E03D13BCF6639D664F7EE48FA731C89F16A;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisTextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD_mAB54F4309F1D69C2A9CD71148D739E60C5916B89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mA5D6155BB759AB3C5A4B20023650F2F6060AD74C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m95E3340366C42C0FCFACE7A6B2F65B00459E8CD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m32DC218761A46EBB56071AEE546588E3DA5AA4EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m7406D4DCC9D0DFC5982B9AEFF7E330D44E5F6A04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_mBEC87DD291ED9662B46356519E0723C0ABB12877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m2538E7DD406AA91FEB21E2D227CCC1BBE333539A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF965509752233B275EEAC4A67A506D223293212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetTextureDataStreamU3Eb__1_0_m0DF46FDD93222AE207D05BBB7D4F04C0EC780A31_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TextureMapperU5BU5D_t35F575F1D951980713D2A9E7D85F6AE82ABEA79C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA9AE2B15F1F3A05BB34DCA746BA406B7E2FC50F7 
{
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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___s_emptyArray_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tF4948991C29E45F5286F574D6E7E7253A00DDAAC  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// TriLibCore.Textures.DefaultTextures
struct DefaultTextures_t9F7963EFF6D07A26D5269416038D740C641C6D8B  : public RuntimeObject
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

// StbImageSharp.StbImage
struct StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A  : public RuntimeObject
{
};

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

// TriLibCore.Textures.TextureLoaders
struct TextureLoaders_t2576B23C7D1B41DE9DDACF252537B28ACCA196C2  : public RuntimeObject
{
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

// TriLibCore.Utils.TextureUtils
struct TextureUtils_t0EDBEC7D1BDF7F39CE581EFEF9E3D6AD2601928B  : public RuntimeObject
{
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

// TriLibCore.Textures.TextureLoaders/<>c
struct U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251  : public RuntimeObject
{
};

struct U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251_StaticFields
{
	// TriLibCore.Textures.TextureLoaders/<>c TriLibCore.Textures.TextureLoaders/<>c::<>9
	U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251* ___U3CU3E9_0;
	// System.Comparison`1<TriLibCore.Mappers.TextureMapper> TriLibCore.Textures.TextureLoaders/<>c::<>9__1_0
	Comparison_1_tC7A2B9CAE6FE5036370E20D7A75E1B055DB230FB* ___U3CU3E9__1_0_1;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.UInt16>
struct NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
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

// System.Nullable`1<StbImageSharp.ImageInfo>
struct Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C ___value_1;
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

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_8;
	// System.String System.IO.FileStream::name
	String_t* ___name_9;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_10;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_11;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_12;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_13;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_14;
	// System.Boolean System.IO.FileStream::async
	bool ___async_15;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_16;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_17;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_18;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_19;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_20;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_21;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_22;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_6;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_7;
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

// TriLibCore.General.VirtualMaterial
struct VirtualMaterial_t0610B7A6460E24DADF06569B4DA1D9FC487A52DB  : public RuntimeObject
{
	// System.Boolean TriLibCore.General.VirtualMaterial::HasAlpha
	bool ___HasAlpha_0;
	// UnityEngine.MaterialGlobalIlluminationFlags TriLibCore.General.VirtualMaterial::GlobalIlluminationFlags
	int32_t ___GlobalIlluminationFlags_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> TriLibCore.General.VirtualMaterial::<FloatProperties>k__BackingField
	Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* ___U3CFloatPropertiesU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Vector3> TriLibCore.General.VirtualMaterial::<VectorProperties>k__BackingField
	Dictionary_2_t1B115DB96F2674765975721520F73253084A610E* ___U3CVectorPropertiesU3Ek__BackingField_3;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color> TriLibCore.General.VirtualMaterial::<ColorProperties>k__BackingField
	Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* ___U3CColorPropertiesU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture> TriLibCore.General.VirtualMaterial::<TextureProperties>k__BackingField
	Dictionary_2_t2E06FE62EACD0AB250C1C292D1592E12210C876D* ___U3CTexturePropertiesU3Ek__BackingField_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> TriLibCore.General.VirtualMaterial::<Keywords>k__BackingField
	Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* ___U3CKeywordsU3Ek__BackingField_6;
	// System.Collections.Generic.HashSet`1<TriLibCore.General.GenericMaterialProperty> TriLibCore.General.VirtualMaterial::<_genericMaterialProperties>k__BackingField
	HashSet_1_t957C99973D0A3BCF1BB5FECDAF5541AE077491B3* ___U3C_genericMaterialPropertiesU3Ek__BackingField_7;
	// System.Boolean TriLibCore.General.VirtualMaterial::<HasEmissionColor>k__BackingField
	bool ___U3CHasEmissionColorU3Ek__BackingField_8;
	// UnityEngine.Vector2 TriLibCore.General.VirtualMaterial::Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Offset_9;
	// UnityEngine.Vector2 TriLibCore.General.VirtualMaterial::Tiling
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Tiling_10;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Comparison`1<TriLibCore.Mappers.TextureMapper>
struct Comparison_1_tC7A2B9CAE6FE5036370E20D7A75E1B055DB230FB  : public MulticastDelegate_t
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

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// TriLibCore.Mappers.TextureMapper
struct TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 TriLibCore.Mappers.TextureMapper::CheckingOrder
	int32_t ___CheckingOrder_4;
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
// TriLibCore.Mappers.TextureMapper[]
struct TextureMapperU5BU5D_t35F575F1D951980713D2A9E7D85F6AE82ABEA79C  : public RuntimeArray
{
	ALIGN_FIELD (8) TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD* m_Items[1];

	inline TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<System.UInt16>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 Texture2D_GetRawTextureData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m2538E7DD406AA91FEB21E2D227CCC1BBE333539A_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixelData<System.Byte>(Unity.Collections.NativeArray`1<T>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF965509752233B275EEAC4A67A506D223293212_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___data0, int32_t ___mipLevel1, int32_t ___sourceDataStartIndex2, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<System.UInt16>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_gshared (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<System.Byte>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Single>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared (Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Array::Sort<System.Object>(T[],System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisRuntimeObject_mFC83E20748A5276FAA7611C2DCFCAE00737CF389_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___comparison1, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___nativeArray0, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.UInt16>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m95E3340366C42C0FCFACE7A6B2F65B00459E8CD7_gshared (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___nativeArray0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<StbImageSharp.ImageInfo>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m32DC218761A46EBB56071AEE546588E3DA5AA4EA_gshared_inline (Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<StbImageSharp.ImageInfo>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C Nullable_1_get_Value_m7406D4DCC9D0DFC5982B9AEFF7E330D44E5F6A04_gshared (Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A* __this, const RuntimeMethod* method) ;

// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Log_m116F062EEBF1C53EC8D18C9B1748E999EF9424EF_inline (float ___f0, float ___p1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___f0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.TextureLoadingContext::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureLoadingContext_get_Width_mA97228B3507021003BB6FA170C579CAFC7DE6452 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.TextureLoadingContext::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureLoadingContext_get_Height_m8280F4A60EBAB6EF724624FA3E8E3647D44A9CBF (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Utils.TextureUtils::IsPOT(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureUtils_IsPOT_m7E7E021FAF700FFB7592CE9B7AD40F8F04F1D6E1 (int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_mE38154E9B9C810EDAF2FAD3E1F1CD856FFC13F3C (int32_t ___format0, bool ___isSRGB1, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.SystemInfo::GetCompatibleFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_GetCompatibleFormat_m3A1DEC64F2C85F1D7C45005009D93EFA33C8419B (int32_t ___format0, int32_t ___usage1, const RuntimeMethod* method) ;
// TriLibCore.AssetLoaderContext TriLibCore.TextureLoadingContext::get_Context()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Utils.TextureUtils::IsPOT(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureUtils_IsPOT_m8113C77680B9B5DAC8858C47622D26E0279DFB1F (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) ;
// UnityEngine.RenderTextureFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetRenderTextureFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetRenderTextureFormat_mA538222F90B6079E95ADA1DFB3DDDA740B27D8D5 (int32_t ___format0, const RuntimeMethod* method) ;
// UnityEngine.Texture TriLibCore.TextureLoadingContext::get_UnityTexture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.TextureLoadingContext::get_TextureLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureLoadingContext_get_TextureLoaded_mFF7B26EBD3967A77B57EA89655DBB05346869099 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.TextureLoadingContext::get_TextureCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureLoadingContext_get_TextureCreated_m85EC62E8BE3819F43F3FE36FA7B67BCCCB52D477 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.ITexture TriLibCore.TextureLoadingContext::get_Texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat TriLibCore.Utils.TextureUtils::GetTextureFormat(UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureUtils_GetTextureFormat_m7DB927FFB07FE206055A7279147283088D7E7615 (int32_t ___textureFormat0, bool ___sRGB1, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.TextureCreationFlags TriLibCore.Utils.TextureUtils::GetTextureCreationFlags(TriLibCore.TextureLoadingContext,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureUtils_GetTextureCreationFlags_mE926ABDC070F5AFCEA33C0BFE8C1B231CCAF21BC (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, bool ___forceMipMap1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Texture2D TriLibCore.Utils.TextureUtils::CreateTexture2DInternal(System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TextureUtils_CreateTexture2DInternal_mF98DDB574290DFF452A9F2C4D7ACB06C11D64766 (int32_t ___width0, int32_t ___height1, int32_t ___graphicsFormat2, int32_t ___textureCreationFlags3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapModeU(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapModeU_m2002CCB73143182032BD5ED6C80AB9A0ED2A0981 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapModeV(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapModeV_m3C79177BAE70103DDBF871896AF464513A0F919D (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::Add(T)
inline void List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_inline (List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void TriLibCore.TextureLoadingContext::set_UnityTexture(UnityEngine.Texture)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextureLoadingContext_set_UnityTexture_m13DB98CE54BCBBFE76226206AFAFD0107CB67F28_inline (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.TextureLoadingContext::set_OriginalUnityTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLoadingContext_set_OriginalUnityTexture_m0E6FED96E3EFEA11E6D2C604B6005E4621DBBFEE (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Texture TriLibCore.TextureLoadingContext::get_OriginalUnityTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<System.UInt16>()
inline NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 Texture2D_GetRawTextureData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m2538E7DD406AA91FEB21E2D227CCC1BBE333539A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))Texture2D_GetRawTextureData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m2538E7DD406AA91FEB21E2D227CCC1BBE333539A_gshared)(__this, method);
}
// System.Void TriLibCore.TextureLoadingContext::set_Data16(Unity.Collections.NativeArray`1<System.UInt16>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLoadingContext_set_Data16_mB2A2ED617458B751801C52C40645316E9A5D3508 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___value0, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
inline NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_gshared)(__this, method);
}
// System.Void TriLibCore.TextureLoadingContext::set_Data(Unity.Collections.NativeArray`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLoadingContext_set_Data_mB945A47C469AC31920E6BFAE8F39717D8AFBCA3D (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.TextureLoadingContext::set_TextureCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLoadingContext_set_TextureCreated_mF2FAE8B1A18D9796D420B8E0A6405B56438FE4A5 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.TextureLoadingContext::get_Components()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureLoadingContext_get_Components_mCFF27AD976FCED0158744EA1FFCAE082D2E726DB (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<System.Byte> TriLibCore.TextureLoadingContext::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF TextureLoadingContext_get_Data_m0D5DEF2219C7DA98B6D4F26BDC420505511B67A5 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixelData<System.Byte>(Unity.Collections.NativeArray`1<T>,System.Int32,System.Int32)
inline void Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF965509752233B275EEAC4A67A506D223293212 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___data0, int32_t ___mipLevel1, int32_t ___sourceDataStartIndex2, const RuntimeMethod* method)
{
	((  void (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, int32_t, int32_t, const RuntimeMethod*))Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF965509752233B275EEAC4A67A506D223293212_gshared)(__this, ___data0, ___mipLevel1, ___sourceDataStartIndex2, method);
}
// System.Void TriLibCore.TextureLoadingContext::set_Width(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLoadingContext_set_Width_mB440C3BFD9C3B6A8549A1683AECEBFB53D2A46E8 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.TextureLoadingContext::set_Height(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLoadingContext_set_Height_m1D34AA8DF31E3CBCF05DB30074902A105D014EBE (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.TextureLoadingContext::set_TextureLoaded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLoadingContext_set_TextureLoaded_m84833D48774241C258393DA527A252C3856BB0B0 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Utils.TextureUtils::CanCompress(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureUtils_CanCompress_mD30F006F690E3207FC6D574001B7FD2EBAA335FB (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.IO.Stream TriLibCore.TextureLoadingContext::get_Stream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* TextureLoadingContext_get_Stream_mE9C57E3F000BF1B2FAC22B4740F4CB7F0284885E (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, const RuntimeMethod* method) ;
// System.Byte[] TriLibCore.Utils.FileUtils::LoadFileData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FileUtils_LoadFileData_mEA29191295ED98274F30148FC24EEA9F44C3629F (String_t* ___filename0, const RuntimeMethod* method) ;
// System.Byte[] TriLibCore.Extensions.StreamExtensions::ReadBytes(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* StreamExtensions_ReadBytes_mBC510C36CF2079D203C034809EB0B5F9C94ACAED (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m292ADCEED268A0A0AAD532BAB8D1710CF0FC8AEF (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, bool ___markNonReadable2, const RuntimeMethod* method) ;
// System.Int32 System.GC::get_MaxGeneration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GC_get_MaxGeneration_mC974FB6C41BC0F65458B4F5843029D58EBCD963A (const RuntimeMethod* method) ;
// System.Void System.GC::Collect(System.Int32,System.GCCollectionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_Collect_m00001875A744C22341092FFCC01615C8F498C5D0 (int32_t ___generation0, int32_t ___mode1, bool ___blocking2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Byte[] TriLibCore.AssetLoaderContext::GetBufferFromPool(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AssetLoaderContext_GetBufferFromPool_m52A8FD1B99CB43A719BD7180F71B6DE5332C1F5A (AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* __this, int32_t ___length0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Utils.TextureUtils::GetNextPOT(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureUtils_GetNextPOT_mF5D19AEB8A475ED1649E7B9EAE398D47E86E81E9 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<System.UInt16> TriLibCore.TextureLoadingContext::get_Data16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 TextureLoadingContext_get_Data16_mAEE42E9D8D090F7A705717C961B8BBE9A43E2367 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<System.UInt16>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_gshared)(__this, method);
}
// UnityEngine.RenderTextureFormat TriLibCore.Utils.TextureUtils::GetRenderTextureFormat(UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureUtils_GetRenderTextureFormat_m1CF6BD674771B5338D720471A2DFEEC9B20C9EA9 (int32_t ___textureFormat0, bool ___sRGB1, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Utils.TextureUtils::CopyTextureCPU(UnityEngine.RenderTexture,UnityEngine.Texture2D,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtils_CopyTextureCPU_mC3809064E929C374F1AC7C30F0D070A5D82F6179 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___from0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___to1, bool ___updateMipMaps2, bool ___makeNoLongerReadable3, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___temp0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Object>::Remove(T)
inline bool List_1_Remove_mA5D6155BB759AB3C5A4B20023650F2F6060AD74C (List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Boolean Unity.Collections.NativeArray`1<System.Byte>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_gshared)(__this, method);
}
// System.Void TriLibCore.Utils.TextureUtils::ApplyTexture2D(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtils_ApplyTexture2D_m77B80263F99FDEA58D10718F3503C08051FD66F0 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Compress(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Compress_m8681BBBAFCF43212ACCFA81F82E0F34720640F87 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___highQuality0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___source0, int32_t ___destX1, int32_t ___destY2, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_mA6619EA324AAE80B6892107C6968092F6F1B4C45 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, int32_t ___readWrite4, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RenderTexture::IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_IsCreated_mB69D4DBD99D74AA5D1F3C9E84A08D6744A031006 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_useMipMap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_useMipMap_mB280A39DAB18372D3A0050FF20F730E5B0B44C32 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_autoGenerateMips(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_autoGenerateMips_mDEFAC13954D315DE52B35B34577218D3AD4897A9 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RenderTexture::get_useMipMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_get_useMipMap_m76150AD5CF0192BC8DAC05522302D9C13ECD07D7 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::GenerateMips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_GenerateMips_m107161ADCD61031F2DF07209C0CA096E9908D4F5 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTexture::get_graphicsFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTexture_get_graphicsFormat_m615EA91709BD404765C0C85425CE5F3575F90302 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_SetRenderTarget_m995C0F14B97C5BF46CCF2E7EF410C1CC05C46409 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___rt0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Single>::GetValueOrDefault()
inline float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline)(__this, method);
}
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10 (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m2E76254260C768B5D64D1664EE3929D198766CEF (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, int32_t ___flags3, const RuntimeMethod* method) ;
// System.String TriLibCore.Utils.FileUtils::GetFileExtension(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileUtils_GetFileExtension_mE4822C0AEF1DD8417DA323CA947E741082724F99 (String_t* ___path0, bool ___includeDot1, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mA752F30BB532F6C12210325313DFE69610E47C00 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.Texture2D>(System.String)
inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Resources_Load_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_mBEC87DD291ED9662B46356519E0723C0ABB12877 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___path0, method);
}
// System.Boolean TriLibCore.Textures.TextureLoaders::GetTextureDataStream(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureLoaders_GetTextureDataStream_m3781D420FF33A5EBB09751F469D7618D766AC92D (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) ;
// System.Void TriLibCore.TextureLoadingContext::set_Components(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLoadingContext_set_Components_m50A17BEC6DFF8A4EA836B91B4E37585476903D82 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Utils.TextureUtils::LoadTexture2D(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtils_LoadTexture2D_m322A10470887F79499FFC5771A7080FAD98DBE54 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Extensions.StreamExtensions::TryToDispose(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamExtensions_TryToDispose_m30F77959B00471F7DD1125E19D84E0D66A401569 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Textures.TextureLoaders::StbLoadFromContext(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLoaders_StbLoadFromContext_m06C68ACDAC5D824E69BC7C9DC999768194FBEA97 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<TriLibCore.Mappers.TextureMapper>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_mAC4EEA44D50605085A3A5893F2C062C78AECE1A5 (Comparison_1_tC7A2B9CAE6FE5036370E20D7A75E1B055DB230FB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_tC7A2B9CAE6FE5036370E20D7A75E1B055DB230FB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Array::Sort<TriLibCore.Mappers.TextureMapper>(T[],System.Comparison`1<T>)
inline void Array_Sort_TisTextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD_mAB54F4309F1D69C2A9CD71148D739E60C5916B89 (TextureMapperU5BU5D_t35F575F1D951980713D2A9E7D85F6AE82ABEA79C* ___array0, Comparison_1_tC7A2B9CAE6FE5036370E20D7A75E1B055DB230FB* ___comparison1, const RuntimeMethod* method)
{
	((  void (*) (TextureMapperU5BU5D_t35F575F1D951980713D2A9E7D85F6AE82ABEA79C*, Comparison_1_tC7A2B9CAE6FE5036370E20D7A75E1B055DB230FB*, const RuntimeMethod*))Array_Sort_TisRuntimeObject_mFC83E20748A5276FAA7611C2DCFCAE00737CF389_gshared)(___array0, ___comparison1, method);
}
// System.String TriLibCore.Utils.FileUtils::FindFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileUtils_FindFile_mB6CBF23E36940B23002033FFA8C86C33576152C4 (String_t* ___basePath0, String_t* ___originalPath1, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m158997E4E7ADD1BA5E75F4835882E32137ACB3C9 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, const RuntimeMethod* method) ;
// System.Void TriLibCore.TextureLoadingContext::set_Stream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLoadingContext_set_Stream_m9A8D352CE35209D3190A3006F37C67F0C64A12B2 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___value0, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.TextureLoadingContext::get_HasAlpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureLoadingContext_get_HasAlpha_mEFAB62D139DF09A8960699A928032C87FD307908 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.TextureLoadingContext::set_HasAlpha(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLoadingContext_set_HasAlpha_m432BAE8721E1C749AC8C13899A33F9C90BE3752A (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void StbImageSharp.StbImage/stbi__context::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stbi__context__ctor_mC829A0366DACB27129BF977D4B90B9C2326DD40F (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Void StbImageSharp.StbImage::stbi_set_flip_vertically_on_load(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StbImage_stbi_set_flip_vertically_on_load_mBFA93F59A9C3BD919D1E377EB72482FBA885B089 (int32_t ___flag_true_if_should_flip0, const RuntimeMethod* method) ;
// System.Void* StbImageSharp.StbImage::stbi__load_and_postprocess(StbImageSharp.StbImage/stbi__context,System.Int32*,System.Int32*,System.Int32*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* StbImage_stbi__load_and_postprocess_mE51FEBF5B71BD457A7E4D4477090C93341BBC2B0 (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ___s0, int32_t* ___x1, int32_t* ___y2, int32_t* ___comp3, int32_t ___req_comp4, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared)(___nativeArray0, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.UInt16>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m95E3340366C42C0FCFACE7A6B2F65B00459E8CD7 (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m95E3340366C42C0FCFACE7A6B2F65B00459E8CD7_gshared)(___nativeArray0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.CRuntime::free(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_free_m9820C32B8AB5BB989140A905BE68364EDAFBD15D (void* ___a0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, int32_t ___share3, const RuntimeMethod* method) ;
// System.Int32 StbImageSharp.StbImage::stbi__jpeg_info(StbImageSharp.StbImage/stbi__context,System.Int32*,System.Int32*,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StbImage_stbi__jpeg_info_m2A16EACADB7E412F1A15E09E73C73C9CEA5ECC95 (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ___s0, int32_t* ___x1, int32_t* ___y2, int32_t* ___comp3, const RuntimeMethod* method) ;
// System.Int32 StbImageSharp.StbImage::stbi__png_info(StbImageSharp.StbImage/stbi__context,System.Int32*,System.Int32*,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StbImage_stbi__png_info_m9ADDC29EE32885099EF4E91A948E4153EE37ECD0 (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ___s0, int32_t* ___x1, int32_t* ___y2, int32_t* ___comp3, const RuntimeMethod* method) ;
// System.Nullable`1<StbImageSharp.ImageInfo> StbImageSharp.ImageInfo::FromStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A ImageInfo_FromStream_m6235964F45A8A7C0AAB2046E9016131BC3325567 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<StbImageSharp.ImageInfo>::get_HasValue()
inline bool Nullable_1_get_HasValue_m32DC218761A46EBB56071AEE546588E3DA5AA4EA_inline (Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A*, const RuntimeMethod*))Nullable_1_get_HasValue_m32DC218761A46EBB56071AEE546588E3DA5AA4EA_gshared_inline)(__this, method);
}
// T System.Nullable`1<StbImageSharp.ImageInfo>::get_Value()
inline ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C Nullable_1_get_Value_m7406D4DCC9D0DFC5982B9AEFF7E330D44E5F6A04 (Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A* __this, const RuntimeMethod* method)
{
	return ((  ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C (*) (Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A*, const RuntimeMethod*))Nullable_1_get_Value_m7406D4DCC9D0DFC5982B9AEFF7E330D44E5F6A04_gshared)(__this, method);
}
// System.Void TriLibCore.Utils.TextureUtils::CreateTexture2D(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtils_CreateTexture2D_m2E6871367C92B01C90057E769A14D214C215D617 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Textures.TextureLoaders/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6C9E79750343BD6E3F0B41906F4791670A48A0E1 (U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Double System.Math::Log(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Log_m5A3BBBF06AB82F25C885812E07D27B473CF43054 (double ___a0, double ___newBase1, const RuntimeMethod* method) ;
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
// System.Boolean TriLibCore.Utils.TextureUtils::IsPOT(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureUtils_IsPOT_m7E7E021FAF700FFB7592CE9B7AD40F8F04F1D6E1 (int32_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Log_m116F062EEBF1C53EC8D18C9B1748E999EF9424EF_inline(((float)L_0), (2.0f), NULL);
		int32_t L_2;
		L_2 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(L_1, NULL);
		int32_t L_3 = ___value0;
		float L_4;
		L_4 = Mathf_Log_m116F062EEBF1C53EC8D18C9B1748E999EF9424EF_inline(((float)L_3), (2.0f), NULL);
		int32_t L_5;
		L_5 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(L_4, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)L_5))? 1 : 0);
		goto IL_0028;
	}

IL_0028:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean TriLibCore.Utils.TextureUtils::IsPOT(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureUtils_IsPOT_m8113C77680B9B5DAC8858C47622D26E0279DFB1F (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_0 = ___textureLoadingContext0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TextureLoadingContext_get_Width_mA97228B3507021003BB6FA170C579CAFC7DE6452(L_0, NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_2 = ___textureLoadingContext0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TextureLoadingContext_get_Height_m8280F4A60EBAB6EF724624FA3E8E3647D44A9CBF(L_2, NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_3) > ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0040;
	}

IL_0022:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_5 = ___textureLoadingContext0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = TextureLoadingContext_get_Width_mA97228B3507021003BB6FA170C579CAFC7DE6452(L_5, NULL);
		bool L_7;
		L_7 = TextureUtils_IsPOT_m7E7E021FAF700FFB7592CE9B7AD40F8F04F1D6E1(L_6, NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_8 = ___textureLoadingContext0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = TextureLoadingContext_get_Height_m8280F4A60EBAB6EF724624FA3E8E3647D44A9CBF(L_8, NULL);
		bool L_10;
		L_10 = TextureUtils_IsPOT_m7E7E021FAF700FFB7592CE9B7AD40F8F04F1D6E1(L_9, NULL);
		G_B8_0 = ((int32_t)(L_10));
		goto IL_003d;
	}

IL_003c:
	{
		G_B8_0 = 0;
	}

IL_003d:
	{
		V_1 = (bool)G_B8_0;
		goto IL_0040;
	}

IL_0040:
	{
		bool L_11 = V_1;
		return L_11;
	}
}
// System.Int32 TriLibCore.Utils.TextureUtils::GetNextPOT(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureUtils_GetNextPOT_mF5D19AEB8A475ED1649E7B9EAE398D47E86E81E9 (int32_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___value0;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		V_1 = 1;
		goto IL_002e;
	}

IL_000e:
	{
		int32_t L_2 = ___value0;
		float L_3;
		L_3 = Mathf_Log_m116F062EEBF1C53EC8D18C9B1748E999EF9424EF_inline(((float)((int32_t)il2cpp_codegen_subtract(L_2, 1))), (2.0f), NULL);
		float L_4;
		L_4 = powf((2.0f), ((float)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_3), 1))));
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_4);
		goto IL_002e;
	}

IL_002e:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.Experimental.Rendering.GraphicsFormat TriLibCore.Utils.TextureUtils::GetTextureFormat(UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureUtils_GetTextureFormat_m7DB927FFB07FE206055A7279147283088D7E7615 (int32_t ___textureFormat0, bool ___sRGB1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___textureFormat0;
		bool L_1 = ___sRGB1;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = GraphicsFormatUtility_GetGraphicsFormat_mE38154E9B9C810EDAF2FAD3E1F1CD856FFC13F3C(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = SystemInfo_GetCompatibleFormat_m3A1DEC64F2C85F1D7C45005009D93EFA33C8419B(L_3, 0, NULL);
		V_1 = L_4;
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.Experimental.Rendering.TextureCreationFlags TriLibCore.Utils.TextureUtils::GetTextureCreationFlags(TriLibCore.TextureLoadingContext,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureUtils_GetTextureCreationFlags_mE926ABDC070F5AFCEA33C0BFE8C1B231CCAF21BC (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, bool ___forceMipMap1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B14_0 = 0;
	{
		V_0 = 0;
		bool L_0 = ___forceMipMap1;
		if (L_0)
		{
			goto IL_0071;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_1 = ___textureLoadingContext0;
		NullCheck(L_1);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_2;
		L_2 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_1, NULL);
		NullCheck(L_2);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_3 = L_2->___Options_34;
		NullCheck(L_3);
		bool L_4 = L_3->___UseUnityNativeTextureLoader_86;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_5 = ___textureLoadingContext0;
		NullCheck(L_5);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_6;
		L_6 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_5, NULL);
		NullCheck(L_6);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_7 = L_6->___Options_34;
		NullCheck(L_7);
		bool L_8 = L_7->___GenerateMipmaps_43;
		if (L_8)
		{
			goto IL_0071;
		}
	}

IL_002a:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_9 = ___textureLoadingContext0;
		NullCheck(L_9);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_10;
		L_10 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_9, NULL);
		NullCheck(L_10);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_11 = L_10->___Options_34;
		NullCheck(L_11);
		bool L_12 = L_11->___GenerateMipmaps_43;
		if (!L_12)
		{
			goto IL_006e;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_13 = ___textureLoadingContext0;
		NullCheck(L_13);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_14;
		L_14 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_13, NULL);
		NullCheck(L_14);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_15 = L_14->___Options_34;
		NullCheck(L_15);
		int32_t L_16 = L_15->___TextureCompressionQuality_42;
		if (!L_16)
		{
			goto IL_006b;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_17 = ___textureLoadingContext0;
		NullCheck(L_17);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_18;
		L_18 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_17, NULL);
		NullCheck(L_18);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_19 = L_18->___Options_34;
		NullCheck(L_19);
		bool L_20 = L_19->___ForcePowerOfTwoTextures_83;
		if (L_20)
		{
			goto IL_0068;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_21 = ___textureLoadingContext0;
		bool L_22;
		L_22 = TextureUtils_IsPOT_m8113C77680B9B5DAC8858C47622D26E0279DFB1F(L_21, NULL);
		G_B8_0 = ((int32_t)(L_22));
		goto IL_0069;
	}

IL_0068:
	{
		G_B8_0 = 0;
	}

IL_0069:
	{
		G_B10_0 = G_B8_0;
		goto IL_006c;
	}

IL_006b:
	{
		G_B10_0 = 1;
	}

IL_006c:
	{
		G_B12_0 = G_B10_0;
		goto IL_006f;
	}

IL_006e:
	{
		G_B12_0 = 0;
	}

IL_006f:
	{
		G_B14_0 = G_B12_0;
		goto IL_0072;
	}

IL_0071:
	{
		G_B14_0 = 1;
	}

IL_0072:
	{
		V_1 = (bool)G_B14_0;
		bool L_23 = V_1;
		if (!L_23)
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)((int32_t)L_24|1));
	}

IL_007c:
	{
		int32_t L_25 = V_0;
		V_2 = L_25;
		goto IL_0080;
	}

IL_0080:
	{
		int32_t L_26 = V_2;
		return L_26;
	}
}
// UnityEngine.RenderTextureFormat TriLibCore.Utils.TextureUtils::GetRenderTextureFormat(UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureUtils_GetRenderTextureFormat_m1CF6BD674771B5338D720471A2DFEEC9B20C9EA9 (int32_t ___textureFormat0, bool ___sRGB1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___textureFormat0;
		bool L_1 = ___sRGB1;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = GraphicsFormatUtility_GetGraphicsFormat_mE38154E9B9C810EDAF2FAD3E1F1CD856FFC13F3C(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = GraphicsFormatUtility_GetRenderTextureFormat_mA538222F90B6079E95ADA1DFB3DDDA740B27D8D5(L_3, NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_2 = L_5;
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_6 = V_2;
		return L_6;
	}
}
// System.Void TriLibCore.Utils.TextureUtils::CreateTexture2D(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtils_CreateTexture2D_m2E6871367C92B01C90057E769A14D214C215D617 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_GetRawTextureData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m2538E7DD406AA91FEB21E2D227CCC1BBE333539A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureCreationFlags_t7671FF285C96A03BDCD7BA2F50388C09ED4A54A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC64F769474644BE4BE5165B07974FC35E271DF0E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_6 = NULL;
	String_t* V_7 = NULL;
	bool V_8 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	String_t* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B15_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B15_3 = NULL;
	String_t* G_B15_4 = NULL;
	String_t* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B14_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B14_3 = NULL;
	String_t* G_B14_4 = NULL;
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_0 = ___textureLoadingContext0;
		NullCheck(L_0);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1;
		L_1 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_3 = ___textureLoadingContext0;
		NullCheck(L_3);
		bool L_4;
		L_4 = TextureLoadingContext_get_TextureLoaded_mFF7B26EBD3967A77B57EA89655DBB05346869099(L_3, NULL);
		if (L_4)
		{
			goto IL_001f;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_5 = ___textureLoadingContext0;
		NullCheck(L_5);
		bool L_6;
		L_6 = TextureLoadingContext_get_TextureCreated_m85EC62E8BE3819F43F3FE36FA7B67BCCCB52D477(L_5, NULL);
		G_B4_0 = ((int32_t)(L_6));
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 1;
	}

IL_0020:
	{
		V_4 = (bool)G_B4_0;
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_01af;
	}

IL_002c:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_8 = ___textureLoadingContext0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___CreationBytesPerPixel_7;
		if ((((int32_t)L_9) == ((int32_t)8)))
		{
			goto IL_0038;
		}
	}
	{
		G_B9_0 = 4;
		goto IL_003a;
	}

IL_0038:
	{
		G_B9_0 = ((int32_t)17);
	}

IL_003a:
	{
		V_0 = G_B9_0;
		int32_t L_10 = V_0;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_11 = ___textureLoadingContext0;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_11, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(23 /* TriLibCore.General.TextureFormat TriLibCore.Interfaces.ITexture::get_TextureFormat() */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_12);
		G_B10_0 = L_10;
		if ((((int32_t)L_13) == ((int32_t)1)))
		{
			G_B11_0 = L_10;
			goto IL_005c;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_14 = ___textureLoadingContext0;
		NullCheck(L_14);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_15;
		L_15 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_14, NULL);
		NullCheck(L_15);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_16 = L_15->___Options_34;
		NullCheck(L_16);
		bool L_17 = L_16->___LoadTexturesAsSRGB_77;
		G_B12_0 = ((int32_t)(L_17));
		G_B12_1 = G_B10_0;
		goto IL_005d;
	}

IL_005c:
	{
		G_B12_0 = 0;
		G_B12_1 = G_B11_0;
	}

IL_005d:
	{
		int32_t L_18;
		L_18 = TextureUtils_GetTextureFormat_m7DB927FFB07FE206055A7279147283088D7E7615(G_B12_1, (bool)G_B12_0, NULL);
		V_1 = L_18;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_19 = ___textureLoadingContext0;
		int32_t L_20;
		L_20 = TextureUtils_GetTextureCreationFlags_mE926ABDC070F5AFCEA33C0BFE8C1B231CCAF21BC(L_19, (bool)0, NULL);
		V_2 = L_20;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_21 = ___textureLoadingContext0;
		NullCheck(L_21);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_22;
		L_22 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_21, NULL);
		NullCheck(L_22);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_23 = L_22->___Options_34;
		NullCheck(L_23);
		bool L_24 = L_23->___ShowLoadingWarnings_65;
		V_5 = L_24;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00de;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_26;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_28 = ___textureLoadingContext0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = TextureLoadingContext_get_Width_mA97228B3507021003BB6FA170C579CAFC7DE6452(L_28, NULL);
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_31);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_27;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_33 = ___textureLoadingContext0;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = TextureLoadingContext_get_Height_m8280F4A60EBAB6EF724624FA3E8E3647D44A9CBF(L_33, NULL);
		int32_t L_35 = L_34;
		RuntimeObject* L_36 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_36);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_36);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_32;
		int32_t L_38 = V_1;
		int32_t L_39 = L_38;
		RuntimeObject* L_40 = Box(GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_40);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = L_37;
		int32_t L_42 = V_2;
		int32_t L_43 = L_42;
		RuntimeObject* L_44 = Box(TextureCreationFlags_t7671FF285C96A03BDCD7BA2F50388C09ED4A54A3_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_44);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = L_41;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_46 = ___textureLoadingContext0;
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_46, NULL);
		NullCheck(L_47);
		String_t* L_48;
		L_48 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String TriLibCore.Interfaces.IObject::get_Name() */, IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var, L_47);
		String_t* L_49 = L_48;
		G_B14_0 = L_49;
		G_B14_1 = 4;
		G_B14_2 = L_45;
		G_B14_3 = L_45;
		G_B14_4 = _stringLiteralC64F769474644BE4BE5165B07974FC35E271DF0E;
		if (L_49)
		{
			G_B15_0 = L_49;
			G_B15_1 = 4;
			G_B15_2 = L_45;
			G_B15_3 = L_45;
			G_B15_4 = _stringLiteralC64F769474644BE4BE5165B07974FC35E271DF0E;
			goto IL_00d1;
		}
	}
	{
		G_B15_0 = _stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400;
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
		G_B15_3 = G_B14_3;
		G_B15_4 = G_B14_4;
	}

IL_00d1:
	{
		NullCheck(G_B15_2);
		ArrayElementTypeCheck (G_B15_2, G_B15_0);
		(G_B15_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B15_1), (RuntimeObject*)G_B15_0);
		String_t* L_50;
		L_50 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(G_B15_4, G_B15_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_50, NULL);
	}

IL_00de:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_51 = ___textureLoadingContext0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = TextureLoadingContext_get_Width_mA97228B3507021003BB6FA170C579CAFC7DE6452(L_51, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_53 = ___textureLoadingContext0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = TextureLoadingContext_get_Height_m8280F4A60EBAB6EF724624FA3E8E3647D44A9CBF(L_53, NULL);
		int32_t L_55 = V_1;
		int32_t L_56 = V_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_57;
		L_57 = TextureUtils_CreateTexture2DInternal_mF98DDB574290DFF452A9F2C4D7ACB06C11D64766(L_52, L_54, L_55, L_56, NULL);
		V_3 = L_57;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_58 = V_3;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_59 = ___textureLoadingContext0;
		NullCheck(L_59);
		RuntimeObject* L_60;
		L_60 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_59, NULL);
		NullCheck(L_60);
		int32_t L_61;
		L_61 = InterfaceFuncInvoker0< int32_t >::Invoke(10 /* UnityEngine.TextureWrapMode TriLibCore.Interfaces.ITexture::get_WrapModeU() */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_60);
		NullCheck(L_58);
		Texture_set_wrapModeU_m2002CCB73143182032BD5ED6C80AB9A0ED2A0981(L_58, L_61, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_62 = V_3;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_63 = ___textureLoadingContext0;
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_63, NULL);
		NullCheck(L_64);
		int32_t L_65;
		L_65 = InterfaceFuncInvoker0< int32_t >::Invoke(12 /* UnityEngine.TextureWrapMode TriLibCore.Interfaces.ITexture::get_WrapModeV() */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_64);
		NullCheck(L_62);
		Texture_set_wrapModeV_m3C79177BAE70103DDBF871896AF464513A0F919D(L_62, L_65, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_66 = ___textureLoadingContext0;
		NullCheck(L_66);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_67;
		L_67 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_66, NULL);
		NullCheck(L_67);
		List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* L_68 = L_67->___Allocations_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_69 = V_3;
		NullCheck(L_68);
		List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_inline(L_68, L_69, List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_70 = ___textureLoadingContext0;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_71 = ___textureLoadingContext0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_72 = V_3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_73 = L_72;
		V_6 = L_73;
		NullCheck(L_71);
		TextureLoadingContext_set_UnityTexture_m13DB98CE54BCBBFE76226206AFAFD0107CB67F28_inline(L_71, L_73, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_74 = V_6;
		NullCheck(L_70);
		TextureLoadingContext_set_OriginalUnityTexture_m0E6FED96E3EFEA11E6D2C604B6005E4621DBBFEE(L_70, L_74, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_75 = ___textureLoadingContext0;
		NullCheck(L_75);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_76;
		L_76 = TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16(L_75, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_77 = ___textureLoadingContext0;
		NullCheck(L_77);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_78;
		L_78 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_77, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_79 = ___textureLoadingContext0;
		NullCheck(L_79);
		RuntimeObject* L_80;
		L_80 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_79, NULL);
		NullCheck(L_80);
		String_t* L_81;
		L_81 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String TriLibCore.Interfaces.IObject::get_Name() */, IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var, L_80);
		String_t* L_82 = L_81;
		V_7 = L_82;
		NullCheck(L_78);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_78, L_82, NULL);
		String_t* L_83 = V_7;
		NullCheck(L_76);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_76, L_83, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_84 = ___textureLoadingContext0;
		NullCheck(L_84);
		int32_t L_85 = L_84->___CreationBytesPerPixel_7;
		V_8 = (bool)((((int32_t)L_85) == ((int32_t)8))? 1 : 0);
		bool L_86 = V_8;
		if (!L_86)
		{
			goto IL_018e;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_87 = ___textureLoadingContext0;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_88 = ___textureLoadingContext0;
		NullCheck(L_88);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_89;
		L_89 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_88, NULL);
		NullCheck(((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)CastclassSealed((RuntimeObject*)L_89, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_90;
		L_90 = Texture2D_GetRawTextureData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m2538E7DD406AA91FEB21E2D227CCC1BBE333539A(((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)CastclassSealed((RuntimeObject*)L_89, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)), Texture2D_GetRawTextureData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m2538E7DD406AA91FEB21E2D227CCC1BBE333539A_RuntimeMethod_var);
		NullCheck(L_87);
		TextureLoadingContext_set_Data16_mB2A2ED617458B751801C52C40645316E9A5D3508(L_87, L_90, NULL);
		goto IL_01a7;
	}

IL_018e:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_91 = ___textureLoadingContext0;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_92 = ___textureLoadingContext0;
		NullCheck(L_92);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_93;
		L_93 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_92, NULL);
		NullCheck(((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)CastclassSealed((RuntimeObject*)L_93, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_94;
		L_94 = Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608(((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)CastclassSealed((RuntimeObject*)L_93, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)), Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_RuntimeMethod_var);
		NullCheck(L_91);
		TextureLoadingContext_set_Data_mB945A47C469AC31920E6BFAE8F39717D8AFBCA3D(L_91, L_94, NULL);
	}

IL_01a7:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_95 = ___textureLoadingContext0;
		NullCheck(L_95);
		TextureLoadingContext_set_TextureCreated_mF2FAE8B1A18D9796D420B8E0A6405B56438FE4A5(L_95, (bool)1, NULL);
	}

IL_01af:
	{
		return;
	}
}
// System.Void TriLibCore.Utils.TextureUtils::LoadTexture2DNonAlloc(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtils_LoadTexture2DNonAlloc_mF228037EED3C4461FA01E5862FF0828FCCAFF698 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF965509752233B275EEAC4A67A506D223293212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureCreationFlags_t7671FF285C96A03BDCD7BA2F50388C09ED4A54A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81681BA542B3287297EFFEAB02258DB1088A6439);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_6 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	String_t* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B14_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B14_3 = NULL;
	String_t* G_B14_4 = NULL;
	String_t* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B13_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B13_3 = NULL;
	String_t* G_B13_4 = NULL;
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_0 = ___textureLoadingContext0;
		NullCheck(L_0);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1;
		L_1 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_3 = ___textureLoadingContext0;
		NullCheck(L_3);
		bool L_4;
		L_4 = TextureLoadingContext_get_TextureLoaded_mFF7B26EBD3967A77B57EA89655DBB05346869099(L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_4 = (bool)G_B3_0;
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_017e;
	}

IL_0024:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_6 = ___textureLoadingContext0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = TextureLoadingContext_get_Components_mCFF27AD976FCED0158744EA1FFCAE082D2E726DB(L_6, NULL);
		if ((((int32_t)L_7) == ((int32_t)4)))
		{
			goto IL_0030;
		}
	}
	{
		G_B8_0 = 3;
		goto IL_0031;
	}

IL_0030:
	{
		G_B8_0 = 4;
	}

IL_0031:
	{
		V_0 = G_B8_0;
		int32_t L_8 = V_0;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_9 = ___textureLoadingContext0;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_9, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(23 /* TriLibCore.General.TextureFormat TriLibCore.Interfaces.ITexture::get_TextureFormat() */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_10);
		G_B9_0 = L_8;
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			G_B10_0 = L_8;
			goto IL_0053;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_12 = ___textureLoadingContext0;
		NullCheck(L_12);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_13;
		L_13 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_12, NULL);
		NullCheck(L_13);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_14 = L_13->___Options_34;
		NullCheck(L_14);
		bool L_15 = L_14->___LoadTexturesAsSRGB_77;
		G_B11_0 = ((int32_t)(L_15));
		G_B11_1 = G_B9_0;
		goto IL_0054;
	}

IL_0053:
	{
		G_B11_0 = 0;
		G_B11_1 = G_B10_0;
	}

IL_0054:
	{
		int32_t L_16;
		L_16 = TextureUtils_GetTextureFormat_m7DB927FFB07FE206055A7279147283088D7E7615(G_B11_1, (bool)G_B11_0, NULL);
		V_1 = L_16;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_17 = ___textureLoadingContext0;
		int32_t L_18;
		L_18 = TextureUtils_GetTextureCreationFlags_mE926ABDC070F5AFCEA33C0BFE8C1B231CCAF21BC(L_17, (bool)0, NULL);
		V_2 = L_18;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_19 = ___textureLoadingContext0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = TextureLoadingContext_get_Width_mA97228B3507021003BB6FA170C579CAFC7DE6452(L_19, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_21 = ___textureLoadingContext0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = TextureLoadingContext_get_Height_m8280F4A60EBAB6EF724624FA3E8E3647D44A9CBF(L_21, NULL);
		int32_t L_23 = V_1;
		int32_t L_24 = V_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25;
		L_25 = TextureUtils_CreateTexture2DInternal_mF98DDB574290DFF452A9F2C4D7ACB06C11D64766(L_20, L_22, L_23, L_24, NULL);
		V_3 = L_25;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_26 = V_3;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_27 = ___textureLoadingContext0;
		NullCheck(L_27);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_28;
		L_28 = TextureLoadingContext_get_Data_m0D5DEF2219C7DA98B6D4F26BDC420505511B67A5(L_27, NULL);
		NullCheck(L_26);
		Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF965509752233B275EEAC4A67A506D223293212(L_26, L_28, 0, 0, Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF965509752233B275EEAC4A67A506D223293212_RuntimeMethod_var);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_29 = ___textureLoadingContext0;
		NullCheck(L_29);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_30;
		L_30 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_29, NULL);
		NullCheck(L_30);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_31 = L_30->___Options_34;
		NullCheck(L_31);
		bool L_32 = L_31->___ShowLoadingWarnings_65;
		V_5 = L_32;
		bool L_33 = V_5;
		if (!L_33)
		{
			goto IL_00f8;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_34;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_36 = ___textureLoadingContext0;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = TextureLoadingContext_get_Width_mA97228B3507021003BB6FA170C579CAFC7DE6452(L_36, NULL);
		int32_t L_38 = L_37;
		RuntimeObject* L_39 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_39);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_39);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = L_35;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_41 = ___textureLoadingContext0;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = TextureLoadingContext_get_Height_m8280F4A60EBAB6EF724624FA3E8E3647D44A9CBF(L_41, NULL);
		int32_t L_43 = L_42;
		RuntimeObject* L_44 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_44);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_44);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = L_40;
		int32_t L_46 = V_1;
		int32_t L_47 = L_46;
		RuntimeObject* L_48 = Box(GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_48);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_48);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = L_45;
		int32_t L_50 = V_2;
		int32_t L_51 = L_50;
		RuntimeObject* L_52 = Box(TextureCreationFlags_t7671FF285C96A03BDCD7BA2F50388C09ED4A54A3_il2cpp_TypeInfo_var, &L_51);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_52);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_52);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_53 = L_49;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_54 = ___textureLoadingContext0;
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_54, NULL);
		NullCheck(L_55);
		String_t* L_56;
		L_56 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String TriLibCore.Interfaces.IObject::get_Name() */, IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var, L_55);
		String_t* L_57 = L_56;
		G_B13_0 = L_57;
		G_B13_1 = 4;
		G_B13_2 = L_53;
		G_B13_3 = L_53;
		G_B13_4 = _stringLiteral81681BA542B3287297EFFEAB02258DB1088A6439;
		if (L_57)
		{
			G_B14_0 = L_57;
			G_B14_1 = 4;
			G_B14_2 = L_53;
			G_B14_3 = L_53;
			G_B14_4 = _stringLiteral81681BA542B3287297EFFEAB02258DB1088A6439;
			goto IL_00eb;
		}
	}
	{
		G_B14_0 = _stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		G_B14_4 = G_B13_4;
	}

IL_00eb:
	{
		NullCheck(G_B14_2);
		ArrayElementTypeCheck (G_B14_2, G_B14_0);
		(G_B14_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B14_1), (RuntimeObject*)G_B14_0);
		String_t* L_58;
		L_58 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(G_B14_4, G_B14_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_58, NULL);
	}

IL_00f8:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_59 = V_3;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_60 = ___textureLoadingContext0;
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_60, NULL);
		NullCheck(L_61);
		int32_t L_62;
		L_62 = InterfaceFuncInvoker0< int32_t >::Invoke(10 /* UnityEngine.TextureWrapMode TriLibCore.Interfaces.ITexture::get_WrapModeU() */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_61);
		NullCheck(L_59);
		Texture_set_wrapModeU_m2002CCB73143182032BD5ED6C80AB9A0ED2A0981(L_59, L_62, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_63 = V_3;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_64 = ___textureLoadingContext0;
		NullCheck(L_64);
		RuntimeObject* L_65;
		L_65 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_64, NULL);
		NullCheck(L_65);
		int32_t L_66;
		L_66 = InterfaceFuncInvoker0< int32_t >::Invoke(12 /* UnityEngine.TextureWrapMode TriLibCore.Interfaces.ITexture::get_WrapModeV() */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_65);
		NullCheck(L_63);
		Texture_set_wrapModeV_m3C79177BAE70103DDBF871896AF464513A0F919D(L_63, L_66, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_67 = V_3;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_68 = ___textureLoadingContext0;
		NullCheck(L_68);
		RuntimeObject* L_69;
		L_69 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_68, NULL);
		NullCheck(L_69);
		String_t* L_70;
		L_70 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String TriLibCore.Interfaces.IObject::get_Name() */, IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var, L_69);
		NullCheck(L_67);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_67, L_70, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_71 = ___textureLoadingContext0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_72 = V_3;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_72);
		NullCheck(L_71);
		TextureLoadingContext_set_Width_mB440C3BFD9C3B6A8549A1683AECEBFB53D2A46E8(L_71, L_73, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_74 = ___textureLoadingContext0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_75 = V_3;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_75);
		NullCheck(L_74);
		TextureLoadingContext_set_Height_m1D34AA8DF31E3CBCF05DB30074902A105D014EBE(L_74, L_76, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_77 = ___textureLoadingContext0;
		NullCheck(L_77);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_78;
		L_78 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_77, NULL);
		NullCheck(L_78);
		List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* L_79 = L_78->___Allocations_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_80 = V_3;
		NullCheck(L_79);
		List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_inline(L_79, L_80, List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_81 = ___textureLoadingContext0;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_82 = ___textureLoadingContext0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_83 = V_3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_84 = L_83;
		V_6 = L_84;
		NullCheck(L_82);
		TextureLoadingContext_set_OriginalUnityTexture_m0E6FED96E3EFEA11E6D2C604B6005E4621DBBFEE(L_82, L_84, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_85 = V_6;
		NullCheck(L_81);
		TextureLoadingContext_set_UnityTexture_m13DB98CE54BCBBFE76226206AFAFD0107CB67F28_inline(L_81, L_85, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_86 = ___textureLoadingContext0;
		NullCheck(L_86);
		TextureLoadingContext_set_TextureLoaded_m84833D48774241C258393DA527A252C3856BB0B0(L_86, (bool)1, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_87 = ___textureLoadingContext0;
		NullCheck(L_87);
		TextureLoadingContext_set_TextureCreated_mF2FAE8B1A18D9796D420B8E0A6405B56438FE4A5(L_87, (bool)1, NULL);
	}

IL_017e:
	{
		return;
	}
}
// System.Void TriLibCore.Utils.TextureUtils::LoadTexture2D(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtils_LoadTexture2D_m322A10470887F79499FFC5771A7080FAD98DBE54 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureCreationFlags_t7671FF285C96A03BDCD7BA2F50388C09ED4A54A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81681BA542B3287297EFFEAB02258DB1088A6439);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B42_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B51_0 = 0;
	int32_t G_B51_1 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B53_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B52_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B54_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B54_1 = NULL;
	String_t* G_B58_0 = NULL;
	int32_t G_B58_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B58_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B58_3 = NULL;
	String_t* G_B58_4 = NULL;
	String_t* G_B57_0 = NULL;
	int32_t G_B57_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B57_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B57_3 = NULL;
	String_t* G_B57_4 = NULL;
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_0 = ___textureLoadingContext0;
		NullCheck(L_0);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1;
		L_1 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_3 = ___textureLoadingContext0;
		NullCheck(L_3);
		bool L_4;
		L_4 = TextureLoadingContext_get_TextureLoaded_mFF7B26EBD3967A77B57EA89655DBB05346869099(L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_5 = (bool)G_B3_0;
		bool L_5 = V_5;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_02c3;
	}

IL_0024:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_6 = ___textureLoadingContext0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = TextureLoadingContext_get_Components_mCFF27AD976FCED0158744EA1FFCAE082D2E726DB(L_6, NULL);
		if ((((int32_t)L_7) == ((int32_t)4)))
		{
			goto IL_0030;
		}
	}
	{
		G_B8_0 = 3;
		goto IL_0031;
	}

IL_0030:
	{
		G_B8_0 = 4;
	}

IL_0031:
	{
		V_0 = G_B8_0;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_8 = ___textureLoadingContext0;
		NullCheck(L_8);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_9;
		L_9 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_8, NULL);
		NullCheck(L_9);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_10 = L_9->___Options_34;
		NullCheck(L_10);
		int32_t L_11 = L_10->___TextureCompressionQuality_42;
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_12 = ___textureLoadingContext0;
		bool L_13;
		L_13 = TextureUtils_CanCompress_mD30F006F690E3207FC6D574001B7FD2EBAA335FB(L_12, NULL);
		G_B11_0 = ((int32_t)(L_13));
		goto IL_004d;
	}

IL_004c:
	{
		G_B11_0 = 0;
	}

IL_004d:
	{
		V_6 = (bool)G_B11_0;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_010d;
		}
	}
	{
		int32_t L_15;
		L_15 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		V_8 = L_15;
		int32_t L_16 = V_8;
		V_7 = L_16;
		int32_t L_17 = V_7;
		if ((((int32_t)L_17) > ((int32_t)((int32_t)11))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_18 = V_7;
		if ((((int32_t)L_18) == ((int32_t)8)))
		{
			goto IL_00e8;
		}
	}
	{
		goto IL_006f;
	}

IL_006f:
	{
		int32_t L_19 = V_7;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)11))))
		{
			goto IL_00d6;
		}
	}
	{
		goto IL_0087;
	}

IL_0077:
	{
		int32_t L_20 = V_7;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)17))))
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_007f;
	}

IL_007f:
	{
		int32_t L_21 = V_7;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)31))))
		{
			goto IL_00fa;
		}
	}
	{
		goto IL_0087;
	}

IL_0087:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_22 = ___textureLoadingContext0;
		NullCheck(L_22);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_23;
		L_23 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_22, NULL);
		NullCheck(L_23);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_24 = L_23->___Options_34;
		NullCheck(L_24);
		int32_t L_25 = L_24->___TextureCompressionQuality_42;
		V_10 = L_25;
		int32_t L_26 = V_10;
		V_9 = L_26;
		int32_t L_27 = V_9;
		if ((((int32_t)L_27) == ((int32_t)1)))
		{
			goto IL_00ab;
		}
	}
	{
		goto IL_00a4;
	}

IL_00a4:
	{
		int32_t L_28 = V_9;
		if ((((int32_t)L_28) == ((int32_t)2)))
		{
			goto IL_00bd;
		}
	}
	{
		goto IL_00c2;
	}

IL_00ab:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_29 = ___textureLoadingContext0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = TextureLoadingContext_get_Components_mCFF27AD976FCED0158744EA1FFCAE082D2E726DB(L_29, NULL);
		if ((((int32_t)L_30) == ((int32_t)4)))
		{
			goto IL_00b8;
		}
	}
	{
		G_B28_0 = ((int32_t)10);
		goto IL_00ba;
	}

IL_00b8:
	{
		G_B28_0 = ((int32_t)12);
	}

IL_00ba:
	{
		V_0 = G_B28_0;
		goto IL_00c2;
	}

IL_00bd:
	{
		V_0 = ((int32_t)25);
		goto IL_00c2;
	}

IL_00c2:
	{
		goto IL_010c;
	}

IL_00c4:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_31 = ___textureLoadingContext0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = TextureLoadingContext_get_Components_mCFF27AD976FCED0158744EA1FFCAE082D2E726DB(L_31, NULL);
		if ((((int32_t)L_32) == ((int32_t)4)))
		{
			goto IL_00d1;
		}
	}
	{
		G_B34_0 = ((int32_t)10);
		goto IL_00d3;
	}

IL_00d1:
	{
		G_B34_0 = ((int32_t)12);
	}

IL_00d3:
	{
		V_0 = G_B34_0;
		goto IL_010c;
	}

IL_00d6:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_33 = ___textureLoadingContext0;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = TextureLoadingContext_get_Components_mCFF27AD976FCED0158744EA1FFCAE082D2E726DB(L_33, NULL);
		if ((((int32_t)L_34) == ((int32_t)4)))
		{
			goto IL_00e3;
		}
	}
	{
		G_B38_0 = ((int32_t)34);
		goto IL_00e5;
	}

IL_00e3:
	{
		G_B38_0 = ((int32_t)47);
	}

IL_00e5:
	{
		V_0 = G_B38_0;
		goto IL_010c;
	}

IL_00e8:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_35 = ___textureLoadingContext0;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = TextureLoadingContext_get_Components_mCFF27AD976FCED0158744EA1FFCAE082D2E726DB(L_35, NULL);
		if ((((int32_t)L_36) == ((int32_t)4)))
		{
			goto IL_00f5;
		}
	}
	{
		G_B42_0 = ((int32_t)32);
		goto IL_00f7;
	}

IL_00f5:
	{
		G_B42_0 = ((int32_t)33);
	}

IL_00f7:
	{
		V_0 = G_B42_0;
		goto IL_010c;
	}

IL_00fa:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_37 = ___textureLoadingContext0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = TextureLoadingContext_get_Components_mCFF27AD976FCED0158744EA1FFCAE082D2E726DB(L_37, NULL);
		if ((((int32_t)L_38) == ((int32_t)4)))
		{
			goto IL_0107;
		}
	}
	{
		G_B46_0 = ((int32_t)34);
		goto IL_0109;
	}

IL_0107:
	{
		G_B46_0 = ((int32_t)47);
	}

IL_0109:
	{
		V_0 = G_B46_0;
		goto IL_010c;
	}

IL_010c:
	{
	}

IL_010d:
	{
		int32_t L_39 = V_0;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_40 = ___textureLoadingContext0;
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_40, NULL);
		NullCheck(L_41);
		int32_t L_42;
		L_42 = InterfaceFuncInvoker0< int32_t >::Invoke(23 /* TriLibCore.General.TextureFormat TriLibCore.Interfaces.ITexture::get_TextureFormat() */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_41);
		G_B49_0 = L_39;
		if ((((int32_t)L_42) == ((int32_t)1)))
		{
			G_B50_0 = L_39;
			goto IL_012e;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_43 = ___textureLoadingContext0;
		NullCheck(L_43);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_44;
		L_44 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_43, NULL);
		NullCheck(L_44);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_45 = L_44->___Options_34;
		NullCheck(L_45);
		bool L_46 = L_45->___LoadTexturesAsSRGB_77;
		G_B51_0 = ((int32_t)(L_46));
		G_B51_1 = G_B49_0;
		goto IL_012f;
	}

IL_012e:
	{
		G_B51_0 = 0;
		G_B51_1 = G_B50_0;
	}

IL_012f:
	{
		int32_t L_47;
		L_47 = TextureUtils_GetTextureFormat_m7DB927FFB07FE206055A7279147283088D7E7615(G_B51_1, (bool)G_B51_0, NULL);
		V_1 = L_47;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_48 = ___textureLoadingContext0;
		int32_t L_49;
		L_49 = TextureUtils_GetTextureCreationFlags_mE926ABDC070F5AFCEA33C0BFE8C1B231CCAF21BC(L_48, (bool)0, NULL);
		V_2 = L_49;
		int32_t L_50 = V_1;
		int32_t L_51 = V_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_52;
		L_52 = TextureUtils_CreateTexture2DInternal_mF98DDB574290DFF452A9F2C4D7ACB06C11D64766(4, 4, L_50, L_51, NULL);
		V_3 = L_52;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_53 = V_3;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_54 = ___textureLoadingContext0;
		NullCheck(L_54);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_55;
		L_55 = TextureLoadingContext_get_Stream_mE9C57E3F000BF1B2FAC22B4740F4CB7F0284885E(L_54, NULL);
		G_B52_0 = L_53;
		if (L_55)
		{
			G_B53_0 = L_53;
			goto IL_0162;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_56 = ___textureLoadingContext0;
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_56, NULL);
		NullCheck(L_57);
		String_t* L_58;
		L_58 = InterfaceFuncInvoker0< String_t* >::Invoke(20 /* System.String TriLibCore.Interfaces.ITexture::get_ResolvedFilename() */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_57);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59;
		L_59 = FileUtils_LoadFileData_mEA29191295ED98274F30148FC24EEA9F44C3629F(L_58, NULL);
		G_B54_0 = L_59;
		G_B54_1 = G_B52_0;
		goto IL_016d;
	}

IL_0162:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_60 = ___textureLoadingContext0;
		NullCheck(L_60);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_61;
		L_61 = TextureLoadingContext_get_Stream_mE9C57E3F000BF1B2FAC22B4740F4CB7F0284885E(L_60, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62;
		L_62 = StreamExtensions_ReadBytes_mBC510C36CF2079D203C034809EB0B5F9C94ACAED(L_61, NULL);
		G_B54_0 = L_62;
		G_B54_1 = G_B53_0;
	}

IL_016d:
	{
		bool L_63;
		L_63 = ImageConversion_LoadImage_m292ADCEED268A0A0AAD532BAB8D1710CF0FC8AEF(G_B54_1, G_B54_0, (bool)0, NULL);
		V_4 = L_63;
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		int32_t L_64;
		L_64 = GC_get_MaxGeneration_mC974FB6C41BC0F65458B4F5843029D58EBCD963A(NULL);
		GC_Collect_m00001875A744C22341092FFCC01615C8F498C5D0(L_64, 1, (bool)1, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_65 = V_3;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_66 = ___textureLoadingContext0;
		NullCheck(L_66);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_67;
		L_67 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_66, NULL);
		NullCheck(L_67);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_68 = L_67->___Options_34;
		NullCheck(L_68);
		bool L_69 = L_68->___MarkTexturesNoLongerReadable_73;
		NullCheck(L_65);
		Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_65, (bool)1, L_69, NULL);
		bool L_70 = V_4;
		V_11 = L_70;
		bool L_71 = V_11;
		if (!L_71)
		{
			goto IL_02a2;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_72 = ___textureLoadingContext0;
		NullCheck(L_72);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_73;
		L_73 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_72, NULL);
		NullCheck(L_73);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_74 = L_73->___Options_34;
		NullCheck(L_74);
		bool L_75 = L_74->___ShowLoadingWarnings_65;
		V_12 = L_75;
		bool L_76 = V_12;
		if (!L_76)
		{
			goto IL_0219;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_77 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78 = L_77;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_79 = ___textureLoadingContext0;
		NullCheck(L_79);
		int32_t L_80;
		L_80 = TextureLoadingContext_get_Width_mA97228B3507021003BB6FA170C579CAFC7DE6452(L_79, NULL);
		int32_t L_81 = L_80;
		RuntimeObject* L_82 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_81);
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, L_82);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_82);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_83 = L_78;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_84 = ___textureLoadingContext0;
		NullCheck(L_84);
		int32_t L_85;
		L_85 = TextureLoadingContext_get_Height_m8280F4A60EBAB6EF724624FA3E8E3647D44A9CBF(L_84, NULL);
		int32_t L_86 = L_85;
		RuntimeObject* L_87 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_86);
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, L_87);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_87);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_88 = L_83;
		int32_t L_89 = V_1;
		int32_t L_90 = L_89;
		RuntimeObject* L_91 = Box(GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_il2cpp_TypeInfo_var, &L_90);
		NullCheck(L_88);
		ArrayElementTypeCheck (L_88, L_91);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_91);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_92 = L_88;
		int32_t L_93 = V_2;
		int32_t L_94 = L_93;
		RuntimeObject* L_95 = Box(TextureCreationFlags_t7671FF285C96A03BDCD7BA2F50388C09ED4A54A3_il2cpp_TypeInfo_var, &L_94);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_95);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_96 = L_92;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_97 = ___textureLoadingContext0;
		NullCheck(L_97);
		RuntimeObject* L_98;
		L_98 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_97, NULL);
		NullCheck(L_98);
		String_t* L_99;
		L_99 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String TriLibCore.Interfaces.IObject::get_Name() */, IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var, L_98);
		String_t* L_100 = L_99;
		G_B57_0 = L_100;
		G_B57_1 = 4;
		G_B57_2 = L_96;
		G_B57_3 = L_96;
		G_B57_4 = _stringLiteral81681BA542B3287297EFFEAB02258DB1088A6439;
		if (L_100)
		{
			G_B58_0 = L_100;
			G_B58_1 = 4;
			G_B58_2 = L_96;
			G_B58_3 = L_96;
			G_B58_4 = _stringLiteral81681BA542B3287297EFFEAB02258DB1088A6439;
			goto IL_020c;
		}
	}
	{
		G_B58_0 = _stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400;
		G_B58_1 = G_B57_1;
		G_B58_2 = G_B57_2;
		G_B58_3 = G_B57_3;
		G_B58_4 = G_B57_4;
	}

IL_020c:
	{
		NullCheck(G_B58_2);
		ArrayElementTypeCheck (G_B58_2, G_B58_0);
		(G_B58_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B58_1), (RuntimeObject*)G_B58_0);
		String_t* L_101;
		L_101 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(G_B58_4, G_B58_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_101, NULL);
	}

IL_0219:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_102 = V_3;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_103 = ___textureLoadingContext0;
		NullCheck(L_103);
		RuntimeObject* L_104;
		L_104 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_103, NULL);
		NullCheck(L_104);
		int32_t L_105;
		L_105 = InterfaceFuncInvoker0< int32_t >::Invoke(10 /* UnityEngine.TextureWrapMode TriLibCore.Interfaces.ITexture::get_WrapModeU() */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_104);
		NullCheck(L_102);
		Texture_set_wrapModeU_m2002CCB73143182032BD5ED6C80AB9A0ED2A0981(L_102, L_105, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_106 = V_3;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_107 = ___textureLoadingContext0;
		NullCheck(L_107);
		RuntimeObject* L_108;
		L_108 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_107, NULL);
		NullCheck(L_108);
		int32_t L_109;
		L_109 = InterfaceFuncInvoker0< int32_t >::Invoke(12 /* UnityEngine.TextureWrapMode TriLibCore.Interfaces.ITexture::get_WrapModeV() */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_108);
		NullCheck(L_106);
		Texture_set_wrapModeV_m3C79177BAE70103DDBF871896AF464513A0F919D(L_106, L_109, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_110 = V_3;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_111 = ___textureLoadingContext0;
		NullCheck(L_111);
		RuntimeObject* L_112;
		L_112 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_111, NULL);
		NullCheck(L_112);
		String_t* L_113;
		L_113 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String TriLibCore.Interfaces.IObject::get_Name() */, IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var, L_112);
		NullCheck(L_110);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_110, L_113, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_114 = ___textureLoadingContext0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_115 = V_3;
		NullCheck(L_115);
		int32_t L_116;
		L_116 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_115);
		NullCheck(L_114);
		TextureLoadingContext_set_Width_mB440C3BFD9C3B6A8549A1683AECEBFB53D2A46E8(L_114, L_116, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_117 = ___textureLoadingContext0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_118 = V_3;
		NullCheck(L_118);
		int32_t L_119;
		L_119 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_118);
		NullCheck(L_117);
		TextureLoadingContext_set_Height_m1D34AA8DF31E3CBCF05DB30074902A105D014EBE(L_117, L_119, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_120 = ___textureLoadingContext0;
		NullCheck(L_120);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_121;
		L_121 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_120, NULL);
		NullCheck(L_121);
		List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* L_122 = L_121->___Allocations_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_123 = V_3;
		NullCheck(L_122);
		List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_inline(L_122, L_123, List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_124 = ___textureLoadingContext0;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_125 = ___textureLoadingContext0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_126 = V_3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_127 = L_126;
		V_13 = L_127;
		NullCheck(L_125);
		TextureLoadingContext_set_OriginalUnityTexture_m0E6FED96E3EFEA11E6D2C604B6005E4621DBBFEE(L_125, L_127, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_128 = V_13;
		NullCheck(L_124);
		TextureLoadingContext_set_UnityTexture_m13DB98CE54BCBBFE76226206AFAFD0107CB67F28_inline(L_124, L_128, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_129 = ___textureLoadingContext0;
		NullCheck(L_129);
		TextureLoadingContext_set_TextureLoaded_m84833D48774241C258393DA527A252C3856BB0B0(L_129, (bool)1, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_130 = ___textureLoadingContext0;
		NullCheck(L_130);
		TextureLoadingContext_set_TextureCreated_mF2FAE8B1A18D9796D420B8E0A6405B56438FE4A5(L_130, (bool)1, NULL);
		goto IL_02c3;
	}

IL_02a2:
	{
		bool L_131;
		L_131 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_14 = L_131;
		bool L_132 = V_14;
		if (!L_132)
		{
			goto IL_02b9;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_133 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_133, NULL);
		goto IL_02c2;
	}

IL_02b9:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_134 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_134, NULL);
	}

IL_02c2:
	{
	}

IL_02c3:
	{
		return;
	}
}
// System.Byte[] TriLibCore.Utils.TextureUtils::AllocateDataBuffer(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TextureUtils_AllocateDataBuffer_mB38471EED74BC41C2C46BA800D201F6A0A9A9AF2 (int32_t ___length0, RuntimeObject* ___customData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___customData1;
		V_0 = ((TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879*)CastclassClass((RuntimeObject*)L_0, TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879_il2cpp_TypeInfo_var));
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_1 = V_0;
		NullCheck(L_1);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_2;
		L_2 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_1, NULL);
		int32_t L_3 = ___length0;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = AssetLoaderContext_GetBufferFromPool_m52A8FD1B99CB43A719BD7180F71B6DE5332C1F5A(L_2, L_3, NULL);
		V_1 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		return L_5;
	}
}
// System.Boolean TriLibCore.Utils.TextureUtils::CanCompress(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureUtils_CanCompress_mD30F006F690E3207FC6D574001B7FD2EBAA335FB (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_0 = ___textureLoadingContext0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TextureLoadingContext_get_Width_mA97228B3507021003BB6FA170C579CAFC7DE6452(L_0, NULL);
		if ((((int32_t)L_1) < ((int32_t)4)))
		{
			goto IL_0018;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_2 = ___textureLoadingContext0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TextureLoadingContext_get_Height_m8280F4A60EBAB6EF724624FA3E8E3647D44A9CBF(L_2, NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void TriLibCore.Utils.TextureUtils::FixNPOTTexture(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtils_FixNPOTTexture_mD70F84AA854051E129F7798606E916D4B6309A10 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mA5D6155BB759AB3C5A4B20023650F2F6060AD74C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_GetRawTextureData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m2538E7DD406AA91FEB21E2D227CCC1BBE333539A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FF0F6ABEC9720CE53C87D152864D881E99E6A55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C8D0C8DF43E73F7271CE108EFF8C68873301942);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	bool V_14 = false;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_15;
	memset((&V_15), 0, sizeof(V_15));
	int32_t G_B8_0 = 0;
	String_t* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B14_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B14_3 = NULL;
	String_t* G_B14_4 = NULL;
	String_t* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B13_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B13_3 = NULL;
	String_t* G_B13_4 = NULL;
	int32_t G_B18_0 = 0;
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_0 = ___textureLoadingContext0;
		NullCheck(L_0);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1;
		L_1 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_024e;
	}

IL_0017:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_4 = ___textureLoadingContext0;
		NullCheck(L_4);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_5;
		L_5 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_4, NULL);
		NullCheck(L_5);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_6 = L_5->___Options_34;
		NullCheck(L_6);
		bool L_7 = L_6->___UseUnityNativeTextureLoader_86;
		if (L_7)
		{
			goto IL_0055;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_8 = ___textureLoadingContext0;
		bool L_9;
		L_9 = TextureUtils_IsPOT_m8113C77680B9B5DAC8858C47622D26E0279DFB1F(L_8, NULL);
		if (L_9)
		{
			goto IL_0055;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_10 = ___textureLoadingContext0;
		NullCheck(L_10);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_11;
		L_11 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_10, NULL);
		NullCheck(L_11);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_12 = L_11->___Options_34;
		NullCheck(L_12);
		bool L_13 = L_12->___GenerateMipmaps_43;
		if (L_13)
		{
			goto IL_0067;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_14 = ___textureLoadingContext0;
		NullCheck(L_14);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_15;
		L_15 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_14, NULL);
		NullCheck(L_15);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_16 = L_15->___Options_34;
		NullCheck(L_16);
		int32_t L_17 = L_16->___TextureCompressionQuality_42;
		if (L_17)
		{
			goto IL_0067;
		}
	}

IL_0055:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_18 = ___textureLoadingContext0;
		NullCheck(L_18);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_19;
		L_19 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_18, NULL);
		NullCheck(L_19);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_20 = L_19->___Options_34;
		NullCheck(L_20);
		bool L_21 = L_20->___ForcePowerOfTwoTextures_83;
		G_B8_0 = ((int32_t)(L_21));
		goto IL_0068;
	}

IL_0067:
	{
		G_B8_0 = 1;
	}

IL_0068:
	{
		V_1 = (bool)G_B8_0;
		bool L_22 = V_1;
		if (!L_22)
		{
			goto IL_024e;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_23 = ___textureLoadingContext0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = TextureLoadingContext_get_Width_mA97228B3507021003BB6FA170C579CAFC7DE6452(L_23, NULL);
		int32_t L_25;
		L_25 = TextureUtils_GetNextPOT_mF5D19AEB8A475ED1649E7B9EAE398D47E86E81E9(L_24, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_26 = ___textureLoadingContext0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = TextureLoadingContext_get_Height_m8280F4A60EBAB6EF724624FA3E8E3647D44A9CBF(L_26, NULL);
		int32_t L_28;
		L_28 = TextureUtils_GetNextPOT_mF5D19AEB8A475ED1649E7B9EAE398D47E86E81E9(L_27, NULL);
		int32_t L_29;
		L_29 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_25, L_28, NULL);
		V_2 = L_29;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_30 = ___textureLoadingContext0;
		NullCheck(L_30);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_31;
		L_31 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_30, NULL);
		V_3 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)CastclassSealed((RuntimeObject*)L_31, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_32 = V_3;
		NullCheck(L_32);
		bool L_33;
		L_33 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.Texture::get_isReadable() */, L_32);
		V_10 = L_33;
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_00af;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_35 = V_3;
		NullCheck(L_35);
		Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_35, (bool)0, (bool)0, NULL);
	}

IL_00af:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_36 = ___textureLoadingContext0;
		NullCheck(L_36);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_37;
		L_37 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_36, NULL);
		NullCheck(L_37);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_38 = L_37->___Options_34;
		NullCheck(L_38);
		bool L_39 = L_38->___ShowLoadingWarnings_65;
		V_11 = L_39;
		bool L_40 = V_11;
		if (!L_40)
		{
			goto IL_011d;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = L_41;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_43, NULL);
		String_t* L_45 = L_44;
		G_B13_0 = L_45;
		G_B13_1 = 0;
		G_B13_2 = L_42;
		G_B13_3 = L_42;
		G_B13_4 = _stringLiteral7C8D0C8DF43E73F7271CE108EFF8C68873301942;
		if (L_45)
		{
			G_B14_0 = L_45;
			G_B14_1 = 0;
			G_B14_2 = L_42;
			G_B14_3 = L_42;
			G_B14_4 = _stringLiteral7C8D0C8DF43E73F7271CE108EFF8C68873301942;
			goto IL_00e2;
		}
	}
	{
		G_B14_0 = _stringLiteral0FF0F6ABEC9720CE53C87D152864D881E99E6A55;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		G_B14_4 = G_B13_4;
	}

IL_00e2:
	{
		NullCheck(G_B14_2);
		ArrayElementTypeCheck (G_B14_2, G_B14_0);
		(G_B14_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B14_1), (RuntimeObject*)G_B14_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = G_B14_3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_47 = V_3;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_47);
		int32_t L_49 = L_48;
		RuntimeObject* L_50 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_49);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_50);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_50);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_51 = L_46;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_52 = V_3;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_52);
		int32_t L_54 = L_53;
		RuntimeObject* L_55 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_54);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_55);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_55);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_56 = L_51;
		int32_t L_57 = V_2;
		int32_t L_58 = L_57;
		RuntimeObject* L_59 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_58);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_59);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_59);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_60 = L_56;
		int32_t L_61 = V_2;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_62);
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_63);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_63);
		String_t* L_64;
		L_64 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(G_B14_4, L_60, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_64, NULL);
	}

IL_011d:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_65 = ___textureLoadingContext0;
		NullCheck(L_65);
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_66;
		L_66 = TextureLoadingContext_get_Data16_mAEE42E9D8D090F7A705717C961B8BBE9A43E2367(L_65, NULL);
		V_12 = L_66;
		bool L_67;
		L_67 = NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B((&V_12), NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0131;
		}
	}
	{
		G_B18_0 = 4;
		goto IL_0133;
	}

IL_0131:
	{
		G_B18_0 = ((int32_t)17);
	}

IL_0133:
	{
		V_4 = G_B18_0;
		int32_t L_68 = V_4;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_69 = ___textureLoadingContext0;
		NullCheck(L_69);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_70;
		L_70 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_69, NULL);
		NullCheck(L_70);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_71 = L_70->___Options_34;
		NullCheck(L_71);
		bool L_72 = L_71->___LoadTexturesAsSRGB_77;
		int32_t L_73;
		L_73 = TextureUtils_GetRenderTextureFormat_m1CF6BD674771B5338D720471A2DFEEC9B20C9EA9(L_68, L_72, NULL);
		V_5 = L_73;
		int32_t L_74 = V_2;
		int32_t L_75 = V_2;
		int32_t L_76 = V_5;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_77;
		L_77 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(L_74, L_75, 0, L_76, NULL);
		V_6 = L_77;
		int32_t L_78 = V_4;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_79 = ___textureLoadingContext0;
		NullCheck(L_79);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_80;
		L_80 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_79, NULL);
		NullCheck(L_80);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_81 = L_80->___Options_34;
		NullCheck(L_81);
		bool L_82 = L_81->___LoadTexturesAsSRGB_77;
		int32_t L_83;
		L_83 = TextureUtils_GetTextureFormat_m7DB927FFB07FE206055A7279147283088D7E7615(L_78, L_82, NULL);
		V_7 = L_83;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_84 = ___textureLoadingContext0;
		int32_t L_85;
		L_85 = TextureUtils_GetTextureCreationFlags_mE926ABDC070F5AFCEA33C0BFE8C1B231CCAF21BC(L_84, (bool)1, NULL);
		V_8 = L_85;
		int32_t L_86 = V_2;
		int32_t L_87 = V_2;
		int32_t L_88 = V_7;
		int32_t L_89 = V_8;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_90;
		L_90 = TextureUtils_CreateTexture2DInternal_mF98DDB574290DFF452A9F2C4D7ACB06C11D64766(L_86, L_87, L_88, L_89, NULL);
		V_9 = L_90;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_91 = V_9;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_92 = ___textureLoadingContext0;
		NullCheck(L_92);
		RuntimeObject* L_93;
		L_93 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_92, NULL);
		NullCheck(L_93);
		String_t* L_94;
		L_94 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String TriLibCore.Interfaces.IObject::get_Name() */, IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var, L_93);
		NullCheck(L_91);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_91, L_94, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_95 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_96 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_95, L_96, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_97 = V_6;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_98 = V_9;
		TextureUtils_CopyTextureCPU_mC3809064E929C374F1AC7C30F0D070A5D82F6179(L_97, L_98, (bool)1, (bool)0, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_99 = V_6;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_99, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_100 = ___textureLoadingContext0;
		NullCheck(L_100);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_101;
		L_101 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_100, NULL);
		NullCheck(L_101);
		List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* L_102 = L_101->___Allocations_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_103 = V_3;
		NullCheck(L_102);
		bool L_104;
		L_104 = List_1_Remove_mA5D6155BB759AB3C5A4B20023650F2F6060AD74C(L_102, L_103, List_1_Remove_mA5D6155BB759AB3C5A4B20023650F2F6060AD74C_RuntimeMethod_var);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_105 = ___textureLoadingContext0;
		NullCheck(L_105);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_106;
		L_106 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_105, NULL);
		NullCheck(L_106);
		List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* L_107 = L_106->___Allocations_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_108 = V_9;
		NullCheck(L_107);
		List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_inline(L_107, L_108, List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		bool L_109;
		L_109 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_13 = L_109;
		bool L_110 = V_13;
		if (!L_110)
		{
			goto IL_01f4;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_111 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_111, NULL);
		goto IL_01fd;
	}

IL_01f4:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_112 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_112, NULL);
	}

IL_01fd:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_113 = ___textureLoadingContext0;
		NullCheck(L_113);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_114;
		L_114 = TextureLoadingContext_get_Data_m0D5DEF2219C7DA98B6D4F26BDC420505511B67A5(L_113, NULL);
		V_15 = L_114;
		bool L_115;
		L_115 = NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081((&V_15), NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		V_14 = L_115;
		bool L_116 = V_14;
		if (!L_116)
		{
			goto IL_0224;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_117 = ___textureLoadingContext0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_118 = V_9;
		NullCheck(L_118);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_119;
		L_119 = Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608(L_118, Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_RuntimeMethod_var);
		NullCheck(L_117);
		TextureLoadingContext_set_Data_mB945A47C469AC31920E6BFAE8F39717D8AFBCA3D(L_117, L_119, NULL);
		goto IL_0234;
	}

IL_0224:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_120 = ___textureLoadingContext0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_121 = V_9;
		NullCheck(L_121);
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_122;
		L_122 = Texture2D_GetRawTextureData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m2538E7DD406AA91FEB21E2D227CCC1BBE333539A(L_121, Texture2D_GetRawTextureData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m2538E7DD406AA91FEB21E2D227CCC1BBE333539A_RuntimeMethod_var);
		NullCheck(L_120);
		TextureLoadingContext_set_Data16_mB2A2ED617458B751801C52C40645316E9A5D3508(L_120, L_122, NULL);
	}

IL_0234:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_123 = ___textureLoadingContext0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_124 = V_9;
		NullCheck(L_123);
		TextureLoadingContext_set_UnityTexture_m13DB98CE54BCBBFE76226206AFAFD0107CB67F28_inline(L_123, L_124, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_125 = ___textureLoadingContext0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_126 = V_9;
		NullCheck(L_125);
		TextureLoadingContext_set_OriginalUnityTexture_m0E6FED96E3EFEA11E6D2C604B6005E4621DBBFEE(L_125, L_126, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_127 = ___textureLoadingContext0;
		TextureUtils_ApplyTexture2D_m77B80263F99FDEA58D10718F3503C08051FD66F0(L_127, NULL);
	}

IL_024e:
	{
		return;
	}
}
// System.Void TriLibCore.Utils.TextureUtils::ApplyTexture2D(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtils_ApplyTexture2D_m77B80263F99FDEA58D10718F3503C08051FD66F0 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2994E03D13BCF6639D664F7EE48FA731C89F16A);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	RuntimeObject* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	int32_t G_B17_0 = 0;
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_0 = ___textureLoadingContext0;
		NullCheck(L_0);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1;
		L_1 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_0, NULL);
		V_0 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)CastclassSealed((RuntimeObject*)L_1, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_4 = ___textureLoadingContext0;
		NullCheck(L_4);
		bool L_5 = L_4->___TextureProcessed_3;
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.Texture::get_isReadable() */, L_6);
		G_B4_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B4_0 = 1;
	}

IL_002a:
	{
		V_1 = (bool)G_B4_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		goto IL_010f;
	}

IL_0034:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_9 = ___textureLoadingContext0;
		NullCheck(L_9);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_10;
		L_10 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_9, NULL);
		NullCheck(L_10);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_11 = L_10->___Options_34;
		NullCheck(L_11);
		bool L_12 = L_11->___ShowLoadingWarnings_65;
		V_2 = L_12;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_007a;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_14 = ___textureLoadingContext0;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_14, NULL);
		RuntimeObject* L_16 = L_15;
		G_B8_0 = L_16;
		G_B8_1 = _stringLiteralF2994E03D13BCF6639D664F7EE48FA731C89F16A;
		if (L_16)
		{
			G_B9_0 = L_16;
			G_B9_1 = _stringLiteralF2994E03D13BCF6639D664F7EE48FA731C89F16A;
			goto IL_005b;
		}
	}
	{
		G_B10_0 = ((String_t*)(NULL));
		G_B10_1 = G_B8_1;
		goto IL_0060;
	}

IL_005b:
	{
		NullCheck(G_B9_0);
		String_t* L_17;
		L_17 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String TriLibCore.Interfaces.IObject::get_Name() */, IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var, G_B9_0);
		G_B10_0 = L_17;
		G_B10_1 = G_B9_1;
	}

IL_0060:
	{
		String_t* L_18 = G_B10_0;
		G_B11_0 = L_18;
		G_B11_1 = G_B10_1;
		if (L_18)
		{
			G_B12_0 = L_18;
			G_B12_1 = G_B10_1;
			goto IL_0069;
		}
	}
	{
		G_B12_0 = _stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400;
		G_B12_1 = G_B11_1;
	}

IL_0069:
	{
		String_t* L_19;
		L_19 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B12_1, G_B12_0, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_19, NULL);
	}

IL_007a:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_20 = ___textureLoadingContext0;
		NullCheck(L_20);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_21;
		L_21 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_20, NULL);
		NullCheck(L_21);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_22 = L_21->___Options_34;
		NullCheck(L_22);
		bool L_23 = L_22->___UseUnityNativeTextureLoader_86;
		V_3 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_3;
		if (!L_24)
		{
			goto IL_00e8;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = V_0;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_26 = ___textureLoadingContext0;
		NullCheck(L_26);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_27;
		L_27 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_26, NULL);
		NullCheck(L_27);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_28 = L_27->___Options_34;
		NullCheck(L_28);
		bool L_29 = L_28->___GenerateMipmaps_43;
		NullCheck(L_25);
		Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_25, L_29, (bool)0, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_30 = ___textureLoadingContext0;
		NullCheck(L_30);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_31;
		L_31 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_30, NULL);
		NullCheck(L_31);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_32 = L_31->___Options_34;
		NullCheck(L_32);
		int32_t L_33 = L_32->___TextureCompressionQuality_42;
		if (!L_33)
		{
			goto IL_00c4;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_34 = ___textureLoadingContext0;
		bool L_35;
		L_35 = TextureUtils_CanCompress_mD30F006F690E3207FC6D574001B7FD2EBAA335FB(L_34, NULL);
		G_B17_0 = ((int32_t)(L_35));
		goto IL_00c5;
	}

IL_00c4:
	{
		G_B17_0 = 0;
	}

IL_00c5:
	{
		V_4 = (bool)G_B17_0;
		bool L_36 = V_4;
		if (!L_36)
		{
			goto IL_00e7;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_37 = V_0;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_38 = ___textureLoadingContext0;
		NullCheck(L_38);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_39;
		L_39 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_38, NULL);
		NullCheck(L_39);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_40 = L_39->___Options_34;
		NullCheck(L_40);
		int32_t L_41 = L_40->___TextureCompressionQuality_42;
		NullCheck(L_37);
		Texture2D_Compress_m8681BBBAFCF43212ACCFA81F82E0F34720640F87(L_37, (bool)((((int32_t)L_41) == ((int32_t)2))? 1 : 0), NULL);
	}

IL_00e7:
	{
	}

IL_00e8:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_42 = V_0;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_43 = ___textureLoadingContext0;
		NullCheck(L_43);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_44;
		L_44 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_43, NULL);
		NullCheck(L_44);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_45 = L_44->___Options_34;
		NullCheck(L_45);
		bool L_46 = L_45->___GenerateMipmaps_43;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_47 = ___textureLoadingContext0;
		NullCheck(L_47);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_48;
		L_48 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_47, NULL);
		NullCheck(L_48);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_49 = L_48->___Options_34;
		NullCheck(L_49);
		bool L_50 = L_49->___MarkTexturesNoLongerReadable_73;
		NullCheck(L_42);
		Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_42, L_46, L_50, NULL);
	}

IL_010f:
	{
		return;
	}
}
// System.Void TriLibCore.Utils.TextureUtils::CopyTextureCPU(UnityEngine.RenderTexture,UnityEngine.Texture2D,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtils_CopyTextureCPU_mC3809064E929C374F1AC7C30F0D070A5D82F6179 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___from0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___to1, bool ___updateMipMaps2, bool ___makeNoLongerReadable3, const RuntimeMethod* method) 
{
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___from0;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_0, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = ___to1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___from0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = ___from0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_6), (0.0f), (0.0f), ((float)L_3), ((float)L_5), /*hidden argument*/NULL);
		NullCheck(L_1);
		Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9(L_1, L_6, 0, 0, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = ___to1;
		bool L_8 = ___updateMipMaps2;
		bool L_9 = ___makeNoLongerReadable3;
		NullCheck(L_7);
		Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_7, L_8, L_9, NULL);
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		return;
	}
}
// System.Void TriLibCore.Utils.TextureUtils::FixNormalMap(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtils_FixNormalMap_m30751B854C020DA1E616357112F06D6EA3492F71 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29E89B68349B5ADC4F6EE256721DC418018271B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_4 = NULL;
	bool V_5 = false;
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_10 = NULL;
	bool V_11 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B9_0 = 0;
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_0 = ___textureLoadingContext0;
		NullCheck(L_0);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1;
		L_1 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_3 = ___textureLoadingContext0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(23 /* TriLibCore.General.TextureFormat TriLibCore.Interfaces.ITexture::get_TextureFormat() */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_6 = ___textureLoadingContext0;
		NullCheck(L_6);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_7;
		L_7 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_6, NULL);
		NullCheck(L_7);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_8 = L_7->___Options_34;
		NullCheck(L_8);
		bool L_9 = L_8->___FixNormalMaps_44;
		G_B4_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B4_0 = 1;
	}

IL_0033:
	{
		V_5 = (bool)G_B4_0;
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_003f;
		}
	}
	{
		goto IL_017a;
	}

IL_003f:
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_11;
		L_11 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral29E89B68349B5ADC4F6EE256721DC418018271B8, NULL);
		V_0 = L_11;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_12 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_13, L_12, NULL);
		V_1 = L_13;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_14 = ___textureLoadingContext0;
		NullCheck(L_14);
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_15;
		L_15 = TextureLoadingContext_get_Data16_mAEE42E9D8D090F7A705717C961B8BBE9A43E2367(L_14, NULL);
		V_6 = L_15;
		bool L_16;
		L_16 = NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B((&V_6), NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var);
		if (L_16)
		{
			goto IL_0065;
		}
	}
	{
		G_B9_0 = 4;
		goto IL_0067;
	}

IL_0065:
	{
		G_B9_0 = ((int32_t)17);
	}

IL_0067:
	{
		V_2 = G_B9_0;
		int32_t L_17 = V_2;
		int32_t L_18;
		L_18 = TextureUtils_GetRenderTextureFormat_m1CF6BD674771B5338D720471A2DFEEC9B20C9EA9(L_17, (bool)0, NULL);
		V_3 = L_18;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_19 = ___textureLoadingContext0;
		NullCheck(L_19);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_20;
		L_20 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_19, NULL);
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_20);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_22 = ___textureLoadingContext0;
		NullCheck(L_22);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_23;
		L_23 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_22, NULL);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_23);
		int32_t L_25 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26;
		L_26 = RenderTexture_GetTemporary_mA6619EA324AAE80B6892107C6968092F6F1B4C45(L_21, L_24, 0, L_25, 1, NULL);
		V_4 = L_26;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_27 = V_4;
		NullCheck(L_27);
		bool L_28;
		L_28 = RenderTexture_IsCreated_mB69D4DBD99D74AA5D1F3C9E84A08D6744A031006(L_27, NULL);
		V_7 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_7;
		if (!L_29)
		{
			goto IL_00b4;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_30 = V_4;
		NullCheck(L_30);
		RenderTexture_set_useMipMap_mB280A39DAB18372D3A0050FF20F730E5B0B44C32(L_30, (bool)0, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_31 = V_4;
		NullCheck(L_31);
		RenderTexture_set_autoGenerateMips_mDEFAC13954D315DE52B35B34577218D3AD4897A9(L_31, (bool)0, NULL);
	}

IL_00b4:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = V_1;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_33 = ___textureLoadingContext0;
		NullCheck(L_33);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_34;
		L_34 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_33, NULL);
		NullCheck(L_32);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_32, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_34, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_35 = ___textureLoadingContext0;
		NullCheck(L_35);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_36;
		L_36 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_35, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_37 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_38 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_36, L_37, L_38, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_39 = V_4;
		NullCheck(L_39);
		bool L_40;
		L_40 = RenderTexture_get_useMipMap_m76150AD5CF0192BC8DAC05522302D9C13ECD07D7(L_39, NULL);
		V_8 = L_40;
		bool L_41 = V_8;
		if (!L_41)
		{
			goto IL_00ec;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_42 = V_4;
		NullCheck(L_42);
		RenderTexture_GenerateMips_m107161ADCD61031F2DF07209C0CA096E9908D4F5(L_42, NULL);
	}

IL_00ec:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_43 = ___textureLoadingContext0;
		int32_t L_44;
		L_44 = TextureUtils_GetTextureCreationFlags_mE926ABDC070F5AFCEA33C0BFE8C1B231CCAF21BC(L_43, (bool)0, NULL);
		V_9 = L_44;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45 = V_4;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_45);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_47 = V_4;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_47);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_49 = V_4;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = RenderTexture_get_graphicsFormat_m615EA91709BD404765C0C85425CE5F3575F90302(L_49, NULL);
		int32_t L_51 = V_9;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_52;
		L_52 = TextureUtils_CreateTexture2DInternal_mF98DDB574290DFF452A9F2C4D7ACB06C11D64766(L_46, L_48, L_50, L_51, NULL);
		V_10 = L_52;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_53 = ___textureLoadingContext0;
		NullCheck(L_53);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_54;
		L_54 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_53, NULL);
		NullCheck(L_54);
		List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* L_55 = L_54->___Allocations_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_56 = V_10;
		NullCheck(L_55);
		List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_inline(L_55, L_56, List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_57 = V_4;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_58 = V_10;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_59 = ___textureLoadingContext0;
		NullCheck(L_59);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_60;
		L_60 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_59, NULL);
		NullCheck(L_60);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_61 = L_60->___Options_34;
		NullCheck(L_61);
		bool L_62 = L_61->___GenerateMipmaps_43;
		TextureUtils_CopyTextureCPU_mC3809064E929C374F1AC7C30F0D070A5D82F6179(L_57, L_58, L_62, (bool)0, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_63 = ___textureLoadingContext0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_64 = V_10;
		NullCheck(L_63);
		TextureLoadingContext_set_UnityTexture_m13DB98CE54BCBBFE76226206AFAFD0107CB67F28_inline(L_63, L_64, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_m995C0F14B97C5BF46CCF2E7EF410C1CC05C46409((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_65 = V_4;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_65, NULL);
		bool L_66;
		L_66 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_11 = L_66;
		bool L_67 = V_11;
		if (!L_67)
		{
			goto IL_0171;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_68 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_68, NULL);
		goto IL_017a;
	}

IL_0171:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_69 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_69, NULL);
	}

IL_017a:
	{
		return;
	}
}
// System.Void TriLibCore.Utils.TextureUtils::BuildMetallicTexture(TriLibCore.TextureLoadingContext,UnityEngine.Texture,UnityEngine.Texture,UnityEngine.Texture,UnityEngine.Texture,UnityEngine.Color,UnityEngine.Color,System.Single,System.Nullable`1<System.Single>,System.Nullable`1<System.Single>,System.Boolean,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtils_BuildMetallicTexture_m8A9FEECB31F24524741135CCFEB387210FBE17ED (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___diffuseTexture1, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___metallicTexture2, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___specularTexture3, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___glossinessTexture4, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___defaultDiffuse5, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___defaultSpecular6, float ___shininessExponent7, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___defaultRoughness8, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___defaultMetallic9, bool ___usingRoughness10, bool ___mixTextureChannelsWithColors11, int32_t ___metallicComponentIndex12, int32_t ___glossinessComponentIndex13, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral036C10F0B98CF33047A90200800F1755E092E09B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17EC97923831F17778E40B7199A141873C93FAD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C19B3E9795CB33B3ACB724FF178ADDEC6A69006);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28A4059B163B8DE147DC08DAFEF5E3E3593C9764);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E830F91387FC053954E7F4BEEA6E9C2963F3EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F02BF547264FC1E6982A2704D132053DD66CAF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B3C86CBBF642F507CAD52E883769212E941116D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E0BE55ACCED21FADA5A487427198527ECC4C09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral531588C3237841B3CB6556B3036EDC0CDC3E49EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DC0B9DB1C33CBE45938326136E078C89D5F82F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CA852C55C3313ED752F5307B264815B649712D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BDCC3697B3409C95D2D74CFB62AA1965CB64033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83F10AF568B5338217F6C94A0CE7AC43A0ECDD9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85BFF7D16D8191ADD4734B73DB4297316500D25A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A6FA8BE19B1926FEA2A38F9E216E707834FD8DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90A0129D3F3360B19BFECC7D423E939972EB4F2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AF9ACF2EC5DF9D149FF233937A249BA67DCEBA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA76972EA766844797FF5D91D839701611E317C90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02302DD0B4383A93B790E58810D43AAA72A2460);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE48BAD15E291EBD88348CDC98CC669B67751ECA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE714AEC78F51EED2CD41D8AA780CD55E2FE8CB84);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_7 = NULL;
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_12 = NULL;
	bool V_13 = false;
	String_t* G_B2_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B3_2 = NULL;
	String_t* G_B5_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B5_1 = NULL;
	String_t* G_B4_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	String_t* G_B6_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B6_2 = NULL;
	String_t* G_B8_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B8_1 = NULL;
	String_t* G_B7_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B7_1 = NULL;
	int32_t G_B9_0 = 0;
	String_t* G_B9_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B9_2 = NULL;
	String_t* G_B11_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B11_1 = NULL;
	String_t* G_B10_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B10_1 = NULL;
	int32_t G_B12_0 = 0;
	String_t* G_B12_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B12_2 = NULL;
	String_t* G_B14_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B14_1 = NULL;
	String_t* G_B13_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B13_1 = NULL;
	int32_t G_B15_0 = 0;
	String_t* G_B15_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B15_2 = NULL;
	String_t* G_B17_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B17_1 = NULL;
	String_t* G_B16_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B16_1 = NULL;
	int32_t G_B18_0 = 0;
	String_t* G_B18_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B18_2 = NULL;
	String_t* G_B20_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B20_1 = NULL;
	String_t* G_B19_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B19_1 = NULL;
	int32_t G_B21_0 = 0;
	String_t* G_B21_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B21_2 = NULL;
	String_t* G_B23_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B23_1 = NULL;
	String_t* G_B22_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B22_1 = NULL;
	int32_t G_B24_0 = 0;
	String_t* G_B24_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B24_2 = NULL;
	int32_t G_B28_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B39_0 = 0;
	float G_B44_0 = 0.0f;
	int32_t G_B46_0 = 0;
	int32_t G_B46_1 = 0;
	int32_t G_B46_2 = 0;
	int32_t G_B46_3 = 0;
	int32_t G_B45_0 = 0;
	int32_t G_B45_1 = 0;
	int32_t G_B45_2 = 0;
	int32_t G_B45_3 = 0;
	int32_t G_B47_0 = 0;
	int32_t G_B47_1 = 0;
	int32_t G_B47_2 = 0;
	int32_t G_B47_3 = 0;
	int32_t G_B47_4 = 0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* G_B53_0 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* G_B52_0 = NULL;
	String_t* G_B54_0 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* G_B54_1 = NULL;
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0;
		L_0 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral4E0BE55ACCED21FADA5A487427198527ECC4C09A, NULL);
		V_0 = L_0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_2, L_1, NULL);
		V_1 = L_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = V_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = ___diffuseTexture1;
		NullCheck(L_3);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_3, _stringLiteral9AF9ACF2EC5DF9D149FF233937A249BA67DCEBA7, L_4, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = V_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6 = ___metallicTexture2;
		NullCheck(L_5);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_5, _stringLiteral8A6FA8BE19B1926FEA2A38F9E216E707834FD8DE, L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = V_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8 = ___specularTexture3;
		NullCheck(L_7);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_7, _stringLiteral83F10AF568B5338217F6C94A0CE7AC43A0ECDD9C, L_8, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = V_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_10 = ___glossinessTexture4;
		NullCheck(L_9);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_9, _stringLiteral17EC97923831F17778E40B7199A141873C93FAD5, L_10, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___defaultDiffuse5;
		NullCheck(L_11);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_11, _stringLiteral2E830F91387FC053954E7F4BEEA6E9C2963F3EB2, L_12, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___defaultSpecular6;
		NullCheck(L_13);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_13, _stringLiteral3B3C86CBBF642F507CAD52E883769212E941116D, L_14, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = V_1;
		float L_16;
		L_16 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&___defaultRoughness8), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
		NullCheck(L_15);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_15, _stringLiteral85BFF7D16D8191ADD4734B73DB4297316500D25A, L_16, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = V_1;
		float L_18;
		L_18 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&___defaultMetallic9), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
		NullCheck(L_17);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_17, _stringLiteralE714AEC78F51EED2CD41D8AA780CD55E2FE8CB84, L_18, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = V_1;
		float L_20 = ___shininessExponent7;
		NullCheck(L_19);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_19, _stringLiteral6CA852C55C3313ED752F5307B264815B649712D7, L_20, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = V_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_22 = ___diffuseTexture1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = _stringLiteral28A4059B163B8DE147DC08DAFEF5E3E3593C9764;
		G_B1_1 = L_21;
		if (L_23)
		{
			G_B2_0 = _stringLiteral28A4059B163B8DE147DC08DAFEF5E3E3593C9764;
			G_B2_1 = L_21;
			goto IL_00aa;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_00ab:
	{
		NullCheck(G_B3_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(G_B3_2, G_B3_1, G_B3_0, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = V_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_25 = ___metallicTexture2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B4_0 = _stringLiteral036C10F0B98CF33047A90200800F1755E092E09B;
		G_B4_1 = L_24;
		if (L_26)
		{
			G_B5_0 = _stringLiteral036C10F0B98CF33047A90200800F1755E092E09B;
			G_B5_1 = L_24;
			goto IL_00c3;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_00c4;
	}

IL_00c3:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_00c4:
	{
		NullCheck(G_B6_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(G_B6_2, G_B6_1, G_B6_0, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = V_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_28 = ___specularTexture3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B7_0 = _stringLiteral531588C3237841B3CB6556B3036EDC0CDC3E49EC;
		G_B7_1 = L_27;
		if (L_29)
		{
			G_B8_0 = _stringLiteral531588C3237841B3CB6556B3036EDC0CDC3E49EC;
			G_B8_1 = L_27;
			goto IL_00dc;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_00dd;
	}

IL_00dc:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_00dd:
	{
		NullCheck(G_B9_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(G_B9_2, G_B9_1, G_B9_0, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = V_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_31 = ___glossinessTexture4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_31, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B10_0 = _stringLiteral1C19B3E9795CB33B3ACB724FF178ADDEC6A69006;
		G_B10_1 = L_30;
		if (L_32)
		{
			G_B11_0 = _stringLiteral1C19B3E9795CB33B3ACB724FF178ADDEC6A69006;
			G_B11_1 = L_30;
			goto IL_00f6;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		goto IL_00f7;
	}

IL_00f6:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
	}

IL_00f7:
	{
		NullCheck(G_B12_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(G_B12_2, G_B12_1, G_B12_0, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33 = V_1;
		bool L_34;
		L_34 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___defaultRoughness8), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		G_B13_0 = _stringLiteral7BDCC3697B3409C95D2D74CFB62AA1965CB64033;
		G_B13_1 = L_33;
		if (L_34)
		{
			G_B14_0 = _stringLiteral7BDCC3697B3409C95D2D74CFB62AA1965CB64033;
			G_B14_1 = L_33;
			goto IL_010f;
		}
	}
	{
		G_B15_0 = 0;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		goto IL_0110;
	}

IL_010f:
	{
		G_B15_0 = 1;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
	}

IL_0110:
	{
		NullCheck(G_B15_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(G_B15_2, G_B15_1, G_B15_0, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = V_1;
		bool L_36;
		L_36 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___defaultMetallic9), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		G_B16_0 = _stringLiteralB02302DD0B4383A93B790E58810D43AAA72A2460;
		G_B16_1 = L_35;
		if (L_36)
		{
			G_B17_0 = _stringLiteralB02302DD0B4383A93B790E58810D43AAA72A2460;
			G_B17_1 = L_35;
			goto IL_0128;
		}
	}
	{
		G_B18_0 = 0;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		goto IL_0129;
	}

IL_0128:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
	}

IL_0129:
	{
		NullCheck(G_B18_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(G_B18_2, G_B18_1, G_B18_0, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = V_1;
		bool L_38 = ___usingRoughness10;
		G_B19_0 = _stringLiteral5DC0B9DB1C33CBE45938326136E078C89D5F82F2;
		G_B19_1 = L_37;
		if (L_38)
		{
			G_B20_0 = _stringLiteral5DC0B9DB1C33CBE45938326136E078C89D5F82F2;
			G_B20_1 = L_37;
			goto IL_013c;
		}
	}
	{
		G_B21_0 = 0;
		G_B21_1 = G_B19_0;
		G_B21_2 = G_B19_1;
		goto IL_013d;
	}

IL_013c:
	{
		G_B21_0 = 1;
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
	}

IL_013d:
	{
		NullCheck(G_B21_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(G_B21_2, G_B21_1, G_B21_0, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = V_1;
		bool L_40 = ___mixTextureChannelsWithColors11;
		G_B22_0 = _stringLiteral2F02BF547264FC1E6982A2704D132053DD66CAF4;
		G_B22_1 = L_39;
		if (L_40)
		{
			G_B23_0 = _stringLiteral2F02BF547264FC1E6982A2704D132053DD66CAF4;
			G_B23_1 = L_39;
			goto IL_0150;
		}
	}
	{
		G_B24_0 = 0;
		G_B24_1 = G_B22_0;
		G_B24_2 = G_B22_1;
		goto IL_0151;
	}

IL_0150:
	{
		G_B24_0 = 1;
		G_B24_1 = G_B23_0;
		G_B24_2 = G_B23_1;
	}

IL_0151:
	{
		NullCheck(G_B24_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(G_B24_2, G_B24_1, G_B24_0, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = V_1;
		int32_t L_42 = ___metallicComponentIndex12;
		NullCheck(L_41);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_41, _stringLiteralA76972EA766844797FF5D91D839701611E317C90, L_42, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43 = V_1;
		int32_t L_44 = ___glossinessComponentIndex13;
		NullCheck(L_43);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_43, _stringLiteralBE48BAD15E291EBD88348CDC98CC669B67751ECA, L_44, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_45 = ___specularTexture3;
		if (L_45)
		{
			goto IL_0186;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_46 = ___glossinessTexture4;
		if (L_46)
		{
			goto IL_017d;
		}
	}
	{
		G_B28_0 = 2;
		goto IL_0184;
	}

IL_017d:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_47 = ___glossinessTexture4;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_47);
		G_B28_0 = L_48;
	}

IL_0184:
	{
		G_B30_0 = G_B28_0;
		goto IL_018c;
	}

IL_0186:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_49 = ___specularTexture3;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_49);
		G_B30_0 = L_50;
	}

IL_018c:
	{
		V_2 = G_B30_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_51 = ___specularTexture3;
		if (L_51)
		{
			goto IL_01a0;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_52 = ___glossinessTexture4;
		if (L_52)
		{
			goto IL_0197;
		}
	}
	{
		G_B34_0 = 2;
		goto IL_019e;
	}

IL_0197:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_53 = ___glossinessTexture4;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_53);
		G_B34_0 = L_54;
	}

IL_019e:
	{
		G_B36_0 = G_B34_0;
		goto IL_01a6;
	}

IL_01a0:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_55 = ___specularTexture3;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_55);
		G_B36_0 = L_56;
	}

IL_01a6:
	{
		V_3 = G_B36_0;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_57 = ___textureLoadingContext0;
		NullCheck(L_57);
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_58;
		L_58 = TextureLoadingContext_get_Data16_mAEE42E9D8D090F7A705717C961B8BBE9A43E2367(L_57, NULL);
		V_8 = L_58;
		bool L_59;
		L_59 = NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B((&V_8), NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var);
		if (L_59)
		{
			goto IL_01bb;
		}
	}
	{
		G_B39_0 = 4;
		goto IL_01bd;
	}

IL_01bb:
	{
		G_B39_0 = ((int32_t)17);
	}

IL_01bd:
	{
		V_4 = G_B39_0;
		int32_t L_60 = V_4;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_61 = ___textureLoadingContext0;
		NullCheck(L_61);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_62;
		L_62 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_61, NULL);
		NullCheck(L_62);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_63 = L_62->___Options_34;
		NullCheck(L_63);
		bool L_64 = L_63->___LoadTexturesAsSRGB_77;
		int32_t L_65;
		L_65 = TextureUtils_GetRenderTextureFormat_m1CF6BD674771B5338D720471A2DFEEC9B20C9EA9(L_60, L_64, NULL);
		V_5 = L_65;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_66 = ___textureLoadingContext0;
		NullCheck(L_66);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_67;
		L_67 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_66, NULL);
		NullCheck(L_67);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_68 = L_67->___Options_34;
		NullCheck(L_68);
		bool L_69 = L_68->___ConvertMaterialTexturesUsingHalfRes_101;
		if (!L_69)
		{
			goto IL_01f2;
		}
	}
	{
		int32_t L_70 = V_2;
		if ((((int32_t)L_70) <= ((int32_t)2)))
		{
			goto IL_01f2;
		}
	}
	{
		int32_t L_71 = V_3;
		if ((((int32_t)L_71) > ((int32_t)2)))
		{
			goto IL_01f9;
		}
	}

IL_01f2:
	{
		G_B44_0 = (1.0f);
		goto IL_01fe;
	}

IL_01f9:
	{
		G_B44_0 = (0.5f);
	}

IL_01fe:
	{
		V_6 = G_B44_0;
		int32_t L_72 = V_2;
		float L_73 = V_6;
		int32_t L_74 = V_3;
		float L_75 = V_6;
		int32_t L_76 = V_5;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_77 = ___textureLoadingContext0;
		NullCheck(L_77);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_78;
		L_78 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_77, NULL);
		NullCheck(L_78);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_79 = L_78->___Options_34;
		NullCheck(L_79);
		bool L_80 = L_79->___LoadTexturesAsSRGB_77;
		G_B45_0 = L_76;
		G_B45_1 = 0;
		G_B45_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_74), L_75)));
		G_B45_3 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_72), L_73)));
		if (L_80)
		{
			G_B46_0 = L_76;
			G_B46_1 = 0;
			G_B46_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_74), L_75)));
			G_B46_3 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_72), L_73)));
			goto IL_0224;
		}
	}
	{
		G_B47_0 = 1;
		G_B47_1 = G_B45_0;
		G_B47_2 = G_B45_1;
		G_B47_3 = G_B45_2;
		G_B47_4 = G_B45_3;
		goto IL_0225;
	}

IL_0224:
	{
		G_B47_0 = 2;
		G_B47_1 = G_B46_0;
		G_B47_2 = G_B46_1;
		G_B47_3 = G_B46_2;
		G_B47_4 = G_B46_3;
	}

IL_0225:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_81;
		L_81 = RenderTexture_GetTemporary_mA6619EA324AAE80B6892107C6968092F6F1B4C45(G_B47_4, G_B47_3, G_B47_2, G_B47_1, G_B47_0, NULL);
		V_7 = L_81;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_82 = V_7;
		NullCheck(L_82);
		bool L_83;
		L_83 = RenderTexture_IsCreated_mB69D4DBD99D74AA5D1F3C9E84A08D6744A031006(L_82, NULL);
		V_9 = (bool)((((int32_t)L_83) == ((int32_t)0))? 1 : 0);
		bool L_84 = V_9;
		if (!L_84)
		{
			goto IL_0250;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_85 = V_7;
		NullCheck(L_85);
		RenderTexture_set_useMipMap_mB280A39DAB18372D3A0050FF20F730E5B0B44C32(L_85, (bool)0, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_86 = V_7;
		NullCheck(L_86);
		RenderTexture_set_autoGenerateMips_mDEFAC13954D315DE52B35B34577218D3AD4897A9(L_86, (bool)0, NULL);
	}

IL_0250:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_87 = V_1;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_88 = ___textureLoadingContext0;
		NullCheck(L_88);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_89;
		L_89 = TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16(L_88, NULL);
		NullCheck(L_87);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_87, (String_t*)NULL, L_89, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_90 = V_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_91 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, L_90, L_91, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_92 = ___textureLoadingContext0;
		int32_t L_93 = V_2;
		NullCheck(L_92);
		TextureLoadingContext_set_Width_mB440C3BFD9C3B6A8549A1683AECEBFB53D2A46E8(L_92, L_93, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_94 = ___textureLoadingContext0;
		int32_t L_95 = V_3;
		NullCheck(L_94);
		TextureLoadingContext_set_Height_m1D34AA8DF31E3CBCF05DB30074902A105D014EBE(L_94, L_95, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_96 = V_7;
		NullCheck(L_96);
		bool L_97;
		L_97 = RenderTexture_get_useMipMap_m76150AD5CF0192BC8DAC05522302D9C13ECD07D7(L_96, NULL);
		V_10 = L_97;
		bool L_98 = V_10;
		if (!L_98)
		{
			goto IL_028f;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_99 = V_7;
		NullCheck(L_99);
		RenderTexture_GenerateMips_m107161ADCD61031F2DF07209C0CA096E9908D4F5(L_99, NULL);
	}

IL_028f:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_100 = ___textureLoadingContext0;
		int32_t L_101;
		L_101 = TextureUtils_GetTextureCreationFlags_mE926ABDC070F5AFCEA33C0BFE8C1B231CCAF21BC(L_100, (bool)0, NULL);
		V_11 = L_101;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_102 = V_7;
		NullCheck(L_102);
		int32_t L_103;
		L_103 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_102);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_104 = V_7;
		NullCheck(L_104);
		int32_t L_105;
		L_105 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_104);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_106 = V_7;
		NullCheck(L_106);
		int32_t L_107;
		L_107 = RenderTexture_get_graphicsFormat_m615EA91709BD404765C0C85425CE5F3575F90302(L_106, NULL);
		int32_t L_108 = V_11;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_109;
		L_109 = TextureUtils_CreateTexture2DInternal_mF98DDB574290DFF452A9F2C4D7ACB06C11D64766(L_103, L_105, L_107, L_108, NULL);
		V_12 = L_109;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_110 = ___textureLoadingContext0;
		NullCheck(L_110);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_111;
		L_111 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_110, NULL);
		NullCheck(L_111);
		List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* L_112 = L_111->___Allocations_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_113 = V_12;
		NullCheck(L_112);
		List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_inline(L_112, L_113, List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_114 = V_7;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_115 = V_12;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_116 = ___textureLoadingContext0;
		NullCheck(L_116);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_117;
		L_117 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_116, NULL);
		NullCheck(L_117);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_118 = L_117->___Options_34;
		NullCheck(L_118);
		bool L_119 = L_118->___GenerateMipmaps_43;
		TextureUtils_CopyTextureCPU_mC3809064E929C374F1AC7C30F0D070A5D82F6179(L_114, L_115, L_119, (bool)0, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_120 = ___textureLoadingContext0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_121 = V_12;
		NullCheck(L_120);
		TextureLoadingContext_set_UnityTexture_m13DB98CE54BCBBFE76226206AFAFD0107CB67F28_inline(L_120, L_121, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_122 = ___textureLoadingContext0;
		NullCheck(L_122);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_123;
		L_123 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_122, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_124 = ___textureLoadingContext0;
		NullCheck(L_124);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_125;
		L_125 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_124, NULL);
		NullCheck(L_125);
		String_t* L_126;
		L_126 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_125, NULL);
		bool L_127;
		L_127 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_126, NULL);
		G_B52_0 = L_123;
		if (L_127)
		{
			G_B53_0 = L_123;
			goto IL_0314;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_128 = ___textureLoadingContext0;
		NullCheck(L_128);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_129;
		L_129 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_128, NULL);
		NullCheck(L_129);
		String_t* L_130;
		L_130 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_129, NULL);
		G_B54_0 = L_130;
		G_B54_1 = G_B52_0;
		goto IL_0324;
	}

IL_0314:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_131 = ___textureLoadingContext0;
		NullCheck(L_131);
		MaterialMapperContext_t2BDF775C916A28A411960E3787DC933D2E9F0042* L_132 = L_131->___MaterialMapperContext_2;
		NullCheck(L_132);
		RuntimeObject* L_133 = L_132->___Material_0;
		NullCheck(L_133);
		String_t* L_134;
		L_134 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String TriLibCore.Interfaces.IObject::get_Name() */, IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var, L_133);
		G_B54_0 = L_134;
		G_B54_1 = G_B53_0;
	}

IL_0324:
	{
		String_t* L_135;
		L_135 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B54_0, _stringLiteral90A0129D3F3360B19BFECC7D423E939972EB4F2F, NULL);
		NullCheck(G_B54_1);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(G_B54_1, L_135, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_m995C0F14B97C5BF46CCF2E7EF410C1CC05C46409((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_136 = V_7;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_136, NULL);
		bool L_137;
		L_137 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_13 = L_137;
		bool L_138 = V_13;
		if (!L_138)
		{
			goto IL_0359;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_139 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_139, NULL);
		goto IL_0362;
	}

IL_0359:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_140, NULL);
	}

IL_0362:
	{
		return;
	}
}
// System.Void TriLibCore.Utils.TextureUtils::ApplyTransparency(TriLibCore.TextureLoadingContext,UnityEngine.Texture,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtils_ApplyTransparency_mA21F4148BDD01AE79217C80BCE69849FFF0D303F (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___diffuseTexture1, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___transparencyTexture2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28A4059B163B8DE147DC08DAFEF5E3E3593C9764);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34225B257D44E1FD77092CABE6A27981E78585B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92C90FD5CE9BDF053ECC0D267132FA650D206E3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AF9ACF2EC5DF9D149FF233937A249BA67DCEBA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD97A5D2905749283CE4B6353C0A032649F88DF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC48C4C94F80A2D5A88C4CC6D7D22617ED7CFED5D);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_6 = NULL;
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_11 = NULL;
	bool V_12 = false;
	String_t* G_B2_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B3_2 = NULL;
	String_t* G_B5_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B5_1 = NULL;
	String_t* G_B4_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	String_t* G_B6_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B6_2 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B23_1 = 0;
	int32_t G_B23_2 = 0;
	int32_t G_B23_3 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B22_1 = 0;
	int32_t G_B22_2 = 0;
	int32_t G_B22_3 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B24_1 = 0;
	int32_t G_B24_2 = 0;
	int32_t G_B24_3 = 0;
	int32_t G_B24_4 = 0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* G_B30_0 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* G_B29_0 = NULL;
	String_t* G_B31_0 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* G_B31_1 = NULL;
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0;
		L_0 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteralC48C4C94F80A2D5A88C4CC6D7D22617ED7CFED5D, NULL);
		V_0 = L_0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_2, L_1, NULL);
		V_1 = L_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = V_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = ___diffuseTexture1;
		NullCheck(L_3);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_3, _stringLiteral9AF9ACF2EC5DF9D149FF233937A249BA67DCEBA7, L_4, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = V_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6 = ___transparencyTexture2;
		NullCheck(L_5);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_5, _stringLiteral34225B257D44E1FD77092CABE6A27981E78585B7, L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = V_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8 = ___diffuseTexture1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = _stringLiteral28A4059B163B8DE147DC08DAFEF5E3E3593C9764;
		G_B1_1 = L_7;
		if (L_9)
		{
			G_B2_0 = _stringLiteral28A4059B163B8DE147DC08DAFEF5E3E3593C9764;
			G_B2_1 = L_7;
			goto IL_003f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0040;
	}

IL_003f:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0040:
	{
		NullCheck(G_B3_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(G_B3_2, G_B3_1, G_B3_0, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = V_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_11 = ___transparencyTexture2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B4_0 = _stringLiteralBD97A5D2905749283CE4B6353C0A032649F88DF1;
		G_B4_1 = L_10;
		if (L_12)
		{
			G_B5_0 = _stringLiteralBD97A5D2905749283CE4B6353C0A032649F88DF1;
			G_B5_1 = L_10;
			goto IL_0058;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0059;
	}

IL_0058:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0059:
	{
		NullCheck(G_B6_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(G_B6_2, G_B6_1, G_B6_0, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_13 = ___diffuseTexture1;
		if (L_13)
		{
			goto IL_0070;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_14 = ___transparencyTexture2;
		if (L_14)
		{
			goto IL_0068;
		}
	}
	{
		G_B10_0 = 2;
		goto IL_006e;
	}

IL_0068:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_15 = ___transparencyTexture2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_15);
		G_B10_0 = L_16;
	}

IL_006e:
	{
		G_B12_0 = G_B10_0;
		goto IL_0076;
	}

IL_0070:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_17 = ___diffuseTexture1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_17);
		G_B12_0 = L_18;
	}

IL_0076:
	{
		V_2 = G_B12_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_19 = ___diffuseTexture1;
		if (L_19)
		{
			goto IL_0088;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_20 = ___transparencyTexture2;
		if (L_20)
		{
			goto IL_0080;
		}
	}
	{
		G_B16_0 = 2;
		goto IL_0086;
	}

IL_0080:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_21 = ___transparencyTexture2;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_21);
		G_B16_0 = L_22;
	}

IL_0086:
	{
		G_B18_0 = G_B16_0;
		goto IL_008e;
	}

IL_0088:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_23 = ___diffuseTexture1;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_23);
		G_B18_0 = L_24;
	}

IL_008e:
	{
		V_3 = G_B18_0;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_25 = ___textureLoadingContext0;
		NullCheck(L_25);
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_26;
		L_26 = TextureLoadingContext_get_Data16_mAEE42E9D8D090F7A705717C961B8BBE9A43E2367(L_25, NULL);
		V_7 = L_26;
		bool L_27;
		L_27 = NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B((&V_7), NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var);
		if (L_27)
		{
			goto IL_00a3;
		}
	}
	{
		G_B21_0 = 4;
		goto IL_00a5;
	}

IL_00a3:
	{
		G_B21_0 = ((int32_t)17);
	}

IL_00a5:
	{
		V_4 = G_B21_0;
		int32_t L_28 = V_4;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_29 = ___textureLoadingContext0;
		NullCheck(L_29);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_30;
		L_30 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_29, NULL);
		NullCheck(L_30);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_31 = L_30->___Options_34;
		NullCheck(L_31);
		bool L_32 = L_31->___LoadTexturesAsSRGB_77;
		int32_t L_33;
		L_33 = TextureUtils_GetRenderTextureFormat_m1CF6BD674771B5338D720471A2DFEEC9B20C9EA9(L_28, L_32, NULL);
		V_5 = L_33;
		int32_t L_34 = V_2;
		int32_t L_35 = V_3;
		int32_t L_36 = V_5;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_37 = ___textureLoadingContext0;
		NullCheck(L_37);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_38;
		L_38 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_37, NULL);
		NullCheck(L_38);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_39 = L_38->___Options_34;
		NullCheck(L_39);
		bool L_40 = L_39->___LoadTexturesAsSRGB_77;
		G_B22_0 = L_36;
		G_B22_1 = 0;
		G_B22_2 = L_35;
		G_B22_3 = L_34;
		if (L_40)
		{
			G_B23_0 = L_36;
			G_B23_1 = 0;
			G_B23_2 = L_35;
			G_B23_3 = L_34;
			goto IL_00da;
		}
	}
	{
		G_B24_0 = 1;
		G_B24_1 = G_B22_0;
		G_B24_2 = G_B22_1;
		G_B24_3 = G_B22_2;
		G_B24_4 = G_B22_3;
		goto IL_00db;
	}

IL_00da:
	{
		G_B24_0 = 2;
		G_B24_1 = G_B23_0;
		G_B24_2 = G_B23_1;
		G_B24_3 = G_B23_2;
		G_B24_4 = G_B23_3;
	}

IL_00db:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_41;
		L_41 = RenderTexture_GetTemporary_mA6619EA324AAE80B6892107C6968092F6F1B4C45(G_B24_4, G_B24_3, G_B24_2, G_B24_1, G_B24_0, NULL);
		V_6 = L_41;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_42 = V_6;
		NullCheck(L_42);
		bool L_43;
		L_43 = RenderTexture_IsCreated_mB69D4DBD99D74AA5D1F3C9E84A08D6744A031006(L_42, NULL);
		V_8 = (bool)((((int32_t)L_43) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_8;
		if (!L_44)
		{
			goto IL_0106;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45 = V_6;
		NullCheck(L_45);
		RenderTexture_set_useMipMap_mB280A39DAB18372D3A0050FF20F730E5B0B44C32(L_45, (bool)0, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_46 = V_6;
		NullCheck(L_46);
		RenderTexture_set_autoGenerateMips_mDEFAC13954D315DE52B35B34577218D3AD4897A9(L_46, (bool)0, NULL);
	}

IL_0106:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_47 = V_1;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_48 = ___textureLoadingContext0;
		NullCheck(L_48);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_49;
		L_49 = TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16(L_48, NULL);
		NullCheck(L_47);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_47, (String_t*)NULL, L_49, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_50 = V_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_51 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, L_50, L_51, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_52 = V_6;
		NullCheck(L_52);
		bool L_53;
		L_53 = RenderTexture_get_useMipMap_m76150AD5CF0192BC8DAC05522302D9C13ECD07D7(L_52, NULL);
		V_9 = L_53;
		bool L_54 = V_9;
		if (!L_54)
		{
			goto IL_0135;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_55 = V_6;
		NullCheck(L_55);
		RenderTexture_GenerateMips_m107161ADCD61031F2DF07209C0CA096E9908D4F5(L_55, NULL);
	}

IL_0135:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_56 = ___textureLoadingContext0;
		int32_t L_57;
		L_57 = TextureUtils_GetTextureCreationFlags_mE926ABDC070F5AFCEA33C0BFE8C1B231CCAF21BC(L_56, (bool)0, NULL);
		V_10 = L_57;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_58 = V_6;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_58);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_60 = V_6;
		NullCheck(L_60);
		int32_t L_61;
		L_61 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_60);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_62 = V_6;
		NullCheck(L_62);
		int32_t L_63;
		L_63 = RenderTexture_get_graphicsFormat_m615EA91709BD404765C0C85425CE5F3575F90302(L_62, NULL);
		int32_t L_64 = V_10;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_65;
		L_65 = TextureUtils_CreateTexture2DInternal_mF98DDB574290DFF452A9F2C4D7ACB06C11D64766(L_59, L_61, L_63, L_64, NULL);
		V_11 = L_65;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_66 = ___textureLoadingContext0;
		NullCheck(L_66);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_67;
		L_67 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_66, NULL);
		NullCheck(L_67);
		List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* L_68 = L_67->___Allocations_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_69 = V_11;
		NullCheck(L_68);
		List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_inline(L_68, L_69, List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_70 = V_6;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_71 = V_11;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_72 = ___textureLoadingContext0;
		NullCheck(L_72);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_73;
		L_73 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_72, NULL);
		NullCheck(L_73);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_74 = L_73->___Options_34;
		NullCheck(L_74);
		bool L_75 = L_74->___GenerateMipmaps_43;
		TextureUtils_CopyTextureCPU_mC3809064E929C374F1AC7C30F0D070A5D82F6179(L_70, L_71, L_75, (bool)0, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_76 = ___textureLoadingContext0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_77 = V_11;
		NullCheck(L_76);
		TextureLoadingContext_set_UnityTexture_m13DB98CE54BCBBFE76226206AFAFD0107CB67F28_inline(L_76, L_77, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_78 = ___textureLoadingContext0;
		NullCheck(L_78);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_79;
		L_79 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_78, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_80 = ___textureLoadingContext0;
		NullCheck(L_80);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_81;
		L_81 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_80, NULL);
		NullCheck(L_81);
		String_t* L_82;
		L_82 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_81, NULL);
		bool L_83;
		L_83 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_82, NULL);
		G_B29_0 = L_79;
		if (L_83)
		{
			G_B30_0 = L_79;
			goto IL_01ba;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_84 = ___textureLoadingContext0;
		NullCheck(L_84);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_85;
		L_85 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_84, NULL);
		NullCheck(L_85);
		String_t* L_86;
		L_86 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_85, NULL);
		G_B31_0 = L_86;
		G_B31_1 = G_B29_0;
		goto IL_01bf;
	}

IL_01ba:
	{
		G_B31_0 = _stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400;
		G_B31_1 = G_B30_0;
	}

IL_01bf:
	{
		String_t* L_87;
		L_87 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B31_0, _stringLiteral92C90FD5CE9BDF053ECC0D267132FA650D206E3D, NULL);
		NullCheck(G_B31_1);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(G_B31_1, L_87, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_m995C0F14B97C5BF46CCF2E7EF410C1CC05C46409((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_88 = V_6;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_88, NULL);
		bool L_89;
		L_89 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_12 = L_89;
		bool L_90 = V_12;
		if (!L_90)
		{
			goto IL_01f4;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_91 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_91, NULL);
		goto IL_01fd;
	}

IL_01f4:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_92, NULL);
	}

IL_01fd:
	{
		return;
	}
}
// System.Void TriLibCore.Utils.TextureUtils::SpecularDiffuseToAlbedo(TriLibCore.TextureLoadingContext,UnityEngine.Texture,UnityEngine.Texture,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtils_SpecularDiffuseToAlbedo_mD8E1022D28DD334C2634DA19E4BC0934FC14F482 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___diffuseTexture1, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___specularTexture2, bool ___reassign3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral618505A4BD72F72100747D1E06EF9695254C1497);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83F10AF568B5338217F6C94A0CE7AC43A0ECDD9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AF9ACF2EC5DF9D149FF233937A249BA67DCEBA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA58644EE4F529728ADFE9649921FDFB428A227E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_5 = NULL;
	bool V_6 = false;
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_12 = NULL;
	bool V_13 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	float G_B13_0 = 0.0f;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B15_3 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	int32_t G_B14_2 = 0;
	int32_t G_B14_3 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	int32_t G_B16_4 = 0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* G_B25_0 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* G_B24_0 = NULL;
	String_t* G_B26_0 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* G_B26_1 = NULL;
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_0 = ___textureLoadingContext0;
		NullCheck(L_0);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1;
		L_1 = TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_3 = ___textureLoadingContext0;
		NullCheck(L_3);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4;
		L_4 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
	}

IL_001e:
	{
		V_6 = (bool)G_B3_0;
		bool L_6 = V_6;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		goto IL_023e;
	}

IL_002a:
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteralA58644EE4F529728ADFE9649921FDFB428A227E9, NULL);
		V_0 = L_7;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_9, L_8, NULL);
		V_1 = L_9;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = V_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_11 = ___diffuseTexture1;
		NullCheck(L_10);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_10, _stringLiteral9AF9ACF2EC5DF9D149FF233937A249BA67DCEBA7, L_11, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = V_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_13 = ___specularTexture2;
		NullCheck(L_12);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_12, _stringLiteral83F10AF568B5338217F6C94A0CE7AC43A0ECDD9C, L_13, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_14 = ___textureLoadingContext0;
		NullCheck(L_14);
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_15;
		L_15 = TextureLoadingContext_get_Data16_mAEE42E9D8D090F7A705717C961B8BBE9A43E2367(L_14, NULL);
		V_7 = L_15;
		bool L_16;
		L_16 = NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B((&V_7), NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var);
		if (L_16)
		{
			goto IL_006a;
		}
	}
	{
		G_B8_0 = 4;
		goto IL_006c;
	}

IL_006a:
	{
		G_B8_0 = ((int32_t)17);
	}

IL_006c:
	{
		V_2 = G_B8_0;
		int32_t L_17 = V_2;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_18 = ___textureLoadingContext0;
		NullCheck(L_18);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_19;
		L_19 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_18, NULL);
		NullCheck(L_19);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_20 = L_19->___Options_34;
		NullCheck(L_20);
		bool L_21 = L_20->___LoadTexturesAsSRGB_77;
		int32_t L_22;
		L_22 = TextureUtils_GetRenderTextureFormat_m1CF6BD674771B5338D720471A2DFEEC9B20C9EA9(L_17, L_21, NULL);
		V_3 = L_22;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_23 = ___textureLoadingContext0;
		NullCheck(L_23);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_24;
		L_24 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_23, NULL);
		NullCheck(L_24);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_25 = L_24->___Options_34;
		NullCheck(L_25);
		bool L_26 = L_25->___ConvertMaterialTexturesUsingHalfRes_101;
		if (!L_26)
		{
			goto IL_00a8;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_27 = ___diffuseTexture1;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_27);
		if ((((int32_t)L_28) <= ((int32_t)2)))
		{
			goto IL_00a8;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_29 = ___diffuseTexture1;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_29);
		if ((((int32_t)L_30) > ((int32_t)2)))
		{
			goto IL_00af;
		}
	}

IL_00a8:
	{
		G_B13_0 = (1.0f);
		goto IL_00b4;
	}

IL_00af:
	{
		G_B13_0 = (0.5f);
	}

IL_00b4:
	{
		V_4 = G_B13_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_31 = ___diffuseTexture1;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_31);
		float L_33 = V_4;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_34 = ___diffuseTexture1;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_34);
		float L_36 = V_4;
		int32_t L_37 = V_3;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_38 = ___textureLoadingContext0;
		NullCheck(L_38);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_39;
		L_39 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_38, NULL);
		NullCheck(L_39);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_40 = L_39->___Options_34;
		NullCheck(L_40);
		bool L_41 = L_40->___LoadTexturesAsSRGB_77;
		G_B14_0 = L_37;
		G_B14_1 = 0;
		G_B14_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_35), L_36)));
		G_B14_3 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_32), L_33)));
		if (L_41)
		{
			G_B15_0 = L_37;
			G_B15_1 = 0;
			G_B15_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_35), L_36)));
			G_B15_3 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_32), L_33)));
			goto IL_00e3;
		}
	}
	{
		G_B16_0 = 1;
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		G_B16_3 = G_B14_2;
		G_B16_4 = G_B14_3;
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B16_0 = 2;
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
		G_B16_3 = G_B15_2;
		G_B16_4 = G_B15_3;
	}

IL_00e4:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_42;
		L_42 = RenderTexture_GetTemporary_mA6619EA324AAE80B6892107C6968092F6F1B4C45(G_B16_4, G_B16_3, G_B16_2, G_B16_1, G_B16_0, NULL);
		V_5 = L_42;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_43 = V_5;
		NullCheck(L_43);
		bool L_44;
		L_44 = RenderTexture_IsCreated_mB69D4DBD99D74AA5D1F3C9E84A08D6744A031006(L_43, NULL);
		V_8 = (bool)((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_8;
		if (!L_45)
		{
			goto IL_010f;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_46 = V_5;
		NullCheck(L_46);
		RenderTexture_set_useMipMap_mB280A39DAB18372D3A0050FF20F730E5B0B44C32(L_46, (bool)0, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_47 = V_5;
		NullCheck(L_47);
		RenderTexture_set_autoGenerateMips_mDEFAC13954D315DE52B35B34577218D3AD4897A9(L_47, (bool)0, NULL);
	}

IL_010f:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_48 = V_1;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_49 = ___textureLoadingContext0;
		NullCheck(L_49);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_50;
		L_50 = TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16(L_49, NULL);
		NullCheck(L_48);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_48, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_50, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_51 = ___textureLoadingContext0;
		NullCheck(L_51);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_52;
		L_52 = TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16(L_51, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_53 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_52, L_53, L_54, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_55 = V_5;
		NullCheck(L_55);
		bool L_56;
		L_56 = RenderTexture_get_useMipMap_m76150AD5CF0192BC8DAC05522302D9C13ECD07D7(L_55, NULL);
		V_9 = L_56;
		bool L_57 = V_9;
		if (!L_57)
		{
			goto IL_0147;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_58 = V_5;
		NullCheck(L_58);
		RenderTexture_GenerateMips_m107161ADCD61031F2DF07209C0CA096E9908D4F5(L_58, NULL);
	}

IL_0147:
	{
		bool L_59 = ___reassign3;
		V_10 = L_59;
		bool L_60 = V_10;
		if (!L_60)
		{
			goto IL_0176;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_61 = V_5;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_62 = ___textureLoadingContext0;
		NullCheck(L_62);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_63;
		L_63 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_62, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_64 = ___textureLoadingContext0;
		NullCheck(L_64);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_65;
		L_65 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_64, NULL);
		NullCheck(L_65);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_66 = L_65->___Options_34;
		NullCheck(L_66);
		bool L_67 = L_66->___GenerateMipmaps_43;
		TextureUtils_CopyTextureCPU_mC3809064E929C374F1AC7C30F0D070A5D82F6179(L_61, ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)CastclassSealed((RuntimeObject*)L_63, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)), L_67, (bool)0, NULL);
		goto IL_01d6;
	}

IL_0176:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_68 = ___textureLoadingContext0;
		int32_t L_69;
		L_69 = TextureUtils_GetTextureCreationFlags_mE926ABDC070F5AFCEA33C0BFE8C1B231CCAF21BC(L_68, (bool)0, NULL);
		V_11 = L_69;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_70 = V_5;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_70);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_72 = V_5;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_72);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_74 = V_5;
		NullCheck(L_74);
		int32_t L_75;
		L_75 = RenderTexture_get_graphicsFormat_m615EA91709BD404765C0C85425CE5F3575F90302(L_74, NULL);
		int32_t L_76 = V_11;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_77;
		L_77 = TextureUtils_CreateTexture2DInternal_mF98DDB574290DFF452A9F2C4D7ACB06C11D64766(L_71, L_73, L_75, L_76, NULL);
		V_12 = L_77;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_78 = ___textureLoadingContext0;
		NullCheck(L_78);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_79;
		L_79 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_78, NULL);
		NullCheck(L_79);
		List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* L_80 = L_79->___Allocations_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_81 = V_12;
		NullCheck(L_80);
		List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_inline(L_80, L_81, List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_82 = V_5;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_83 = V_12;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_84 = ___textureLoadingContext0;
		NullCheck(L_84);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_85;
		L_85 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_84, NULL);
		NullCheck(L_85);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_86 = L_85->___Options_34;
		NullCheck(L_86);
		bool L_87 = L_86->___GenerateMipmaps_43;
		TextureUtils_CopyTextureCPU_mC3809064E929C374F1AC7C30F0D070A5D82F6179(L_82, L_83, L_87, (bool)0, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_88 = ___textureLoadingContext0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_89 = V_12;
		NullCheck(L_88);
		TextureLoadingContext_set_UnityTexture_m13DB98CE54BCBBFE76226206AFAFD0107CB67F28_inline(L_88, L_89, NULL);
	}

IL_01d6:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_90 = ___textureLoadingContext0;
		NullCheck(L_90);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_91;
		L_91 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_90, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_92 = ___textureLoadingContext0;
		NullCheck(L_92);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_93;
		L_93 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_92, NULL);
		NullCheck(L_93);
		String_t* L_94;
		L_94 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_93, NULL);
		bool L_95;
		L_95 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_94, NULL);
		G_B24_0 = L_91;
		if (L_95)
		{
			G_B25_0 = L_91;
			goto IL_01fb;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_96 = ___textureLoadingContext0;
		NullCheck(L_96);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_97;
		L_97 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_96, NULL);
		NullCheck(L_97);
		String_t* L_98;
		L_98 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_97, NULL);
		G_B26_0 = L_98;
		G_B26_1 = G_B24_0;
		goto IL_0200;
	}

IL_01fb:
	{
		G_B26_0 = _stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400;
		G_B26_1 = G_B25_0;
	}

IL_0200:
	{
		String_t* L_99;
		L_99 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B26_0, _stringLiteral618505A4BD72F72100747D1E06EF9695254C1497, NULL);
		NullCheck(G_B26_1);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(G_B26_1, L_99, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_m995C0F14B97C5BF46CCF2E7EF410C1CC05C46409((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_100 = V_5;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_100, NULL);
		bool L_101;
		L_101 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_13 = L_101;
		bool L_102 = V_13;
		if (!L_102)
		{
			goto IL_0235;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_103 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_103, NULL);
		goto IL_023e;
	}

IL_0235:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_104 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_104, NULL);
	}

IL_023e:
	{
		return;
	}
}
// System.Void TriLibCore.Utils.TextureUtils::ExtractChannelData(System.Int32,TriLibCore.TextureLoadingContext,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtils_ExtractChannelData_m0BBF62657D76CC729095FF92E022B85DD742B936 (int32_t ___channelIndex0, TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext1, String_t* ___suffix2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E630AE63717B2B5680B6AFCE21AA2CBDFB52718);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BE9C7BA6299E2F05C746C2E90D82F3E141A498E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_4 = NULL;
	bool V_5 = false;
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_10 = NULL;
	bool V_11 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B10_3 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	int32_t G_B9_3 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	int32_t G_B11_3 = 0;
	int32_t G_B11_4 = 0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* G_B17_0 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* G_B16_0 = NULL;
	String_t* G_B18_0 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* G_B18_1 = NULL;
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_0 = ___textureLoadingContext1;
		NullCheck(L_0);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1;
		L_1 = TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_3 = ___textureLoadingContext1;
		NullCheck(L_3);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4;
		L_4 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
	}

IL_001e:
	{
		V_5 = (bool)G_B3_0;
		bool L_6 = V_5;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		goto IL_01d1;
	}

IL_002a:
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral8BE9C7BA6299E2F05C746C2E90D82F3E141A498E, NULL);
		V_0 = L_7;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_9, L_8, NULL);
		V_1 = L_9;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = V_1;
		int32_t L_11 = ___channelIndex0;
		NullCheck(L_10);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_10, _stringLiteral6E630AE63717B2B5680B6AFCE21AA2CBDFB52718, L_11, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_12 = ___textureLoadingContext1;
		NullCheck(L_12);
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_13;
		L_13 = TextureLoadingContext_get_Data16_mAEE42E9D8D090F7A705717C961B8BBE9A43E2367(L_12, NULL);
		V_6 = L_13;
		bool L_14;
		L_14 = NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B((&V_6), NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_005d;
		}
	}
	{
		G_B8_0 = 4;
		goto IL_005f;
	}

IL_005d:
	{
		G_B8_0 = ((int32_t)17);
	}

IL_005f:
	{
		V_2 = G_B8_0;
		int32_t L_15 = V_2;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_16 = ___textureLoadingContext1;
		NullCheck(L_16);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_17;
		L_17 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_16, NULL);
		NullCheck(L_17);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_18 = L_17->___Options_34;
		NullCheck(L_18);
		bool L_19 = L_18->___LoadTexturesAsSRGB_77;
		int32_t L_20;
		L_20 = TextureUtils_GetRenderTextureFormat_m1CF6BD674771B5338D720471A2DFEEC9B20C9EA9(L_15, L_19, NULL);
		V_3 = L_20;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_21 = ___textureLoadingContext1;
		NullCheck(L_21);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_22;
		L_22 = TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16(L_21, NULL);
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_22);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_24 = ___textureLoadingContext1;
		NullCheck(L_24);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_25;
		L_25 = TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16(L_24, NULL);
		NullCheck(L_25);
		int32_t L_26;
		L_26 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_25);
		int32_t L_27 = V_3;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_28 = ___textureLoadingContext1;
		NullCheck(L_28);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_29;
		L_29 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_28, NULL);
		NullCheck(L_29);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_30 = L_29->___Options_34;
		NullCheck(L_30);
		bool L_31 = L_30->___LoadTexturesAsSRGB_77;
		G_B9_0 = L_27;
		G_B9_1 = 0;
		G_B9_2 = L_26;
		G_B9_3 = L_23;
		if (L_31)
		{
			G_B10_0 = L_27;
			G_B10_1 = 0;
			G_B10_2 = L_26;
			G_B10_3 = L_23;
			goto IL_00a4;
		}
	}
	{
		G_B11_0 = 1;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		G_B11_4 = G_B9_3;
		goto IL_00a5;
	}

IL_00a4:
	{
		G_B11_0 = 2;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
		G_B11_4 = G_B10_3;
	}

IL_00a5:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_32;
		L_32 = RenderTexture_GetTemporary_mA6619EA324AAE80B6892107C6968092F6F1B4C45(G_B11_4, G_B11_3, G_B11_2, G_B11_1, G_B11_0, NULL);
		V_4 = L_32;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_33 = V_4;
		NullCheck(L_33);
		bool L_34;
		L_34 = RenderTexture_IsCreated_mB69D4DBD99D74AA5D1F3C9E84A08D6744A031006(L_33, NULL);
		V_7 = (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_00d0;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_36 = V_4;
		NullCheck(L_36);
		RenderTexture_set_useMipMap_mB280A39DAB18372D3A0050FF20F730E5B0B44C32(L_36, (bool)0, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_37 = V_4;
		NullCheck(L_37);
		RenderTexture_set_autoGenerateMips_mDEFAC13954D315DE52B35B34577218D3AD4897A9(L_37, (bool)0, NULL);
	}

IL_00d0:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_38 = V_1;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_39 = ___textureLoadingContext1;
		NullCheck(L_39);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_40;
		L_40 = TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16(L_39, NULL);
		NullCheck(L_38);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_38, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_40, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_41 = ___textureLoadingContext1;
		NullCheck(L_41);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_42;
		L_42 = TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16(L_41, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_43 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_44 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_42, L_43, L_44, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45 = V_4;
		NullCheck(L_45);
		bool L_46;
		L_46 = RenderTexture_get_useMipMap_m76150AD5CF0192BC8DAC05522302D9C13ECD07D7(L_45, NULL);
		V_8 = L_46;
		bool L_47 = V_8;
		if (!L_47)
		{
			goto IL_0108;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_48 = V_4;
		NullCheck(L_48);
		RenderTexture_GenerateMips_m107161ADCD61031F2DF07209C0CA096E9908D4F5(L_48, NULL);
	}

IL_0108:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_49 = ___textureLoadingContext1;
		int32_t L_50;
		L_50 = TextureUtils_GetTextureCreationFlags_mE926ABDC070F5AFCEA33C0BFE8C1B231CCAF21BC(L_49, (bool)0, NULL);
		V_9 = L_50;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_51 = V_4;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_51);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_53 = V_4;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_53);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_55 = V_4;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = RenderTexture_get_graphicsFormat_m615EA91709BD404765C0C85425CE5F3575F90302(L_55, NULL);
		int32_t L_57 = V_9;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_58;
		L_58 = TextureUtils_CreateTexture2DInternal_mF98DDB574290DFF452A9F2C4D7ACB06C11D64766(L_52, L_54, L_56, L_57, NULL);
		V_10 = L_58;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_59 = ___textureLoadingContext1;
		NullCheck(L_59);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_60;
		L_60 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_59, NULL);
		NullCheck(L_60);
		List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* L_61 = L_60->___Allocations_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_62 = V_10;
		NullCheck(L_61);
		List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_inline(L_61, L_62, List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_63 = V_4;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_64 = V_10;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_65 = ___textureLoadingContext1;
		NullCheck(L_65);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_66;
		L_66 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_65, NULL);
		NullCheck(L_66);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_67 = L_66->___Options_34;
		NullCheck(L_67);
		bool L_68 = L_67->___GenerateMipmaps_43;
		TextureUtils_CopyTextureCPU_mC3809064E929C374F1AC7C30F0D070A5D82F6179(L_63, L_64, L_68, (bool)0, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_69 = ___textureLoadingContext1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_70 = V_10;
		NullCheck(L_69);
		TextureLoadingContext_set_UnityTexture_m13DB98CE54BCBBFE76226206AFAFD0107CB67F28_inline(L_69, L_70, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_71 = ___textureLoadingContext1;
		NullCheck(L_71);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_72;
		L_72 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_71, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_73 = ___textureLoadingContext1;
		NullCheck(L_73);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_74;
		L_74 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_73, NULL);
		NullCheck(L_74);
		String_t* L_75;
		L_75 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_74, NULL);
		bool L_76;
		L_76 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_75, NULL);
		G_B16_0 = L_72;
		if (L_76)
		{
			G_B17_0 = L_72;
			goto IL_018d;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_77 = ___textureLoadingContext1;
		NullCheck(L_77);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_78;
		L_78 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_77, NULL);
		NullCheck(L_78);
		String_t* L_79;
		L_79 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_78, NULL);
		G_B18_0 = L_79;
		G_B18_1 = G_B16_0;
		goto IL_0192;
	}

IL_018d:
	{
		G_B18_0 = _stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400;
		G_B18_1 = G_B17_0;
	}

IL_0192:
	{
		String_t* L_80 = ___suffix2;
		String_t* L_81;
		L_81 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B18_0, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_80, NULL);
		NullCheck(G_B18_1);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(G_B18_1, L_81, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_m995C0F14B97C5BF46CCF2E7EF410C1CC05C46409((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_82 = V_4;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_82, NULL);
		bool L_83;
		L_83 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_11 = L_83;
		bool L_84 = V_11;
		if (!L_84)
		{
			goto IL_01c8;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_85, NULL);
		goto IL_01d1;
	}

IL_01c8:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_86 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_86, NULL);
	}

IL_01d1:
	{
		return;
	}
}
// System.Void TriLibCore.Utils.TextureUtils::InvertChannels(TriLibCore.TextureLoadingContext,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtils_InvertChannels_mB520C815CF7932ABDF46949859754189EA1EC889 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, String_t* ___suffix1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF9B5C5B62CEB0019EB41C5D34B870871605A796);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_4 = NULL;
	bool V_5 = false;
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_10 = NULL;
	bool V_11 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B10_3 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	int32_t G_B9_3 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	int32_t G_B11_3 = 0;
	int32_t G_B11_4 = 0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* G_B17_0 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* G_B16_0 = NULL;
	String_t* G_B18_0 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* G_B18_1 = NULL;
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_0 = ___textureLoadingContext0;
		NullCheck(L_0);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1;
		L_1 = TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_3 = ___textureLoadingContext0;
		NullCheck(L_3);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4;
		L_4 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
	}

IL_001e:
	{
		V_5 = (bool)G_B3_0;
		bool L_6 = V_5;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		goto IL_01c4;
	}

IL_002a:
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteralDF9B5C5B62CEB0019EB41C5D34B870871605A796, NULL);
		V_0 = L_7;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_9, L_8, NULL);
		V_1 = L_9;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_10 = ___textureLoadingContext0;
		NullCheck(L_10);
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_11;
		L_11 = TextureLoadingContext_get_Data16_mAEE42E9D8D090F7A705717C961B8BBE9A43E2367(L_10, NULL);
		V_6 = L_11;
		bool L_12;
		L_12 = NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B((&V_6), NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_0050;
		}
	}
	{
		G_B8_0 = 4;
		goto IL_0052;
	}

IL_0050:
	{
		G_B8_0 = ((int32_t)17);
	}

IL_0052:
	{
		V_2 = G_B8_0;
		int32_t L_13 = V_2;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_14 = ___textureLoadingContext0;
		NullCheck(L_14);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_15;
		L_15 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_14, NULL);
		NullCheck(L_15);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_16 = L_15->___Options_34;
		NullCheck(L_16);
		bool L_17 = L_16->___LoadTexturesAsSRGB_77;
		int32_t L_18;
		L_18 = TextureUtils_GetRenderTextureFormat_m1CF6BD674771B5338D720471A2DFEEC9B20C9EA9(L_13, L_17, NULL);
		V_3 = L_18;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_19 = ___textureLoadingContext0;
		NullCheck(L_19);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_20;
		L_20 = TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16(L_19, NULL);
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_20);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_22 = ___textureLoadingContext0;
		NullCheck(L_22);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_23;
		L_23 = TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16(L_22, NULL);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_23);
		int32_t L_25 = V_3;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_26 = ___textureLoadingContext0;
		NullCheck(L_26);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_27;
		L_27 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_26, NULL);
		NullCheck(L_27);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_28 = L_27->___Options_34;
		NullCheck(L_28);
		bool L_29 = L_28->___LoadTexturesAsSRGB_77;
		G_B9_0 = L_25;
		G_B9_1 = 0;
		G_B9_2 = L_24;
		G_B9_3 = L_21;
		if (L_29)
		{
			G_B10_0 = L_25;
			G_B10_1 = 0;
			G_B10_2 = L_24;
			G_B10_3 = L_21;
			goto IL_0097;
		}
	}
	{
		G_B11_0 = 1;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		G_B11_4 = G_B9_3;
		goto IL_0098;
	}

IL_0097:
	{
		G_B11_0 = 2;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
		G_B11_4 = G_B10_3;
	}

IL_0098:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_30;
		L_30 = RenderTexture_GetTemporary_mA6619EA324AAE80B6892107C6968092F6F1B4C45(G_B11_4, G_B11_3, G_B11_2, G_B11_1, G_B11_0, NULL);
		V_4 = L_30;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_31 = V_4;
		NullCheck(L_31);
		bool L_32;
		L_32 = RenderTexture_IsCreated_mB69D4DBD99D74AA5D1F3C9E84A08D6744A031006(L_31, NULL);
		V_7 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00c3;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_34 = V_4;
		NullCheck(L_34);
		RenderTexture_set_useMipMap_mB280A39DAB18372D3A0050FF20F730E5B0B44C32(L_34, (bool)0, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_35 = V_4;
		NullCheck(L_35);
		RenderTexture_set_autoGenerateMips_mDEFAC13954D315DE52B35B34577218D3AD4897A9(L_35, (bool)0, NULL);
	}

IL_00c3:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36 = V_1;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_37 = ___textureLoadingContext0;
		NullCheck(L_37);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_38;
		L_38 = TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16(L_37, NULL);
		NullCheck(L_36);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_36, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_38, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_39 = ___textureLoadingContext0;
		NullCheck(L_39);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_40;
		L_40 = TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16(L_39, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_41 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_42 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_40, L_41, L_42, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_43 = V_4;
		NullCheck(L_43);
		bool L_44;
		L_44 = RenderTexture_get_useMipMap_m76150AD5CF0192BC8DAC05522302D9C13ECD07D7(L_43, NULL);
		V_8 = L_44;
		bool L_45 = V_8;
		if (!L_45)
		{
			goto IL_00fb;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_46 = V_4;
		NullCheck(L_46);
		RenderTexture_GenerateMips_m107161ADCD61031F2DF07209C0CA096E9908D4F5(L_46, NULL);
	}

IL_00fb:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_47 = ___textureLoadingContext0;
		int32_t L_48;
		L_48 = TextureUtils_GetTextureCreationFlags_mE926ABDC070F5AFCEA33C0BFE8C1B231CCAF21BC(L_47, (bool)0, NULL);
		V_9 = L_48;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_49 = V_4;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_49);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_51 = V_4;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_51);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_53 = V_4;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = RenderTexture_get_graphicsFormat_m615EA91709BD404765C0C85425CE5F3575F90302(L_53, NULL);
		int32_t L_55 = V_9;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_56;
		L_56 = TextureUtils_CreateTexture2DInternal_mF98DDB574290DFF452A9F2C4D7ACB06C11D64766(L_50, L_52, L_54, L_55, NULL);
		V_10 = L_56;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_57 = ___textureLoadingContext0;
		NullCheck(L_57);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_58;
		L_58 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_57, NULL);
		NullCheck(L_58);
		List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* L_59 = L_58->___Allocations_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_60 = V_10;
		NullCheck(L_59);
		List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_inline(L_59, L_60, List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_61 = V_4;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_62 = V_10;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_63 = ___textureLoadingContext0;
		NullCheck(L_63);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_64;
		L_64 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_63, NULL);
		NullCheck(L_64);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_65 = L_64->___Options_34;
		NullCheck(L_65);
		bool L_66 = L_65->___GenerateMipmaps_43;
		TextureUtils_CopyTextureCPU_mC3809064E929C374F1AC7C30F0D070A5D82F6179(L_61, L_62, L_66, (bool)0, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_67 = ___textureLoadingContext0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_68 = V_10;
		NullCheck(L_67);
		TextureLoadingContext_set_UnityTexture_m13DB98CE54BCBBFE76226206AFAFD0107CB67F28_inline(L_67, L_68, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_69 = ___textureLoadingContext0;
		NullCheck(L_69);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_70;
		L_70 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_69, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_71 = ___textureLoadingContext0;
		NullCheck(L_71);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_72;
		L_72 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_71, NULL);
		NullCheck(L_72);
		String_t* L_73;
		L_73 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_72, NULL);
		bool L_74;
		L_74 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_73, NULL);
		G_B16_0 = L_70;
		if (L_74)
		{
			G_B17_0 = L_70;
			goto IL_0180;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_75 = ___textureLoadingContext0;
		NullCheck(L_75);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_76;
		L_76 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_75, NULL);
		NullCheck(L_76);
		String_t* L_77;
		L_77 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_76, NULL);
		G_B18_0 = L_77;
		G_B18_1 = G_B16_0;
		goto IL_0185;
	}

IL_0180:
	{
		G_B18_0 = _stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400;
		G_B18_1 = G_B17_0;
	}

IL_0185:
	{
		String_t* L_78 = ___suffix1;
		String_t* L_79;
		L_79 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B18_0, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_78, NULL);
		NullCheck(G_B18_1);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(G_B18_1, L_79, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_m995C0F14B97C5BF46CCF2E7EF410C1CC05C46409((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_80 = V_4;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_80, NULL);
		bool L_81;
		L_81 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_11 = L_81;
		bool L_82 = V_11;
		if (!L_82)
		{
			goto IL_01bb;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_83 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_83, NULL);
		goto IL_01c4;
	}

IL_01bb:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_84 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_84, NULL);
	}

IL_01c4:
	{
		return;
	}
}
// System.Void TriLibCore.Utils.TextureUtils::SwapChannelData(System.Int32,System.Int32,TriLibCore.TextureLoadingContext,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtils_SwapChannelData_mF19EA53DC96204556211D9B27916A47A7EB99A51 (int32_t ___channelIndexA0, int32_t ___channelIndexB1, TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext2, String_t* ___suffix3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41464D53987D1CFCEFD1335FEF3EC7EDA76EC5C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7AA93599C1CC8CBA96C61B824072A0A7C357B71);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCB6E4543D22E141622A74A3EA9CBCF5004EA31D);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_4 = NULL;
	bool V_5 = false;
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_10 = NULL;
	bool V_11 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B10_3 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	int32_t G_B9_3 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	int32_t G_B11_3 = 0;
	int32_t G_B11_4 = 0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* G_B17_0 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* G_B16_0 = NULL;
	String_t* G_B18_0 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* G_B18_1 = NULL;
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_0 = ___textureLoadingContext2;
		NullCheck(L_0);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1;
		L_1 = TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_3 = ___textureLoadingContext2;
		NullCheck(L_3);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4;
		L_4 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
	}

IL_001e:
	{
		V_5 = (bool)G_B3_0;
		bool L_6 = V_5;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		goto IL_01e0;
	}

IL_002a:
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteralC7AA93599C1CC8CBA96C61B824072A0A7C357B71, NULL);
		V_0 = L_7;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_9, L_8, NULL);
		V_1 = L_9;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = V_1;
		int32_t L_11 = ___channelIndexA0;
		NullCheck(L_10);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_10, _stringLiteral41464D53987D1CFCEFD1335FEF3EC7EDA76EC5C1, ((float)L_11), NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = V_1;
		int32_t L_13 = ___channelIndexB1;
		NullCheck(L_12);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_12, _stringLiteralDCB6E4543D22E141622A74A3EA9CBCF5004EA31D, ((float)L_13), NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_14 = ___textureLoadingContext2;
		NullCheck(L_14);
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_15;
		L_15 = TextureLoadingContext_get_Data16_mAEE42E9D8D090F7A705717C961B8BBE9A43E2367(L_14, NULL);
		V_6 = L_15;
		bool L_16;
		L_16 = NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B((&V_6), NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var);
		if (L_16)
		{
			goto IL_006c;
		}
	}
	{
		G_B8_0 = 4;
		goto IL_006e;
	}

IL_006c:
	{
		G_B8_0 = ((int32_t)17);
	}

IL_006e:
	{
		V_2 = G_B8_0;
		int32_t L_17 = V_2;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_18 = ___textureLoadingContext2;
		NullCheck(L_18);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_19;
		L_19 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_18, NULL);
		NullCheck(L_19);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_20 = L_19->___Options_34;
		NullCheck(L_20);
		bool L_21 = L_20->___LoadTexturesAsSRGB_77;
		int32_t L_22;
		L_22 = TextureUtils_GetRenderTextureFormat_m1CF6BD674771B5338D720471A2DFEEC9B20C9EA9(L_17, L_21, NULL);
		V_3 = L_22;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_23 = ___textureLoadingContext2;
		NullCheck(L_23);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_24;
		L_24 = TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16(L_23, NULL);
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_24);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_26 = ___textureLoadingContext2;
		NullCheck(L_26);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_27;
		L_27 = TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16(L_26, NULL);
		NullCheck(L_27);
		int32_t L_28;
		L_28 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_27);
		int32_t L_29 = V_3;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_30 = ___textureLoadingContext2;
		NullCheck(L_30);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_31;
		L_31 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_30, NULL);
		NullCheck(L_31);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_32 = L_31->___Options_34;
		NullCheck(L_32);
		bool L_33 = L_32->___LoadTexturesAsSRGB_77;
		G_B9_0 = L_29;
		G_B9_1 = 0;
		G_B9_2 = L_28;
		G_B9_3 = L_25;
		if (L_33)
		{
			G_B10_0 = L_29;
			G_B10_1 = 0;
			G_B10_2 = L_28;
			G_B10_3 = L_25;
			goto IL_00b3;
		}
	}
	{
		G_B11_0 = 1;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		G_B11_4 = G_B9_3;
		goto IL_00b4;
	}

IL_00b3:
	{
		G_B11_0 = 2;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
		G_B11_4 = G_B10_3;
	}

IL_00b4:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_34;
		L_34 = RenderTexture_GetTemporary_mA6619EA324AAE80B6892107C6968092F6F1B4C45(G_B11_4, G_B11_3, G_B11_2, G_B11_1, G_B11_0, NULL);
		V_4 = L_34;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_35 = V_4;
		NullCheck(L_35);
		bool L_36;
		L_36 = RenderTexture_IsCreated_mB69D4DBD99D74AA5D1F3C9E84A08D6744A031006(L_35, NULL);
		V_7 = (bool)((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_7;
		if (!L_37)
		{
			goto IL_00df;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_38 = V_4;
		NullCheck(L_38);
		RenderTexture_set_useMipMap_mB280A39DAB18372D3A0050FF20F730E5B0B44C32(L_38, (bool)0, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_39 = V_4;
		NullCheck(L_39);
		RenderTexture_set_autoGenerateMips_mDEFAC13954D315DE52B35B34577218D3AD4897A9(L_39, (bool)0, NULL);
	}

IL_00df:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = V_1;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_41 = ___textureLoadingContext2;
		NullCheck(L_41);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_42;
		L_42 = TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16(L_41, NULL);
		NullCheck(L_40);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_40, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_42, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_43 = ___textureLoadingContext2;
		NullCheck(L_43);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_44;
		L_44 = TextureLoadingContext_get_OriginalUnityTexture_m223AF7F307A1FB310676F6047D24048C64E9EA16(L_43, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_46 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_44, L_45, L_46, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_47 = V_4;
		NullCheck(L_47);
		bool L_48;
		L_48 = RenderTexture_get_useMipMap_m76150AD5CF0192BC8DAC05522302D9C13ECD07D7(L_47, NULL);
		V_8 = L_48;
		bool L_49 = V_8;
		if (!L_49)
		{
			goto IL_0117;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_50 = V_4;
		NullCheck(L_50);
		RenderTexture_GenerateMips_m107161ADCD61031F2DF07209C0CA096E9908D4F5(L_50, NULL);
	}

IL_0117:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_51 = ___textureLoadingContext2;
		int32_t L_52;
		L_52 = TextureUtils_GetTextureCreationFlags_mE926ABDC070F5AFCEA33C0BFE8C1B231CCAF21BC(L_51, (bool)0, NULL);
		V_9 = L_52;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_53 = V_4;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_53);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_55 = V_4;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_55);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_57 = V_4;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = RenderTexture_get_graphicsFormat_m615EA91709BD404765C0C85425CE5F3575F90302(L_57, NULL);
		int32_t L_59 = V_9;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_60;
		L_60 = TextureUtils_CreateTexture2DInternal_mF98DDB574290DFF452A9F2C4D7ACB06C11D64766(L_54, L_56, L_58, L_59, NULL);
		V_10 = L_60;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_61 = ___textureLoadingContext2;
		NullCheck(L_61);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_62;
		L_62 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_61, NULL);
		NullCheck(L_62);
		List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* L_63 = L_62->___Allocations_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_64 = V_10;
		NullCheck(L_63);
		List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_inline(L_63, L_64, List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_65 = V_4;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_66 = V_10;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_67 = ___textureLoadingContext2;
		NullCheck(L_67);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_68;
		L_68 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_67, NULL);
		NullCheck(L_68);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_69 = L_68->___Options_34;
		NullCheck(L_69);
		bool L_70 = L_69->___GenerateMipmaps_43;
		TextureUtils_CopyTextureCPU_mC3809064E929C374F1AC7C30F0D070A5D82F6179(L_65, L_66, L_70, (bool)0, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_71 = ___textureLoadingContext2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_72 = V_10;
		NullCheck(L_71);
		TextureLoadingContext_set_UnityTexture_m13DB98CE54BCBBFE76226206AFAFD0107CB67F28_inline(L_71, L_72, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_73 = ___textureLoadingContext2;
		NullCheck(L_73);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_74;
		L_74 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_73, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_75 = ___textureLoadingContext2;
		NullCheck(L_75);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_76;
		L_76 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_75, NULL);
		NullCheck(L_76);
		String_t* L_77;
		L_77 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_76, NULL);
		bool L_78;
		L_78 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_77, NULL);
		G_B16_0 = L_74;
		if (L_78)
		{
			G_B17_0 = L_74;
			goto IL_019c;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_79 = ___textureLoadingContext2;
		NullCheck(L_79);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_80;
		L_80 = TextureLoadingContext_get_UnityTexture_m6BD39DDE0CE4665E9E019181064FAEEAAD9B01A9_inline(L_79, NULL);
		NullCheck(L_80);
		String_t* L_81;
		L_81 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_80, NULL);
		G_B18_0 = L_81;
		G_B18_1 = G_B16_0;
		goto IL_01a1;
	}

IL_019c:
	{
		G_B18_0 = _stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400;
		G_B18_1 = G_B17_0;
	}

IL_01a1:
	{
		String_t* L_82 = ___suffix3;
		String_t* L_83;
		L_83 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B18_0, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_82, NULL);
		NullCheck(G_B18_1);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(G_B18_1, L_83, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_m995C0F14B97C5BF46CCF2E7EF410C1CC05C46409((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_84 = V_4;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_84, NULL);
		bool L_85;
		L_85 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_11 = L_85;
		bool L_86 = V_11;
		if (!L_86)
		{
			goto IL_01d7;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_87 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_87, NULL);
		goto IL_01e0;
	}

IL_01d7:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_88 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_88, NULL);
	}

IL_01e0:
	{
		return;
	}
}
// UnityEngine.Texture2D TriLibCore.Utils.TextureUtils::CreateTexture2DInternal(System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TextureUtils_CreateTexture2DInternal_mF98DDB574290DFF452A9F2C4D7ACB06C11D64766 (int32_t ___width0, int32_t ___height1, int32_t ___graphicsFormat2, int32_t ___textureCreationFlags3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		int32_t L_2 = ___graphicsFormat2;
		int32_t L_3 = ___textureCreationFlags3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Texture2D__ctor_m2E76254260C768B5D64D1664EE3929D198766CEF(L_4, L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = V_0;
		V_1 = L_5;
		goto IL_000f;
	}

IL_000f:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = V_1;
		return L_6;
	}
}
// System.Boolean TriLibCore.Utils.TextureUtils::IsValidTextureFileType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureUtils_IsValidTextureFileType_m6CD62E499D1B1FE2F5F8D011D7994BC84AE9CF05 (String_t* ___filename0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D459FA007D32192A9431B6A7BE658E9DCB2174D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EE91C5F3C9005B425387F0CA231DAE662ADA085);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral334952F55DBD0D53ED7447432DFEB0D893BD7CCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3833F7AEC492E9B13522CC39BB90E8300610029F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B5B4700DFFCE53FFB81288D310D59921A9F8493);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88F1BD8C260CF805C45EA4264672A6AFB579DE27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89A8BD29EF1777BB8CE0B08DAA198620E2D6B044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC742BC3216FA8DFB66453C121F52BDD7F9AEAA09);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9B94A57BAE5E2EF015C7903D5808B129F9B0E6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB43BB3E8DECD1C09712166B30EDD7E49C0204E3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	bool V_4 = false;
	{
		String_t* L_0 = ___filename0;
		String_t* L_1;
		L_1 = FileUtils_GetFileExtension_mE4822C0AEF1DD8417DA323CA947E741082724F99(L_0, (bool)0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		V_2 = L_2;
		String_t* L_3 = V_2;
		V_1 = L_3;
		String_t* L_4 = V_1;
		uint32_t L_5;
		L_5 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mA752F30BB532F6C12210325313DFE69610E47C00(L_4, NULL);
		V_3 = L_5;
		uint32_t L_6 = V_3;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)1748353692)))))
		{
			goto IL_0068;
		}
	}
	{
		uint32_t L_7 = V_3;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)1681978691)))))
		{
			goto IL_0041;
		}
	}
	{
		uint32_t L_8 = V_3;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1316961120))))
		{
			goto IL_011a;
		}
	}
	{
		goto IL_0031;
	}

IL_0031:
	{
		uint32_t L_9 = V_3;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1681978691))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_014c;
	}

IL_0041:
	{
		uint32_t L_10 = V_3;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1702405072))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_004e;
	}

IL_004e:
	{
		uint32_t L_11 = V_3;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1714084033))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_005b;
	}

IL_005b:
	{
		uint32_t L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1748353692))))
		{
			goto IL_00c0;
		}
	}
	{
		goto IL_014c;
	}

IL_0068:
	{
		uint32_t L_13 = V_3;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)1850152239)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_14 = V_3;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1824651960))))
		{
			goto IL_00ab;
		}
	}
	{
		goto IL_007a;
	}

IL_007a:
	{
		uint32_t L_15 = V_3;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1850152239))))
		{
			goto IL_0129;
		}
	}
	{
		goto IL_014c;
	}

IL_008a:
	{
		uint32_t L_16 = V_3;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1476569577))))
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_17 = V_3;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1092644061))))
		{
			goto IL_00de;
		}
	}
	{
		goto IL_009e;
	}

IL_009e:
	{
		uint32_t L_18 = V_3;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-624468176))))
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_014c;
	}

IL_00ab:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral334952F55DBD0D53ED7447432DFEB0D893BD7CCF, NULL);
		if (L_20)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_014c;
	}

IL_00c0:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral3833F7AEC492E9B13522CC39BB90E8300610029F, NULL);
		if (L_22)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_014c;
	}

IL_00cf:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral88F1BD8C260CF805C45EA4264672A6AFB579DE27, NULL);
		if (L_24)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_014c;
	}

IL_00de:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral3B5B4700DFFCE53FFB81288D310D59921A9F8493, NULL);
		if (L_26)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_014c;
	}

IL_00ed:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteralD9B94A57BAE5E2EF015C7903D5808B129F9B0E6F, NULL);
		if (L_28)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_014c;
	}

IL_00fc:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1EE91C5F3C9005B425387F0CA231DAE662ADA085, NULL);
		if (L_30)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_014c;
	}

IL_010b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral0D459FA007D32192A9431B6A7BE658E9DCB2174D, NULL);
		if (L_32)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_014c;
	}

IL_011a:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral89A8BD29EF1777BB8CE0B08DAA198620E2D6B044, NULL);
		if (L_34)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_014c;
	}

IL_0129:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, _stringLiteralDB43BB3E8DECD1C09712166B30EDD7E49C0204E3, NULL);
		if (L_36)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_014c;
	}

IL_0138:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, _stringLiteralC742BC3216FA8DFB66453C121F52BDD7F9AEAA09, NULL);
		if (L_38)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_014c;
	}

IL_0147:
	{
		V_4 = (bool)1;
		goto IL_0151;
	}

IL_014c:
	{
		V_4 = (bool)0;
		goto IL_0151;
	}

IL_0151:
	{
		bool L_39 = V_4;
		return L_39;
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
// UnityEngine.Texture2D TriLibCore.Textures.DefaultTextures::get_White()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DefaultTextures_get_White_m4034FA4B14F6CBEBC4D604D81F84D79A49225996 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_mBEC87DD291ED9662B46356519E0723C0ABB12877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DFC5FEE55F79D7A25FBF5597A667180ED9DC2B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0;
		L_0 = Resources_Load_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_mBEC87DD291ED9662B46356519E0723C0ABB12877(_stringLiteral7DFC5FEE55F79D7A25FBF5597A667180ED9DC2B6, Resources_Load_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_mBEC87DD291ED9662B46356519E0723C0ABB12877_RuntimeMethod_var);
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
// System.Void TriLibCore.Textures.TextureLoaders::LoadTexture(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLoaders_LoadTexture_mF8D68B7605A54F06EDCD096FE1F148C366FBC42A (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CE04C77818442707CAC1B520BAAC4AF805B1479);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0463FCE28FDE37EFF0CF69F3E026C08E10AE6B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B8_0 = 0;
	String_t* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_0 = ___textureLoadingContext0;
		bool L_1;
		L_1 = TextureLoaders_GetTextureDataStream_m3781D420FF33A5EBB09751F469D7618D766AC92D(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_00aa;
	}

IL_0014:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_3 = ___textureLoadingContext0;
		NullCheck(L_3);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_4;
		L_4 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_3, NULL);
		NullCheck(L_4);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_5 = L_4->___Options_34;
		NullCheck(L_5);
		bool L_6 = L_5->___UseUnityNativeTextureLoader_86;
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_8 = ___textureLoadingContext0;
		NullCheck(L_8);
		TextureLoadingContext_set_Components_m50A17BEC6DFF8A4EA836B91B4E37585476903D82(L_8, 4, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_9 = ___textureLoadingContext0;
		TextureUtils_LoadTexture2D_m322A10470887F79499FFC5771A7080FAD98DBE54(L_9, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_10 = ___textureLoadingContext0;
		NullCheck(L_10);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11;
		L_11 = TextureLoadingContext_get_Stream_mE9C57E3F000BF1B2FAC22B4740F4CB7F0284885E(L_10, NULL);
		StreamExtensions_TryToDispose_m30F77959B00471F7DD1125E19D84E0D66A401569(L_11, NULL);
		goto IL_0050;
	}

IL_0047:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_12 = ___textureLoadingContext0;
		TextureLoaders_StbLoadFromContext_m06C68ACDAC5D824E69BC7C9DC999768194FBEA97(L_12, NULL);
	}

IL_0050:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_13 = ___textureLoadingContext0;
		NullCheck(L_13);
		bool L_14;
		L_14 = TextureLoadingContext_get_TextureLoaded_mFF7B26EBD3967A77B57EA89655DBB05346869099(L_13, NULL);
		if (L_14)
		{
			goto IL_006a;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_15 = ___textureLoadingContext0;
		NullCheck(L_15);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_16;
		L_16 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_15, NULL);
		NullCheck(L_16);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_17 = L_16->___Options_34;
		NullCheck(L_17);
		bool L_18 = L_17->___ShowLoadingWarnings_65;
		G_B8_0 = ((int32_t)(L_18));
		goto IL_006b;
	}

IL_006a:
	{
		G_B8_0 = 0;
	}

IL_006b:
	{
		V_2 = (bool)G_B8_0;
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_00aa;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_20 = ___textureLoadingContext0;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_20, NULL);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String TriLibCore.Interfaces.IObject::get_Name() */, IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var, L_21);
		String_t* L_23 = L_22;
		G_B10_0 = L_23;
		G_B10_1 = _stringLiteral1CE04C77818442707CAC1B520BAAC4AF805B1479;
		if (L_23)
		{
			G_B12_0 = L_23;
			G_B12_1 = _stringLiteral1CE04C77818442707CAC1B520BAAC4AF805B1479;
			goto IL_0098;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_24 = ___textureLoadingContext0;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_24, NULL);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String TriLibCore.Interfaces.ITexture::get_Filename() */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_25);
		String_t* L_27 = L_26;
		G_B11_0 = L_27;
		G_B11_1 = G_B10_1;
		if (L_27)
		{
			G_B12_0 = L_27;
			G_B12_1 = G_B10_1;
			goto IL_0098;
		}
	}
	{
		G_B12_0 = _stringLiteralD0463FCE28FDE37EFF0CF69F3E026C08E10AE6B4;
		G_B12_1 = G_B11_1;
	}

IL_0098:
	{
		String_t* L_28;
		L_28 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B12_1, G_B12_0, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_28, NULL);
		goto IL_00aa;
	}

IL_00aa:
	{
		return;
	}
}
// System.Boolean TriLibCore.Textures.TextureLoaders::GetTextureDataStream(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureLoaders_GetTextureDataStream_m3781D420FF33A5EBB09751F469D7618D766AC92D (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Sort_TisTextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD_mAB54F4309F1D69C2A9CD71148D739E60C5916B89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_tC7A2B9CAE6FE5036370E20D7A75E1B055DB230FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetTextureDataStreamU3Eb__1_0_m0DF46FDD93222AE207D05BBB7D4F04C0EC780A31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	TextureMapperU5BU5D_t35F575F1D951980713D2A9E7D85F6AE82ABEA79C* V_3 = NULL;
	int32_t V_4 = 0;
	TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	Comparison_1_tC7A2B9CAE6FE5036370E20D7A75E1B055DB230FB* G_B5_0 = NULL;
	TextureMapperU5BU5D_t35F575F1D951980713D2A9E7D85F6AE82ABEA79C* G_B5_1 = NULL;
	Comparison_1_tC7A2B9CAE6FE5036370E20D7A75E1B055DB230FB* G_B4_0 = NULL;
	TextureMapperU5BU5D_t35F575F1D951980713D2A9E7D85F6AE82ABEA79C* G_B4_1 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B33_0 = 0;
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_0 = ___textureLoadingContext0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_0, NULL);
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_01fe;
	}

IL_0016:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_3 = ___textureLoadingContext0;
		NullCheck(L_3);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_4;
		L_4 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_3, NULL);
		NullCheck(L_4);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_5 = L_4->___Options_34;
		NullCheck(L_5);
		TextureMapperU5BU5D_t35F575F1D951980713D2A9E7D85F6AE82ABEA79C* L_6 = L_5->___TextureMappers_41;
		V_2 = (bool)((!(((RuntimeObject*)(TextureMapperU5BU5D_t35F575F1D951980713D2A9E7D85F6AE82ABEA79C*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_00ab;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_8 = ___textureLoadingContext0;
		NullCheck(L_8);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_9;
		L_9 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_8, NULL);
		NullCheck(L_9);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_10 = L_9->___Options_34;
		NullCheck(L_10);
		TextureMapperU5BU5D_t35F575F1D951980713D2A9E7D85F6AE82ABEA79C* L_11 = L_10->___TextureMappers_41;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251_il2cpp_TypeInfo_var);
		Comparison_1_tC7A2B9CAE6FE5036370E20D7A75E1B055DB230FB* L_12 = ((U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		Comparison_1_tC7A2B9CAE6FE5036370E20D7A75E1B055DB230FB* L_13 = L_12;
		G_B4_0 = L_13;
		G_B4_1 = L_11;
		if (L_13)
		{
			G_B5_0 = L_13;
			G_B5_1 = L_11;
			goto IL_005d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251_il2cpp_TypeInfo_var);
		U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251* L_14 = ((U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Comparison_1_tC7A2B9CAE6FE5036370E20D7A75E1B055DB230FB* L_15 = (Comparison_1_tC7A2B9CAE6FE5036370E20D7A75E1B055DB230FB*)il2cpp_codegen_object_new(Comparison_1_tC7A2B9CAE6FE5036370E20D7A75E1B055DB230FB_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Comparison_1__ctor_mAC4EEA44D50605085A3A5893F2C062C78AECE1A5(L_15, L_14, (intptr_t)((void*)U3CU3Ec_U3CGetTextureDataStreamU3Eb__1_0_m0DF46FDD93222AE207D05BBB7D4F04C0EC780A31_RuntimeMethod_var), NULL);
		Comparison_1_tC7A2B9CAE6FE5036370E20D7A75E1B055DB230FB* L_16 = L_15;
		((U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_16);
		G_B5_0 = L_16;
		G_B5_1 = G_B4_1;
	}

IL_005d:
	{
		Array_Sort_TisTextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD_mAB54F4309F1D69C2A9CD71148D739E60C5916B89(G_B5_1, G_B5_0, Array_Sort_TisTextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD_mAB54F4309F1D69C2A9CD71148D739E60C5916B89_RuntimeMethod_var);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_17 = ___textureLoadingContext0;
		NullCheck(L_17);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_18;
		L_18 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_17, NULL);
		NullCheck(L_18);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_19 = L_18->___Options_34;
		NullCheck(L_19);
		TextureMapperU5BU5D_t35F575F1D951980713D2A9E7D85F6AE82ABEA79C* L_20 = L_19->___TextureMappers_41;
		V_3 = L_20;
		V_4 = 0;
		goto IL_00a3;
	}

IL_007a:
	{
		TextureMapperU5BU5D_t35F575F1D951980713D2A9E7D85F6AE82ABEA79C* L_21 = V_3;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_5 = L_24;
		TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD* L_25 = V_5;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_26 = ___textureLoadingContext0;
		NullCheck(L_25);
		VirtualActionInvoker1< TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* >::Invoke(5 /* System.Void TriLibCore.Mappers.TextureMapper::Map(TriLibCore.TextureLoadingContext) */, L_25, L_26);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_27 = ___textureLoadingContext0;
		NullCheck(L_27);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_28;
		L_28 = TextureLoadingContext_get_Stream_mE9C57E3F000BF1B2FAC22B4740F4CB7F0284885E(L_27, NULL);
		V_6 = (bool)((!(((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_28) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_29 = V_6;
		if (!L_29)
		{
			goto IL_009c;
		}
	}
	{
		goto IL_00aa;
	}

IL_009c:
	{
		int32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00a3:
	{
		int32_t L_31 = V_4;
		TextureMapperU5BU5D_t35F575F1D951980713D2A9E7D85F6AE82ABEA79C* L_32 = V_3;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_007a;
		}
	}

IL_00aa:
	{
	}

IL_00ab:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_33 = ___textureLoadingContext0;
		NullCheck(L_33);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_34;
		L_34 = TextureLoadingContext_get_Stream_mE9C57E3F000BF1B2FAC22B4740F4CB7F0284885E(L_33, NULL);
		if (L_34)
		{
			goto IL_00cb;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_35 = ___textureLoadingContext0;
		NullCheck(L_35);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_36;
		L_36 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_35, NULL);
		NullCheck(L_36);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_37 = L_36->___Options_34;
		NullCheck(L_37);
		TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD* L_38 = L_37->___TextureMapper_40;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_38, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B14_0 = ((int32_t)(L_39));
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B14_0 = 0;
	}

IL_00cc:
	{
		V_7 = (bool)G_B14_0;
		bool L_40 = V_7;
		if (!L_40)
		{
			goto IL_00eb;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_41 = ___textureLoadingContext0;
		NullCheck(L_41);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_42;
		L_42 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_41, NULL);
		NullCheck(L_42);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_43 = L_42->___Options_34;
		NullCheck(L_43);
		TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD* L_44 = L_43->___TextureMapper_40;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_45 = ___textureLoadingContext0;
		NullCheck(L_44);
		VirtualActionInvoker1< TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* >::Invoke(5 /* System.Void TriLibCore.Mappers.TextureMapper::Map(TriLibCore.TextureLoadingContext) */, L_44, L_45);
	}

IL_00eb:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_46 = ___textureLoadingContext0;
		NullCheck(L_46);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_47;
		L_47 = TextureLoadingContext_get_Stream_mE9C57E3F000BF1B2FAC22B4740F4CB7F0284885E(L_46, NULL);
		V_8 = (bool)((((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_47) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_48 = V_8;
		if (!L_48)
		{
			goto IL_01f2;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_49 = ___textureLoadingContext0;
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_49, NULL);
		NullCheck(L_50);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_51;
		L_51 = InterfaceFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(6 /* System.IO.Stream TriLibCore.Interfaces.ITexture::get_DataStream() */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_50);
		if (!L_51)
		{
			goto IL_0121;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_52 = ___textureLoadingContext0;
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_52, NULL);
		NullCheck(L_53);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_54;
		L_54 = InterfaceFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(6 /* System.IO.Stream TriLibCore.Interfaces.ITexture::get_DataStream() */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_53);
		NullCheck(L_54);
		int64_t L_55;
		L_55 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_54);
		G_B20_0 = ((((int64_t)L_55) == ((int64_t)((int64_t)0)))? 1 : 0);
		goto IL_0122;
	}

IL_0121:
	{
		G_B20_0 = 1;
	}

IL_0122:
	{
		V_9 = (bool)G_B20_0;
		bool L_56 = V_9;
		if (!L_56)
		{
			goto IL_01ab;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_57 = ___textureLoadingContext0;
		NullCheck(L_57);
		RuntimeObject* L_58;
		L_58 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_57, NULL);
		NullCheck(L_58);
		String_t* L_59;
		L_59 = InterfaceFuncInvoker0< String_t* >::Invoke(20 /* System.String TriLibCore.Interfaces.ITexture::get_ResolvedFilename() */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_58);
		V_10 = (bool)((((RuntimeObject*)(String_t*)L_59) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_60 = V_10;
		if (!L_60)
		{
			goto IL_0169;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_61 = ___textureLoadingContext0;
		NullCheck(L_61);
		RuntimeObject* L_62;
		L_62 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_61, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_63 = ___textureLoadingContext0;
		NullCheck(L_63);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_64;
		L_64 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_63, NULL);
		NullCheck(L_64);
		String_t* L_65 = L_64->___BasePath_17;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_66 = ___textureLoadingContext0;
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_66, NULL);
		NullCheck(L_67);
		String_t* L_68;
		L_68 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String TriLibCore.Interfaces.ITexture::get_Filename() */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_67);
		String_t* L_69;
		L_69 = FileUtils_FindFile_mB6CBF23E36940B23002033FFA8C86C33576152C4(L_65, L_68, NULL);
		NullCheck(L_62);
		InterfaceActionInvoker1< String_t* >::Invoke(21 /* System.Void TriLibCore.Interfaces.ITexture::set_ResolvedFilename(System.String) */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_62, L_69);
	}

IL_0169:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_70 = ___textureLoadingContext0;
		NullCheck(L_70);
		RuntimeObject* L_71;
		L_71 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_70, NULL);
		NullCheck(L_71);
		String_t* L_72;
		L_72 = InterfaceFuncInvoker0< String_t* >::Invoke(20 /* System.String TriLibCore.Interfaces.ITexture::get_ResolvedFilename() */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_71);
		if (!L_72)
		{
			goto IL_0188;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_73 = ___textureLoadingContext0;
		NullCheck(L_73);
		RuntimeObject* L_74;
		L_74 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_73, NULL);
		NullCheck(L_74);
		String_t* L_75;
		L_75 = InterfaceFuncInvoker0< String_t* >::Invoke(20 /* System.String TriLibCore.Interfaces.ITexture::get_ResolvedFilename() */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_74);
		bool L_76;
		L_76 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_75, NULL);
		G_B26_0 = ((int32_t)(L_76));
		goto IL_0189;
	}

IL_0188:
	{
		G_B26_0 = 0;
	}

IL_0189:
	{
		V_11 = (bool)G_B26_0;
		bool L_77 = V_11;
		if (!L_77)
		{
			goto IL_01aa;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_78 = ___textureLoadingContext0;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_79 = ___textureLoadingContext0;
		NullCheck(L_79);
		RuntimeObject* L_80;
		L_80 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_79, NULL);
		NullCheck(L_80);
		String_t* L_81;
		L_81 = InterfaceFuncInvoker0< String_t* >::Invoke(20 /* System.String TriLibCore.Interfaces.ITexture::get_ResolvedFilename() */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_80);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_82 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_82);
		FileStream__ctor_m158997E4E7ADD1BA5E75F4835882E32137ACB3C9(L_82, L_81, 3, 1, NULL);
		NullCheck(L_78);
		TextureLoadingContext_set_Stream_m9A8D352CE35209D3190A3006F37C67F0C64A12B2(L_78, L_82, NULL);
	}

IL_01aa:
	{
	}

IL_01ab:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_83 = ___textureLoadingContext0;
		NullCheck(L_83);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_84;
		L_84 = TextureLoadingContext_get_Stream_mE9C57E3F000BF1B2FAC22B4740F4CB7F0284885E(L_83, NULL);
		if (L_84)
		{
			goto IL_01d6;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_85 = ___textureLoadingContext0;
		NullCheck(L_85);
		RuntimeObject* L_86;
		L_86 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_85, NULL);
		NullCheck(L_86);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_87;
		L_87 = InterfaceFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(6 /* System.IO.Stream TriLibCore.Interfaces.ITexture::get_DataStream() */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_86);
		if (!L_87)
		{
			goto IL_01d6;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_88 = ___textureLoadingContext0;
		NullCheck(L_88);
		RuntimeObject* L_89;
		L_89 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_88, NULL);
		NullCheck(L_89);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_90;
		L_90 = InterfaceFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(6 /* System.IO.Stream TriLibCore.Interfaces.ITexture::get_DataStream() */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_89);
		NullCheck(L_90);
		int64_t L_91;
		L_91 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_90);
		G_B33_0 = ((((int64_t)L_91) > ((int64_t)((int64_t)0)))? 1 : 0);
		goto IL_01d7;
	}

IL_01d6:
	{
		G_B33_0 = 0;
	}

IL_01d7:
	{
		V_12 = (bool)G_B33_0;
		bool L_92 = V_12;
		if (!L_92)
		{
			goto IL_01f1;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_93 = ___textureLoadingContext0;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_94 = ___textureLoadingContext0;
		NullCheck(L_94);
		RuntimeObject* L_95;
		L_95 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_94, NULL);
		NullCheck(L_95);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_96;
		L_96 = InterfaceFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(6 /* System.IO.Stream TriLibCore.Interfaces.ITexture::get_DataStream() */, ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var, L_95);
		NullCheck(L_93);
		TextureLoadingContext_set_Stream_m9A8D352CE35209D3190A3006F37C67F0C64A12B2(L_93, L_96, NULL);
	}

IL_01f1:
	{
	}

IL_01f2:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_97 = ___textureLoadingContext0;
		NullCheck(L_97);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_98;
		L_98 = TextureLoadingContext_get_Stream_mE9C57E3F000BF1B2FAC22B4740F4CB7F0284885E(L_97, NULL);
		V_1 = (bool)((!(((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_98) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_01fe;
	}

IL_01fe:
	{
		bool L_99 = V_1;
		return L_99;
	}
}
// System.Void TriLibCore.Textures.TextureLoaders::ScanForAlphaPixels(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLoaders_ScanForAlphaPixels_m3CB5996D695F12F0009F27BB44B96E6648F27F9F (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_0 = ___textureLoadingContext0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TextureLoadingContext_get_Components_mCFF27AD976FCED0158744EA1FFCAE082D2E726DB(L_0, NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_00d0;
	}

IL_0017:
	{
		V_0 = (bool)0;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_3 = ___textureLoadingContext0;
		NullCheck(L_3);
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_4;
		L_4 = TextureLoadingContext_get_Data16_mAEE42E9D8D090F7A705717C961B8BBE9A43E2367(L_3, NULL);
		V_3 = L_4;
		bool L_5;
		L_5 = NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B((&V_3), NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0076;
		}
	}
	{
		V_4 = 3;
		goto IL_005b;
	}

IL_0031:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_7 = ___textureLoadingContext0;
		NullCheck(L_7);
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_8;
		L_8 = TextureLoadingContext_get_Data16_mAEE42E9D8D090F7A705717C961B8BBE9A43E2367(L_7, NULL);
		V_3 = L_8;
		int32_t L_9 = V_4;
		uint16_t L_10;
		L_10 = IL2CPP_NATIVEARRAY_GET_ITEM(uint16_t, ((&V_3))->___m_Buffer_0, L_9);
		V_5 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)65535)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_0073;
	}

IL_0054:
	{
		int32_t L_12 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_12, 4));
	}

IL_005b:
	{
		int32_t L_13 = V_4;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_14 = ___textureLoadingContext0;
		NullCheck(L_14);
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_15;
		L_15 = TextureLoadingContext_get_Data16_mAEE42E9D8D090F7A705717C961B8BBE9A43E2367(L_14, NULL);
		V_3 = L_15;
		int32_t L_16;
		L_16 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_3))->___m_Length_1);
		V_6 = (bool)((((int32_t)L_13) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_6;
		if (L_17)
		{
			goto IL_0031;
		}
	}

IL_0073:
	{
		goto IL_00c1;
	}

IL_0076:
	{
		V_7 = 3;
		goto IL_00a7;
	}

IL_007c:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_18 = ___textureLoadingContext0;
		NullCheck(L_18);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_19;
		L_19 = TextureLoadingContext_get_Data_m0D5DEF2219C7DA98B6D4F26BDC420505511B67A5(L_18, NULL);
		V_9 = L_19;
		int32_t L_20 = V_7;
		uint8_t L_21;
		L_21 = IL2CPP_NATIVEARRAY_GET_ITEM(uint8_t, ((&V_9))->___m_Buffer_0, L_20);
		V_8 = (bool)((((int32_t)L_21) < ((int32_t)((int32_t)255)))? 1 : 0);
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_00a0;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_00c0;
	}

IL_00a0:
	{
		int32_t L_23 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_23, 4));
	}

IL_00a7:
	{
		int32_t L_24 = V_7;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_25 = ___textureLoadingContext0;
		NullCheck(L_25);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_26;
		L_26 = TextureLoadingContext_get_Data_m0D5DEF2219C7DA98B6D4F26BDC420505511B67A5(L_25, NULL);
		V_9 = L_26;
		int32_t L_27;
		L_27 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_9))->___m_Length_1);
		V_10 = (bool)((((int32_t)L_24) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_10;
		if (L_28)
		{
			goto IL_007c;
		}
	}

IL_00c0:
	{
	}

IL_00c1:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_29 = ___textureLoadingContext0;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_30 = L_29;
		NullCheck(L_30);
		bool L_31;
		L_31 = TextureLoadingContext_get_HasAlpha_mEFAB62D139DF09A8960699A928032C87FD307908(L_30, NULL);
		bool L_32 = V_0;
		NullCheck(L_30);
		TextureLoadingContext_set_HasAlpha_m432BAE8721E1C749AC8C13899A33F9C90BE3752A(L_30, (bool)((int32_t)((int32_t)L_31|(int32_t)L_32)), NULL);
	}

IL_00d0:
	{
		return;
	}
}
// System.Void TriLibCore.Textures.TextureLoaders::StbLoadFromContext(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLoaders_StbLoadFromContext_m06C68ACDAC5D824E69BC7C9DC999768194FBEA97 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m95E3340366C42C0FCFACE7A6B2F65B00459E8CD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_2;
	memset((&V_2), 0, sizeof(V_2));
	stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	void* V_7 = NULL;
	void* V_8 = NULL;
	int32_t V_9 = 0;
	Exception_t* V_10 = NULL;
	bool V_11 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	void* G_B8_0 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B16_0 = 0;
	String_t* G_B20_0 = NULL;
	String_t* G_B20_1 = NULL;
	String_t* G_B18_0 = NULL;
	String_t* G_B18_1 = NULL;
	String_t* G_B19_0 = NULL;
	String_t* G_B19_1 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_0 = ___textureLoadingContext0;
			NullCheck(L_0);
			NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_1;
			L_1 = TextureLoadingContext_get_Data_m0D5DEF2219C7DA98B6D4F26BDC420505511B67A5(L_0, NULL);
			V_1 = L_1;
			bool L_2;
			L_2 = NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081((&V_1), NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
			if (L_2)
			{
				goto IL_0023_1;
			}
		}
		{
			TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_3 = ___textureLoadingContext0;
			NullCheck(L_3);
			NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_4;
			L_4 = TextureLoadingContext_get_Data16_mAEE42E9D8D090F7A705717C961B8BBE9A43E2367(L_3, NULL);
			V_2 = L_4;
			bool L_5;
			L_5 = NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B((&V_2), NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var);
			G_B4_0 = ((int32_t)(L_5));
			goto IL_0024_1;
		}

IL_0023_1:
		{
			G_B4_0 = 1;
		}

IL_0024_1:
		{
			V_0 = (bool)G_B4_0;
			bool L_6 = V_0;
			if (!L_6)
			{
				goto IL_00bd_1;
			}
		}
		{
			TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_7 = ___textureLoadingContext0;
			NullCheck(L_7);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8;
			L_8 = TextureLoadingContext_get_Stream_mE9C57E3F000BF1B2FAC22B4740F4CB7F0284885E(L_7, NULL);
			stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_9 = (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7*)il2cpp_codegen_object_new(stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var);
			NullCheck(L_9);
			stbi__context__ctor_mC829A0366DACB27129BF977D4B90B9C2326DD40F(L_9, L_8, NULL);
			V_3 = L_9;
			il2cpp_codegen_runtime_class_init_inline(StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
			StbImage_stbi_set_flip_vertically_on_load_mBFA93F59A9C3BD919D1E377EB72482FBA885B089(1, NULL);
			stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_10 = V_3;
			void* L_11;
			L_11 = StbImage_stbi__load_and_postprocess_mE51FEBF5B71BD457A7E4D4477090C93341BBC2B0(L_10, (int32_t*)((uintptr_t)(&V_4)), (int32_t*)((uintptr_t)(&V_5)), (int32_t*)((uintptr_t)(&V_6)), 4, NULL);
			V_7 = L_11;
			TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_12 = ___textureLoadingContext0;
			NullCheck(L_12);
			NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_13;
			L_13 = TextureLoadingContext_get_Data16_mAEE42E9D8D090F7A705717C961B8BBE9A43E2367(L_12, NULL);
			V_2 = L_13;
			bool L_14;
			L_14 = NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B((&V_2), NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_006e_1;
			}
		}
		{
			TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_15 = ___textureLoadingContext0;
			NullCheck(L_15);
			NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_16;
			L_16 = TextureLoadingContext_get_Data_m0D5DEF2219C7DA98B6D4F26BDC420505511B67A5(L_15, NULL);
			void* L_17;
			L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_16, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
			G_B8_0 = L_17;
			goto IL_0079_1;
		}

IL_006e_1:
		{
			TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_18 = ___textureLoadingContext0;
			NullCheck(L_18);
			NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_19;
			L_19 = TextureLoadingContext_get_Data16_mAEE42E9D8D090F7A705717C961B8BBE9A43E2367(L_18, NULL);
			void* L_20;
			L_20 = NativeArrayUnsafeUtility_GetUnsafePtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m95E3340366C42C0FCFACE7A6B2F65B00459E8CD7(L_19, NativeArrayUnsafeUtility_GetUnsafePtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m95E3340366C42C0FCFACE7A6B2F65B00459E8CD7_RuntimeMethod_var);
			G_B8_0 = L_20;
		}

IL_0079_1:
		{
			V_8 = G_B8_0;
			TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_21 = ___textureLoadingContext0;
			NullCheck(L_21);
			NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_22;
			L_22 = TextureLoadingContext_get_Data16_mAEE42E9D8D090F7A705717C961B8BBE9A43E2367(L_21, NULL);
			V_2 = L_22;
			bool L_23;
			L_23 = NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B((&V_2), NativeArray_1_get_IsCreated_mE20C86CDF117D83540556807F8C35F5DF78CF16B_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_0094_1;
			}
		}
		{
			int32_t L_24 = V_4;
			int32_t L_25 = V_5;
			G_B11_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_24, L_25)), 4));
			goto IL_009d_1;
		}

IL_0094_1:
		{
			int32_t L_26 = V_4;
			int32_t L_27 = V_5;
			G_B11_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_26, L_27)), 4)), 2));
		}

IL_009d_1:
		{
			V_9 = G_B11_0;
			void* L_28 = V_8;
			void* L_29 = V_7;
			int32_t L_30 = V_9;
			UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_28, L_29, ((int64_t)L_30), NULL);
			void* L_31 = V_7;
			il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
			CRuntime_free_m9820C32B8AB5BB989140A905BE68364EDAFBD15D(L_31, NULL);
			TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_32 = ___textureLoadingContext0;
			NullCheck(L_32);
			TextureLoadingContext_set_TextureLoaded_m84833D48774241C258393DA527A252C3856BB0B0(L_32, (bool)1, NULL);
		}

IL_00bd_1:
		{
			goto IL_0126;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c0;
		}
		throw e;
	}

CATCH_00c0:
	{// begin catch(System.Exception)
		{
			V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_33 = ___textureLoadingContext0;
			NullCheck(L_33);
			AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_34;
			L_34 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_33, NULL);
			NullCheck(L_34);
			AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_35 = L_34->___Options_34;
			NullCheck(L_35);
			bool L_36 = L_35->___ShowLoadingWarnings_65;
			if (!L_36)
			{
				goto IL_00e0;
			}
		}
		{
			TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_37 = ___textureLoadingContext0;
			NullCheck(L_37);
			bool L_38;
			L_38 = TextureLoadingContext_get_TextureLoaded_mFF7B26EBD3967A77B57EA89655DBB05346869099(L_37, NULL);
			G_B16_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
			goto IL_00e1;
		}

IL_00e0:
		{
			G_B16_0 = 0;
		}

IL_00e1:
		{
			V_11 = (bool)G_B16_0;
			bool L_39 = V_11;
			if (!L_39)
			{
				goto IL_0123;
			}
		}
		{
			TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_40 = ___textureLoadingContext0;
			NullCheck(L_40);
			RuntimeObject* L_41;
			L_41 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_40, NULL);
			NullCheck(L_41);
			String_t* L_42;
			L_42 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String TriLibCore.Interfaces.IObject::get_Name() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IObject_t2E20027AB39DAC66068F50E33ECB233711D9DA5F_il2cpp_TypeInfo_var)), L_41);
			String_t* L_43 = L_42;
			G_B18_0 = L_43;
			G_B18_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral267DF2A157952DDD8F6975E65DF5649A1D262662));
			if (L_43)
			{
				G_B20_0 = L_43;
				G_B20_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral267DF2A157952DDD8F6975E65DF5649A1D262662));
				goto IL_0110;
			}
		}
		{
			TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_44 = ___textureLoadingContext0;
			NullCheck(L_44);
			RuntimeObject* L_45;
			L_45 = TextureLoadingContext_get_Texture_m3049F34D84FBAE1F1A77BF63A815FE294F8F1A2D(L_44, NULL);
			NullCheck(L_45);
			String_t* L_46;
			L_46 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String TriLibCore.Interfaces.ITexture::get_Filename() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITexture_t4CD71425D2DAB0C38B4E57E909DEAC9A9AC89FE8_il2cpp_TypeInfo_var)), L_45);
			String_t* L_47 = L_46;
			G_B19_0 = L_47;
			G_B19_1 = G_B18_1;
			if (L_47)
			{
				G_B20_0 = L_47;
				G_B20_1 = G_B18_1;
				goto IL_0110;
			}
		}
		{
			G_B20_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0463FCE28FDE37EFF0CF69F3E026C08E10AE6B4));
			G_B20_1 = G_B19_1;
		}

IL_0110:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var)));
			String_t* L_48 = ((StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var))))->___stbi__g_failure_reason_0;
			Exception_t* L_49 = V_10;
			String_t* L_50;
			L_50 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(G_B20_1, G_B20_0, L_48, L_49, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_50, NULL);
		}

IL_0123:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0126;
		}
	}// end catch (depth: 1)

IL_0126:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_51 = ___textureLoadingContext0;
		NullCheck(L_51);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_52;
		L_52 = TextureLoadingContext_get_Stream_mE9C57E3F000BF1B2FAC22B4740F4CB7F0284885E(L_51, NULL);
		StreamExtensions_TryToDispose_m30F77959B00471F7DD1125E19D84E0D66A401569(L_52, NULL);
		return;
	}
}
// System.Void TriLibCore.Textures.TextureLoaders::WriteToFile(System.IO.Stream,System.String,System.Int32,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLoaders_WriteToFile_m4B240F6652DB4289909F5194869387A092993AD3 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, String_t* ___destinationFile1, int32_t ___bufferSize2, int32_t ___mode3, int32_t ___access4, int32_t ___share5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	bool V_1 = false;
	{
		String_t* L_0 = ___destinationFile1;
		int32_t L_1 = ___mode3;
		int32_t L_2 = ___access4;
		int32_t L_3 = ___share5;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_4, L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_5 = V_0;
					if (!L_5)
					{
						goto IL_003f;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_6 = V_0;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_003f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0020_1;
			}

IL_0010_1:
			{
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_7 = V_0;
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = ___stream0;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = VirtualFuncInvoker0< int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::ReadByte() */, L_8);
				NullCheck(L_7);
				VirtualActionInvoker1< uint8_t >::Invoke(37 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_7, (uint8_t)((int32_t)(uint8_t)L_9));
			}

IL_0020_1:
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = ___stream0;
				NullCheck(L_10);
				int64_t L_11;
				L_11 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_10);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = ___stream0;
				NullCheck(L_12);
				int64_t L_13;
				L_13 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_12);
				V_1 = (bool)((((int64_t)L_11) < ((int64_t)L_13))? 1 : 0);
				bool L_14 = V_1;
				if (L_14)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0040;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		return;
	}
}
// System.Void TriLibCore.Textures.TextureLoaders::UpdateResolution(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLoaders_UpdateResolution_m4B3EE94F8030622563CC14502D2A664AC211171C (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_0 = ___textureLoadingContext0;
		NullCheck(L_0);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1;
		L_1 = TextureLoadingContext_get_Stream_mE9C57E3F000BF1B2FAC22B4740F4CB7F0284885E(L_0, NULL);
		stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_2 = (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7*)il2cpp_codegen_object_new(stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		stbi__context__ctor_mC829A0366DACB27129BF977D4B90B9C2326DD40F(L_2, L_1, NULL);
		V_0 = L_2;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = StbImage_stbi__jpeg_info_m2A16EACADB7E412F1A15E09E73C73C9CEA5ECC95(L_3, (int32_t*)((uintptr_t)(&V_1)), (int32_t*)((uintptr_t)(&V_2)), (int32_t*)((uintptr_t)(&V_3)), NULL);
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = StbImage_stbi__png_info_m9ADDC29EE32885099EF4E91A948E4153EE37ECD0(L_5, (int32_t*)((uintptr_t)(&V_1)), (int32_t*)((uintptr_t)(&V_2)), (int32_t*)((uintptr_t)(&V_3)), NULL);
		G_B3_0 = ((((int32_t)L_6) > ((int32_t)0))? 1 : 0);
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
	}

IL_003b:
	{
		V_4 = (bool)G_B3_0;
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_8 = ___textureLoadingContext0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		TextureLoadingContext_set_Width_mB440C3BFD9C3B6A8549A1683AECEBFB53D2A46E8(L_8, L_9, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_10 = ___textureLoadingContext0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		TextureLoadingContext_set_Height_m1D34AA8DF31E3CBCF05DB30074902A105D014EBE(L_10, L_11, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_12 = ___textureLoadingContext0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		TextureLoadingContext_set_Components_m50A17BEC6DFF8A4EA836B91B4E37585476903D82(L_12, L_13, NULL);
	}

IL_005b:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_14 = ___textureLoadingContext0;
		NullCheck(L_14);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15;
		L_15 = TextureLoadingContext_get_Stream_mE9C57E3F000BF1B2FAC22B4740F4CB7F0284885E(L_14, NULL);
		NullCheck(L_15);
		int64_t L_16;
		L_16 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(30 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_15, ((int64_t)0), 0);
		return;
	}
}
// System.Void TriLibCore.Textures.TextureLoaders::PostProcessTexture(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLoaders_PostProcessTexture_mE9E49A07BDE3B4A2782B73D41A2933470D4AEA58 (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMaterial_t803D44AB6CC3544CCD396131BAE42FB12B128EE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_0 = ___textureLoadingContext0;
		NullCheck(L_0);
		bool L_1 = L_0->___TextureProcessed_3;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		goto IL_0063;
	}

IL_000e:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_3 = ___textureLoadingContext0;
		NullCheck(L_3);
		MaterialMapperContext_t2BDF775C916A28A411960E3787DC933D2E9F0042* L_4 = L_3->___MaterialMapperContext_2;
		NullCheck(L_4);
		VirtualMaterial_t0610B7A6460E24DADF06569B4DA1D9FC487A52DB* L_5 = L_4->___VirtualMaterial_1;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_6 = ___textureLoadingContext0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___TextureType_0;
		G_B5_0 = ((((int32_t)L_7) == ((int32_t)1))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B5_0 = 0;
	}

IL_0027:
	{
		V_1 = (bool)G_B5_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_9 = ___textureLoadingContext0;
		NullCheck(L_9);
		MaterialMapperContext_t2BDF775C916A28A411960E3787DC933D2E9F0042* L_10 = L_9->___MaterialMapperContext_2;
		NullCheck(L_10);
		VirtualMaterial_t0610B7A6460E24DADF06569B4DA1D9FC487A52DB* L_11 = L_10->___VirtualMaterial_1;
		VirtualMaterial_t0610B7A6460E24DADF06569B4DA1D9FC487A52DB* L_12 = L_11;
		NullCheck(L_12);
		bool L_13 = L_12->___HasAlpha_0;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_14 = ___textureLoadingContext0;
		NullCheck(L_14);
		bool L_15;
		L_15 = TextureLoadingContext_get_HasAlpha_mEFAB62D139DF09A8960699A928032C87FD307908(L_14, NULL);
		NullCheck(L_12);
		L_12->___HasAlpha_0 = (bool)((int32_t)((int32_t)L_13|(int32_t)L_15));
	}

IL_004a:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_16 = ___textureLoadingContext0;
		NullCheck(L_16);
		MaterialMapperContext_t2BDF775C916A28A411960E3787DC933D2E9F0042* L_17 = L_16->___MaterialMapperContext_2;
		NullCheck(L_17);
		RuntimeObject* L_18 = L_17->___Material_0;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_19 = ___textureLoadingContext0;
		NullCheck(L_18);
		bool L_20;
		L_20 = InterfaceFuncInvoker1< bool, TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* >::Invoke(22 /* System.Boolean TriLibCore.Interfaces.IMaterial::PostProcessTexture(TriLibCore.TextureLoadingContext) */, IMaterial_t803D44AB6CC3544CCD396131BAE42FB12B128EE5_il2cpp_TypeInfo_var, L_18, L_19);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_21 = ___textureLoadingContext0;
		NullCheck(L_21);
		L_21->___TextureProcessed_3 = (bool)1;
	}

IL_0063:
	{
		return;
	}
}
// System.Void TriLibCore.Textures.TextureLoaders::CreateTexture(TriLibCore.TextureLoadingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLoaders_CreateTexture_mE8F2BC08BA77689CE5D9A64A36064106219F041A (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* ___textureLoadingContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m32DC218761A46EBB56071AEE546588E3DA5AA4EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m7406D4DCC9D0DFC5982B9AEFF7E330D44E5F6A04_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* G_B5_0 = NULL;
	TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* G_B6_1 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_0 = ___textureLoadingContext0;
		bool L_1;
		L_1 = TextureLoaders_GetTextureDataStream_m3781D420FF33A5EBB09751F469D7618D766AC92D(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_00db;
	}

IL_0014:
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_3 = ___textureLoadingContext0;
		NullCheck(L_3);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4;
		L_4 = TextureLoadingContext_get_Stream_mE9C57E3F000BF1B2FAC22B4740F4CB7F0284885E(L_3, NULL);
		Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A L_5;
		L_5 = ImageInfo_FromStream_m6235964F45A8A7C0AAB2046E9016131BC3325567(L_4, NULL);
		V_0 = L_5;
		bool L_6;
		L_6 = Nullable_1_get_HasValue_m32DC218761A46EBB56071AEE546588E3DA5AA4EA_inline((&V_0), Nullable_1_get_HasValue_m32DC218761A46EBB56071AEE546588E3DA5AA4EA_RuntimeMethod_var);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_00db;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_8 = ___textureLoadingContext0;
		ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C L_9;
		L_9 = Nullable_1_get_Value_m7406D4DCC9D0DFC5982B9AEFF7E330D44E5F6A04((&V_0), Nullable_1_get_Value_m7406D4DCC9D0DFC5982B9AEFF7E330D44E5F6A04_RuntimeMethod_var);
		int32_t L_10 = L_9.___Width_0;
		NullCheck(L_8);
		TextureLoadingContext_set_Width_mB440C3BFD9C3B6A8549A1683AECEBFB53D2A46E8(L_8, L_10, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_11 = ___textureLoadingContext0;
		ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C L_12;
		L_12 = Nullable_1_get_Value_m7406D4DCC9D0DFC5982B9AEFF7E330D44E5F6A04((&V_0), Nullable_1_get_Value_m7406D4DCC9D0DFC5982B9AEFF7E330D44E5F6A04_RuntimeMethod_var);
		int32_t L_13 = L_12.___Height_1;
		NullCheck(L_11);
		TextureLoadingContext_set_Height_m1D34AA8DF31E3CBCF05DB30074902A105D014EBE(L_11, L_13, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_14 = ___textureLoadingContext0;
		ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C L_15;
		L_15 = Nullable_1_get_Value_m7406D4DCC9D0DFC5982B9AEFF7E330D44E5F6A04((&V_0), Nullable_1_get_Value_m7406D4DCC9D0DFC5982B9AEFF7E330D44E5F6A04_RuntimeMethod_var);
		int32_t L_16 = L_15.___ColorComponents_2;
		NullCheck(L_14);
		TextureLoadingContext_set_Components_m50A17BEC6DFF8A4EA836B91B4E37585476903D82(L_14, L_16, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_17 = ___textureLoadingContext0;
		ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C L_18;
		L_18 = Nullable_1_get_Value_m7406D4DCC9D0DFC5982B9AEFF7E330D44E5F6A04((&V_0), Nullable_1_get_Value_m7406D4DCC9D0DFC5982B9AEFF7E330D44E5F6A04_RuntimeMethod_var);
		int32_t L_19 = L_18.___BitsPerChannel_3;
		G_B4_0 = L_17;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)16))))
		{
			G_B5_0 = L_17;
			goto IL_007c;
		}
	}
	{
		G_B6_0 = 4;
		G_B6_1 = G_B4_0;
		goto IL_007d;
	}

IL_007c:
	{
		G_B6_0 = 8;
		G_B6_1 = G_B5_0;
	}

IL_007d:
	{
		NullCheck(G_B6_1);
		G_B6_1->___CreationBytesPerPixel_7 = G_B6_0;
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_20 = ___textureLoadingContext0;
		NullCheck(L_20);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_21;
		L_21 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_20, NULL);
		NullCheck(L_21);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_22 = L_21->___Options_34;
		NullCheck(L_22);
		int32_t L_23 = L_22->___MaxTexturesResolution_84;
		if (!L_23)
		{
			goto IL_00cc;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_24 = ___textureLoadingContext0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = TextureLoadingContext_get_Width_mA97228B3507021003BB6FA170C579CAFC7DE6452(L_24, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_26 = ___textureLoadingContext0;
		NullCheck(L_26);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_27;
		L_27 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_26, NULL);
		NullCheck(L_27);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_28 = L_27->___Options_34;
		NullCheck(L_28);
		int32_t L_29 = L_28->___MaxTexturesResolution_84;
		if ((((int32_t)L_25) > ((int32_t)L_29)))
		{
			goto IL_00c9;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_30 = ___textureLoadingContext0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = TextureLoadingContext_get_Height_m8280F4A60EBAB6EF724624FA3E8E3647D44A9CBF(L_30, NULL);
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_32 = ___textureLoadingContext0;
		NullCheck(L_32);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_33;
		L_33 = TextureLoadingContext_get_Context_mF9C130567890BAC25D113701C49F3EE5074A2F0C_inline(L_32, NULL);
		NullCheck(L_33);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_34 = L_33->___Options_34;
		NullCheck(L_34);
		int32_t L_35 = L_34->___MaxTexturesResolution_84;
		G_B10_0 = ((((int32_t)((((int32_t)L_31) > ((int32_t)L_35))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ca;
	}

IL_00c9:
	{
		G_B10_0 = 0;
	}

IL_00ca:
	{
		G_B12_0 = G_B10_0;
		goto IL_00cd;
	}

IL_00cc:
	{
		G_B12_0 = 1;
	}

IL_00cd:
	{
		V_3 = (bool)G_B12_0;
		bool L_36 = V_3;
		if (!L_36)
		{
			goto IL_00da;
		}
	}
	{
		TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* L_37 = ___textureLoadingContext0;
		TextureUtils_CreateTexture2D_m2E6871367C92B01C90057E769A14D214C215D617(L_37, NULL);
	}

IL_00da:
	{
	}

IL_00db:
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
// System.Void TriLibCore.Textures.TextureLoaders/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBAE6C9A41BC15125B04C5F8566BF1B4623A22201 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251* L_0 = (U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251*)il2cpp_codegen_object_new(U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m6C9E79750343BD6E3F0B41906F4791670A48A0E1(L_0, NULL);
		((U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void TriLibCore.Textures.TextureLoaders/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6C9E79750343BD6E3F0B41906F4791670A48A0E1 (U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 TriLibCore.Textures.TextureLoaders/<>c::<GetTextureDataStream>b__1_0(TriLibCore.Mappers.TextureMapper,TriLibCore.Mappers.TextureMapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetTextureDataStreamU3Eb__1_0_m0DF46FDD93222AE207D05BBB7D4F04C0EC780A31 (U3CU3Ec_tF2389CF0248567F358367B79D1E9AC2BB240B251* __this, TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD* ___a0, TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD* ___b1, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD* L_0 = ___a0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___CheckingOrder_4;
		TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD* L_2 = ___b1;
		NullCheck(L_2);
		int32_t L_3 = L_2->___CheckingOrder_4;
		if ((((int32_t)L_1) > ((int32_t)L_3)))
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = (-1);
	}

IL_0012:
	{
		return G_B3_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mA752F30BB532F6C12210325313DFE69610E47C00 (String_t* ___s0, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Log_m116F062EEBF1C53EC8D18C9B1748E999EF9424EF_inline (float ___f0, float ___p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = ___f0;
		float L_1 = ___p1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Log_m5A3BBBF06AB82F25C885812E07D27B473CF43054(((double)L_0), ((double)L_1), NULL);
		V_0 = ((float)L_2);
		goto IL_000e;
	}

IL_000e:
	{
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextureLoadingContext_set_UnityTexture_m13DB98CE54BCBBFE76226206AFAFD0107CB67F28_inline (TextureLoadingContext_t0DB0AE7751B1A9E54C1612F112D2A295ED84D879* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) 
{
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___value0;
		__this->___U3CUnityTextureU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUnityTextureU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = (float)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m32DC218761A46EBB56071AEE546588E3DA5AA4EA_gshared_inline (Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
