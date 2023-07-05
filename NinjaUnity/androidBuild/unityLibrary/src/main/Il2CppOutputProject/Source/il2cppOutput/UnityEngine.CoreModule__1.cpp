#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.Light[]
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Scripting.APIUpdating.MovedFromAttribute
struct MovedFromAttribute_t2938C24921E4D74A1A2F3B4A874BD6F89D1EA432;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Scripting.PreserveAttribute
struct PreserveAttribute_t3B4D9311A3DF0B9342570C8E43A61973258D5751;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c
struct U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4;
// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate
struct RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB;

IL2CPP_EXTERN_C RuntimeClass* Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UnityEngine.Experimental.GlobalIllumination.LightmapperUtils
struct LightmapperUtils_tA76DFC04F9CA5CE874A5443DD3423DB351FD3D6A  : public RuntimeObject
{
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping
struct Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A  : public RuntimeObject
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

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c
struct U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4  : public RuntimeObject
{
};

// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
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

// UnityEngine.LightBakingOutput
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 
{
	// System.Int32 UnityEngine.LightBakingOutput::probeOcclusionLightIndex
	int32_t ___probeOcclusionLightIndex_0;
	// System.Int32 UnityEngine.LightBakingOutput::occlusionMaskChannel
	int32_t ___occlusionMaskChannel_1;
	// UnityEngine.LightmapBakeType UnityEngine.LightBakingOutput::lightmapBakeType
	int32_t ___lightmapBakeType_2;
	// UnityEngine.MixedLightingMode UnityEngine.LightBakingOutput::mixedLightingMode
	int32_t ___mixedLightingMode_3;
	// System.Boolean UnityEngine.LightBakingOutput::isBaked
	bool ___isBaked_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.LightBakingOutput
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshaled_pinvoke
{
	int32_t ___probeOcclusionLightIndex_0;
	int32_t ___occlusionMaskChannel_1;
	int32_t ___lightmapBakeType_2;
	int32_t ___mixedLightingMode_3;
	int32_t ___isBaked_4;
};
// Native definition for COM marshalling of UnityEngine.LightBakingOutput
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshaled_com
{
	int32_t ___probeOcclusionLightIndex_0;
	int32_t ___occlusionMaskChannel_1;
	int32_t ___lightmapBakeType_2;
	int32_t ___mixedLightingMode_3;
	int32_t ___isBaked_4;
};

// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;
};

// UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
struct MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F 
{
	// System.String UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::className
	String_t* ___className_0;
	// System.String UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::nameSpace
	String_t* ___nameSpace_1;
	// System.String UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::assembly
	String_t* ___assembly_2;
	// System.Boolean UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::classHasChanged
	bool ___classHasChanged_3;
	// System.Boolean UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::nameSpaceHasChanged
	bool ___nameSpaceHasChanged_4;
	// System.Boolean UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::assemblyHasChanged
	bool ___assemblyHasChanged_5;
	// System.Boolean UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::autoUdpateAPI
	bool ___autoUdpateAPI_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
struct MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshaled_pinvoke
{
	char* ___className_0;
	char* ___nameSpace_1;
	char* ___assembly_2;
	int32_t ___classHasChanged_3;
	int32_t ___nameSpaceHasChanged_4;
	int32_t ___assemblyHasChanged_5;
	int32_t ___autoUdpateAPI_6;
};
// Native definition for COM marshalling of UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
struct MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshaled_com
{
	Il2CppChar* ___className_0;
	Il2CppChar* ___nameSpace_1;
	Il2CppChar* ___assembly_2;
	int32_t ___classHasChanged_3;
	int32_t ___nameSpaceHasChanged_4;
	int32_t ___assemblyHasChanged_5;
	int32_t ___autoUdpateAPI_6;
};

// UnityEngine.Scripting.PreserveAttribute
struct PreserveAttribute_t3B4D9311A3DF0B9342570C8E43A61973258D5751  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;
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

// UnityEngine.Experimental.GlobalIllumination.Cookie
struct Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.Cookie::instanceID
	int32_t ___instanceID_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.Cookie::scale
	float ___scale_1;
	// UnityEngine.Vector2 UnityEngine.Experimental.GlobalIllumination.Cookie::sizes
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___sizes_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
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

// UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.DirectionalLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.DirectionalLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.DirectionalLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DirectionalLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DirectionalLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DirectionalLight::penumbraWidthRadian
	float ___penumbraWidthRadian_7;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___penumbraWidthRadian_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_8;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___penumbraWidthRadian_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_8;
};

// UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.DiscLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.DiscLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.DiscLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DiscLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.DiscLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DiscLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DiscLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DiscLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DiscLight::radius
	float ___radius_8;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.DiscLight::falloff
	uint8_t ___falloff_9;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___radius_8;
	uint8_t ___falloff_9;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___radius_8;
	uint8_t ___falloff_9;
};

// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieID
	int32_t ___cookieID_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieScale
	float ___cookieScale_2;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_4;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_5;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_10;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_11;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_12;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_13;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_14;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_15;
};

// UnityEngine.Scripting.APIUpdating.MovedFromAttribute
struct MovedFromAttribute_t2938C24921E4D74A1A2F3B4A874BD6F89D1EA432  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// UnityEngine.Scripting.APIUpdating.MovedFromAttributeData UnityEngine.Scripting.APIUpdating.MovedFromAttribute::data
	MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F ___data_0;
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

// UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_tD01A1428DC1015D98A527136034187F732433EA7 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.PointLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.PointLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.PointLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.PointLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.PointLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.PointLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.PointLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.PointLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.PointLight::sphereRadius
	float ___sphereRadius_8;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.PointLight::falloff
	uint8_t ___falloff_9;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	uint8_t ___falloff_9;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	uint8_t ___falloff_9;
};

// UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.RectangleLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.RectangleLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.RectangleLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.RectangleLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.RectangleLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.RectangleLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.RectangleLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::width
	float ___width_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::height
	float ___height_9;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.RectangleLight::falloff
	uint8_t ___falloff_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___width_8;
	float ___height_9;
	uint8_t ___falloff_10;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___width_8;
	float ___height_9;
	uint8_t ___falloff_10;
};

// UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.SpotLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.SpotLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.SpotLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.SpotLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.SpotLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.SpotLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.SpotLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::sphereRadius
	float ___sphereRadius_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::coneAngle
	float ___coneAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::innerConeAngle
	float ___innerConeAngle_10;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.SpotLight::falloff
	uint8_t ___falloff_11;
	// UnityEngine.Experimental.GlobalIllumination.AngularFalloffType UnityEngine.Experimental.GlobalIllumination.SpotLight::angularFalloff
	uint8_t ___angularFalloff_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	float ___coneAngle_9;
	float ___innerConeAngle_10;
	uint8_t ___falloff_11;
	uint8_t ___angularFalloff_12;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	float ___coneAngle_9;
	float ___innerConeAngle_10;
	uint8_t ___falloff_11;
	uint8_t ___angularFalloff_12;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate
struct RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB  : public MulticastDelegate_t
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// System.Attribute

// System.Attribute

// UnityEngine.Experimental.GlobalIllumination.LightmapperUtils

// UnityEngine.Experimental.GlobalIllumination.LightmapperUtils

// UnityEngine.Experimental.GlobalIllumination.Lightmapping
struct Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields
{
	// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate UnityEngine.Experimental.GlobalIllumination.Lightmapping::s_DefaultDelegate
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* ___s_DefaultDelegate_0;
	// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate UnityEngine.Experimental.GlobalIllumination.Lightmapping::s_RequestLightsDelegate
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* ___s_RequestLightsDelegate_1;
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c
struct U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields
{
	// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::<>9
	U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* ___U3CU3E9_0;
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c

// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>

// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>

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

// UnityEngine.Color

// UnityEngine.Color

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.LightBakingOutput

// UnityEngine.LightBakingOutput

// UnityEngine.Experimental.GlobalIllumination.LinearColor

// UnityEngine.Experimental.GlobalIllumination.LinearColor

// UnityEngine.Scripting.APIUpdating.MovedFromAttributeData

// UnityEngine.Scripting.APIUpdating.MovedFromAttributeData

// UnityEngine.Scripting.PreserveAttribute

// UnityEngine.Scripting.PreserveAttribute

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

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
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_12;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.Experimental.GlobalIllumination.Cookie

// UnityEngine.Experimental.GlobalIllumination.Cookie

// System.Delegate

// System.Delegate

// UnityEngine.Experimental.GlobalIllumination.DirectionalLight

// UnityEngine.Experimental.GlobalIllumination.DirectionalLight

// UnityEngine.Experimental.GlobalIllumination.DiscLight

// UnityEngine.Experimental.GlobalIllumination.DiscLight

// UnityEngine.Experimental.GlobalIllumination.LightDataGI

// UnityEngine.Experimental.GlobalIllumination.LightDataGI

// UnityEngine.Scripting.APIUpdating.MovedFromAttribute

// UnityEngine.Scripting.APIUpdating.MovedFromAttribute

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Experimental.GlobalIllumination.PointLight

// UnityEngine.Experimental.GlobalIllumination.PointLight

// UnityEngine.Experimental.GlobalIllumination.RectangleLight

// UnityEngine.Experimental.GlobalIllumination.RectangleLight

// UnityEngine.Experimental.GlobalIllumination.SpotLight

// UnityEngine.Experimental.GlobalIllumination.SpotLight

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate

// UnityEngine.Light

// UnityEngine.Light
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Light[]
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990  : public RuntimeArray
{
	ALIGN_FIELD (8) Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* m_Items[1];

	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* value)
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


// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;

// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DirectionalLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.PointLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.SpotLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.RectangleLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DiscLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::InitNoBake(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, int32_t ___0_lightInstanceID, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Light::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_bounceIntensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_bounceIntensity_m535008F539A0EF22BBB831113EC34F20D6331FAE (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LinearColor::Convert(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, float ___1_intensity, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_spotAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Light::get_useColorTemperature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Light_get_useColorTemperature_mD76967684F904F6068B58EE78BD65001D8AFF3EF (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.GraphicsSettings::get_lightsUseLinearIntensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsSettings_get_lightsUseLinearIntensity_m74D1A18837CB7E9D3A9BF20D44212F94DD1F67B9 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_colorTemperature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_colorTemperature_mA5B7C9A5B315B27625764B8CE7EF5ADC06060B08 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Mathf::CorrelatedColorTemperatureToRGB(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Mathf_CorrelatedColorTemperatureToRGB_m595A3D1E887CD42FE21CD2893D8E377B3F44153C (float ___0_kelvin, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_red(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_green(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_blue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.LightBakingOutput UnityEngine.Light::get_bakingOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D (int32_t ___0_baketype, const RuntimeMethod* method) ;
// UnityEngine.LightShadows UnityEngine.Light::get_shadows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractColorTemperature(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractIndirect(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ApplyColorTemperature(UnityEngine.Color,UnityEngine.Experimental.GlobalIllumination.LinearColor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_cct, LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* ___1_lightColor, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_range()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractInnerCone(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LightmapperUtils_ExtractInnerCone_m8B2B838A7D49A49D64813232503D5C3CA8957C5E (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Light::get_cookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// UnityEngine.LightType UnityEngine.Light::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_cookieSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_cookieSize_m1BB417985207915659198F63CF825A23A8ED30B0 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::Invoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_inline (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate__ctor_mFFCE8681C67A169A04BEA2201C393E1FC84CAB7D (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3FBD26AEC83F79DACB13A7EF6FE5F539A71F0902 (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DirectionalLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m44511C1C63663F51CD77ABF24CC4B34B9A826F0F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___1_dir, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.PointLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m47570BBE32168BBEA4C823D83C8A94A4CBF03AE2 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___1_point, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.SpotLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m9F0C60CB137D268694B8CB324C73E799E1CE73F9 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___1_spot, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.RectangleLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m3B3FFE050376D624857D5D67413BD532518949F1 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___1_rect, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DiscLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mA319A386DA025BF5F0B7D9C398ACD3BE3AF65ABB (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___1_disc, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::Set(System.Boolean,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovedFromAttributeData_Set_m155005FB8BCE0569C40B02D75FFADB3FBDB7EEDD (MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F* __this, bool ___0_autoUpdateAPI, String_t* ___1_sourceNamespace, String_t* ___2_sourceAssembly, String_t* ___3_sourceClassName, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.DirectionalLight
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___penumbraWidthRadian_7 = unmarshaled.___penumbraWidthRadian_7;
	marshaled.___direction_8 = unmarshaled.___direction_8;
}
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_back(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke& marshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledpenumbraWidthRadian_temp_7 = 0.0f;
	unmarshaledpenumbraWidthRadian_temp_7 = marshaled.___penumbraWidthRadian_7;
	unmarshaled.___penumbraWidthRadian_7 = unmarshaledpenumbraWidthRadian_temp_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaleddirection_temp_8;
	memset((&unmarshaleddirection_temp_8), 0, sizeof(unmarshaleddirection_temp_8));
	unmarshaleddirection_temp_8 = marshaled.___direction_8;
	unmarshaled.___direction_8 = unmarshaleddirection_temp_8;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.DirectionalLight
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_cleanup(DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.DirectionalLight
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_com(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___penumbraWidthRadian_7 = unmarshaled.___penumbraWidthRadian_7;
	marshaled.___direction_8 = unmarshaled.___direction_8;
}
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_com_back(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com& marshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledpenumbraWidthRadian_temp_7 = 0.0f;
	unmarshaledpenumbraWidthRadian_temp_7 = marshaled.___penumbraWidthRadian_7;
	unmarshaled.___penumbraWidthRadian_7 = unmarshaledpenumbraWidthRadian_temp_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaleddirection_temp_8;
	memset((&unmarshaleddirection_temp_8), 0, sizeof(unmarshaleddirection_temp_8));
	unmarshaleddirection_temp_8 = marshaled.___direction_8;
	unmarshaled.___direction_8 = unmarshaleddirection_temp_8;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.DirectionalLight
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_com_cleanup(DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.PointLight
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___sphereRadius_8 = unmarshaled.___sphereRadius_8;
	marshaled.___falloff_9 = unmarshaled.___falloff_9;
}
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_back(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke& marshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius_8;
	unmarshaled.___sphereRadius_8 = unmarshaledsphereRadius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff_9;
	unmarshaled.___falloff_9 = unmarshaledfalloff_temp_9;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.PointLight
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_cleanup(PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.PointLight
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_com(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___sphereRadius_8 = unmarshaled.___sphereRadius_8;
	marshaled.___falloff_9 = unmarshaled.___falloff_9;
}
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_com_back(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com& marshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius_8;
	unmarshaled.___sphereRadius_8 = unmarshaledsphereRadius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff_9;
	unmarshaled.___falloff_9 = unmarshaledfalloff_temp_9;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.PointLight
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_com_cleanup(PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.SpotLight
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___sphereRadius_8 = unmarshaled.___sphereRadius_8;
	marshaled.___coneAngle_9 = unmarshaled.___coneAngle_9;
	marshaled.___innerConeAngle_10 = unmarshaled.___innerConeAngle_10;
	marshaled.___falloff_11 = unmarshaled.___falloff_11;
	marshaled.___angularFalloff_12 = unmarshaled.___angularFalloff_12;
}
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_back(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke& marshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius_8;
	unmarshaled.___sphereRadius_8 = unmarshaledsphereRadius_temp_8;
	float unmarshaledconeAngle_temp_9 = 0.0f;
	unmarshaledconeAngle_temp_9 = marshaled.___coneAngle_9;
	unmarshaled.___coneAngle_9 = unmarshaledconeAngle_temp_9;
	float unmarshaledinnerConeAngle_temp_10 = 0.0f;
	unmarshaledinnerConeAngle_temp_10 = marshaled.___innerConeAngle_10;
	unmarshaled.___innerConeAngle_10 = unmarshaledinnerConeAngle_temp_10;
	uint8_t unmarshaledfalloff_temp_11 = 0;
	unmarshaledfalloff_temp_11 = marshaled.___falloff_11;
	unmarshaled.___falloff_11 = unmarshaledfalloff_temp_11;
	uint8_t unmarshaledangularFalloff_temp_12 = 0;
	unmarshaledangularFalloff_temp_12 = marshaled.___angularFalloff_12;
	unmarshaled.___angularFalloff_12 = unmarshaledangularFalloff_temp_12;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.SpotLight
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_cleanup(SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.SpotLight
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_com(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___sphereRadius_8 = unmarshaled.___sphereRadius_8;
	marshaled.___coneAngle_9 = unmarshaled.___coneAngle_9;
	marshaled.___innerConeAngle_10 = unmarshaled.___innerConeAngle_10;
	marshaled.___falloff_11 = unmarshaled.___falloff_11;
	marshaled.___angularFalloff_12 = unmarshaled.___angularFalloff_12;
}
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_com_back(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com& marshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius_8;
	unmarshaled.___sphereRadius_8 = unmarshaledsphereRadius_temp_8;
	float unmarshaledconeAngle_temp_9 = 0.0f;
	unmarshaledconeAngle_temp_9 = marshaled.___coneAngle_9;
	unmarshaled.___coneAngle_9 = unmarshaledconeAngle_temp_9;
	float unmarshaledinnerConeAngle_temp_10 = 0.0f;
	unmarshaledinnerConeAngle_temp_10 = marshaled.___innerConeAngle_10;
	unmarshaled.___innerConeAngle_10 = unmarshaledinnerConeAngle_temp_10;
	uint8_t unmarshaledfalloff_temp_11 = 0;
	unmarshaledfalloff_temp_11 = marshaled.___falloff_11;
	unmarshaled.___falloff_11 = unmarshaledfalloff_temp_11;
	uint8_t unmarshaledangularFalloff_temp_12 = 0;
	unmarshaledangularFalloff_temp_12 = marshaled.___angularFalloff_12;
	unmarshaled.___angularFalloff_12 = unmarshaledangularFalloff_temp_12;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.SpotLight
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_com_cleanup(SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.RectangleLight
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___width_8 = unmarshaled.___width_8;
	marshaled.___height_9 = unmarshaled.___height_9;
	marshaled.___falloff_10 = unmarshaled.___falloff_10;
}
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_back(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke& marshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledwidth_temp_8 = 0.0f;
	unmarshaledwidth_temp_8 = marshaled.___width_8;
	unmarshaled.___width_8 = unmarshaledwidth_temp_8;
	float unmarshaledheight_temp_9 = 0.0f;
	unmarshaledheight_temp_9 = marshaled.___height_9;
	unmarshaled.___height_9 = unmarshaledheight_temp_9;
	uint8_t unmarshaledfalloff_temp_10 = 0;
	unmarshaledfalloff_temp_10 = marshaled.___falloff_10;
	unmarshaled.___falloff_10 = unmarshaledfalloff_temp_10;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.RectangleLight
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_cleanup(RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.RectangleLight
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_com(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___width_8 = unmarshaled.___width_8;
	marshaled.___height_9 = unmarshaled.___height_9;
	marshaled.___falloff_10 = unmarshaled.___falloff_10;
}
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_com_back(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com& marshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledwidth_temp_8 = 0.0f;
	unmarshaledwidth_temp_8 = marshaled.___width_8;
	unmarshaled.___width_8 = unmarshaledwidth_temp_8;
	float unmarshaledheight_temp_9 = 0.0f;
	unmarshaledheight_temp_9 = marshaled.___height_9;
	unmarshaled.___height_9 = unmarshaledheight_temp_9;
	uint8_t unmarshaledfalloff_temp_10 = 0;
	unmarshaledfalloff_temp_10 = marshaled.___falloff_10;
	unmarshaled.___falloff_10 = unmarshaledfalloff_temp_10;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.RectangleLight
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_com_cleanup(RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.DiscLight
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___radius_8 = unmarshaled.___radius_8;
	marshaled.___falloff_9 = unmarshaled.___falloff_9;
}
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_back(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke& marshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledradius_temp_8 = 0.0f;
	unmarshaledradius_temp_8 = marshaled.___radius_8;
	unmarshaled.___radius_8 = unmarshaledradius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff_9;
	unmarshaled.___falloff_9 = unmarshaledfalloff_temp_9;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.DiscLight
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_cleanup(DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.DiscLight
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_com(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___radius_8 = unmarshaled.___radius_8;
	marshaled.___falloff_9 = unmarshaled.___falloff_9;
}
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_com_back(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com& marshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledradius_temp_8 = 0.0f;
	unmarshaledradius_temp_8 = marshaled.___radius_8;
	unmarshaled.___radius_8 = unmarshaledradius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff_9;
	unmarshaled.___falloff_9 = unmarshaledfalloff_temp_9;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.DiscLight
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_com_cleanup(DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com& marshaled)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DirectionalLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_0 = ___0_light;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___1_cookie;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___1_cookie;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_6 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_8 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_10 = ___0_light;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_12 = ___0_light;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		__this->___range_7 = (0.0f);
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_14 = ___1_cookie;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&L_14->___sizes_2);
		float L_16 = L_15->___x_0;
		__this->___coneAngle_8 = L_16;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_17 = ___1_cookie;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&L_17->___sizes_2);
		float L_19 = L_18->___y_1;
		__this->___innerConeAngle_9 = L_19;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_20 = ___0_light;
		float L_21 = L_20->___penumbraWidthRadian_7;
		__this->___shape0_10 = L_21;
		__this->___shape1_11 = (0.0f);
		__this->___type_12 = 0;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_22 = ___0_light;
		uint8_t L_23 = L_22->___mode_2;
		__this->___mode_13 = L_23;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_24 = ___0_light;
		bool L_25 = L_24->___shadow_1;
		G_B1_0 = __this;
		if (L_25)
		{
			G_B2_0 = __this;
			goto IL_00b8;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00b9;
	}

IL_00b8:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00b9:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		__this->___falloff_15 = 4;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207_AdjustorThunk (RuntimeObject* __this, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207(_thisAdjusted, ___0_light, ___1_cookie, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.PointLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_0 = ___0_light;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___1_cookie;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___1_cookie;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_6 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_8 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_10 = ___0_light;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_12 = ___0_light;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_14 = ___0_light;
		float L_15 = L_14->___range_7;
		__this->___range_7 = L_15;
		__this->___coneAngle_8 = (0.0f);
		__this->___innerConeAngle_9 = (0.0f);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_16 = ___0_light;
		float L_17 = L_16->___sphereRadius_8;
		__this->___shape0_10 = L_17;
		__this->___shape1_11 = (0.0f);
		__this->___type_12 = 1;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_18 = ___0_light;
		uint8_t L_19 = L_18->___mode_2;
		__this->___mode_13 = L_19;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_20 = ___0_light;
		bool L_21 = L_20->___shadow_1;
		G_B1_0 = __this;
		if (L_21)
		{
			G_B2_0 = __this;
			goto IL_00ad;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00ae:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_22 = ___0_light;
		uint8_t L_23 = L_22->___falloff_9;
		__this->___falloff_15 = L_23;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A_AdjustorThunk (RuntimeObject* __this, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A(_thisAdjusted, ___0_light, ___1_cookie, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.SpotLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_0 = ___0_light;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___1_cookie;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___1_cookie;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_6 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_8 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_10 = ___0_light;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_12 = ___0_light;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_14 = ___0_light;
		float L_15 = L_14->___range_7;
		__this->___range_7 = L_15;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_16 = ___0_light;
		float L_17 = L_16->___coneAngle_9;
		__this->___coneAngle_8 = L_17;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_18 = ___0_light;
		float L_19 = L_18->___innerConeAngle_10;
		__this->___innerConeAngle_9 = L_19;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_20 = ___0_light;
		float L_21 = L_20->___sphereRadius_8;
		__this->___shape0_10 = L_21;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_22 = ___0_light;
		uint8_t L_23 = L_22->___angularFalloff_12;
		__this->___shape1_11 = ((float)L_23);
		__this->___type_12 = 2;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_24 = ___0_light;
		uint8_t L_25 = L_24->___mode_2;
		__this->___mode_13 = L_25;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_26 = ___0_light;
		bool L_27 = L_26->___shadow_1;
		G_B1_0 = __this;
		if (L_27)
		{
			G_B2_0 = __this;
			goto IL_00b1;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00b2;
	}

IL_00b1:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00b2:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_28 = ___0_light;
		uint8_t L_29 = L_28->___falloff_11;
		__this->___falloff_15 = L_29;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B_AdjustorThunk (RuntimeObject* __this, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B(_thisAdjusted, ___0_light, ___1_cookie, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.RectangleLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_0 = ___0_light;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___1_cookie;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___1_cookie;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_6 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_8 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_10 = ___0_light;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_12 = ___0_light;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_14 = ___0_light;
		float L_15 = L_14->___range_7;
		__this->___range_7 = L_15;
		__this->___coneAngle_8 = (0.0f);
		__this->___innerConeAngle_9 = (0.0f);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_16 = ___0_light;
		float L_17 = L_16->___width_8;
		__this->___shape0_10 = L_17;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_18 = ___0_light;
		float L_19 = L_18->___height_9;
		__this->___shape1_11 = L_19;
		__this->___type_12 = 3;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_20 = ___0_light;
		uint8_t L_21 = L_20->___mode_2;
		__this->___mode_13 = L_21;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_22 = ___0_light;
		bool L_23 = L_22->___shadow_1;
		G_B1_0 = __this;
		if (L_23)
		{
			G_B2_0 = __this;
			goto IL_00ae;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00af;
	}

IL_00ae:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00af:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_24 = ___0_light;
		uint8_t L_25 = L_24->___falloff_10;
		__this->___falloff_15 = L_25;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038_AdjustorThunk (RuntimeObject* __this, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038(_thisAdjusted, ___0_light, ___1_cookie, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DiscLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_0 = ___0_light;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___1_cookie;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___1_cookie;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_6 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_8 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_10 = ___0_light;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_12 = ___0_light;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_14 = ___0_light;
		float L_15 = L_14->___range_7;
		__this->___range_7 = L_15;
		__this->___coneAngle_8 = (0.0f);
		__this->___innerConeAngle_9 = (0.0f);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_16 = ___0_light;
		float L_17 = L_16->___radius_8;
		__this->___shape0_10 = L_17;
		__this->___shape1_11 = (0.0f);
		__this->___type_12 = 4;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_18 = ___0_light;
		uint8_t L_19 = L_18->___mode_2;
		__this->___mode_13 = L_19;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_20 = ___0_light;
		bool L_21 = L_20->___shadow_1;
		G_B1_0 = __this;
		if (L_21)
		{
			G_B2_0 = __this;
			goto IL_00ad;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00ae:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_22 = ___0_light;
		uint8_t L_23 = L_22->___falloff_9;
		__this->___falloff_15 = L_23;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632_AdjustorThunk (RuntimeObject* __this, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632(_thisAdjusted, ___0_light, ___1_cookie, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::InitNoBake(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, int32_t ___0_lightInstanceID, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_lightInstanceID;
		__this->___instanceID_0 = L_0;
		__this->___mode_13 = 3;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43_AdjustorThunk (RuntimeObject* __this, int32_t ___0_lightInstanceID, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43(_thisAdjusted, ___0_lightInstanceID, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D (int32_t ___0_baketype, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___0_baketype;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___0_baketype;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		G_B4_0 = 2;
		goto IL_000d;
	}

IL_000c:
	{
		G_B4_0 = 1;
	}

IL_000d:
	{
		G_B6_0 = G_B4_0;
		goto IL_0010;
	}

IL_000f:
	{
		G_B6_0 = 0;
	}

IL_0010:
	{
		V_0 = G_B6_0;
		goto IL_0013;
	}

IL_0013:
	{
		uint8_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractIndirect(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) 
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___0_l;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_0, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_2 = ___0_l;
		NullCheck(L_2);
		float L_3;
		L_3 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_2, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		float L_5;
		L_5 = Light_get_bounceIntensity_m535008F539A0EF22BBB831113EC34F20D6331FAE(L_4, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_6;
		L_6 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_1, ((float)il2cpp_codegen_multiply(L_3, L_5)), NULL);
		V_0 = L_6;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = V_0;
		V_1 = L_7;
		goto IL_001e;
	}

IL_001e:
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_8 = V_1;
		return L_8;
	}
}
// System.Single UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractInnerCone(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LightmapperUtils_ExtractInnerCone_m8B2B838A7D49A49D64813232503D5C3CA8957C5E (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___0_l;
		NullCheck(L_0);
		float L_1;
		L_1 = Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC(L_0, NULL);
		float L_2;
		L_2 = tanf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_1, (0.5f))), (0.0174532924f))));
		float L_3;
		L_3 = atanf(((float)(((float)il2cpp_codegen_multiply(L_2, (46.0f)))/(64.0f))));
		V_0 = ((float)il2cpp_codegen_multiply((2.0f), L_3));
		goto IL_0032;
	}

IL_0032:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Color UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractColorTemperature(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	{
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&V_0), (1.0f), (1.0f), (1.0f), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___0_l;
		NullCheck(L_0);
		bool L_1;
		L_1 = Light_get_useColorTemperature_mD76967684F904F6068B58EE78BD65001D8AFF3EF(L_0, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		bool L_2;
		L_2 = GraphicsSettings_get_lightsUseLinearIntensity_m74D1A18837CB7E9D3A9BF20D44212F94DD1F67B9(NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 0;
	}

IL_0027:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		float L_5;
		L_5 = Light_get_colorTemperature_mA5B7C9A5B315B27625764B8CE7EF5ADC06060B08(L_4, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Mathf_CorrelatedColorTemperatureToRGB_m595A3D1E887CD42FE21CD2893D8E377B3F44153C(L_5, NULL);
		V_0 = L_6;
	}

IL_0037:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		V_2 = L_7;
		goto IL_003b;
	}

IL_003b:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_2;
		return L_8;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ApplyColorTemperature(UnityEngine.Color,UnityEngine.Experimental.GlobalIllumination.LinearColor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_cct, LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* ___1_lightColor, const RuntimeMethod* method) 
{
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_0 = ___1_lightColor;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_1 = L_0;
		float L_2;
		L_2 = LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A(L_1, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_cct;
		float L_4 = L_3.___r_0;
		LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52(L_1, ((float)il2cpp_codegen_multiply(L_2, L_4)), NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_5 = ___1_lightColor;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_6 = L_5;
		float L_7;
		L_7 = LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5(L_6, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_cct;
		float L_9 = L_8.___g_1;
		LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694(L_6, ((float)il2cpp_codegen_multiply(L_7, L_9)), NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_10 = ___1_lightColor;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_11 = L_10;
		float L_12;
		L_12 = LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A(L_11, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___0_cct;
		float L_14 = L_13.___b_2;
		LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375(L_11, ((float)il2cpp_codegen_multiply(L_12, L_14)), NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DirectionalLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m44511C1C63663F51CD77ABF24CC4B34B9A826F0F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___1_dir, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_0 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_3 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode_2 = L_7;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_8 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_11 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_15 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_30 = ___1_dir;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_32 = ___1_dir;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_34 = ___1_dir;
		L_34->___penumbraWidthRadian_7 = (0.0f);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.PointLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m47570BBE32168BBEA4C823D83C8A94A4CBF03AE2 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___1_point, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_0 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_3 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode_2 = L_7;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_8 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_11 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_15 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_30 = ___1_point;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_32 = ___1_point;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_34 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___0_l;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_37 = ___1_point;
		L_37->___sphereRadius_8 = (0.0f);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_38 = ___1_point;
		L_38->___falloff_9 = 3;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.SpotLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m9F0C60CB137D268694B8CB324C73E799E1CE73F9 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___1_spot, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_0 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_3 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode_2 = L_7;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_8 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_11 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_15 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_30 = ___1_spot;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_32 = ___1_spot;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_34 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___0_l;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_37 = ___1_spot;
		L_37->___sphereRadius_8 = (0.0f);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_38 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_39 = ___0_l;
		NullCheck(L_39);
		float L_40;
		L_40 = Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC(L_39, NULL);
		L_38->___coneAngle_9 = ((float)il2cpp_codegen_multiply(L_40, (0.0174532924f)));
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_41 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_42 = ___0_l;
		float L_43;
		L_43 = LightmapperUtils_ExtractInnerCone_m8B2B838A7D49A49D64813232503D5C3CA8957C5E(L_42, NULL);
		L_41->___innerConeAngle_10 = L_43;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_44 = ___1_spot;
		L_44->___falloff_11 = 3;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_45 = ___1_spot;
		L_45->___angularFalloff_12 = 0;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.RectangleLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m3B3FFE050376D624857D5D67413BD532518949F1 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___1_rect, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_0 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_3 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode_2 = L_7;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_8 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_11 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_15 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_30 = ___1_rect;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_32 = ___1_rect;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_34 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___0_l;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_37 = ___1_rect;
		L_37->___width_8 = (0.0f);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_38 = ___1_rect;
		L_38->___height_9 = (0.0f);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_39 = ___1_rect;
		L_39->___falloff_10 = 3;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DiscLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mA319A386DA025BF5F0B7D9C398ACD3BE3AF65ABB (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___1_disc, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_0 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_3 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode_2 = L_7;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_8 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_11 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_15 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_30 = ___1_disc;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_32 = ___1_disc;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_34 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___0_l;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_37 = ___1_disc;
		L_37->___radius_8 = (0.0f);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_38 = ___1_disc;
		L_38->___falloff_9 = 3;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B2_0 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B3_1 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B5_0 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B4_0 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B6_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B7_1 = NULL;
	{
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_0 = ___1_cookie;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2;
		L_2 = Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		G_B1_0 = L_0;
		if (L_3)
		{
			G_B2_0 = L_0;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_001d;
	}

IL_0012:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5;
		L_5 = Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_5, NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_001d:
	{
		G_B3_1->___instanceID_0 = G_B3_0;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_7 = ___1_cookie;
		L_7->___scale_1 = (1.0f);
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_8 = ___1_cookie;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7(L_9, NULL);
		G_B4_0 = L_8;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			G_B5_0 = L_8;
			goto IL_0044;
		}
	}
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_11 = ___0_l;
		NullCheck(L_11);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_12;
		L_12 = Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_12, NULL);
		G_B5_0 = G_B4_0;
		if (L_13)
		{
			G_B6_0 = G_B4_0;
			goto IL_0055;
		}
	}

IL_0044:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), (1.0f), (1.0f), /*hidden argument*/NULL);
		G_B7_0 = L_14;
		G_B7_1 = G_B5_0;
		goto IL_0066;
	}

IL_0055:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15 = ___0_l;
		NullCheck(L_15);
		float L_16;
		L_16 = Light_get_cookieSize_m1BB417985207915659198F63CF825A23A8ED30B0(L_15, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_17 = ___0_l;
		NullCheck(L_17);
		float L_18;
		L_18 = Light_get_cookieSize_m1BB417985207915659198F63CF825A23A8ED30B0(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), L_16, L_18, /*hidden argument*/NULL);
		G_B7_0 = L_19;
		G_B7_1 = G_B6_0;
	}

IL_0066:
	{
		G_B7_1->___sizes_2 = G_B7_0;
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
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::SetDelegate(UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping_SetDelegate_m8BEF0FE5035180FF94119860CD15BBE2BE90129D (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* ___0_del, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* G_B3_0 = NULL;
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_0 = ___0_del;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_1 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0;
		G_B3_0 = L_1;
		goto IL_000c;
	}

IL_000b:
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_2 = ___0_del;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1), (void*)G_B3_0);
		return;
	}
}
// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate UnityEngine.Experimental.GlobalIllumination.Lightmapping::GetDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* Lightmapping_GetDelegate_m073E4FFA73169C20833F77984024BD328003258A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_0 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::ResetDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping_ResetDelegate_m8D4AAF4F08C8697953B3CB110DD4E6CD130371D9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_0 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0;
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::RequestLights(UnityEngine.Light[],System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping_RequestLights_m1967533AFFB328B3386E7E0D1EC414105E509B80 (LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_lights, intptr_t ___1_outLightsPtr, int32_t ___2_outLightsCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___1_outLightsPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		int32_t L_2 = ___2_outLightsCount;
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_3;
		L_3 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A(L_1, L_2, 1, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_RuntimeMethod_var);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_4 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_5 = ___0_lights;
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_6 = V_0;
		NullCheck(L_4);
		RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_inline(L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping__cctor_m6AEDE40A651280EC1A7944E9CFD161AFB78802B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* L_0 = ((U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_1 = (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB*)il2cpp_codegen_object_new(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RequestLightsDelegate__ctor_mFFCE8681C67A169A04BEA2201C393E1FC84CAB7D(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6_RuntimeMethod_var), NULL);
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0), (void*)L_1);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_2 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0;
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1), (void*)L_2);
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
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_Multicast(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* currentDelegate = reinterpret_cast<RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_requests, ___1_lightsOutput, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenInst(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	NullCheck(___0_requests);
	typedef void (*FunctionPointerType) (LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_requests, ___1_lightsOutput, method);
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStatic(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_requests, ___1_lightsOutput, method);
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStaticInvoker(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	InvokerActionInvoker2< LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_requests, ___1_lightsOutput);
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_ClosedStaticInvoker(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_requests, ___1_lightsOutput);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate__ctor_mFFCE8681C67A169A04BEA2201C393E1FC84CAB7D (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_Multicast;
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::Invoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_requests, ___1_lightsOutput, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m766681161796D9912477BF60542C4DD1EB0D2096 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* L_0 = (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4*)il2cpp_codegen_object_new(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m3FBD26AEC83F79DACB13A7EF6FE5F539A71F0902(L_0, NULL);
		((U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3FBD26AEC83F79DACB13A7EF6FE5F539A71F0902 (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::<.cctor>b__7_0(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6 (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method) 
{
	DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	PointLight_tD01A1428DC1015D98A527136034187F732433EA7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E V_4;
	memset((&V_4), 0, sizeof(V_4));
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 V_5;
	memset((&V_5), 0, sizeof(V_5));
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB));
		il2cpp_codegen_initobj((&V_1), sizeof(PointLight_tD01A1428DC1015D98A527136034187F732433EA7));
		il2cpp_codegen_initobj((&V_2), sizeof(SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869));
		il2cpp_codegen_initobj((&V_3), sizeof(RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698));
		il2cpp_codegen_initobj((&V_4), sizeof(DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E));
		il2cpp_codegen_initobj((&V_5), sizeof(Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0));
		il2cpp_codegen_initobj((&V_6), sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21));
		V_7 = 0;
		goto IL_0146;
	}

IL_0041:
	{
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_0 = ___0_requests;
		int32_t L_1 = V_7;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_8 = L_3;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = V_8;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7(L_4, NULL);
		V_10 = L_5;
		int32_t L_6 = V_10;
		V_9 = L_6;
		int32_t L_7 = V_9;
		switch (L_7)
		{
			case 0:
			{
				goto IL_00bc;
			}
			case 1:
			{
				goto IL_0075;
			}
			case 2:
			{
				goto IL_009a;
			}
			case 3:
			{
				goto IL_00de;
			}
			case 4:
			{
				goto IL_0100;
			}
		}
	}
	{
		goto IL_0122;
	}

IL_0075:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_8 = V_8;
		LightmapperUtils_Extract_m44511C1C63663F51CD77ABF24CC4B34B9A826F0F(L_8, (&V_0), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_9, (&V_5), NULL);
		LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207((&V_6), (&V_0), (&V_5), NULL);
		goto IL_0133;
	}

IL_009a:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_10 = V_8;
		LightmapperUtils_Extract_m47570BBE32168BBEA4C823D83C8A94A4CBF03AE2(L_10, (&V_1), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_11 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_11, (&V_5), NULL);
		LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A((&V_6), (&V_1), (&V_5), NULL);
		goto IL_0133;
	}

IL_00bc:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = V_8;
		LightmapperUtils_Extract_m9F0C60CB137D268694B8CB324C73E799E1CE73F9(L_12, (&V_2), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_13 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_13, (&V_5), NULL);
		LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B((&V_6), (&V_2), (&V_5), NULL);
		goto IL_0133;
	}

IL_00de:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_14 = V_8;
		LightmapperUtils_Extract_m3B3FFE050376D624857D5D67413BD532518949F1(L_14, (&V_3), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_15, (&V_5), NULL);
		LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038((&V_6), (&V_3), (&V_5), NULL);
		goto IL_0133;
	}

IL_0100:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = V_8;
		LightmapperUtils_Extract_mA319A386DA025BF5F0B7D9C398ACD3BE3AF65ABB(L_16, (&V_4), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_17 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_17, (&V_5), NULL);
		LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632((&V_6), (&V_4), (&V_5), NULL);
		goto IL_0133;
	}

IL_0122:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_18 = V_8;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_18, NULL);
		LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43((&V_6), L_19, NULL);
		goto IL_0133;
	}

IL_0133:
	{
		int32_t L_20 = V_7;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_21 = V_6;
		IL2CPP_NATIVEARRAY_SET_ITEM(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21, ((&___1_lightsOutput))->___m_Buffer_0, L_20, (L_21));
		int32_t L_22 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0146:
	{
		int32_t L_23 = V_7;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_24 = ___0_requests;
		NullCheck(L_24);
		V_11 = (bool)((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))? 1 : 0);
		bool L_25 = V_11;
		if (L_25)
		{
			goto IL_0041;
		}
	}
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
// System.Void UnityEngine.Scripting.PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_mF9E65066D9317F56C6F4AE274A1E2D55D6A62F96 (PreserveAttribute_t3B4D9311A3DF0B9342570C8E43A61973258D5751* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// Conversion methods for marshalling of: UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke(const MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F& unmarshaled, MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshaled_pinvoke& marshaled)
{
	marshaled.___className_0 = il2cpp_codegen_marshal_string(unmarshaled.___className_0);
	marshaled.___nameSpace_1 = il2cpp_codegen_marshal_string(unmarshaled.___nameSpace_1);
	marshaled.___assembly_2 = il2cpp_codegen_marshal_string(unmarshaled.___assembly_2);
	marshaled.___classHasChanged_3 = static_cast<int32_t>(unmarshaled.___classHasChanged_3);
	marshaled.___nameSpaceHasChanged_4 = static_cast<int32_t>(unmarshaled.___nameSpaceHasChanged_4);
	marshaled.___assemblyHasChanged_5 = static_cast<int32_t>(unmarshaled.___assemblyHasChanged_5);
	marshaled.___autoUdpateAPI_6 = static_cast<int32_t>(unmarshaled.___autoUdpateAPI_6);
}
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke_back(const MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshaled_pinvoke& marshaled, MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F& unmarshaled)
{
	unmarshaled.___className_0 = il2cpp_codegen_marshal_string_result(marshaled.___className_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___className_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___className_0));
	unmarshaled.___nameSpace_1 = il2cpp_codegen_marshal_string_result(marshaled.___nameSpace_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___nameSpace_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___nameSpace_1));
	unmarshaled.___assembly_2 = il2cpp_codegen_marshal_string_result(marshaled.___assembly_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___assembly_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___assembly_2));
	bool unmarshaledclassHasChanged_temp_3 = false;
	unmarshaledclassHasChanged_temp_3 = static_cast<bool>(marshaled.___classHasChanged_3);
	unmarshaled.___classHasChanged_3 = unmarshaledclassHasChanged_temp_3;
	bool unmarshalednameSpaceHasChanged_temp_4 = false;
	unmarshalednameSpaceHasChanged_temp_4 = static_cast<bool>(marshaled.___nameSpaceHasChanged_4);
	unmarshaled.___nameSpaceHasChanged_4 = unmarshalednameSpaceHasChanged_temp_4;
	bool unmarshaledassemblyHasChanged_temp_5 = false;
	unmarshaledassemblyHasChanged_temp_5 = static_cast<bool>(marshaled.___assemblyHasChanged_5);
	unmarshaled.___assemblyHasChanged_5 = unmarshaledassemblyHasChanged_temp_5;
	bool unmarshaledautoUdpateAPI_temp_6 = false;
	unmarshaledautoUdpateAPI_temp_6 = static_cast<bool>(marshaled.___autoUdpateAPI_6);
	unmarshaled.___autoUdpateAPI_6 = unmarshaledautoUdpateAPI_temp_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke_cleanup(MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___className_0);
	marshaled.___className_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___nameSpace_1);
	marshaled.___nameSpace_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___assembly_2);
	marshaled.___assembly_2 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_com(const MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F& unmarshaled, MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshaled_com& marshaled)
{
	marshaled.___className_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___className_0);
	marshaled.___nameSpace_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___nameSpace_1);
	marshaled.___assembly_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___assembly_2);
	marshaled.___classHasChanged_3 = static_cast<int32_t>(unmarshaled.___classHasChanged_3);
	marshaled.___nameSpaceHasChanged_4 = static_cast<int32_t>(unmarshaled.___nameSpaceHasChanged_4);
	marshaled.___assemblyHasChanged_5 = static_cast<int32_t>(unmarshaled.___assemblyHasChanged_5);
	marshaled.___autoUdpateAPI_6 = static_cast<int32_t>(unmarshaled.___autoUdpateAPI_6);
}
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_com_back(const MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshaled_com& marshaled, MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F& unmarshaled)
{
	unmarshaled.___className_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___className_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___className_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___className_0));
	unmarshaled.___nameSpace_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___nameSpace_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___nameSpace_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___nameSpace_1));
	unmarshaled.___assembly_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___assembly_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___assembly_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___assembly_2));
	bool unmarshaledclassHasChanged_temp_3 = false;
	unmarshaledclassHasChanged_temp_3 = static_cast<bool>(marshaled.___classHasChanged_3);
	unmarshaled.___classHasChanged_3 = unmarshaledclassHasChanged_temp_3;
	bool unmarshalednameSpaceHasChanged_temp_4 = false;
	unmarshalednameSpaceHasChanged_temp_4 = static_cast<bool>(marshaled.___nameSpaceHasChanged_4);
	unmarshaled.___nameSpaceHasChanged_4 = unmarshalednameSpaceHasChanged_temp_4;
	bool unmarshaledassemblyHasChanged_temp_5 = false;
	unmarshaledassemblyHasChanged_temp_5 = static_cast<bool>(marshaled.___assemblyHasChanged_5);
	unmarshaled.___assemblyHasChanged_5 = unmarshaledassemblyHasChanged_temp_5;
	bool unmarshaledautoUdpateAPI_temp_6 = false;
	unmarshaledautoUdpateAPI_temp_6 = static_cast<bool>(marshaled.___autoUdpateAPI_6);
	unmarshaled.___autoUdpateAPI_6 = unmarshaledautoUdpateAPI_temp_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_com_cleanup(MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___className_0);
	marshaled.___className_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___nameSpace_1);
	marshaled.___nameSpace_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___assembly_2);
	marshaled.___assembly_2 = NULL;
}
// System.Void UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::Set(System.Boolean,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovedFromAttributeData_Set_m155005FB8BCE0569C40B02D75FFADB3FBDB7EEDD (MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F* __this, bool ___0_autoUpdateAPI, String_t* ___1_sourceNamespace, String_t* ___2_sourceAssembly, String_t* ___3_sourceClassName, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___3_sourceClassName;
		__this->___className_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___className_0), (void*)L_0);
		String_t* L_1 = __this->___className_0;
		__this->___classHasChanged_3 = (bool)((!(((RuntimeObject*)(String_t*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		String_t* L_2 = ___1_sourceNamespace;
		__this->___nameSpace_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nameSpace_1), (void*)L_2);
		String_t* L_3 = __this->___nameSpace_1;
		__this->___nameSpaceHasChanged_4 = (bool)((!(((RuntimeObject*)(String_t*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		String_t* L_4 = ___2_sourceAssembly;
		__this->___assembly_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___assembly_2), (void*)L_4);
		String_t* L_5 = __this->___assembly_2;
		__this->___assemblyHasChanged_5 = (bool)((!(((RuntimeObject*)(String_t*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = ___0_autoUpdateAPI;
		__this->___autoUdpateAPI_6 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void MovedFromAttributeData_Set_m155005FB8BCE0569C40B02D75FFADB3FBDB7EEDD_AdjustorThunk (RuntimeObject* __this, bool ___0_autoUpdateAPI, String_t* ___1_sourceNamespace, String_t* ___2_sourceAssembly, String_t* ___3_sourceClassName, const RuntimeMethod* method)
{
	MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F*>(__this + _offset);
	MovedFromAttributeData_Set_m155005FB8BCE0569C40B02D75FFADB3FBDB7EEDD(_thisAdjusted, ___0_autoUpdateAPI, ___1_sourceNamespace, ___2_sourceAssembly, ___3_sourceClassName, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Scripting.APIUpdating.MovedFromAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovedFromAttribute__ctor_mFDCCBD975A9BCC410529DB2B7C01659ACF8005CC (MovedFromAttribute_t2938C24921E4D74A1A2F3B4A874BD6F89D1EA432* __this, String_t* ___0_sourceNamespace, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F* L_0 = (MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F*)(&__this->___data_0);
		String_t* L_1 = ___0_sourceNamespace;
		MovedFromAttributeData_Set_m155005FB8BCE0569C40B02D75FFADB3FBDB7EEDD(L_0, (bool)1, L_1, (String_t*)NULL, (String_t*)NULL, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_inline (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_requests, ___1_lightsOutput, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
