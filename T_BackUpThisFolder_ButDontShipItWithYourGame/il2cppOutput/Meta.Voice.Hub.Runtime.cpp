#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// Meta.Voice.Hub.Attributes.MetaHubContextAttribute
struct MetaHubContextAttribute_tC8B4A73CCF5AE7EBC573B4B6FA447B0DB69E4435;
// Meta.Voice.Hub.Attributes.MetaHubPageAttribute
struct MetaHubPageAttribute_t519882E9F4F4601D821160FD0CB647FC66547F96;
// Meta.Voice.Hub.Attributes.MetaHubPageScriptableObjectAttribute
struct MetaHubPageScriptableObjectAttribute_tB61218043F87F446CB5978E9E1767FBFAC0941C8;
// System.String
struct String_t;

IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t77F10B9CCF544D3D13FF84A922BBEF84432D3DA6 
{
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
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

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// Meta.Voice.Hub.Attributes.MetaHubContextAttribute
struct MetaHubContextAttribute_tC8B4A73CCF5AE7EBC573B4B6FA447B0DB69E4435  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Meta.Voice.Hub.Attributes.MetaHubContextAttribute::<Context>k__BackingField
	String_t* ___U3CContextU3Ek__BackingField_0;
	// System.Int32 Meta.Voice.Hub.Attributes.MetaHubContextAttribute::<Priority>k__BackingField
	int32_t ___U3CPriorityU3Ek__BackingField_1;
	// System.String Meta.Voice.Hub.Attributes.MetaHubContextAttribute::<LogoPath>k__BackingField
	String_t* ___U3CLogoPathU3Ek__BackingField_2;
};

// Meta.Voice.Hub.Attributes.MetaHubPageAttribute
struct MetaHubPageAttribute_t519882E9F4F4601D821160FD0CB647FC66547F96  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Meta.Voice.Hub.Attributes.MetaHubPageAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String Meta.Voice.Hub.Attributes.MetaHubPageAttribute::<Context>k__BackingField
	String_t* ___U3CContextU3Ek__BackingField_1;
	// System.Int32 Meta.Voice.Hub.Attributes.MetaHubPageAttribute::<Priority>k__BackingField
	int32_t ___U3CPriorityU3Ek__BackingField_2;
	// System.String Meta.Voice.Hub.Attributes.MetaHubPageAttribute::<Prefix>k__BackingField
	String_t* ___U3CPrefixU3Ek__BackingField_3;
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

