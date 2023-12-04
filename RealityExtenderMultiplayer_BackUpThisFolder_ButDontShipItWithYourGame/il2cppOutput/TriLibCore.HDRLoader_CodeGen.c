#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String HDRLoader.BinaryReaderExtension::ReadLine(System.IO.BinaryReader)
extern void BinaryReaderExtension_ReadLine_m31B8505D6C4106B46A7A6B362A2CB9E6428F92B9 (void);
// 0x00000002 System.Void HDRLoader.BinaryReaderExtension::ReadFully(System.IO.BinaryReader,System.Byte[],System.Int32,System.Nullable`1<System.Int32>)
extern void BinaryReaderExtension_ReadFully_mE03E75560C20DBD58F1D7F69BD60E4A60160203F (void);
// 0x00000003 UnityEngine.Texture2D HDRLoader.HDRLoader::Load(System.IO.Stream,System.Single&,System.Single&)
extern void HDRLoader_Load_m3A35757670CC8C4F525A77671CDC20ECC8FE766A (void);
// 0x00000004 HDRLoader.Rgbe/Header HDRLoader.Rgbe::ReadHeader(System.IO.BinaryReader)
extern void Rgbe_ReadHeader_m9687F17691AA6CE8AB4416D070C9D20B6E9B9093 (void);
// 0x00000005 System.Void HDRLoader.Rgbe::ReadPixelsRaw(System.IO.BinaryReader,System.Byte[],System.Int32,System.Int32)
extern void Rgbe_ReadPixelsRaw_mAB1B9D0364E373C9E72E62EB9F1AEB1BC58652D0 (void);
// 0x00000006 System.Void HDRLoader.Rgbe::ReadPixelsRawRle(System.IO.BinaryReader,System.Byte[],System.Int32,System.Int32,System.Int32)
extern void Rgbe_ReadPixelsRawRle_m407C0DE29643C6D56647622DE2FE105DA54D3F68 (void);
// 0x00000007 System.Void HDRLoader.Rgbe::Rgbe2Float(Unity.Collections.NativeArray`1<System.Single>,System.Byte[],System.Int32,System.Int32)
extern void Rgbe_Rgbe2Float_mEBE0A91D30FC57EE49639796953391CE82E38AEA (void);
// 0x00000008 System.Void HDRLoader.Rgbe::.ctor()
extern void Rgbe__ctor_mF4C213C5D09D391A76AC0A7EB665FD8E202D9D4C (void);
// 0x00000009 System.Void HDRLoader.Rgbe/Header::.ctor(System.Int32,System.String,System.Single,System.Single,System.Int32,System.Int32)
extern void Header__ctor_m45C21DF1BF8408B65DF96908DA72F692386AA259 (void);
// 0x0000000A System.Single HDRLoader.Rgbe/Header::get_Exposure()
extern void Header_get_Exposure_m803942C1502B0C209BF95C544E325CE2C58B8D75 (void);
// 0x0000000B System.Single HDRLoader.Rgbe/Header::get_Gamma()
extern void Header_get_Gamma_m90B90962518B5ED4B3493F8CD51512D2B2D44453 (void);
// 0x0000000C System.Int32 HDRLoader.Rgbe/Header::get_Height()
extern void Header_get_Height_m1A2C5286B49E72C6EBEE8C76ECA9DC6B259BB339 (void);
// 0x0000000D System.String HDRLoader.Rgbe/Header::get_ProgramType()
extern void Header_get_ProgramType_m8C2259F35CF82FCD32F542FB58F17F44B11E6D47 (void);
// 0x0000000E System.Int32 HDRLoader.Rgbe/Header::get_Width()
extern void Header_get_Width_m5794684C131F88D75D1E9BE43B3F472FE1956BC4 (void);
// 0x0000000F System.Boolean HDRLoader.Rgbe/Header::get_IsExposureValid()
extern void Header_get_IsExposureValid_m1B8E8D41D008EDB0C9418B54822C22DB4B16DA45 (void);
// 0x00000010 System.Boolean HDRLoader.Rgbe/Header::get_IsGammaValid()
extern void Header_get_IsGammaValid_m94EB33918CEA369DFD7B787BBD932A804F6F139E (void);
// 0x00000011 System.Boolean HDRLoader.Rgbe/Header::get_IsProgramTypeValid()
extern void Header_get_IsProgramTypeValid_m718E50C447948BC01F78B62A690132BF73CEEF33 (void);
// 0x00000012 System.String HDRLoader.Rgbe/Header::ToString()
extern void Header_ToString_m8CD9E0DE52BDB0FB624E1CDAF73CB1AEB15E0DF3 (void);
static Il2CppMethodPointer s_methodPointers[18] = 
{
	BinaryReaderExtension_ReadLine_m31B8505D6C4106B46A7A6B362A2CB9E6428F92B9,
	BinaryReaderExtension_ReadFully_mE03E75560C20DBD58F1D7F69BD60E4A60160203F,
	HDRLoader_Load_m3A35757670CC8C4F525A77671CDC20ECC8FE766A,
	Rgbe_ReadHeader_m9687F17691AA6CE8AB4416D070C9D20B6E9B9093,
	Rgbe_ReadPixelsRaw_mAB1B9D0364E373C9E72E62EB9F1AEB1BC58652D0,
	Rgbe_ReadPixelsRawRle_m407C0DE29643C6D56647622DE2FE105DA54D3F68,
	Rgbe_Rgbe2Float_mEBE0A91D30FC57EE49639796953391CE82E38AEA,
	Rgbe__ctor_mF4C213C5D09D391A76AC0A7EB665FD8E202D9D4C,
	Header__ctor_m45C21DF1BF8408B65DF96908DA72F692386AA259,
	Header_get_Exposure_m803942C1502B0C209BF95C544E325CE2C58B8D75,
	Header_get_Gamma_m90B90962518B5ED4B3493F8CD51512D2B2D44453,
	Header_get_Height_m1A2C5286B49E72C6EBEE8C76ECA9DC6B259BB339,
	Header_get_ProgramType_m8C2259F35CF82FCD32F542FB58F17F44B11E6D47,
	Header_get_Width_m5794684C131F88D75D1E9BE43B3F472FE1956BC4,
	Header_get_IsExposureValid_m1B8E8D41D008EDB0C9418B54822C22DB4B16DA45,
	Header_get_IsGammaValid_m94EB33918CEA369DFD7B787BBD932A804F6F139E,
	Header_get_IsProgramTypeValid_m718E50C447948BC01F78B62A690132BF73CEEF33,
	Header_ToString_m8CD9E0DE52BDB0FB624E1CDAF73CB1AEB15E0DF3,
};
static const int32_t s_InvokerIndices[18] = 
{
	11142,
	9243,
	9581,
	11142,
	9245,
	8730,
	1283,
	7856,
	333,
	7770,
	7770,
	7680,
	7719,
	7680,
	7611,
	7611,
	7611,
	7719,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_TriLibCore_HDRLoader_CodeGenModule;
const Il2CppCodeGenModule g_TriLibCore_HDRLoader_CodeGenModule = 
{
	"TriLibCore.HDRLoader.dll",
	18,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