// Meta.Voice.Hub.Attributes.MetaHubPageScriptableObjectAttribute
struct MetaHubPageScriptableObjectAttribute_tB61218043F87F446CB5978E9E1767FBFAC0941C8  : public MetaHubPageAttribute_t519882E9F4F4601D821160FD0CB647FC66547F96
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Hub.Attributes.MetaHubContextAttribute::set_Context(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaHubContextAttribute_set_Context_m72895A599967487FEDC8F31B44B9F76D79FA8A50_inline (MetaHubContextAttribute_tC8B4A73CCF5AE7EBC573B4B6FA447B0DB69E4435* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Hub.Attributes.MetaHubContextAttribute::set_Priority(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaHubContextAttribute_set_Priority_m23AD5AABE7D71B9A5CD3A7E423B5A0C5E58D94D6_inline (MetaHubContextAttribute_tC8B4A73CCF5AE7EBC573B4B6FA447B0DB69E4435* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Hub.Attributes.MetaHubContextAttribute::set_LogoPath(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaHubContextAttribute_set_LogoPath_m6A758EDBAF0C15C0A84ADA51DF80149084E76F59_inline (MetaHubContextAttribute_tC8B4A73CCF5AE7EBC573B4B6FA447B0DB69E4435* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Hub.Attributes.MetaHubPageAttribute::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaHubPageAttribute_set_Name_m4EC8ADC5E155B604CB2065F89176CADC4EA54422_inline (MetaHubPageAttribute_t519882E9F4F4601D821160FD0CB647FC66547F96* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Hub.Attributes.MetaHubPageAttribute::set_Context(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaHubPageAttribute_set_Context_mB6094F1DD25D245B4BB9CE9F3B7F72B61AA7F4FD_inline (MetaHubPageAttribute_t519882E9F4F4601D821160FD0CB647FC66547F96* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Hub.Attributes.MetaHubPageAttribute::set_Priority(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaHubPageAttribute_set_Priority_mEF1892440C2AC70CC00960424841E4DFEDDE7BFB_inline (MetaHubPageAttribute_t519882E9F4F4601D821160FD0CB647FC66547F96* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Hub.Attributes.MetaHubPageAttribute::set_Prefix(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaHubPageAttribute_set_Prefix_mE8F16DF61D42FE2926AC479C53CBAD98C7369432_inline (MetaHubPageAttribute_t519882E9F4F4601D821160FD0CB647FC66547F96* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Hub.Attributes.MetaHubPageAttribute::.ctor(System.String,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaHubPageAttribute__ctor_mBA446F9D058DB0EEA84A4B4D765AFB0EF712A021 (MetaHubPageAttribute_t519882E9F4F4601D821160FD0CB647FC66547F96* __this, String_t* ___name0, String_t* ___context1, String_t* ___prefix2, int32_t ___priority3, const RuntimeMethod* method) ;
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
// System.String Meta.Voice.Hub.Attributes.MetaHubContextAttribute::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaHubContextAttribute_get_Context_m5958AF943C4D05AFBA2F36FBB7364B2696D0652F (MetaHubContextAttribute_tC8B4A73CCF5AE7EBC573B4B6FA447B0DB69E4435* __this, const RuntimeMethod* method) 
{
	{
		// public string Context { get; private set; }
		String_t* L_0 = __this->___U3CContextU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Meta.Voice.Hub.Attributes.MetaHubContextAttribute::set_Context(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaHubContextAttribute_set_Context_m72895A599967487FEDC8F31B44B9F76D79FA8A50 (MetaHubContextAttribute_tC8B4A73CCF5AE7EBC573B4B6FA447B0DB69E4435* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Context { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CContextU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContextU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int32 Meta.Voice.Hub.Attributes.MetaHubContextAttribute::get_Priority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetaHubContextAttribute_get_Priority_m9777CC72213DD5B376B19955E2D504AF6E396E40 (MetaHubContextAttribute_tC8B4A73CCF5AE7EBC573B4B6FA447B0DB69E4435* __this, const RuntimeMethod* method) 
{
	{
		// public int Priority { get; private set; }
		int32_t L_0 = __this->___U3CPriorityU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Voice.Hub.Attributes.MetaHubContextAttribute::set_Priority(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaHubContextAttribute_set_Priority_m23AD5AABE7D71B9A5CD3A7E423B5A0C5E58D94D6 (MetaHubContextAttribute_tC8B4A73CCF5AE7EBC573B4B6FA447B0DB69E4435* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Priority { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CPriorityU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String Meta.Voice.Hub.Attributes.MetaHubContextAttribute::get_LogoPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaHubContextAttribute_get_LogoPath_m16A37C2AD21FA3351E14EF57D1BA65FED6E88702 (MetaHubContextAttribute_tC8B4A73CCF5AE7EBC573B4B6FA447B0DB69E4435* __this, const RuntimeMethod* method) 
{
	{
		// public string LogoPath { get; private set; }
		String_t* L_0 = __this->___U3CLogoPathU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Meta.Voice.Hub.Attributes.MetaHubContextAttribute::set_LogoPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaHubContextAttribute_set_LogoPath_m6A758EDBAF0C15C0A84ADA51DF80149084E76F59 (MetaHubContextAttribute_tC8B4A73CCF5AE7EBC573B4B6FA447B0DB69E4435* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string LogoPath { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CLogoPathU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLogoPathU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Meta.Voice.Hub.Attributes.MetaHubContextAttribute::.ctor(System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaHubContextAttribute__ctor_m948D35E45A61E3A783B6ECF37E118F408AD3266B (MetaHubContextAttribute_tC8B4A73CCF5AE7EBC573B4B6FA447B0DB69E4435* __this, String_t* ___context0, int32_t ___priority1, String_t* ___pathToLogo2, const RuntimeMethod* method) 
{
	{
		// public MetaHubContextAttribute(string context, int priority = 1000, string pathToLogo = "")
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// Context = context;
		String_t* L_0 = ___context0;
		MetaHubContextAttribute_set_Context_m72895A599967487FEDC8F31B44B9F76D79FA8A50_inline(__this, L_0, NULL);
		// Priority = priority;
		int32_t L_1 = ___priority1;
		MetaHubContextAttribute_set_Priority_m23AD5AABE7D71B9A5CD3A7E423B5A0C5E58D94D6_inline(__this, L_1, NULL);
		// LogoPath = pathToLogo;
		String_t* L_2 = ___pathToLogo2;
		MetaHubContextAttribute_set_LogoPath_m6A758EDBAF0C15C0A84ADA51DF80149084E76F59_inline(__this, L_2, NULL);
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
// System.String Meta.Voice.Hub.Attributes.MetaHubPageAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaHubPageAttribute_get_Name_m198BE87BCBB5C671A433964F9CFD9DC02D9FE5FB (MetaHubPageAttribute_t519882E9F4F4601D821160FD0CB647FC66547F96* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Meta.Voice.Hub.Attributes.MetaHubPageAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaHubPageAttribute_set_Name_m4EC8ADC5E155B604CB2065F89176CADC4EA54422 (MetaHubPageAttribute_t519882E9F4F4601D821160FD0CB647FC66547F96* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Meta.Voice.Hub.Attributes.MetaHubPageAttribute::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaHubPageAttribute_get_Context_mF049D8CC1CC6AC4B18CCEEDB766259239185FE09 (MetaHubPageAttribute_t519882E9F4F4601D821160FD0CB647FC66547F96* __this, const RuntimeMethod* method) 
{
	{
		// public string Context { get; private set; }
		String_t* L_0 = __this->___U3CContextU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Voice.Hub.Attributes.MetaHubPageAttribute::set_Context(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaHubPageAttribute_set_Context_mB6094F1DD25D245B4BB9CE9F3B7F72B61AA7F4FD (MetaHubPageAttribute_t519882E9F4F4601D821160FD0CB647FC66547F96* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Context { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CContextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Int32 Meta.Voice.Hub.Attributes.MetaHubPageAttribute::get_Priority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetaHubPageAttribute_get_Priority_mD65905EA58F2E7A72614A95827314CE351F9D8D4 (MetaHubPageAttribute_t519882E9F4F4601D821160FD0CB647FC66547F96* __this, const RuntimeMethod* method) 
{
	{
		// public int Priority { get; private set; }
		int32_t L_0 = __this->___U3CPriorityU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Meta.Voice.Hub.Attributes.MetaHubPageAttribute::set_Priority(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaHubPageAttribute_set_Priority_mEF1892440C2AC70CC00960424841E4DFEDDE7BFB (MetaHubPageAttribute_t519882E9F4F4601D821160FD0CB647FC66547F96* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Priority { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CPriorityU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String Meta.Voice.Hub.Attributes.MetaHubPageAttribute::get_Prefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaHubPageAttribute_get_Prefix_mAF9D381BCE9D2EEFF81D7AC21AB564426DC97507 (MetaHubPageAttribute_t519882E9F4F4601D821160FD0CB647FC66547F96* __this, const RuntimeMethod* method) 
{
	{
		// public string Prefix { get; private set; }
		String_t* L_0 = __this->___U3CPrefixU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Meta.Voice.Hub.Attributes.MetaHubPageAttribute::set_Prefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaHubPageAttribute_set_Prefix_mE8F16DF61D42FE2926AC479C53CBAD98C7369432 (MetaHubPageAttribute_t519882E9F4F4601D821160FD0CB647FC66547F96* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Prefix { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CPrefixU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPrefixU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Meta.Voice.Hub.Attributes.MetaHubPageAttribute::.ctor(System.String,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaHubPageAttribute__ctor_mBA446F9D058DB0EEA84A4B4D765AFB0EF712A021 (MetaHubPageAttribute_t519882E9F4F4601D821160FD0CB647FC66547F96* __this, String_t* ___name0, String_t* ___context1, String_t* ___prefix2, int32_t ___priority3, const RuntimeMethod* method) 
{
	{
		// public MetaHubPageAttribute(string name = null, string context = "", string prefix = "", int priority = 0)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// Name = name;
		String_t* L_0 = ___name0;
		MetaHubPageAttribute_set_Name_m4EC8ADC5E155B604CB2065F89176CADC4EA54422_inline(__this, L_0, NULL);
		// Context = context;
		String_t* L_1 = ___context1;
		MetaHubPageAttribute_set_Context_mB6094F1DD25D245B4BB9CE9F3B7F72B61AA7F4FD_inline(__this, L_1, NULL);
		// Priority = priority;
		int32_t L_2 = ___priority3;
		MetaHubPageAttribute_set_Priority_mEF1892440C2AC70CC00960424841E4DFEDDE7BFB_inline(__this, L_2, NULL);
		// Prefix = prefix;
		String_t* L_3 = ___prefix2;
		MetaHubPageAttribute_set_Prefix_mE8F16DF61D42FE2926AC479C53CBAD98C7369432_inline(__this, L_3, NULL);
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
// System.Void Meta.Voice.Hub.Attributes.MetaHubPageScriptableObjectAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaHubPageScriptableObjectAttribute__ctor_mF5A2324E03B1BDACD8D0A1C7F7BFDD6264C16392 (MetaHubPageScriptableObjectAttribute_tB61218043F87F446CB5978E9E1767FBFAC0941C8* __this, String_t* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MetaHubPageScriptableObjectAttribute(string context = "") : base(context: context)
		String_t* L_0 = ___context0;
		MetaHubPageAttribute__ctor_mBA446F9D058DB0EEA84A4B4D765AFB0EF712A021(__this, (String_t*)NULL, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 0, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaHubContextAttribute_set_Context_m72895A599967487FEDC8F31B44B9F76D79FA8A50_inline (MetaHubContextAttribute_tC8B4A73CCF5AE7EBC573B4B6FA447B0DB69E4435* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Context { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CContextU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContextU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaHubContextAttribute_set_Priority_m23AD5AABE7D71B9A5CD3A7E423B5A0C5E58D94D6_inline (MetaHubContextAttribute_tC8B4A73CCF5AE7EBC573B4B6FA447B0DB69E4435* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Priority { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CPriorityU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaHubContextAttribute_set_LogoPath_m6A758EDBAF0C15C0A84ADA51DF80149084E76F59_inline (MetaHubContextAttribute_tC8B4A73CCF5AE7EBC573B4B6FA447B0DB69E4435* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string LogoPath { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CLogoPathU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLogoPathU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaHubPageAttribute_set_Name_m4EC8ADC5E155B604CB2065F89176CADC4EA54422_inline (MetaHubPageAttribute_t519882E9F4F4601D821160FD0CB647FC66547F96* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaHubPageAttribute_set_Context_mB6094F1DD25D245B4BB9CE9F3B7F72B61AA7F4FD_inline (MetaHubPageAttribute_t519882E9F4F4601D821160FD0CB647FC66547F96* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Context { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CContextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaHubPageAttribute_set_Priority_mEF1892440C2AC70CC00960424841E4DFEDDE7BFB_inline (MetaHubPageAttribute_t519882E9F4F4601D821160FD0CB647FC66547F96* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Priority { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CPriorityU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaHubPageAttribute_set_Prefix_mE8F16DF61D42FE2926AC479C53CBAD98C7369432_inline (MetaHubPageAttribute_t519882E9F4F4601D821160FD0CB647FC66547F96* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Prefix { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CPrefixU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPrefixU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
