#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
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

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.TextAsset>
struct AsyncOperationBase_1_t8CF7BC4E8FFBC8FE5E8645ECF477AC6131DA4D30;
// System.Comparison`1<FMODUnity.Platform>
struct Comparison_1_tFE79C7B09EF97DB0CBB554496EA13323EA9FBE7A;
// System.Func`1<FMODUnity.Platform>
struct Func_1_tD8217A517B81548153B648DD9D5285A3A78807D4;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<FMODUnity.Platform,System.Boolean>
struct Func_2_t9284ABF8F08FA31B035299E20BC0AA39656E9CD3;
// System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<System.Collections.Generic.List`1<System.String>>>
struct Func_2_t6CE4CF30CD70D39A2CB75A55B5B0E742D1C226F7;
// System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<System.Int32>>
struct Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87;
// System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<System.Int32Enum>>
struct Func_2_t6FC8FB1B78710D8F435EFF2410DBEECBC31455AF;
// System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<System.Object>>
struct Func_2_tDE08512362C8A67B45374C3DD3AC327519BD484A;
// System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<FMODUnity.PlatformCallbackHandler>>
struct Func_2_t90D3EC3607DEE77133AB325243D70D3BF30481BE;
// System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<FMOD.SPEAKERMODE>>
struct Func_2_tCB94F642CEF6C6C7ECD6A1E2038D7EE45FE8E8E5;
// System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<System.String>>
struct Func_2_t45BDF03ABB29FE835EF6F6CA3ABD009BAB9995AF;
// System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<FMODUnity.TriStateBool>>
struct Func_2_tA49219E9EC3C0B2E9A55DEFD7CAD14C1121311C7;
// System.Collections.Generic.IEnumerable`1<System.Int32Enum>
struct IEnumerable_1_t28FB40D8E33C5846AB04F37C78130A4948569C7C;
// System.Collections.Generic.IEnumerable`1<FMODUnity.ThreadType>
struct IEnumerable_1_t99F145FD0892DA7C96F67C8BE14F7A8021B6AB65;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A;
// System.Collections.Generic.List`1<FMODUnity.Platform>
struct List_1_t30C5C74A88EB27074756CC9A8D77BA03AC132112;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<FMODUnity.ThreadAffinityGroup>
struct List_1_t6A9721DF480D61EC7CBFF953BF82265F2FF975B4;
// System.Collections.Generic.List`1<FMODUnity.ThreadType>
struct List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2;
// System.Collections.Generic.List`1<FMOD.StringHelper/ThreadSafeEncoding>
struct List_1_t91D0D60A613B416BB5626856EE90EB0A17817EF0;
// FMODUnity.Legacy/PlatformSetting`1<System.Int32>
struct PlatformSetting_1_tF1F2D113743AE5690D9B0A53C4E5F73E58B88DD8;
// FMODUnity.Legacy/PlatformSetting`1<System.Int32Enum>
struct PlatformSetting_1_tE51D3E0036FF3A6FA334D7296D74F55B569E2227;
// FMODUnity.Legacy/PlatformSetting`1<System.Object>
struct PlatformSetting_1_tB64831A2595CA13E480EFD492D0324ADDD5FFA00;
// FMODUnity.Legacy/PlatformSetting`1<System.String>
struct PlatformSetting_1_tC0C6354C9D7B615166E2AD41980014E4939DC657;
// FMODUnity.Legacy/PlatformSetting`1<FMODUnity.TriStateBool>
struct PlatformSetting_1_t488F3DFFD01BDD40FEF7B22BBE680BDF95A3E7F4;
// FMODUnity.Platform/Property`1<System.Collections.Generic.List`1<System.String>>
struct Property_1_tFF04740DA05A1C6E8363931B19AEED7384C75CEE;
// FMODUnity.Platform/Property`1<System.Collections.Generic.List`1<FMODUnity.ThreadAffinityGroup>>
struct Property_1_tC12A06AB020E1B55C7B086819F2BB13DCD9D6098;
// FMODUnity.Platform/Property`1<System.Int32>
struct Property_1_tB69257AE89C1BAE96A39B56ECAA943FF1F44411F;
// FMODUnity.Platform/Property`1<System.Int32Enum>
struct Property_1_t15AE9CA6BB9975C4E47F4C44D7704F0E2E71FCCF;
// FMODUnity.Platform/Property`1<System.Object>
struct Property_1_tFFAC20918771F99B47C42E4C8881EA58F86742AF;
// FMODUnity.Platform/Property`1<FMODUnity.PlatformCallbackHandler>
struct Property_1_t6770127C86A531D398D7204DB7CC4E497F04FEDE;
// FMODUnity.Platform/Property`1<FMOD.SPEAKERMODE>
struct Property_1_tB7992A7FE9E273F12B5AD18F27A64E5FE522A31E;
// FMODUnity.Platform/Property`1<System.String>
struct Property_1_t4FFACE60733293ECEBB1863470178A4D5DA5EFD9;
// FMODUnity.Platform/Property`1<FMODUnity.TriStateBool>
struct Property_1_tB4DC4D8A4B1A7885B188EF3DFCDA5F0FC8965C97;
// FMOD.Studio.Bank[]
struct BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// FMOD.Studio.PARAMETER_DESCRIPTION[]
struct PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5;
// FMOD.Studio.PARAMETER_ID[]
struct PARAMETER_IDU5BU5D_tBF176CF014283DCED4159FBAE8605A11C6F2B373;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// FMODUnity.ThreadType[]
struct ThreadTypeU5BU5D_t2243EF3BF541EC7639D75AC642761856CF0D28BB;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// FMOD.StringHelper/ThreadSafeEncoding[]
struct ThreadSafeEncodingU5BU5D_t3182668DC688D2F2440825FF0E69AFA374EE2476;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// FMOD.Studio.BANK_INFO
struct BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// FMOD.FILE_ASYNCCANCEL_CALLBACK
struct FILE_ASYNCCANCEL_CALLBACK_t00890D8ED225C89563E670D2BF248926F90164BF;
// FMOD.FILE_ASYNCREAD_CALLBACK
struct FILE_ASYNCREAD_CALLBACK_t9C5810186500FC37052F3D4A4FBF9ABA48CAFC8F;
// FMOD.FILE_CLOSE_CALLBACK
struct FILE_CLOSE_CALLBACK_t9405C9698E17716FC0E2B95CB3D7331DFB6E80EA;
// FMOD.FILE_OPEN_CALLBACK
struct FILE_OPEN_CALLBACK_tA13B923FE5970CFC0B305A287DEEFE71D1C77694;
// FMOD.FILE_READ_CALLBACK
struct FILE_READ_CALLBACK_tF4B8F36AB9729B31440DB6204D0E32AACD42937A;
// FMOD.FILE_SEEK_CALLBACK
struct FILE_SEEK_CALLBACK_t9494A7DB9F5B0DF84468422A4F14842218347C49;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// FMODUnity.ParamRef
struct ParamRef_t6751E36E401E0FC867147A1DD315969996D15FFD;
// FMODUnity.Platform
struct Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149;
// FMODUnity.PlatformCallbackHandler
struct PlatformCallbackHandler_tC97A12E9191ED7EE208965B8DF447CA520F3EE51;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// FMOD.Studio.SOUND_INFO
struct SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21;
// FMOD.SOUND_NONBLOCK_CALLBACK
struct SOUND_NONBLOCK_CALLBACK_t16BF258C0A11AF513234B9F217234BA76288B568;
// FMOD.SOUND_PCMREAD_CALLBACK
struct SOUND_PCMREAD_CALLBACK_t099B7F37663252859425D0155BD8068497E63331;
// FMOD.SOUND_PCMSETPOS_CALLBACK
struct SOUND_PCMSETPOS_CALLBACK_t192B4401D4C053178E97EA3662840E6CF28CCB69;
// FMOD.Studio.SYSTEM_CALLBACK
struct SYSTEM_CALLBACK_tAC95078FE937EE93C1AD6CA0DD09DB016BBA843C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// FMODUnity.SystemNotInitializedException
struct SystemNotInitializedException_tB1BE2003450BA76961E0BBA4F7D9E21F8AE4B63C;
// FMODUnity.ThreadAffinityGroup
struct ThreadAffinityGroup_t3040CB7EA982A4E81D41588DD37CAFD9A8A298D4;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282;
// FMOD.Studio.Union_IntBoolFloatString
struct Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294;
// FMODUnity.VCANotFoundException
struct VCANotFoundException_t7180AED40B600DC06C9AA6131683130085296AD6;
// FMOD.VERSION
struct VERSION_t02D20EF90F05F3882F88161C3906607B1EF5B4CE;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// FMODUnity.Legacy/PlatformBoolSetting
struct PlatformBoolSetting_t2E22BFCAF1E3F64C00B56A090BE84DFBBE2BA479;
// FMODUnity.Legacy/PlatformIntSetting
struct PlatformIntSetting_t9864FB4E1B651288FBC26FB386A06161EBBE30D3;
// FMODUnity.Legacy/PlatformSettingBase
struct PlatformSettingBase_t7FDEC6A3823A563621A087868AF56B54A7653B43;
// FMODUnity.Legacy/PlatformStringSetting
struct PlatformStringSetting_t7610A0760778513396EEE9FCB60D43F202BAE4C8;
// FMODUnity.Platform/PropertyBool
struct PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169;
// FMODUnity.Platform/PropertyCallbackHandler
struct PropertyCallbackHandler_t82B0903BB420520717D537266810EE85744AC4BA;
// FMODUnity.Platform/PropertyInt
struct PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D;
// FMODUnity.Platform/PropertySpeakerMode
struct PropertySpeakerMode_tF3E57F3B6A469063306C480AD774C57ABB010CEF;
// FMODUnity.Platform/PropertyStorage
struct PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076;
// FMODUnity.Platform/PropertyString
struct PropertyString_tD68EEE1C2850E21FA13D8B6EE52BD852444904C5;
// FMODUnity.Platform/PropertyStringList
struct PropertyStringList_t88EB50D87DA26E8B975BEA698EF4A67DBE1830BC;
// FMODUnity.Platform/PropertyThreadAffinityList
struct PropertyThreadAffinityList_tE480BD2634070CFF10C439920F759371BDEA1AD2;
// FMODUnity.RuntimeManager/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t743089B7D9CD15662B23C72EFC50E6D5A0B88507;
// FMODUnity.RuntimeManager/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t341FE52DD07C1796D32D9204F25D127B3ABC76AA;
// FMODUnity.RuntimeManager/<>c__DisplayClass47_0
struct U3CU3Ec__DisplayClass47_0_t6726AEBE852AC39B728D9ABAE656E4688F0335FD;
// FMODUnity.RuntimeManager/AttachedInstance
struct AttachedInstance_t532AE68813E2E569A0F6EA003247D7CEDC2C9ABD;
// FMODUnity.RuntimeManager/GuidComparer
struct GuidComparer_tAE5181CABB0C1A30EB2F2FC1FCC29F83D3D9AD0F;
// FMODUnity.Settings/<>c
struct U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321;
// FMOD.StringHelper/ThreadSafeEncoding
struct ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2;
// FMODUnity.StudioEventEmitter/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t2E7737B844C58FC858C236201BAAA594F7C7E47E;
// FMODUnity.StudioEventEmitter/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_t984A7E1C8D24EAE682C8C38DEBC8FF7DC8B2E465;
// FMODUnity.Platform/PropertyAccessors/<>c
struct U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548;

IL2CPP_EXTERN_C RuntimeClass* BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tD8217A517B81548153B648DD9D5285A3A78807D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t45BDF03ABB29FE835EF6F6CA3ABD009BAB9995AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6CE4CF30CD70D39A2CB75A55B5B0E742D1C226F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t90D3EC3607DEE77133AB325243D70D3BF30481BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA49219E9EC3C0B2E9A55DEFD7CAD14C1121311C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tCB94F642CEF6C6C7ECD6A1E2038D7EE45FE8E8E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformDefault_tDCBF760189750C7A6A4423F691E90C7C630FE695_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformPlayInEditor_t3D26345BC831A559DCBA74716780060FE12EDDFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyCallbackHandler_t82B0903BB420520717D537266810EE85744AC4BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertySpeakerMode_tF3E57F3B6A469063306C480AD774C57ABB010CEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyStringList_t88EB50D87DA26E8B975BEA698EF4A67DBE1830BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyString_tD68EEE1C2850E21FA13D8B6EE52BD852444904C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RESULT_t25BE0876E69B44E7D72DC4C52217E7C5B1A82271_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeManager_t1DD0703C1A7473D65A44439D647D7C6B0C36C8FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1334702E794CB5624DA378C6CD31B09126197FD9;
IL2CPP_EXTERN_C String_t* _stringLiteral1E91B09D74330D84716D5CE30BB9B07E1C7A18FB;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral6A37B341BE63968D01D00605F25F5A2725A058BE;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB784C0FDB5E2F468943EF04EB13EE0E6135421C;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisPARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B_m4280AD0E10D4EA3CCA07CF96AED06A1723342C42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mA1B14C222C3C3E3A9FB75789907F3ABC297C4974_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mBEE0B8FCEEC73FB03A94AB3C323E5167497AE30F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mBF95B76079873F4404E885D6D391FBF733466CE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mDFCD9D28A06A79FBE7DB11E3FDE4C4203A77A584_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mE64CAEFC88B56EE692AA35DE5C04F6F1E5CA7843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mFB468477EB787E9D6D78904DFE15B7754F5B3890_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0E5A0C1F5EF3A2218BE4C6111EDC61EA672CE9DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4B5F22DCBB87DAE7FA48D0B1B8BFEBA943A0C144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_SizeOf_TisBANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_m86AE3CC308518A9BF37DCA60BBA0AD0FE683E9DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlatformSetting_1__ctor_m15671CC1526FF2C711A5E6EF4865EDC33C953578_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlatformSetting_1__ctor_m1C7A8752D41E64C1743BA8DE099AA3AAE0784F5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlatformSetting_1__ctor_m7358C34761BD83F442F2C055D210180E443DA4FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessor_1__ctor_m1F9DAD4B75E3D28D077D23FFFCDE7A412391C1CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessor_1__ctor_m3E035A428D209C7A6DF0F2FBFD799C59C3EEEF4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessor_1__ctor_m85B8153BC5914536F568B4EBE5E1A5D7E05F185B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessor_1__ctor_m9A30F83C45C1F465269ED8BAFCFED58DC60C8519_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessor_1__ctor_mA3732FA4712BD8D1BCAF3ED04FAC2A6DD33E9060_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessor_1__ctor_mCF8928B830DA0BB19BD8D9E0A88FB5153D920206_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Property_1__ctor_m1867A586B284C85D865E2B26C3CF7850A85A87E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Property_1__ctor_m31BF39C9050A5905D3EF2E31077FA63DB33985A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Property_1__ctor_m45B06F418615B089A5E4AD312936DEA12461BAA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Property_1__ctor_m84423BD3659DABF710EC1DFE227C731DD9735C50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Property_1__ctor_mB197BF6AC6FEAC7C95892A3EC3FE4CA222869B11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Property_1__ctor_mEF40FA558B2DD2E0A08F5AA02EF426345B4B5BC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Property_1__ctor_mF85F2D93388A82EC6A9743737CA3FCF5308A5464_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__14_0_m4E0FE056D0DF81F0D4F301446496833AED3B8088_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__14_10_m8DBFA5C36184F6A8A23BF7E4D1819B3C4360E40F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__14_11_m1787A1CCDB2C9F44F5B998B4E3C9EEC22B9AB46E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__14_12_mEBE2F4D7572C12932DBD15DFE12E0B36488D5EDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__14_13_mA59F5F47EAAA9ABAA5547C6D92A046B183B5DD64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__14_1_mAAA25F79AD860007F5330D1C24E5070971933AA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__14_2_m3E47B29A9146C61755C5547E3D60E5F11B4CAFD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__14_3_mC9777CCA1C44EAE907B386301A0CF4DECCC06270_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__14_4_m9ABCF4B4F2B725B6E9BF6D75FF9A2D8B8FF0A963_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__14_5_m7E66F4F94CE79EBF563DB336D0684EEF466E104A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__14_6_m84479FC00F8EC3B1E7A48D5128D03DA591B86256_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__14_7_m8B0C496900697695BFE6F209B8BD79C250DC2048_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__14_8_m861E26F6400EBE971FA3DF318E348E06B886371C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__14_9_m8573561C3E240DDF90082684F297114CA7A5424A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166_0_0_0_var;
struct BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A;;
struct BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_marshaled_pinvoke;
struct BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21;;
struct SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21_marshaled_pinvoke;
struct SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21_marshaled_pinvoke;;
struct Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294;;
struct Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshaled_com;
struct Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshaled_com;;
struct Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshaled_pinvoke;
struct Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshaled_pinvoke;;

struct BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
struct PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5;
struct PARAMETER_IDU5BU5D_tBF176CF014283DCED4159FBAE8605A11C6F2B373;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct ThreadTypeU5BU5D_t2243EF3BF541EC7639D75AC642761856CF0D28BB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<FMODUnity.ThreadType>
struct  List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ThreadTypeU5BU5D_t2243EF3BF541EC7639D75AC642761856CF0D28BB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2, ____items_1)); }
	inline ThreadTypeU5BU5D_t2243EF3BF541EC7639D75AC642761856CF0D28BB* get__items_1() const { return ____items_1; }
	inline ThreadTypeU5BU5D_t2243EF3BF541EC7639D75AC642761856CF0D28BB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ThreadTypeU5BU5D_t2243EF3BF541EC7639D75AC642761856CF0D28BB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ThreadTypeU5BU5D_t2243EF3BF541EC7639D75AC642761856CF0D28BB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2_StaticFields, ____emptyArray_5)); }
	inline ThreadTypeU5BU5D_t2243EF3BF541EC7639D75AC642761856CF0D28BB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ThreadTypeU5BU5D_t2243EF3BF541EC7639D75AC642761856CF0D28BB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ThreadTypeU5BU5D_t2243EF3BF541EC7639D75AC642761856CF0D28BB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<FMOD.StringHelper/ThreadSafeEncoding>
struct  List_1_t91D0D60A613B416BB5626856EE90EB0A17817EF0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ThreadSafeEncodingU5BU5D_t3182668DC688D2F2440825FF0E69AFA374EE2476* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t91D0D60A613B416BB5626856EE90EB0A17817EF0, ____items_1)); }
	inline ThreadSafeEncodingU5BU5D_t3182668DC688D2F2440825FF0E69AFA374EE2476* get__items_1() const { return ____items_1; }
	inline ThreadSafeEncodingU5BU5D_t3182668DC688D2F2440825FF0E69AFA374EE2476** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ThreadSafeEncodingU5BU5D_t3182668DC688D2F2440825FF0E69AFA374EE2476* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t91D0D60A613B416BB5626856EE90EB0A17817EF0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t91D0D60A613B416BB5626856EE90EB0A17817EF0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t91D0D60A613B416BB5626856EE90EB0A17817EF0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t91D0D60A613B416BB5626856EE90EB0A17817EF0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ThreadSafeEncodingU5BU5D_t3182668DC688D2F2440825FF0E69AFA374EE2476* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t91D0D60A613B416BB5626856EE90EB0A17817EF0_StaticFields, ____emptyArray_5)); }
	inline ThreadSafeEncodingU5BU5D_t3182668DC688D2F2440825FF0E69AFA374EE2476* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ThreadSafeEncodingU5BU5D_t3182668DC688D2F2440825FF0E69AFA374EE2476** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ThreadSafeEncodingU5BU5D_t3182668DC688D2F2440825FF0E69AFA374EE2476* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// FMODUnity.Platform/Property`1<System.Collections.Generic.List`1<System.String>>
struct  Property_1_tFF04740DA05A1C6E8363931B19AEED7384C75CEE  : public RuntimeObject
{
public:
	// T FMODUnity.Platform/Property`1::Value
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___Value_0;
	// System.Boolean FMODUnity.Platform/Property`1::HasValue
	bool ___HasValue_1;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Property_1_tFF04740DA05A1C6E8363931B19AEED7384C75CEE, ___Value_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_Value_0() const { return ___Value_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}

	inline static int32_t get_offset_of_HasValue_1() { return static_cast<int32_t>(offsetof(Property_1_tFF04740DA05A1C6E8363931B19AEED7384C75CEE, ___HasValue_1)); }
	inline bool get_HasValue_1() const { return ___HasValue_1; }
	inline bool* get_address_of_HasValue_1() { return &___HasValue_1; }
	inline void set_HasValue_1(bool value)
	{
		___HasValue_1 = value;
	}
};


// FMODUnity.Platform/Property`1<System.Collections.Generic.List`1<FMODUnity.ThreadAffinityGroup>>
struct  Property_1_tC12A06AB020E1B55C7B086819F2BB13DCD9D6098  : public RuntimeObject
{
public:
	// T FMODUnity.Platform/Property`1::Value
	List_1_t6A9721DF480D61EC7CBFF953BF82265F2FF975B4 * ___Value_0;
	// System.Boolean FMODUnity.Platform/Property`1::HasValue
	bool ___HasValue_1;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Property_1_tC12A06AB020E1B55C7B086819F2BB13DCD9D6098, ___Value_0)); }
	inline List_1_t6A9721DF480D61EC7CBFF953BF82265F2FF975B4 * get_Value_0() const { return ___Value_0; }
	inline List_1_t6A9721DF480D61EC7CBFF953BF82265F2FF975B4 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(List_1_t6A9721DF480D61EC7CBFF953BF82265F2FF975B4 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}

	inline static int32_t get_offset_of_HasValue_1() { return static_cast<int32_t>(offsetof(Property_1_tC12A06AB020E1B55C7B086819F2BB13DCD9D6098, ___HasValue_1)); }
	inline bool get_HasValue_1() const { return ___HasValue_1; }
	inline bool* get_address_of_HasValue_1() { return &___HasValue_1; }
	inline void set_HasValue_1(bool value)
	{
		___HasValue_1 = value;
	}
};


// FMODUnity.Platform/Property`1<System.Int32>
struct  Property_1_tB69257AE89C1BAE96A39B56ECAA943FF1F44411F  : public RuntimeObject
{
public:
	// T FMODUnity.Platform/Property`1::Value
	int32_t ___Value_0;
	// System.Boolean FMODUnity.Platform/Property`1::HasValue
	bool ___HasValue_1;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Property_1_tB69257AE89C1BAE96A39B56ECAA943FF1F44411F, ___Value_0)); }
	inline int32_t get_Value_0() const { return ___Value_0; }
	inline int32_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int32_t value)
	{
		___Value_0 = value;
	}

	inline static int32_t get_offset_of_HasValue_1() { return static_cast<int32_t>(offsetof(Property_1_tB69257AE89C1BAE96A39B56ECAA943FF1F44411F, ___HasValue_1)); }
	inline bool get_HasValue_1() const { return ___HasValue_1; }
	inline bool* get_address_of_HasValue_1() { return &___HasValue_1; }
	inline void set_HasValue_1(bool value)
	{
		___HasValue_1 = value;
	}
};


// FMODUnity.Platform/Property`1<FMODUnity.PlatformCallbackHandler>
struct  Property_1_t6770127C86A531D398D7204DB7CC4E497F04FEDE  : public RuntimeObject
{
public:
	// T FMODUnity.Platform/Property`1::Value
	PlatformCallbackHandler_tC97A12E9191ED7EE208965B8DF447CA520F3EE51 * ___Value_0;
	// System.Boolean FMODUnity.Platform/Property`1::HasValue
	bool ___HasValue_1;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Property_1_t6770127C86A531D398D7204DB7CC4E497F04FEDE, ___Value_0)); }
	inline PlatformCallbackHandler_tC97A12E9191ED7EE208965B8DF447CA520F3EE51 * get_Value_0() const { return ___Value_0; }
	inline PlatformCallbackHandler_tC97A12E9191ED7EE208965B8DF447CA520F3EE51 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(PlatformCallbackHandler_tC97A12E9191ED7EE208965B8DF447CA520F3EE51 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}

	inline static int32_t get_offset_of_HasValue_1() { return static_cast<int32_t>(offsetof(Property_1_t6770127C86A531D398D7204DB7CC4E497F04FEDE, ___HasValue_1)); }
	inline bool get_HasValue_1() const { return ___HasValue_1; }
	inline bool* get_address_of_HasValue_1() { return &___HasValue_1; }
	inline void set_HasValue_1(bool value)
	{
		___HasValue_1 = value;
	}
};


// FMODUnity.Platform/Property`1<System.String>
struct  Property_1_t4FFACE60733293ECEBB1863470178A4D5DA5EFD9  : public RuntimeObject
{
public:
	// T FMODUnity.Platform/Property`1::Value
	String_t* ___Value_0;
	// System.Boolean FMODUnity.Platform/Property`1::HasValue
	bool ___HasValue_1;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Property_1_t4FFACE60733293ECEBB1863470178A4D5DA5EFD9, ___Value_0)); }
	inline String_t* get_Value_0() const { return ___Value_0; }
	inline String_t** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(String_t* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}

	inline static int32_t get_offset_of_HasValue_1() { return static_cast<int32_t>(offsetof(Property_1_t4FFACE60733293ECEBB1863470178A4D5DA5EFD9, ___HasValue_1)); }
	inline bool get_HasValue_1() const { return ___HasValue_1; }
	inline bool* get_address_of_HasValue_1() { return &___HasValue_1; }
	inline void set_HasValue_1(bool value)
	{
		___HasValue_1 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Text.Encoding
struct  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// FMOD.StringHelper
struct  StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC  : public RuntimeObject
{
public:

public:
};

struct StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_StaticFields
{
public:
	// System.Collections.Generic.List`1<FMOD.StringHelper/ThreadSafeEncoding> FMOD.StringHelper::encoders
	List_1_t91D0D60A613B416BB5626856EE90EB0A17817EF0 * ___encoders_0;

public:
	inline static int32_t get_offset_of_encoders_0() { return static_cast<int32_t>(offsetof(StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_StaticFields, ___encoders_0)); }
	inline List_1_t91D0D60A613B416BB5626856EE90EB0A17817EF0 * get_encoders_0() const { return ___encoders_0; }
	inline List_1_t91D0D60A613B416BB5626856EE90EB0A17817EF0 ** get_address_of_encoders_0() { return &___encoders_0; }
	inline void set_encoders_0(List_1_t91D0D60A613B416BB5626856EE90EB0A17817EF0 * value)
	{
		___encoders_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoders_0), (void*)value);
	}
};


// FMOD.VERSION
struct  VERSION_t02D20EF90F05F3882F88161C3906607B1EF5B4CE  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// FMODUnity.Platform/PropertyStorage
struct  PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076  : public RuntimeObject
{
public:
	// FMODUnity.Platform/PropertyBool FMODUnity.Platform/PropertyStorage::LiveUpdate
	PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 * ___LiveUpdate_0;
	// FMODUnity.Platform/PropertyInt FMODUnity.Platform/PropertyStorage::LiveUpdatePort
	PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * ___LiveUpdatePort_1;
	// FMODUnity.Platform/PropertyBool FMODUnity.Platform/PropertyStorage::Overlay
	PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 * ___Overlay_2;
	// FMODUnity.Platform/PropertyBool FMODUnity.Platform/PropertyStorage::Logging
	PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 * ___Logging_3;
	// FMODUnity.Platform/PropertyInt FMODUnity.Platform/PropertyStorage::SampleRate
	PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * ___SampleRate_4;
	// FMODUnity.Platform/PropertyString FMODUnity.Platform/PropertyStorage::BuildDirectory
	PropertyString_tD68EEE1C2850E21FA13D8B6EE52BD852444904C5 * ___BuildDirectory_5;
	// FMODUnity.Platform/PropertySpeakerMode FMODUnity.Platform/PropertyStorage::SpeakerMode
	PropertySpeakerMode_tF3E57F3B6A469063306C480AD774C57ABB010CEF * ___SpeakerMode_6;
	// FMODUnity.Platform/PropertyInt FMODUnity.Platform/PropertyStorage::VirtualChannelCount
	PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * ___VirtualChannelCount_7;
	// FMODUnity.Platform/PropertyInt FMODUnity.Platform/PropertyStorage::RealChannelCount
	PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * ___RealChannelCount_8;
	// FMODUnity.Platform/PropertyInt FMODUnity.Platform/PropertyStorage::DSPBufferLength
	PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * ___DSPBufferLength_9;
	// FMODUnity.Platform/PropertyInt FMODUnity.Platform/PropertyStorage::DSPBufferCount
	PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * ___DSPBufferCount_10;
	// FMODUnity.Platform/PropertyStringList FMODUnity.Platform/PropertyStorage::Plugins
	PropertyStringList_t88EB50D87DA26E8B975BEA698EF4A67DBE1830BC * ___Plugins_11;
	// FMODUnity.Platform/PropertyStringList FMODUnity.Platform/PropertyStorage::StaticPlugins
	PropertyStringList_t88EB50D87DA26E8B975BEA698EF4A67DBE1830BC * ___StaticPlugins_12;
	// FMODUnity.Platform/PropertyCallbackHandler FMODUnity.Platform/PropertyStorage::CallbackHandler
	PropertyCallbackHandler_t82B0903BB420520717D537266810EE85744AC4BA * ___CallbackHandler_13;

public:
	inline static int32_t get_offset_of_LiveUpdate_0() { return static_cast<int32_t>(offsetof(PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076, ___LiveUpdate_0)); }
	inline PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 * get_LiveUpdate_0() const { return ___LiveUpdate_0; }
	inline PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 ** get_address_of_LiveUpdate_0() { return &___LiveUpdate_0; }
	inline void set_LiveUpdate_0(PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 * value)
	{
		___LiveUpdate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LiveUpdate_0), (void*)value);
	}

	inline static int32_t get_offset_of_LiveUpdatePort_1() { return static_cast<int32_t>(offsetof(PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076, ___LiveUpdatePort_1)); }
	inline PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * get_LiveUpdatePort_1() const { return ___LiveUpdatePort_1; }
	inline PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D ** get_address_of_LiveUpdatePort_1() { return &___LiveUpdatePort_1; }
	inline void set_LiveUpdatePort_1(PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * value)
	{
		___LiveUpdatePort_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LiveUpdatePort_1), (void*)value);
	}

	inline static int32_t get_offset_of_Overlay_2() { return static_cast<int32_t>(offsetof(PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076, ___Overlay_2)); }
	inline PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 * get_Overlay_2() const { return ___Overlay_2; }
	inline PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 ** get_address_of_Overlay_2() { return &___Overlay_2; }
	inline void set_Overlay_2(PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 * value)
	{
		___Overlay_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Overlay_2), (void*)value);
	}

	inline static int32_t get_offset_of_Logging_3() { return static_cast<int32_t>(offsetof(PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076, ___Logging_3)); }
	inline PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 * get_Logging_3() const { return ___Logging_3; }
	inline PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 ** get_address_of_Logging_3() { return &___Logging_3; }
	inline void set_Logging_3(PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 * value)
	{
		___Logging_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Logging_3), (void*)value);
	}

	inline static int32_t get_offset_of_SampleRate_4() { return static_cast<int32_t>(offsetof(PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076, ___SampleRate_4)); }
	inline PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * get_SampleRate_4() const { return ___SampleRate_4; }
	inline PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D ** get_address_of_SampleRate_4() { return &___SampleRate_4; }
	inline void set_SampleRate_4(PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * value)
	{
		___SampleRate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SampleRate_4), (void*)value);
	}

	inline static int32_t get_offset_of_BuildDirectory_5() { return static_cast<int32_t>(offsetof(PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076, ___BuildDirectory_5)); }
	inline PropertyString_tD68EEE1C2850E21FA13D8B6EE52BD852444904C5 * get_BuildDirectory_5() const { return ___BuildDirectory_5; }
	inline PropertyString_tD68EEE1C2850E21FA13D8B6EE52BD852444904C5 ** get_address_of_BuildDirectory_5() { return &___BuildDirectory_5; }
	inline void set_BuildDirectory_5(PropertyString_tD68EEE1C2850E21FA13D8B6EE52BD852444904C5 * value)
	{
		___BuildDirectory_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildDirectory_5), (void*)value);
	}

	inline static int32_t get_offset_of_SpeakerMode_6() { return static_cast<int32_t>(offsetof(PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076, ___SpeakerMode_6)); }
	inline PropertySpeakerMode_tF3E57F3B6A469063306C480AD774C57ABB010CEF * get_SpeakerMode_6() const { return ___SpeakerMode_6; }
	inline PropertySpeakerMode_tF3E57F3B6A469063306C480AD774C57ABB010CEF ** get_address_of_SpeakerMode_6() { return &___SpeakerMode_6; }
	inline void set_SpeakerMode_6(PropertySpeakerMode_tF3E57F3B6A469063306C480AD774C57ABB010CEF * value)
	{
		___SpeakerMode_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpeakerMode_6), (void*)value);
	}

	inline static int32_t get_offset_of_VirtualChannelCount_7() { return static_cast<int32_t>(offsetof(PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076, ___VirtualChannelCount_7)); }
	inline PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * get_VirtualChannelCount_7() const { return ___VirtualChannelCount_7; }
	inline PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D ** get_address_of_VirtualChannelCount_7() { return &___VirtualChannelCount_7; }
	inline void set_VirtualChannelCount_7(PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * value)
	{
		___VirtualChannelCount_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VirtualChannelCount_7), (void*)value);
	}

	inline static int32_t get_offset_of_RealChannelCount_8() { return static_cast<int32_t>(offsetof(PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076, ___RealChannelCount_8)); }
	inline PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * get_RealChannelCount_8() const { return ___RealChannelCount_8; }
	inline PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D ** get_address_of_RealChannelCount_8() { return &___RealChannelCount_8; }
	inline void set_RealChannelCount_8(PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * value)
	{
		___RealChannelCount_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RealChannelCount_8), (void*)value);
	}

	inline static int32_t get_offset_of_DSPBufferLength_9() { return static_cast<int32_t>(offsetof(PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076, ___DSPBufferLength_9)); }
	inline PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * get_DSPBufferLength_9() const { return ___DSPBufferLength_9; }
	inline PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D ** get_address_of_DSPBufferLength_9() { return &___DSPBufferLength_9; }
	inline void set_DSPBufferLength_9(PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * value)
	{
		___DSPBufferLength_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DSPBufferLength_9), (void*)value);
	}

	inline static int32_t get_offset_of_DSPBufferCount_10() { return static_cast<int32_t>(offsetof(PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076, ___DSPBufferCount_10)); }
	inline PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * get_DSPBufferCount_10() const { return ___DSPBufferCount_10; }
	inline PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D ** get_address_of_DSPBufferCount_10() { return &___DSPBufferCount_10; }
	inline void set_DSPBufferCount_10(PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * value)
	{
		___DSPBufferCount_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DSPBufferCount_10), (void*)value);
	}

	inline static int32_t get_offset_of_Plugins_11() { return static_cast<int32_t>(offsetof(PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076, ___Plugins_11)); }
	inline PropertyStringList_t88EB50D87DA26E8B975BEA698EF4A67DBE1830BC * get_Plugins_11() const { return ___Plugins_11; }
	inline PropertyStringList_t88EB50D87DA26E8B975BEA698EF4A67DBE1830BC ** get_address_of_Plugins_11() { return &___Plugins_11; }
	inline void set_Plugins_11(PropertyStringList_t88EB50D87DA26E8B975BEA698EF4A67DBE1830BC * value)
	{
		___Plugins_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Plugins_11), (void*)value);
	}

	inline static int32_t get_offset_of_StaticPlugins_12() { return static_cast<int32_t>(offsetof(PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076, ___StaticPlugins_12)); }
	inline PropertyStringList_t88EB50D87DA26E8B975BEA698EF4A67DBE1830BC * get_StaticPlugins_12() const { return ___StaticPlugins_12; }
	inline PropertyStringList_t88EB50D87DA26E8B975BEA698EF4A67DBE1830BC ** get_address_of_StaticPlugins_12() { return &___StaticPlugins_12; }
	inline void set_StaticPlugins_12(PropertyStringList_t88EB50D87DA26E8B975BEA698EF4A67DBE1830BC * value)
	{
		___StaticPlugins_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StaticPlugins_12), (void*)value);
	}

	inline static int32_t get_offset_of_CallbackHandler_13() { return static_cast<int32_t>(offsetof(PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076, ___CallbackHandler_13)); }
	inline PropertyCallbackHandler_t82B0903BB420520717D537266810EE85744AC4BA * get_CallbackHandler_13() const { return ___CallbackHandler_13; }
	inline PropertyCallbackHandler_t82B0903BB420520717D537266810EE85744AC4BA ** get_address_of_CallbackHandler_13() { return &___CallbackHandler_13; }
	inline void set_CallbackHandler_13(PropertyCallbackHandler_t82B0903BB420520717D537266810EE85744AC4BA * value)
	{
		___CallbackHandler_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallbackHandler_13), (void*)value);
	}
};


// FMODUnity.RuntimeManager/<>c__DisplayClass47_0
struct  U3CU3Ec__DisplayClass47_0_t6726AEBE852AC39B728D9ABAE656E4688F0335FD  : public RuntimeObject
{
public:
	// System.Boolean FMODUnity.RuntimeManager/<>c__DisplayClass47_0::loadSamples
	bool ___loadSamples_0;
	// System.Action FMODUnity.RuntimeManager/<>c__DisplayClass47_0::completionCallback
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___completionCallback_1;

public:
	inline static int32_t get_offset_of_loadSamples_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_0_t6726AEBE852AC39B728D9ABAE656E4688F0335FD, ___loadSamples_0)); }
	inline bool get_loadSamples_0() const { return ___loadSamples_0; }
	inline bool* get_address_of_loadSamples_0() { return &___loadSamples_0; }
	inline void set_loadSamples_0(bool value)
	{
		___loadSamples_0 = value;
	}

	inline static int32_t get_offset_of_completionCallback_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_0_t6726AEBE852AC39B728D9ABAE656E4688F0335FD, ___completionCallback_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_completionCallback_1() const { return ___completionCallback_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_completionCallback_1() { return &___completionCallback_1; }
	inline void set_completionCallback_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___completionCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completionCallback_1), (void*)value);
	}
};


// FMODUnity.RuntimeManager/GuidComparer
struct  GuidComparer_tAE5181CABB0C1A30EB2F2FC1FCC29F83D3D9AD0F  : public RuntimeObject
{
public:

public:
};


// FMODUnity.Settings/<>c
struct  U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321_StaticFields
{
public:
	// FMODUnity.Settings/<>c FMODUnity.Settings/<>c::<>9
	U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321 * ___U3CU3E9_0;
	// System.Comparison`1<FMODUnity.Platform> FMODUnity.Settings/<>c::<>9__58_0
	Comparison_1_tFE79C7B09EF97DB0CBB554496EA13323EA9FBE7A * ___U3CU3E9__58_0_1;
	// System.Func`2<FMODUnity.Platform,System.Boolean> FMODUnity.Settings/<>c::<>9__68_0
	Func_2_t9284ABF8F08FA31B035299E20BC0AA39656E9CD3 * ___U3CU3E9__68_0_2;
	// System.Func`2<FMODUnity.Platform,System.Boolean> FMODUnity.Settings/<>c::<>9__68_1
	Func_2_t9284ABF8F08FA31B035299E20BC0AA39656E9CD3 * ___U3CU3E9__68_1_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__58_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321_StaticFields, ___U3CU3E9__58_0_1)); }
	inline Comparison_1_tFE79C7B09EF97DB0CBB554496EA13323EA9FBE7A * get_U3CU3E9__58_0_1() const { return ___U3CU3E9__58_0_1; }
	inline Comparison_1_tFE79C7B09EF97DB0CBB554496EA13323EA9FBE7A ** get_address_of_U3CU3E9__58_0_1() { return &___U3CU3E9__58_0_1; }
	inline void set_U3CU3E9__58_0_1(Comparison_1_tFE79C7B09EF97DB0CBB554496EA13323EA9FBE7A * value)
	{
		___U3CU3E9__58_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__58_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__68_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321_StaticFields, ___U3CU3E9__68_0_2)); }
	inline Func_2_t9284ABF8F08FA31B035299E20BC0AA39656E9CD3 * get_U3CU3E9__68_0_2() const { return ___U3CU3E9__68_0_2; }
	inline Func_2_t9284ABF8F08FA31B035299E20BC0AA39656E9CD3 ** get_address_of_U3CU3E9__68_0_2() { return &___U3CU3E9__68_0_2; }
	inline void set_U3CU3E9__68_0_2(Func_2_t9284ABF8F08FA31B035299E20BC0AA39656E9CD3 * value)
	{
		___U3CU3E9__68_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__68_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__68_1_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321_StaticFields, ___U3CU3E9__68_1_3)); }
	inline Func_2_t9284ABF8F08FA31B035299E20BC0AA39656E9CD3 * get_U3CU3E9__68_1_3() const { return ___U3CU3E9__68_1_3; }
	inline Func_2_t9284ABF8F08FA31B035299E20BC0AA39656E9CD3 ** get_address_of_U3CU3E9__68_1_3() { return &___U3CU3E9__68_1_3; }
	inline void set_U3CU3E9__68_1_3(Func_2_t9284ABF8F08FA31B035299E20BC0AA39656E9CD3 * value)
	{
		___U3CU3E9__68_1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__68_1_3), (void*)value);
	}
};


// FMODUnity.StudioEventEmitter/<>c__DisplayClass36_0
struct  U3CU3Ec__DisplayClass36_0_t2E7737B844C58FC858C236201BAAA594F7C7E47E  : public RuntimeObject
{
public:
	// System.String FMODUnity.StudioEventEmitter/<>c__DisplayClass36_0::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t2E7737B844C58FC858C236201BAAA594F7C7E47E, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}
};


// FMODUnity.Platform/PropertyAccessors/<>c
struct  U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_StaticFields
{
public:
	// FMODUnity.Platform/PropertyAccessors/<>c FMODUnity.Platform/PropertyAccessors/<>c::<>9
	U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.TextAsset>
struct  AsyncOperationHandle_1_tD070A0F62515499D7FF4A4ED2147D5F151EA3BE7 
{
public:
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_t8CF7BC4E8FFBC8FE5E8645ECF477AC6131DA4D30 * ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;

public:
	inline static int32_t get_offset_of_m_InternalOp_0() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tD070A0F62515499D7FF4A4ED2147D5F151EA3BE7, ___m_InternalOp_0)); }
	inline AsyncOperationBase_1_t8CF7BC4E8FFBC8FE5E8645ECF477AC6131DA4D30 * get_m_InternalOp_0() const { return ___m_InternalOp_0; }
	inline AsyncOperationBase_1_t8CF7BC4E8FFBC8FE5E8645ECF477AC6131DA4D30 ** get_address_of_m_InternalOp_0() { return &___m_InternalOp_0; }
	inline void set_m_InternalOp_0(AsyncOperationBase_1_t8CF7BC4E8FFBC8FE5E8645ECF477AC6131DA4D30 * value)
	{
		___m_InternalOp_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalOp_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tD070A0F62515499D7FF4A4ED2147D5F151EA3BE7, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}

	inline static int32_t get_offset_of_m_LocationName_2() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tD070A0F62515499D7FF4A4ED2147D5F151EA3BE7, ___m_LocationName_2)); }
	inline String_t* get_m_LocationName_2() const { return ___m_LocationName_2; }
	inline String_t** get_address_of_m_LocationName_2() { return &___m_LocationName_2; }
	inline void set_m_LocationName_2(String_t* value)
	{
		___m_LocationName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocationName_2), (void*)value);
	}
};


// FMODUnity.Platform/PropertyAccessor`1<System.Collections.Generic.List`1<System.String>>
struct  PropertyAccessor_1_t15B7F2DF654FDDC891E7169F661426D3BAECEC83 
{
public:
	// System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<T>> FMODUnity.Platform/PropertyAccessor`1::Getter
	Func_2_t6CE4CF30CD70D39A2CB75A55B5B0E742D1C226F7 * ___Getter_0;
	// T FMODUnity.Platform/PropertyAccessor`1::DefaultValue
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___DefaultValue_1;

public:
	inline static int32_t get_offset_of_Getter_0() { return static_cast<int32_t>(offsetof(PropertyAccessor_1_t15B7F2DF654FDDC891E7169F661426D3BAECEC83, ___Getter_0)); }
	inline Func_2_t6CE4CF30CD70D39A2CB75A55B5B0E742D1C226F7 * get_Getter_0() const { return ___Getter_0; }
	inline Func_2_t6CE4CF30CD70D39A2CB75A55B5B0E742D1C226F7 ** get_address_of_Getter_0() { return &___Getter_0; }
	inline void set_Getter_0(Func_2_t6CE4CF30CD70D39A2CB75A55B5B0E742D1C226F7 * value)
	{
		___Getter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Getter_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValue_1() { return static_cast<int32_t>(offsetof(PropertyAccessor_1_t15B7F2DF654FDDC891E7169F661426D3BAECEC83, ___DefaultValue_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_DefaultValue_1() const { return ___DefaultValue_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_DefaultValue_1() { return &___DefaultValue_1; }
	inline void set_DefaultValue_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___DefaultValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValue_1), (void*)value);
	}
};


// FMODUnity.Platform/PropertyAccessor`1<System.Int32>
struct  PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5 
{
public:
	// System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<T>> FMODUnity.Platform/PropertyAccessor`1::Getter
	Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87 * ___Getter_0;
	// T FMODUnity.Platform/PropertyAccessor`1::DefaultValue
	int32_t ___DefaultValue_1;

public:
	inline static int32_t get_offset_of_Getter_0() { return static_cast<int32_t>(offsetof(PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5, ___Getter_0)); }
	inline Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87 * get_Getter_0() const { return ___Getter_0; }
	inline Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87 ** get_address_of_Getter_0() { return &___Getter_0; }
	inline void set_Getter_0(Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87 * value)
	{
		___Getter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Getter_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValue_1() { return static_cast<int32_t>(offsetof(PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5, ___DefaultValue_1)); }
	inline int32_t get_DefaultValue_1() const { return ___DefaultValue_1; }
	inline int32_t* get_address_of_DefaultValue_1() { return &___DefaultValue_1; }
	inline void set_DefaultValue_1(int32_t value)
	{
		___DefaultValue_1 = value;
	}
};


// FMODUnity.Platform/PropertyAccessor`1<System.Object>
struct  PropertyAccessor_1_tF61529BB5BCA5CE6A8A0C45D3438CC9665270433 
{
public:
	// System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<T>> FMODUnity.Platform/PropertyAccessor`1::Getter
	Func_2_tDE08512362C8A67B45374C3DD3AC327519BD484A * ___Getter_0;
	// T FMODUnity.Platform/PropertyAccessor`1::DefaultValue
	RuntimeObject * ___DefaultValue_1;

public:
	inline static int32_t get_offset_of_Getter_0() { return static_cast<int32_t>(offsetof(PropertyAccessor_1_tF61529BB5BCA5CE6A8A0C45D3438CC9665270433, ___Getter_0)); }
	inline Func_2_tDE08512362C8A67B45374C3DD3AC327519BD484A * get_Getter_0() const { return ___Getter_0; }
	inline Func_2_tDE08512362C8A67B45374C3DD3AC327519BD484A ** get_address_of_Getter_0() { return &___Getter_0; }
	inline void set_Getter_0(Func_2_tDE08512362C8A67B45374C3DD3AC327519BD484A * value)
	{
		___Getter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Getter_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValue_1() { return static_cast<int32_t>(offsetof(PropertyAccessor_1_tF61529BB5BCA5CE6A8A0C45D3438CC9665270433, ___DefaultValue_1)); }
	inline RuntimeObject * get_DefaultValue_1() const { return ___DefaultValue_1; }
	inline RuntimeObject ** get_address_of_DefaultValue_1() { return &___DefaultValue_1; }
	inline void set_DefaultValue_1(RuntimeObject * value)
	{
		___DefaultValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValue_1), (void*)value);
	}
};


// FMODUnity.Platform/PropertyAccessor`1<FMODUnity.PlatformCallbackHandler>
struct  PropertyAccessor_1_t3C8A958245F3CC9B3C19B07ACE22016929868EB0 
{
public:
	// System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<T>> FMODUnity.Platform/PropertyAccessor`1::Getter
	Func_2_t90D3EC3607DEE77133AB325243D70D3BF30481BE * ___Getter_0;
	// T FMODUnity.Platform/PropertyAccessor`1::DefaultValue
	PlatformCallbackHandler_tC97A12E9191ED7EE208965B8DF447CA520F3EE51 * ___DefaultValue_1;

public:
	inline static int32_t get_offset_of_Getter_0() { return static_cast<int32_t>(offsetof(PropertyAccessor_1_t3C8A958245F3CC9B3C19B07ACE22016929868EB0, ___Getter_0)); }
	inline Func_2_t90D3EC3607DEE77133AB325243D70D3BF30481BE * get_Getter_0() const { return ___Getter_0; }
	inline Func_2_t90D3EC3607DEE77133AB325243D70D3BF30481BE ** get_address_of_Getter_0() { return &___Getter_0; }
	inline void set_Getter_0(Func_2_t90D3EC3607DEE77133AB325243D70D3BF30481BE * value)
	{
		___Getter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Getter_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValue_1() { return static_cast<int32_t>(offsetof(PropertyAccessor_1_t3C8A958245F3CC9B3C19B07ACE22016929868EB0, ___DefaultValue_1)); }
	inline PlatformCallbackHandler_tC97A12E9191ED7EE208965B8DF447CA520F3EE51 * get_DefaultValue_1() const { return ___DefaultValue_1; }
	inline PlatformCallbackHandler_tC97A12E9191ED7EE208965B8DF447CA520F3EE51 ** get_address_of_DefaultValue_1() { return &___DefaultValue_1; }
	inline void set_DefaultValue_1(PlatformCallbackHandler_tC97A12E9191ED7EE208965B8DF447CA520F3EE51 * value)
	{
		___DefaultValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValue_1), (void*)value);
	}
};


// FMODUnity.Platform/PropertyAccessor`1<System.String>
struct  PropertyAccessor_1_t1968EAF8A354C79829234FCD558C156A8B4280C7 
{
public:
	// System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<T>> FMODUnity.Platform/PropertyAccessor`1::Getter
	Func_2_t45BDF03ABB29FE835EF6F6CA3ABD009BAB9995AF * ___Getter_0;
	// T FMODUnity.Platform/PropertyAccessor`1::DefaultValue
	String_t* ___DefaultValue_1;

public:
	inline static int32_t get_offset_of_Getter_0() { return static_cast<int32_t>(offsetof(PropertyAccessor_1_t1968EAF8A354C79829234FCD558C156A8B4280C7, ___Getter_0)); }
	inline Func_2_t45BDF03ABB29FE835EF6F6CA3ABD009BAB9995AF * get_Getter_0() const { return ___Getter_0; }
	inline Func_2_t45BDF03ABB29FE835EF6F6CA3ABD009BAB9995AF ** get_address_of_Getter_0() { return &___Getter_0; }
	inline void set_Getter_0(Func_2_t45BDF03ABB29FE835EF6F6CA3ABD009BAB9995AF * value)
	{
		___Getter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Getter_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValue_1() { return static_cast<int32_t>(offsetof(PropertyAccessor_1_t1968EAF8A354C79829234FCD558C156A8B4280C7, ___DefaultValue_1)); }
	inline String_t* get_DefaultValue_1() const { return ___DefaultValue_1; }
	inline String_t** get_address_of_DefaultValue_1() { return &___DefaultValue_1; }
	inline void set_DefaultValue_1(String_t* value)
	{
		___DefaultValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValue_1), (void*)value);
	}
};


// FMOD.Studio.BUFFER_INFO
struct  BUFFER_INFO_tE9C3C25E19BE92F87F55B3B48153D347A21A103E 
{
public:
	// System.Int32 FMOD.Studio.BUFFER_INFO::currentusage
	int32_t ___currentusage_0;
	// System.Int32 FMOD.Studio.BUFFER_INFO::peakusage
	int32_t ___peakusage_1;
	// System.Int32 FMOD.Studio.BUFFER_INFO::capacity
	int32_t ___capacity_2;
	// System.Int32 FMOD.Studio.BUFFER_INFO::stallcount
	int32_t ___stallcount_3;
	// System.Single FMOD.Studio.BUFFER_INFO::stalltime
	float ___stalltime_4;

public:
	inline static int32_t get_offset_of_currentusage_0() { return static_cast<int32_t>(offsetof(BUFFER_INFO_tE9C3C25E19BE92F87F55B3B48153D347A21A103E, ___currentusage_0)); }
	inline int32_t get_currentusage_0() const { return ___currentusage_0; }
	inline int32_t* get_address_of_currentusage_0() { return &___currentusage_0; }
	inline void set_currentusage_0(int32_t value)
	{
		___currentusage_0 = value;
	}

	inline static int32_t get_offset_of_peakusage_1() { return static_cast<int32_t>(offsetof(BUFFER_INFO_tE9C3C25E19BE92F87F55B3B48153D347A21A103E, ___peakusage_1)); }
	inline int32_t get_peakusage_1() const { return ___peakusage_1; }
	inline int32_t* get_address_of_peakusage_1() { return &___peakusage_1; }
	inline void set_peakusage_1(int32_t value)
	{
		___peakusage_1 = value;
	}

	inline static int32_t get_offset_of_capacity_2() { return static_cast<int32_t>(offsetof(BUFFER_INFO_tE9C3C25E19BE92F87F55B3B48153D347A21A103E, ___capacity_2)); }
	inline int32_t get_capacity_2() const { return ___capacity_2; }
	inline int32_t* get_address_of_capacity_2() { return &___capacity_2; }
	inline void set_capacity_2(int32_t value)
	{
		___capacity_2 = value;
	}

	inline static int32_t get_offset_of_stallcount_3() { return static_cast<int32_t>(offsetof(BUFFER_INFO_tE9C3C25E19BE92F87F55B3B48153D347A21A103E, ___stallcount_3)); }
	inline int32_t get_stallcount_3() const { return ___stallcount_3; }
	inline int32_t* get_address_of_stallcount_3() { return &___stallcount_3; }
	inline void set_stallcount_3(int32_t value)
	{
		___stallcount_3 = value;
	}

	inline static int32_t get_offset_of_stalltime_4() { return static_cast<int32_t>(offsetof(BUFFER_INFO_tE9C3C25E19BE92F87F55B3B48153D347A21A103E, ___stalltime_4)); }
	inline float get_stalltime_4() const { return ___stalltime_4; }
	inline float* get_address_of_stalltime_4() { return &___stalltime_4; }
	inline void set_stalltime_4(float value)
	{
		___stalltime_4 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// FMOD.Studio.CPU_USAGE
struct  CPU_USAGE_tD3620A435EE6B2144E94AEC150EABD63ABAB0332 
{
public:
	// System.Single FMOD.Studio.CPU_USAGE::dspusage
	float ___dspusage_0;
	// System.Single FMOD.Studio.CPU_USAGE::streamusage
	float ___streamusage_1;
	// System.Single FMOD.Studio.CPU_USAGE::geometryusage
	float ___geometryusage_2;
	// System.Single FMOD.Studio.CPU_USAGE::updateusage
	float ___updateusage_3;
	// System.Single FMOD.Studio.CPU_USAGE::studiousage
	float ___studiousage_4;

public:
	inline static int32_t get_offset_of_dspusage_0() { return static_cast<int32_t>(offsetof(CPU_USAGE_tD3620A435EE6B2144E94AEC150EABD63ABAB0332, ___dspusage_0)); }
	inline float get_dspusage_0() const { return ___dspusage_0; }
	inline float* get_address_of_dspusage_0() { return &___dspusage_0; }
	inline void set_dspusage_0(float value)
	{
		___dspusage_0 = value;
	}

	inline static int32_t get_offset_of_streamusage_1() { return static_cast<int32_t>(offsetof(CPU_USAGE_tD3620A435EE6B2144E94AEC150EABD63ABAB0332, ___streamusage_1)); }
	inline float get_streamusage_1() const { return ___streamusage_1; }
	inline float* get_address_of_streamusage_1() { return &___streamusage_1; }
	inline void set_streamusage_1(float value)
	{
		___streamusage_1 = value;
	}

	inline static int32_t get_offset_of_geometryusage_2() { return static_cast<int32_t>(offsetof(CPU_USAGE_tD3620A435EE6B2144E94AEC150EABD63ABAB0332, ___geometryusage_2)); }
	inline float get_geometryusage_2() const { return ___geometryusage_2; }
	inline float* get_address_of_geometryusage_2() { return &___geometryusage_2; }
	inline void set_geometryusage_2(float value)
	{
		___geometryusage_2 = value;
	}

	inline static int32_t get_offset_of_updateusage_3() { return static_cast<int32_t>(offsetof(CPU_USAGE_tD3620A435EE6B2144E94AEC150EABD63ABAB0332, ___updateusage_3)); }
	inline float get_updateusage_3() const { return ___updateusage_3; }
	inline float* get_address_of_updateusage_3() { return &___updateusage_3; }
	inline void set_updateusage_3(float value)
	{
		___updateusage_3 = value;
	}

	inline static int32_t get_offset_of_studiousage_4() { return static_cast<int32_t>(offsetof(CPU_USAGE_tD3620A435EE6B2144E94AEC150EABD63ABAB0332, ___studiousage_4)); }
	inline float get_studiousage_4() const { return ___studiousage_4; }
	inline float* get_address_of_studiousage_4() { return &___studiousage_4; }
	inline void set_studiousage_4(float value)
	{
		___studiousage_4 = value;
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// FMOD.Studio.MEMORY_USAGE
struct  MEMORY_USAGE_tE2E03D2DB8C162FC199C1EBBD91C1BC08B605647 
{
public:
	// System.Int32 FMOD.Studio.MEMORY_USAGE::exclusive
	int32_t ___exclusive_0;
	// System.Int32 FMOD.Studio.MEMORY_USAGE::inclusive
	int32_t ___inclusive_1;
	// System.Int32 FMOD.Studio.MEMORY_USAGE::sampledata
	int32_t ___sampledata_2;

public:
	inline static int32_t get_offset_of_exclusive_0() { return static_cast<int32_t>(offsetof(MEMORY_USAGE_tE2E03D2DB8C162FC199C1EBBD91C1BC08B605647, ___exclusive_0)); }
	inline int32_t get_exclusive_0() const { return ___exclusive_0; }
	inline int32_t* get_address_of_exclusive_0() { return &___exclusive_0; }
	inline void set_exclusive_0(int32_t value)
	{
		___exclusive_0 = value;
	}

	inline static int32_t get_offset_of_inclusive_1() { return static_cast<int32_t>(offsetof(MEMORY_USAGE_tE2E03D2DB8C162FC199C1EBBD91C1BC08B605647, ___inclusive_1)); }
	inline int32_t get_inclusive_1() const { return ___inclusive_1; }
	inline int32_t* get_address_of_inclusive_1() { return &___inclusive_1; }
	inline void set_inclusive_1(int32_t value)
	{
		___inclusive_1 = value;
	}

	inline static int32_t get_offset_of_sampledata_2() { return static_cast<int32_t>(offsetof(MEMORY_USAGE_tE2E03D2DB8C162FC199C1EBBD91C1BC08B605647, ___sampledata_2)); }
	inline int32_t get_sampledata_2() const { return ___sampledata_2; }
	inline int32_t* get_address_of_sampledata_2() { return &___sampledata_2; }
	inline void set_sampledata_2(int32_t value)
	{
		___sampledata_2 = value;
	}
};


// FMOD.Studio.PARAMETER_ID
struct  PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE 
{
public:
	// System.UInt32 FMOD.Studio.PARAMETER_ID::data1
	uint32_t ___data1_0;
	// System.UInt32 FMOD.Studio.PARAMETER_ID::data2
	uint32_t ___data2_1;

public:
	inline static int32_t get_offset_of_data1_0() { return static_cast<int32_t>(offsetof(PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE, ___data1_0)); }
	inline uint32_t get_data1_0() const { return ___data1_0; }
	inline uint32_t* get_address_of_data1_0() { return &___data1_0; }
	inline void set_data1_0(uint32_t value)
	{
		___data1_0 = value;
	}

	inline static int32_t get_offset_of_data2_1() { return static_cast<int32_t>(offsetof(PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE, ___data2_1)); }
	inline uint32_t get_data2_1() const { return ___data2_1; }
	inline uint32_t* get_address_of_data2_1() { return &___data2_1; }
	inline void set_data2_1(uint32_t value)
	{
		___data2_1 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// FMOD.Studio.TIMELINE_BEAT_PROPERTIES
struct  TIMELINE_BEAT_PROPERTIES_tEAFA4A421FAA5B82EC924AC8F5845D1239C8A27A 
{
public:
	// System.Int32 FMOD.Studio.TIMELINE_BEAT_PROPERTIES::bar
	int32_t ___bar_0;
	// System.Int32 FMOD.Studio.TIMELINE_BEAT_PROPERTIES::beat
	int32_t ___beat_1;
	// System.Int32 FMOD.Studio.TIMELINE_BEAT_PROPERTIES::position
	int32_t ___position_2;
	// System.Single FMOD.Studio.TIMELINE_BEAT_PROPERTIES::tempo
	float ___tempo_3;
	// System.Int32 FMOD.Studio.TIMELINE_BEAT_PROPERTIES::timesignatureupper
	int32_t ___timesignatureupper_4;
	// System.Int32 FMOD.Studio.TIMELINE_BEAT_PROPERTIES::timesignaturelower
	int32_t ___timesignaturelower_5;

public:
	inline static int32_t get_offset_of_bar_0() { return static_cast<int32_t>(offsetof(TIMELINE_BEAT_PROPERTIES_tEAFA4A421FAA5B82EC924AC8F5845D1239C8A27A, ___bar_0)); }
	inline int32_t get_bar_0() const { return ___bar_0; }
	inline int32_t* get_address_of_bar_0() { return &___bar_0; }
	inline void set_bar_0(int32_t value)
	{
		___bar_0 = value;
	}

	inline static int32_t get_offset_of_beat_1() { return static_cast<int32_t>(offsetof(TIMELINE_BEAT_PROPERTIES_tEAFA4A421FAA5B82EC924AC8F5845D1239C8A27A, ___beat_1)); }
	inline int32_t get_beat_1() const { return ___beat_1; }
	inline int32_t* get_address_of_beat_1() { return &___beat_1; }
	inline void set_beat_1(int32_t value)
	{
		___beat_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(TIMELINE_BEAT_PROPERTIES_tEAFA4A421FAA5B82EC924AC8F5845D1239C8A27A, ___position_2)); }
	inline int32_t get_position_2() const { return ___position_2; }
	inline int32_t* get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(int32_t value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_tempo_3() { return static_cast<int32_t>(offsetof(TIMELINE_BEAT_PROPERTIES_tEAFA4A421FAA5B82EC924AC8F5845D1239C8A27A, ___tempo_3)); }
	inline float get_tempo_3() const { return ___tempo_3; }
	inline float* get_address_of_tempo_3() { return &___tempo_3; }
	inline void set_tempo_3(float value)
	{
		___tempo_3 = value;
	}

	inline static int32_t get_offset_of_timesignatureupper_4() { return static_cast<int32_t>(offsetof(TIMELINE_BEAT_PROPERTIES_tEAFA4A421FAA5B82EC924AC8F5845D1239C8A27A, ___timesignatureupper_4)); }
	inline int32_t get_timesignatureupper_4() const { return ___timesignatureupper_4; }
	inline int32_t* get_address_of_timesignatureupper_4() { return &___timesignatureupper_4; }
	inline void set_timesignatureupper_4(int32_t value)
	{
		___timesignatureupper_4 = value;
	}

	inline static int32_t get_offset_of_timesignaturelower_5() { return static_cast<int32_t>(offsetof(TIMELINE_BEAT_PROPERTIES_tEAFA4A421FAA5B82EC924AC8F5845D1239C8A27A, ___timesignaturelower_5)); }
	inline int32_t get_timesignaturelower_5() const { return ___timesignaturelower_5; }
	inline int32_t* get_address_of_timesignaturelower_5() { return &___timesignaturelower_5; }
	inline void set_timesignaturelower_5(int32_t value)
	{
		___timesignaturelower_5 = value;
	}
};


// FMOD.Thread
struct  Thread_t9416CAF7B40E624E2C5938CEA193BD809C71E731 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Thread_t9416CAF7B40E624E2C5938CEA193BD809C71E731__padding[1];
	};

public:
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Text.UTF8Encoding
struct  UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitUTF8Identifier
	bool ___emitUTF8Identifier_16;
	// System.Boolean System.Text.UTF8Encoding::isThrowException
	bool ___isThrowException_17;

public:
	inline static int32_t get_offset_of_emitUTF8Identifier_16() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___emitUTF8Identifier_16)); }
	inline bool get_emitUTF8Identifier_16() const { return ___emitUTF8Identifier_16; }
	inline bool* get_address_of_emitUTF8Identifier_16() { return &___emitUTF8Identifier_16; }
	inline void set_emitUTF8Identifier_16(bool value)
	{
		___emitUTF8Identifier_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
	}
};


// FMOD.Studio.Util
struct  Util_t40BF0D61A3FD1E1012E4DFBA7494EF4A2B8C50F2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Util_t40BF0D61A3FD1E1012E4DFBA7494EF4A2B8C50F2__padding[1];
	};

public:
};


// FMOD.VECTOR
struct  VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B 
{
public:
	// System.Single FMOD.VECTOR::x
	float ___x_0;
	// System.Single FMOD.VECTOR::y
	float ___y_1;
	// System.Single FMOD.VECTOR::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// FMODUnity.Platform/PropertyCallbackHandler
struct  PropertyCallbackHandler_t82B0903BB420520717D537266810EE85744AC4BA  : public Property_1_t6770127C86A531D398D7204DB7CC4E497F04FEDE
{
public:

public:
};


// FMODUnity.Platform/PropertyInt
struct  PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D  : public Property_1_tB69257AE89C1BAE96A39B56ECAA943FF1F44411F
{
public:

public:
};


// FMODUnity.Platform/PropertyString
struct  PropertyString_tD68EEE1C2850E21FA13D8B6EE52BD852444904C5  : public Property_1_t4FFACE60733293ECEBB1863470178A4D5DA5EFD9
{
public:

public:
};


// FMODUnity.Platform/PropertyStringList
struct  PropertyStringList_t88EB50D87DA26E8B975BEA698EF4A67DBE1830BC  : public Property_1_tFF04740DA05A1C6E8363931B19AEED7384C75CEE
{
public:

public:
};


// FMODUnity.Platform/PropertyThreadAffinityList
struct  PropertyThreadAffinityList_tE480BD2634070CFF10C439920F759371BDEA1AD2  : public Property_1_tC12A06AB020E1B55C7B086819F2BB13DCD9D6098
{
public:

public:
};


// FMODUnity.Settings/PlatformTemplate
struct  PlatformTemplate_t915029C76629EF71EE33DA24FF80AC465B2067ED 
{
public:
	// System.String FMODUnity.Settings/PlatformTemplate::Identifier
	String_t* ___Identifier_0;
	// System.Func`1<FMODUnity.Platform> FMODUnity.Settings/PlatformTemplate::CreateInstance
	Func_1_tD8217A517B81548153B648DD9D5285A3A78807D4 * ___CreateInstance_1;

public:
	inline static int32_t get_offset_of_Identifier_0() { return static_cast<int32_t>(offsetof(PlatformTemplate_t915029C76629EF71EE33DA24FF80AC465B2067ED, ___Identifier_0)); }
	inline String_t* get_Identifier_0() const { return ___Identifier_0; }
	inline String_t** get_address_of_Identifier_0() { return &___Identifier_0; }
	inline void set_Identifier_0(String_t* value)
	{
		___Identifier_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Identifier_0), (void*)value);
	}

	inline static int32_t get_offset_of_CreateInstance_1() { return static_cast<int32_t>(offsetof(PlatformTemplate_t915029C76629EF71EE33DA24FF80AC465B2067ED, ___CreateInstance_1)); }
	inline Func_1_tD8217A517B81548153B648DD9D5285A3A78807D4 * get_CreateInstance_1() const { return ___CreateInstance_1; }
	inline Func_1_tD8217A517B81548153B648DD9D5285A3A78807D4 ** get_address_of_CreateInstance_1() { return &___CreateInstance_1; }
	inline void set_CreateInstance_1(Func_1_tD8217A517B81548153B648DD9D5285A3A78807D4 * value)
	{
		___CreateInstance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CreateInstance_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of FMODUnity.Settings/PlatformTemplate
struct PlatformTemplate_t915029C76629EF71EE33DA24FF80AC465B2067ED_marshaled_pinvoke
{
	char* ___Identifier_0;
	Il2CppMethodPointer ___CreateInstance_1;
};
// Native definition for COM marshalling of FMODUnity.Settings/PlatformTemplate
struct PlatformTemplate_t915029C76629EF71EE33DA24FF80AC465B2067ED_marshaled_com
{
	Il2CppChar* ___Identifier_0;
	Il2CppMethodPointer ___CreateInstance_1;
};

// FMOD.Studio.ADVANCEDSETTINGS
struct  ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166 
{
public:
	// System.Int32 FMOD.Studio.ADVANCEDSETTINGS::cbsize
	int32_t ___cbsize_0;
	// System.Int32 FMOD.Studio.ADVANCEDSETTINGS::commandqueuesize
	int32_t ___commandqueuesize_1;
	// System.Int32 FMOD.Studio.ADVANCEDSETTINGS::handleinitialsize
	int32_t ___handleinitialsize_2;
	// System.Int32 FMOD.Studio.ADVANCEDSETTINGS::studioupdateperiod
	int32_t ___studioupdateperiod_3;
	// System.Int32 FMOD.Studio.ADVANCEDSETTINGS::idlesampledatapoolsize
	int32_t ___idlesampledatapoolsize_4;
	// System.Int32 FMOD.Studio.ADVANCEDSETTINGS::streamingscheduledelay
	int32_t ___streamingscheduledelay_5;
	// System.IntPtr FMOD.Studio.ADVANCEDSETTINGS::encryptionkey
	intptr_t ___encryptionkey_6;

public:
	inline static int32_t get_offset_of_cbsize_0() { return static_cast<int32_t>(offsetof(ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166, ___cbsize_0)); }
	inline int32_t get_cbsize_0() const { return ___cbsize_0; }
	inline int32_t* get_address_of_cbsize_0() { return &___cbsize_0; }
	inline void set_cbsize_0(int32_t value)
	{
		___cbsize_0 = value;
	}

	inline static int32_t get_offset_of_commandqueuesize_1() { return static_cast<int32_t>(offsetof(ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166, ___commandqueuesize_1)); }
	inline int32_t get_commandqueuesize_1() const { return ___commandqueuesize_1; }
	inline int32_t* get_address_of_commandqueuesize_1() { return &___commandqueuesize_1; }
	inline void set_commandqueuesize_1(int32_t value)
	{
		___commandqueuesize_1 = value;
	}

	inline static int32_t get_offset_of_handleinitialsize_2() { return static_cast<int32_t>(offsetof(ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166, ___handleinitialsize_2)); }
	inline int32_t get_handleinitialsize_2() const { return ___handleinitialsize_2; }
	inline int32_t* get_address_of_handleinitialsize_2() { return &___handleinitialsize_2; }
	inline void set_handleinitialsize_2(int32_t value)
	{
		___handleinitialsize_2 = value;
	}

	inline static int32_t get_offset_of_studioupdateperiod_3() { return static_cast<int32_t>(offsetof(ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166, ___studioupdateperiod_3)); }
	inline int32_t get_studioupdateperiod_3() const { return ___studioupdateperiod_3; }
	inline int32_t* get_address_of_studioupdateperiod_3() { return &___studioupdateperiod_3; }
	inline void set_studioupdateperiod_3(int32_t value)
	{
		___studioupdateperiod_3 = value;
	}

	inline static int32_t get_offset_of_idlesampledatapoolsize_4() { return static_cast<int32_t>(offsetof(ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166, ___idlesampledatapoolsize_4)); }
	inline int32_t get_idlesampledatapoolsize_4() const { return ___idlesampledatapoolsize_4; }
	inline int32_t* get_address_of_idlesampledatapoolsize_4() { return &___idlesampledatapoolsize_4; }
	inline void set_idlesampledatapoolsize_4(int32_t value)
	{
		___idlesampledatapoolsize_4 = value;
	}

	inline static int32_t get_offset_of_streamingscheduledelay_5() { return static_cast<int32_t>(offsetof(ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166, ___streamingscheduledelay_5)); }
	inline int32_t get_streamingscheduledelay_5() const { return ___streamingscheduledelay_5; }
	inline int32_t* get_address_of_streamingscheduledelay_5() { return &___streamingscheduledelay_5; }
	inline void set_streamingscheduledelay_5(int32_t value)
	{
		___streamingscheduledelay_5 = value;
	}

	inline static int32_t get_offset_of_encryptionkey_6() { return static_cast<int32_t>(offsetof(ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166, ___encryptionkey_6)); }
	inline intptr_t get_encryptionkey_6() const { return ___encryptionkey_6; }
	inline intptr_t* get_address_of_encryptionkey_6() { return &___encryptionkey_6; }
	inline void set_encryptionkey_6(intptr_t value)
	{
		___encryptionkey_6 = value;
	}
};


// FMOD.ATTRIBUTES_3D
struct  ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 
{
public:
	// FMOD.VECTOR FMOD.ATTRIBUTES_3D::position
	VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B  ___position_0;
	// FMOD.VECTOR FMOD.ATTRIBUTES_3D::velocity
	VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B  ___velocity_1;
	// FMOD.VECTOR FMOD.ATTRIBUTES_3D::forward
	VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B  ___forward_2;
	// FMOD.VECTOR FMOD.ATTRIBUTES_3D::up
	VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B  ___up_3;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734, ___position_0)); }
	inline VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B  get_position_0() const { return ___position_0; }
	inline VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_velocity_1() { return static_cast<int32_t>(offsetof(ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734, ___velocity_1)); }
	inline VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B  get_velocity_1() const { return ___velocity_1; }
	inline VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B * get_address_of_velocity_1() { return &___velocity_1; }
	inline void set_velocity_1(VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B  value)
	{
		___velocity_1 = value;
	}

	inline static int32_t get_offset_of_forward_2() { return static_cast<int32_t>(offsetof(ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734, ___forward_2)); }
	inline VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B  get_forward_2() const { return ___forward_2; }
	inline VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B * get_address_of_forward_2() { return &___forward_2; }
	inline void set_forward_2(VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B  value)
	{
		___forward_2 = value;
	}

	inline static int32_t get_offset_of_up_3() { return static_cast<int32_t>(offsetof(ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734, ___up_3)); }
	inline VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B  get_up_3() const { return ___up_3; }
	inline VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B * get_address_of_up_3() { return &___up_3; }
	inline void set_up_3(VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B  value)
	{
		___up_3 = value;
	}
};


// FMOD.Studio.BANK_INFO
struct  BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A 
{
public:
	// System.Int32 FMOD.Studio.BANK_INFO::size
	int32_t ___size_0;
	// System.IntPtr FMOD.Studio.BANK_INFO::userdata
	intptr_t ___userdata_1;
	// System.Int32 FMOD.Studio.BANK_INFO::userdatalength
	int32_t ___userdatalength_2;
	// FMOD.FILE_OPEN_CALLBACK FMOD.Studio.BANK_INFO::opencallback
	FILE_OPEN_CALLBACK_tA13B923FE5970CFC0B305A287DEEFE71D1C77694 * ___opencallback_3;
	// FMOD.FILE_CLOSE_CALLBACK FMOD.Studio.BANK_INFO::closecallback
	FILE_CLOSE_CALLBACK_t9405C9698E17716FC0E2B95CB3D7331DFB6E80EA * ___closecallback_4;
	// FMOD.FILE_READ_CALLBACK FMOD.Studio.BANK_INFO::readcallback
	FILE_READ_CALLBACK_tF4B8F36AB9729B31440DB6204D0E32AACD42937A * ___readcallback_5;
	// FMOD.FILE_SEEK_CALLBACK FMOD.Studio.BANK_INFO::seekcallback
	FILE_SEEK_CALLBACK_t9494A7DB9F5B0DF84468422A4F14842218347C49 * ___seekcallback_6;

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A, ___size_0)); }
	inline int32_t get_size_0() const { return ___size_0; }
	inline int32_t* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(int32_t value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_userdata_1() { return static_cast<int32_t>(offsetof(BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A, ___userdata_1)); }
	inline intptr_t get_userdata_1() const { return ___userdata_1; }
	inline intptr_t* get_address_of_userdata_1() { return &___userdata_1; }
	inline void set_userdata_1(intptr_t value)
	{
		___userdata_1 = value;
	}

	inline static int32_t get_offset_of_userdatalength_2() { return static_cast<int32_t>(offsetof(BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A, ___userdatalength_2)); }
	inline int32_t get_userdatalength_2() const { return ___userdatalength_2; }
	inline int32_t* get_address_of_userdatalength_2() { return &___userdatalength_2; }
	inline void set_userdatalength_2(int32_t value)
	{
		___userdatalength_2 = value;
	}

	inline static int32_t get_offset_of_opencallback_3() { return static_cast<int32_t>(offsetof(BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A, ___opencallback_3)); }
	inline FILE_OPEN_CALLBACK_tA13B923FE5970CFC0B305A287DEEFE71D1C77694 * get_opencallback_3() const { return ___opencallback_3; }
	inline FILE_OPEN_CALLBACK_tA13B923FE5970CFC0B305A287DEEFE71D1C77694 ** get_address_of_opencallback_3() { return &___opencallback_3; }
	inline void set_opencallback_3(FILE_OPEN_CALLBACK_tA13B923FE5970CFC0B305A287DEEFE71D1C77694 * value)
	{
		___opencallback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___opencallback_3), (void*)value);
	}

	inline static int32_t get_offset_of_closecallback_4() { return static_cast<int32_t>(offsetof(BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A, ___closecallback_4)); }
	inline FILE_CLOSE_CALLBACK_t9405C9698E17716FC0E2B95CB3D7331DFB6E80EA * get_closecallback_4() const { return ___closecallback_4; }
	inline FILE_CLOSE_CALLBACK_t9405C9698E17716FC0E2B95CB3D7331DFB6E80EA ** get_address_of_closecallback_4() { return &___closecallback_4; }
	inline void set_closecallback_4(FILE_CLOSE_CALLBACK_t9405C9698E17716FC0E2B95CB3D7331DFB6E80EA * value)
	{
		___closecallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___closecallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_readcallback_5() { return static_cast<int32_t>(offsetof(BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A, ___readcallback_5)); }
	inline FILE_READ_CALLBACK_tF4B8F36AB9729B31440DB6204D0E32AACD42937A * get_readcallback_5() const { return ___readcallback_5; }
	inline FILE_READ_CALLBACK_tF4B8F36AB9729B31440DB6204D0E32AACD42937A ** get_address_of_readcallback_5() { return &___readcallback_5; }
	inline void set_readcallback_5(FILE_READ_CALLBACK_tF4B8F36AB9729B31440DB6204D0E32AACD42937A * value)
	{
		___readcallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readcallback_5), (void*)value);
	}

	inline static int32_t get_offset_of_seekcallback_6() { return static_cast<int32_t>(offsetof(BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A, ___seekcallback_6)); }
	inline FILE_SEEK_CALLBACK_t9494A7DB9F5B0DF84468422A4F14842218347C49 * get_seekcallback_6() const { return ___seekcallback_6; }
	inline FILE_SEEK_CALLBACK_t9494A7DB9F5B0DF84468422A4F14842218347C49 ** get_address_of_seekcallback_6() { return &___seekcallback_6; }
	inline void set_seekcallback_6(FILE_SEEK_CALLBACK_t9494A7DB9F5B0DF84468422A4F14842218347C49 * value)
	{
		___seekcallback_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seekcallback_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of FMOD.Studio.BANK_INFO
struct BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_marshaled_pinvoke
{
	int32_t ___size_0;
	intptr_t ___userdata_1;
	int32_t ___userdatalength_2;
	Il2CppMethodPointer ___opencallback_3;
	Il2CppMethodPointer ___closecallback_4;
	Il2CppMethodPointer ___readcallback_5;
	Il2CppMethodPointer ___seekcallback_6;
};
// Native definition for COM marshalling of FMOD.Studio.BANK_INFO
struct BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_marshaled_com
{
	int32_t ___size_0;
	intptr_t ___userdata_1;
	int32_t ___userdatalength_2;
	Il2CppMethodPointer ___opencallback_3;
	Il2CppMethodPointer ___closecallback_4;
	Il2CppMethodPointer ___readcallback_5;
	Il2CppMethodPointer ___seekcallback_6;
};

// FMOD.Studio.BUFFER_USAGE
struct  BUFFER_USAGE_tC3F4FFD3963B6AD7416C4BF66BD3CC40F6DCD4A3 
{
public:
	// FMOD.Studio.BUFFER_INFO FMOD.Studio.BUFFER_USAGE::studiocommandqueue
	BUFFER_INFO_tE9C3C25E19BE92F87F55B3B48153D347A21A103E  ___studiocommandqueue_0;
	// FMOD.Studio.BUFFER_INFO FMOD.Studio.BUFFER_USAGE::studiohandle
	BUFFER_INFO_tE9C3C25E19BE92F87F55B3B48153D347A21A103E  ___studiohandle_1;

public:
	inline static int32_t get_offset_of_studiocommandqueue_0() { return static_cast<int32_t>(offsetof(BUFFER_USAGE_tC3F4FFD3963B6AD7416C4BF66BD3CC40F6DCD4A3, ___studiocommandqueue_0)); }
	inline BUFFER_INFO_tE9C3C25E19BE92F87F55B3B48153D347A21A103E  get_studiocommandqueue_0() const { return ___studiocommandqueue_0; }
	inline BUFFER_INFO_tE9C3C25E19BE92F87F55B3B48153D347A21A103E * get_address_of_studiocommandqueue_0() { return &___studiocommandqueue_0; }
	inline void set_studiocommandqueue_0(BUFFER_INFO_tE9C3C25E19BE92F87F55B3B48153D347A21A103E  value)
	{
		___studiocommandqueue_0 = value;
	}

	inline static int32_t get_offset_of_studiohandle_1() { return static_cast<int32_t>(offsetof(BUFFER_USAGE_tC3F4FFD3963B6AD7416C4BF66BD3CC40F6DCD4A3, ___studiohandle_1)); }
	inline BUFFER_INFO_tE9C3C25E19BE92F87F55B3B48153D347A21A103E  get_studiohandle_1() const { return ___studiohandle_1; }
	inline BUFFER_INFO_tE9C3C25E19BE92F87F55B3B48153D347A21A103E * get_address_of_studiohandle_1() { return &___studiohandle_1; }
	inline void set_studiohandle_1(BUFFER_INFO_tE9C3C25E19BE92F87F55B3B48153D347A21A103E  value)
	{
		___studiohandle_1 = value;
	}
};


// FMOD.Studio.Bank
struct  Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 
{
public:
	// System.IntPtr FMOD.Studio.Bank::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.Studio.Bus
struct  Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520 
{
public:
	// System.IntPtr FMOD.Studio.Bus::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// FMOD.CHANNELORDER
struct  CHANNELORDER_t7B4CE9DF2033F60B1ED82F79A68B6DC30406F7D4 
{
public:
	// System.Int32 FMOD.CHANNELORDER::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CHANNELORDER_t7B4CE9DF2033F60B1ED82F79A68B6DC30406F7D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.Studio.COMMANDCAPTURE_FLAGS
struct  COMMANDCAPTURE_FLAGS_t099D908E81DBE387B7FD88BD3FD511973EB8850B 
{
public:
	// System.UInt32 FMOD.Studio.COMMANDCAPTURE_FLAGS::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(COMMANDCAPTURE_FLAGS_t099D908E81DBE387B7FD88BD3FD511973EB8850B, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.Studio.COMMANDREPLAY_FLAGS
struct  COMMANDREPLAY_FLAGS_tB1E53848A17F33B024CB1DBEB2F8B4763EB57DF7 
{
public:
	// System.UInt32 FMOD.Studio.COMMANDREPLAY_FLAGS::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(COMMANDREPLAY_FLAGS_tB1E53848A17F33B024CB1DBEB2F8B4763EB57DF7, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.Studio.CommandReplay
struct  CommandReplay_t85683E6488FF9B2D01CECCC7C87ABD8FCBC49FD0 
{
public:
	// System.IntPtr FMOD.Studio.CommandReplay::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(CommandReplay_t85683E6488FF9B2D01CECCC7C87ABD8FCBC49FD0, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// FMOD.Studio.EventDescription
struct  EventDescription_tA7B5CD79AFB0B96E61BEB585B591EACF17319F5D 
{
public:
	// System.IntPtr FMOD.Studio.EventDescription::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(EventDescription_tA7B5CD79AFB0B96E61BEB585B591EACF17319F5D, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// FMOD.Studio.EventInstance
struct  EventInstance_t77E43F521C3E42A51B553C95F04A518E03B7E2C8 
{
public:
	// System.IntPtr FMOD.Studio.EventInstance::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(EventInstance_t77E43F521C3E42A51B553C95F04A518E03B7E2C8, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.INITFLAGS
struct  INITFLAGS_t2219BB6AF7B699F9E9DBD0418191291925810F76 
{
public:
	// System.UInt32 FMOD.INITFLAGS::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(INITFLAGS_t2219BB6AF7B699F9E9DBD0418191291925810F76, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.Studio.INITFLAGS
struct  INITFLAGS_tF6B26B92281C38573FA4E21B660FF9C07ED0456B 
{
public:
	// System.UInt32 FMOD.Studio.INITFLAGS::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(INITFLAGS_tF6B26B92281C38573FA4E21B660FF9C07ED0456B, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.Studio.LOAD_BANK_FLAGS
struct  LOAD_BANK_FLAGS_t0A8EF1C2C0D63D65D3A68E1B4CA48B9C41EBA44D 
{
public:
	// System.UInt32 FMOD.Studio.LOAD_BANK_FLAGS::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LOAD_BANK_FLAGS_t0A8EF1C2C0D63D65D3A68E1B4CA48B9C41EBA44D, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.Studio.LOAD_MEMORY_MODE
struct  LOAD_MEMORY_MODE_t365D448A90B2F5A49EEE0150682160C7D272E4D4 
{
public:
	// System.Int32 FMOD.Studio.LOAD_MEMORY_MODE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LOAD_MEMORY_MODE_t365D448A90B2F5A49EEE0150682160C7D272E4D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.MODE
struct  MODE_t5CA9205E20AA7A7EEF6F8397E4F31B17EBF29D43 
{
public:
	// System.UInt32 FMOD.MODE::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MODE_t5CA9205E20AA7A7EEF6F8397E4F31B17EBF29D43, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// FMOD.Studio.PARAMETER_FLAGS
struct  PARAMETER_FLAGS_t38AED48A788EF54C9768CC194B7CE71E298DE119 
{
public:
	// System.UInt32 FMOD.Studio.PARAMETER_FLAGS::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PARAMETER_FLAGS_t38AED48A788EF54C9768CC194B7CE71E298DE119, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.Studio.PARAMETER_TYPE
struct  PARAMETER_TYPE_tA930091EEC5F0B75ADA729DE81C2DD4EC31165CA 
{
public:
	// System.Int32 FMOD.Studio.PARAMETER_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PARAMETER_TYPE_tA930091EEC5F0B75ADA729DE81C2DD4EC31165CA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMODUnity.ParamRef
struct  ParamRef_t6751E36E401E0FC867147A1DD315969996D15FFD  : public RuntimeObject
{
public:
	// System.String FMODUnity.ParamRef::Name
	String_t* ___Name_0;
	// System.Single FMODUnity.ParamRef::Value
	float ___Value_1;
	// FMOD.Studio.PARAMETER_ID FMODUnity.ParamRef::ID
	PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  ___ID_2;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ParamRef_t6751E36E401E0FC867147A1DD315969996D15FFD, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(ParamRef_t6751E36E401E0FC867147A1DD315969996D15FFD, ___Value_1)); }
	inline float get_Value_1() const { return ___Value_1; }
	inline float* get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(float value)
	{
		___Value_1 = value;
	}

	inline static int32_t get_offset_of_ID_2() { return static_cast<int32_t>(offsetof(ParamRef_t6751E36E401E0FC867147A1DD315969996D15FFD, ___ID_2)); }
	inline PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  get_ID_2() const { return ___ID_2; }
	inline PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE * get_address_of_ID_2() { return &___ID_2; }
	inline void set_ID_2(PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  value)
	{
		___ID_2 = value;
	}
};


// FMOD.RESULT
struct  RESULT_t25BE0876E69B44E7D72DC4C52217E7C5B1A82271 
{
public:
	// System.Int32 FMOD.RESULT::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RESULT_t25BE0876E69B44E7D72DC4C52217E7C5B1A82271, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// FMOD.SOUND_FORMAT
struct  SOUND_FORMAT_t489445EB8C3CE4C06EFEADE8CC893D1ECA60A4BC 
{
public:
	// System.Int32 FMOD.SOUND_FORMAT::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SOUND_FORMAT_t489445EB8C3CE4C06EFEADE8CC893D1ECA60A4BC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.SOUND_TYPE
struct  SOUND_TYPE_t0C12FFED0D0B6B603517E34887A2D08945DB3682 
{
public:
	// System.Int32 FMOD.SOUND_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SOUND_TYPE_t0C12FFED0D0B6B603517E34887A2D08945DB3682, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.SPEAKERMODE
struct  SPEAKERMODE_tA70DD9EE396684B717A57A981C2E793CC0D11F13 
{
public:
	// System.Int32 FMOD.SPEAKERMODE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SPEAKERMODE_tA70DD9EE396684B717A57A981C2E793CC0D11F13, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.Studio.SYSTEM_CALLBACK_TYPE
struct  SYSTEM_CALLBACK_TYPE_tAA5EEC06825F068F1D9DC4C5E946489037DB2C3B 
{
public:
	// System.UInt32 FMOD.Studio.SYSTEM_CALLBACK_TYPE::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SYSTEM_CALLBACK_TYPE_tAA5EEC06825F068F1D9DC4C5E946489037DB2C3B, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.StringWrapper
struct  StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6 
{
public:
	// System.IntPtr FMOD.StringWrapper::nativeUtf8Ptr
	intptr_t ___nativeUtf8Ptr_0;

public:
	inline static int32_t get_offset_of_nativeUtf8Ptr_0() { return static_cast<int32_t>(offsetof(StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6, ___nativeUtf8Ptr_0)); }
	inline intptr_t get_nativeUtf8Ptr_0() const { return ___nativeUtf8Ptr_0; }
	inline intptr_t* get_address_of_nativeUtf8Ptr_0() { return &___nativeUtf8Ptr_0; }
	inline void set_nativeUtf8Ptr_0(intptr_t value)
	{
		___nativeUtf8Ptr_0 = value;
	}
};


// FMOD.System
struct  System_t9B8A23CA218F79F4E360B186DF4BFCF9E035D34B 
{
public:
	// System.IntPtr FMOD.System::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(System_t9B8A23CA218F79F4E360B186DF4BFCF9E035D34B, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// FMOD.Studio.System
struct  System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 
{
public:
	// System.IntPtr FMOD.Studio.System::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// FMOD.TAGDATATYPE
struct  TAGDATATYPE_t26937FEEDCC384DEA36FF7D7C38C636E0EA73E62 
{
public:
	// System.Int32 FMOD.TAGDATATYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TAGDATATYPE_t26937FEEDCC384DEA36FF7D7C38C636E0EA73E62, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.TAGTYPE
struct  TAGTYPE_t109AFB64056188FC1DB970E890BECA20CBDB3948 
{
public:
	// System.Int32 FMOD.TAGTYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TAGTYPE_t109AFB64056188FC1DB970E890BECA20CBDB3948, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.THREAD_AFFINITY
struct  THREAD_AFFINITY_tF682E46B8D89AB08AFA7B0198C020DC229E27795 
{
public:
	// System.Int64 FMOD.THREAD_AFFINITY::value__
	int64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(THREAD_AFFINITY_tF682E46B8D89AB08AFA7B0198C020DC229E27795, ___value___2)); }
	inline int64_t get_value___2() const { return ___value___2; }
	inline int64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int64_t value)
	{
		___value___2 = value;
	}
};


// FMOD.THREAD_PRIORITY
struct  THREAD_PRIORITY_t9725574513C46CF5A690ACDD1C8FE7116D611C54 
{
public:
	// System.Int32 FMOD.THREAD_PRIORITY::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(THREAD_PRIORITY_t9725574513C46CF5A690ACDD1C8FE7116D611C54, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.THREAD_STACK_SIZE
struct  THREAD_STACK_SIZE_t525B0C5312F54EF4F809FBF96FAE0999B5E6C2EE 
{
public:
	// System.UInt32 FMOD.THREAD_STACK_SIZE::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(THREAD_STACK_SIZE_t525B0C5312F54EF4F809FBF96FAE0999B5E6C2EE, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.THREAD_TYPE
struct  THREAD_TYPE_t517426CAFDC4B767D49DF39E9BE521638E3D4627 
{
public:
	// System.Int32 FMOD.THREAD_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(THREAD_TYPE_t517426CAFDC4B767D49DF39E9BE521638E3D4627, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.TIMEUNIT
struct  TIMEUNIT_t11C9C51999CBDDF2F44E92624E39FF863779CFBB 
{
public:
	// System.UInt32 FMOD.TIMEUNIT::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TIMEUNIT_t11C9C51999CBDDF2F44E92624E39FF863779CFBB, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// FMODUnity.ThreadAffinity
struct  ThreadAffinity_t3F84037CBB2FED4832A9D509E5EE95427068A9C3 
{
public:
	// System.UInt32 FMODUnity.ThreadAffinity::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ThreadAffinity_t3F84037CBB2FED4832A9D509E5EE95427068A9C3, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// FMODUnity.ThreadType
struct  ThreadType_t82A10C14E631E6266D034FFBEFCD375ECA8799A0 
{
public:
	// System.Int32 FMODUnity.ThreadType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ThreadType_t82A10C14E631E6266D034FFBEFCD375ECA8799A0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMODUnity.TriStateBool
struct  TriStateBool_t94CD06884EBE26260E024B75AE612BCF1915A078 
{
public:
	// System.Int32 FMODUnity.TriStateBool::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TriStateBool_t94CD06884EBE26260E024B75AE612BCF1915A078, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.Studio.USER_PROPERTY_TYPE
struct  USER_PROPERTY_TYPE_t3126808C1BFF8EACDBA91A228F7AE15F20D5F2D6 
{
public:
	// System.Int32 FMOD.Studio.USER_PROPERTY_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(USER_PROPERTY_TYPE_t3126808C1BFF8EACDBA91A228F7AE15F20D5F2D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.Studio.VCA
struct  VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 
{
public:
	// System.IntPtr FMOD.Studio.VCA::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// FMODUnity.Legacy/Platform
struct  Platform_t8A9B7B74982EABA95BFF0BA4F8AC496326308279 
{
public:
	// System.Int32 FMODUnity.Legacy/Platform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Platform_t8A9B7B74982EABA95BFF0BA4F8AC496326308279, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.StringHelper/ThreadSafeEncoding
struct  ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2  : public RuntimeObject
{
public:
	// System.Text.UTF8Encoding FMOD.StringHelper/ThreadSafeEncoding::encoding
	UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * ___encoding_0;
	// System.Byte[] FMOD.StringHelper/ThreadSafeEncoding::encodedBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___encodedBuffer_1;
	// System.Char[] FMOD.StringHelper/ThreadSafeEncoding::decodedBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___decodedBuffer_2;
	// System.Boolean FMOD.StringHelper/ThreadSafeEncoding::inUse
	bool ___inUse_3;
	// System.Runtime.InteropServices.GCHandle FMOD.StringHelper/ThreadSafeEncoding::gcHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gcHandle_4;

public:
	inline static int32_t get_offset_of_encoding_0() { return static_cast<int32_t>(offsetof(ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2, ___encoding_0)); }
	inline UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * get_encoding_0() const { return ___encoding_0; }
	inline UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 ** get_address_of_encoding_0() { return &___encoding_0; }
	inline void set_encoding_0(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * value)
	{
		___encoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_encodedBuffer_1() { return static_cast<int32_t>(offsetof(ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2, ___encodedBuffer_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_encodedBuffer_1() const { return ___encodedBuffer_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_encodedBuffer_1() { return &___encodedBuffer_1; }
	inline void set_encodedBuffer_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___encodedBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodedBuffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_decodedBuffer_2() { return static_cast<int32_t>(offsetof(ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2, ___decodedBuffer_2)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_decodedBuffer_2() const { return ___decodedBuffer_2; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_decodedBuffer_2() { return &___decodedBuffer_2; }
	inline void set_decodedBuffer_2(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___decodedBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decodedBuffer_2), (void*)value);
	}

	inline static int32_t get_offset_of_inUse_3() { return static_cast<int32_t>(offsetof(ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2, ___inUse_3)); }
	inline bool get_inUse_3() const { return ___inUse_3; }
	inline bool* get_address_of_inUse_3() { return &___inUse_3; }
	inline void set_inUse_3(bool value)
	{
		___inUse_3 = value;
	}

	inline static int32_t get_offset_of_gcHandle_4() { return static_cast<int32_t>(offsetof(ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2, ___gcHandle_4)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_gcHandle_4() const { return ___gcHandle_4; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_gcHandle_4() { return &___gcHandle_4; }
	inline void set_gcHandle_4(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___gcHandle_4 = value;
	}
};


// FMODUnity.StudioEventEmitter/<>c__DisplayClass37_0
struct  U3CU3Ec__DisplayClass37_0_t984A7E1C8D24EAE682C8C38DEBC8FF7DC8B2E465  : public RuntimeObject
{
public:
	// FMOD.Studio.PARAMETER_ID FMODUnity.StudioEventEmitter/<>c__DisplayClass37_0::id
	PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass37_0_t984A7E1C8D24EAE682C8C38DEBC8FF7DC8B2E465, ___id_0)); }
	inline PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  get_id_0() const { return ___id_0; }
	inline PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE * get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  value)
	{
		___id_0 = value;
	}
};


// FMODUnity.Platform/PropertyAccessor`1<System.Int32Enum>
struct  PropertyAccessor_1_tE6A94B0BB78BE5CFB7972AF6AE68A71D21D1DEB0 
{
public:
	// System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<T>> FMODUnity.Platform/PropertyAccessor`1::Getter
	Func_2_t6FC8FB1B78710D8F435EFF2410DBEECBC31455AF * ___Getter_0;
	// T FMODUnity.Platform/PropertyAccessor`1::DefaultValue
	int32_t ___DefaultValue_1;

public:
	inline static int32_t get_offset_of_Getter_0() { return static_cast<int32_t>(offsetof(PropertyAccessor_1_tE6A94B0BB78BE5CFB7972AF6AE68A71D21D1DEB0, ___Getter_0)); }
	inline Func_2_t6FC8FB1B78710D8F435EFF2410DBEECBC31455AF * get_Getter_0() const { return ___Getter_0; }
	inline Func_2_t6FC8FB1B78710D8F435EFF2410DBEECBC31455AF ** get_address_of_Getter_0() { return &___Getter_0; }
	inline void set_Getter_0(Func_2_t6FC8FB1B78710D8F435EFF2410DBEECBC31455AF * value)
	{
		___Getter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Getter_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValue_1() { return static_cast<int32_t>(offsetof(PropertyAccessor_1_tE6A94B0BB78BE5CFB7972AF6AE68A71D21D1DEB0, ___DefaultValue_1)); }
	inline int32_t get_DefaultValue_1() const { return ___DefaultValue_1; }
	inline int32_t* get_address_of_DefaultValue_1() { return &___DefaultValue_1; }
	inline void set_DefaultValue_1(int32_t value)
	{
		___DefaultValue_1 = value;
	}
};


// FMODUnity.Platform/PropertyAccessor`1<FMOD.SPEAKERMODE>
struct  PropertyAccessor_1_tFFFFA4523004CF950187CE99473C24DEF92A7375 
{
public:
	// System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<T>> FMODUnity.Platform/PropertyAccessor`1::Getter
	Func_2_tCB94F642CEF6C6C7ECD6A1E2038D7EE45FE8E8E5 * ___Getter_0;
	// T FMODUnity.Platform/PropertyAccessor`1::DefaultValue
	int32_t ___DefaultValue_1;

public:
	inline static int32_t get_offset_of_Getter_0() { return static_cast<int32_t>(offsetof(PropertyAccessor_1_tFFFFA4523004CF950187CE99473C24DEF92A7375, ___Getter_0)); }
	inline Func_2_tCB94F642CEF6C6C7ECD6A1E2038D7EE45FE8E8E5 * get_Getter_0() const { return ___Getter_0; }
	inline Func_2_tCB94F642CEF6C6C7ECD6A1E2038D7EE45FE8E8E5 ** get_address_of_Getter_0() { return &___Getter_0; }
	inline void set_Getter_0(Func_2_tCB94F642CEF6C6C7ECD6A1E2038D7EE45FE8E8E5 * value)
	{
		___Getter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Getter_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValue_1() { return static_cast<int32_t>(offsetof(PropertyAccessor_1_tFFFFA4523004CF950187CE99473C24DEF92A7375, ___DefaultValue_1)); }
	inline int32_t get_DefaultValue_1() const { return ___DefaultValue_1; }
	inline int32_t* get_address_of_DefaultValue_1() { return &___DefaultValue_1; }
	inline void set_DefaultValue_1(int32_t value)
	{
		___DefaultValue_1 = value;
	}
};


// FMODUnity.Platform/PropertyAccessor`1<FMODUnity.TriStateBool>
struct  PropertyAccessor_1_t96321CC9404BDDA3C50DC400A87A60AC9EEE87A9 
{
public:
	// System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<T>> FMODUnity.Platform/PropertyAccessor`1::Getter
	Func_2_tA49219E9EC3C0B2E9A55DEFD7CAD14C1121311C7 * ___Getter_0;
	// T FMODUnity.Platform/PropertyAccessor`1::DefaultValue
	int32_t ___DefaultValue_1;

public:
	inline static int32_t get_offset_of_Getter_0() { return static_cast<int32_t>(offsetof(PropertyAccessor_1_t96321CC9404BDDA3C50DC400A87A60AC9EEE87A9, ___Getter_0)); }
	inline Func_2_tA49219E9EC3C0B2E9A55DEFD7CAD14C1121311C7 * get_Getter_0() const { return ___Getter_0; }
	inline Func_2_tA49219E9EC3C0B2E9A55DEFD7CAD14C1121311C7 ** get_address_of_Getter_0() { return &___Getter_0; }
	inline void set_Getter_0(Func_2_tA49219E9EC3C0B2E9A55DEFD7CAD14C1121311C7 * value)
	{
		___Getter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Getter_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValue_1() { return static_cast<int32_t>(offsetof(PropertyAccessor_1_t96321CC9404BDDA3C50DC400A87A60AC9EEE87A9, ___DefaultValue_1)); }
	inline int32_t get_DefaultValue_1() const { return ___DefaultValue_1; }
	inline int32_t* get_address_of_DefaultValue_1() { return &___DefaultValue_1; }
	inline void set_DefaultValue_1(int32_t value)
	{
		___DefaultValue_1 = value;
	}
};


// FMODUnity.Platform/Property`1<FMOD.SPEAKERMODE>
struct  Property_1_tB7992A7FE9E273F12B5AD18F27A64E5FE522A31E  : public RuntimeObject
{
public:
	// T FMODUnity.Platform/Property`1::Value
	int32_t ___Value_0;
	// System.Boolean FMODUnity.Platform/Property`1::HasValue
	bool ___HasValue_1;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Property_1_tB7992A7FE9E273F12B5AD18F27A64E5FE522A31E, ___Value_0)); }
	inline int32_t get_Value_0() const { return ___Value_0; }
	inline int32_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int32_t value)
	{
		___Value_0 = value;
	}

	inline static int32_t get_offset_of_HasValue_1() { return static_cast<int32_t>(offsetof(Property_1_tB7992A7FE9E273F12B5AD18F27A64E5FE522A31E, ___HasValue_1)); }
	inline bool get_HasValue_1() const { return ___HasValue_1; }
	inline bool* get_address_of_HasValue_1() { return &___HasValue_1; }
	inline void set_HasValue_1(bool value)
	{
		___HasValue_1 = value;
	}
};


// FMODUnity.Platform/Property`1<FMODUnity.TriStateBool>
struct  Property_1_tB4DC4D8A4B1A7885B188EF3DFCDA5F0FC8965C97  : public RuntimeObject
{
public:
	// T FMODUnity.Platform/Property`1::Value
	int32_t ___Value_0;
	// System.Boolean FMODUnity.Platform/Property`1::HasValue
	bool ___HasValue_1;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Property_1_tB4DC4D8A4B1A7885B188EF3DFCDA5F0FC8965C97, ___Value_0)); }
	inline int32_t get_Value_0() const { return ___Value_0; }
	inline int32_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int32_t value)
	{
		___Value_0 = value;
	}

	inline static int32_t get_offset_of_HasValue_1() { return static_cast<int32_t>(offsetof(Property_1_tB4DC4D8A4B1A7885B188EF3DFCDA5F0FC8965C97, ___HasValue_1)); }
	inline bool get_HasValue_1() const { return ___HasValue_1; }
	inline bool* get_address_of_HasValue_1() { return &___HasValue_1; }
	inline void set_HasValue_1(bool value)
	{
		___HasValue_1 = value;
	}
};


// FMOD.CREATESOUNDEXINFO
struct  CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B 
{
public:
	// System.Int32 FMOD.CREATESOUNDEXINFO::cbsize
	int32_t ___cbsize_0;
	// System.UInt32 FMOD.CREATESOUNDEXINFO::length
	uint32_t ___length_1;
	// System.UInt32 FMOD.CREATESOUNDEXINFO::fileoffset
	uint32_t ___fileoffset_2;
	// System.Int32 FMOD.CREATESOUNDEXINFO::numchannels
	int32_t ___numchannels_3;
	// System.Int32 FMOD.CREATESOUNDEXINFO::defaultfrequency
	int32_t ___defaultfrequency_4;
	// FMOD.SOUND_FORMAT FMOD.CREATESOUNDEXINFO::format
	int32_t ___format_5;
	// System.UInt32 FMOD.CREATESOUNDEXINFO::decodebuffersize
	uint32_t ___decodebuffersize_6;
	// System.Int32 FMOD.CREATESOUNDEXINFO::initialsubsound
	int32_t ___initialsubsound_7;
	// System.Int32 FMOD.CREATESOUNDEXINFO::numsubsounds
	int32_t ___numsubsounds_8;
	// System.IntPtr FMOD.CREATESOUNDEXINFO::inclusionlist
	intptr_t ___inclusionlist_9;
	// System.Int32 FMOD.CREATESOUNDEXINFO::inclusionlistnum
	int32_t ___inclusionlistnum_10;
	// FMOD.SOUND_PCMREAD_CALLBACK FMOD.CREATESOUNDEXINFO::pcmreadcallback
	SOUND_PCMREAD_CALLBACK_t099B7F37663252859425D0155BD8068497E63331 * ___pcmreadcallback_11;
	// FMOD.SOUND_PCMSETPOS_CALLBACK FMOD.CREATESOUNDEXINFO::pcmsetposcallback
	SOUND_PCMSETPOS_CALLBACK_t192B4401D4C053178E97EA3662840E6CF28CCB69 * ___pcmsetposcallback_12;
	// FMOD.SOUND_NONBLOCK_CALLBACK FMOD.CREATESOUNDEXINFO::nonblockcallback
	SOUND_NONBLOCK_CALLBACK_t16BF258C0A11AF513234B9F217234BA76288B568 * ___nonblockcallback_13;
	// System.IntPtr FMOD.CREATESOUNDEXINFO::dlsname
	intptr_t ___dlsname_14;
	// System.IntPtr FMOD.CREATESOUNDEXINFO::encryptionkey
	intptr_t ___encryptionkey_15;
	// System.Int32 FMOD.CREATESOUNDEXINFO::maxpolyphony
	int32_t ___maxpolyphony_16;
	// System.IntPtr FMOD.CREATESOUNDEXINFO::userdata
	intptr_t ___userdata_17;
	// FMOD.SOUND_TYPE FMOD.CREATESOUNDEXINFO::suggestedsoundtype
	int32_t ___suggestedsoundtype_18;
	// FMOD.FILE_OPEN_CALLBACK FMOD.CREATESOUNDEXINFO::fileuseropen
	FILE_OPEN_CALLBACK_tA13B923FE5970CFC0B305A287DEEFE71D1C77694 * ___fileuseropen_19;
	// FMOD.FILE_CLOSE_CALLBACK FMOD.CREATESOUNDEXINFO::fileuserclose
	FILE_CLOSE_CALLBACK_t9405C9698E17716FC0E2B95CB3D7331DFB6E80EA * ___fileuserclose_20;
	// FMOD.FILE_READ_CALLBACK FMOD.CREATESOUNDEXINFO::fileuserread
	FILE_READ_CALLBACK_tF4B8F36AB9729B31440DB6204D0E32AACD42937A * ___fileuserread_21;
	// FMOD.FILE_SEEK_CALLBACK FMOD.CREATESOUNDEXINFO::fileuserseek
	FILE_SEEK_CALLBACK_t9494A7DB9F5B0DF84468422A4F14842218347C49 * ___fileuserseek_22;
	// FMOD.FILE_ASYNCREAD_CALLBACK FMOD.CREATESOUNDEXINFO::fileuserasyncread
	FILE_ASYNCREAD_CALLBACK_t9C5810186500FC37052F3D4A4FBF9ABA48CAFC8F * ___fileuserasyncread_23;
	// FMOD.FILE_ASYNCCANCEL_CALLBACK FMOD.CREATESOUNDEXINFO::fileuserasynccancel
	FILE_ASYNCCANCEL_CALLBACK_t00890D8ED225C89563E670D2BF248926F90164BF * ___fileuserasynccancel_24;
	// System.IntPtr FMOD.CREATESOUNDEXINFO::fileuserdata
	intptr_t ___fileuserdata_25;
	// System.Int32 FMOD.CREATESOUNDEXINFO::filebuffersize
	int32_t ___filebuffersize_26;
	// FMOD.CHANNELORDER FMOD.CREATESOUNDEXINFO::channelorder
	int32_t ___channelorder_27;
	// System.IntPtr FMOD.CREATESOUNDEXINFO::initialsoundgroup
	intptr_t ___initialsoundgroup_28;
	// System.UInt32 FMOD.CREATESOUNDEXINFO::initialseekposition
	uint32_t ___initialseekposition_29;
	// FMOD.TIMEUNIT FMOD.CREATESOUNDEXINFO::initialseekpostype
	uint32_t ___initialseekpostype_30;
	// System.Int32 FMOD.CREATESOUNDEXINFO::ignoresetfilesystem
	int32_t ___ignoresetfilesystem_31;
	// System.UInt32 FMOD.CREATESOUNDEXINFO::audioqueuepolicy
	uint32_t ___audioqueuepolicy_32;
	// System.UInt32 FMOD.CREATESOUNDEXINFO::minmidigranularity
	uint32_t ___minmidigranularity_33;
	// System.Int32 FMOD.CREATESOUNDEXINFO::nonblockthreadid
	int32_t ___nonblockthreadid_34;
	// System.IntPtr FMOD.CREATESOUNDEXINFO::fsbguid
	intptr_t ___fsbguid_35;

public:
	inline static int32_t get_offset_of_cbsize_0() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___cbsize_0)); }
	inline int32_t get_cbsize_0() const { return ___cbsize_0; }
	inline int32_t* get_address_of_cbsize_0() { return &___cbsize_0; }
	inline void set_cbsize_0(int32_t value)
	{
		___cbsize_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___length_1)); }
	inline uint32_t get_length_1() const { return ___length_1; }
	inline uint32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(uint32_t value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_fileoffset_2() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___fileoffset_2)); }
	inline uint32_t get_fileoffset_2() const { return ___fileoffset_2; }
	inline uint32_t* get_address_of_fileoffset_2() { return &___fileoffset_2; }
	inline void set_fileoffset_2(uint32_t value)
	{
		___fileoffset_2 = value;
	}

	inline static int32_t get_offset_of_numchannels_3() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___numchannels_3)); }
	inline int32_t get_numchannels_3() const { return ___numchannels_3; }
	inline int32_t* get_address_of_numchannels_3() { return &___numchannels_3; }
	inline void set_numchannels_3(int32_t value)
	{
		___numchannels_3 = value;
	}

	inline static int32_t get_offset_of_defaultfrequency_4() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___defaultfrequency_4)); }
	inline int32_t get_defaultfrequency_4() const { return ___defaultfrequency_4; }
	inline int32_t* get_address_of_defaultfrequency_4() { return &___defaultfrequency_4; }
	inline void set_defaultfrequency_4(int32_t value)
	{
		___defaultfrequency_4 = value;
	}

	inline static int32_t get_offset_of_format_5() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___format_5)); }
	inline int32_t get_format_5() const { return ___format_5; }
	inline int32_t* get_address_of_format_5() { return &___format_5; }
	inline void set_format_5(int32_t value)
	{
		___format_5 = value;
	}

	inline static int32_t get_offset_of_decodebuffersize_6() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___decodebuffersize_6)); }
	inline uint32_t get_decodebuffersize_6() const { return ___decodebuffersize_6; }
	inline uint32_t* get_address_of_decodebuffersize_6() { return &___decodebuffersize_6; }
	inline void set_decodebuffersize_6(uint32_t value)
	{
		___decodebuffersize_6 = value;
	}

	inline static int32_t get_offset_of_initialsubsound_7() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___initialsubsound_7)); }
	inline int32_t get_initialsubsound_7() const { return ___initialsubsound_7; }
	inline int32_t* get_address_of_initialsubsound_7() { return &___initialsubsound_7; }
	inline void set_initialsubsound_7(int32_t value)
	{
		___initialsubsound_7 = value;
	}

	inline static int32_t get_offset_of_numsubsounds_8() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___numsubsounds_8)); }
	inline int32_t get_numsubsounds_8() const { return ___numsubsounds_8; }
	inline int32_t* get_address_of_numsubsounds_8() { return &___numsubsounds_8; }
	inline void set_numsubsounds_8(int32_t value)
	{
		___numsubsounds_8 = value;
	}

	inline static int32_t get_offset_of_inclusionlist_9() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___inclusionlist_9)); }
	inline intptr_t get_inclusionlist_9() const { return ___inclusionlist_9; }
	inline intptr_t* get_address_of_inclusionlist_9() { return &___inclusionlist_9; }
	inline void set_inclusionlist_9(intptr_t value)
	{
		___inclusionlist_9 = value;
	}

	inline static int32_t get_offset_of_inclusionlistnum_10() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___inclusionlistnum_10)); }
	inline int32_t get_inclusionlistnum_10() const { return ___inclusionlistnum_10; }
	inline int32_t* get_address_of_inclusionlistnum_10() { return &___inclusionlistnum_10; }
	inline void set_inclusionlistnum_10(int32_t value)
	{
		___inclusionlistnum_10 = value;
	}

	inline static int32_t get_offset_of_pcmreadcallback_11() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___pcmreadcallback_11)); }
	inline SOUND_PCMREAD_CALLBACK_t099B7F37663252859425D0155BD8068497E63331 * get_pcmreadcallback_11() const { return ___pcmreadcallback_11; }
	inline SOUND_PCMREAD_CALLBACK_t099B7F37663252859425D0155BD8068497E63331 ** get_address_of_pcmreadcallback_11() { return &___pcmreadcallback_11; }
	inline void set_pcmreadcallback_11(SOUND_PCMREAD_CALLBACK_t099B7F37663252859425D0155BD8068497E63331 * value)
	{
		___pcmreadcallback_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pcmreadcallback_11), (void*)value);
	}

	inline static int32_t get_offset_of_pcmsetposcallback_12() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___pcmsetposcallback_12)); }
	inline SOUND_PCMSETPOS_CALLBACK_t192B4401D4C053178E97EA3662840E6CF28CCB69 * get_pcmsetposcallback_12() const { return ___pcmsetposcallback_12; }
	inline SOUND_PCMSETPOS_CALLBACK_t192B4401D4C053178E97EA3662840E6CF28CCB69 ** get_address_of_pcmsetposcallback_12() { return &___pcmsetposcallback_12; }
	inline void set_pcmsetposcallback_12(SOUND_PCMSETPOS_CALLBACK_t192B4401D4C053178E97EA3662840E6CF28CCB69 * value)
	{
		___pcmsetposcallback_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pcmsetposcallback_12), (void*)value);
	}

	inline static int32_t get_offset_of_nonblockcallback_13() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___nonblockcallback_13)); }
	inline SOUND_NONBLOCK_CALLBACK_t16BF258C0A11AF513234B9F217234BA76288B568 * get_nonblockcallback_13() const { return ___nonblockcallback_13; }
	inline SOUND_NONBLOCK_CALLBACK_t16BF258C0A11AF513234B9F217234BA76288B568 ** get_address_of_nonblockcallback_13() { return &___nonblockcallback_13; }
	inline void set_nonblockcallback_13(SOUND_NONBLOCK_CALLBACK_t16BF258C0A11AF513234B9F217234BA76288B568 * value)
	{
		___nonblockcallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nonblockcallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_dlsname_14() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___dlsname_14)); }
	inline intptr_t get_dlsname_14() const { return ___dlsname_14; }
	inline intptr_t* get_address_of_dlsname_14() { return &___dlsname_14; }
	inline void set_dlsname_14(intptr_t value)
	{
		___dlsname_14 = value;
	}

	inline static int32_t get_offset_of_encryptionkey_15() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___encryptionkey_15)); }
	inline intptr_t get_encryptionkey_15() const { return ___encryptionkey_15; }
	inline intptr_t* get_address_of_encryptionkey_15() { return &___encryptionkey_15; }
	inline void set_encryptionkey_15(intptr_t value)
	{
		___encryptionkey_15 = value;
	}

	inline static int32_t get_offset_of_maxpolyphony_16() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___maxpolyphony_16)); }
	inline int32_t get_maxpolyphony_16() const { return ___maxpolyphony_16; }
	inline int32_t* get_address_of_maxpolyphony_16() { return &___maxpolyphony_16; }
	inline void set_maxpolyphony_16(int32_t value)
	{
		___maxpolyphony_16 = value;
	}

	inline static int32_t get_offset_of_userdata_17() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___userdata_17)); }
	inline intptr_t get_userdata_17() const { return ___userdata_17; }
	inline intptr_t* get_address_of_userdata_17() { return &___userdata_17; }
	inline void set_userdata_17(intptr_t value)
	{
		___userdata_17 = value;
	}

	inline static int32_t get_offset_of_suggestedsoundtype_18() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___suggestedsoundtype_18)); }
	inline int32_t get_suggestedsoundtype_18() const { return ___suggestedsoundtype_18; }
	inline int32_t* get_address_of_suggestedsoundtype_18() { return &___suggestedsoundtype_18; }
	inline void set_suggestedsoundtype_18(int32_t value)
	{
		___suggestedsoundtype_18 = value;
	}

	inline static int32_t get_offset_of_fileuseropen_19() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___fileuseropen_19)); }
	inline FILE_OPEN_CALLBACK_tA13B923FE5970CFC0B305A287DEEFE71D1C77694 * get_fileuseropen_19() const { return ___fileuseropen_19; }
	inline FILE_OPEN_CALLBACK_tA13B923FE5970CFC0B305A287DEEFE71D1C77694 ** get_address_of_fileuseropen_19() { return &___fileuseropen_19; }
	inline void set_fileuseropen_19(FILE_OPEN_CALLBACK_tA13B923FE5970CFC0B305A287DEEFE71D1C77694 * value)
	{
		___fileuseropen_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileuseropen_19), (void*)value);
	}

	inline static int32_t get_offset_of_fileuserclose_20() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___fileuserclose_20)); }
	inline FILE_CLOSE_CALLBACK_t9405C9698E17716FC0E2B95CB3D7331DFB6E80EA * get_fileuserclose_20() const { return ___fileuserclose_20; }
	inline FILE_CLOSE_CALLBACK_t9405C9698E17716FC0E2B95CB3D7331DFB6E80EA ** get_address_of_fileuserclose_20() { return &___fileuserclose_20; }
	inline void set_fileuserclose_20(FILE_CLOSE_CALLBACK_t9405C9698E17716FC0E2B95CB3D7331DFB6E80EA * value)
	{
		___fileuserclose_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileuserclose_20), (void*)value);
	}

	inline static int32_t get_offset_of_fileuserread_21() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___fileuserread_21)); }
	inline FILE_READ_CALLBACK_tF4B8F36AB9729B31440DB6204D0E32AACD42937A * get_fileuserread_21() const { return ___fileuserread_21; }
	inline FILE_READ_CALLBACK_tF4B8F36AB9729B31440DB6204D0E32AACD42937A ** get_address_of_fileuserread_21() { return &___fileuserread_21; }
	inline void set_fileuserread_21(FILE_READ_CALLBACK_tF4B8F36AB9729B31440DB6204D0E32AACD42937A * value)
	{
		___fileuserread_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileuserread_21), (void*)value);
	}

	inline static int32_t get_offset_of_fileuserseek_22() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___fileuserseek_22)); }
	inline FILE_SEEK_CALLBACK_t9494A7DB9F5B0DF84468422A4F14842218347C49 * get_fileuserseek_22() const { return ___fileuserseek_22; }
	inline FILE_SEEK_CALLBACK_t9494A7DB9F5B0DF84468422A4F14842218347C49 ** get_address_of_fileuserseek_22() { return &___fileuserseek_22; }
	inline void set_fileuserseek_22(FILE_SEEK_CALLBACK_t9494A7DB9F5B0DF84468422A4F14842218347C49 * value)
	{
		___fileuserseek_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileuserseek_22), (void*)value);
	}

	inline static int32_t get_offset_of_fileuserasyncread_23() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___fileuserasyncread_23)); }
	inline FILE_ASYNCREAD_CALLBACK_t9C5810186500FC37052F3D4A4FBF9ABA48CAFC8F * get_fileuserasyncread_23() const { return ___fileuserasyncread_23; }
	inline FILE_ASYNCREAD_CALLBACK_t9C5810186500FC37052F3D4A4FBF9ABA48CAFC8F ** get_address_of_fileuserasyncread_23() { return &___fileuserasyncread_23; }
	inline void set_fileuserasyncread_23(FILE_ASYNCREAD_CALLBACK_t9C5810186500FC37052F3D4A4FBF9ABA48CAFC8F * value)
	{
		___fileuserasyncread_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileuserasyncread_23), (void*)value);
	}

	inline static int32_t get_offset_of_fileuserasynccancel_24() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___fileuserasynccancel_24)); }
	inline FILE_ASYNCCANCEL_CALLBACK_t00890D8ED225C89563E670D2BF248926F90164BF * get_fileuserasynccancel_24() const { return ___fileuserasynccancel_24; }
	inline FILE_ASYNCCANCEL_CALLBACK_t00890D8ED225C89563E670D2BF248926F90164BF ** get_address_of_fileuserasynccancel_24() { return &___fileuserasynccancel_24; }
	inline void set_fileuserasynccancel_24(FILE_ASYNCCANCEL_CALLBACK_t00890D8ED225C89563E670D2BF248926F90164BF * value)
	{
		___fileuserasynccancel_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileuserasynccancel_24), (void*)value);
	}

	inline static int32_t get_offset_of_fileuserdata_25() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___fileuserdata_25)); }
	inline intptr_t get_fileuserdata_25() const { return ___fileuserdata_25; }
	inline intptr_t* get_address_of_fileuserdata_25() { return &___fileuserdata_25; }
	inline void set_fileuserdata_25(intptr_t value)
	{
		___fileuserdata_25 = value;
	}

	inline static int32_t get_offset_of_filebuffersize_26() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___filebuffersize_26)); }
	inline int32_t get_filebuffersize_26() const { return ___filebuffersize_26; }
	inline int32_t* get_address_of_filebuffersize_26() { return &___filebuffersize_26; }
	inline void set_filebuffersize_26(int32_t value)
	{
		___filebuffersize_26 = value;
	}

	inline static int32_t get_offset_of_channelorder_27() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___channelorder_27)); }
	inline int32_t get_channelorder_27() const { return ___channelorder_27; }
	inline int32_t* get_address_of_channelorder_27() { return &___channelorder_27; }
	inline void set_channelorder_27(int32_t value)
	{
		___channelorder_27 = value;
	}

	inline static int32_t get_offset_of_initialsoundgroup_28() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___initialsoundgroup_28)); }
	inline intptr_t get_initialsoundgroup_28() const { return ___initialsoundgroup_28; }
	inline intptr_t* get_address_of_initialsoundgroup_28() { return &___initialsoundgroup_28; }
	inline void set_initialsoundgroup_28(intptr_t value)
	{
		___initialsoundgroup_28 = value;
	}

	inline static int32_t get_offset_of_initialseekposition_29() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___initialseekposition_29)); }
	inline uint32_t get_initialseekposition_29() const { return ___initialseekposition_29; }
	inline uint32_t* get_address_of_initialseekposition_29() { return &___initialseekposition_29; }
	inline void set_initialseekposition_29(uint32_t value)
	{
		___initialseekposition_29 = value;
	}

	inline static int32_t get_offset_of_initialseekpostype_30() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___initialseekpostype_30)); }
	inline uint32_t get_initialseekpostype_30() const { return ___initialseekpostype_30; }
	inline uint32_t* get_address_of_initialseekpostype_30() { return &___initialseekpostype_30; }
	inline void set_initialseekpostype_30(uint32_t value)
	{
		___initialseekpostype_30 = value;
	}

	inline static int32_t get_offset_of_ignoresetfilesystem_31() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___ignoresetfilesystem_31)); }
	inline int32_t get_ignoresetfilesystem_31() const { return ___ignoresetfilesystem_31; }
	inline int32_t* get_address_of_ignoresetfilesystem_31() { return &___ignoresetfilesystem_31; }
	inline void set_ignoresetfilesystem_31(int32_t value)
	{
		___ignoresetfilesystem_31 = value;
	}

	inline static int32_t get_offset_of_audioqueuepolicy_32() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___audioqueuepolicy_32)); }
	inline uint32_t get_audioqueuepolicy_32() const { return ___audioqueuepolicy_32; }
	inline uint32_t* get_address_of_audioqueuepolicy_32() { return &___audioqueuepolicy_32; }
	inline void set_audioqueuepolicy_32(uint32_t value)
	{
		___audioqueuepolicy_32 = value;
	}

	inline static int32_t get_offset_of_minmidigranularity_33() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___minmidigranularity_33)); }
	inline uint32_t get_minmidigranularity_33() const { return ___minmidigranularity_33; }
	inline uint32_t* get_address_of_minmidigranularity_33() { return &___minmidigranularity_33; }
	inline void set_minmidigranularity_33(uint32_t value)
	{
		___minmidigranularity_33 = value;
	}

	inline static int32_t get_offset_of_nonblockthreadid_34() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___nonblockthreadid_34)); }
	inline int32_t get_nonblockthreadid_34() const { return ___nonblockthreadid_34; }
	inline int32_t* get_address_of_nonblockthreadid_34() { return &___nonblockthreadid_34; }
	inline void set_nonblockthreadid_34(int32_t value)
	{
		___nonblockthreadid_34 = value;
	}

	inline static int32_t get_offset_of_fsbguid_35() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B, ___fsbguid_35)); }
	inline intptr_t get_fsbguid_35() const { return ___fsbguid_35; }
	inline intptr_t* get_address_of_fsbguid_35() { return &___fsbguid_35; }
	inline void set_fsbguid_35(intptr_t value)
	{
		___fsbguid_35 = value;
	}
};

// Native definition for P/Invoke marshalling of FMOD.CREATESOUNDEXINFO
struct CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B_marshaled_pinvoke
{
	int32_t ___cbsize_0;
	uint32_t ___length_1;
	uint32_t ___fileoffset_2;
	int32_t ___numchannels_3;
	int32_t ___defaultfrequency_4;
	int32_t ___format_5;
	uint32_t ___decodebuffersize_6;
	int32_t ___initialsubsound_7;
	int32_t ___numsubsounds_8;
	intptr_t ___inclusionlist_9;
	int32_t ___inclusionlistnum_10;
	Il2CppMethodPointer ___pcmreadcallback_11;
	Il2CppMethodPointer ___pcmsetposcallback_12;
	Il2CppMethodPointer ___nonblockcallback_13;
	intptr_t ___dlsname_14;
	intptr_t ___encryptionkey_15;
	int32_t ___maxpolyphony_16;
	intptr_t ___userdata_17;
	int32_t ___suggestedsoundtype_18;
	Il2CppMethodPointer ___fileuseropen_19;
	Il2CppMethodPointer ___fileuserclose_20;
	Il2CppMethodPointer ___fileuserread_21;
	Il2CppMethodPointer ___fileuserseek_22;
	Il2CppMethodPointer ___fileuserasyncread_23;
	Il2CppMethodPointer ___fileuserasynccancel_24;
	intptr_t ___fileuserdata_25;
	int32_t ___filebuffersize_26;
	int32_t ___channelorder_27;
	intptr_t ___initialsoundgroup_28;
	uint32_t ___initialseekposition_29;
	uint32_t ___initialseekpostype_30;
	int32_t ___ignoresetfilesystem_31;
	uint32_t ___audioqueuepolicy_32;
	uint32_t ___minmidigranularity_33;
	int32_t ___nonblockthreadid_34;
	intptr_t ___fsbguid_35;
};
// Native definition for COM marshalling of FMOD.CREATESOUNDEXINFO
struct CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B_marshaled_com
{
	int32_t ___cbsize_0;
	uint32_t ___length_1;
	uint32_t ___fileoffset_2;
	int32_t ___numchannels_3;
	int32_t ___defaultfrequency_4;
	int32_t ___format_5;
	uint32_t ___decodebuffersize_6;
	int32_t ___initialsubsound_7;
	int32_t ___numsubsounds_8;
	intptr_t ___inclusionlist_9;
	int32_t ___inclusionlistnum_10;
	Il2CppMethodPointer ___pcmreadcallback_11;
	Il2CppMethodPointer ___pcmsetposcallback_12;
	Il2CppMethodPointer ___nonblockcallback_13;
	intptr_t ___dlsname_14;
	intptr_t ___encryptionkey_15;
	int32_t ___maxpolyphony_16;
	intptr_t ___userdata_17;
	int32_t ___suggestedsoundtype_18;
	Il2CppMethodPointer ___fileuseropen_19;
	Il2CppMethodPointer ___fileuserclose_20;
	Il2CppMethodPointer ___fileuserread_21;
	Il2CppMethodPointer ___fileuserseek_22;
	Il2CppMethodPointer ___fileuserasyncread_23;
	Il2CppMethodPointer ___fileuserasynccancel_24;
	intptr_t ___fileuserdata_25;
	int32_t ___filebuffersize_26;
	int32_t ___channelorder_27;
	intptr_t ___initialsoundgroup_28;
	uint32_t ___initialseekposition_29;
	uint32_t ___initialseekpostype_30;
	int32_t ___ignoresetfilesystem_31;
	uint32_t ___audioqueuepolicy_32;
	uint32_t ___minmidigranularity_33;
	int32_t ___nonblockthreadid_34;
	intptr_t ___fsbguid_35;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// FMOD.Studio.PARAMETER_DESCRIPTION
struct  PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B 
{
public:
	// FMOD.StringWrapper FMOD.Studio.PARAMETER_DESCRIPTION::name
	StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  ___name_0;
	// FMOD.Studio.PARAMETER_ID FMOD.Studio.PARAMETER_DESCRIPTION::id
	PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  ___id_1;
	// System.Single FMOD.Studio.PARAMETER_DESCRIPTION::minimum
	float ___minimum_2;
	// System.Single FMOD.Studio.PARAMETER_DESCRIPTION::maximum
	float ___maximum_3;
	// System.Single FMOD.Studio.PARAMETER_DESCRIPTION::defaultvalue
	float ___defaultvalue_4;
	// FMOD.Studio.PARAMETER_TYPE FMOD.Studio.PARAMETER_DESCRIPTION::type
	int32_t ___type_5;
	// FMOD.Studio.PARAMETER_FLAGS FMOD.Studio.PARAMETER_DESCRIPTION::flags
	uint32_t ___flags_6;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B, ___name_0)); }
	inline StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  get_name_0() const { return ___name_0; }
	inline StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6 * get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  value)
	{
		___name_0 = value;
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B, ___id_1)); }
	inline PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  get_id_1() const { return ___id_1; }
	inline PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE * get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_minimum_2() { return static_cast<int32_t>(offsetof(PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B, ___minimum_2)); }
	inline float get_minimum_2() const { return ___minimum_2; }
	inline float* get_address_of_minimum_2() { return &___minimum_2; }
	inline void set_minimum_2(float value)
	{
		___minimum_2 = value;
	}

	inline static int32_t get_offset_of_maximum_3() { return static_cast<int32_t>(offsetof(PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B, ___maximum_3)); }
	inline float get_maximum_3() const { return ___maximum_3; }
	inline float* get_address_of_maximum_3() { return &___maximum_3; }
	inline void set_maximum_3(float value)
	{
		___maximum_3 = value;
	}

	inline static int32_t get_offset_of_defaultvalue_4() { return static_cast<int32_t>(offsetof(PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B, ___defaultvalue_4)); }
	inline float get_defaultvalue_4() const { return ___defaultvalue_4; }
	inline float* get_address_of_defaultvalue_4() { return &___defaultvalue_4; }
	inline void set_defaultvalue_4(float value)
	{
		___defaultvalue_4 = value;
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B, ___type_5)); }
	inline int32_t get_type_5() const { return ___type_5; }
	inline int32_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(int32_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_flags_6() { return static_cast<int32_t>(offsetof(PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B, ___flags_6)); }
	inline uint32_t get_flags_6() const { return ___flags_6; }
	inline uint32_t* get_address_of_flags_6() { return &___flags_6; }
	inline void set_flags_6(uint32_t value)
	{
		___flags_6 = value;
	}
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// FMODUnity.SystemNotInitializedException
struct  SystemNotInitializedException_tB1BE2003450BA76961E0BBA4F7D9E21F8AE4B63C  : public Exception_t
{
public:
	// FMOD.RESULT FMODUnity.SystemNotInitializedException::Result
	int32_t ___Result_17;
	// System.String FMODUnity.SystemNotInitializedException::Location
	String_t* ___Location_18;

public:
	inline static int32_t get_offset_of_Result_17() { return static_cast<int32_t>(offsetof(SystemNotInitializedException_tB1BE2003450BA76961E0BBA4F7D9E21F8AE4B63C, ___Result_17)); }
	inline int32_t get_Result_17() const { return ___Result_17; }
	inline int32_t* get_address_of_Result_17() { return &___Result_17; }
	inline void set_Result_17(int32_t value)
	{
		___Result_17 = value;
	}

	inline static int32_t get_offset_of_Location_18() { return static_cast<int32_t>(offsetof(SystemNotInitializedException_tB1BE2003450BA76961E0BBA4F7D9E21F8AE4B63C, ___Location_18)); }
	inline String_t* get_Location_18() const { return ___Location_18; }
	inline String_t** get_address_of_Location_18() { return &___Location_18; }
	inline void set_Location_18(String_t* value)
	{
		___Location_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Location_18), (void*)value);
	}
};


// FMOD.TAG
struct  TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343 
{
public:
	// FMOD.TAGTYPE FMOD.TAG::type
	int32_t ___type_0;
	// FMOD.TAGDATATYPE FMOD.TAG::datatype
	int32_t ___datatype_1;
	// FMOD.StringWrapper FMOD.TAG::name
	StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  ___name_2;
	// System.IntPtr FMOD.TAG::data
	intptr_t ___data_3;
	// System.UInt32 FMOD.TAG::datalen
	uint32_t ___datalen_4;
	// System.Boolean FMOD.TAG::updated
	bool ___updated_5;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_datatype_1() { return static_cast<int32_t>(offsetof(TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343, ___datatype_1)); }
	inline int32_t get_datatype_1() const { return ___datatype_1; }
	inline int32_t* get_address_of_datatype_1() { return &___datatype_1; }
	inline void set_datatype_1(int32_t value)
	{
		___datatype_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343, ___name_2)); }
	inline StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  get_name_2() const { return ___name_2; }
	inline StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6 * get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  value)
	{
		___name_2 = value;
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343, ___data_3)); }
	inline intptr_t get_data_3() const { return ___data_3; }
	inline intptr_t* get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(intptr_t value)
	{
		___data_3 = value;
	}

	inline static int32_t get_offset_of_datalen_4() { return static_cast<int32_t>(offsetof(TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343, ___datalen_4)); }
	inline uint32_t get_datalen_4() const { return ___datalen_4; }
	inline uint32_t* get_address_of_datalen_4() { return &___datalen_4; }
	inline void set_datalen_4(uint32_t value)
	{
		___datalen_4 = value;
	}

	inline static int32_t get_offset_of_updated_5() { return static_cast<int32_t>(offsetof(TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343, ___updated_5)); }
	inline bool get_updated_5() const { return ___updated_5; }
	inline bool* get_address_of_updated_5() { return &___updated_5; }
	inline void set_updated_5(bool value)
	{
		___updated_5 = value;
	}
};

// Native definition for P/Invoke marshalling of FMOD.TAG
struct TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343_marshaled_pinvoke
{
	int32_t ___type_0;
	int32_t ___datatype_1;
	StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  ___name_2;
	intptr_t ___data_3;
	uint32_t ___datalen_4;
	int32_t ___updated_5;
};
// Native definition for COM marshalling of FMOD.TAG
struct TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343_marshaled_com
{
	int32_t ___type_0;
	int32_t ___datatype_1;
	StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  ___name_2;
	intptr_t ___data_3;
	uint32_t ___datalen_4;
	int32_t ___updated_5;
};

// FMOD.Studio.TIMELINE_MARKER_PROPERTIES
struct  TIMELINE_MARKER_PROPERTIES_t3E381A70E2A8C97B2C7DD746EEA1AFA33B9ACCD0 
{
public:
	// FMOD.StringWrapper FMOD.Studio.TIMELINE_MARKER_PROPERTIES::name
	StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  ___name_0;
	// System.Int32 FMOD.Studio.TIMELINE_MARKER_PROPERTIES::position
	int32_t ___position_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(TIMELINE_MARKER_PROPERTIES_t3E381A70E2A8C97B2C7DD746EEA1AFA33B9ACCD0, ___name_0)); }
	inline StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  get_name_0() const { return ___name_0; }
	inline StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6 * get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  value)
	{
		___name_0 = value;
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(TIMELINE_MARKER_PROPERTIES_t3E381A70E2A8C97B2C7DD746EEA1AFA33B9ACCD0, ___position_1)); }
	inline int32_t get_position_1() const { return ___position_1; }
	inline int32_t* get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(int32_t value)
	{
		___position_1 = value;
	}
};


// FMODUnity.ThreadAffinityGroup
struct  ThreadAffinityGroup_t3040CB7EA982A4E81D41588DD37CAFD9A8A298D4  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<FMODUnity.ThreadType> FMODUnity.ThreadAffinityGroup::threads
	List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2 * ___threads_0;
	// FMODUnity.ThreadAffinity FMODUnity.ThreadAffinityGroup::affinity
	uint32_t ___affinity_1;

public:
	inline static int32_t get_offset_of_threads_0() { return static_cast<int32_t>(offsetof(ThreadAffinityGroup_t3040CB7EA982A4E81D41588DD37CAFD9A8A298D4, ___threads_0)); }
	inline List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2 * get_threads_0() const { return ___threads_0; }
	inline List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2 ** get_address_of_threads_0() { return &___threads_0; }
	inline void set_threads_0(List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2 * value)
	{
		___threads_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threads_0), (void*)value);
	}

	inline static int32_t get_offset_of_affinity_1() { return static_cast<int32_t>(offsetof(ThreadAffinityGroup_t3040CB7EA982A4E81D41588DD37CAFD9A8A298D4, ___affinity_1)); }
	inline uint32_t get_affinity_1() const { return ___affinity_1; }
	inline uint32_t* get_address_of_affinity_1() { return &___affinity_1; }
	inline void set_affinity_1(uint32_t value)
	{
		___affinity_1 = value;
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// FMOD.Studio.Union_IntBoolFloatString
struct  Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 FMOD.Studio.Union_IntBoolFloatString::intvalue
			int32_t ___intvalue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___intvalue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Boolean FMOD.Studio.Union_IntBoolFloatString::boolvalue
			bool ___boolvalue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___boolvalue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single FMOD.Studio.Union_IntBoolFloatString::floatvalue
			float ___floatvalue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatvalue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// FMOD.StringWrapper FMOD.Studio.Union_IntBoolFloatString::stringvalue
			StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  ___stringvalue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  ___stringvalue_3_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_intvalue_0() { return static_cast<int32_t>(offsetof(Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294, ___intvalue_0)); }
	inline int32_t get_intvalue_0() const { return ___intvalue_0; }
	inline int32_t* get_address_of_intvalue_0() { return &___intvalue_0; }
	inline void set_intvalue_0(int32_t value)
	{
		___intvalue_0 = value;
	}

	inline static int32_t get_offset_of_boolvalue_1() { return static_cast<int32_t>(offsetof(Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294, ___boolvalue_1)); }
	inline bool get_boolvalue_1() const { return ___boolvalue_1; }
	inline bool* get_address_of_boolvalue_1() { return &___boolvalue_1; }
	inline void set_boolvalue_1(bool value)
	{
		___boolvalue_1 = value;
	}

	inline static int32_t get_offset_of_floatvalue_2() { return static_cast<int32_t>(offsetof(Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294, ___floatvalue_2)); }
	inline float get_floatvalue_2() const { return ___floatvalue_2; }
	inline float* get_address_of_floatvalue_2() { return &___floatvalue_2; }
	inline void set_floatvalue_2(float value)
	{
		___floatvalue_2 = value;
	}

	inline static int32_t get_offset_of_stringvalue_3() { return static_cast<int32_t>(offsetof(Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294, ___stringvalue_3)); }
	inline StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  get_stringvalue_3() const { return ___stringvalue_3; }
	inline StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6 * get_address_of_stringvalue_3() { return &___stringvalue_3; }
	inline void set_stringvalue_3(StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  value)
	{
		___stringvalue_3 = value;
	}
};

// Native definition for P/Invoke marshalling of FMOD.Studio.Union_IntBoolFloatString
struct Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___intvalue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___intvalue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___boolvalue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___boolvalue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___floatvalue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatvalue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  ___stringvalue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  ___stringvalue_3_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of FMOD.Studio.Union_IntBoolFloatString
struct Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___intvalue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___intvalue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___boolvalue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___boolvalue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___floatvalue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatvalue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  ___stringvalue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  ___stringvalue_3_forAlignmentOnly;
		};
	};
};

// FMODUnity.VCANotFoundException
struct  VCANotFoundException_t7180AED40B600DC06C9AA6131683130085296AD6  : public Exception_t
{
public:
	// System.String FMODUnity.VCANotFoundException::Path
	String_t* ___Path_17;

public:
	inline static int32_t get_offset_of_Path_17() { return static_cast<int32_t>(offsetof(VCANotFoundException_t7180AED40B600DC06C9AA6131683130085296AD6, ___Path_17)); }
	inline String_t* get_Path_17() const { return ___Path_17; }
	inline String_t** get_address_of_Path_17() { return &___Path_17; }
	inline void set_Path_17(String_t* value)
	{
		___Path_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Path_17), (void*)value);
	}
};


// FMODUnity.Legacy/PlatformSettingBase
struct  PlatformSettingBase_t7FDEC6A3823A563621A087868AF56B54A7653B43  : public RuntimeObject
{
public:
	// FMODUnity.Legacy/Platform FMODUnity.Legacy/PlatformSettingBase::Platform
	int32_t ___Platform_0;

public:
	inline static int32_t get_offset_of_Platform_0() { return static_cast<int32_t>(offsetof(PlatformSettingBase_t7FDEC6A3823A563621A087868AF56B54A7653B43, ___Platform_0)); }
	inline int32_t get_Platform_0() const { return ___Platform_0; }
	inline int32_t* get_address_of_Platform_0() { return &___Platform_0; }
	inline void set_Platform_0(int32_t value)
	{
		___Platform_0 = value;
	}
};


// FMODUnity.RuntimeManager/<>c__DisplayClass31_0
struct  U3CU3Ec__DisplayClass31_0_t743089B7D9CD15662B23C72EFC50E6D5A0B88507  : public RuntimeObject
{
public:
	// FMOD.Studio.EventInstance FMODUnity.RuntimeManager/<>c__DisplayClass31_0::instance
	EventInstance_t77E43F521C3E42A51B553C95F04A518E03B7E2C8  ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass31_0_t743089B7D9CD15662B23C72EFC50E6D5A0B88507, ___instance_0)); }
	inline EventInstance_t77E43F521C3E42A51B553C95F04A518E03B7E2C8  get_instance_0() const { return ___instance_0; }
	inline EventInstance_t77E43F521C3E42A51B553C95F04A518E03B7E2C8 * get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(EventInstance_t77E43F521C3E42A51B553C95F04A518E03B7E2C8  value)
	{
		___instance_0 = value;
	}
};


// FMODUnity.RuntimeManager/<>c__DisplayClass32_0
struct  U3CU3Ec__DisplayClass32_0_t341FE52DD07C1796D32D9204F25D127B3ABC76AA  : public RuntimeObject
{
public:
	// FMOD.Studio.EventInstance FMODUnity.RuntimeManager/<>c__DisplayClass32_0::instance
	EventInstance_t77E43F521C3E42A51B553C95F04A518E03B7E2C8  ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass32_0_t341FE52DD07C1796D32D9204F25D127B3ABC76AA, ___instance_0)); }
	inline EventInstance_t77E43F521C3E42A51B553C95F04A518E03B7E2C8  get_instance_0() const { return ___instance_0; }
	inline EventInstance_t77E43F521C3E42A51B553C95F04A518E03B7E2C8 * get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(EventInstance_t77E43F521C3E42A51B553C95F04A518E03B7E2C8  value)
	{
		___instance_0 = value;
	}
};


// FMODUnity.RuntimeManager/AttachedInstance
struct  AttachedInstance_t532AE68813E2E569A0F6EA003247D7CEDC2C9ABD  : public RuntimeObject
{
public:
	// FMOD.Studio.EventInstance FMODUnity.RuntimeManager/AttachedInstance::instance
	EventInstance_t77E43F521C3E42A51B553C95F04A518E03B7E2C8  ___instance_0;
	// UnityEngine.Transform FMODUnity.RuntimeManager/AttachedInstance::transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_1;
	// UnityEngine.Rigidbody FMODUnity.RuntimeManager/AttachedInstance::rigidBody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rigidBody_2;
	// UnityEngine.Rigidbody2D FMODUnity.RuntimeManager/AttachedInstance::rigidBody2D
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rigidBody2D_3;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(AttachedInstance_t532AE68813E2E569A0F6EA003247D7CEDC2C9ABD, ___instance_0)); }
	inline EventInstance_t77E43F521C3E42A51B553C95F04A518E03B7E2C8  get_instance_0() const { return ___instance_0; }
	inline EventInstance_t77E43F521C3E42A51B553C95F04A518E03B7E2C8 * get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(EventInstance_t77E43F521C3E42A51B553C95F04A518E03B7E2C8  value)
	{
		___instance_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(AttachedInstance_t532AE68813E2E569A0F6EA003247D7CEDC2C9ABD, ___transform_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_transform_1() const { return ___transform_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___transform_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_1), (void*)value);
	}

	inline static int32_t get_offset_of_rigidBody_2() { return static_cast<int32_t>(offsetof(AttachedInstance_t532AE68813E2E569A0F6EA003247D7CEDC2C9ABD, ___rigidBody_2)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rigidBody_2() const { return ___rigidBody_2; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rigidBody_2() { return &___rigidBody_2; }
	inline void set_rigidBody_2(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rigidBody_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigidBody_2), (void*)value);
	}

	inline static int32_t get_offset_of_rigidBody2D_3() { return static_cast<int32_t>(offsetof(AttachedInstance_t532AE68813E2E569A0F6EA003247D7CEDC2C9ABD, ___rigidBody2D_3)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rigidBody2D_3() const { return ___rigidBody2D_3; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rigidBody2D_3() { return &___rigidBody2D_3; }
	inline void set_rigidBody2D_3(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rigidBody2D_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigidBody2D_3), (void*)value);
	}
};


// FMODUnity.RuntimeManager/LoadedBank
struct  LoadedBank_t6D47D05FE1FABC12D52CC630432DF1262C663926 
{
public:
	// FMOD.Studio.Bank FMODUnity.RuntimeManager/LoadedBank::Bank
	Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7  ___Bank_0;
	// System.Int32 FMODUnity.RuntimeManager/LoadedBank::RefCount
	int32_t ___RefCount_1;

public:
	inline static int32_t get_offset_of_Bank_0() { return static_cast<int32_t>(offsetof(LoadedBank_t6D47D05FE1FABC12D52CC630432DF1262C663926, ___Bank_0)); }
	inline Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7  get_Bank_0() const { return ___Bank_0; }
	inline Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * get_address_of_Bank_0() { return &___Bank_0; }
	inline void set_Bank_0(Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7  value)
	{
		___Bank_0 = value;
	}

	inline static int32_t get_offset_of_RefCount_1() { return static_cast<int32_t>(offsetof(LoadedBank_t6D47D05FE1FABC12D52CC630432DF1262C663926, ___RefCount_1)); }
	inline int32_t get_RefCount_1() const { return ___RefCount_1; }
	inline int32_t* get_address_of_RefCount_1() { return &___RefCount_1; }
	inline void set_RefCount_1(int32_t value)
	{
		___RefCount_1 = value;
	}
};


// System.Func`1<FMODUnity.Platform>
struct  Func_1_tD8217A517B81548153B648DD9D5285A3A78807D4  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<System.Collections.Generic.List`1<System.String>>>
struct  Func_2_t6CE4CF30CD70D39A2CB75A55B5B0E742D1C226F7  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<System.Int32>>
struct  Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<FMODUnity.PlatformCallbackHandler>>
struct  Func_2_t90D3EC3607DEE77133AB325243D70D3BF30481BE  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<FMOD.SPEAKERMODE>>
struct  Func_2_tCB94F642CEF6C6C7ECD6A1E2038D7EE45FE8E8E5  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<System.String>>
struct  Func_2_t45BDF03ABB29FE835EF6F6CA3ABD009BAB9995AF  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<FMODUnity.TriStateBool>>
struct  Func_2_tA49219E9EC3C0B2E9A55DEFD7CAD14C1121311C7  : public MulticastDelegate_t
{
public:

public:
};


// FMODUnity.Legacy/PlatformSetting`1<System.Int32>
struct  PlatformSetting_1_tF1F2D113743AE5690D9B0A53C4E5F73E58B88DD8  : public PlatformSettingBase_t7FDEC6A3823A563621A087868AF56B54A7653B43
{
public:
	// T FMODUnity.Legacy/PlatformSetting`1::Value
	int32_t ___Value_1;

public:
	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(PlatformSetting_1_tF1F2D113743AE5690D9B0A53C4E5F73E58B88DD8, ___Value_1)); }
	inline int32_t get_Value_1() const { return ___Value_1; }
	inline int32_t* get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(int32_t value)
	{
		___Value_1 = value;
	}
};


// FMODUnity.Legacy/PlatformSetting`1<System.String>
struct  PlatformSetting_1_tC0C6354C9D7B615166E2AD41980014E4939DC657  : public PlatformSettingBase_t7FDEC6A3823A563621A087868AF56B54A7653B43
{
public:
	// T FMODUnity.Legacy/PlatformSetting`1::Value
	String_t* ___Value_1;

public:
	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(PlatformSetting_1_tC0C6354C9D7B615166E2AD41980014E4939DC657, ___Value_1)); }
	inline String_t* get_Value_1() const { return ___Value_1; }
	inline String_t** get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(String_t* value)
	{
		___Value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_1), (void*)value);
	}
};


// FMODUnity.Legacy/PlatformSetting`1<FMODUnity.TriStateBool>
struct  PlatformSetting_1_t488F3DFFD01BDD40FEF7B22BBE680BDF95A3E7F4  : public PlatformSettingBase_t7FDEC6A3823A563621A087868AF56B54A7653B43
{
public:
	// T FMODUnity.Legacy/PlatformSetting`1::Value
	int32_t ___Value_1;

public:
	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(PlatformSetting_1_t488F3DFFD01BDD40FEF7B22BBE680BDF95A3E7F4, ___Value_1)); }
	inline int32_t get_Value_1() const { return ___Value_1; }
	inline int32_t* get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(int32_t value)
	{
		___Value_1 = value;
	}
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// FMODUnity.Platform
struct  Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String FMODUnity.Platform::identifier
	String_t* ___identifier_4;
	// System.String FMODUnity.Platform::parentIdentifier
	String_t* ___parentIdentifier_7;
	// System.Single FMODUnity.Platform::displaySortOrder
	float ___displaySortOrder_8;
	// System.Boolean FMODUnity.Platform::active
	bool ___active_9;
	// FMODUnity.Platform/PropertyStorage FMODUnity.Platform::Properties
	PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * ___Properties_10;
	// FMODUnity.Platform FMODUnity.Platform::parent
	Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149 * ___parent_11;
	// System.Collections.Generic.List`1<FMODUnity.Platform> FMODUnity.Platform::children
	List_1_t30C5C74A88EB27074756CC9A8D77BA03AC132112 * ___children_12;
	// System.String FMODUnity.Platform::outputType
	String_t* ___outputType_13;
	// FMODUnity.Platform/PropertyThreadAffinityList FMODUnity.Platform::threadAffinities
	PropertyThreadAffinityList_tE480BD2634070CFF10C439920F759371BDEA1AD2 * ___threadAffinities_15;

public:
	inline static int32_t get_offset_of_identifier_4() { return static_cast<int32_t>(offsetof(Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149, ___identifier_4)); }
	inline String_t* get_identifier_4() const { return ___identifier_4; }
	inline String_t** get_address_of_identifier_4() { return &___identifier_4; }
	inline void set_identifier_4(String_t* value)
	{
		___identifier_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___identifier_4), (void*)value);
	}

	inline static int32_t get_offset_of_parentIdentifier_7() { return static_cast<int32_t>(offsetof(Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149, ___parentIdentifier_7)); }
	inline String_t* get_parentIdentifier_7() const { return ___parentIdentifier_7; }
	inline String_t** get_address_of_parentIdentifier_7() { return &___parentIdentifier_7; }
	inline void set_parentIdentifier_7(String_t* value)
	{
		___parentIdentifier_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentIdentifier_7), (void*)value);
	}

	inline static int32_t get_offset_of_displaySortOrder_8() { return static_cast<int32_t>(offsetof(Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149, ___displaySortOrder_8)); }
	inline float get_displaySortOrder_8() const { return ___displaySortOrder_8; }
	inline float* get_address_of_displaySortOrder_8() { return &___displaySortOrder_8; }
	inline void set_displaySortOrder_8(float value)
	{
		___displaySortOrder_8 = value;
	}

	inline static int32_t get_offset_of_active_9() { return static_cast<int32_t>(offsetof(Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149, ___active_9)); }
	inline bool get_active_9() const { return ___active_9; }
	inline bool* get_address_of_active_9() { return &___active_9; }
	inline void set_active_9(bool value)
	{
		___active_9 = value;
	}

	inline static int32_t get_offset_of_Properties_10() { return static_cast<int32_t>(offsetof(Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149, ___Properties_10)); }
	inline PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * get_Properties_10() const { return ___Properties_10; }
	inline PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 ** get_address_of_Properties_10() { return &___Properties_10; }
	inline void set_Properties_10(PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * value)
	{
		___Properties_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Properties_10), (void*)value);
	}

	inline static int32_t get_offset_of_parent_11() { return static_cast<int32_t>(offsetof(Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149, ___parent_11)); }
	inline Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149 * get_parent_11() const { return ___parent_11; }
	inline Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149 ** get_address_of_parent_11() { return &___parent_11; }
	inline void set_parent_11(Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149 * value)
	{
		___parent_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_11), (void*)value);
	}

	inline static int32_t get_offset_of_children_12() { return static_cast<int32_t>(offsetof(Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149, ___children_12)); }
	inline List_1_t30C5C74A88EB27074756CC9A8D77BA03AC132112 * get_children_12() const { return ___children_12; }
	inline List_1_t30C5C74A88EB27074756CC9A8D77BA03AC132112 ** get_address_of_children_12() { return &___children_12; }
	inline void set_children_12(List_1_t30C5C74A88EB27074756CC9A8D77BA03AC132112 * value)
	{
		___children_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___children_12), (void*)value);
	}

	inline static int32_t get_offset_of_outputType_13() { return static_cast<int32_t>(offsetof(Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149, ___outputType_13)); }
	inline String_t* get_outputType_13() const { return ___outputType_13; }
	inline String_t** get_address_of_outputType_13() { return &___outputType_13; }
	inline void set_outputType_13(String_t* value)
	{
		___outputType_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputType_13), (void*)value);
	}

	inline static int32_t get_offset_of_threadAffinities_15() { return static_cast<int32_t>(offsetof(Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149, ___threadAffinities_15)); }
	inline PropertyThreadAffinityList_tE480BD2634070CFF10C439920F759371BDEA1AD2 * get_threadAffinities_15() const { return ___threadAffinities_15; }
	inline PropertyThreadAffinityList_tE480BD2634070CFF10C439920F759371BDEA1AD2 ** get_address_of_threadAffinities_15() { return &___threadAffinities_15; }
	inline void set_threadAffinities_15(PropertyThreadAffinityList_tE480BD2634070CFF10C439920F759371BDEA1AD2 * value)
	{
		___threadAffinities_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threadAffinities_15), (void*)value);
	}
};

struct Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149_StaticFields
{
public:
	// System.Collections.Generic.List`1<FMODUnity.ThreadAffinityGroup> FMODUnity.Platform::StaticThreadAffinities
	List_1_t6A9721DF480D61EC7CBFF953BF82265F2FF975B4 * ___StaticThreadAffinities_14;

public:
	inline static int32_t get_offset_of_StaticThreadAffinities_14() { return static_cast<int32_t>(offsetof(Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149_StaticFields, ___StaticThreadAffinities_14)); }
	inline List_1_t6A9721DF480D61EC7CBFF953BF82265F2FF975B4 * get_StaticThreadAffinities_14() const { return ___StaticThreadAffinities_14; }
	inline List_1_t6A9721DF480D61EC7CBFF953BF82265F2FF975B4 ** get_address_of_StaticThreadAffinities_14() { return &___StaticThreadAffinities_14; }
	inline void set_StaticThreadAffinities_14(List_1_t6A9721DF480D61EC7CBFF953BF82265F2FF975B4 * value)
	{
		___StaticThreadAffinities_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StaticThreadAffinities_14), (void*)value);
	}
};


// FMODUnity.PlatformCallbackHandler
struct  PlatformCallbackHandler_tC97A12E9191ED7EE208965B8DF447CA520F3EE51  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// FMOD.Studio.SOUND_INFO
struct  SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21 
{
public:
	// System.IntPtr FMOD.Studio.SOUND_INFO::name_or_data
	intptr_t ___name_or_data_0;
	// FMOD.MODE FMOD.Studio.SOUND_INFO::mode
	uint32_t ___mode_1;
	// FMOD.CREATESOUNDEXINFO FMOD.Studio.SOUND_INFO::exinfo
	CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B  ___exinfo_2;
	// System.Int32 FMOD.Studio.SOUND_INFO::subsoundindex
	int32_t ___subsoundindex_3;

public:
	inline static int32_t get_offset_of_name_or_data_0() { return static_cast<int32_t>(offsetof(SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21, ___name_or_data_0)); }
	inline intptr_t get_name_or_data_0() const { return ___name_or_data_0; }
	inline intptr_t* get_address_of_name_or_data_0() { return &___name_or_data_0; }
	inline void set_name_or_data_0(intptr_t value)
	{
		___name_or_data_0 = value;
	}

	inline static int32_t get_offset_of_mode_1() { return static_cast<int32_t>(offsetof(SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21, ___mode_1)); }
	inline uint32_t get_mode_1() const { return ___mode_1; }
	inline uint32_t* get_address_of_mode_1() { return &___mode_1; }
	inline void set_mode_1(uint32_t value)
	{
		___mode_1 = value;
	}

	inline static int32_t get_offset_of_exinfo_2() { return static_cast<int32_t>(offsetof(SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21, ___exinfo_2)); }
	inline CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B  get_exinfo_2() const { return ___exinfo_2; }
	inline CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B * get_address_of_exinfo_2() { return &___exinfo_2; }
	inline void set_exinfo_2(CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B  value)
	{
		___exinfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___exinfo_2))->___pcmreadcallback_11), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___exinfo_2))->___pcmsetposcallback_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___exinfo_2))->___nonblockcallback_13), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___exinfo_2))->___fileuseropen_19), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___exinfo_2))->___fileuserclose_20), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___exinfo_2))->___fileuserread_21), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___exinfo_2))->___fileuserseek_22), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___exinfo_2))->___fileuserasyncread_23), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___exinfo_2))->___fileuserasynccancel_24), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_subsoundindex_3() { return static_cast<int32_t>(offsetof(SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21, ___subsoundindex_3)); }
	inline int32_t get_subsoundindex_3() const { return ___subsoundindex_3; }
	inline int32_t* get_address_of_subsoundindex_3() { return &___subsoundindex_3; }
	inline void set_subsoundindex_3(int32_t value)
	{
		___subsoundindex_3 = value;
	}
};

// Native definition for P/Invoke marshalling of FMOD.Studio.SOUND_INFO
struct SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21_marshaled_pinvoke
{
	intptr_t ___name_or_data_0;
	uint32_t ___mode_1;
	CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B_marshaled_pinvoke ___exinfo_2;
	int32_t ___subsoundindex_3;
};
// Native definition for COM marshalling of FMOD.Studio.SOUND_INFO
struct SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21_marshaled_com
{
	intptr_t ___name_or_data_0;
	uint32_t ___mode_1;
	CREATESOUNDEXINFO_tDE10AF838AC992F2A8D839C090C26B57F3A1279B_marshaled_com ___exinfo_2;
	int32_t ___subsoundindex_3;
};

// FMOD.Studio.SYSTEM_CALLBACK
struct  SYSTEM_CALLBACK_tAC95078FE937EE93C1AD6CA0DD09DB016BBA843C  : public MulticastDelegate_t
{
public:

public:
};


// FMOD.Studio.USER_PROPERTY
struct  USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1 
{
public:
	// FMOD.StringWrapper FMOD.Studio.USER_PROPERTY::name
	StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  ___name_0;
	// FMOD.Studio.USER_PROPERTY_TYPE FMOD.Studio.USER_PROPERTY::type
	int32_t ___type_1;
	// FMOD.Studio.Union_IntBoolFloatString FMOD.Studio.USER_PROPERTY::value
	Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294  ___value_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1, ___name_0)); }
	inline StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  get_name_0() const { return ___name_0; }
	inline StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6 * get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  value)
	{
		___name_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1, ___value_2)); }
	inline Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294  get_value_2() const { return ___value_2; }
	inline Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294 * get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294  value)
	{
		___value_2 = value;
	}
};

// Native definition for P/Invoke marshalling of FMOD.Studio.USER_PROPERTY
struct USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1_marshaled_pinvoke
{
	StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  ___name_0;
	int32_t ___type_1;
	Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshaled_pinvoke ___value_2;
};
// Native definition for COM marshalling of FMOD.Studio.USER_PROPERTY
struct USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1_marshaled_com
{
	StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  ___name_0;
	int32_t ___type_1;
	Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshaled_com ___value_2;
};

// FMODUnity.Platform/PropertyAccessors
struct  PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB  : public RuntimeObject
{
public:

public:
};

struct PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields
{
public:
	// FMODUnity.Platform/PropertyAccessor`1<FMODUnity.TriStateBool> FMODUnity.Platform/PropertyAccessors::LiveUpdate
	PropertyAccessor_1_t96321CC9404BDDA3C50DC400A87A60AC9EEE87A9  ___LiveUpdate_0;
	// FMODUnity.Platform/PropertyAccessor`1<System.Int32> FMODUnity.Platform/PropertyAccessors::LiveUpdatePort
	PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  ___LiveUpdatePort_1;
	// FMODUnity.Platform/PropertyAccessor`1<FMODUnity.TriStateBool> FMODUnity.Platform/PropertyAccessors::Overlay
	PropertyAccessor_1_t96321CC9404BDDA3C50DC400A87A60AC9EEE87A9  ___Overlay_2;
	// FMODUnity.Platform/PropertyAccessor`1<FMODUnity.TriStateBool> FMODUnity.Platform/PropertyAccessors::Logging
	PropertyAccessor_1_t96321CC9404BDDA3C50DC400A87A60AC9EEE87A9  ___Logging_3;
	// FMODUnity.Platform/PropertyAccessor`1<System.Int32> FMODUnity.Platform/PropertyAccessors::SampleRate
	PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  ___SampleRate_4;
	// FMODUnity.Platform/PropertyAccessor`1<System.String> FMODUnity.Platform/PropertyAccessors::BuildDirectory
	PropertyAccessor_1_t1968EAF8A354C79829234FCD558C156A8B4280C7  ___BuildDirectory_5;
	// FMODUnity.Platform/PropertyAccessor`1<FMOD.SPEAKERMODE> FMODUnity.Platform/PropertyAccessors::SpeakerMode
	PropertyAccessor_1_tFFFFA4523004CF950187CE99473C24DEF92A7375  ___SpeakerMode_6;
	// FMODUnity.Platform/PropertyAccessor`1<System.Int32> FMODUnity.Platform/PropertyAccessors::VirtualChannelCount
	PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  ___VirtualChannelCount_7;
	// FMODUnity.Platform/PropertyAccessor`1<System.Int32> FMODUnity.Platform/PropertyAccessors::RealChannelCount
	PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  ___RealChannelCount_8;
	// FMODUnity.Platform/PropertyAccessor`1<System.Int32> FMODUnity.Platform/PropertyAccessors::DSPBufferLength
	PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  ___DSPBufferLength_9;
	// FMODUnity.Platform/PropertyAccessor`1<System.Int32> FMODUnity.Platform/PropertyAccessors::DSPBufferCount
	PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  ___DSPBufferCount_10;
	// FMODUnity.Platform/PropertyAccessor`1<System.Collections.Generic.List`1<System.String>> FMODUnity.Platform/PropertyAccessors::Plugins
	PropertyAccessor_1_t15B7F2DF654FDDC891E7169F661426D3BAECEC83  ___Plugins_11;
	// FMODUnity.Platform/PropertyAccessor`1<System.Collections.Generic.List`1<System.String>> FMODUnity.Platform/PropertyAccessors::StaticPlugins
	PropertyAccessor_1_t15B7F2DF654FDDC891E7169F661426D3BAECEC83  ___StaticPlugins_12;
	// FMODUnity.Platform/PropertyAccessor`1<FMODUnity.PlatformCallbackHandler> FMODUnity.Platform/PropertyAccessors::CallbackHandler
	PropertyAccessor_1_t3C8A958245F3CC9B3C19B07ACE22016929868EB0  ___CallbackHandler_13;

public:
	inline static int32_t get_offset_of_LiveUpdate_0() { return static_cast<int32_t>(offsetof(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields, ___LiveUpdate_0)); }
	inline PropertyAccessor_1_t96321CC9404BDDA3C50DC400A87A60AC9EEE87A9  get_LiveUpdate_0() const { return ___LiveUpdate_0; }
	inline PropertyAccessor_1_t96321CC9404BDDA3C50DC400A87A60AC9EEE87A9 * get_address_of_LiveUpdate_0() { return &___LiveUpdate_0; }
	inline void set_LiveUpdate_0(PropertyAccessor_1_t96321CC9404BDDA3C50DC400A87A60AC9EEE87A9  value)
	{
		___LiveUpdate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___LiveUpdate_0))->___Getter_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_LiveUpdatePort_1() { return static_cast<int32_t>(offsetof(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields, ___LiveUpdatePort_1)); }
	inline PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  get_LiveUpdatePort_1() const { return ___LiveUpdatePort_1; }
	inline PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5 * get_address_of_LiveUpdatePort_1() { return &___LiveUpdatePort_1; }
	inline void set_LiveUpdatePort_1(PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  value)
	{
		___LiveUpdatePort_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___LiveUpdatePort_1))->___Getter_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_Overlay_2() { return static_cast<int32_t>(offsetof(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields, ___Overlay_2)); }
	inline PropertyAccessor_1_t96321CC9404BDDA3C50DC400A87A60AC9EEE87A9  get_Overlay_2() const { return ___Overlay_2; }
	inline PropertyAccessor_1_t96321CC9404BDDA3C50DC400A87A60AC9EEE87A9 * get_address_of_Overlay_2() { return &___Overlay_2; }
	inline void set_Overlay_2(PropertyAccessor_1_t96321CC9404BDDA3C50DC400A87A60AC9EEE87A9  value)
	{
		___Overlay_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Overlay_2))->___Getter_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_Logging_3() { return static_cast<int32_t>(offsetof(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields, ___Logging_3)); }
	inline PropertyAccessor_1_t96321CC9404BDDA3C50DC400A87A60AC9EEE87A9  get_Logging_3() const { return ___Logging_3; }
	inline PropertyAccessor_1_t96321CC9404BDDA3C50DC400A87A60AC9EEE87A9 * get_address_of_Logging_3() { return &___Logging_3; }
	inline void set_Logging_3(PropertyAccessor_1_t96321CC9404BDDA3C50DC400A87A60AC9EEE87A9  value)
	{
		___Logging_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Logging_3))->___Getter_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_SampleRate_4() { return static_cast<int32_t>(offsetof(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields, ___SampleRate_4)); }
	inline PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  get_SampleRate_4() const { return ___SampleRate_4; }
	inline PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5 * get_address_of_SampleRate_4() { return &___SampleRate_4; }
	inline void set_SampleRate_4(PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  value)
	{
		___SampleRate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___SampleRate_4))->___Getter_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_BuildDirectory_5() { return static_cast<int32_t>(offsetof(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields, ___BuildDirectory_5)); }
	inline PropertyAccessor_1_t1968EAF8A354C79829234FCD558C156A8B4280C7  get_BuildDirectory_5() const { return ___BuildDirectory_5; }
	inline PropertyAccessor_1_t1968EAF8A354C79829234FCD558C156A8B4280C7 * get_address_of_BuildDirectory_5() { return &___BuildDirectory_5; }
	inline void set_BuildDirectory_5(PropertyAccessor_1_t1968EAF8A354C79829234FCD558C156A8B4280C7  value)
	{
		___BuildDirectory_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___BuildDirectory_5))->___Getter_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___BuildDirectory_5))->___DefaultValue_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_SpeakerMode_6() { return static_cast<int32_t>(offsetof(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields, ___SpeakerMode_6)); }
	inline PropertyAccessor_1_tFFFFA4523004CF950187CE99473C24DEF92A7375  get_SpeakerMode_6() const { return ___SpeakerMode_6; }
	inline PropertyAccessor_1_tFFFFA4523004CF950187CE99473C24DEF92A7375 * get_address_of_SpeakerMode_6() { return &___SpeakerMode_6; }
	inline void set_SpeakerMode_6(PropertyAccessor_1_tFFFFA4523004CF950187CE99473C24DEF92A7375  value)
	{
		___SpeakerMode_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___SpeakerMode_6))->___Getter_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_VirtualChannelCount_7() { return static_cast<int32_t>(offsetof(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields, ___VirtualChannelCount_7)); }
	inline PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  get_VirtualChannelCount_7() const { return ___VirtualChannelCount_7; }
	inline PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5 * get_address_of_VirtualChannelCount_7() { return &___VirtualChannelCount_7; }
	inline void set_VirtualChannelCount_7(PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  value)
	{
		___VirtualChannelCount_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___VirtualChannelCount_7))->___Getter_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_RealChannelCount_8() { return static_cast<int32_t>(offsetof(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields, ___RealChannelCount_8)); }
	inline PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  get_RealChannelCount_8() const { return ___RealChannelCount_8; }
	inline PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5 * get_address_of_RealChannelCount_8() { return &___RealChannelCount_8; }
	inline void set_RealChannelCount_8(PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  value)
	{
		___RealChannelCount_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___RealChannelCount_8))->___Getter_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_DSPBufferLength_9() { return static_cast<int32_t>(offsetof(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields, ___DSPBufferLength_9)); }
	inline PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  get_DSPBufferLength_9() const { return ___DSPBufferLength_9; }
	inline PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5 * get_address_of_DSPBufferLength_9() { return &___DSPBufferLength_9; }
	inline void set_DSPBufferLength_9(PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  value)
	{
		___DSPBufferLength_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___DSPBufferLength_9))->___Getter_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_DSPBufferCount_10() { return static_cast<int32_t>(offsetof(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields, ___DSPBufferCount_10)); }
	inline PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  get_DSPBufferCount_10() const { return ___DSPBufferCount_10; }
	inline PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5 * get_address_of_DSPBufferCount_10() { return &___DSPBufferCount_10; }
	inline void set_DSPBufferCount_10(PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  value)
	{
		___DSPBufferCount_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___DSPBufferCount_10))->___Getter_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_Plugins_11() { return static_cast<int32_t>(offsetof(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields, ___Plugins_11)); }
	inline PropertyAccessor_1_t15B7F2DF654FDDC891E7169F661426D3BAECEC83  get_Plugins_11() const { return ___Plugins_11; }
	inline PropertyAccessor_1_t15B7F2DF654FDDC891E7169F661426D3BAECEC83 * get_address_of_Plugins_11() { return &___Plugins_11; }
	inline void set_Plugins_11(PropertyAccessor_1_t15B7F2DF654FDDC891E7169F661426D3BAECEC83  value)
	{
		___Plugins_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Plugins_11))->___Getter_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Plugins_11))->___DefaultValue_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_StaticPlugins_12() { return static_cast<int32_t>(offsetof(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields, ___StaticPlugins_12)); }
	inline PropertyAccessor_1_t15B7F2DF654FDDC891E7169F661426D3BAECEC83  get_StaticPlugins_12() const { return ___StaticPlugins_12; }
	inline PropertyAccessor_1_t15B7F2DF654FDDC891E7169F661426D3BAECEC83 * get_address_of_StaticPlugins_12() { return &___StaticPlugins_12; }
	inline void set_StaticPlugins_12(PropertyAccessor_1_t15B7F2DF654FDDC891E7169F661426D3BAECEC83  value)
	{
		___StaticPlugins_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___StaticPlugins_12))->___Getter_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___StaticPlugins_12))->___DefaultValue_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_CallbackHandler_13() { return static_cast<int32_t>(offsetof(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields, ___CallbackHandler_13)); }
	inline PropertyAccessor_1_t3C8A958245F3CC9B3C19B07ACE22016929868EB0  get_CallbackHandler_13() const { return ___CallbackHandler_13; }
	inline PropertyAccessor_1_t3C8A958245F3CC9B3C19B07ACE22016929868EB0 * get_address_of_CallbackHandler_13() { return &___CallbackHandler_13; }
	inline void set_CallbackHandler_13(PropertyAccessor_1_t3C8A958245F3CC9B3C19B07ACE22016929868EB0  value)
	{
		___CallbackHandler_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___CallbackHandler_13))->___Getter_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___CallbackHandler_13))->___DefaultValue_1), (void*)NULL);
		#endif
	}
};


// FMODUnity.Platform/PropertyBool
struct  PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169  : public Property_1_tB4DC4D8A4B1A7885B188EF3DFCDA5F0FC8965C97
{
public:

public:
};


// FMODUnity.Platform/PropertySpeakerMode
struct  PropertySpeakerMode_tF3E57F3B6A469063306C480AD774C57ABB010CEF  : public Property_1_tB7992A7FE9E273F12B5AD18F27A64E5FE522A31E
{
public:

public:
};


// FMODUnity.PlatformDefault
struct  PlatformDefault_tDCBF760189750C7A6A4423F691E90C7C630FE695  : public Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149
{
public:

public:
};


// FMODUnity.PlatformPlayInEditor
struct  PlatformPlayInEditor_t3D26345BC831A559DCBA74716780060FE12EDDFA  : public Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149
{
public:

public:
};


// FMODUnity.Legacy/PlatformBoolSetting
struct  PlatformBoolSetting_t2E22BFCAF1E3F64C00B56A090BE84DFBBE2BA479  : public PlatformSetting_1_t488F3DFFD01BDD40FEF7B22BBE680BDF95A3E7F4
{
public:

public:
};


// FMODUnity.Legacy/PlatformIntSetting
struct  PlatformIntSetting_t9864FB4E1B651288FBC26FB386A06161EBBE30D3  : public PlatformSetting_1_tF1F2D113743AE5690D9B0A53C4E5F73E58B88DD8
{
public:

public:
};


// FMODUnity.Legacy/PlatformStringSetting
struct  PlatformStringSetting_t7610A0760778513396EEE9FCB60D43F202BAE4C8  : public PlatformSetting_1_tC0C6354C9D7B615166E2AD41980014E4939DC657
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// FMOD.Studio.PARAMETER_ID[]
struct PARAMETER_IDU5BU5D_tBF176CF014283DCED4159FBAE8605A11C6F2B373  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  m_Items[1];

public:
	inline PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
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
// FMOD.Studio.Bank[]
struct BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7  m_Items[1];

public:
	inline Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7  value)
	{
		m_Items[index] = value;
	}
};
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) intptr_t m_Items[1];

public:
	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
// FMOD.Studio.PARAMETER_DESCRIPTION[]
struct PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B  m_Items[1];

public:
	inline PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B  value)
	{
		m_Items[index] = value;
	}
};
// FMODUnity.ThreadType[]
struct ThreadTypeU5BU5D_t2243EF3BF541EC7639D75AC642761856CF0D28BB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
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

IL2CPP_EXTERN_C void SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21_marshal_pinvoke(const SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21& unmarshaled, SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21_marshal_pinvoke_back(const SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21_marshaled_pinvoke& marshaled, SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21& unmarshaled);
IL2CPP_EXTERN_C void SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21_marshal_pinvoke_cleanup(SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_marshal_pinvoke(const BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A& unmarshaled, BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_marshal_pinvoke_back(const BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_marshaled_pinvoke& marshaled, BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A& unmarshaled);
IL2CPP_EXTERN_C void BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_marshal_pinvoke_cleanup(BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshal_pinvoke(const Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294& unmarshaled, Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshal_pinvoke_back(const Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshaled_pinvoke& marshaled, Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294& unmarshaled);
IL2CPP_EXTERN_C void Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshal_pinvoke_cleanup(Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshal_com(const Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294& unmarshaled, Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshal_com_back(const Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshaled_com& marshaled, Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294& unmarshaled);
IL2CPP_EXTERN_C void Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshal_com_cleanup(Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshaled_com& marshaled);

// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<FMOD.Studio.BANK_INFO>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisBANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_m86AE3CC308518A9BF37DCA60BBA0AD0FE683E9DA_gshared (BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A  ___structure0, const RuntimeMethod* method);
// System.Void System.Array::Resize<FMOD.Studio.PARAMETER_DESCRIPTION>(!!0[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisPARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B_m4280AD0E10D4EA3CCA07CF96AED06A1723342C42_gshared (PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5** ___array0, int32_t ___newSize1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF1D0377D81949B2ADB6104D9994F7CEE1A1E5040_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m830211DD718E293368011CCC55CAF00EC7CBF921_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void FMODUnity.Legacy/PlatformSetting`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformSetting_1__ctor_m7FC5D32824E60C5555BE88338D80D92054353220_gshared (PlatformSetting_1_tE51D3E0036FF3A6FA334D7296D74F55B569E2227 * __this, const RuntimeMethod* method);
// System.Void FMODUnity.Legacy/PlatformSetting`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformSetting_1__ctor_m1C7A8752D41E64C1743BA8DE099AA3AAE0784F5A_gshared (PlatformSetting_1_tF1F2D113743AE5690D9B0A53C4E5F73E58B88DD8 * __this, const RuntimeMethod* method);
// System.Void FMODUnity.Legacy/PlatformSetting`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformSetting_1__ctor_m66EDCBDA313D9916ADD4CC51A1341B78E5052D17_gshared (PlatformSetting_1_tB64831A2595CA13E480EFD492D0324ADDD5FFA00 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void FMODUnity.Platform/PropertyAccessor`1<System.Int32Enum>::.ctor(System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<T>>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessor_1__ctor_m6558ACE1EC6D45B848AE8C3D1C857557DF03B48F_gshared (PropertyAccessor_1_tE6A94B0BB78BE5CFB7972AF6AE68A71D21D1DEB0 * __this, Func_2_t6FC8FB1B78710D8F435EFF2410DBEECBC31455AF * ___getter0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.Void FMODUnity.Platform/PropertyAccessor`1<System.Int32>::.ctor(System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<T>>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessor_1__ctor_mA3732FA4712BD8D1BCAF3ED04FAC2A6DD33E9060_gshared (PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5 * __this, Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87 * ___getter0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.Void FMODUnity.Platform/PropertyAccessor`1<System.Object>::.ctor(System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<T>>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessor_1__ctor_m9851572DC88912DA6527EC679ACB237960A061C5_gshared (PropertyAccessor_1_tF61529BB5BCA5CE6A8A0C45D3438CC9665270433 * __this, Func_2_tDE08512362C8A67B45374C3DD3AC327519BD484A * ___getter0, RuntimeObject * ___defaultValue1, const RuntimeMethod* method);
// System.Void FMODUnity.Platform/Property`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_1__ctor_mB099BCF0F0B6FF30164F68848B372CE67BC31D5D_gshared (Property_1_t15AE9CA6BB9975C4E47F4C44D7704F0E2E71FCCF * __this, const RuntimeMethod* method);
// System.Void FMODUnity.Platform/Property`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_1__ctor_m7CDAC89E172F59812B604B4710A5A89D3523DF43_gshared (Property_1_tFFAC20918771F99B47C42E4C8881EA58F86742AF * __this, const RuntimeMethod* method);
// System.Void FMODUnity.Platform/Property`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_1__ctor_mF85F2D93388A82EC6A9743737CA3FCF5308A5464_gshared (Property_1_tB69257AE89C1BAE96A39B56ECAA943FF1F44411F * __this, const RuntimeMethod* method);

// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_Create(System.IntPtr&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_Create_m875F59BB313051076C4A106174F5BE2C081CCF3E (intptr_t* ___system0, uint32_t ___headerversion1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_m5482D50095CD4ECFFE66778DDAB9173AD834E85A (Type_t * ___t0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_SetAdvancedSettings(System.IntPtr,FMOD.Studio.ADVANCEDSETTINGS&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_SetAdvancedSettings_mB547FE588A152BDB9488BC4E146C7203E2016263 (intptr_t ___system0, ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166 * ___settings1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::setAdvancedSettings(FMOD.Studio.ADVANCEDSETTINGS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_setAdvancedSettings_m3F7C95F259E0C86D3C3556E60915836E67A84FE8 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166  ___settings0, const RuntimeMethod* method);
// FMOD.StringHelper/ThreadSafeEncoding FMOD.StringHelper::GetFreeHelper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * StringHelper_GetFreeHelper_m8E145BDAC33B7FB10BBF4A21F2FB8CA431019977 (const RuntimeMethod* method);
// System.IntPtr FMOD.StringHelper/ThreadSafeEncoding::intptrFromStringUTF8(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ThreadSafeEncoding_intptrFromStringUTF8_m696A338AABE8077540283139A745C1187E4EF9DD (ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * __this, String_t* ___s0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::setAdvancedSettings(FMOD.Studio.ADVANCEDSETTINGS,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_setAdvancedSettings_m1E6FC5B36EBAC7402183EDB9603A7C5C097708A5 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166  ___settings0, String_t* ___encryptionKey1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetAdvancedSettings(System.IntPtr,FMOD.Studio.ADVANCEDSETTINGS&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetAdvancedSettings_m50C48E518897870D8060A2DBD69D9E5B0012402B (intptr_t ___system0, ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166 * ___settings1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getAdvancedSettings(FMOD.Studio.ADVANCEDSETTINGS&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getAdvancedSettings_m5345CE64ED5B998FA0BB59025AE6EDD88415126E (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166 * ___settings0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_Initialize(System.IntPtr,System.Int32,FMOD.Studio.INITFLAGS,FMOD.INITFLAGS,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_Initialize_m69CAC5B15B9BF6E42F1A6B70ED3F499954C6A60C (intptr_t ___system0, int32_t ___maxchannels1, uint32_t ___studioflags2, uint32_t ___flags3, intptr_t ___extradriverdata4, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::initialize(System.Int32,FMOD.Studio.INITFLAGS,FMOD.INITFLAGS,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_initialize_m066BBC9977DD2D57ED75601FA9611BF5A27157DC (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t ___maxchannels0, uint32_t ___studioflags1, uint32_t ___flags2, intptr_t ___extradriverdata3, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_Release_m5C2605A1DC98DE3EFB0F86E6F166773B3BA468C2 (intptr_t ___system0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_release_mB9653E6FC80F89C89A16E02005DDE02449DC80DF (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_Update(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_Update_m3995196EB5F71DB619B900DE9DCEE41857B52EB8 (intptr_t ___system0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_update_m398AD04EE5D4DD3CC8A01AF3BAF2355CFF31A82B (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetCoreSystem(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetCoreSystem_m509D8325373161C34929AA61DCD90E1DFBDBF004 (intptr_t ___system0, intptr_t* ___coresystem1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getCoreSystem(FMOD.System&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getCoreSystem_mB44AD2F59984031C59CB073ABEEB2248C4851DDC (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, System_t9B8A23CA218F79F4E360B186DF4BFCF9E035D34B * ___coresystem0, const RuntimeMethod* method);
// System.Byte[] FMOD.StringHelper/ThreadSafeEncoding::byteFromStringUTF8(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ThreadSafeEncoding_byteFromStringUTF8_m125AE74374BC84CA626377F9CF7FDF6DF0D1E24E (ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * __this, String_t* ___s0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetEvent(System.IntPtr,System.Byte[],System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetEvent_mA7BB5F1EE9EF0ACB3C807514BF9F41EA14E4DFAC (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___path1, intptr_t* ____event2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getEvent(System.String,FMOD.Studio.EventDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getEvent_mAD72F0F4145F38E37FC8F5F92BDB90074A43BD24 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___path0, EventDescription_tA7B5CD79AFB0B96E61BEB585B591EACF17319F5D * ____event1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetBus(System.IntPtr,System.Byte[],System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetBus_m0A1BE34C7ED27045D34F695A2BC26C7CCB983BDF (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___path1, intptr_t* ___bus2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getBus(System.String,FMOD.Studio.Bus&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getBus_mB36901E087D9AD25E41111E0AC439B3B128ADAB4 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___path0, Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520 * ___bus1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetVCA(System.IntPtr,System.Byte[],System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetVCA_m968EB6714D6BEB56EA81138A80E068FD6D00B4E6 (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___path1, intptr_t* ___vca2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getVCA(System.String,FMOD.Studio.VCA&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getVCA_mDED596B4B36CEF26E7A42CA71519F5BE2FCB0EE4 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___path0, VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * ___vca1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetBank(System.IntPtr,System.Byte[],System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetBank_m8AF075ED1DF2FA199EE1E6C736A572870EC294BD (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___path1, intptr_t* ___bank2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getBank(System.String,FMOD.Studio.Bank&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getBank_m18126FE6B7336A16B0522BC8633DEA38DE5F7116 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___path0, Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * ___bank1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetEventByID(System.IntPtr,System.Guid&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetEventByID_mE7A30DCD2A1A278FAB174BFC7B9C90ADC3004AFA (intptr_t ___system0, Guid_t * ___id1, intptr_t* ____event2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getEventByID(System.Guid,FMOD.Studio.EventDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getEventByID_m07896669F4697E1BD9AFEA1A392A2468D5BEB479 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, Guid_t  ___id0, EventDescription_tA7B5CD79AFB0B96E61BEB585B591EACF17319F5D * ____event1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetBusByID(System.IntPtr,System.Guid&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetBusByID_m2BF67D78BCC9324C58A372D4CC842A5E01E81B01 (intptr_t ___system0, Guid_t * ___id1, intptr_t* ___bus2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getBusByID(System.Guid,FMOD.Studio.Bus&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getBusByID_mD07086C56DA7CAD6B2CB401985C91FD880F85C99 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, Guid_t  ___id0, Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520 * ___bus1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetVCAByID(System.IntPtr,System.Guid&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetVCAByID_mB47E038978E9989E4F023201F91CCE556222689D (intptr_t ___system0, Guid_t * ___id1, intptr_t* ___vca2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getVCAByID(System.Guid,FMOD.Studio.VCA&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getVCAByID_m65D9EC3929E571858EA2B4CE6628896705314C40 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, Guid_t  ___id0, VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * ___vca1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetBankByID(System.IntPtr,System.Guid&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetBankByID_m52C5DAD8A74F213824ADD97288F667B898CCFF88 (intptr_t ___system0, Guid_t * ___id1, intptr_t* ___bank2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getBankByID(System.Guid,FMOD.Studio.Bank&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getBankByID_mEBC25A7511CCA7871B9404347CFE60E2D502964C (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, Guid_t  ___id0, Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * ___bank1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetSoundInfo(System.IntPtr,System.Byte[],FMOD.Studio.SOUND_INFO&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetSoundInfo_mCB29260F056166F4E27AA1767FA74EBC8A8C7FAA (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___key1, SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21 * ___info2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getSoundInfo(System.String,FMOD.Studio.SOUND_INFO&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getSoundInfo_m371AEE9C61A8FFE90A9B2B7A83664C71E413A44C (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___key0, SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21 * ___info1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetParameterDescriptionByName(System.IntPtr,System.Byte[],FMOD.Studio.PARAMETER_DESCRIPTION&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetParameterDescriptionByName_m41EB3A4BBBCB0E65E81248EDDEF708BB12806733 (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___name1, PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B * ___parameter2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getParameterDescriptionByName(System.String,FMOD.Studio.PARAMETER_DESCRIPTION&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getParameterDescriptionByName_mCB0CC15231E71C233CBCDD5D4AEC5E7D252352E4 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___name0, PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B * ___parameter1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetParameterDescriptionByID(System.IntPtr,FMOD.Studio.PARAMETER_ID,FMOD.Studio.PARAMETER_DESCRIPTION&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetParameterDescriptionByID_m75C9F741BA04841B728BB7EB3D729929484BB035 (intptr_t ___system0, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  ___id1, PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B * ___parameter2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getParameterDescriptionByID(FMOD.Studio.PARAMETER_ID,FMOD.Studio.PARAMETER_DESCRIPTION&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getParameterDescriptionByID_m3C299167721003AD51153BDDF392C8DA91149E9D (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  ___id0, PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B * ___parameter1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getParameterByID(FMOD.Studio.PARAMETER_ID,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getParameterByID_m4616BFB40DB1C96E5B9121F4A0260035F9947075 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  ___id0, float* ___value1, float* ___finalvalue2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getParameterByID(FMOD.Studio.PARAMETER_ID,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getParameterByID_m4F4A619E3855C0767BA4300E234CFCB2E2971812 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  ___id0, float* ___value1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetParameterByID(System.IntPtr,FMOD.Studio.PARAMETER_ID,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetParameterByID_m4AD118E0F2C06A4DF592266E268E64E9CB622BD6 (intptr_t ___system0, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  ___id1, float* ___value2, float* ___finalvalue3, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_SetParameterByID(System.IntPtr,FMOD.Studio.PARAMETER_ID,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_SetParameterByID_mA1353C84C3150E756B4EB339E83424B4D8DF8DC9 (intptr_t ___system0, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  ___id1, float ___value2, bool ___ignoreseekspeed3, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::setParameterByID(FMOD.Studio.PARAMETER_ID,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_setParameterByID_mD829C06BC3C0C1F473326758ED858B94EE48AA3D (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  ___id0, float ___value1, bool ___ignoreseekspeed2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_SetParametersByIDs(System.IntPtr,FMOD.Studio.PARAMETER_ID[],System.Single[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_SetParametersByIDs_mE600214000F44C6688B97C808375CD8E3DF38FCC (intptr_t ___system0, PARAMETER_IDU5BU5D_tBF176CF014283DCED4159FBAE8605A11C6F2B373* ___ids1, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values2, int32_t ___count3, bool ___ignoreseekspeed4, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::setParametersByIDs(FMOD.Studio.PARAMETER_ID[],System.Single[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_setParametersByIDs_mF671A06A744EDC550678DC6FE78080A7BDF9F566 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, PARAMETER_IDU5BU5D_tBF176CF014283DCED4159FBAE8605A11C6F2B373* ___ids0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values1, int32_t ___count2, bool ___ignoreseekspeed3, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getParameterByName(System.String,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getParameterByName_mED8C62CBA85F4206E61B15E092681AC31A268E8B (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___name0, float* ___value1, float* ___finalvalue2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getParameterByName(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getParameterByName_m6E5C65D39855F5808A9D19E85BFC99C6AEDB52DE (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___name0, float* ___value1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetParameterByName(System.IntPtr,System.Byte[],System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetParameterByName_mD88531BCB10C01AFACB4EAC701643648EF8630EA (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___name1, float* ___value2, float* ___finalvalue3, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_SetParameterByName(System.IntPtr,System.Byte[],System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_SetParameterByName_mB5BCB7C16EC75D4A0D76EB0FFBF1957178209318 (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___name1, float ___value2, bool ___ignoreseekspeed3, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::setParameterByName(System.String,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_setParameterByName_m78E989D62076D3AB1729E9ECEE07BC7A49169C75 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___name0, float ___value1, bool ___ignoreseekspeed2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_LookupID(System.IntPtr,System.Byte[],System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_LookupID_mE1A03AD4042AF546DEFF4AB11FF0EC570F894C7E (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___path1, Guid_t * ___id2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::lookupID(System.String,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_lookupID_m8457C3111F4C8D70B9255447A4685F4723AF3E89 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___path0, Guid_t * ___id1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC (int32_t ___cb0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_LookupPath(System.IntPtr,System.Guid&,System.IntPtr,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_LookupPath_mC36E3D11E4EAF85523D26769E5DE5301439C8EF8 (intptr_t ___system0, Guid_t * ___id1, intptr_t ___path2, int32_t ___size3, int32_t* ___retrieved4, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72 (intptr_t ___hglobal0, const RuntimeMethod* method);
// System.String FMOD.StringHelper/ThreadSafeEncoding::stringFromNative(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThreadSafeEncoding_stringFromNative_mC8F16234AA2F887DD608463B826DB612F4998234 (ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::lookupPath(System.Guid,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_lookupPath_m9E9CA94E2BA9236FBDB9346880443E4F99B5FAA3 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, Guid_t  ___id0, String_t** ___path1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetNumListeners(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetNumListeners_m6F6AC1FE0D2CC09E6FBEF9897279FB2DBCB2DD4F (intptr_t ___system0, int32_t* ___numlisteners1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getNumListeners(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getNumListeners_m4754C2EEEFD8CE748B939B8F98F4D0DC313FD33D (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t* ___numlisteners0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_SetNumListeners(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_SetNumListeners_m5427E0CE877B8060DB873E57543045995EA5162D (intptr_t ___system0, int32_t ___numlisteners1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::setNumListeners(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_setNumListeners_m9AA850BF7C1180932978A5E39C55CA883C442592 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t ___numlisteners0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetListenerAttributes(System.IntPtr,System.Int32,FMOD.ATTRIBUTES_3D&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetListenerAttributes_m5FEF44EE37D9995837A7B61A8E79C2A3330CBA14 (intptr_t ___system0, int32_t ___listener1, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 * ___attributes2, intptr_t ___zero3, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getListenerAttributes(System.Int32,FMOD.ATTRIBUTES_3D&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getListenerAttributes_mDBF3C967494F1CA12F05DC88B27F56E53BB5C065 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t ___listener0, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 * ___attributes1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetListenerAttributes(System.IntPtr,System.Int32,FMOD.ATTRIBUTES_3D&,FMOD.VECTOR&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetListenerAttributes_mF78E495C338FCB0A29E04BA5F598F97FC66D3E8F (intptr_t ___system0, int32_t ___listener1, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 * ___attributes2, VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B * ___attenuationposition3, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getListenerAttributes(System.Int32,FMOD.ATTRIBUTES_3D&,FMOD.VECTOR&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getListenerAttributes_m614594E193EEC98E615464F3757E1DFDB545FA88 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t ___listener0, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 * ___attributes1, VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B * ___attenuationposition2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_SetListenerAttributes(System.IntPtr,System.Int32,FMOD.ATTRIBUTES_3D&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_SetListenerAttributes_mEA39841F32E2AA5B59A7E4FC296CE507B163CE2E (intptr_t ___system0, int32_t ___listener1, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 * ___attributes2, intptr_t ___zero3, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::setListenerAttributes(System.Int32,FMOD.ATTRIBUTES_3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_setListenerAttributes_m90E3285B3F9D04089D164663265BB9BF8B23FECA (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t ___listener0, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734  ___attributes1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_SetListenerAttributes(System.IntPtr,System.Int32,FMOD.ATTRIBUTES_3D&,FMOD.VECTOR&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_SetListenerAttributes_m0E4EFA117DF36765F1E74377CC0A7B2FF24916FF (intptr_t ___system0, int32_t ___listener1, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 * ___attributes2, VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B * ___attenuationposition3, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::setListenerAttributes(System.Int32,FMOD.ATTRIBUTES_3D,FMOD.VECTOR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_setListenerAttributes_mF816CEB6FE076652A8648256290FD06DD6527A8A (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t ___listener0, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734  ___attributes1, VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B  ___attenuationposition2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetListenerWeight(System.IntPtr,System.Int32,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetListenerWeight_m3530DCBFEE6D394800305A07ED503B2189E044CC (intptr_t ___system0, int32_t ___listener1, float* ___weight2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getListenerWeight(System.Int32,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getListenerWeight_m588FB81B1EF9E41E5118CD524EF5689C858B18D2 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t ___listener0, float* ___weight1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_SetListenerWeight(System.IntPtr,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_SetListenerWeight_m71475702E1D5FEC581A3F2D539765615ADCAEF5B (intptr_t ___system0, int32_t ___listener1, float ___weight2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::setListenerWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_setListenerWeight_mF578F7D6E47E7554E5B350FB8EBBB0FEC56D3586 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t ___listener0, float ___weight1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_LoadBankFile(System.IntPtr,System.Byte[],FMOD.Studio.LOAD_BANK_FLAGS,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_LoadBankFile_m7BDD25762778D10B1D8A27C50B7DCB5A68690068 (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___filename1, uint32_t ___flags2, intptr_t* ___bank3, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::loadBankFile(System.String,FMOD.Studio.LOAD_BANK_FLAGS,FMOD.Studio.Bank&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_loadBankFile_mCED0F71BFDC8A50E9C5BCD217706317966577E4A (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___filename0, uint32_t ___flags1, Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * ___bank2, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_LoadBankMemory(System.IntPtr,System.IntPtr,System.Int32,FMOD.Studio.LOAD_MEMORY_MODE,FMOD.Studio.LOAD_BANK_FLAGS,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_LoadBankMemory_m1CECF842603C3431F1991BB0433AA1328DA81980 (intptr_t ___system0, intptr_t ___buffer1, int32_t ___length2, int32_t ___mode3, uint32_t ___flags4, intptr_t* ___bank5, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::loadBankMemory(System.Byte[],FMOD.Studio.LOAD_BANK_FLAGS,FMOD.Studio.Bank&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_loadBankMemory_m8E38A7E42FC23EF8EEC17F5ABCBA50C06ADB0E2E (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, uint32_t ___flags1, Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * ___bank2, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<FMOD.Studio.BANK_INFO>(!!0)
inline int32_t Marshal_SizeOf_TisBANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_m86AE3CC308518A9BF37DCA60BBA0AD0FE683E9DA (BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A  ___structure0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A , const RuntimeMethod*))Marshal_SizeOf_TisBANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_m86AE3CC308518A9BF37DCA60BBA0AD0FE683E9DA_gshared)(___structure0, method);
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_LoadBankCustom(System.IntPtr,FMOD.Studio.BANK_INFO&,FMOD.Studio.LOAD_BANK_FLAGS,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_LoadBankCustom_mCE93432C8FD70C57CF79905968D405E140312902 (intptr_t ___system0, BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A * ___info1, uint32_t ___flags2, intptr_t* ___bank3, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::loadBankCustom(FMOD.Studio.BANK_INFO,FMOD.Studio.LOAD_BANK_FLAGS,FMOD.Studio.Bank&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_loadBankCustom_m02E6A1EC25E9B68FDB44FEF1ED99475EDE5E8857 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A  ___info0, uint32_t ___flags1, Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * ___bank2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_UnloadAll(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_UnloadAll_m339FFF03CC2D27413983D704F3C903DCCD2DB7D3 (intptr_t ___system0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::unloadAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_unloadAll_m24ABD9C1211CB00D17ED5F1D1445EDE1F0E389FC (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_FlushCommands(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_FlushCommands_m49201576B2506947655AD3E108B3B961DBBED23F (intptr_t ___system0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::flushCommands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_flushCommands_m1DB8630ABBD787E3BE5779817CB5901B4748FCBA (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_FlushSampleLoading(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_FlushSampleLoading_m8FE82502A4BA6D3EDE399CD205B87A0196738B97 (intptr_t ___system0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::flushSampleLoading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_flushSampleLoading_m53A831200437E6BCC319C282F1F0BBC6F6AB2E31 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_StartCommandCapture(System.IntPtr,System.Byte[],FMOD.Studio.COMMANDCAPTURE_FLAGS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_StartCommandCapture_mB6F4E170AAE337EFB9E6229D0EC7AB496868774C (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___filename1, uint32_t ___flags2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::startCommandCapture(System.String,FMOD.Studio.COMMANDCAPTURE_FLAGS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_startCommandCapture_mE7018E631A9EF1BAD05C19F3B424DF099055D5FF (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___filename0, uint32_t ___flags1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_StopCommandCapture(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_StopCommandCapture_m5B3A6639DB593C4B54778AE31D18E938C2965471 (intptr_t ___system0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::stopCommandCapture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_stopCommandCapture_m247116D66F93F51CA971E2A7266052CE47510F88 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_LoadCommandReplay(System.IntPtr,System.Byte[],FMOD.Studio.COMMANDREPLAY_FLAGS,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_LoadCommandReplay_mF8E329DD65A1D7A8A8876B5AFA20538BDAEBDF8B (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___filename1, uint32_t ___flags2, intptr_t* ___replay3, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::loadCommandReplay(System.String,FMOD.Studio.COMMANDREPLAY_FLAGS,FMOD.Studio.CommandReplay&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_loadCommandReplay_mCB42E00A0437628BCD3F7DB126B3AF0FAD89E6A6 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___filename0, uint32_t ___flags1, CommandReplay_t85683E6488FF9B2D01CECCC7C87ABD8FCBC49FD0 * ___replay2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetBankCount(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetBankCount_mC7BC2658454C6472A484F1252BBD12AB4E4AB733 (intptr_t ___system0, int32_t* ___count1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getBankCount(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getBankCount_mAD176C2EE0E6C3E090FD278837973676BB1F3AA6 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t* ___count0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetBankList(System.IntPtr,System.IntPtr[],System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetBankList_m8DD4DDC95F53A0909DAF36ADBB526CC8FDDDB6B8 (intptr_t ___system0, IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___array1, int32_t ___capacity2, int32_t* ___count3, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getBankList(FMOD.Studio.Bank[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getBankList_m7136EF03B6182E386D97D9344D50D1E4D40599B8 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E** ___array0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetParameterDescriptionCount(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetParameterDescriptionCount_m57F5F89EBC669B0457EB9A4C8E3A74A9A2743CD1 (intptr_t ___system0, int32_t* ___count1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getParameterDescriptionCount(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getParameterDescriptionCount_mC9AD182FC9CB25565561D3CFCFDD4ACD565E8817 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t* ___count0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetParameterDescriptionList(System.IntPtr,FMOD.Studio.PARAMETER_DESCRIPTION[],System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetParameterDescriptionList_mC4B1C23FA4EE3B1F8EE1414E49C9AE72CC2A2612 (intptr_t ___system0, PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5* ___array1, int32_t ___capacity2, int32_t* ___count3, const RuntimeMethod* method);
// System.Void System.Array::Resize<FMOD.Studio.PARAMETER_DESCRIPTION>(!!0[]&,System.Int32)
inline void Array_Resize_TisPARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B_m4280AD0E10D4EA3CCA07CF96AED06A1723342C42 (PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5**, int32_t, const RuntimeMethod*))Array_Resize_TisPARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B_m4280AD0E10D4EA3CCA07CF96AED06A1723342C42_gshared)(___array0, ___newSize1, method);
}
// FMOD.RESULT FMOD.Studio.System::getParameterDescriptionList(FMOD.Studio.PARAMETER_DESCRIPTION[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getParameterDescriptionList_m5D3344956E6D233FDC6ADB4A22316DD16A37B60E (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5** ___array0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetCPUUsage(System.IntPtr,FMOD.Studio.CPU_USAGE&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetCPUUsage_m9F6E4949FC6DE8E4C37FB5E819A6A6FD2ACCAA83 (intptr_t ___system0, CPU_USAGE_tD3620A435EE6B2144E94AEC150EABD63ABAB0332 * ___usage1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getCPUUsage(FMOD.Studio.CPU_USAGE&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getCPUUsage_m2C7F95332C11E2CBF45196280BC4AB014BEFC999 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, CPU_USAGE_tD3620A435EE6B2144E94AEC150EABD63ABAB0332 * ___usage0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetBufferUsage(System.IntPtr,FMOD.Studio.BUFFER_USAGE&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetBufferUsage_m517062AC9DD0CCD6A07E3252214C89DD79C3353E (intptr_t ___system0, BUFFER_USAGE_tC3F4FFD3963B6AD7416C4BF66BD3CC40F6DCD4A3 * ___usage1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getBufferUsage(FMOD.Studio.BUFFER_USAGE&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getBufferUsage_mA899E51B099C3DCFCEB69CE9332F92D47E828795 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, BUFFER_USAGE_tC3F4FFD3963B6AD7416C4BF66BD3CC40F6DCD4A3 * ___usage0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_ResetBufferUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_ResetBufferUsage_m78140A4EAAD9A5265A76B32A981C24C5B523525E (intptr_t ___system0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::resetBufferUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_resetBufferUsage_mFB71A6D3D7B5B1EA3CDACCF98EB78C5021600062 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_SetCallback(System.IntPtr,FMOD.Studio.SYSTEM_CALLBACK,FMOD.Studio.SYSTEM_CALLBACK_TYPE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_SetCallback_m46092D961F3DC7E0749B009F2901AAFB464A21C3 (intptr_t ___system0, SYSTEM_CALLBACK_tAC95078FE937EE93C1AD6CA0DD09DB016BBA843C * ___callback1, uint32_t ___callbackmask2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::setCallback(FMOD.Studio.SYSTEM_CALLBACK,FMOD.Studio.SYSTEM_CALLBACK_TYPE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_setCallback_m4B9772A328A73A818C99C9F103B017B2562933CE (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, SYSTEM_CALLBACK_tAC95078FE937EE93C1AD6CA0DD09DB016BBA843C * ___callback0, uint32_t ___callbackmask1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetUserData(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetUserData_m50FABEF966837F61BCBF2897DA868A44EF1EBFCB (intptr_t ___system0, intptr_t* ___userdata1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getUserData(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getUserData_m4857539BCF58DCEC58840A5D0952F93C20FCA3B9 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, intptr_t* ___userdata0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_SetUserData(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_SetUserData_mAC2DE5FC1F92E54F7CC4AF2E012D486D736CAA96 (intptr_t ___system0, intptr_t ___userdata1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::setUserData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_setUserData_m284605A8317D310D9E5BFCE50A76CF70739B9CEF (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, intptr_t ___userdata0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetMemoryUsage(System.IntPtr,FMOD.Studio.MEMORY_USAGE&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetMemoryUsage_mB05225C1D5EABA2C348A785BC76FF2C8517A0AEF (intptr_t ___system0, MEMORY_USAGE_tE2E03D2DB8C162FC199C1EBBD91C1BC08B605647 * ___memoryusage1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getMemoryUsage(FMOD.Studio.MEMORY_USAGE&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getMemoryUsage_mB025493CB9E80C4CBDE3F31CF357B81254E6EA00 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, MEMORY_USAGE_tE2E03D2DB8C162FC199C1EBBD91C1BC08B605647 * ___memoryusage0, const RuntimeMethod* method);
// System.Void FMOD.Studio.System::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void System__ctor_mF18709942E8E08A25810DDE7A5626D65FDA300AD_inline (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, intptr_t ___ptr0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Boolean FMOD.Studio.System::hasHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool System_hasHandle_m60DB8CD9AD7EE897C1120DD6AA3966322E63773B (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, const RuntimeMethod* method);
// System.Void FMOD.Studio.System::clearHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void System_clearHandle_m9CEEA5C7AAF2B515F6DEF62E39B3D5768DF65426 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, const RuntimeMethod* method);
// System.Boolean FMOD.Studio.System::FMOD_Studio_System_IsValid(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool System_FMOD_Studio_System_IsValid_mD72DC1B10F8FA57DD3C8494BF041BD330AA02DA8 (intptr_t ___system0, const RuntimeMethod* method);
// System.Boolean FMOD.Studio.System::isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool System_isValid_m5B62C7FB4549D95109CF84240C91CC1B727B0BFF (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, const RuntimeMethod* method);
// System.String FMOD.Error::String(FMOD.RESULT)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Error_String_m8AC8CA04A88B158014AD4E49137C48FDBC7BD032 (int32_t ___errcode0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080 (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Thread::FMOD5_Thread_SetAttributes(FMOD.THREAD_TYPE,FMOD.THREAD_AFFINITY,FMOD.THREAD_PRIORITY,FMOD.THREAD_STACK_SIZE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_FMOD5_Thread_SetAttributes_mC43AFEBC6999D2C8E5C10578D8AF14949FF2626E (int32_t ___type0, int64_t ___affinity1, int32_t ___priority2, uint32_t ___stacksize3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<FMODUnity.ThreadType>::.ctor()
inline void List_1__ctor_m4B5F22DCBB87DAE7FA48D0B1B8BFEBA943A0C144 (List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2 *, const RuntimeMethod*))List_1__ctor_mF1D0377D81949B2ADB6104D9994F7CEE1A1E5040_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<FMODUnity.ThreadType>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m0E5A0C1F5EF3A2218BE4C6111EDC61EA672CE9DF (List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m830211DD718E293368011CCC55CAF00EC7CBF921_gshared)(__this, ___collection0, method);
}
// System.Int32 FMOD.Studio.USER_PROPERTY::intValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t USER_PROPERTY_intValue_m208EF371AEE68227EB05515A2F6CFEC808E55248 (USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1 * __this, const RuntimeMethod* method);
// System.Boolean FMOD.Studio.USER_PROPERTY::boolValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool USER_PROPERTY_boolValue_m2B4783AAA6BF0EFE0F6FAA23A5E02D4634514E0E (USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1 * __this, const RuntimeMethod* method);
// System.Single FMOD.Studio.USER_PROPERTY::floatValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float USER_PROPERTY_floatValue_m2A554F53268650B89BF95C78F291F84770EA6CE8 (USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1 * __this, const RuntimeMethod* method);
// System.String FMOD.StringWrapper::op_Implicit(FMOD.StringWrapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringWrapper_op_Implicit_m0CB2C6B93934994254E1B70CFDA0AEC292A03514 (StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  ___fstring0, const RuntimeMethod* method);
// System.String FMOD.Studio.USER_PROPERTY::stringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* USER_PROPERTY_stringValue_m38C9B0E7D020613E96631135C766050716CA2A6F (USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1 * __this, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.Util::FMOD_Studio_ParseID(System.Byte[],System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Util_FMOD_Studio_ParseID_mFDB8D0D9AFD0DA3B51AA312000F260A386ED18B0 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___idString0, Guid_t * ___id1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.VCA::FMOD_Studio_VCA_GetID(System.IntPtr,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VCA_FMOD_Studio_VCA_GetID_m708F79CD6C66519D9DA41118E7BA49BBBA35D2D1 (intptr_t ___vca0, Guid_t * ___id1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.VCA::getID(System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VCA_getID_m99335FAA90C7C80A6B562E1013FD94FF884E3541 (VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * __this, Guid_t * ___id0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.VCA::FMOD_Studio_VCA_GetPath(System.IntPtr,System.IntPtr,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VCA_FMOD_Studio_VCA_GetPath_m50568C245AFB9B6CA09C0085031ABE31C7EE53A3 (intptr_t ___vca0, intptr_t ___path1, int32_t ___size2, int32_t* ___retrieved3, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.VCA::getPath(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VCA_getPath_mC6F354640E953939C07C0595CC55297F40E3E5A7 (VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * __this, String_t** ___path0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.VCA::getVolume(System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VCA_getVolume_m520F6BFFE072DCB56F90118E95850EBC18243F10 (VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * __this, float* ___volume0, float* ___finalvolume1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.VCA::getVolume(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VCA_getVolume_mBAB13B7C3DBD79FA1148B60AB0C0847D862BB6B6 (VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * __this, float* ___volume0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.VCA::FMOD_Studio_VCA_GetVolume(System.IntPtr,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VCA_FMOD_Studio_VCA_GetVolume_m74A1C9C48062EA6166EEBCD96BE94D23BBFA35F5 (intptr_t ___vca0, float* ___volume1, float* ___finalvolume2, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.VCA::FMOD_Studio_VCA_SetVolume(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VCA_FMOD_Studio_VCA_SetVolume_m6D6A7DF234AE9481089ADC79B99470AED66672F2 (intptr_t ___vca0, float ___volume1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.VCA::setVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VCA_setVolume_m2B809FE3B1868B4969F3603ED8D9261D20E7ED8C (VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * __this, float ___volume0, const RuntimeMethod* method);
// System.Void FMOD.Studio.VCA::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VCA__ctor_mCB5031A88E72F2D90BBA2CFC7620CCBC03DF9AF4_inline (VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * __this, intptr_t ___ptr0, const RuntimeMethod* method);
// System.Boolean FMOD.Studio.VCA::hasHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VCA_hasHandle_m4236ACB39655290A51ADFAC1C6880FE78CFCD1FF (VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * __this, const RuntimeMethod* method);
// System.Void FMOD.Studio.VCA::clearHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCA_clearHandle_mB8EBE950CA2E3DD6E8FC8520A4E19A70D9CBA69C (VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * __this, const RuntimeMethod* method);
// System.Boolean FMOD.Studio.VCA::FMOD_Studio_VCA_IsValid(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VCA_FMOD_Studio_VCA_IsValid_mC30C97630F709337B187ACDA4C2880E52C1BC002 (intptr_t ___vca0, const RuntimeMethod* method);
// System.Boolean FMOD.Studio.VCA::isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VCA_isValid_mB105ECBF2FD9ECBC7967786616C33A5D1249E53E (VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void FMODUnity.Legacy/PlatformSetting`1<FMODUnity.TriStateBool>::.ctor()
inline void PlatformSetting_1__ctor_m7358C34761BD83F442F2C055D210180E443DA4FC (PlatformSetting_1_t488F3DFFD01BDD40FEF7B22BBE680BDF95A3E7F4 * __this, const RuntimeMethod* method)
{
	((  void (*) (PlatformSetting_1_t488F3DFFD01BDD40FEF7B22BBE680BDF95A3E7F4 *, const RuntimeMethod*))PlatformSetting_1__ctor_m7FC5D32824E60C5555BE88338D80D92054353220_gshared)(__this, method);
}
// System.Void FMODUnity.Legacy/PlatformSetting`1<System.Int32>::.ctor()
inline void PlatformSetting_1__ctor_m1C7A8752D41E64C1743BA8DE099AA3AAE0784F5A (PlatformSetting_1_tF1F2D113743AE5690D9B0A53C4E5F73E58B88DD8 * __this, const RuntimeMethod* method)
{
	((  void (*) (PlatformSetting_1_tF1F2D113743AE5690D9B0A53C4E5F73E58B88DD8 *, const RuntimeMethod*))PlatformSetting_1__ctor_m1C7A8752D41E64C1743BA8DE099AA3AAE0784F5A_gshared)(__this, method);
}
// System.Void FMODUnity.Legacy/PlatformSetting`1<System.String>::.ctor()
inline void PlatformSetting_1__ctor_m15671CC1526FF2C711A5E6EF4865EDC33C953578 (PlatformSetting_1_tC0C6354C9D7B615166E2AD41980014E4939DC657 * __this, const RuntimeMethod* method)
{
	((  void (*) (PlatformSetting_1_tC0C6354C9D7B615166E2AD41980014E4939DC657 *, const RuntimeMethod*))PlatformSetting_1__ctor_m66EDCBDA313D9916ADD4CC51A1341B78E5052D17_gshared)(__this, method);
}
// System.Void System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<FMODUnity.TriStateBool>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE64CAEFC88B56EE692AA35DE5C04F6F1E5CA7843 (Func_2_tA49219E9EC3C0B2E9A55DEFD7CAD14C1121311C7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA49219E9EC3C0B2E9A55DEFD7CAD14C1121311C7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void FMODUnity.Platform/PropertyAccessor`1<FMODUnity.TriStateBool>::.ctor(System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<T>>,T)
inline void PropertyAccessor_1__ctor_m1F9DAD4B75E3D28D077D23FFFCDE7A412391C1CA (PropertyAccessor_1_t96321CC9404BDDA3C50DC400A87A60AC9EEE87A9 * __this, Func_2_tA49219E9EC3C0B2E9A55DEFD7CAD14C1121311C7 * ___getter0, int32_t ___defaultValue1, const RuntimeMethod* method)
{
	((  void (*) (PropertyAccessor_1_t96321CC9404BDDA3C50DC400A87A60AC9EEE87A9 *, Func_2_tA49219E9EC3C0B2E9A55DEFD7CAD14C1121311C7 *, int32_t, const RuntimeMethod*))PropertyAccessor_1__ctor_m6558ACE1EC6D45B848AE8C3D1C857557DF03B48F_gshared)(__this, ___getter0, ___defaultValue1, method);
}
// System.Void System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<System.Int32>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mDFCD9D28A06A79FBE7DB11E3FDE4C4203A77A584 (Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void FMODUnity.Platform/PropertyAccessor`1<System.Int32>::.ctor(System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<T>>,T)
inline void PropertyAccessor_1__ctor_mA3732FA4712BD8D1BCAF3ED04FAC2A6DD33E9060 (PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5 * __this, Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87 * ___getter0, int32_t ___defaultValue1, const RuntimeMethod* method)
{
	((  void (*) (PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5 *, Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87 *, int32_t, const RuntimeMethod*))PropertyAccessor_1__ctor_mA3732FA4712BD8D1BCAF3ED04FAC2A6DD33E9060_gshared)(__this, ___getter0, ___defaultValue1, method);
}
// System.Void System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<System.String>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA1B14C222C3C3E3A9FB75789907F3ABC297C4974 (Func_2_t45BDF03ABB29FE835EF6F6CA3ABD009BAB9995AF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t45BDF03ABB29FE835EF6F6CA3ABD009BAB9995AF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void FMODUnity.Platform/PropertyAccessor`1<System.String>::.ctor(System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<T>>,T)
inline void PropertyAccessor_1__ctor_m3E035A428D209C7A6DF0F2FBFD799C59C3EEEF4C (PropertyAccessor_1_t1968EAF8A354C79829234FCD558C156A8B4280C7 * __this, Func_2_t45BDF03ABB29FE835EF6F6CA3ABD009BAB9995AF * ___getter0, String_t* ___defaultValue1, const RuntimeMethod* method)
{
	((  void (*) (PropertyAccessor_1_t1968EAF8A354C79829234FCD558C156A8B4280C7 *, Func_2_t45BDF03ABB29FE835EF6F6CA3ABD009BAB9995AF *, String_t*, const RuntimeMethod*))PropertyAccessor_1__ctor_m9851572DC88912DA6527EC679ACB237960A061C5_gshared)(__this, ___getter0, ___defaultValue1, method);
}
// System.Void System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<FMOD.SPEAKERMODE>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mFB468477EB787E9D6D78904DFE15B7754F5B3890 (Func_2_tCB94F642CEF6C6C7ECD6A1E2038D7EE45FE8E8E5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tCB94F642CEF6C6C7ECD6A1E2038D7EE45FE8E8E5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void FMODUnity.Platform/PropertyAccessor`1<FMOD.SPEAKERMODE>::.ctor(System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<T>>,T)
inline void PropertyAccessor_1__ctor_m85B8153BC5914536F568B4EBE5E1A5D7E05F185B (PropertyAccessor_1_tFFFFA4523004CF950187CE99473C24DEF92A7375 * __this, Func_2_tCB94F642CEF6C6C7ECD6A1E2038D7EE45FE8E8E5 * ___getter0, int32_t ___defaultValue1, const RuntimeMethod* method)
{
	((  void (*) (PropertyAccessor_1_tFFFFA4523004CF950187CE99473C24DEF92A7375 *, Func_2_tCB94F642CEF6C6C7ECD6A1E2038D7EE45FE8E8E5 *, int32_t, const RuntimeMethod*))PropertyAccessor_1__ctor_m6558ACE1EC6D45B848AE8C3D1C857557DF03B48F_gshared)(__this, ___getter0, ___defaultValue1, method);
}
// System.Void System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<System.Collections.Generic.List`1<System.String>>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mBEE0B8FCEEC73FB03A94AB3C323E5167497AE30F (Func_2_t6CE4CF30CD70D39A2CB75A55B5B0E742D1C226F7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6CE4CF30CD70D39A2CB75A55B5B0E742D1C226F7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void FMODUnity.Platform/PropertyAccessor`1<System.Collections.Generic.List`1<System.String>>::.ctor(System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<T>>,T)
inline void PropertyAccessor_1__ctor_m9A30F83C45C1F465269ED8BAFCFED58DC60C8519 (PropertyAccessor_1_t15B7F2DF654FDDC891E7169F661426D3BAECEC83 * __this, Func_2_t6CE4CF30CD70D39A2CB75A55B5B0E742D1C226F7 * ___getter0, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___defaultValue1, const RuntimeMethod* method)
{
	((  void (*) (PropertyAccessor_1_t15B7F2DF654FDDC891E7169F661426D3BAECEC83 *, Func_2_t6CE4CF30CD70D39A2CB75A55B5B0E742D1C226F7 *, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))PropertyAccessor_1__ctor_m9851572DC88912DA6527EC679ACB237960A061C5_gshared)(__this, ___getter0, ___defaultValue1, method);
}
// System.Void System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<FMODUnity.PlatformCallbackHandler>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mBF95B76079873F4404E885D6D391FBF733466CE6 (Func_2_t90D3EC3607DEE77133AB325243D70D3BF30481BE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t90D3EC3607DEE77133AB325243D70D3BF30481BE *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void FMODUnity.Platform/PropertyAccessor`1<FMODUnity.PlatformCallbackHandler>::.ctor(System.Func`2<FMODUnity.Platform/PropertyStorage,FMODUnity.Platform/Property`1<T>>,T)
inline void PropertyAccessor_1__ctor_mCF8928B830DA0BB19BD8D9E0A88FB5153D920206 (PropertyAccessor_1_t3C8A958245F3CC9B3C19B07ACE22016929868EB0 * __this, Func_2_t90D3EC3607DEE77133AB325243D70D3BF30481BE * ___getter0, PlatformCallbackHandler_tC97A12E9191ED7EE208965B8DF447CA520F3EE51 * ___defaultValue1, const RuntimeMethod* method)
{
	((  void (*) (PropertyAccessor_1_t3C8A958245F3CC9B3C19B07ACE22016929868EB0 *, Func_2_t90D3EC3607DEE77133AB325243D70D3BF30481BE *, PlatformCallbackHandler_tC97A12E9191ED7EE208965B8DF447CA520F3EE51 *, const RuntimeMethod*))PropertyAccessor_1__ctor_m9851572DC88912DA6527EC679ACB237960A061C5_gshared)(__this, ___getter0, ___defaultValue1, method);
}
// System.Void FMODUnity.Platform/Property`1<FMODUnity.TriStateBool>::.ctor()
inline void Property_1__ctor_m1867A586B284C85D865E2B26C3CF7850A85A87E2 (Property_1_tB4DC4D8A4B1A7885B188EF3DFCDA5F0FC8965C97 * __this, const RuntimeMethod* method)
{
	((  void (*) (Property_1_tB4DC4D8A4B1A7885B188EF3DFCDA5F0FC8965C97 *, const RuntimeMethod*))Property_1__ctor_mB099BCF0F0B6FF30164F68848B372CE67BC31D5D_gshared)(__this, method);
}
// System.Void FMODUnity.Platform/Property`1<FMODUnity.PlatformCallbackHandler>::.ctor()
inline void Property_1__ctor_m45B06F418615B089A5E4AD312936DEA12461BAA3 (Property_1_t6770127C86A531D398D7204DB7CC4E497F04FEDE * __this, const RuntimeMethod* method)
{
	((  void (*) (Property_1_t6770127C86A531D398D7204DB7CC4E497F04FEDE *, const RuntimeMethod*))Property_1__ctor_m7CDAC89E172F59812B604B4710A5A89D3523DF43_gshared)(__this, method);
}
// System.Void FMODUnity.Platform/Property`1<System.Int32>::.ctor()
inline void Property_1__ctor_mF85F2D93388A82EC6A9743737CA3FCF5308A5464 (Property_1_tB69257AE89C1BAE96A39B56ECAA943FF1F44411F * __this, const RuntimeMethod* method)
{
	((  void (*) (Property_1_tB69257AE89C1BAE96A39B56ECAA943FF1F44411F *, const RuntimeMethod*))Property_1__ctor_mF85F2D93388A82EC6A9743737CA3FCF5308A5464_gshared)(__this, method);
}
// System.Void FMODUnity.Platform/Property`1<FMOD.SPEAKERMODE>::.ctor()
inline void Property_1__ctor_m84423BD3659DABF710EC1DFE227C731DD9735C50 (Property_1_tB7992A7FE9E273F12B5AD18F27A64E5FE522A31E * __this, const RuntimeMethod* method)
{
	((  void (*) (Property_1_tB7992A7FE9E273F12B5AD18F27A64E5FE522A31E *, const RuntimeMethod*))Property_1__ctor_mB099BCF0F0B6FF30164F68848B372CE67BC31D5D_gshared)(__this, method);
}
// System.Void FMODUnity.Platform/PropertyBool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBool__ctor_m0567EF16D7EA19240FBE2C1ED89E4817D03D1FCB (PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 * __this, const RuntimeMethod* method);
// System.Void FMODUnity.Platform/PropertyInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyInt__ctor_mBDA03B7695DD8E890452E369495E5B98B4399820 (PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * __this, const RuntimeMethod* method);
// System.Void FMODUnity.Platform/PropertyString::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyString__ctor_m8325BFE0028864949746E8DFCE514F21F9DD2949 (PropertyString_tD68EEE1C2850E21FA13D8B6EE52BD852444904C5 * __this, const RuntimeMethod* method);
// System.Void FMODUnity.Platform/PropertySpeakerMode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertySpeakerMode__ctor_mC50C7C6D0AD6F65409E367B25BE80808C18CB46B (PropertySpeakerMode_tF3E57F3B6A469063306C480AD774C57ABB010CEF * __this, const RuntimeMethod* method);
// System.Void FMODUnity.Platform/PropertyStringList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStringList__ctor_mCC87BFDFAA4F92CCDC693B57EB3CECEDA39D7B6B (PropertyStringList_t88EB50D87DA26E8B975BEA698EF4A67DBE1830BC * __this, const RuntimeMethod* method);
// System.Void FMODUnity.Platform/PropertyCallbackHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCallbackHandler__ctor_mEFF071029B507D712DA08461F62F51F33238A7A2 (PropertyCallbackHandler_t82B0903BB420520717D537266810EE85744AC4BA * __this, const RuntimeMethod* method);
// System.Void FMODUnity.Platform/Property`1<System.String>::.ctor()
inline void Property_1__ctor_mB197BF6AC6FEAC7C95892A3EC3FE4CA222869B11 (Property_1_t4FFACE60733293ECEBB1863470178A4D5DA5EFD9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Property_1_t4FFACE60733293ECEBB1863470178A4D5DA5EFD9 *, const RuntimeMethod*))Property_1__ctor_m7CDAC89E172F59812B604B4710A5A89D3523DF43_gshared)(__this, method);
}
// System.Void FMODUnity.Platform/Property`1<System.Collections.Generic.List`1<System.String>>::.ctor()
inline void Property_1__ctor_mEF40FA558B2DD2E0A08F5AA02EF426345B4B5BC3 (Property_1_tFF04740DA05A1C6E8363931B19AEED7384C75CEE * __this, const RuntimeMethod* method)
{
	((  void (*) (Property_1_tFF04740DA05A1C6E8363931B19AEED7384C75CEE *, const RuntimeMethod*))Property_1__ctor_m7CDAC89E172F59812B604B4710A5A89D3523DF43_gshared)(__this, method);
}
// System.Void FMODUnity.Platform/Property`1<System.Collections.Generic.List`1<FMODUnity.ThreadAffinityGroup>>::.ctor()
inline void Property_1__ctor_m31BF39C9050A5905D3EF2E31077FA63DB33985A3 (Property_1_tC12A06AB020E1B55C7B086819F2BB13DCD9D6098 * __this, const RuntimeMethod* method)
{
	((  void (*) (Property_1_tC12A06AB020E1B55C7B086819F2BB13DCD9D6098 *, const RuntimeMethod*))Property_1__ctor_m7CDAC89E172F59812B604B4710A5A89D3523DF43_gshared)(__this, method);
}
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void FMODUnity.RuntimeManager::Asset_Completed(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.TextAsset>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeManager_Asset_Completed_m3F20E79043C9C8B403302E584B00E5E56960988B (AsyncOperationHandle_1_tD070A0F62515499D7FF4A4ED2147D5F151EA3BE7  ___obj0, bool ___loadSamples1, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Boolean System.Guid::Equals(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_Equals_m602304DBC4842AB53670762A6DB52D30C3973258 (Guid_t * __this, Guid_t  ___g0, const RuntimeMethod* method);
// System.Int32 System.Guid::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_mD32F5054E937C98B3D082594B3849808F1E92AE7 (Guid_t * __this, const RuntimeMethod* method);
// System.Void FMODUnity.Settings/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8E6ABD2D76ABAB567FFFCED999F598A98A6310E3 (U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321 * __this, const RuntimeMethod* method);
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4 (float* __this, float ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Int32 FMOD.StringHelper/ThreadSafeEncoding::roundUpPowerTwo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreadSafeEncoding_roundUpPowerTwo_m3B6CA912A332C06497B5FE3A0D4CF6336A8816BB (ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * __this, int32_t ___number0, const RuntimeMethod* method);
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Marshal_ReadByte_mA0E9E8CE64BFEEA553E2ADB92201A4187F3BCFCA (intptr_t ___ptr0, int32_t ___ofs1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m057A8067BF7212A361510EA26B24022990A07AC0 (intptr_t ___source0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Text.UTF8Encoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_mA3F21D41B65D155202345802A05761A4BC022888 (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void FMODUnity.Platform/PropertyAccessors/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m40B6542A3EAB0CC8E819EF0FAE68BBD28459836F (U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * __this, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_Create(intptr_t*, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_IsValid(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_SetAdvancedSettings(intptr_t, ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166 *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetAdvancedSettings(intptr_t, ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166 *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_Initialize(intptr_t, int32_t, uint32_t, uint32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_Release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_Update(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetCoreSystem(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetEvent(intptr_t, uint8_t*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetBus(intptr_t, uint8_t*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetVCA(intptr_t, uint8_t*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetBank(intptr_t, uint8_t*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetEventByID(intptr_t, Guid_t *, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetBusByID(intptr_t, Guid_t *, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetVCAByID(intptr_t, Guid_t *, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetBankByID(intptr_t, Guid_t *, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetSoundInfo(intptr_t, uint8_t*, SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetParameterDescriptionByName(intptr_t, uint8_t*, PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetParameterDescriptionByID(intptr_t, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE , PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetParameterByID(intptr_t, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE , float*, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_SetParameterByID(intptr_t, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE , float, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_SetParametersByIDs(intptr_t, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE *, float*, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetParameterByName(intptr_t, uint8_t*, float*, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_SetParameterByName(intptr_t, uint8_t*, float, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_LookupID(intptr_t, uint8_t*, Guid_t *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_LookupPath(intptr_t, Guid_t *, intptr_t, int32_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetNumListeners(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_SetNumListeners(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetListenerAttributes(intptr_t, int32_t, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 *, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_SetListenerAttributes(intptr_t, int32_t, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 *, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetListenerWeight(intptr_t, int32_t, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_SetListenerWeight(intptr_t, int32_t, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_LoadBankFile(intptr_t, uint8_t*, uint32_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_LoadBankMemory(intptr_t, intptr_t, int32_t, int32_t, uint32_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_LoadBankCustom(intptr_t, BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_marshaled_pinvoke*, uint32_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_UnloadAll(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_FlushCommands(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_FlushSampleLoading(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_StartCommandCapture(intptr_t, uint8_t*, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_StopCommandCapture(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_LoadCommandReplay(intptr_t, uint8_t*, uint32_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetBankCount(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetBankList(intptr_t, intptr_t*, int32_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetParameterDescriptionCount(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetParameterDescriptionList(intptr_t, PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B *, int32_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetCPUUsage(intptr_t, CPU_USAGE_tD3620A435EE6B2144E94AEC150EABD63ABAB0332 *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetBufferUsage(intptr_t, BUFFER_USAGE_tC3F4FFD3963B6AD7416C4BF66BD3CC40F6DCD4A3 *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_ResetBufferUsage(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_SetCallback(intptr_t, Il2CppMethodPointer, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetUserData(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_SetUserData(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_System_GetMemoryUsage(intptr_t, MEMORY_USAGE_tE2E03D2DB8C162FC199C1EBBD91C1BC08B605647 *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD5_Thread_SetAttributes(int32_t, int64_t, int32_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_ParseID(uint8_t*, Guid_t *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_VCA_IsValid(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_VCA_GetID(intptr_t, Guid_t *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_VCA_GetPath(intptr_t, intptr_t, int32_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_VCA_GetVolume(intptr_t, float*, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FMOD_Studio_VCA_SetVolume(intptr_t, float);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// FMOD.RESULT FMOD.Studio.System::create(FMOD.Studio.System&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_create_mBC57E92BDFD89F9AEED4146860F9CDC4963AC333 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * ___system0, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_Create(out system.handle, VERSION.number);
		System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * L_0 = ___system0;
		intptr_t* L_1 = L_0->get_address_of_handle_0();
		int32_t L_2;
		L_2 = System_FMOD_Studio_System_Create_m875F59BB313051076C4A106174F5BE2C081CCF3E((intptr_t*)L_1, ((int32_t)131335), /*hidden argument*/NULL);
		return L_2;
	}
}
// FMOD.RESULT FMOD.Studio.System::setAdvancedSettings(FMOD.Studio.ADVANCEDSETTINGS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_setAdvancedSettings_m3F7C95F259E0C86D3C3556E60915836E67A84FE8 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166  ___settings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings.cbsize = Marshal.SizeOf(typeof(ADVANCEDSETTINGS));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Marshal_SizeOf_m5482D50095CD4ECFFE66778DDAB9173AD834E85A(L_1, /*hidden argument*/NULL);
		(&___settings0)->set_cbsize_0(L_2);
		// return FMOD_Studio_System_SetAdvancedSettings(this.handle, ref settings);
		intptr_t L_3 = __this->get_handle_0();
		int32_t L_4;
		L_4 = System_FMOD_Studio_System_SetAdvancedSettings_mB547FE588A152BDB9488BC4E146C7203E2016263((intptr_t)L_3, (ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166 *)(&___settings0), /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t System_setAdvancedSettings_m3F7C95F259E0C86D3C3556E60915836E67A84FE8_AdjustorThunk (RuntimeObject * __this, ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166  ___settings0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_setAdvancedSettings_m3F7C95F259E0C86D3C3556E60915836E67A84FE8(_thisAdjusted, ___settings0, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::setAdvancedSettings(FMOD.Studio.ADVANCEDSETTINGS,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_setAdvancedSettings_m1E6FC5B36EBAC7402183EDB9603A7C5C097708A5 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166  ___settings0, String_t* ___encryptionKey1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (StringHelper.ThreadSafeEncoding encoder = StringHelper.GetFreeHelper())
		IL2CPP_RUNTIME_CLASS_INIT(StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_0;
		L_0 = StringHelper_GetFreeHelper_m8E145BDAC33B7FB10BBF4A21F2FB8CA431019977(/*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		// IntPtr userKey = settings.encryptionkey;
		ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166  L_1 = ___settings0;
		intptr_t L_2 = L_1.get_encryptionkey_6();
		V_1 = (intptr_t)L_2;
		// settings.encryptionkey = encoder.intptrFromStringUTF8(encryptionKey);
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_3 = V_0;
		String_t* L_4 = ___encryptionKey1;
		NullCheck(L_3);
		intptr_t L_5;
		L_5 = ThreadSafeEncoding_intptrFromStringUTF8_m696A338AABE8077540283139A745C1187E4EF9DD(L_3, L_4, /*hidden argument*/NULL);
		(&___settings0)->set_encryptionkey_6((intptr_t)L_5);
		// FMOD.RESULT result = setAdvancedSettings(settings);
		ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166  L_6 = ___settings0;
		int32_t L_7;
		L_7 = System_setAdvancedSettings_m3F7C95F259E0C86D3C3556E60915836E67A84FE8((System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *)__this, L_6, /*hidden argument*/NULL);
		// settings.encryptionkey = userKey;
		intptr_t L_8 = V_1;
		(&___settings0)->set_encryptionkey_6((intptr_t)L_8);
		// return result;
		V_2 = L_7;
		IL2CPP_LEAVE(0x37, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_9 = V_0;
			if (!L_9)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_10 = V_0;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_10);
		}

IL_0036:
		{
			IL2CPP_END_FINALLY(45)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x37, IL_0037)
	}

IL_0037:
	{
		// }
		int32_t L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C  int32_t System_setAdvancedSettings_m1E6FC5B36EBAC7402183EDB9603A7C5C097708A5_AdjustorThunk (RuntimeObject * __this, ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166  ___settings0, String_t* ___encryptionKey1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_setAdvancedSettings_m1E6FC5B36EBAC7402183EDB9603A7C5C097708A5(_thisAdjusted, ___settings0, ___encryptionKey1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getAdvancedSettings(FMOD.Studio.ADVANCEDSETTINGS&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getAdvancedSettings_m5345CE64ED5B998FA0BB59025AE6EDD88415126E (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166 * ___settings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings.cbsize = Marshal.SizeOf(typeof(ADVANCEDSETTINGS));
		ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166 * L_0 = ___settings0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Marshal_SizeOf_m5482D50095CD4ECFFE66778DDAB9173AD834E85A(L_2, /*hidden argument*/NULL);
		L_0->set_cbsize_0(L_3);
		// return FMOD_Studio_System_GetAdvancedSettings(this.handle, out settings);
		intptr_t L_4 = __this->get_handle_0();
		ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166 * L_5 = ___settings0;
		int32_t L_6;
		L_6 = System_FMOD_Studio_System_GetAdvancedSettings_m50C48E518897870D8060A2DBD69D9E5B0012402B((intptr_t)L_4, (ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166 *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t System_getAdvancedSettings_m5345CE64ED5B998FA0BB59025AE6EDD88415126E_AdjustorThunk (RuntimeObject * __this, ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166 * ___settings0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getAdvancedSettings_m5345CE64ED5B998FA0BB59025AE6EDD88415126E(_thisAdjusted, ___settings0, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::initialize(System.Int32,FMOD.Studio.INITFLAGS,FMOD.INITFLAGS,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_initialize_m066BBC9977DD2D57ED75601FA9611BF5A27157DC (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t ___maxchannels0, uint32_t ___studioflags1, uint32_t ___flags2, intptr_t ___extradriverdata3, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_Initialize(this.handle, maxchannels, studioflags, flags, extradriverdata);
		intptr_t L_0 = __this->get_handle_0();
		int32_t L_1 = ___maxchannels0;
		uint32_t L_2 = ___studioflags1;
		uint32_t L_3 = ___flags2;
		intptr_t L_4 = ___extradriverdata3;
		int32_t L_5;
		L_5 = System_FMOD_Studio_System_Initialize_m69CAC5B15B9BF6E42F1A6B70ED3F499954C6A60C((intptr_t)L_0, L_1, L_2, L_3, (intptr_t)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  int32_t System_initialize_m066BBC9977DD2D57ED75601FA9611BF5A27157DC_AdjustorThunk (RuntimeObject * __this, int32_t ___maxchannels0, uint32_t ___studioflags1, uint32_t ___flags2, intptr_t ___extradriverdata3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_initialize_m066BBC9977DD2D57ED75601FA9611BF5A27157DC(_thisAdjusted, ___maxchannels0, ___studioflags1, ___flags2, ___extradriverdata3, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_release_mB9653E6FC80F89C89A16E02005DDE02449DC80DF (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_Release(this.handle);
		intptr_t L_0 = __this->get_handle_0();
		int32_t L_1;
		L_1 = System_FMOD_Studio_System_Release_m5C2605A1DC98DE3EFB0F86E6F166773B3BA468C2((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t System_release_mB9653E6FC80F89C89A16E02005DDE02449DC80DF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_release_mB9653E6FC80F89C89A16E02005DDE02449DC80DF(_thisAdjusted, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_update_m398AD04EE5D4DD3CC8A01AF3BAF2355CFF31A82B (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_Update(this.handle);
		intptr_t L_0 = __this->get_handle_0();
		int32_t L_1;
		L_1 = System_FMOD_Studio_System_Update_m3995196EB5F71DB619B900DE9DCEE41857B52EB8((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t System_update_m398AD04EE5D4DD3CC8A01AF3BAF2355CFF31A82B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_update_m398AD04EE5D4DD3CC8A01AF3BAF2355CFF31A82B(_thisAdjusted, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getCoreSystem(FMOD.System&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getCoreSystem_mB44AD2F59984031C59CB073ABEEB2248C4851DDC (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, System_t9B8A23CA218F79F4E360B186DF4BFCF9E035D34B * ___coresystem0, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_GetCoreSystem(this.handle, out coresystem.handle);
		intptr_t L_0 = __this->get_handle_0();
		System_t9B8A23CA218F79F4E360B186DF4BFCF9E035D34B * L_1 = ___coresystem0;
		intptr_t* L_2 = L_1->get_address_of_handle_0();
		int32_t L_3;
		L_3 = System_FMOD_Studio_System_GetCoreSystem_m509D8325373161C34929AA61DCD90E1DFBDBF004((intptr_t)L_0, (intptr_t*)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t System_getCoreSystem_mB44AD2F59984031C59CB073ABEEB2248C4851DDC_AdjustorThunk (RuntimeObject * __this, System_t9B8A23CA218F79F4E360B186DF4BFCF9E035D34B * ___coresystem0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getCoreSystem_mB44AD2F59984031C59CB073ABEEB2248C4851DDC(_thisAdjusted, ___coresystem0, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getEvent(System.String,FMOD.Studio.EventDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getEvent_mAD72F0F4145F38E37FC8F5F92BDB90074A43BD24 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___path0, EventDescription_tA7B5CD79AFB0B96E61BEB585B591EACF17319F5D * ____event1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (StringHelper.ThreadSafeEncoding encoder = StringHelper.GetFreeHelper())
		IL2CPP_RUNTIME_CLASS_INIT(StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_0;
		L_0 = StringHelper_GetFreeHelper_m8E145BDAC33B7FB10BBF4A21F2FB8CA431019977(/*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		// return FMOD_Studio_System_GetEvent(this.handle, encoder.byteFromStringUTF8(path), out _event.handle);
		intptr_t L_1 = __this->get_handle_0();
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_2 = V_0;
		String_t* L_3 = ___path0;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = ThreadSafeEncoding_byteFromStringUTF8_m125AE74374BC84CA626377F9CF7FDF6DF0D1E24E(L_2, L_3, /*hidden argument*/NULL);
		EventDescription_tA7B5CD79AFB0B96E61BEB585B591EACF17319F5D * L_5 = ____event1;
		intptr_t* L_6 = L_5->get_address_of_handle_0();
		int32_t L_7;
		L_7 = System_FMOD_Studio_System_GetEvent_mA7BB5F1EE9EF0ACB3C807514BF9F41EA14E4DFAC((intptr_t)L_1, L_4, (intptr_t*)L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		IL2CPP_LEAVE(0x2B, FINALLY_0021);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_8 = V_0;
			if (!L_8)
			{
				goto IL_002a;
			}
		}

IL_0024:
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_9 = V_0;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_9);
		}

IL_002a:
		{
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
	}

IL_002b:
	{
		// }
		int32_t L_10 = V_1;
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t System_getEvent_mAD72F0F4145F38E37FC8F5F92BDB90074A43BD24_AdjustorThunk (RuntimeObject * __this, String_t* ___path0, EventDescription_tA7B5CD79AFB0B96E61BEB585B591EACF17319F5D * ____event1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getEvent_mAD72F0F4145F38E37FC8F5F92BDB90074A43BD24(_thisAdjusted, ___path0, ____event1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getBus(System.String,FMOD.Studio.Bus&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getBus_mB36901E087D9AD25E41111E0AC439B3B128ADAB4 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___path0, Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520 * ___bus1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (StringHelper.ThreadSafeEncoding encoder = StringHelper.GetFreeHelper())
		IL2CPP_RUNTIME_CLASS_INIT(StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_0;
		L_0 = StringHelper_GetFreeHelper_m8E145BDAC33B7FB10BBF4A21F2FB8CA431019977(/*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		// return FMOD_Studio_System_GetBus(this.handle, encoder.byteFromStringUTF8(path), out bus.handle);
		intptr_t L_1 = __this->get_handle_0();
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_2 = V_0;
		String_t* L_3 = ___path0;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = ThreadSafeEncoding_byteFromStringUTF8_m125AE74374BC84CA626377F9CF7FDF6DF0D1E24E(L_2, L_3, /*hidden argument*/NULL);
		Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520 * L_5 = ___bus1;
		intptr_t* L_6 = L_5->get_address_of_handle_0();
		int32_t L_7;
		L_7 = System_FMOD_Studio_System_GetBus_m0A1BE34C7ED27045D34F695A2BC26C7CCB983BDF((intptr_t)L_1, L_4, (intptr_t*)L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		IL2CPP_LEAVE(0x2B, FINALLY_0021);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_8 = V_0;
			if (!L_8)
			{
				goto IL_002a;
			}
		}

IL_0024:
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_9 = V_0;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_9);
		}

IL_002a:
		{
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
	}

IL_002b:
	{
		// }
		int32_t L_10 = V_1;
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t System_getBus_mB36901E087D9AD25E41111E0AC439B3B128ADAB4_AdjustorThunk (RuntimeObject * __this, String_t* ___path0, Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520 * ___bus1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getBus_mB36901E087D9AD25E41111E0AC439B3B128ADAB4(_thisAdjusted, ___path0, ___bus1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getVCA(System.String,FMOD.Studio.VCA&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getVCA_mDED596B4B36CEF26E7A42CA71519F5BE2FCB0EE4 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___path0, VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * ___vca1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (StringHelper.ThreadSafeEncoding encoder = StringHelper.GetFreeHelper())
		IL2CPP_RUNTIME_CLASS_INIT(StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_0;
		L_0 = StringHelper_GetFreeHelper_m8E145BDAC33B7FB10BBF4A21F2FB8CA431019977(/*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		// return FMOD_Studio_System_GetVCA(this.handle, encoder.byteFromStringUTF8(path), out vca.handle);
		intptr_t L_1 = __this->get_handle_0();
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_2 = V_0;
		String_t* L_3 = ___path0;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = ThreadSafeEncoding_byteFromStringUTF8_m125AE74374BC84CA626377F9CF7FDF6DF0D1E24E(L_2, L_3, /*hidden argument*/NULL);
		VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * L_5 = ___vca1;
		intptr_t* L_6 = L_5->get_address_of_handle_0();
		int32_t L_7;
		L_7 = System_FMOD_Studio_System_GetVCA_m968EB6714D6BEB56EA81138A80E068FD6D00B4E6((intptr_t)L_1, L_4, (intptr_t*)L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		IL2CPP_LEAVE(0x2B, FINALLY_0021);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_8 = V_0;
			if (!L_8)
			{
				goto IL_002a;
			}
		}

IL_0024:
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_9 = V_0;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_9);
		}

IL_002a:
		{
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
	}

IL_002b:
	{
		// }
		int32_t L_10 = V_1;
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t System_getVCA_mDED596B4B36CEF26E7A42CA71519F5BE2FCB0EE4_AdjustorThunk (RuntimeObject * __this, String_t* ___path0, VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * ___vca1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getVCA_mDED596B4B36CEF26E7A42CA71519F5BE2FCB0EE4(_thisAdjusted, ___path0, ___vca1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getBank(System.String,FMOD.Studio.Bank&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getBank_m18126FE6B7336A16B0522BC8633DEA38DE5F7116 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___path0, Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * ___bank1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (StringHelper.ThreadSafeEncoding encoder = StringHelper.GetFreeHelper())
		IL2CPP_RUNTIME_CLASS_INIT(StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_0;
		L_0 = StringHelper_GetFreeHelper_m8E145BDAC33B7FB10BBF4A21F2FB8CA431019977(/*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		// return FMOD_Studio_System_GetBank(this.handle, encoder.byteFromStringUTF8(path), out bank.handle);
		intptr_t L_1 = __this->get_handle_0();
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_2 = V_0;
		String_t* L_3 = ___path0;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = ThreadSafeEncoding_byteFromStringUTF8_m125AE74374BC84CA626377F9CF7FDF6DF0D1E24E(L_2, L_3, /*hidden argument*/NULL);
		Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * L_5 = ___bank1;
		intptr_t* L_6 = L_5->get_address_of_handle_0();
		int32_t L_7;
		L_7 = System_FMOD_Studio_System_GetBank_m8AF075ED1DF2FA199EE1E6C736A572870EC294BD((intptr_t)L_1, L_4, (intptr_t*)L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		IL2CPP_LEAVE(0x2B, FINALLY_0021);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_8 = V_0;
			if (!L_8)
			{
				goto IL_002a;
			}
		}

IL_0024:
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_9 = V_0;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_9);
		}

IL_002a:
		{
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
	}

IL_002b:
	{
		// }
		int32_t L_10 = V_1;
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t System_getBank_m18126FE6B7336A16B0522BC8633DEA38DE5F7116_AdjustorThunk (RuntimeObject * __this, String_t* ___path0, Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * ___bank1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getBank_m18126FE6B7336A16B0522BC8633DEA38DE5F7116(_thisAdjusted, ___path0, ___bank1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getEventByID(System.Guid,FMOD.Studio.EventDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getEventByID_m07896669F4697E1BD9AFEA1A392A2468D5BEB479 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, Guid_t  ___id0, EventDescription_tA7B5CD79AFB0B96E61BEB585B591EACF17319F5D * ____event1, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_GetEventByID(this.handle, ref id, out _event.handle);
		intptr_t L_0 = __this->get_handle_0();
		EventDescription_tA7B5CD79AFB0B96E61BEB585B591EACF17319F5D * L_1 = ____event1;
		intptr_t* L_2 = L_1->get_address_of_handle_0();
		int32_t L_3;
		L_3 = System_FMOD_Studio_System_GetEventByID_mE7A30DCD2A1A278FAB174BFC7B9C90ADC3004AFA((intptr_t)L_0, (Guid_t *)(&___id0), (intptr_t*)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t System_getEventByID_m07896669F4697E1BD9AFEA1A392A2468D5BEB479_AdjustorThunk (RuntimeObject * __this, Guid_t  ___id0, EventDescription_tA7B5CD79AFB0B96E61BEB585B591EACF17319F5D * ____event1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getEventByID_m07896669F4697E1BD9AFEA1A392A2468D5BEB479(_thisAdjusted, ___id0, ____event1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getBusByID(System.Guid,FMOD.Studio.Bus&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getBusByID_mD07086C56DA7CAD6B2CB401985C91FD880F85C99 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, Guid_t  ___id0, Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520 * ___bus1, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_GetBusByID(this.handle, ref id, out bus.handle);
		intptr_t L_0 = __this->get_handle_0();
		Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520 * L_1 = ___bus1;
		intptr_t* L_2 = L_1->get_address_of_handle_0();
		int32_t L_3;
		L_3 = System_FMOD_Studio_System_GetBusByID_m2BF67D78BCC9324C58A372D4CC842A5E01E81B01((intptr_t)L_0, (Guid_t *)(&___id0), (intptr_t*)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t System_getBusByID_mD07086C56DA7CAD6B2CB401985C91FD880F85C99_AdjustorThunk (RuntimeObject * __this, Guid_t  ___id0, Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520 * ___bus1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getBusByID_mD07086C56DA7CAD6B2CB401985C91FD880F85C99(_thisAdjusted, ___id0, ___bus1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getVCAByID(System.Guid,FMOD.Studio.VCA&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getVCAByID_m65D9EC3929E571858EA2B4CE6628896705314C40 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, Guid_t  ___id0, VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * ___vca1, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_GetVCAByID(this.handle, ref id, out vca.handle);
		intptr_t L_0 = __this->get_handle_0();
		VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * L_1 = ___vca1;
		intptr_t* L_2 = L_1->get_address_of_handle_0();
		int32_t L_3;
		L_3 = System_FMOD_Studio_System_GetVCAByID_mB47E038978E9989E4F023201F91CCE556222689D((intptr_t)L_0, (Guid_t *)(&___id0), (intptr_t*)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t System_getVCAByID_m65D9EC3929E571858EA2B4CE6628896705314C40_AdjustorThunk (RuntimeObject * __this, Guid_t  ___id0, VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * ___vca1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getVCAByID_m65D9EC3929E571858EA2B4CE6628896705314C40(_thisAdjusted, ___id0, ___vca1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getBankByID(System.Guid,FMOD.Studio.Bank&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getBankByID_mEBC25A7511CCA7871B9404347CFE60E2D502964C (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, Guid_t  ___id0, Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * ___bank1, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_GetBankByID(this.handle, ref id, out bank.handle);
		intptr_t L_0 = __this->get_handle_0();
		Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * L_1 = ___bank1;
		intptr_t* L_2 = L_1->get_address_of_handle_0();
		int32_t L_3;
		L_3 = System_FMOD_Studio_System_GetBankByID_m52C5DAD8A74F213824ADD97288F667B898CCFF88((intptr_t)L_0, (Guid_t *)(&___id0), (intptr_t*)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t System_getBankByID_mEBC25A7511CCA7871B9404347CFE60E2D502964C_AdjustorThunk (RuntimeObject * __this, Guid_t  ___id0, Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * ___bank1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getBankByID_mEBC25A7511CCA7871B9404347CFE60E2D502964C(_thisAdjusted, ___id0, ___bank1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getSoundInfo(System.String,FMOD.Studio.SOUND_INFO&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getSoundInfo_m371AEE9C61A8FFE90A9B2B7A83664C71E413A44C (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___key0, SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21 * ___info1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (StringHelper.ThreadSafeEncoding encoder = StringHelper.GetFreeHelper())
		IL2CPP_RUNTIME_CLASS_INIT(StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_0;
		L_0 = StringHelper_GetFreeHelper_m8E145BDAC33B7FB10BBF4A21F2FB8CA431019977(/*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		// return FMOD_Studio_System_GetSoundInfo(this.handle, encoder.byteFromStringUTF8(key), out info);
		intptr_t L_1 = __this->get_handle_0();
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_2 = V_0;
		String_t* L_3 = ___key0;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = ThreadSafeEncoding_byteFromStringUTF8_m125AE74374BC84CA626377F9CF7FDF6DF0D1E24E(L_2, L_3, /*hidden argument*/NULL);
		SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21 * L_5 = ___info1;
		int32_t L_6;
		L_6 = System_FMOD_Studio_System_GetSoundInfo_mCB29260F056166F4E27AA1767FA74EBC8A8C7FAA((intptr_t)L_1, L_4, (SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21 *)L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		IL2CPP_LEAVE(0x26, FINALLY_001c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001c;
	}

FINALLY_001c:
	{ // begin finally (depth: 1)
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_7 = V_0;
			if (!L_7)
			{
				goto IL_0025;
			}
		}

IL_001f:
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_8);
		}

IL_0025:
		{
			IL2CPP_END_FINALLY(28)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(28)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x26, IL_0026)
	}

IL_0026:
	{
		// }
		int32_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C  int32_t System_getSoundInfo_m371AEE9C61A8FFE90A9B2B7A83664C71E413A44C_AdjustorThunk (RuntimeObject * __this, String_t* ___key0, SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21 * ___info1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getSoundInfo_m371AEE9C61A8FFE90A9B2B7A83664C71E413A44C(_thisAdjusted, ___key0, ___info1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getParameterDescriptionByName(System.String,FMOD.Studio.PARAMETER_DESCRIPTION&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getParameterDescriptionByName_mCB0CC15231E71C233CBCDD5D4AEC5E7D252352E4 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___name0, PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B * ___parameter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (StringHelper.ThreadSafeEncoding encoder = StringHelper.GetFreeHelper())
		IL2CPP_RUNTIME_CLASS_INIT(StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_0;
		L_0 = StringHelper_GetFreeHelper_m8E145BDAC33B7FB10BBF4A21F2FB8CA431019977(/*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		// return FMOD_Studio_System_GetParameterDescriptionByName(this.handle, encoder.byteFromStringUTF8(name), out parameter);
		intptr_t L_1 = __this->get_handle_0();
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_2 = V_0;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = ThreadSafeEncoding_byteFromStringUTF8_m125AE74374BC84CA626377F9CF7FDF6DF0D1E24E(L_2, L_3, /*hidden argument*/NULL);
		PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B * L_5 = ___parameter1;
		int32_t L_6;
		L_6 = System_FMOD_Studio_System_GetParameterDescriptionByName_m41EB3A4BBBCB0E65E81248EDDEF708BB12806733((intptr_t)L_1, L_4, (PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B *)L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		IL2CPP_LEAVE(0x26, FINALLY_001c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001c;
	}

FINALLY_001c:
	{ // begin finally (depth: 1)
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_7 = V_0;
			if (!L_7)
			{
				goto IL_0025;
			}
		}

IL_001f:
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_8);
		}

IL_0025:
		{
			IL2CPP_END_FINALLY(28)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(28)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x26, IL_0026)
	}

IL_0026:
	{
		// }
		int32_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C  int32_t System_getParameterDescriptionByName_mCB0CC15231E71C233CBCDD5D4AEC5E7D252352E4_AdjustorThunk (RuntimeObject * __this, String_t* ___name0, PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B * ___parameter1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getParameterDescriptionByName_mCB0CC15231E71C233CBCDD5D4AEC5E7D252352E4(_thisAdjusted, ___name0, ___parameter1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getParameterDescriptionByID(FMOD.Studio.PARAMETER_ID,FMOD.Studio.PARAMETER_DESCRIPTION&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getParameterDescriptionByID_m3C299167721003AD51153BDDF392C8DA91149E9D (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  ___id0, PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B * ___parameter1, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_GetParameterDescriptionByID(this.handle, id, out parameter);
		intptr_t L_0 = __this->get_handle_0();
		PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  L_1 = ___id0;
		PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B * L_2 = ___parameter1;
		int32_t L_3;
		L_3 = System_FMOD_Studio_System_GetParameterDescriptionByID_m75C9F741BA04841B728BB7EB3D729929484BB035((intptr_t)L_0, L_1, (PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B *)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t System_getParameterDescriptionByID_m3C299167721003AD51153BDDF392C8DA91149E9D_AdjustorThunk (RuntimeObject * __this, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  ___id0, PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B * ___parameter1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getParameterDescriptionByID_m3C299167721003AD51153BDDF392C8DA91149E9D(_thisAdjusted, ___id0, ___parameter1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getParameterByID(FMOD.Studio.PARAMETER_ID,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getParameterByID_m4F4A619E3855C0767BA4300E234CFCB2E2971812 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  ___id0, float* ___value1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return getParameterByID(id, out value, out finalValue);
		PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  L_0 = ___id0;
		float* L_1 = ___value1;
		int32_t L_2;
		L_2 = System_getParameterByID_m4616BFB40DB1C96E5B9121F4A0260035F9947075((System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *)__this, L_0, (float*)L_1, (float*)(&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t System_getParameterByID_m4F4A619E3855C0767BA4300E234CFCB2E2971812_AdjustorThunk (RuntimeObject * __this, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  ___id0, float* ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getParameterByID_m4F4A619E3855C0767BA4300E234CFCB2E2971812(_thisAdjusted, ___id0, ___value1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getParameterByID(FMOD.Studio.PARAMETER_ID,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getParameterByID_m4616BFB40DB1C96E5B9121F4A0260035F9947075 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  ___id0, float* ___value1, float* ___finalvalue2, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_GetParameterByID(this.handle, id, out value, out finalvalue);
		intptr_t L_0 = __this->get_handle_0();
		PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  L_1 = ___id0;
		float* L_2 = ___value1;
		float* L_3 = ___finalvalue2;
		int32_t L_4;
		L_4 = System_FMOD_Studio_System_GetParameterByID_m4AD118E0F2C06A4DF592266E268E64E9CB622BD6((intptr_t)L_0, L_1, (float*)L_2, (float*)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t System_getParameterByID_m4616BFB40DB1C96E5B9121F4A0260035F9947075_AdjustorThunk (RuntimeObject * __this, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  ___id0, float* ___value1, float* ___finalvalue2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getParameterByID_m4616BFB40DB1C96E5B9121F4A0260035F9947075(_thisAdjusted, ___id0, ___value1, ___finalvalue2, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::setParameterByID(FMOD.Studio.PARAMETER_ID,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_setParameterByID_mD829C06BC3C0C1F473326758ED858B94EE48AA3D (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  ___id0, float ___value1, bool ___ignoreseekspeed2, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_SetParameterByID(this.handle, id, value, ignoreseekspeed);
		intptr_t L_0 = __this->get_handle_0();
		PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  L_1 = ___id0;
		float L_2 = ___value1;
		bool L_3 = ___ignoreseekspeed2;
		int32_t L_4;
		L_4 = System_FMOD_Studio_System_SetParameterByID_mA1353C84C3150E756B4EB339E83424B4D8DF8DC9((intptr_t)L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t System_setParameterByID_mD829C06BC3C0C1F473326758ED858B94EE48AA3D_AdjustorThunk (RuntimeObject * __this, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  ___id0, float ___value1, bool ___ignoreseekspeed2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_setParameterByID_mD829C06BC3C0C1F473326758ED858B94EE48AA3D(_thisAdjusted, ___id0, ___value1, ___ignoreseekspeed2, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::setParametersByIDs(FMOD.Studio.PARAMETER_ID[],System.Single[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_setParametersByIDs_mF671A06A744EDC550678DC6FE78080A7BDF9F566 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, PARAMETER_IDU5BU5D_tBF176CF014283DCED4159FBAE8605A11C6F2B373* ___ids0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values1, int32_t ___count2, bool ___ignoreseekspeed3, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_SetParametersByIDs(this.handle, ids, values, count, ignoreseekspeed);
		intptr_t L_0 = __this->get_handle_0();
		PARAMETER_IDU5BU5D_tBF176CF014283DCED4159FBAE8605A11C6F2B373* L_1 = ___ids0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___values1;
		int32_t L_3 = ___count2;
		bool L_4 = ___ignoreseekspeed3;
		int32_t L_5;
		L_5 = System_FMOD_Studio_System_SetParametersByIDs_mE600214000F44C6688B97C808375CD8E3DF38FCC((intptr_t)L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  int32_t System_setParametersByIDs_mF671A06A744EDC550678DC6FE78080A7BDF9F566_AdjustorThunk (RuntimeObject * __this, PARAMETER_IDU5BU5D_tBF176CF014283DCED4159FBAE8605A11C6F2B373* ___ids0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values1, int32_t ___count2, bool ___ignoreseekspeed3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_setParametersByIDs_mF671A06A744EDC550678DC6FE78080A7BDF9F566(_thisAdjusted, ___ids0, ___values1, ___count2, ___ignoreseekspeed3, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getParameterByName(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getParameterByName_m6E5C65D39855F5808A9D19E85BFC99C6AEDB52DE (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___name0, float* ___value1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return getParameterByName(name, out value, out finalValue);
		String_t* L_0 = ___name0;
		float* L_1 = ___value1;
		int32_t L_2;
		L_2 = System_getParameterByName_mED8C62CBA85F4206E61B15E092681AC31A268E8B((System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *)__this, L_0, (float*)L_1, (float*)(&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t System_getParameterByName_m6E5C65D39855F5808A9D19E85BFC99C6AEDB52DE_AdjustorThunk (RuntimeObject * __this, String_t* ___name0, float* ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getParameterByName_m6E5C65D39855F5808A9D19E85BFC99C6AEDB52DE(_thisAdjusted, ___name0, ___value1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getParameterByName(System.String,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getParameterByName_mED8C62CBA85F4206E61B15E092681AC31A268E8B (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___name0, float* ___value1, float* ___finalvalue2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (StringHelper.ThreadSafeEncoding encoder = StringHelper.GetFreeHelper())
		IL2CPP_RUNTIME_CLASS_INIT(StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_0;
		L_0 = StringHelper_GetFreeHelper_m8E145BDAC33B7FB10BBF4A21F2FB8CA431019977(/*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		// return FMOD_Studio_System_GetParameterByName(this.handle, encoder.byteFromStringUTF8(name), out value, out finalvalue);
		intptr_t L_1 = __this->get_handle_0();
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_2 = V_0;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = ThreadSafeEncoding_byteFromStringUTF8_m125AE74374BC84CA626377F9CF7FDF6DF0D1E24E(L_2, L_3, /*hidden argument*/NULL);
		float* L_5 = ___value1;
		float* L_6 = ___finalvalue2;
		int32_t L_7;
		L_7 = System_FMOD_Studio_System_GetParameterByName_mD88531BCB10C01AFACB4EAC701643648EF8630EA((intptr_t)L_1, L_4, (float*)L_5, (float*)L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		IL2CPP_LEAVE(0x27, FINALLY_001d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001d;
	}

FINALLY_001d:
	{ // begin finally (depth: 1)
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_8 = V_0;
			if (!L_8)
			{
				goto IL_0026;
			}
		}

IL_0020:
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_9 = V_0;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_9);
		}

IL_0026:
		{
			IL2CPP_END_FINALLY(29)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(29)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x27, IL_0027)
	}

IL_0027:
	{
		// }
		int32_t L_10 = V_1;
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t System_getParameterByName_mED8C62CBA85F4206E61B15E092681AC31A268E8B_AdjustorThunk (RuntimeObject * __this, String_t* ___name0, float* ___value1, float* ___finalvalue2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getParameterByName_mED8C62CBA85F4206E61B15E092681AC31A268E8B(_thisAdjusted, ___name0, ___value1, ___finalvalue2, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::setParameterByName(System.String,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_setParameterByName_m78E989D62076D3AB1729E9ECEE07BC7A49169C75 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___name0, float ___value1, bool ___ignoreseekspeed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (StringHelper.ThreadSafeEncoding encoder = StringHelper.GetFreeHelper())
		IL2CPP_RUNTIME_CLASS_INIT(StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_0;
		L_0 = StringHelper_GetFreeHelper_m8E145BDAC33B7FB10BBF4A21F2FB8CA431019977(/*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		// return FMOD_Studio_System_SetParameterByName(this.handle, encoder.byteFromStringUTF8(name), value, ignoreseekspeed);
		intptr_t L_1 = __this->get_handle_0();
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_2 = V_0;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = ThreadSafeEncoding_byteFromStringUTF8_m125AE74374BC84CA626377F9CF7FDF6DF0D1E24E(L_2, L_3, /*hidden argument*/NULL);
		float L_5 = ___value1;
		bool L_6 = ___ignoreseekspeed2;
		int32_t L_7;
		L_7 = System_FMOD_Studio_System_SetParameterByName_mB5BCB7C16EC75D4A0D76EB0FFBF1957178209318((intptr_t)L_1, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		IL2CPP_LEAVE(0x27, FINALLY_001d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001d;
	}

FINALLY_001d:
	{ // begin finally (depth: 1)
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_8 = V_0;
			if (!L_8)
			{
				goto IL_0026;
			}
		}

IL_0020:
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_9 = V_0;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_9);
		}

IL_0026:
		{
			IL2CPP_END_FINALLY(29)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(29)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x27, IL_0027)
	}

IL_0027:
	{
		// }
		int32_t L_10 = V_1;
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t System_setParameterByName_m78E989D62076D3AB1729E9ECEE07BC7A49169C75_AdjustorThunk (RuntimeObject * __this, String_t* ___name0, float ___value1, bool ___ignoreseekspeed2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_setParameterByName_m78E989D62076D3AB1729E9ECEE07BC7A49169C75(_thisAdjusted, ___name0, ___value1, ___ignoreseekspeed2, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::lookupID(System.String,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_lookupID_m8457C3111F4C8D70B9255447A4685F4723AF3E89 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___path0, Guid_t * ___id1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (StringHelper.ThreadSafeEncoding encoder = StringHelper.GetFreeHelper())
		IL2CPP_RUNTIME_CLASS_INIT(StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_0;
		L_0 = StringHelper_GetFreeHelper_m8E145BDAC33B7FB10BBF4A21F2FB8CA431019977(/*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		// return FMOD_Studio_System_LookupID(this.handle, encoder.byteFromStringUTF8(path), out id);
		intptr_t L_1 = __this->get_handle_0();
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_2 = V_0;
		String_t* L_3 = ___path0;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = ThreadSafeEncoding_byteFromStringUTF8_m125AE74374BC84CA626377F9CF7FDF6DF0D1E24E(L_2, L_3, /*hidden argument*/NULL);
		Guid_t * L_5 = ___id1;
		int32_t L_6;
		L_6 = System_FMOD_Studio_System_LookupID_mE1A03AD4042AF546DEFF4AB11FF0EC570F894C7E((intptr_t)L_1, L_4, (Guid_t *)L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		IL2CPP_LEAVE(0x26, FINALLY_001c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001c;
	}

FINALLY_001c:
	{ // begin finally (depth: 1)
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_7 = V_0;
			if (!L_7)
			{
				goto IL_0025;
			}
		}

IL_001f:
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_8);
		}

IL_0025:
		{
			IL2CPP_END_FINALLY(28)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(28)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x26, IL_0026)
	}

IL_0026:
	{
		// }
		int32_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C  int32_t System_lookupID_m8457C3111F4C8D70B9255447A4685F4723AF3E89_AdjustorThunk (RuntimeObject * __this, String_t* ___path0, Guid_t * ___id1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_lookupID_m8457C3111F4C8D70B9255447A4685F4723AF3E89(_thisAdjusted, ___path0, ___id1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::lookupPath(System.Guid,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_lookupPath_m9E9CA94E2BA9236FBDB9346880443E4F99B5FAA3 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, Guid_t  ___id0, String_t** ___path1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// path = null;
		String_t** L_0 = ___path1;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// using (StringHelper.ThreadSafeEncoding encoder = StringHelper.GetFreeHelper())
		IL2CPP_RUNTIME_CLASS_INIT(StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_1;
		L_1 = StringHelper_GetFreeHelper_m8E145BDAC33B7FB10BBF4A21F2FB8CA431019977(/*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			// IntPtr stringMem = Marshal.AllocHGlobal(256);
			IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
			intptr_t L_2;
			L_2 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(((int32_t)256), /*hidden argument*/NULL);
			V_1 = (intptr_t)L_2;
			// int retrieved = 0;
			V_2 = 0;
			// RESULT result = FMOD_Studio_System_LookupPath(this.handle, ref id, stringMem, 256, out retrieved);
			intptr_t L_3 = __this->get_handle_0();
			intptr_t L_4 = V_1;
			int32_t L_5;
			L_5 = System_FMOD_Studio_System_LookupPath_mC36E3D11E4EAF85523D26769E5DE5301439C8EF8((intptr_t)L_3, (Guid_t *)(&___id0), (intptr_t)L_4, ((int32_t)256), (int32_t*)(&V_2), /*hidden argument*/NULL);
			V_3 = L_5;
			// if (result == RESULT.ERR_TRUNCATED)
			int32_t L_6 = V_3;
			if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)65)))))
			{
				goto IL_0050;
			}
		}

IL_0031:
		{
			// Marshal.FreeHGlobal(stringMem);
			intptr_t L_7 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
			Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_7, /*hidden argument*/NULL);
			// stringMem = Marshal.AllocHGlobal(retrieved);
			int32_t L_8 = V_2;
			intptr_t L_9;
			L_9 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(L_8, /*hidden argument*/NULL);
			V_1 = (intptr_t)L_9;
			// result = FMOD_Studio_System_LookupPath(this.handle, ref id, stringMem, retrieved, out retrieved);
			intptr_t L_10 = __this->get_handle_0();
			intptr_t L_11 = V_1;
			int32_t L_12 = V_2;
			int32_t L_13;
			L_13 = System_FMOD_Studio_System_LookupPath_mC36E3D11E4EAF85523D26769E5DE5301439C8EF8((intptr_t)L_10, (Guid_t *)(&___id0), (intptr_t)L_11, L_12, (int32_t*)(&V_2), /*hidden argument*/NULL);
			V_3 = L_13;
		}

IL_0050:
		{
			// if (result == RESULT.OK)
			int32_t L_14 = V_3;
			if (L_14)
			{
				goto IL_005c;
			}
		}

IL_0053:
		{
			// path = encoder.stringFromNative(stringMem);
			String_t** L_15 = ___path1;
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_16 = V_0;
			intptr_t L_17 = V_1;
			NullCheck(L_16);
			String_t* L_18;
			L_18 = ThreadSafeEncoding_stringFromNative_mC8F16234AA2F887DD608463B826DB612F4998234(L_16, (intptr_t)L_17, /*hidden argument*/NULL);
			*((RuntimeObject **)L_15) = (RuntimeObject *)L_18;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_15, (void*)(RuntimeObject *)L_18);
		}

IL_005c:
		{
			// Marshal.FreeHGlobal(stringMem);
			intptr_t L_19 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
			Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_19, /*hidden argument*/NULL);
			// return result;
			int32_t L_20 = V_3;
			V_4 = L_20;
			IL2CPP_LEAVE(0x71, FINALLY_0067);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0067;
	}

FINALLY_0067:
	{ // begin finally (depth: 1)
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_21 = V_0;
			if (!L_21)
			{
				goto IL_0070;
			}
		}

IL_006a:
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_22 = V_0;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_22);
		}

IL_0070:
		{
			IL2CPP_END_FINALLY(103)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(103)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x71, IL_0071)
	}

IL_0071:
	{
		// }
		int32_t L_23 = V_4;
		return L_23;
	}
}
IL2CPP_EXTERN_C  int32_t System_lookupPath_m9E9CA94E2BA9236FBDB9346880443E4F99B5FAA3_AdjustorThunk (RuntimeObject * __this, Guid_t  ___id0, String_t** ___path1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_lookupPath_m9E9CA94E2BA9236FBDB9346880443E4F99B5FAA3(_thisAdjusted, ___id0, ___path1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getNumListeners(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getNumListeners_m4754C2EEEFD8CE748B939B8F98F4D0DC313FD33D (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t* ___numlisteners0, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_GetNumListeners(this.handle, out numlisteners);
		intptr_t L_0 = __this->get_handle_0();
		int32_t* L_1 = ___numlisteners0;
		int32_t L_2;
		L_2 = System_FMOD_Studio_System_GetNumListeners_m6F6AC1FE0D2CC09E6FBEF9897279FB2DBCB2DD4F((intptr_t)L_0, (int32_t*)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t System_getNumListeners_m4754C2EEEFD8CE748B939B8F98F4D0DC313FD33D_AdjustorThunk (RuntimeObject * __this, int32_t* ___numlisteners0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getNumListeners_m4754C2EEEFD8CE748B939B8F98F4D0DC313FD33D(_thisAdjusted, ___numlisteners0, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::setNumListeners(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_setNumListeners_m9AA850BF7C1180932978A5E39C55CA883C442592 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t ___numlisteners0, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_SetNumListeners(this.handle, numlisteners);
		intptr_t L_0 = __this->get_handle_0();
		int32_t L_1 = ___numlisteners0;
		int32_t L_2;
		L_2 = System_FMOD_Studio_System_SetNumListeners_m5427E0CE877B8060DB873E57543045995EA5162D((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t System_setNumListeners_m9AA850BF7C1180932978A5E39C55CA883C442592_AdjustorThunk (RuntimeObject * __this, int32_t ___numlisteners0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_setNumListeners_m9AA850BF7C1180932978A5E39C55CA883C442592(_thisAdjusted, ___numlisteners0, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getListenerAttributes(System.Int32,FMOD.ATTRIBUTES_3D&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getListenerAttributes_mDBF3C967494F1CA12F05DC88B27F56E53BB5C065 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t ___listener0, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 * ___attributes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return FMOD_Studio_System_GetListenerAttributes(this.handle, listener, out attributes, IntPtr.Zero);
		intptr_t L_0 = __this->get_handle_0();
		int32_t L_1 = ___listener0;
		ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 * L_2 = ___attributes1;
		int32_t L_3;
		L_3 = System_FMOD_Studio_System_GetListenerAttributes_m5FEF44EE37D9995837A7B61A8E79C2A3330CBA14((intptr_t)L_0, L_1, (ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 *)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t System_getListenerAttributes_mDBF3C967494F1CA12F05DC88B27F56E53BB5C065_AdjustorThunk (RuntimeObject * __this, int32_t ___listener0, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 * ___attributes1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getListenerAttributes_mDBF3C967494F1CA12F05DC88B27F56E53BB5C065(_thisAdjusted, ___listener0, ___attributes1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getListenerAttributes(System.Int32,FMOD.ATTRIBUTES_3D&,FMOD.VECTOR&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getListenerAttributes_m614594E193EEC98E615464F3757E1DFDB545FA88 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t ___listener0, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 * ___attributes1, VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B * ___attenuationposition2, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_GetListenerAttributes(this.handle, listener, out attributes, out attenuationposition);
		intptr_t L_0 = __this->get_handle_0();
		int32_t L_1 = ___listener0;
		ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 * L_2 = ___attributes1;
		VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B * L_3 = ___attenuationposition2;
		int32_t L_4;
		L_4 = System_FMOD_Studio_System_GetListenerAttributes_mF78E495C338FCB0A29E04BA5F598F97FC66D3E8F((intptr_t)L_0, L_1, (ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 *)L_2, (VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t System_getListenerAttributes_m614594E193EEC98E615464F3757E1DFDB545FA88_AdjustorThunk (RuntimeObject * __this, int32_t ___listener0, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 * ___attributes1, VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B * ___attenuationposition2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getListenerAttributes_m614594E193EEC98E615464F3757E1DFDB545FA88(_thisAdjusted, ___listener0, ___attributes1, ___attenuationposition2, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::setListenerAttributes(System.Int32,FMOD.ATTRIBUTES_3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_setListenerAttributes_m90E3285B3F9D04089D164663265BB9BF8B23FECA (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t ___listener0, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734  ___attributes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return FMOD_Studio_System_SetListenerAttributes(this.handle, listener, ref attributes, IntPtr.Zero);
		intptr_t L_0 = __this->get_handle_0();
		int32_t L_1 = ___listener0;
		int32_t L_2;
		L_2 = System_FMOD_Studio_System_SetListenerAttributes_mEA39841F32E2AA5B59A7E4FC296CE507B163CE2E((intptr_t)L_0, L_1, (ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 *)(&___attributes1), (intptr_t)(0), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t System_setListenerAttributes_m90E3285B3F9D04089D164663265BB9BF8B23FECA_AdjustorThunk (RuntimeObject * __this, int32_t ___listener0, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734  ___attributes1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_setListenerAttributes_m90E3285B3F9D04089D164663265BB9BF8B23FECA(_thisAdjusted, ___listener0, ___attributes1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::setListenerAttributes(System.Int32,FMOD.ATTRIBUTES_3D,FMOD.VECTOR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_setListenerAttributes_mF816CEB6FE076652A8648256290FD06DD6527A8A (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t ___listener0, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734  ___attributes1, VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B  ___attenuationposition2, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_SetListenerAttributes(this.handle, listener, ref attributes, ref attenuationposition);
		intptr_t L_0 = __this->get_handle_0();
		int32_t L_1 = ___listener0;
		int32_t L_2;
		L_2 = System_FMOD_Studio_System_SetListenerAttributes_m0E4EFA117DF36765F1E74377CC0A7B2FF24916FF((intptr_t)L_0, L_1, (ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 *)(&___attributes1), (VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B *)(&___attenuationposition2), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t System_setListenerAttributes_mF816CEB6FE076652A8648256290FD06DD6527A8A_AdjustorThunk (RuntimeObject * __this, int32_t ___listener0, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734  ___attributes1, VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B  ___attenuationposition2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_setListenerAttributes_mF816CEB6FE076652A8648256290FD06DD6527A8A(_thisAdjusted, ___listener0, ___attributes1, ___attenuationposition2, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getListenerWeight(System.Int32,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getListenerWeight_m588FB81B1EF9E41E5118CD524EF5689C858B18D2 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t ___listener0, float* ___weight1, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_GetListenerWeight(this.handle, listener, out weight);
		intptr_t L_0 = __this->get_handle_0();
		int32_t L_1 = ___listener0;
		float* L_2 = ___weight1;
		int32_t L_3;
		L_3 = System_FMOD_Studio_System_GetListenerWeight_m3530DCBFEE6D394800305A07ED503B2189E044CC((intptr_t)L_0, L_1, (float*)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t System_getListenerWeight_m588FB81B1EF9E41E5118CD524EF5689C858B18D2_AdjustorThunk (RuntimeObject * __this, int32_t ___listener0, float* ___weight1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getListenerWeight_m588FB81B1EF9E41E5118CD524EF5689C858B18D2(_thisAdjusted, ___listener0, ___weight1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::setListenerWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_setListenerWeight_mF578F7D6E47E7554E5B350FB8EBBB0FEC56D3586 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t ___listener0, float ___weight1, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_SetListenerWeight(this.handle, listener, weight);
		intptr_t L_0 = __this->get_handle_0();
		int32_t L_1 = ___listener0;
		float L_2 = ___weight1;
		int32_t L_3;
		L_3 = System_FMOD_Studio_System_SetListenerWeight_m71475702E1D5FEC581A3F2D539765615ADCAEF5B((intptr_t)L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t System_setListenerWeight_mF578F7D6E47E7554E5B350FB8EBBB0FEC56D3586_AdjustorThunk (RuntimeObject * __this, int32_t ___listener0, float ___weight1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_setListenerWeight_mF578F7D6E47E7554E5B350FB8EBBB0FEC56D3586(_thisAdjusted, ___listener0, ___weight1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::loadBankFile(System.String,FMOD.Studio.LOAD_BANK_FLAGS,FMOD.Studio.Bank&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_loadBankFile_mCED0F71BFDC8A50E9C5BCD217706317966577E4A (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___filename0, uint32_t ___flags1, Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * ___bank2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (StringHelper.ThreadSafeEncoding encoder = StringHelper.GetFreeHelper())
		IL2CPP_RUNTIME_CLASS_INIT(StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_0;
		L_0 = StringHelper_GetFreeHelper_m8E145BDAC33B7FB10BBF4A21F2FB8CA431019977(/*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		// return FMOD_Studio_System_LoadBankFile(this.handle, encoder.byteFromStringUTF8(filename), flags, out bank.handle);
		intptr_t L_1 = __this->get_handle_0();
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_2 = V_0;
		String_t* L_3 = ___filename0;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = ThreadSafeEncoding_byteFromStringUTF8_m125AE74374BC84CA626377F9CF7FDF6DF0D1E24E(L_2, L_3, /*hidden argument*/NULL);
		uint32_t L_5 = ___flags1;
		Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * L_6 = ___bank2;
		intptr_t* L_7 = L_6->get_address_of_handle_0();
		int32_t L_8;
		L_8 = System_FMOD_Studio_System_LoadBankFile_m7BDD25762778D10B1D8A27C50B7DCB5A68690068((intptr_t)L_1, L_4, L_5, (intptr_t*)L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		IL2CPP_LEAVE(0x2C, FINALLY_0022);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0022;
	}

FINALLY_0022:
	{ // begin finally (depth: 1)
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_9 = V_0;
			if (!L_9)
			{
				goto IL_002b;
			}
		}

IL_0025:
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_10 = V_0;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_10);
		}

IL_002b:
		{
			IL2CPP_END_FINALLY(34)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(34)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
	}

IL_002c:
	{
		// }
		int32_t L_11 = V_1;
		return L_11;
	}
}
IL2CPP_EXTERN_C  int32_t System_loadBankFile_mCED0F71BFDC8A50E9C5BCD217706317966577E4A_AdjustorThunk (RuntimeObject * __this, String_t* ___filename0, uint32_t ___flags1, Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * ___bank2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_loadBankFile_mCED0F71BFDC8A50E9C5BCD217706317966577E4A(_thisAdjusted, ___filename0, ___flags1, ___bank2, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::loadBankMemory(System.Byte[],FMOD.Studio.LOAD_BANK_FLAGS,FMOD.Studio.Bank&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_loadBankMemory_m8E38A7E42FC23EF8EEC17F5ABCBA50C06ADB0E2E (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, uint32_t ___flags1, Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * ___bank2, const RuntimeMethod* method)
{
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// GCHandle pinnedArray = GCHandle.Alloc(buffer, GCHandleType.Pinned);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___buffer0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC((RuntimeObject *)(RuntimeObject *)L_0, 3, /*hidden argument*/NULL);
		V_0 = L_1;
		// IntPtr pointer = pinnedArray.AddrOfPinnedObject();
		intptr_t L_2;
		L_2 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
		// RESULT result = FMOD_Studio_System_LoadBankMemory(this.handle, pointer, buffer.Length, LOAD_MEMORY_MODE.LOAD_MEMORY, flags, out bank.handle);
		intptr_t L_3 = __this->get_handle_0();
		intptr_t L_4 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___buffer0;
		NullCheck(L_5);
		uint32_t L_6 = ___flags1;
		Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * L_7 = ___bank2;
		intptr_t* L_8 = L_7->get_address_of_handle_0();
		int32_t L_9;
		L_9 = System_FMOD_Studio_System_LoadBankMemory_m1CECF842603C3431F1991BB0433AA1328DA81980((intptr_t)L_3, (intptr_t)L_4, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), 0, L_6, (intptr_t*)L_8, /*hidden argument*/NULL);
		// pinnedArray.Free();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		// return result;
		return L_9;
	}
}
IL2CPP_EXTERN_C  int32_t System_loadBankMemory_m8E38A7E42FC23EF8EEC17F5ABCBA50C06ADB0E2E_AdjustorThunk (RuntimeObject * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, uint32_t ___flags1, Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * ___bank2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_loadBankMemory_m8E38A7E42FC23EF8EEC17F5ABCBA50C06ADB0E2E(_thisAdjusted, ___buffer0, ___flags1, ___bank2, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::loadBankCustom(FMOD.Studio.BANK_INFO,FMOD.Studio.LOAD_BANK_FLAGS,FMOD.Studio.Bank&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_loadBankCustom_m02E6A1EC25E9B68FDB44FEF1ED99475EDE5E8857 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A  ___info0, uint32_t ___flags1, Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * ___bank2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_SizeOf_TisBANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_m86AE3CC308518A9BF37DCA60BBA0AD0FE683E9DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// info.size = Marshal.SizeOf(info);
		BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A  L_0 = ___info0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Marshal_SizeOf_TisBANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_m86AE3CC308518A9BF37DCA60BBA0AD0FE683E9DA(L_0, /*hidden argument*/Marshal_SizeOf_TisBANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_m86AE3CC308518A9BF37DCA60BBA0AD0FE683E9DA_RuntimeMethod_var);
		(&___info0)->set_size_0(L_1);
		// return FMOD_Studio_System_LoadBankCustom(this.handle, ref info, flags, out bank.handle);
		intptr_t L_2 = __this->get_handle_0();
		uint32_t L_3 = ___flags1;
		Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * L_4 = ___bank2;
		intptr_t* L_5 = L_4->get_address_of_handle_0();
		int32_t L_6;
		L_6 = System_FMOD_Studio_System_LoadBankCustom_mCE93432C8FD70C57CF79905968D405E140312902((intptr_t)L_2, (BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A *)(&___info0), L_3, (intptr_t*)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t System_loadBankCustom_m02E6A1EC25E9B68FDB44FEF1ED99475EDE5E8857_AdjustorThunk (RuntimeObject * __this, BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A  ___info0, uint32_t ___flags1, Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * ___bank2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_loadBankCustom_m02E6A1EC25E9B68FDB44FEF1ED99475EDE5E8857(_thisAdjusted, ___info0, ___flags1, ___bank2, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::unloadAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_unloadAll_m24ABD9C1211CB00D17ED5F1D1445EDE1F0E389FC (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_UnloadAll(this.handle);
		intptr_t L_0 = __this->get_handle_0();
		int32_t L_1;
		L_1 = System_FMOD_Studio_System_UnloadAll_m339FFF03CC2D27413983D704F3C903DCCD2DB7D3((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t System_unloadAll_m24ABD9C1211CB00D17ED5F1D1445EDE1F0E389FC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_unloadAll_m24ABD9C1211CB00D17ED5F1D1445EDE1F0E389FC(_thisAdjusted, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::flushCommands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_flushCommands_m1DB8630ABBD787E3BE5779817CB5901B4748FCBA (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_FlushCommands(this.handle);
		intptr_t L_0 = __this->get_handle_0();
		int32_t L_1;
		L_1 = System_FMOD_Studio_System_FlushCommands_m49201576B2506947655AD3E108B3B961DBBED23F((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t System_flushCommands_m1DB8630ABBD787E3BE5779817CB5901B4748FCBA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_flushCommands_m1DB8630ABBD787E3BE5779817CB5901B4748FCBA(_thisAdjusted, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::flushSampleLoading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_flushSampleLoading_m53A831200437E6BCC319C282F1F0BBC6F6AB2E31 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_FlushSampleLoading(this.handle);
		intptr_t L_0 = __this->get_handle_0();
		int32_t L_1;
		L_1 = System_FMOD_Studio_System_FlushSampleLoading_m8FE82502A4BA6D3EDE399CD205B87A0196738B97((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t System_flushSampleLoading_m53A831200437E6BCC319C282F1F0BBC6F6AB2E31_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_flushSampleLoading_m53A831200437E6BCC319C282F1F0BBC6F6AB2E31(_thisAdjusted, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::startCommandCapture(System.String,FMOD.Studio.COMMANDCAPTURE_FLAGS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_startCommandCapture_mE7018E631A9EF1BAD05C19F3B424DF099055D5FF (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___filename0, uint32_t ___flags1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (StringHelper.ThreadSafeEncoding encoder = StringHelper.GetFreeHelper())
		IL2CPP_RUNTIME_CLASS_INIT(StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_0;
		L_0 = StringHelper_GetFreeHelper_m8E145BDAC33B7FB10BBF4A21F2FB8CA431019977(/*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		// return FMOD_Studio_System_StartCommandCapture(this.handle, encoder.byteFromStringUTF8(filename), flags);
		intptr_t L_1 = __this->get_handle_0();
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_2 = V_0;
		String_t* L_3 = ___filename0;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = ThreadSafeEncoding_byteFromStringUTF8_m125AE74374BC84CA626377F9CF7FDF6DF0D1E24E(L_2, L_3, /*hidden argument*/NULL);
		uint32_t L_5 = ___flags1;
		int32_t L_6;
		L_6 = System_FMOD_Studio_System_StartCommandCapture_mB6F4E170AAE337EFB9E6229D0EC7AB496868774C((intptr_t)L_1, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		IL2CPP_LEAVE(0x26, FINALLY_001c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001c;
	}

FINALLY_001c:
	{ // begin finally (depth: 1)
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_7 = V_0;
			if (!L_7)
			{
				goto IL_0025;
			}
		}

IL_001f:
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_8);
		}

IL_0025:
		{
			IL2CPP_END_FINALLY(28)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(28)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x26, IL_0026)
	}

IL_0026:
	{
		// }
		int32_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C  int32_t System_startCommandCapture_mE7018E631A9EF1BAD05C19F3B424DF099055D5FF_AdjustorThunk (RuntimeObject * __this, String_t* ___filename0, uint32_t ___flags1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_startCommandCapture_mE7018E631A9EF1BAD05C19F3B424DF099055D5FF(_thisAdjusted, ___filename0, ___flags1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::stopCommandCapture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_stopCommandCapture_m247116D66F93F51CA971E2A7266052CE47510F88 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_StopCommandCapture(this.handle);
		intptr_t L_0 = __this->get_handle_0();
		int32_t L_1;
		L_1 = System_FMOD_Studio_System_StopCommandCapture_m5B3A6639DB593C4B54778AE31D18E938C2965471((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t System_stopCommandCapture_m247116D66F93F51CA971E2A7266052CE47510F88_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_stopCommandCapture_m247116D66F93F51CA971E2A7266052CE47510F88(_thisAdjusted, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::loadCommandReplay(System.String,FMOD.Studio.COMMANDREPLAY_FLAGS,FMOD.Studio.CommandReplay&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_loadCommandReplay_mCB42E00A0437628BCD3F7DB126B3AF0FAD89E6A6 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___filename0, uint32_t ___flags1, CommandReplay_t85683E6488FF9B2D01CECCC7C87ABD8FCBC49FD0 * ___replay2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (StringHelper.ThreadSafeEncoding encoder = StringHelper.GetFreeHelper())
		IL2CPP_RUNTIME_CLASS_INIT(StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_0;
		L_0 = StringHelper_GetFreeHelper_m8E145BDAC33B7FB10BBF4A21F2FB8CA431019977(/*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		// return FMOD_Studio_System_LoadCommandReplay(this.handle, encoder.byteFromStringUTF8(filename), flags, out replay.handle);
		intptr_t L_1 = __this->get_handle_0();
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_2 = V_0;
		String_t* L_3 = ___filename0;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = ThreadSafeEncoding_byteFromStringUTF8_m125AE74374BC84CA626377F9CF7FDF6DF0D1E24E(L_2, L_3, /*hidden argument*/NULL);
		uint32_t L_5 = ___flags1;
		CommandReplay_t85683E6488FF9B2D01CECCC7C87ABD8FCBC49FD0 * L_6 = ___replay2;
		intptr_t* L_7 = L_6->get_address_of_handle_0();
		int32_t L_8;
		L_8 = System_FMOD_Studio_System_LoadCommandReplay_mF8E329DD65A1D7A8A8876B5AFA20538BDAEBDF8B((intptr_t)L_1, L_4, L_5, (intptr_t*)L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		IL2CPP_LEAVE(0x2C, FINALLY_0022);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0022;
	}

FINALLY_0022:
	{ // begin finally (depth: 1)
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_9 = V_0;
			if (!L_9)
			{
				goto IL_002b;
			}
		}

IL_0025:
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_10 = V_0;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_10);
		}

IL_002b:
		{
			IL2CPP_END_FINALLY(34)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(34)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
	}

IL_002c:
	{
		// }
		int32_t L_11 = V_1;
		return L_11;
	}
}
IL2CPP_EXTERN_C  int32_t System_loadCommandReplay_mCB42E00A0437628BCD3F7DB126B3AF0FAD89E6A6_AdjustorThunk (RuntimeObject * __this, String_t* ___filename0, uint32_t ___flags1, CommandReplay_t85683E6488FF9B2D01CECCC7C87ABD8FCBC49FD0 * ___replay2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_loadCommandReplay_mCB42E00A0437628BCD3F7DB126B3AF0FAD89E6A6(_thisAdjusted, ___filename0, ___flags1, ___replay2, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getBankCount(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getBankCount_mAD176C2EE0E6C3E090FD278837973676BB1F3AA6 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t* ___count0, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_GetBankCount(this.handle, out count);
		intptr_t L_0 = __this->get_handle_0();
		int32_t* L_1 = ___count0;
		int32_t L_2;
		L_2 = System_FMOD_Studio_System_GetBankCount_mC7BC2658454C6472A484F1252BBD12AB4E4AB733((intptr_t)L_0, (int32_t*)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t System_getBankCount_mAD176C2EE0E6C3E090FD278837973676BB1F3AA6_AdjustorThunk (RuntimeObject * __this, int32_t* ___count0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getBankCount_mAD176C2EE0E6C3E090FD278837973676BB1F3AA6(_thisAdjusted, ___count0, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getBankList(FMOD.Studio.Bank[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getBankList_m7136EF03B6182E386D97D9344D50D1E4D40599B8 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E** ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// array = null;
		BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E** L_0 = ___array0;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// result = FMOD_Studio_System_GetBankCount(this.handle, out capacity);
		intptr_t L_1 = __this->get_handle_0();
		int32_t L_2;
		L_2 = System_FMOD_Studio_System_GetBankCount_mC7BC2658454C6472A484F1252BBD12AB4E4AB733((intptr_t)L_1, (int32_t*)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
		// if (result != RESULT.OK)
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		// return result;
		int32_t L_4 = V_0;
		return L_4;
	}

IL_0016:
	{
		// if (capacity == 0)
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		// array = new Bank[0];
		BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E** L_6 = ___array0;
		BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E* L_7 = (BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E*)(BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E*)SZArrayNew(BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E_il2cpp_TypeInfo_var, (uint32_t)0);
		*((RuntimeObject **)L_6) = (RuntimeObject *)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_6, (void*)(RuntimeObject *)L_7);
		// return result;
		int32_t L_8 = V_0;
		return L_8;
	}

IL_0023:
	{
		// IntPtr[] rawArray = new IntPtr[capacity];
		int32_t L_9 = V_1;
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_10 = (IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6*)(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6*)SZArrayNew(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_2 = L_10;
		// result = FMOD_Studio_System_GetBankList(this.handle, rawArray, capacity, out actualCount);
		intptr_t L_11 = __this->get_handle_0();
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_12 = V_2;
		int32_t L_13 = V_1;
		int32_t L_14;
		L_14 = System_FMOD_Studio_System_GetBankList_m8DD4DDC95F53A0909DAF36ADBB526CC8FDDDB6B8((intptr_t)L_11, L_12, L_13, (int32_t*)(&V_3), /*hidden argument*/NULL);
		V_0 = L_14;
		// if (result != RESULT.OK)
		int32_t L_15 = V_0;
		if (!L_15)
		{
			goto IL_003f;
		}
	}
	{
		// return result;
		int32_t L_16 = V_0;
		return L_16;
	}

IL_003f:
	{
		// if (actualCount > capacity) 
		int32_t L_17 = V_3;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_0045;
		}
	}
	{
		// actualCount = capacity;
		int32_t L_19 = V_1;
		V_3 = L_19;
	}

IL_0045:
	{
		// array = new Bank[actualCount];
		BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E** L_20 = ___array0;
		int32_t L_21 = V_3;
		BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E* L_22 = (BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E*)(BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E*)SZArrayNew(BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E_il2cpp_TypeInfo_var, (uint32_t)L_21);
		*((RuntimeObject **)L_20) = (RuntimeObject *)L_22;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_20, (void*)(RuntimeObject *)L_22);
		// for (int i = 0; i < actualCount; ++i)
		V_4 = 0;
		goto IL_006a;
	}

IL_0052:
	{
		// array[i].handle = rawArray[i];
		BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E** L_23 = ___array0;
		BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E* L_24 = *((BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E**)L_23);
		int32_t L_25 = V_4;
		NullCheck(L_24);
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_26 = V_2;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		intptr_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->set_handle_0((intptr_t)L_29);
		// for (int i = 0; i < actualCount; ++i)
		int32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_006a:
	{
		// for (int i = 0; i < actualCount; ++i)
		int32_t L_31 = V_4;
		int32_t L_32 = V_3;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0052;
		}
	}
	{
		// return RESULT.OK;
		return (int32_t)(0);
	}
}
IL2CPP_EXTERN_C  int32_t System_getBankList_m7136EF03B6182E386D97D9344D50D1E4D40599B8_AdjustorThunk (RuntimeObject * __this, BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E** ___array0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getBankList_m7136EF03B6182E386D97D9344D50D1E4D40599B8(_thisAdjusted, ___array0, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getParameterDescriptionCount(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getParameterDescriptionCount_mC9AD182FC9CB25565561D3CFCFDD4ACD565E8817 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t* ___count0, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_GetParameterDescriptionCount(this.handle, out count);
		intptr_t L_0 = __this->get_handle_0();
		int32_t* L_1 = ___count0;
		int32_t L_2;
		L_2 = System_FMOD_Studio_System_GetParameterDescriptionCount_m57F5F89EBC669B0457EB9A4C8E3A74A9A2743CD1((intptr_t)L_0, (int32_t*)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t System_getParameterDescriptionCount_mC9AD182FC9CB25565561D3CFCFDD4ACD565E8817_AdjustorThunk (RuntimeObject * __this, int32_t* ___count0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getParameterDescriptionCount_mC9AD182FC9CB25565561D3CFCFDD4ACD565E8817(_thisAdjusted, ___count0, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getParameterDescriptionList(FMOD.Studio.PARAMETER_DESCRIPTION[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getParameterDescriptionList_m5D3344956E6D233FDC6ADB4A22316DD16A37B60E (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5** ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisPARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B_m4280AD0E10D4EA3CCA07CF96AED06A1723342C42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// array = null;
		PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5** L_0 = ___array0;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// RESULT result = FMOD_Studio_System_GetParameterDescriptionCount(this.handle, out capacity);
		intptr_t L_1 = __this->get_handle_0();
		int32_t L_2;
		L_2 = System_FMOD_Studio_System_GetParameterDescriptionCount_m57F5F89EBC669B0457EB9A4C8E3A74A9A2743CD1((intptr_t)L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		// if (result != RESULT.OK)
		int32_t L_3 = V_1;
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		// return result;
		int32_t L_4 = V_1;
		return L_4;
	}

IL_0016:
	{
		// if (capacity == 0)
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		// array = new PARAMETER_DESCRIPTION[0];
		PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5** L_6 = ___array0;
		PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5* L_7 = (PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5*)(PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5*)SZArrayNew(PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5_il2cpp_TypeInfo_var, (uint32_t)0);
		*((RuntimeObject **)L_6) = (RuntimeObject *)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_6, (void*)(RuntimeObject *)L_7);
		// return RESULT.OK;
		return (int32_t)(0);
	}

IL_0023:
	{
		// PARAMETER_DESCRIPTION[] tempArray = new PARAMETER_DESCRIPTION[capacity];
		int32_t L_8 = V_0;
		PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5* L_9 = (PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5*)(PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5*)SZArrayNew(PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_2 = L_9;
		// result = FMOD_Studio_System_GetParameterDescriptionList(this.handle, tempArray, capacity, out actualCount);
		intptr_t L_10 = __this->get_handle_0();
		PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5* L_11 = V_2;
		int32_t L_12 = V_0;
		int32_t L_13;
		L_13 = System_FMOD_Studio_System_GetParameterDescriptionList_mC4B1C23FA4EE3B1F8EE1414E49C9AE72CC2A2612((intptr_t)L_10, L_11, L_12, (int32_t*)(&V_3), /*hidden argument*/NULL);
		V_1 = L_13;
		// if (result != RESULT.OK)
		int32_t L_14 = V_1;
		if (!L_14)
		{
			goto IL_003f;
		}
	}
	{
		// return result;
		int32_t L_15 = V_1;
		return L_15;
	}

IL_003f:
	{
		// if (actualCount != capacity)
		int32_t L_16 = V_3;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) == ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}
	{
		// Array.Resize(ref tempArray, actualCount);
		int32_t L_18 = V_3;
		Array_Resize_TisPARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B_m4280AD0E10D4EA3CCA07CF96AED06A1723342C42((PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5**)(&V_2), L_18, /*hidden argument*/Array_Resize_TisPARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B_m4280AD0E10D4EA3CCA07CF96AED06A1723342C42_RuntimeMethod_var);
	}

IL_004b:
	{
		// array = tempArray;
		PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5** L_19 = ___array0;
		PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5* L_20 = V_2;
		*((RuntimeObject **)L_19) = (RuntimeObject *)L_20;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_19, (void*)(RuntimeObject *)L_20);
		// return RESULT.OK;
		return (int32_t)(0);
	}
}
IL2CPP_EXTERN_C  int32_t System_getParameterDescriptionList_m5D3344956E6D233FDC6ADB4A22316DD16A37B60E_AdjustorThunk (RuntimeObject * __this, PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5** ___array0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getParameterDescriptionList_m5D3344956E6D233FDC6ADB4A22316DD16A37B60E(_thisAdjusted, ___array0, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getCPUUsage(FMOD.Studio.CPU_USAGE&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getCPUUsage_m2C7F95332C11E2CBF45196280BC4AB014BEFC999 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, CPU_USAGE_tD3620A435EE6B2144E94AEC150EABD63ABAB0332 * ___usage0, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_GetCPUUsage(this.handle, out usage);
		intptr_t L_0 = __this->get_handle_0();
		CPU_USAGE_tD3620A435EE6B2144E94AEC150EABD63ABAB0332 * L_1 = ___usage0;
		int32_t L_2;
		L_2 = System_FMOD_Studio_System_GetCPUUsage_m9F6E4949FC6DE8E4C37FB5E819A6A6FD2ACCAA83((intptr_t)L_0, (CPU_USAGE_tD3620A435EE6B2144E94AEC150EABD63ABAB0332 *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t System_getCPUUsage_m2C7F95332C11E2CBF45196280BC4AB014BEFC999_AdjustorThunk (RuntimeObject * __this, CPU_USAGE_tD3620A435EE6B2144E94AEC150EABD63ABAB0332 * ___usage0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getCPUUsage_m2C7F95332C11E2CBF45196280BC4AB014BEFC999(_thisAdjusted, ___usage0, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getBufferUsage(FMOD.Studio.BUFFER_USAGE&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getBufferUsage_mA899E51B099C3DCFCEB69CE9332F92D47E828795 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, BUFFER_USAGE_tC3F4FFD3963B6AD7416C4BF66BD3CC40F6DCD4A3 * ___usage0, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_GetBufferUsage(this.handle, out usage);
		intptr_t L_0 = __this->get_handle_0();
		BUFFER_USAGE_tC3F4FFD3963B6AD7416C4BF66BD3CC40F6DCD4A3 * L_1 = ___usage0;
		int32_t L_2;
		L_2 = System_FMOD_Studio_System_GetBufferUsage_m517062AC9DD0CCD6A07E3252214C89DD79C3353E((intptr_t)L_0, (BUFFER_USAGE_tC3F4FFD3963B6AD7416C4BF66BD3CC40F6DCD4A3 *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t System_getBufferUsage_mA899E51B099C3DCFCEB69CE9332F92D47E828795_AdjustorThunk (RuntimeObject * __this, BUFFER_USAGE_tC3F4FFD3963B6AD7416C4BF66BD3CC40F6DCD4A3 * ___usage0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getBufferUsage_mA899E51B099C3DCFCEB69CE9332F92D47E828795(_thisAdjusted, ___usage0, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::resetBufferUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_resetBufferUsage_mFB71A6D3D7B5B1EA3CDACCF98EB78C5021600062 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_ResetBufferUsage(this.handle);
		intptr_t L_0 = __this->get_handle_0();
		int32_t L_1;
		L_1 = System_FMOD_Studio_System_ResetBufferUsage_m78140A4EAAD9A5265A76B32A981C24C5B523525E((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t System_resetBufferUsage_mFB71A6D3D7B5B1EA3CDACCF98EB78C5021600062_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_resetBufferUsage_mFB71A6D3D7B5B1EA3CDACCF98EB78C5021600062(_thisAdjusted, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::setCallback(FMOD.Studio.SYSTEM_CALLBACK,FMOD.Studio.SYSTEM_CALLBACK_TYPE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_setCallback_m4B9772A328A73A818C99C9F103B017B2562933CE (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, SYSTEM_CALLBACK_tAC95078FE937EE93C1AD6CA0DD09DB016BBA843C * ___callback0, uint32_t ___callbackmask1, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_SetCallback(this.handle, callback, callbackmask);
		intptr_t L_0 = __this->get_handle_0();
		SYSTEM_CALLBACK_tAC95078FE937EE93C1AD6CA0DD09DB016BBA843C * L_1 = ___callback0;
		uint32_t L_2 = ___callbackmask1;
		int32_t L_3;
		L_3 = System_FMOD_Studio_System_SetCallback_m46092D961F3DC7E0749B009F2901AAFB464A21C3((intptr_t)L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t System_setCallback_m4B9772A328A73A818C99C9F103B017B2562933CE_AdjustorThunk (RuntimeObject * __this, SYSTEM_CALLBACK_tAC95078FE937EE93C1AD6CA0DD09DB016BBA843C * ___callback0, uint32_t ___callbackmask1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_setCallback_m4B9772A328A73A818C99C9F103B017B2562933CE(_thisAdjusted, ___callback0, ___callbackmask1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getUserData(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getUserData_m4857539BCF58DCEC58840A5D0952F93C20FCA3B9 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, intptr_t* ___userdata0, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_GetUserData(this.handle, out userdata);
		intptr_t L_0 = __this->get_handle_0();
		intptr_t* L_1 = ___userdata0;
		int32_t L_2;
		L_2 = System_FMOD_Studio_System_GetUserData_m50FABEF966837F61BCBF2897DA868A44EF1EBFCB((intptr_t)L_0, (intptr_t*)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t System_getUserData_m4857539BCF58DCEC58840A5D0952F93C20FCA3B9_AdjustorThunk (RuntimeObject * __this, intptr_t* ___userdata0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getUserData_m4857539BCF58DCEC58840A5D0952F93C20FCA3B9(_thisAdjusted, ___userdata0, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::setUserData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_setUserData_m284605A8317D310D9E5BFCE50A76CF70739B9CEF (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, intptr_t ___userdata0, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_SetUserData(this.handle, userdata);
		intptr_t L_0 = __this->get_handle_0();
		intptr_t L_1 = ___userdata0;
		int32_t L_2;
		L_2 = System_FMOD_Studio_System_SetUserData_mAC2DE5FC1F92E54F7CC4AF2E012D486D736CAA96((intptr_t)L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t System_setUserData_m284605A8317D310D9E5BFCE50A76CF70739B9CEF_AdjustorThunk (RuntimeObject * __this, intptr_t ___userdata0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_setUserData_m284605A8317D310D9E5BFCE50A76CF70739B9CEF(_thisAdjusted, ___userdata0, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::getMemoryUsage(FMOD.Studio.MEMORY_USAGE&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getMemoryUsage_mB025493CB9E80C4CBDE3F31CF357B81254E6EA00 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, MEMORY_USAGE_tE2E03D2DB8C162FC199C1EBBD91C1BC08B605647 * ___memoryusage0, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_System_GetMemoryUsage(this.handle, out memoryusage);
		intptr_t L_0 = __this->get_handle_0();
		MEMORY_USAGE_tE2E03D2DB8C162FC199C1EBBD91C1BC08B605647 * L_1 = ___memoryusage0;
		int32_t L_2;
		L_2 = System_FMOD_Studio_System_GetMemoryUsage_mB05225C1D5EABA2C348A785BC76FF2C8517A0AEF((intptr_t)L_0, (MEMORY_USAGE_tE2E03D2DB8C162FC199C1EBBD91C1BC08B605647 *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t System_getMemoryUsage_mB025493CB9E80C4CBDE3F31CF357B81254E6EA00_AdjustorThunk (RuntimeObject * __this, MEMORY_USAGE_tE2E03D2DB8C162FC199C1EBBD91C1BC08B605647 * ___memoryusage0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = System_getMemoryUsage_mB025493CB9E80C4CBDE3F31CF357B81254E6EA00(_thisAdjusted, ___memoryusage0, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_Create(System.IntPtr&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_Create_m875F59BB313051076C4A106174F5BE2C081CCF3E (intptr_t* ___system0, uint32_t ___headerversion1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t*, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_Create", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_Create)(___system0, ___headerversion1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___headerversion1);
	#endif

	return returnValue;
}
// System.Boolean FMOD.Studio.System::FMOD_Studio_System_IsValid(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool System_FMOD_Studio_System_IsValid_mD72DC1B10F8FA57DD3C8494BF041BD330AA02DA8 (intptr_t ___system0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_IsValid", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_IsValid)(___system0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0);
	#endif

	return static_cast<bool>(returnValue);
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_SetAdvancedSettings(System.IntPtr,FMOD.Studio.ADVANCEDSETTINGS&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_SetAdvancedSettings_mB547FE588A152BDB9488BC4E146C7203E2016263 (intptr_t ___system0, ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166 * ___settings1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166 *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166 *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_SetAdvancedSettings", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_SetAdvancedSettings)(___system0, ___settings1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___settings1);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetAdvancedSettings(System.IntPtr,FMOD.Studio.ADVANCEDSETTINGS&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetAdvancedSettings_m50C48E518897870D8060A2DBD69D9E5B0012402B (intptr_t ___system0, ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166 * ___settings1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166 *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(ADVANCEDSETTINGS_t4D825B63738A62FE5B13181EB44D23C2CFF6E166 *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetAdvancedSettings", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetAdvancedSettings)(___system0, ___settings1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___settings1);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_Initialize(System.IntPtr,System.Int32,FMOD.Studio.INITFLAGS,FMOD.INITFLAGS,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_Initialize_m69CAC5B15B9BF6E42F1A6B70ED3F499954C6A60C (intptr_t ___system0, int32_t ___maxchannels1, uint32_t ___studioflags2, uint32_t ___flags3, intptr_t ___extradriverdata4, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, uint32_t, uint32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(uint32_t) + sizeof(uint32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_Initialize", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_Initialize)(___system0, ___maxchannels1, ___studioflags2, ___flags3, ___extradriverdata4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___maxchannels1, ___studioflags2, ___flags3, ___extradriverdata4);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_Release_m5C2605A1DC98DE3EFB0F86E6F166773B3BA468C2 (intptr_t ___system0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_Release", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_Release)(___system0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_Update(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_Update_m3995196EB5F71DB619B900DE9DCEE41857B52EB8 (intptr_t ___system0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_Update", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_Update)(___system0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetCoreSystem(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetCoreSystem_m509D8325373161C34929AA61DCD90E1DFBDBF004 (intptr_t ___system0, intptr_t* ___coresystem1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetCoreSystem", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetCoreSystem)(___system0, ___coresystem1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___coresystem1);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetEvent(System.IntPtr,System.Byte[],System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetEvent_mA7BB5F1EE9EF0ACB3C807514BF9F41EA14E4DFAC (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___path1, intptr_t* ____event2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetEvent", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___path1' to native representation
	uint8_t* ____path1_marshaled = NULL;
	if (___path1 != NULL)
	{
		____path1_marshaled = reinterpret_cast<uint8_t*>((___path1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetEvent)(___system0, ____path1_marshaled, ____event2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ____path1_marshaled, ____event2);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetBus(System.IntPtr,System.Byte[],System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetBus_m0A1BE34C7ED27045D34F695A2BC26C7CCB983BDF (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___path1, intptr_t* ___bus2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetBus", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___path1' to native representation
	uint8_t* ____path1_marshaled = NULL;
	if (___path1 != NULL)
	{
		____path1_marshaled = reinterpret_cast<uint8_t*>((___path1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetBus)(___system0, ____path1_marshaled, ___bus2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ____path1_marshaled, ___bus2);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetVCA(System.IntPtr,System.Byte[],System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetVCA_m968EB6714D6BEB56EA81138A80E068FD6D00B4E6 (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___path1, intptr_t* ___vca2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetVCA", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___path1' to native representation
	uint8_t* ____path1_marshaled = NULL;
	if (___path1 != NULL)
	{
		____path1_marshaled = reinterpret_cast<uint8_t*>((___path1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetVCA)(___system0, ____path1_marshaled, ___vca2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ____path1_marshaled, ___vca2);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetBank(System.IntPtr,System.Byte[],System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetBank_m8AF075ED1DF2FA199EE1E6C736A572870EC294BD (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___path1, intptr_t* ___bank2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetBank", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___path1' to native representation
	uint8_t* ____path1_marshaled = NULL;
	if (___path1 != NULL)
	{
		____path1_marshaled = reinterpret_cast<uint8_t*>((___path1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetBank)(___system0, ____path1_marshaled, ___bank2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ____path1_marshaled, ___bank2);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetEventByID(System.IntPtr,System.Guid&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetEventByID_mE7A30DCD2A1A278FAB174BFC7B9C90ADC3004AFA (intptr_t ___system0, Guid_t * ___id1, intptr_t* ____event2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, Guid_t *, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Guid_t *) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetEventByID", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetEventByID)(___system0, ___id1, ____event2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___id1, ____event2);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetBusByID(System.IntPtr,System.Guid&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetBusByID_m2BF67D78BCC9324C58A372D4CC842A5E01E81B01 (intptr_t ___system0, Guid_t * ___id1, intptr_t* ___bus2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, Guid_t *, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Guid_t *) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetBusByID", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetBusByID)(___system0, ___id1, ___bus2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___id1, ___bus2);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetVCAByID(System.IntPtr,System.Guid&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetVCAByID_mB47E038978E9989E4F023201F91CCE556222689D (intptr_t ___system0, Guid_t * ___id1, intptr_t* ___vca2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, Guid_t *, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Guid_t *) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetVCAByID", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetVCAByID)(___system0, ___id1, ___vca2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___id1, ___vca2);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetBankByID(System.IntPtr,System.Guid&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetBankByID_m52C5DAD8A74F213824ADD97288F667B898CCFF88 (intptr_t ___system0, Guid_t * ___id1, intptr_t* ___bank2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, Guid_t *, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Guid_t *) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetBankByID", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetBankByID)(___system0, ___id1, ___bank2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___id1, ___bank2);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetSoundInfo(System.IntPtr,System.Byte[],FMOD.Studio.SOUND_INFO&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetSoundInfo_mCB29260F056166F4E27AA1767FA74EBC8A8C7FAA (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___key1, SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21 * ___info2, const RuntimeMethod* method)
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetSoundInfo", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___key1' to native representation
	uint8_t* ____key1_marshaled = NULL;
	if (___key1 != NULL)
	{
		____key1_marshaled = reinterpret_cast<uint8_t*>((___key1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___info2' to native representation
	SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21_marshaled_pinvoke ____info2_empty = {};
	SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21_marshaled_pinvoke* ____info2_marshaled = &____info2_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetSoundInfo)(___system0, ____key1_marshaled, ____info2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ____key1_marshaled, ____info2_marshaled);
	#endif

	// Marshaling of parameter '___info2' back from native representation
	SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21  _____info2_marshaled_unmarshaled_dereferenced;
	memset((&_____info2_marshaled_unmarshaled_dereferenced), 0, sizeof(_____info2_marshaled_unmarshaled_dereferenced));
	SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21_marshal_pinvoke_back(*____info2_marshaled, _____info2_marshaled_unmarshaled_dereferenced);
	*___info2 = _____info2_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((&((___info2)->___exinfo_2))->___pcmreadcallback_11), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&((___info2)->___exinfo_2))->___pcmsetposcallback_12), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&((___info2)->___exinfo_2))->___nonblockcallback_13), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&((___info2)->___exinfo_2))->___fileuseropen_19), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&((___info2)->___exinfo_2))->___fileuserclose_20), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&((___info2)->___exinfo_2))->___fileuserread_21), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&((___info2)->___exinfo_2))->___fileuserseek_22), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&((___info2)->___exinfo_2))->___fileuserasyncread_23), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&((___info2)->___exinfo_2))->___fileuserasynccancel_24), (void*)NULL);
	#endif

	// Marshaling cleanup of parameter '___info2' native representation
	SOUND_INFO_t55E32A1028F3D8C2ACF1C3207FDC39C547867C21_marshal_pinvoke_cleanup(*____info2_marshaled);

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetParameterDescriptionByName(System.IntPtr,System.Byte[],FMOD.Studio.PARAMETER_DESCRIPTION&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetParameterDescriptionByName_m41EB3A4BBBCB0E65E81248EDDEF708BB12806733 (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___name1, PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B * ___parameter2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetParameterDescriptionByName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name1' to native representation
	uint8_t* ____name1_marshaled = NULL;
	if (___name1 != NULL)
	{
		____name1_marshaled = reinterpret_cast<uint8_t*>((___name1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetParameterDescriptionByName)(___system0, ____name1_marshaled, ___parameter2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ____name1_marshaled, ___parameter2);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetParameterDescriptionByID(System.IntPtr,FMOD.Studio.PARAMETER_ID,FMOD.Studio.PARAMETER_DESCRIPTION&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetParameterDescriptionByID_m75C9F741BA04841B728BB7EB3D729929484BB035 (intptr_t ___system0, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  ___id1, PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B * ___parameter2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE , PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE ) + sizeof(PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetParameterDescriptionByID", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetParameterDescriptionByID)(___system0, ___id1, ___parameter2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___id1, ___parameter2);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetParameterByID(System.IntPtr,FMOD.Studio.PARAMETER_ID,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetParameterByID_m4AD118E0F2C06A4DF592266E268E64E9CB622BD6 (intptr_t ___system0, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  ___id1, float* ___value2, float* ___finalvalue3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE , float*, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE ) + sizeof(float*) + sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetParameterByID", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetParameterByID)(___system0, ___id1, ___value2, ___finalvalue3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___id1, ___value2, ___finalvalue3);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_SetParameterByID(System.IntPtr,FMOD.Studio.PARAMETER_ID,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_SetParameterByID_mA1353C84C3150E756B4EB339E83424B4D8DF8DC9 (intptr_t ___system0, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  ___id1, float ___value2, bool ___ignoreseekspeed3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE , float, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE ) + sizeof(float) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_SetParameterByID", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_SetParameterByID)(___system0, ___id1, ___value2, static_cast<int32_t>(___ignoreseekspeed3));
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___id1, ___value2, static_cast<int32_t>(___ignoreseekspeed3));
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_SetParametersByIDs(System.IntPtr,FMOD.Studio.PARAMETER_ID[],System.Single[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_SetParametersByIDs_mE600214000F44C6688B97C808375CD8E3DF38FCC (intptr_t ___system0, PARAMETER_IDU5BU5D_tBF176CF014283DCED4159FBAE8605A11C6F2B373* ___ids1, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values2, int32_t ___count3, bool ___ignoreseekspeed4, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE *, float*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(int32_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_SetParametersByIDs", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___ids1' to native representation
	PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE * ____ids1_marshaled = NULL;
	if (___ids1 != NULL)
	{
		____ids1_marshaled = reinterpret_cast<PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE *>((___ids1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___values2' to native representation
	float* ____values2_marshaled = NULL;
	if (___values2 != NULL)
	{
		____values2_marshaled = reinterpret_cast<float*>((___values2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_SetParametersByIDs)(___system0, ____ids1_marshaled, ____values2_marshaled, ___count3, static_cast<int32_t>(___ignoreseekspeed4));
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ____ids1_marshaled, ____values2_marshaled, ___count3, static_cast<int32_t>(___ignoreseekspeed4));
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetParameterByName(System.IntPtr,System.Byte[],System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetParameterByName_mD88531BCB10C01AFACB4EAC701643648EF8630EA (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___name1, float* ___value2, float* ___finalvalue3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, float*, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(float*) + sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetParameterByName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name1' to native representation
	uint8_t* ____name1_marshaled = NULL;
	if (___name1 != NULL)
	{
		____name1_marshaled = reinterpret_cast<uint8_t*>((___name1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetParameterByName)(___system0, ____name1_marshaled, ___value2, ___finalvalue3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ____name1_marshaled, ___value2, ___finalvalue3);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_SetParameterByName(System.IntPtr,System.Byte[],System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_SetParameterByName_mB5BCB7C16EC75D4A0D76EB0FFBF1957178209318 (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___name1, float ___value2, bool ___ignoreseekspeed3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, float, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(float) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_SetParameterByName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name1' to native representation
	uint8_t* ____name1_marshaled = NULL;
	if (___name1 != NULL)
	{
		____name1_marshaled = reinterpret_cast<uint8_t*>((___name1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_SetParameterByName)(___system0, ____name1_marshaled, ___value2, static_cast<int32_t>(___ignoreseekspeed3));
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ____name1_marshaled, ___value2, static_cast<int32_t>(___ignoreseekspeed3));
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_LookupID(System.IntPtr,System.Byte[],System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_LookupID_mE1A03AD4042AF546DEFF4AB11FF0EC570F894C7E (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___path1, Guid_t * ___id2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, Guid_t *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(Guid_t *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_LookupID", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___path1' to native representation
	uint8_t* ____path1_marshaled = NULL;
	if (___path1 != NULL)
	{
		____path1_marshaled = reinterpret_cast<uint8_t*>((___path1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_LookupID)(___system0, ____path1_marshaled, ___id2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ____path1_marshaled, ___id2);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_LookupPath(System.IntPtr,System.Guid&,System.IntPtr,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_LookupPath_mC36E3D11E4EAF85523D26769E5DE5301439C8EF8 (intptr_t ___system0, Guid_t * ___id1, intptr_t ___path2, int32_t ___size3, int32_t* ___retrieved4, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, Guid_t *, intptr_t, int32_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Guid_t *) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_LookupPath", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_LookupPath)(___system0, ___id1, ___path2, ___size3, ___retrieved4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___id1, ___path2, ___size3, ___retrieved4);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetNumListeners(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetNumListeners_m6F6AC1FE0D2CC09E6FBEF9897279FB2DBCB2DD4F (intptr_t ___system0, int32_t* ___numlisteners1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetNumListeners", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetNumListeners)(___system0, ___numlisteners1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___numlisteners1);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_SetNumListeners(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_SetNumListeners_m5427E0CE877B8060DB873E57543045995EA5162D (intptr_t ___system0, int32_t ___numlisteners1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_SetNumListeners", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_SetNumListeners)(___system0, ___numlisteners1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___numlisteners1);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetListenerAttributes(System.IntPtr,System.Int32,FMOD.ATTRIBUTES_3D&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetListenerAttributes_m5FEF44EE37D9995837A7B61A8E79C2A3330CBA14 (intptr_t ___system0, int32_t ___listener1, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 * ___attributes2, intptr_t ___zero3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 *, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 *) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetListenerAttributes", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetListenerAttributes)(___system0, ___listener1, ___attributes2, ___zero3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___listener1, ___attributes2, ___zero3);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetListenerAttributes(System.IntPtr,System.Int32,FMOD.ATTRIBUTES_3D&,FMOD.VECTOR&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetListenerAttributes_mF78E495C338FCB0A29E04BA5F598F97FC66D3E8F (intptr_t ___system0, int32_t ___listener1, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 * ___attributes2, VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B * ___attenuationposition3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 *, VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 *) + sizeof(VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetListenerAttributes", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetListenerAttributes)(___system0, ___listener1, ___attributes2, ___attenuationposition3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___listener1, ___attributes2, ___attenuationposition3);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_SetListenerAttributes(System.IntPtr,System.Int32,FMOD.ATTRIBUTES_3D&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_SetListenerAttributes_mEA39841F32E2AA5B59A7E4FC296CE507B163CE2E (intptr_t ___system0, int32_t ___listener1, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 * ___attributes2, intptr_t ___zero3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 *, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 *) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_SetListenerAttributes", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_SetListenerAttributes)(___system0, ___listener1, ___attributes2, ___zero3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___listener1, ___attributes2, ___zero3);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_SetListenerAttributes(System.IntPtr,System.Int32,FMOD.ATTRIBUTES_3D&,FMOD.VECTOR&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_SetListenerAttributes_m0E4EFA117DF36765F1E74377CC0A7B2FF24916FF (intptr_t ___system0, int32_t ___listener1, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 * ___attributes2, VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B * ___attenuationposition3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 *, VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(ATTRIBUTES_3D_t95DCC1D675295D079838AFAA1DEC51B98D05B734 *) + sizeof(VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_SetListenerAttributes", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_SetListenerAttributes)(___system0, ___listener1, ___attributes2, ___attenuationposition3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___listener1, ___attributes2, ___attenuationposition3);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetListenerWeight(System.IntPtr,System.Int32,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetListenerWeight_m3530DCBFEE6D394800305A07ED503B2189E044CC (intptr_t ___system0, int32_t ___listener1, float* ___weight2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetListenerWeight", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetListenerWeight)(___system0, ___listener1, ___weight2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___listener1, ___weight2);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_SetListenerWeight(System.IntPtr,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_SetListenerWeight_m71475702E1D5FEC581A3F2D539765615ADCAEF5B (intptr_t ___system0, int32_t ___listener1, float ___weight2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_SetListenerWeight", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_SetListenerWeight)(___system0, ___listener1, ___weight2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___listener1, ___weight2);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_LoadBankFile(System.IntPtr,System.Byte[],FMOD.Studio.LOAD_BANK_FLAGS,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_LoadBankFile_m7BDD25762778D10B1D8A27C50B7DCB5A68690068 (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___filename1, uint32_t ___flags2, intptr_t* ___bank3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, uint32_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(uint32_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_LoadBankFile", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___filename1' to native representation
	uint8_t* ____filename1_marshaled = NULL;
	if (___filename1 != NULL)
	{
		____filename1_marshaled = reinterpret_cast<uint8_t*>((___filename1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_LoadBankFile)(___system0, ____filename1_marshaled, ___flags2, ___bank3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ____filename1_marshaled, ___flags2, ___bank3);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_LoadBankMemory(System.IntPtr,System.IntPtr,System.Int32,FMOD.Studio.LOAD_MEMORY_MODE,FMOD.Studio.LOAD_BANK_FLAGS,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_LoadBankMemory_m1CECF842603C3431F1991BB0433AA1328DA81980 (intptr_t ___system0, intptr_t ___buffer1, int32_t ___length2, int32_t ___mode3, uint32_t ___flags4, intptr_t* ___bank5, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t, int32_t, uint32_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(uint32_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_LoadBankMemory", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_LoadBankMemory)(___system0, ___buffer1, ___length2, ___mode3, ___flags4, ___bank5);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___buffer1, ___length2, ___mode3, ___flags4, ___bank5);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_LoadBankCustom(System.IntPtr,FMOD.Studio.BANK_INFO&,FMOD.Studio.LOAD_BANK_FLAGS,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_LoadBankCustom_mCE93432C8FD70C57CF79905968D405E140312902 (intptr_t ___system0, BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A * ___info1, uint32_t ___flags2, intptr_t* ___bank3, const RuntimeMethod* method)
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_marshaled_pinvoke*, uint32_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_marshaled_pinvoke*) + sizeof(uint32_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_LoadBankCustom", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___info1' to native representation
	BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_marshaled_pinvoke* ____info1_marshaled = NULL;
	BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_marshaled_pinvoke ____info1_marshaled_dereferenced = {};
	BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_marshal_pinvoke(*___info1, ____info1_marshaled_dereferenced);
	____info1_marshaled = &____info1_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_LoadBankCustom)(___system0, ____info1_marshaled, ___flags2, ___bank3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ____info1_marshaled, ___flags2, ___bank3);
	#endif

	// Marshaling of parameter '___info1' back from native representation
	BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A  _____info1_marshaled_unmarshaled_dereferenced;
	memset((&_____info1_marshaled_unmarshaled_dereferenced), 0, sizeof(_____info1_marshaled_unmarshaled_dereferenced));
	BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_marshal_pinvoke_back(*____info1_marshaled, _____info1_marshaled_unmarshaled_dereferenced);
	BANK_INFO_t365DD0A0C35D670F6F95E546D0D5E5926C1F041A_marshal_pinvoke_cleanup(*____info1_marshaled);
	*___info1 = _____info1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___info1)->___opencallback_3), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___info1)->___closecallback_4), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___info1)->___readcallback_5), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___info1)->___seekcallback_6), (void*)NULL);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_UnloadAll(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_UnloadAll_m339FFF03CC2D27413983D704F3C903DCCD2DB7D3 (intptr_t ___system0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_UnloadAll", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_UnloadAll)(___system0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_FlushCommands(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_FlushCommands_m49201576B2506947655AD3E108B3B961DBBED23F (intptr_t ___system0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_FlushCommands", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_FlushCommands)(___system0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_FlushSampleLoading(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_FlushSampleLoading_m8FE82502A4BA6D3EDE399CD205B87A0196738B97 (intptr_t ___system0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_FlushSampleLoading", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_FlushSampleLoading)(___system0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_StartCommandCapture(System.IntPtr,System.Byte[],FMOD.Studio.COMMANDCAPTURE_FLAGS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_StartCommandCapture_mB6F4E170AAE337EFB9E6229D0EC7AB496868774C (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___filename1, uint32_t ___flags2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_StartCommandCapture", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___filename1' to native representation
	uint8_t* ____filename1_marshaled = NULL;
	if (___filename1 != NULL)
	{
		____filename1_marshaled = reinterpret_cast<uint8_t*>((___filename1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_StartCommandCapture)(___system0, ____filename1_marshaled, ___flags2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ____filename1_marshaled, ___flags2);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_StopCommandCapture(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_StopCommandCapture_m5B3A6639DB593C4B54778AE31D18E938C2965471 (intptr_t ___system0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_StopCommandCapture", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_StopCommandCapture)(___system0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_LoadCommandReplay(System.IntPtr,System.Byte[],FMOD.Studio.COMMANDREPLAY_FLAGS,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_LoadCommandReplay_mF8E329DD65A1D7A8A8876B5AFA20538BDAEBDF8B (intptr_t ___system0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___filename1, uint32_t ___flags2, intptr_t* ___replay3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, uint32_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(uint32_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_LoadCommandReplay", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___filename1' to native representation
	uint8_t* ____filename1_marshaled = NULL;
	if (___filename1 != NULL)
	{
		____filename1_marshaled = reinterpret_cast<uint8_t*>((___filename1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_LoadCommandReplay)(___system0, ____filename1_marshaled, ___flags2, ___replay3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ____filename1_marshaled, ___flags2, ___replay3);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetBankCount(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetBankCount_mC7BC2658454C6472A484F1252BBD12AB4E4AB733 (intptr_t ___system0, int32_t* ___count1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetBankCount", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetBankCount)(___system0, ___count1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___count1);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetBankList(System.IntPtr,System.IntPtr[],System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetBankList_m8DD4DDC95F53A0909DAF36ADBB526CC8FDDDB6B8 (intptr_t ___system0, IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___array1, int32_t ___capacity2, int32_t* ___count3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*, int32_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetBankList", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___array1' to native representation
	intptr_t* ____array1_marshaled = NULL;
	if (___array1 != NULL)
	{
		____array1_marshaled = reinterpret_cast<intptr_t*>((___array1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetBankList)(___system0, ____array1_marshaled, ___capacity2, ___count3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ____array1_marshaled, ___capacity2, ___count3);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetParameterDescriptionCount(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetParameterDescriptionCount_m57F5F89EBC669B0457EB9A4C8E3A74A9A2743CD1 (intptr_t ___system0, int32_t* ___count1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetParameterDescriptionCount", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetParameterDescriptionCount)(___system0, ___count1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___count1);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetParameterDescriptionList(System.IntPtr,FMOD.Studio.PARAMETER_DESCRIPTION[],System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetParameterDescriptionList_mC4B1C23FA4EE3B1F8EE1414E49C9AE72CC2A2612 (intptr_t ___system0, PARAMETER_DESCRIPTIONU5BU5D_tBEA36DA68F0A7D4DF58332627768160B58C6A8D5* ___array1, int32_t ___capacity2, int32_t* ___count3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B *, int32_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetParameterDescriptionList", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___array1' to native representation
	PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B * ____array1_marshaled = NULL;
	if (___array1 != NULL)
	{
		il2cpp_array_size_t ____array1_Length = (___array1)->max_length;
		____array1_marshaled = il2cpp_codegen_marshal_allocate_array<PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B >(____array1_Length);
		memset(____array1_marshaled, 0, ____array1_Length * sizeof(PARAMETER_DESCRIPTION_t346686E536E4C240C3FBBF260AE62633B5315A7B ));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetParameterDescriptionList)(___system0, ____array1_marshaled, ___capacity2, ___count3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ____array1_marshaled, ___capacity2, ___count3);
	#endif

	// Marshaling of parameter '___array1' back from native representation
	if (____array1_marshaled != NULL)
	{
		il2cpp_array_size_t ____array1_Length = (___array1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____array1_Length); i++)
		{
			(___array1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____array1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___array1' native representation
	il2cpp_codegen_marshal_free(____array1_marshaled);
	____array1_marshaled = NULL;

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetCPUUsage(System.IntPtr,FMOD.Studio.CPU_USAGE&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetCPUUsage_m9F6E4949FC6DE8E4C37FB5E819A6A6FD2ACCAA83 (intptr_t ___system0, CPU_USAGE_tD3620A435EE6B2144E94AEC150EABD63ABAB0332 * ___usage1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, CPU_USAGE_tD3620A435EE6B2144E94AEC150EABD63ABAB0332 *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(CPU_USAGE_tD3620A435EE6B2144E94AEC150EABD63ABAB0332 *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetCPUUsage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetCPUUsage)(___system0, ___usage1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___usage1);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetBufferUsage(System.IntPtr,FMOD.Studio.BUFFER_USAGE&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetBufferUsage_m517062AC9DD0CCD6A07E3252214C89DD79C3353E (intptr_t ___system0, BUFFER_USAGE_tC3F4FFD3963B6AD7416C4BF66BD3CC40F6DCD4A3 * ___usage1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, BUFFER_USAGE_tC3F4FFD3963B6AD7416C4BF66BD3CC40F6DCD4A3 *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(BUFFER_USAGE_tC3F4FFD3963B6AD7416C4BF66BD3CC40F6DCD4A3 *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetBufferUsage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetBufferUsage)(___system0, ___usage1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___usage1);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_ResetBufferUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_ResetBufferUsage_m78140A4EAAD9A5265A76B32A981C24C5B523525E (intptr_t ___system0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_ResetBufferUsage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_ResetBufferUsage)(___system0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_SetCallback(System.IntPtr,FMOD.Studio.SYSTEM_CALLBACK,FMOD.Studio.SYSTEM_CALLBACK_TYPE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_SetCallback_m46092D961F3DC7E0749B009F2901AAFB464A21C3 (intptr_t ___system0, SYSTEM_CALLBACK_tAC95078FE937EE93C1AD6CA0DD09DB016BBA843C * ___callback1, uint32_t ___callbackmask2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_SetCallback", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_SetCallback)(___system0, ____callback1_marshaled, ___callbackmask2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ____callback1_marshaled, ___callbackmask2);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetUserData(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetUserData_m50FABEF966837F61BCBF2897DA868A44EF1EBFCB (intptr_t ___system0, intptr_t* ___userdata1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetUserData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetUserData)(___system0, ___userdata1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___userdata1);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_SetUserData(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_SetUserData_mAC2DE5FC1F92E54F7CC4AF2E012D486D736CAA96 (intptr_t ___system0, intptr_t ___userdata1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_SetUserData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_SetUserData)(___system0, ___userdata1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___userdata1);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.System::FMOD_Studio_System_GetMemoryUsage(System.IntPtr,FMOD.Studio.MEMORY_USAGE&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_FMOD_Studio_System_GetMemoryUsage_mB05225C1D5EABA2C348A785BC76FF2C8517A0AEF (intptr_t ___system0, MEMORY_USAGE_tE2E03D2DB8C162FC199C1EBBD91C1BC08B605647 * ___memoryusage1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, MEMORY_USAGE_tE2E03D2DB8C162FC199C1EBBD91C1BC08B605647 *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(MEMORY_USAGE_tE2E03D2DB8C162FC199C1EBBD91C1BC08B605647 *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_System_GetMemoryUsage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_System_GetMemoryUsage)(___system0, ___memoryusage1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___system0, ___memoryusage1);
	#endif

	return returnValue;
}
// System.Void FMOD.Studio.System::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void System__ctor_mF18709942E8E08A25810DDE7A5626D65FDA300AD (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	{
		// public System(IntPtr ptr)   { this.handle = ptr; }
		intptr_t L_0 = ___ptr0;
		__this->set_handle_0((intptr_t)L_0);
		// public System(IntPtr ptr)   { this.handle = ptr; }
		return;
	}
}
IL2CPP_EXTERN_C  void System__ctor_mF18709942E8E08A25810DDE7A5626D65FDA300AD_AdjustorThunk (RuntimeObject * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	System__ctor_mF18709942E8E08A25810DDE7A5626D65FDA300AD_inline(_thisAdjusted, ___ptr0, method);
}
// System.Boolean FMOD.Studio.System::hasHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool System_hasHandle_m60DB8CD9AD7EE897C1120DD6AA3966322E63773B (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool hasHandle()     { return this.handle != IntPtr.Zero; }
		intptr_t L_0 = __this->get_handle_0();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool System_hasHandle_m60DB8CD9AD7EE897C1120DD6AA3966322E63773B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	bool _returnValue;
	_returnValue = System_hasHandle_m60DB8CD9AD7EE897C1120DD6AA3966322E63773B(_thisAdjusted, method);
	return _returnValue;
}
// System.Void FMOD.Studio.System::clearHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void System_clearHandle_m9CEEA5C7AAF2B515F6DEF62E39B3D5768DF65426 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void clearHandle()   { this.handle = IntPtr.Zero; }
		__this->set_handle_0((intptr_t)(0));
		// public void clearHandle()   { this.handle = IntPtr.Zero; }
		return;
	}
}
IL2CPP_EXTERN_C  void System_clearHandle_m9CEEA5C7AAF2B515F6DEF62E39B3D5768DF65426_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	System_clearHandle_m9CEEA5C7AAF2B515F6DEF62E39B3D5768DF65426(_thisAdjusted, method);
}
// System.Boolean FMOD.Studio.System::isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool System_isValid_m5B62C7FB4549D95109CF84240C91CC1B727B0BFF (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, const RuntimeMethod* method)
{
	{
		// return hasHandle() && FMOD_Studio_System_IsValid(this.handle);
		bool L_0;
		L_0 = System_hasHandle_m60DB8CD9AD7EE897C1120DD6AA3966322E63773B((System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		intptr_t L_1 = __this->get_handle_0();
		bool L_2;
		L_2 = System_FMOD_Studio_System_IsValid_mD72DC1B10F8FA57DD3C8494BF041BD330AA02DA8((intptr_t)L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool System_isValid_m5B62C7FB4549D95109CF84240C91CC1B727B0BFF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * _thisAdjusted = reinterpret_cast<System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *>(__this + _offset);
	bool _returnValue;
	_returnValue = System_isValid_m5B62C7FB4549D95109CF84240C91CC1B727B0BFF(_thisAdjusted, method);
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
// System.Void FMODUnity.SystemNotInitializedException::.ctor(FMOD.RESULT,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemNotInitializedException__ctor_mA192C23AA3727560D81320452D1A4C287999E224 (SystemNotInitializedException_tB1BE2003450BA76961E0BBA4F7D9E21F8AE4B63C * __this, int32_t ___result0, String_t* ___location1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RESULT_t25BE0876E69B44E7D72DC4C52217E7C5B1A82271_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A37B341BE63968D01D00605F25F5A2725A058BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(string.Format("[FMOD] Initialization failed : {2} : {0} : {1}", result.ToString(), FMOD.Error.String(result), location))
		RuntimeObject * L_0 = Box(RESULT_t25BE0876E69B44E7D72DC4C52217E7C5B1A82271_il2cpp_TypeInfo_var, (&___result0));
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___result0 = *(int32_t*)UnBox(L_0);
		int32_t L_2 = ___result0;
		String_t* L_3;
		L_3 = Error_String_m8AC8CA04A88B158014AD4E49137C48FDBC7BD032(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ___location1;
		String_t* L_5;
		L_5 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral6A37B341BE63968D01D00605F25F5A2725A058BE, L_1, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_5, /*hidden argument*/NULL);
		// Result = result;
		int32_t L_6 = ___result0;
		__this->set_Result_17(L_6);
		// Location = location;
		String_t* L_7 = ___location1;
		__this->set_Location_18(L_7);
		// }
		return;
	}
}
// System.Void FMODUnity.SystemNotInitializedException::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemNotInitializedException__ctor_m5AA3A8419E6F9E497DD703767EC4A84BDE180088 (SystemNotInitializedException_tB1BE2003450BA76961E0BBA4F7D9E21F8AE4B63C * __this, Exception_t * ___inner0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1334702E794CB5624DA378C6CD31B09126197FD9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("[FMOD] Initialization failed", inner)
		Exception_t * L_0 = ___inner0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080(__this, _stringLiteral1334702E794CB5624DA378C6CD31B09126197FD9, L_0, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: FMOD.TAG
IL2CPP_EXTERN_C void TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343_marshal_pinvoke(const TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343& unmarshaled, TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343_marshaled_pinvoke& marshaled)
{
	marshaled.___type_0 = unmarshaled.get_type_0();
	marshaled.___datatype_1 = unmarshaled.get_datatype_1();
	marshaled.___name_2 = unmarshaled.get_name_2();
	marshaled.___data_3 = unmarshaled.get_data_3();
	marshaled.___datalen_4 = unmarshaled.get_datalen_4();
	marshaled.___updated_5 = static_cast<int32_t>(unmarshaled.get_updated_5());
}
IL2CPP_EXTERN_C void TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343_marshal_pinvoke_back(const TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343_marshaled_pinvoke& marshaled, TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343& unmarshaled)
{
	int32_t unmarshaled_type_temp_0 = 0;
	unmarshaled_type_temp_0 = marshaled.___type_0;
	unmarshaled.set_type_0(unmarshaled_type_temp_0);
	int32_t unmarshaled_datatype_temp_1 = 0;
	unmarshaled_datatype_temp_1 = marshaled.___datatype_1;
	unmarshaled.set_datatype_1(unmarshaled_datatype_temp_1);
	StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  unmarshaled_name_temp_2;
	memset((&unmarshaled_name_temp_2), 0, sizeof(unmarshaled_name_temp_2));
	unmarshaled_name_temp_2 = marshaled.___name_2;
	unmarshaled.set_name_2(unmarshaled_name_temp_2);
	intptr_t unmarshaled_data_temp_3;
	memset((&unmarshaled_data_temp_3), 0, sizeof(unmarshaled_data_temp_3));
	unmarshaled_data_temp_3 = marshaled.___data_3;
	unmarshaled.set_data_3(unmarshaled_data_temp_3);
	uint32_t unmarshaled_datalen_temp_4 = 0;
	unmarshaled_datalen_temp_4 = marshaled.___datalen_4;
	unmarshaled.set_datalen_4(unmarshaled_datalen_temp_4);
	bool unmarshaled_updated_temp_5 = false;
	unmarshaled_updated_temp_5 = static_cast<bool>(marshaled.___updated_5);
	unmarshaled.set_updated_5(unmarshaled_updated_temp_5);
}
// Conversion method for clean up from marshalling of: FMOD.TAG
IL2CPP_EXTERN_C void TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343_marshal_pinvoke_cleanup(TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: FMOD.TAG
IL2CPP_EXTERN_C void TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343_marshal_com(const TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343& unmarshaled, TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343_marshaled_com& marshaled)
{
	marshaled.___type_0 = unmarshaled.get_type_0();
	marshaled.___datatype_1 = unmarshaled.get_datatype_1();
	marshaled.___name_2 = unmarshaled.get_name_2();
	marshaled.___data_3 = unmarshaled.get_data_3();
	marshaled.___datalen_4 = unmarshaled.get_datalen_4();
	marshaled.___updated_5 = static_cast<int32_t>(unmarshaled.get_updated_5());
}
IL2CPP_EXTERN_C void TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343_marshal_com_back(const TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343_marshaled_com& marshaled, TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343& unmarshaled)
{
	int32_t unmarshaled_type_temp_0 = 0;
	unmarshaled_type_temp_0 = marshaled.___type_0;
	unmarshaled.set_type_0(unmarshaled_type_temp_0);
	int32_t unmarshaled_datatype_temp_1 = 0;
	unmarshaled_datatype_temp_1 = marshaled.___datatype_1;
	unmarshaled.set_datatype_1(unmarshaled_datatype_temp_1);
	StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  unmarshaled_name_temp_2;
	memset((&unmarshaled_name_temp_2), 0, sizeof(unmarshaled_name_temp_2));
	unmarshaled_name_temp_2 = marshaled.___name_2;
	unmarshaled.set_name_2(unmarshaled_name_temp_2);
	intptr_t unmarshaled_data_temp_3;
	memset((&unmarshaled_data_temp_3), 0, sizeof(unmarshaled_data_temp_3));
	unmarshaled_data_temp_3 = marshaled.___data_3;
	unmarshaled.set_data_3(unmarshaled_data_temp_3);
	uint32_t unmarshaled_datalen_temp_4 = 0;
	unmarshaled_datalen_temp_4 = marshaled.___datalen_4;
	unmarshaled.set_datalen_4(unmarshaled_datalen_temp_4);
	bool unmarshaled_updated_temp_5 = false;
	unmarshaled_updated_temp_5 = static_cast<bool>(marshaled.___updated_5);
	unmarshaled.set_updated_5(unmarshaled_updated_temp_5);
}
// Conversion method for clean up from marshalling of: FMOD.TAG
IL2CPP_EXTERN_C void TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343_marshal_com_cleanup(TAG_t761B0AAA5A8A84CC4DAE0C84F1077669273B4343_marshaled_com& marshaled)
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
// FMOD.RESULT FMOD.Thread::SetAttributes(FMOD.THREAD_TYPE,FMOD.THREAD_AFFINITY,FMOD.THREAD_PRIORITY,FMOD.THREAD_STACK_SIZE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_SetAttributes_m1AF8E04A8B37FFFDA5BAEC81CB69A57BD14E744D (int32_t ___type0, int64_t ___affinity1, int32_t ___priority2, uint32_t ___stacksize3, const RuntimeMethod* method)
{
	{
		// if ((affinity & THREAD_AFFINITY.GROUP_DEFAULT) != 0)
		int64_t L_0 = ___affinity1;
		if (!((int64_t)((int64_t)L_0&(int64_t)((int64_t)4611686018427387904LL))))
		{
			goto IL_0027;
		}
	}
	{
		// affinity &= ~THREAD_AFFINITY.GROUP_DEFAULT;
		int64_t L_1 = ___affinity1;
		___affinity1 = ((int64_t)((int64_t)L_1&(int64_t)((int64_t)-4611686018427387905LL)));
		// affinity = (THREAD_AFFINITY)(((ulong)affinity) | 0x8000000000000000);
		int64_t L_2 = ___affinity1;
		___affinity1 = ((int64_t)((int64_t)L_2|(int64_t)((int64_t)(std::numeric_limits<int64_t>::min)())));
	}

IL_0027:
	{
		// return FMOD5_Thread_SetAttributes(type, affinity, priority, stacksize);
		int32_t L_3 = ___type0;
		int64_t L_4 = ___affinity1;
		int32_t L_5 = ___priority2;
		uint32_t L_6 = ___stacksize3;
		int32_t L_7;
		L_7 = Thread_FMOD5_Thread_SetAttributes_mC43AFEBC6999D2C8E5C10578D8AF14949FF2626E(L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// FMOD.RESULT FMOD.Thread::FMOD5_Thread_SetAttributes(FMOD.THREAD_TYPE,FMOD.THREAD_AFFINITY,FMOD.THREAD_PRIORITY,FMOD.THREAD_STACK_SIZE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_FMOD5_Thread_SetAttributes_mC43AFEBC6999D2C8E5C10578D8AF14949FF2626E (int32_t ___type0, int64_t ___affinity1, int32_t ___priority2, uint32_t ___stacksize3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int64_t, int32_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int64_t) + sizeof(int32_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD5_Thread_SetAttributes", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD5_Thread_SetAttributes)(___type0, ___affinity1, ___priority2, ___stacksize3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___type0, ___affinity1, ___priority2, ___stacksize3);
	#endif

	return returnValue;
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
// System.Void FMODUnity.ThreadAffinityGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadAffinityGroup__ctor_m841FB703A7A063C6F40179579437FEFA71FE947C (ThreadAffinityGroup_t3040CB7EA982A4E81D41588DD37CAFD9A8A298D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4B5F22DCBB87DAE7FA48D0B1B8BFEBA943A0C144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ThreadType> threads = new List<ThreadType>();
		List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2 * L_0 = (List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2 *)il2cpp_codegen_object_new(List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2_il2cpp_TypeInfo_var);
		List_1__ctor_m4B5F22DCBB87DAE7FA48D0B1B8BFEBA943A0C144(L_0, /*hidden argument*/List_1__ctor_m4B5F22DCBB87DAE7FA48D0B1B8BFEBA943A0C144_RuntimeMethod_var);
		__this->set_threads_0(L_0);
		// public ThreadAffinityGroup()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FMODUnity.ThreadAffinityGroup::.ctor(FMODUnity.ThreadAffinityGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadAffinityGroup__ctor_m5203FEDE39E29877E14E25BCC96B6D2F3791918A (ThreadAffinityGroup_t3040CB7EA982A4E81D41588DD37CAFD9A8A298D4 * __this, ThreadAffinityGroup_t3040CB7EA982A4E81D41588DD37CAFD9A8A298D4 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0E5A0C1F5EF3A2218BE4C6111EDC61EA672CE9DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4B5F22DCBB87DAE7FA48D0B1B8BFEBA943A0C144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ThreadType> threads = new List<ThreadType>();
		List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2 * L_0 = (List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2 *)il2cpp_codegen_object_new(List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2_il2cpp_TypeInfo_var);
		List_1__ctor_m4B5F22DCBB87DAE7FA48D0B1B8BFEBA943A0C144(L_0, /*hidden argument*/List_1__ctor_m4B5F22DCBB87DAE7FA48D0B1B8BFEBA943A0C144_RuntimeMethod_var);
		__this->set_threads_0(L_0);
		// public ThreadAffinityGroup(ThreadAffinityGroup other)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// threads = new List<ThreadType>(other.threads);
		ThreadAffinityGroup_t3040CB7EA982A4E81D41588DD37CAFD9A8A298D4 * L_1 = ___other0;
		NullCheck(L_1);
		List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2 * L_2 = L_1->get_threads_0();
		List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2 * L_3 = (List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2 *)il2cpp_codegen_object_new(List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2_il2cpp_TypeInfo_var);
		List_1__ctor_m0E5A0C1F5EF3A2218BE4C6111EDC61EA672CE9DF(L_3, L_2, /*hidden argument*/List_1__ctor_m0E5A0C1F5EF3A2218BE4C6111EDC61EA672CE9DF_RuntimeMethod_var);
		__this->set_threads_0(L_3);
		// affinity = other.affinity;
		ThreadAffinityGroup_t3040CB7EA982A4E81D41588DD37CAFD9A8A298D4 * L_4 = ___other0;
		NullCheck(L_4);
		uint32_t L_5 = L_4->get_affinity_1();
		__this->set_affinity_1(L_5);
		// }
		return;
	}
}
// System.Void FMODUnity.ThreadAffinityGroup::.ctor(FMODUnity.ThreadAffinity,FMODUnity.ThreadType[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadAffinityGroup__ctor_m786320050778FBA28C55589CF8B103A10EC482AC (ThreadAffinityGroup_t3040CB7EA982A4E81D41588DD37CAFD9A8A298D4 * __this, uint32_t ___affinity0, ThreadTypeU5BU5D_t2243EF3BF541EC7639D75AC642761856CF0D28BB* ___threads1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0E5A0C1F5EF3A2218BE4C6111EDC61EA672CE9DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4B5F22DCBB87DAE7FA48D0B1B8BFEBA943A0C144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ThreadType> threads = new List<ThreadType>();
		List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2 * L_0 = (List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2 *)il2cpp_codegen_object_new(List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2_il2cpp_TypeInfo_var);
		List_1__ctor_m4B5F22DCBB87DAE7FA48D0B1B8BFEBA943A0C144(L_0, /*hidden argument*/List_1__ctor_m4B5F22DCBB87DAE7FA48D0B1B8BFEBA943A0C144_RuntimeMethod_var);
		__this->set_threads_0(L_0);
		// public ThreadAffinityGroup(ThreadAffinity affinity, params ThreadType[] threads)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.threads = new List<ThreadType>(threads);
		ThreadTypeU5BU5D_t2243EF3BF541EC7639D75AC642761856CF0D28BB* L_1 = ___threads1;
		List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2 * L_2 = (List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2 *)il2cpp_codegen_object_new(List_1_t7EF0A07DDE6D9F97A324463D6D7EC16E8CB8D2C2_il2cpp_TypeInfo_var);
		List_1__ctor_m0E5A0C1F5EF3A2218BE4C6111EDC61EA672CE9DF(L_2, (RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/List_1__ctor_m0E5A0C1F5EF3A2218BE4C6111EDC61EA672CE9DF_RuntimeMethod_var);
		__this->set_threads_0(L_2);
		// this.affinity = affinity;
		uint32_t L_3 = ___affinity0;
		__this->set_affinity_1(L_3);
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


// Conversion methods for marshalling of: FMOD.Studio.USER_PROPERTY
IL2CPP_EXTERN_C void USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1_marshal_pinvoke(const USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1& unmarshaled, USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = unmarshaled.get_name_0();
	marshaled.___type_1 = unmarshaled.get_type_1();
	Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshal_pinvoke(unmarshaled.get_value_2(), marshaled.___value_2);
}
IL2CPP_EXTERN_C void USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1_marshal_pinvoke_back(const USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1_marshaled_pinvoke& marshaled, USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1& unmarshaled)
{
	StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  unmarshaled_name_temp_0;
	memset((&unmarshaled_name_temp_0), 0, sizeof(unmarshaled_name_temp_0));
	unmarshaled_name_temp_0 = marshaled.___name_0;
	unmarshaled.set_name_0(unmarshaled_name_temp_0);
	int32_t unmarshaled_type_temp_1 = 0;
	unmarshaled_type_temp_1 = marshaled.___type_1;
	unmarshaled.set_type_1(unmarshaled_type_temp_1);
	Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294  unmarshaled_value_temp_2;
	memset((&unmarshaled_value_temp_2), 0, sizeof(unmarshaled_value_temp_2));
	Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshal_pinvoke_back(marshaled.___value_2, unmarshaled_value_temp_2);
	unmarshaled.set_value_2(unmarshaled_value_temp_2);
}
// Conversion method for clean up from marshalling of: FMOD.Studio.USER_PROPERTY
IL2CPP_EXTERN_C void USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1_marshal_pinvoke_cleanup(USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1_marshaled_pinvoke& marshaled)
{
	Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshal_pinvoke_cleanup(marshaled.___value_2);
}


// Conversion methods for marshalling of: FMOD.Studio.USER_PROPERTY
IL2CPP_EXTERN_C void USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1_marshal_com(const USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1& unmarshaled, USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1_marshaled_com& marshaled)
{
	marshaled.___name_0 = unmarshaled.get_name_0();
	marshaled.___type_1 = unmarshaled.get_type_1();
	Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshal_com(unmarshaled.get_value_2(), marshaled.___value_2);
}
IL2CPP_EXTERN_C void USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1_marshal_com_back(const USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1_marshaled_com& marshaled, USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1& unmarshaled)
{
	StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  unmarshaled_name_temp_0;
	memset((&unmarshaled_name_temp_0), 0, sizeof(unmarshaled_name_temp_0));
	unmarshaled_name_temp_0 = marshaled.___name_0;
	unmarshaled.set_name_0(unmarshaled_name_temp_0);
	int32_t unmarshaled_type_temp_1 = 0;
	unmarshaled_type_temp_1 = marshaled.___type_1;
	unmarshaled.set_type_1(unmarshaled_type_temp_1);
	Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294  unmarshaled_value_temp_2;
	memset((&unmarshaled_value_temp_2), 0, sizeof(unmarshaled_value_temp_2));
	Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshal_com_back(marshaled.___value_2, unmarshaled_value_temp_2);
	unmarshaled.set_value_2(unmarshaled_value_temp_2);
}
// Conversion method for clean up from marshalling of: FMOD.Studio.USER_PROPERTY
IL2CPP_EXTERN_C void USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1_marshal_com_cleanup(USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1_marshaled_com& marshaled)
{
	Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshal_com_cleanup(marshaled.___value_2);
}
// System.Int32 FMOD.Studio.USER_PROPERTY::intValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t USER_PROPERTY_intValue_m208EF371AEE68227EB05515A2F6CFEC808E55248 (USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1 * __this, const RuntimeMethod* method)
{
	{
		// public int intValue()       {   return (type == USER_PROPERTY_TYPE.INTEGER) ? value.intvalue : -1;      }
		int32_t L_0 = __this->get_type_1();
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}

IL_000a:
	{
		Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294 * L_1 = __this->get_address_of_value_2();
		int32_t L_2 = L_1->get_intvalue_0();
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t USER_PROPERTY_intValue_m208EF371AEE68227EB05515A2F6CFEC808E55248_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1 * _thisAdjusted = reinterpret_cast<USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = USER_PROPERTY_intValue_m208EF371AEE68227EB05515A2F6CFEC808E55248(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean FMOD.Studio.USER_PROPERTY::boolValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool USER_PROPERTY_boolValue_m2B4783AAA6BF0EFE0F6FAA23A5E02D4634514E0E (USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1 * __this, const RuntimeMethod* method)
{
	{
		// public bool boolValue()     {   return (type == USER_PROPERTY_TYPE.BOOLEAN) ? value.boolvalue : false;  }
		int32_t L_0 = __this->get_type_1();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294 * L_1 = __this->get_address_of_value_2();
		bool L_2 = L_1->get_boolvalue_1();
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool USER_PROPERTY_boolValue_m2B4783AAA6BF0EFE0F6FAA23A5E02D4634514E0E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1 * _thisAdjusted = reinterpret_cast<USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1 *>(__this + _offset);
	bool _returnValue;
	_returnValue = USER_PROPERTY_boolValue_m2B4783AAA6BF0EFE0F6FAA23A5E02D4634514E0E(_thisAdjusted, method);
	return _returnValue;
}
// System.Single FMOD.Studio.USER_PROPERTY::floatValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float USER_PROPERTY_floatValue_m2A554F53268650B89BF95C78F291F84770EA6CE8 (USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1 * __this, const RuntimeMethod* method)
{
	{
		// public float floatValue()   {   return (type == USER_PROPERTY_TYPE.FLOAT)   ? value.floatvalue : -1;    }
		int32_t L_0 = __this->get_type_1();
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_000f;
		}
	}
	{
		return (-1.0f);
	}

IL_000f:
	{
		Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294 * L_1 = __this->get_address_of_value_2();
		float L_2 = L_1->get_floatvalue_2();
		return L_2;
	}
}
IL2CPP_EXTERN_C  float USER_PROPERTY_floatValue_m2A554F53268650B89BF95C78F291F84770EA6CE8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1 * _thisAdjusted = reinterpret_cast<USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1 *>(__this + _offset);
	float _returnValue;
	_returnValue = USER_PROPERTY_floatValue_m2A554F53268650B89BF95C78F291F84770EA6CE8(_thisAdjusted, method);
	return _returnValue;
}
// System.String FMOD.Studio.USER_PROPERTY::stringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* USER_PROPERTY_stringValue_m38C9B0E7D020613E96631135C766050716CA2A6F (USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string stringValue() {   return (type == USER_PROPERTY_TYPE.STRING)  ? value.stringvalue : "";   }
		int32_t L_0 = __this->get_type_1();
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_000f;
		}
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_000f:
	{
		Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294 * L_1 = __this->get_address_of_value_2();
		StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  L_2 = L_1->get_stringvalue_3();
		String_t* L_3;
		L_3 = StringWrapper_op_Implicit_m0CB2C6B93934994254E1B70CFDA0AEC292A03514(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* USER_PROPERTY_stringValue_m38C9B0E7D020613E96631135C766050716CA2A6F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1 * _thisAdjusted = reinterpret_cast<USER_PROPERTY_tECF0E1D72B54D20694A965C9275A68C6AABEE0D1 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = USER_PROPERTY_stringValue_m38C9B0E7D020613E96631135C766050716CA2A6F(_thisAdjusted, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: FMOD.Studio.Union_IntBoolFloatString
IL2CPP_EXTERN_C void Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshal_pinvoke(const Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294& unmarshaled, Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshaled_pinvoke& marshaled)
{
	marshaled.___intvalue_0 = unmarshaled.get_intvalue_0();
	marshaled.___boolvalue_1 = static_cast<int32_t>(unmarshaled.get_boolvalue_1());
	marshaled.___floatvalue_2 = unmarshaled.get_floatvalue_2();
	marshaled.___stringvalue_3 = unmarshaled.get_stringvalue_3();
}
IL2CPP_EXTERN_C void Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshal_pinvoke_back(const Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshaled_pinvoke& marshaled, Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294& unmarshaled)
{
	int32_t unmarshaled_intvalue_temp_0 = 0;
	unmarshaled_intvalue_temp_0 = marshaled.___intvalue_0;
	unmarshaled.set_intvalue_0(unmarshaled_intvalue_temp_0);
	bool unmarshaled_boolvalue_temp_1 = false;
	unmarshaled_boolvalue_temp_1 = static_cast<bool>(marshaled.___boolvalue_1);
	unmarshaled.set_boolvalue_1(unmarshaled_boolvalue_temp_1);
	float unmarshaled_floatvalue_temp_2 = 0.0f;
	unmarshaled_floatvalue_temp_2 = marshaled.___floatvalue_2;
	unmarshaled.set_floatvalue_2(unmarshaled_floatvalue_temp_2);
	StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  unmarshaled_stringvalue_temp_3;
	memset((&unmarshaled_stringvalue_temp_3), 0, sizeof(unmarshaled_stringvalue_temp_3));
	unmarshaled_stringvalue_temp_3 = marshaled.___stringvalue_3;
	unmarshaled.set_stringvalue_3(unmarshaled_stringvalue_temp_3);
}
// Conversion method for clean up from marshalling of: FMOD.Studio.Union_IntBoolFloatString
IL2CPP_EXTERN_C void Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshal_pinvoke_cleanup(Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: FMOD.Studio.Union_IntBoolFloatString
IL2CPP_EXTERN_C void Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshal_com(const Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294& unmarshaled, Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshaled_com& marshaled)
{
	marshaled.___intvalue_0 = unmarshaled.get_intvalue_0();
	marshaled.___boolvalue_1 = static_cast<int32_t>(unmarshaled.get_boolvalue_1());
	marshaled.___floatvalue_2 = unmarshaled.get_floatvalue_2();
	marshaled.___stringvalue_3 = unmarshaled.get_stringvalue_3();
}
IL2CPP_EXTERN_C void Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshal_com_back(const Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshaled_com& marshaled, Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294& unmarshaled)
{
	int32_t unmarshaled_intvalue_temp_0 = 0;
	unmarshaled_intvalue_temp_0 = marshaled.___intvalue_0;
	unmarshaled.set_intvalue_0(unmarshaled_intvalue_temp_0);
	bool unmarshaled_boolvalue_temp_1 = false;
	unmarshaled_boolvalue_temp_1 = static_cast<bool>(marshaled.___boolvalue_1);
	unmarshaled.set_boolvalue_1(unmarshaled_boolvalue_temp_1);
	float unmarshaled_floatvalue_temp_2 = 0.0f;
	unmarshaled_floatvalue_temp_2 = marshaled.___floatvalue_2;
	unmarshaled.set_floatvalue_2(unmarshaled_floatvalue_temp_2);
	StringWrapper_t0232445743A8097D13894E9DDA8F1963373891B6  unmarshaled_stringvalue_temp_3;
	memset((&unmarshaled_stringvalue_temp_3), 0, sizeof(unmarshaled_stringvalue_temp_3));
	unmarshaled_stringvalue_temp_3 = marshaled.___stringvalue_3;
	unmarshaled.set_stringvalue_3(unmarshaled_stringvalue_temp_3);
}
// Conversion method for clean up from marshalling of: FMOD.Studio.Union_IntBoolFloatString
IL2CPP_EXTERN_C void Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshal_com_cleanup(Union_IntBoolFloatString_tDCBA903F5A595A0D17AFB55E9D1907024D323294_marshaled_com& marshaled)
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
// FMOD.RESULT FMOD.Studio.Util::parseID(System.String,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Util_parseID_m335F95A56D651C52481CF34E8AE2B44A990EDE57 (String_t* ___idString0, Guid_t * ___id1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (StringHelper.ThreadSafeEncoding encoder = StringHelper.GetFreeHelper())
		IL2CPP_RUNTIME_CLASS_INIT(StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_0;
		L_0 = StringHelper_GetFreeHelper_m8E145BDAC33B7FB10BBF4A21F2FB8CA431019977(/*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		// return FMOD_Studio_ParseID(encoder.byteFromStringUTF8(idString), out id);
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_1 = V_0;
		String_t* L_2 = ___idString0;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = ThreadSafeEncoding_byteFromStringUTF8_m125AE74374BC84CA626377F9CF7FDF6DF0D1E24E(L_1, L_2, /*hidden argument*/NULL);
		Guid_t * L_4 = ___id1;
		int32_t L_5;
		L_5 = Util_FMOD_Studio_ParseID_mFDB8D0D9AFD0DA3B51AA312000F260A386ED18B0(L_3, (Guid_t *)L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		IL2CPP_LEAVE(0x20, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_6 = V_0;
			if (!L_6)
			{
				goto IL_001f;
			}
		}

IL_0019:
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_7 = V_0;
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_7);
		}

IL_001f:
		{
			IL2CPP_END_FINALLY(22)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x20, IL_0020)
	}

IL_0020:
	{
		// }
		int32_t L_8 = V_1;
		return L_8;
	}
}
// FMOD.RESULT FMOD.Studio.Util::FMOD_Studio_ParseID(System.Byte[],System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Util_FMOD_Studio_ParseID_mFDB8D0D9AFD0DA3B51AA312000F260A386ED18B0 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___idString0, Guid_t * ___id1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint8_t*, Guid_t *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(Guid_t *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_ParseID", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___idString0' to native representation
	uint8_t* ____idString0_marshaled = NULL;
	if (___idString0 != NULL)
	{
		____idString0_marshaled = reinterpret_cast<uint8_t*>((___idString0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_ParseID)(____idString0_marshaled, ___id1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____idString0_marshaled, ___id1);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// FMOD.RESULT FMOD.Studio.VCA::getID(System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VCA_getID_m99335FAA90C7C80A6B562E1013FD94FF884E3541 (VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * __this, Guid_t * ___id0, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_VCA_GetID(this.handle, out id);
		intptr_t L_0 = __this->get_handle_0();
		Guid_t * L_1 = ___id0;
		int32_t L_2;
		L_2 = VCA_FMOD_Studio_VCA_GetID_m708F79CD6C66519D9DA41118E7BA49BBBA35D2D1((intptr_t)L_0, (Guid_t *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t VCA_getID_m99335FAA90C7C80A6B562E1013FD94FF884E3541_AdjustorThunk (RuntimeObject * __this, Guid_t * ___id0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * _thisAdjusted = reinterpret_cast<VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = VCA_getID_m99335FAA90C7C80A6B562E1013FD94FF884E3541(_thisAdjusted, ___id0, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.VCA::getPath(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VCA_getPath_mC6F354640E953939C07C0595CC55297F40E3E5A7 (VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * __this, String_t** ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// path = null;
		String_t** L_0 = ___path0;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// using (StringHelper.ThreadSafeEncoding encoder = StringHelper.GetFreeHelper())
		IL2CPP_RUNTIME_CLASS_INIT(StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_1;
		L_1 = StringHelper_GetFreeHelper_m8E145BDAC33B7FB10BBF4A21F2FB8CA431019977(/*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			// IntPtr stringMem = Marshal.AllocHGlobal(256);
			IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
			intptr_t L_2;
			L_2 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(((int32_t)256), /*hidden argument*/NULL);
			V_1 = (intptr_t)L_2;
			// int retrieved = 0;
			V_2 = 0;
			// RESULT result = FMOD_Studio_VCA_GetPath(this.handle, stringMem, 256, out retrieved);
			intptr_t L_3 = __this->get_handle_0();
			intptr_t L_4 = V_1;
			int32_t L_5;
			L_5 = VCA_FMOD_Studio_VCA_GetPath_m50568C245AFB9B6CA09C0085031ABE31C7EE53A3((intptr_t)L_3, (intptr_t)L_4, ((int32_t)256), (int32_t*)(&V_2), /*hidden argument*/NULL);
			V_3 = L_5;
			// if (result == RESULT.ERR_TRUNCATED)
			int32_t L_6 = V_3;
			if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)65)))))
			{
				goto IL_004c;
			}
		}

IL_002f:
		{
			// Marshal.FreeHGlobal(stringMem);
			intptr_t L_7 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
			Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_7, /*hidden argument*/NULL);
			// stringMem = Marshal.AllocHGlobal(retrieved);
			int32_t L_8 = V_2;
			intptr_t L_9;
			L_9 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(L_8, /*hidden argument*/NULL);
			V_1 = (intptr_t)L_9;
			// result = FMOD_Studio_VCA_GetPath(this.handle, stringMem, retrieved, out retrieved);
			intptr_t L_10 = __this->get_handle_0();
			intptr_t L_11 = V_1;
			int32_t L_12 = V_2;
			int32_t L_13;
			L_13 = VCA_FMOD_Studio_VCA_GetPath_m50568C245AFB9B6CA09C0085031ABE31C7EE53A3((intptr_t)L_10, (intptr_t)L_11, L_12, (int32_t*)(&V_2), /*hidden argument*/NULL);
			V_3 = L_13;
		}

IL_004c:
		{
			// if (result == RESULT.OK)
			int32_t L_14 = V_3;
			if (L_14)
			{
				goto IL_0058;
			}
		}

IL_004f:
		{
			// path = encoder.stringFromNative(stringMem);
			String_t** L_15 = ___path0;
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_16 = V_0;
			intptr_t L_17 = V_1;
			NullCheck(L_16);
			String_t* L_18;
			L_18 = ThreadSafeEncoding_stringFromNative_mC8F16234AA2F887DD608463B826DB612F4998234(L_16, (intptr_t)L_17, /*hidden argument*/NULL);
			*((RuntimeObject **)L_15) = (RuntimeObject *)L_18;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_15, (void*)(RuntimeObject *)L_18);
		}

IL_0058:
		{
			// Marshal.FreeHGlobal(stringMem);
			intptr_t L_19 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
			Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_19, /*hidden argument*/NULL);
			// return result;
			int32_t L_20 = V_3;
			V_4 = L_20;
			IL2CPP_LEAVE(0x6D, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_21 = V_0;
			if (!L_21)
			{
				goto IL_006c;
			}
		}

IL_0066:
		{
			ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * L_22 = V_0;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_22);
		}

IL_006c:
		{
			IL2CPP_END_FINALLY(99)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
	}

IL_006d:
	{
		// }
		int32_t L_23 = V_4;
		return L_23;
	}
}
IL2CPP_EXTERN_C  int32_t VCA_getPath_mC6F354640E953939C07C0595CC55297F40E3E5A7_AdjustorThunk (RuntimeObject * __this, String_t** ___path0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * _thisAdjusted = reinterpret_cast<VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = VCA_getPath_mC6F354640E953939C07C0595CC55297F40E3E5A7(_thisAdjusted, ___path0, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.VCA::getVolume(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VCA_getVolume_mBAB13B7C3DBD79FA1148B60AB0C0847D862BB6B6 (VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * __this, float* ___volume0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return getVolume(out volume, out finalVolume);
		float* L_0 = ___volume0;
		int32_t L_1;
		L_1 = VCA_getVolume_m520F6BFFE072DCB56F90118E95850EBC18243F10((VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 *)__this, (float*)L_0, (float*)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t VCA_getVolume_mBAB13B7C3DBD79FA1148B60AB0C0847D862BB6B6_AdjustorThunk (RuntimeObject * __this, float* ___volume0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * _thisAdjusted = reinterpret_cast<VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = VCA_getVolume_mBAB13B7C3DBD79FA1148B60AB0C0847D862BB6B6(_thisAdjusted, ___volume0, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.VCA::getVolume(System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VCA_getVolume_m520F6BFFE072DCB56F90118E95850EBC18243F10 (VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * __this, float* ___volume0, float* ___finalvolume1, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_VCA_GetVolume(this.handle, out volume, out finalvolume);
		intptr_t L_0 = __this->get_handle_0();
		float* L_1 = ___volume0;
		float* L_2 = ___finalvolume1;
		int32_t L_3;
		L_3 = VCA_FMOD_Studio_VCA_GetVolume_m74A1C9C48062EA6166EEBCD96BE94D23BBFA35F5((intptr_t)L_0, (float*)L_1, (float*)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t VCA_getVolume_m520F6BFFE072DCB56F90118E95850EBC18243F10_AdjustorThunk (RuntimeObject * __this, float* ___volume0, float* ___finalvolume1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * _thisAdjusted = reinterpret_cast<VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = VCA_getVolume_m520F6BFFE072DCB56F90118E95850EBC18243F10(_thisAdjusted, ___volume0, ___finalvolume1, method);
	return _returnValue;
}
// FMOD.RESULT FMOD.Studio.VCA::setVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VCA_setVolume_m2B809FE3B1868B4969F3603ED8D9261D20E7ED8C (VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * __this, float ___volume0, const RuntimeMethod* method)
{
	{
		// return FMOD_Studio_VCA_SetVolume(this.handle, volume);
		intptr_t L_0 = __this->get_handle_0();
		float L_1 = ___volume0;
		int32_t L_2;
		L_2 = VCA_FMOD_Studio_VCA_SetVolume_m6D6A7DF234AE9481089ADC79B99470AED66672F2((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t VCA_setVolume_m2B809FE3B1868B4969F3603ED8D9261D20E7ED8C_AdjustorThunk (RuntimeObject * __this, float ___volume0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * _thisAdjusted = reinterpret_cast<VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = VCA_setVolume_m2B809FE3B1868B4969F3603ED8D9261D20E7ED8C(_thisAdjusted, ___volume0, method);
	return _returnValue;
}
// System.Boolean FMOD.Studio.VCA::FMOD_Studio_VCA_IsValid(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VCA_FMOD_Studio_VCA_IsValid_mC30C97630F709337B187ACDA4C2880E52C1BC002 (intptr_t ___vca0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_VCA_IsValid", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_VCA_IsValid)(___vca0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___vca0);
	#endif

	return static_cast<bool>(returnValue);
}
// FMOD.RESULT FMOD.Studio.VCA::FMOD_Studio_VCA_GetID(System.IntPtr,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VCA_FMOD_Studio_VCA_GetID_m708F79CD6C66519D9DA41118E7BA49BBBA35D2D1 (intptr_t ___vca0, Guid_t * ___id1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, Guid_t *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Guid_t *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_VCA_GetID", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_VCA_GetID)(___vca0, ___id1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___vca0, ___id1);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.VCA::FMOD_Studio_VCA_GetPath(System.IntPtr,System.IntPtr,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VCA_FMOD_Studio_VCA_GetPath_m50568C245AFB9B6CA09C0085031ABE31C7EE53A3 (intptr_t ___vca0, intptr_t ___path1, int32_t ___size2, int32_t* ___retrieved3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_VCA_GetPath", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_VCA_GetPath)(___vca0, ___path1, ___size2, ___retrieved3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___vca0, ___path1, ___size2, ___retrieved3);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.VCA::FMOD_Studio_VCA_GetVolume(System.IntPtr,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VCA_FMOD_Studio_VCA_GetVolume_m74A1C9C48062EA6166EEBCD96BE94D23BBFA35F5 (intptr_t ___vca0, float* ___volume1, float* ___finalvolume2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(float*) + sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_VCA_GetVolume", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_VCA_GetVolume)(___vca0, ___volume1, ___finalvolume2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___vca0, ___volume1, ___finalvolume2);
	#endif

	return returnValue;
}
// FMOD.RESULT FMOD.Studio.VCA::FMOD_Studio_VCA_SetVolume(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VCA_FMOD_Studio_VCA_SetVolume_m6D6A7DF234AE9481089ADC79B99470AED66672F2 (intptr_t ___vca0, float ___volume1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_fmodstudio_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmodstudio"), "FMOD_Studio_VCA_SetVolume", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_fmodstudio_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FMOD_Studio_VCA_SetVolume)(___vca0, ___volume1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___vca0, ___volume1);
	#endif

	return returnValue;
}
// System.Void FMOD.Studio.VCA::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCA__ctor_mCB5031A88E72F2D90BBA2CFC7620CCBC03DF9AF4 (VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	{
		// public VCA(IntPtr ptr)      { this.handle = ptr; }
		intptr_t L_0 = ___ptr0;
		__this->set_handle_0((intptr_t)L_0);
		// public VCA(IntPtr ptr)      { this.handle = ptr; }
		return;
	}
}
IL2CPP_EXTERN_C  void VCA__ctor_mCB5031A88E72F2D90BBA2CFC7620CCBC03DF9AF4_AdjustorThunk (RuntimeObject * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * _thisAdjusted = reinterpret_cast<VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 *>(__this + _offset);
	VCA__ctor_mCB5031A88E72F2D90BBA2CFC7620CCBC03DF9AF4_inline(_thisAdjusted, ___ptr0, method);
}
// System.Boolean FMOD.Studio.VCA::hasHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VCA_hasHandle_m4236ACB39655290A51ADFAC1C6880FE78CFCD1FF (VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool hasHandle()     { return this.handle != IntPtr.Zero; }
		intptr_t L_0 = __this->get_handle_0();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool VCA_hasHandle_m4236ACB39655290A51ADFAC1C6880FE78CFCD1FF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * _thisAdjusted = reinterpret_cast<VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 *>(__this + _offset);
	bool _returnValue;
	_returnValue = VCA_hasHandle_m4236ACB39655290A51ADFAC1C6880FE78CFCD1FF(_thisAdjusted, method);
	return _returnValue;
}
// System.Void FMOD.Studio.VCA::clearHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCA_clearHandle_mB8EBE950CA2E3DD6E8FC8520A4E19A70D9CBA69C (VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void clearHandle()   { this.handle = IntPtr.Zero; }
		__this->set_handle_0((intptr_t)(0));
		// public void clearHandle()   { this.handle = IntPtr.Zero; }
		return;
	}
}
IL2CPP_EXTERN_C  void VCA_clearHandle_mB8EBE950CA2E3DD6E8FC8520A4E19A70D9CBA69C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * _thisAdjusted = reinterpret_cast<VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 *>(__this + _offset);
	VCA_clearHandle_mB8EBE950CA2E3DD6E8FC8520A4E19A70D9CBA69C(_thisAdjusted, method);
}
// System.Boolean FMOD.Studio.VCA::isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VCA_isValid_mB105ECBF2FD9ECBC7967786616C33A5D1249E53E (VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * __this, const RuntimeMethod* method)
{
	{
		// return hasHandle() && FMOD_Studio_VCA_IsValid(this.handle);
		bool L_0;
		L_0 = VCA_hasHandle_m4236ACB39655290A51ADFAC1C6880FE78CFCD1FF((VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		intptr_t L_1 = __this->get_handle_0();
		bool L_2;
		L_2 = VCA_FMOD_Studio_VCA_IsValid_mC30C97630F709337B187ACDA4C2880E52C1BC002((intptr_t)L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool VCA_isValid_mB105ECBF2FD9ECBC7967786616C33A5D1249E53E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * _thisAdjusted = reinterpret_cast<VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 *>(__this + _offset);
	bool _returnValue;
	_returnValue = VCA_isValid_mB105ECBF2FD9ECBC7967786616C33A5D1249E53E(_thisAdjusted, method);
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
// System.Void FMODUnity.VCANotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VCANotFoundException__ctor_m05F238252B1516D6DB9448B1679641A728BB2A3E (VCANotFoundException_t7180AED40B600DC06C9AA6131683130085296AD6 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E91B09D74330D84716D5CE30BB9B07E1C7A18FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("[FMOD] VCA not found '" + path + "'")
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral1E91B09D74330D84716D5CE30BB9B07E1C7A18FB, L_0, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_1, /*hidden argument*/NULL);
		// Path = path;
		String_t* L_2 = ___path0;
		__this->set_Path_17(L_2);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FMOD.VERSION::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VERSION__ctor_m91C67C385E270A67A5BBD423C19F9ABBE50BB2F8 (VERSION_t02D20EF90F05F3882F88161C3906607B1EF5B4CE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void FMODUnity.Legacy/PlatformBoolSetting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformBoolSetting__ctor_m12579CDBB78D5BB15FCF73CFA03FEFB5B697F4E9 (PlatformBoolSetting_t2E22BFCAF1E3F64C00B56A090BE84DFBBE2BA479 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformSetting_1__ctor_m7358C34761BD83F442F2C055D210180E443DA4FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlatformSetting_1__ctor_m7358C34761BD83F442F2C055D210180E443DA4FC(__this, /*hidden argument*/PlatformSetting_1__ctor_m7358C34761BD83F442F2C055D210180E443DA4FC_RuntimeMethod_var);
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
// System.Void FMODUnity.Legacy/PlatformIntSetting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformIntSetting__ctor_m0FF655411ED5D0CF3CCBFFA4E92405738237C907 (PlatformIntSetting_t9864FB4E1B651288FBC26FB386A06161EBBE30D3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformSetting_1__ctor_m1C7A8752D41E64C1743BA8DE099AA3AAE0784F5A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlatformSetting_1__ctor_m1C7A8752D41E64C1743BA8DE099AA3AAE0784F5A(__this, /*hidden argument*/PlatformSetting_1__ctor_m1C7A8752D41E64C1743BA8DE099AA3AAE0784F5A_RuntimeMethod_var);
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
// System.Void FMODUnity.Legacy/PlatformSettingBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformSettingBase__ctor_m563ED2737A356C2538E39972E2795907A867D3F7 (PlatformSettingBase_t7FDEC6A3823A563621A087868AF56B54A7653B43 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void FMODUnity.Legacy/PlatformStringSetting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformStringSetting__ctor_mC1DE6FB15AD2F9EBC08EADA2C4446B8278AFA457 (PlatformStringSetting_t7610A0760778513396EEE9FCB60D43F202BAE4C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformSetting_1__ctor_m15671CC1526FF2C711A5E6EF4865EDC33C953578_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlatformSetting_1__ctor_m15671CC1526FF2C711A5E6EF4865EDC33C953578(__this, /*hidden argument*/PlatformSetting_1__ctor_m15671CC1526FF2C711A5E6EF4865EDC33C953578_RuntimeMethod_var);
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
// System.Void FMODUnity.Platform/PropertyAccessors::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessors__cctor_mA2D7F149633F2C6EB7E140B2DA8F867D67045BF5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mA1B14C222C3C3E3A9FB75789907F3ABC297C4974_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mBEE0B8FCEEC73FB03A94AB3C323E5167497AE30F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mBF95B76079873F4404E885D6D391FBF733466CE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mDFCD9D28A06A79FBE7DB11E3FDE4C4203A77A584_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mE64CAEFC88B56EE692AA35DE5C04F6F1E5CA7843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mFB468477EB787E9D6D78904DFE15B7754F5B3890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t45BDF03ABB29FE835EF6F6CA3ABD009BAB9995AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t6CE4CF30CD70D39A2CB75A55B5B0E742D1C226F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t90D3EC3607DEE77133AB325243D70D3BF30481BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA49219E9EC3C0B2E9A55DEFD7CAD14C1121311C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCB94F642CEF6C6C7ECD6A1E2038D7EE45FE8E8E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyAccessor_1__ctor_m1F9DAD4B75E3D28D077D23FFFCDE7A412391C1CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyAccessor_1__ctor_m3E035A428D209C7A6DF0F2FBFD799C59C3EEEF4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyAccessor_1__ctor_m85B8153BC5914536F568B4EBE5E1A5D7E05F185B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyAccessor_1__ctor_m9A30F83C45C1F465269ED8BAFCFED58DC60C8519_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyAccessor_1__ctor_mA3732FA4712BD8D1BCAF3ED04FAC2A6DD33E9060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyAccessor_1__ctor_mCF8928B830DA0BB19BD8D9E0A88FB5153D920206_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__14_0_m4E0FE056D0DF81F0D4F301446496833AED3B8088_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__14_10_m8DBFA5C36184F6A8A23BF7E4D1819B3C4360E40F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__14_11_m1787A1CCDB2C9F44F5B998B4E3C9EEC22B9AB46E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__14_12_mEBE2F4D7572C12932DBD15DFE12E0B36488D5EDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__14_13_mA59F5F47EAAA9ABAA5547C6D92A046B183B5DD64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__14_1_mAAA25F79AD860007F5330D1C24E5070971933AA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__14_2_m3E47B29A9146C61755C5547E3D60E5F11B4CAFD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__14_3_mC9777CCA1C44EAE907B386301A0CF4DECCC06270_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__14_4_m9ABCF4B4F2B725B6E9BF6D75FF9A2D8B8FF0A963_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__14_5_m7E66F4F94CE79EBF563DB336D0684EEF466E104A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__14_6_m84479FC00F8EC3B1E7A48D5128D03DA591B86256_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__14_7_m8B0C496900697695BFE6F209B8BD79C250DC2048_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__14_8_m861E26F6400EBE971FA3DF318E348E06B886371C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__14_9_m8573561C3E240DDF90082684F297114CA7A5424A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB784C0FDB5E2F468943EF04EB13EE0E6135421C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly PropertyAccessor<TriStateBool> LiveUpdate
		//         = new PropertyAccessor<TriStateBool>(properties => properties.LiveUpdate, TriStateBool.Disabled);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_il2cpp_TypeInfo_var);
		U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * L_0 = ((U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tA49219E9EC3C0B2E9A55DEFD7CAD14C1121311C7 * L_1 = (Func_2_tA49219E9EC3C0B2E9A55DEFD7CAD14C1121311C7 *)il2cpp_codegen_object_new(Func_2_tA49219E9EC3C0B2E9A55DEFD7CAD14C1121311C7_il2cpp_TypeInfo_var);
		Func_2__ctor_mE64CAEFC88B56EE692AA35DE5C04F6F1E5CA7843(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__14_0_m4E0FE056D0DF81F0D4F301446496833AED3B8088_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mE64CAEFC88B56EE692AA35DE5C04F6F1E5CA7843_RuntimeMethod_var);
		PropertyAccessor_1_t96321CC9404BDDA3C50DC400A87A60AC9EEE87A9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		PropertyAccessor_1__ctor_m1F9DAD4B75E3D28D077D23FFFCDE7A412391C1CA((&L_2), L_1, 0, /*hidden argument*/PropertyAccessor_1__ctor_m1F9DAD4B75E3D28D077D23FFFCDE7A412391C1CA_RuntimeMethod_var);
		((PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields*)il2cpp_codegen_static_fields_for(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_il2cpp_TypeInfo_var))->set_LiveUpdate_0(L_2);
		// public static readonly PropertyAccessor<int> LiveUpdatePort
		//         = new PropertyAccessor<int>(properties => properties.LiveUpdatePort, 9264);
		U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * L_3 = ((U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87 * L_4 = (Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87 *)il2cpp_codegen_object_new(Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87_il2cpp_TypeInfo_var);
		Func_2__ctor_mDFCD9D28A06A79FBE7DB11E3FDE4C4203A77A584(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__14_1_mAAA25F79AD860007F5330D1C24E5070971933AA4_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mDFCD9D28A06A79FBE7DB11E3FDE4C4203A77A584_RuntimeMethod_var);
		PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  L_5;
		memset((&L_5), 0, sizeof(L_5));
		PropertyAccessor_1__ctor_mA3732FA4712BD8D1BCAF3ED04FAC2A6DD33E9060((&L_5), L_4, ((int32_t)9264), /*hidden argument*/PropertyAccessor_1__ctor_mA3732FA4712BD8D1BCAF3ED04FAC2A6DD33E9060_RuntimeMethod_var);
		((PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields*)il2cpp_codegen_static_fields_for(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_il2cpp_TypeInfo_var))->set_LiveUpdatePort_1(L_5);
		// public static readonly PropertyAccessor<TriStateBool> Overlay
		//         = new PropertyAccessor<TriStateBool>(properties => properties.Overlay, TriStateBool.Disabled);
		U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * L_6 = ((U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tA49219E9EC3C0B2E9A55DEFD7CAD14C1121311C7 * L_7 = (Func_2_tA49219E9EC3C0B2E9A55DEFD7CAD14C1121311C7 *)il2cpp_codegen_object_new(Func_2_tA49219E9EC3C0B2E9A55DEFD7CAD14C1121311C7_il2cpp_TypeInfo_var);
		Func_2__ctor_mE64CAEFC88B56EE692AA35DE5C04F6F1E5CA7843(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__14_2_m3E47B29A9146C61755C5547E3D60E5F11B4CAFD6_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mE64CAEFC88B56EE692AA35DE5C04F6F1E5CA7843_RuntimeMethod_var);
		PropertyAccessor_1_t96321CC9404BDDA3C50DC400A87A60AC9EEE87A9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		PropertyAccessor_1__ctor_m1F9DAD4B75E3D28D077D23FFFCDE7A412391C1CA((&L_8), L_7, 0, /*hidden argument*/PropertyAccessor_1__ctor_m1F9DAD4B75E3D28D077D23FFFCDE7A412391C1CA_RuntimeMethod_var);
		((PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields*)il2cpp_codegen_static_fields_for(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_il2cpp_TypeInfo_var))->set_Overlay_2(L_8);
		// public static readonly PropertyAccessor<TriStateBool> Logging
		//         = new PropertyAccessor<TriStateBool>(properties => properties.Logging, TriStateBool.Disabled);
		U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * L_9 = ((U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tA49219E9EC3C0B2E9A55DEFD7CAD14C1121311C7 * L_10 = (Func_2_tA49219E9EC3C0B2E9A55DEFD7CAD14C1121311C7 *)il2cpp_codegen_object_new(Func_2_tA49219E9EC3C0B2E9A55DEFD7CAD14C1121311C7_il2cpp_TypeInfo_var);
		Func_2__ctor_mE64CAEFC88B56EE692AA35DE5C04F6F1E5CA7843(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__14_3_mC9777CCA1C44EAE907B386301A0CF4DECCC06270_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mE64CAEFC88B56EE692AA35DE5C04F6F1E5CA7843_RuntimeMethod_var);
		PropertyAccessor_1_t96321CC9404BDDA3C50DC400A87A60AC9EEE87A9  L_11;
		memset((&L_11), 0, sizeof(L_11));
		PropertyAccessor_1__ctor_m1F9DAD4B75E3D28D077D23FFFCDE7A412391C1CA((&L_11), L_10, 0, /*hidden argument*/PropertyAccessor_1__ctor_m1F9DAD4B75E3D28D077D23FFFCDE7A412391C1CA_RuntimeMethod_var);
		((PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields*)il2cpp_codegen_static_fields_for(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_il2cpp_TypeInfo_var))->set_Logging_3(L_11);
		// public static readonly PropertyAccessor<int> SampleRate
		//         = new PropertyAccessor<int>(properties => properties.SampleRate, 0);
		U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * L_12 = ((U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87 * L_13 = (Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87 *)il2cpp_codegen_object_new(Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87_il2cpp_TypeInfo_var);
		Func_2__ctor_mDFCD9D28A06A79FBE7DB11E3FDE4C4203A77A584(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__14_4_m9ABCF4B4F2B725B6E9BF6D75FF9A2D8B8FF0A963_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mDFCD9D28A06A79FBE7DB11E3FDE4C4203A77A584_RuntimeMethod_var);
		PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  L_14;
		memset((&L_14), 0, sizeof(L_14));
		PropertyAccessor_1__ctor_mA3732FA4712BD8D1BCAF3ED04FAC2A6DD33E9060((&L_14), L_13, 0, /*hidden argument*/PropertyAccessor_1__ctor_mA3732FA4712BD8D1BCAF3ED04FAC2A6DD33E9060_RuntimeMethod_var);
		((PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields*)il2cpp_codegen_static_fields_for(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_il2cpp_TypeInfo_var))->set_SampleRate_4(L_14);
		// public static readonly PropertyAccessor<string> BuildDirectory
		//         = new PropertyAccessor<string>(properties => properties.BuildDirectory, "Desktop");
		U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * L_15 = ((U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t45BDF03ABB29FE835EF6F6CA3ABD009BAB9995AF * L_16 = (Func_2_t45BDF03ABB29FE835EF6F6CA3ABD009BAB9995AF *)il2cpp_codegen_object_new(Func_2_t45BDF03ABB29FE835EF6F6CA3ABD009BAB9995AF_il2cpp_TypeInfo_var);
		Func_2__ctor_mA1B14C222C3C3E3A9FB75789907F3ABC297C4974(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__14_5_m7E66F4F94CE79EBF563DB336D0684EEF466E104A_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mA1B14C222C3C3E3A9FB75789907F3ABC297C4974_RuntimeMethod_var);
		PropertyAccessor_1_t1968EAF8A354C79829234FCD558C156A8B4280C7  L_17;
		memset((&L_17), 0, sizeof(L_17));
		PropertyAccessor_1__ctor_m3E035A428D209C7A6DF0F2FBFD799C59C3EEEF4C((&L_17), L_16, _stringLiteralDB784C0FDB5E2F468943EF04EB13EE0E6135421C, /*hidden argument*/PropertyAccessor_1__ctor_m3E035A428D209C7A6DF0F2FBFD799C59C3EEEF4C_RuntimeMethod_var);
		((PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields*)il2cpp_codegen_static_fields_for(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_il2cpp_TypeInfo_var))->set_BuildDirectory_5(L_17);
		// public static readonly PropertyAccessor<FMOD.SPEAKERMODE> SpeakerMode
		//         = new PropertyAccessor<FMOD.SPEAKERMODE>(properties => properties.SpeakerMode, FMOD.SPEAKERMODE.STEREO);
		U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * L_18 = ((U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tCB94F642CEF6C6C7ECD6A1E2038D7EE45FE8E8E5 * L_19 = (Func_2_tCB94F642CEF6C6C7ECD6A1E2038D7EE45FE8E8E5 *)il2cpp_codegen_object_new(Func_2_tCB94F642CEF6C6C7ECD6A1E2038D7EE45FE8E8E5_il2cpp_TypeInfo_var);
		Func_2__ctor_mFB468477EB787E9D6D78904DFE15B7754F5B3890(L_19, L_18, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__14_6_m84479FC00F8EC3B1E7A48D5128D03DA591B86256_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mFB468477EB787E9D6D78904DFE15B7754F5B3890_RuntimeMethod_var);
		PropertyAccessor_1_tFFFFA4523004CF950187CE99473C24DEF92A7375  L_20;
		memset((&L_20), 0, sizeof(L_20));
		PropertyAccessor_1__ctor_m85B8153BC5914536F568B4EBE5E1A5D7E05F185B((&L_20), L_19, 3, /*hidden argument*/PropertyAccessor_1__ctor_m85B8153BC5914536F568B4EBE5E1A5D7E05F185B_RuntimeMethod_var);
		((PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields*)il2cpp_codegen_static_fields_for(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_il2cpp_TypeInfo_var))->set_SpeakerMode_6(L_20);
		// public static readonly PropertyAccessor<int> VirtualChannelCount
		//         = new PropertyAccessor<int>(properties => properties.VirtualChannelCount, 128);
		U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * L_21 = ((U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87 * L_22 = (Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87 *)il2cpp_codegen_object_new(Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87_il2cpp_TypeInfo_var);
		Func_2__ctor_mDFCD9D28A06A79FBE7DB11E3FDE4C4203A77A584(L_22, L_21, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__14_7_m8B0C496900697695BFE6F209B8BD79C250DC2048_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mDFCD9D28A06A79FBE7DB11E3FDE4C4203A77A584_RuntimeMethod_var);
		PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  L_23;
		memset((&L_23), 0, sizeof(L_23));
		PropertyAccessor_1__ctor_mA3732FA4712BD8D1BCAF3ED04FAC2A6DD33E9060((&L_23), L_22, ((int32_t)128), /*hidden argument*/PropertyAccessor_1__ctor_mA3732FA4712BD8D1BCAF3ED04FAC2A6DD33E9060_RuntimeMethod_var);
		((PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields*)il2cpp_codegen_static_fields_for(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_il2cpp_TypeInfo_var))->set_VirtualChannelCount_7(L_23);
		// public static readonly PropertyAccessor<int> RealChannelCount
		//         = new PropertyAccessor<int>(properties => properties.RealChannelCount, 32);
		U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * L_24 = ((U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87 * L_25 = (Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87 *)il2cpp_codegen_object_new(Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87_il2cpp_TypeInfo_var);
		Func_2__ctor_mDFCD9D28A06A79FBE7DB11E3FDE4C4203A77A584(L_25, L_24, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__14_8_m861E26F6400EBE971FA3DF318E348E06B886371C_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mDFCD9D28A06A79FBE7DB11E3FDE4C4203A77A584_RuntimeMethod_var);
		PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  L_26;
		memset((&L_26), 0, sizeof(L_26));
		PropertyAccessor_1__ctor_mA3732FA4712BD8D1BCAF3ED04FAC2A6DD33E9060((&L_26), L_25, ((int32_t)32), /*hidden argument*/PropertyAccessor_1__ctor_mA3732FA4712BD8D1BCAF3ED04FAC2A6DD33E9060_RuntimeMethod_var);
		((PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields*)il2cpp_codegen_static_fields_for(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_il2cpp_TypeInfo_var))->set_RealChannelCount_8(L_26);
		// public static readonly PropertyAccessor<int> DSPBufferLength
		//         = new PropertyAccessor<int>(properties => properties.DSPBufferLength, 0);
		U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * L_27 = ((U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87 * L_28 = (Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87 *)il2cpp_codegen_object_new(Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87_il2cpp_TypeInfo_var);
		Func_2__ctor_mDFCD9D28A06A79FBE7DB11E3FDE4C4203A77A584(L_28, L_27, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__14_9_m8573561C3E240DDF90082684F297114CA7A5424A_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mDFCD9D28A06A79FBE7DB11E3FDE4C4203A77A584_RuntimeMethod_var);
		PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  L_29;
		memset((&L_29), 0, sizeof(L_29));
		PropertyAccessor_1__ctor_mA3732FA4712BD8D1BCAF3ED04FAC2A6DD33E9060((&L_29), L_28, 0, /*hidden argument*/PropertyAccessor_1__ctor_mA3732FA4712BD8D1BCAF3ED04FAC2A6DD33E9060_RuntimeMethod_var);
		((PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields*)il2cpp_codegen_static_fields_for(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_il2cpp_TypeInfo_var))->set_DSPBufferLength_9(L_29);
		// public static readonly PropertyAccessor<int> DSPBufferCount
		//         = new PropertyAccessor<int>(properties => properties.DSPBufferCount, 0);
		U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * L_30 = ((U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87 * L_31 = (Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87 *)il2cpp_codegen_object_new(Func_2_t7A426115D7F76DE8ACF498B64940D6026D9A6B87_il2cpp_TypeInfo_var);
		Func_2__ctor_mDFCD9D28A06A79FBE7DB11E3FDE4C4203A77A584(L_31, L_30, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__14_10_m8DBFA5C36184F6A8A23BF7E4D1819B3C4360E40F_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mDFCD9D28A06A79FBE7DB11E3FDE4C4203A77A584_RuntimeMethod_var);
		PropertyAccessor_1_t71D833514AB5DF25876A18C9F229922A80C551F5  L_32;
		memset((&L_32), 0, sizeof(L_32));
		PropertyAccessor_1__ctor_mA3732FA4712BD8D1BCAF3ED04FAC2A6DD33E9060((&L_32), L_31, 0, /*hidden argument*/PropertyAccessor_1__ctor_mA3732FA4712BD8D1BCAF3ED04FAC2A6DD33E9060_RuntimeMethod_var);
		((PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields*)il2cpp_codegen_static_fields_for(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_il2cpp_TypeInfo_var))->set_DSPBufferCount_10(L_32);
		// public static readonly PropertyAccessor<List<string>> Plugins
		//         = new PropertyAccessor<List<string>>(properties => properties.Plugins, null);
		U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * L_33 = ((U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t6CE4CF30CD70D39A2CB75A55B5B0E742D1C226F7 * L_34 = (Func_2_t6CE4CF30CD70D39A2CB75A55B5B0E742D1C226F7 *)il2cpp_codegen_object_new(Func_2_t6CE4CF30CD70D39A2CB75A55B5B0E742D1C226F7_il2cpp_TypeInfo_var);
		Func_2__ctor_mBEE0B8FCEEC73FB03A94AB3C323E5167497AE30F(L_34, L_33, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__14_11_m1787A1CCDB2C9F44F5B998B4E3C9EEC22B9AB46E_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mBEE0B8FCEEC73FB03A94AB3C323E5167497AE30F_RuntimeMethod_var);
		PropertyAccessor_1_t15B7F2DF654FDDC891E7169F661426D3BAECEC83  L_35;
		memset((&L_35), 0, sizeof(L_35));
		PropertyAccessor_1__ctor_m9A30F83C45C1F465269ED8BAFCFED58DC60C8519((&L_35), L_34, (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)NULL, /*hidden argument*/PropertyAccessor_1__ctor_m9A30F83C45C1F465269ED8BAFCFED58DC60C8519_RuntimeMethod_var);
		((PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields*)il2cpp_codegen_static_fields_for(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_il2cpp_TypeInfo_var))->set_Plugins_11(L_35);
		// public static readonly PropertyAccessor<List<string>> StaticPlugins
		//         = new PropertyAccessor<List<string>>(properties => properties.StaticPlugins, null);
		U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * L_36 = ((U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t6CE4CF30CD70D39A2CB75A55B5B0E742D1C226F7 * L_37 = (Func_2_t6CE4CF30CD70D39A2CB75A55B5B0E742D1C226F7 *)il2cpp_codegen_object_new(Func_2_t6CE4CF30CD70D39A2CB75A55B5B0E742D1C226F7_il2cpp_TypeInfo_var);
		Func_2__ctor_mBEE0B8FCEEC73FB03A94AB3C323E5167497AE30F(L_37, L_36, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__14_12_mEBE2F4D7572C12932DBD15DFE12E0B36488D5EDB_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mBEE0B8FCEEC73FB03A94AB3C323E5167497AE30F_RuntimeMethod_var);
		PropertyAccessor_1_t15B7F2DF654FDDC891E7169F661426D3BAECEC83  L_38;
		memset((&L_38), 0, sizeof(L_38));
		PropertyAccessor_1__ctor_m9A30F83C45C1F465269ED8BAFCFED58DC60C8519((&L_38), L_37, (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)NULL, /*hidden argument*/PropertyAccessor_1__ctor_m9A30F83C45C1F465269ED8BAFCFED58DC60C8519_RuntimeMethod_var);
		((PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields*)il2cpp_codegen_static_fields_for(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_il2cpp_TypeInfo_var))->set_StaticPlugins_12(L_38);
		// public static readonly PropertyAccessor<PlatformCallbackHandler> CallbackHandler
		//         = new PropertyAccessor<PlatformCallbackHandler>(properties => properties.CallbackHandler, null);
		U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * L_39 = ((U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t90D3EC3607DEE77133AB325243D70D3BF30481BE * L_40 = (Func_2_t90D3EC3607DEE77133AB325243D70D3BF30481BE *)il2cpp_codegen_object_new(Func_2_t90D3EC3607DEE77133AB325243D70D3BF30481BE_il2cpp_TypeInfo_var);
		Func_2__ctor_mBF95B76079873F4404E885D6D391FBF733466CE6(L_40, L_39, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__14_13_mA59F5F47EAAA9ABAA5547C6D92A046B183B5DD64_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mBF95B76079873F4404E885D6D391FBF733466CE6_RuntimeMethod_var);
		PropertyAccessor_1_t3C8A958245F3CC9B3C19B07ACE22016929868EB0  L_41;
		memset((&L_41), 0, sizeof(L_41));
		PropertyAccessor_1__ctor_mCF8928B830DA0BB19BD8D9E0A88FB5153D920206((&L_41), L_40, (PlatformCallbackHandler_tC97A12E9191ED7EE208965B8DF447CA520F3EE51 *)NULL, /*hidden argument*/PropertyAccessor_1__ctor_mCF8928B830DA0BB19BD8D9E0A88FB5153D920206_RuntimeMethod_var);
		((PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_StaticFields*)il2cpp_codegen_static_fields_for(PropertyAccessors_t61E7C0DA0134D7335D942233A6613EFD7705ADEB_il2cpp_TypeInfo_var))->set_CallbackHandler_13(L_41);
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
// System.Void FMODUnity.Platform/PropertyBool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBool__ctor_m0567EF16D7EA19240FBE2C1ED89E4817D03D1FCB (PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Property_1__ctor_m1867A586B284C85D865E2B26C3CF7850A85A87E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Property_1__ctor_m1867A586B284C85D865E2B26C3CF7850A85A87E2(__this, /*hidden argument*/Property_1__ctor_m1867A586B284C85D865E2B26C3CF7850A85A87E2_RuntimeMethod_var);
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
// System.Void FMODUnity.Platform/PropertyCallbackHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCallbackHandler__ctor_mEFF071029B507D712DA08461F62F51F33238A7A2 (PropertyCallbackHandler_t82B0903BB420520717D537266810EE85744AC4BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Property_1__ctor_m45B06F418615B089A5E4AD312936DEA12461BAA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Property_1__ctor_m45B06F418615B089A5E4AD312936DEA12461BAA3(__this, /*hidden argument*/Property_1__ctor_m45B06F418615B089A5E4AD312936DEA12461BAA3_RuntimeMethod_var);
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
// System.Void FMODUnity.Platform/PropertyInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyInt__ctor_mBDA03B7695DD8E890452E369495E5B98B4399820 (PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Property_1__ctor_mF85F2D93388A82EC6A9743737CA3FCF5308A5464_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Property_1__ctor_mF85F2D93388A82EC6A9743737CA3FCF5308A5464(__this, /*hidden argument*/Property_1__ctor_mF85F2D93388A82EC6A9743737CA3FCF5308A5464_RuntimeMethod_var);
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
// System.Void FMODUnity.Platform/PropertySpeakerMode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertySpeakerMode__ctor_mC50C7C6D0AD6F65409E367B25BE80808C18CB46B (PropertySpeakerMode_tF3E57F3B6A469063306C480AD774C57ABB010CEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Property_1__ctor_m84423BD3659DABF710EC1DFE227C731DD9735C50_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Property_1__ctor_m84423BD3659DABF710EC1DFE227C731DD9735C50(__this, /*hidden argument*/Property_1__ctor_m84423BD3659DABF710EC1DFE227C731DD9735C50_RuntimeMethod_var);
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
// System.Void FMODUnity.Platform/PropertyStorage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStorage__ctor_m063CF17DD0730468FED0CB9860E0678AEBC8BC43 (PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCallbackHandler_t82B0903BB420520717D537266810EE85744AC4BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertySpeakerMode_tF3E57F3B6A469063306C480AD774C57ABB010CEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyStringList_t88EB50D87DA26E8B975BEA698EF4A67DBE1830BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyString_tD68EEE1C2850E21FA13D8B6EE52BD852444904C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PropertyBool LiveUpdate = new PropertyBool();
		PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 * L_0 = (PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 *)il2cpp_codegen_object_new(PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169_il2cpp_TypeInfo_var);
		PropertyBool__ctor_m0567EF16D7EA19240FBE2C1ED89E4817D03D1FCB(L_0, /*hidden argument*/NULL);
		__this->set_LiveUpdate_0(L_0);
		// public PropertyInt LiveUpdatePort = new PropertyInt();
		PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * L_1 = (PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D *)il2cpp_codegen_object_new(PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D_il2cpp_TypeInfo_var);
		PropertyInt__ctor_mBDA03B7695DD8E890452E369495E5B98B4399820(L_1, /*hidden argument*/NULL);
		__this->set_LiveUpdatePort_1(L_1);
		// public PropertyBool Overlay = new PropertyBool();
		PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 * L_2 = (PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 *)il2cpp_codegen_object_new(PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169_il2cpp_TypeInfo_var);
		PropertyBool__ctor_m0567EF16D7EA19240FBE2C1ED89E4817D03D1FCB(L_2, /*hidden argument*/NULL);
		__this->set_Overlay_2(L_2);
		// public PropertyBool Logging = new PropertyBool();
		PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 * L_3 = (PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 *)il2cpp_codegen_object_new(PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169_il2cpp_TypeInfo_var);
		PropertyBool__ctor_m0567EF16D7EA19240FBE2C1ED89E4817D03D1FCB(L_3, /*hidden argument*/NULL);
		__this->set_Logging_3(L_3);
		// public PropertyInt SampleRate = new PropertyInt();
		PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * L_4 = (PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D *)il2cpp_codegen_object_new(PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D_il2cpp_TypeInfo_var);
		PropertyInt__ctor_mBDA03B7695DD8E890452E369495E5B98B4399820(L_4, /*hidden argument*/NULL);
		__this->set_SampleRate_4(L_4);
		// public PropertyString BuildDirectory = new PropertyString();
		PropertyString_tD68EEE1C2850E21FA13D8B6EE52BD852444904C5 * L_5 = (PropertyString_tD68EEE1C2850E21FA13D8B6EE52BD852444904C5 *)il2cpp_codegen_object_new(PropertyString_tD68EEE1C2850E21FA13D8B6EE52BD852444904C5_il2cpp_TypeInfo_var);
		PropertyString__ctor_m8325BFE0028864949746E8DFCE514F21F9DD2949(L_5, /*hidden argument*/NULL);
		__this->set_BuildDirectory_5(L_5);
		// public PropertySpeakerMode SpeakerMode = new PropertySpeakerMode();
		PropertySpeakerMode_tF3E57F3B6A469063306C480AD774C57ABB010CEF * L_6 = (PropertySpeakerMode_tF3E57F3B6A469063306C480AD774C57ABB010CEF *)il2cpp_codegen_object_new(PropertySpeakerMode_tF3E57F3B6A469063306C480AD774C57ABB010CEF_il2cpp_TypeInfo_var);
		PropertySpeakerMode__ctor_mC50C7C6D0AD6F65409E367B25BE80808C18CB46B(L_6, /*hidden argument*/NULL);
		__this->set_SpeakerMode_6(L_6);
		// public PropertyInt VirtualChannelCount = new PropertyInt();
		PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * L_7 = (PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D *)il2cpp_codegen_object_new(PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D_il2cpp_TypeInfo_var);
		PropertyInt__ctor_mBDA03B7695DD8E890452E369495E5B98B4399820(L_7, /*hidden argument*/NULL);
		__this->set_VirtualChannelCount_7(L_7);
		// public PropertyInt RealChannelCount = new PropertyInt();
		PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * L_8 = (PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D *)il2cpp_codegen_object_new(PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D_il2cpp_TypeInfo_var);
		PropertyInt__ctor_mBDA03B7695DD8E890452E369495E5B98B4399820(L_8, /*hidden argument*/NULL);
		__this->set_RealChannelCount_8(L_8);
		// public PropertyInt DSPBufferLength = new PropertyInt();
		PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * L_9 = (PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D *)il2cpp_codegen_object_new(PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D_il2cpp_TypeInfo_var);
		PropertyInt__ctor_mBDA03B7695DD8E890452E369495E5B98B4399820(L_9, /*hidden argument*/NULL);
		__this->set_DSPBufferLength_9(L_9);
		// public PropertyInt DSPBufferCount = new PropertyInt();
		PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * L_10 = (PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D *)il2cpp_codegen_object_new(PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D_il2cpp_TypeInfo_var);
		PropertyInt__ctor_mBDA03B7695DD8E890452E369495E5B98B4399820(L_10, /*hidden argument*/NULL);
		__this->set_DSPBufferCount_10(L_10);
		// public PropertyStringList Plugins = new PropertyStringList();
		PropertyStringList_t88EB50D87DA26E8B975BEA698EF4A67DBE1830BC * L_11 = (PropertyStringList_t88EB50D87DA26E8B975BEA698EF4A67DBE1830BC *)il2cpp_codegen_object_new(PropertyStringList_t88EB50D87DA26E8B975BEA698EF4A67DBE1830BC_il2cpp_TypeInfo_var);
		PropertyStringList__ctor_mCC87BFDFAA4F92CCDC693B57EB3CECEDA39D7B6B(L_11, /*hidden argument*/NULL);
		__this->set_Plugins_11(L_11);
		// public PropertyStringList StaticPlugins = new PropertyStringList();
		PropertyStringList_t88EB50D87DA26E8B975BEA698EF4A67DBE1830BC * L_12 = (PropertyStringList_t88EB50D87DA26E8B975BEA698EF4A67DBE1830BC *)il2cpp_codegen_object_new(PropertyStringList_t88EB50D87DA26E8B975BEA698EF4A67DBE1830BC_il2cpp_TypeInfo_var);
		PropertyStringList__ctor_mCC87BFDFAA4F92CCDC693B57EB3CECEDA39D7B6B(L_12, /*hidden argument*/NULL);
		__this->set_StaticPlugins_12(L_12);
		// public PropertyCallbackHandler CallbackHandler = new PropertyCallbackHandler();
		PropertyCallbackHandler_t82B0903BB420520717D537266810EE85744AC4BA * L_13 = (PropertyCallbackHandler_t82B0903BB420520717D537266810EE85744AC4BA *)il2cpp_codegen_object_new(PropertyCallbackHandler_t82B0903BB420520717D537266810EE85744AC4BA_il2cpp_TypeInfo_var);
		PropertyCallbackHandler__ctor_mEFF071029B507D712DA08461F62F51F33238A7A2(L_13, /*hidden argument*/NULL);
		__this->set_CallbackHandler_13(L_13);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void FMODUnity.Platform/PropertyString::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyString__ctor_m8325BFE0028864949746E8DFCE514F21F9DD2949 (PropertyString_tD68EEE1C2850E21FA13D8B6EE52BD852444904C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Property_1__ctor_mB197BF6AC6FEAC7C95892A3EC3FE4CA222869B11_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Property_1__ctor_mB197BF6AC6FEAC7C95892A3EC3FE4CA222869B11(__this, /*hidden argument*/Property_1__ctor_mB197BF6AC6FEAC7C95892A3EC3FE4CA222869B11_RuntimeMethod_var);
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
// System.Void FMODUnity.Platform/PropertyStringList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStringList__ctor_mCC87BFDFAA4F92CCDC693B57EB3CECEDA39D7B6B (PropertyStringList_t88EB50D87DA26E8B975BEA698EF4A67DBE1830BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Property_1__ctor_mEF40FA558B2DD2E0A08F5AA02EF426345B4B5BC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Property_1__ctor_mEF40FA558B2DD2E0A08F5AA02EF426345B4B5BC3(__this, /*hidden argument*/Property_1__ctor_mEF40FA558B2DD2E0A08F5AA02EF426345B4B5BC3_RuntimeMethod_var);
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
// System.Void FMODUnity.Platform/PropertyThreadAffinityList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyThreadAffinityList__ctor_m6B9CB8299ED2216FB8ADD9476F07A54B4A20016A (PropertyThreadAffinityList_tE480BD2634070CFF10C439920F759371BDEA1AD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Property_1__ctor_m31BF39C9050A5905D3EF2E31077FA63DB33985A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Property_1__ctor_m31BF39C9050A5905D3EF2E31077FA63DB33985A3(__this, /*hidden argument*/Property_1__ctor_m31BF39C9050A5905D3EF2E31077FA63DB33985A3_RuntimeMethod_var);
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
// System.Void FMODUnity.RuntimeManager/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m9BC5C177CCB0447426EDD241B9B5F1DCB4147DD3 (U3CU3Ec__DisplayClass31_0_t743089B7D9CD15662B23C72EFC50E6D5A0B88507 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean FMODUnity.RuntimeManager/<>c__DisplayClass31_0::<AttachInstanceToGameObject>b__0(FMODUnity.RuntimeManager/AttachedInstance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass31_0_U3CAttachInstanceToGameObjectU3Eb__0_m19D6499CEA257864FF773D1B483E0E15755176B5 (U3CU3Ec__DisplayClass31_0_t743089B7D9CD15662B23C72EFC50E6D5A0B88507 * __this, AttachedInstance_t532AE68813E2E569A0F6EA003247D7CEDC2C9ABD * ___x0, const RuntimeMethod* method)
{
	{
		// AttachedInstance attachedInstance = Instance.attachedInstances.Find(x => x.instance.handle == instance.handle);
		AttachedInstance_t532AE68813E2E569A0F6EA003247D7CEDC2C9ABD * L_0 = ___x0;
		NullCheck(L_0);
		EventInstance_t77E43F521C3E42A51B553C95F04A518E03B7E2C8 * L_1 = L_0->get_address_of_instance_0();
		intptr_t L_2 = L_1->get_handle_0();
		EventInstance_t77E43F521C3E42A51B553C95F04A518E03B7E2C8 * L_3 = __this->get_address_of_instance_0();
		intptr_t L_4 = L_3->get_handle_0();
		bool L_5;
		L_5 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void FMODUnity.RuntimeManager/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_m3ED140FED82659C42CE8194AEAACDA5C298A6CD1 (U3CU3Ec__DisplayClass32_0_t341FE52DD07C1796D32D9204F25D127B3ABC76AA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean FMODUnity.RuntimeManager/<>c__DisplayClass32_0::<AttachInstanceToGameObject>b__0(FMODUnity.RuntimeManager/AttachedInstance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass32_0_U3CAttachInstanceToGameObjectU3Eb__0_m8FE4E1F82C39B89FF1CAD5AF8DFF2E6D619176D5 (U3CU3Ec__DisplayClass32_0_t341FE52DD07C1796D32D9204F25D127B3ABC76AA * __this, AttachedInstance_t532AE68813E2E569A0F6EA003247D7CEDC2C9ABD * ___x0, const RuntimeMethod* method)
{
	{
		// AttachedInstance attachedInstance = Instance.attachedInstances.Find(x => x.instance.handle == instance.handle);
		AttachedInstance_t532AE68813E2E569A0F6EA003247D7CEDC2C9ABD * L_0 = ___x0;
		NullCheck(L_0);
		EventInstance_t77E43F521C3E42A51B553C95F04A518E03B7E2C8 * L_1 = L_0->get_address_of_instance_0();
		intptr_t L_2 = L_1->get_handle_0();
		EventInstance_t77E43F521C3E42A51B553C95F04A518E03B7E2C8 * L_3 = __this->get_address_of_instance_0();
		intptr_t L_4 = L_3->get_handle_0();
		bool L_5;
		L_5 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void FMODUnity.RuntimeManager/<>c__DisplayClass47_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_0__ctor_m42D2A969D23F672649493C6D52F6CA81923CA873 (U3CU3Ec__DisplayClass47_0_t6726AEBE852AC39B728D9ABAE656E4688F0335FD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FMODUnity.RuntimeManager/<>c__DisplayClass47_0::<LoadBank>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.TextAsset>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_0_U3CLoadBankU3Eb__0_mEC40FE3F2DB68620B4E19578D1A22BB2D26920D8 (U3CU3Ec__DisplayClass47_0_t6726AEBE852AC39B728D9ABAE656E4688F0335FD * __this, AsyncOperationHandle_1_tD070A0F62515499D7FF4A4ED2147D5F151EA3BE7  ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeManager_t1DD0703C1A7473D65A44439D647D7C6B0C36C8FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Asset_Completed(result, loadSamples);
		AsyncOperationHandle_1_tD070A0F62515499D7FF4A4ED2147D5F151EA3BE7  L_0 = ___result0;
		bool L_1 = __this->get_loadSamples_0();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeManager_t1DD0703C1A7473D65A44439D647D7C6B0C36C8FF_il2cpp_TypeInfo_var);
		RuntimeManager_Asset_Completed_m3F20E79043C9C8B403302E584B00E5E56960988B(L_0, L_1, /*hidden argument*/NULL);
		// if (completionCallback != null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = __this->get_completionCallback_1();
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// completionCallback();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = __this->get_completionCallback_1();
		NullCheck(L_3);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// };
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
// System.Void FMODUnity.RuntimeManager/AttachedInstance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachedInstance__ctor_m37B483919D11A90F8E17A3D9EC01B42F0474D50C (AttachedInstance_t532AE68813E2E569A0F6EA003247D7CEDC2C9ABD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Boolean FMODUnity.RuntimeManager/GuidComparer::System.Collections.Generic.IEqualityComparer<System.Guid>.Equals(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GuidComparer_System_Collections_Generic_IEqualityComparerU3CSystem_GuidU3E_Equals_mBE23E5F4E64C84DA0B8DABFC4C7A3A4146251781 (GuidComparer_tAE5181CABB0C1A30EB2F2FC1FCC29F83D3D9AD0F * __this, Guid_t  ___x0, Guid_t  ___y1, const RuntimeMethod* method)
{
	{
		// return x.Equals(y);
		Guid_t  L_0 = ___y1;
		bool L_1;
		L_1 = Guid_Equals_m602304DBC4842AB53670762A6DB52D30C3973258((Guid_t *)(&___x0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 FMODUnity.RuntimeManager/GuidComparer::System.Collections.Generic.IEqualityComparer<System.Guid>.GetHashCode(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GuidComparer_System_Collections_Generic_IEqualityComparerU3CSystem_GuidU3E_GetHashCode_m64A1A4596A8DED8C709868F755539ED938438D6B (GuidComparer_tAE5181CABB0C1A30EB2F2FC1FCC29F83D3D9AD0F * __this, Guid_t  ___obj0, const RuntimeMethod* method)
{
	{
		// return obj.GetHashCode();
		int32_t L_0;
		L_0 = Guid_GetHashCode_mD32F5054E937C98B3D082594B3849808F1E92AE7((Guid_t *)(&___obj0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void FMODUnity.RuntimeManager/GuidComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GuidComparer__ctor_m3D4FF0CB9CA636239E00C0976C5ADD29397C538A (GuidComparer_tAE5181CABB0C1A30EB2F2FC1FCC29F83D3D9AD0F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void FMODUnity.Settings/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m479D079C1AADBAD06284092C6020880A04067212 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321 * L_0 = (U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321 *)il2cpp_codegen_object_new(U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8E6ABD2D76ABAB567FFFCED999F598A98A6310E3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void FMODUnity.Settings/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8E6ABD2D76ABAB567FFFCED999F598A98A6310E3 (U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 FMODUnity.Settings/<>c::<DeclareRuntimePlatform>b__58_0(FMODUnity.Platform,FMODUnity.Platform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CDeclareRuntimePlatformU3Eb__58_0_mB1C56E247A7F9BE305B5BB47B071E10495E22412 (U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321 * __this, Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149 * ___a0, Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149 * ___b1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// platforms.Sort((a, b) => b.Priority.CompareTo(a.Priority));
		Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149 * L_0 = ___b1;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(7 /* System.Single FMODUnity.Platform::get_Priority() */, L_0);
		V_0 = L_1;
		Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149 * L_2 = ___a0;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtFuncInvoker0< float >::Invoke(7 /* System.Single FMODUnity.Platform::get_Priority() */, L_2);
		int32_t L_4;
		L_4 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4((float*)(&V_0), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean FMODUnity.Settings/<>c::<OnEnable>b__68_0(FMODUnity.Platform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3COnEnableU3Eb__68_0_mDB8F94E27EB34222B936DE2F08219B113B6E09E6 (U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321 * __this, Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149 * ___platform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformDefault_tDCBF760189750C7A6A4423F691E90C7C630FE695_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// defaultPlatform = Platforms.Values.FirstOrDefault(platform => platform is PlatformDefault);
		Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149 * L_0 = ___platform0;
		return (bool)((!(((RuntimeObject*)(PlatformDefault_tDCBF760189750C7A6A4423F691E90C7C630FE695 *)((PlatformDefault_tDCBF760189750C7A6A4423F691E90C7C630FE695 *)IsInstClass((RuntimeObject*)L_0, PlatformDefault_tDCBF760189750C7A6A4423F691E90C7C630FE695_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Boolean FMODUnity.Settings/<>c::<OnEnable>b__68_1(FMODUnity.Platform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3COnEnableU3Eb__68_1_m685B42B2AB30398E3CE0451D5AC6642B07330742 (U3CU3Ec_t334290F6E3A789B6AFE7C3DDFE0EF4227F263321 * __this, Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149 * ___platform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformPlayInEditor_t3D26345BC831A559DCBA74716780060FE12EDDFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playInEditorPlatform = Platforms.Values.FirstOrDefault(platform => platform is PlatformPlayInEditor);
		Platform_tE8F84147C7810C77DCE545072F8A30FA4CAA7149 * L_0 = ___platform0;
		return (bool)((!(((RuntimeObject*)(PlatformPlayInEditor_t3D26345BC831A559DCBA74716780060FE12EDDFA *)((PlatformPlayInEditor_t3D26345BC831A559DCBA74716780060FE12EDDFA *)IsInstClass((RuntimeObject*)L_0, PlatformPlayInEditor_t3D26345BC831A559DCBA74716780060FE12EDDFA_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
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
// Conversion methods for marshalling of: FMODUnity.Settings/PlatformTemplate
IL2CPP_EXTERN_C void PlatformTemplate_t915029C76629EF71EE33DA24FF80AC465B2067ED_marshal_pinvoke(const PlatformTemplate_t915029C76629EF71EE33DA24FF80AC465B2067ED& unmarshaled, PlatformTemplate_t915029C76629EF71EE33DA24FF80AC465B2067ED_marshaled_pinvoke& marshaled)
{
	marshaled.___Identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.get_Identifier_0());
	marshaled.___CreateInstance_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_CreateInstance_1()));
}
IL2CPP_EXTERN_C void PlatformTemplate_t915029C76629EF71EE33DA24FF80AC465B2067ED_marshal_pinvoke_back(const PlatformTemplate_t915029C76629EF71EE33DA24FF80AC465B2067ED_marshaled_pinvoke& marshaled, PlatformTemplate_t915029C76629EF71EE33DA24FF80AC465B2067ED& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tD8217A517B81548153B648DD9D5285A3A78807D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_Identifier_0(il2cpp_codegen_marshal_string_result(marshaled.___Identifier_0));
	unmarshaled.set_CreateInstance_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Func_1_tD8217A517B81548153B648DD9D5285A3A78807D4>(marshaled.___CreateInstance_1, Func_1_tD8217A517B81548153B648DD9D5285A3A78807D4_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: FMODUnity.Settings/PlatformTemplate
IL2CPP_EXTERN_C void PlatformTemplate_t915029C76629EF71EE33DA24FF80AC465B2067ED_marshal_pinvoke_cleanup(PlatformTemplate_t915029C76629EF71EE33DA24FF80AC465B2067ED_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Identifier_0);
	marshaled.___Identifier_0 = NULL;
}
// Conversion methods for marshalling of: FMODUnity.Settings/PlatformTemplate
IL2CPP_EXTERN_C void PlatformTemplate_t915029C76629EF71EE33DA24FF80AC465B2067ED_marshal_com(const PlatformTemplate_t915029C76629EF71EE33DA24FF80AC465B2067ED& unmarshaled, PlatformTemplate_t915029C76629EF71EE33DA24FF80AC465B2067ED_marshaled_com& marshaled)
{
	marshaled.___Identifier_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Identifier_0());
	marshaled.___CreateInstance_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_CreateInstance_1()));
}
IL2CPP_EXTERN_C void PlatformTemplate_t915029C76629EF71EE33DA24FF80AC465B2067ED_marshal_com_back(const PlatformTemplate_t915029C76629EF71EE33DA24FF80AC465B2067ED_marshaled_com& marshaled, PlatformTemplate_t915029C76629EF71EE33DA24FF80AC465B2067ED& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tD8217A517B81548153B648DD9D5285A3A78807D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_Identifier_0(il2cpp_codegen_marshal_bstring_result(marshaled.___Identifier_0));
	unmarshaled.set_CreateInstance_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Func_1_tD8217A517B81548153B648DD9D5285A3A78807D4>(marshaled.___CreateInstance_1, Func_1_tD8217A517B81548153B648DD9D5285A3A78807D4_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: FMODUnity.Settings/PlatformTemplate
IL2CPP_EXTERN_C void PlatformTemplate_t915029C76629EF71EE33DA24FF80AC465B2067ED_marshal_com_cleanup(PlatformTemplate_t915029C76629EF71EE33DA24FF80AC465B2067ED_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Identifier_0);
	marshaled.___Identifier_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean FMOD.StringHelper/ThreadSafeEncoding::InUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadSafeEncoding_InUse_m95FAB0E4B43A0D613FF10B661650FEFCF96ED755 (ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * __this, const RuntimeMethod* method)
{
	{
		// public bool InUse()    { return inUse; }
		bool L_0 = __this->get_inUse_3();
		return L_0;
	}
}
// System.Void FMOD.StringHelper/ThreadSafeEncoding::SetInUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeEncoding_SetInUse_m419EF0AE9044CDE5BE3D45B551F049310B1F47AF (ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * __this, const RuntimeMethod* method)
{
	{
		// public void SetInUse() { inUse = true; }
		__this->set_inUse_3((bool)1);
		// public void SetInUse() { inUse = true; }
		return;
	}
}
// System.Int32 FMOD.StringHelper/ThreadSafeEncoding::roundUpPowerTwo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreadSafeEncoding_roundUpPowerTwo_m3B6CA912A332C06497B5FE3A0D4CF6336A8816BB (ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * __this, int32_t ___number0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int newNumber = 1;
		V_0 = 1;
		goto IL_0008;
	}

IL_0004:
	{
		// newNumber *= 2;
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)2));
	}

IL_0008:
	{
		// while (newNumber <= number)
		int32_t L_1 = V_0;
		int32_t L_2 = ___number0;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0004;
		}
	}
	{
		// return newNumber;
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] FMOD.StringHelper/ThreadSafeEncoding::byteFromStringUTF8(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ThreadSafeEncoding_byteFromStringUTF8_m125AE74374BC84CA626377F9CF7FDF6DF0D1E24E (ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (s == null)
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
	}

IL_0005:
	{
		// int maximumLength = encoding.GetMaxByteCount(s.Length) + 1; 
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_1 = __this->get_encoding_0();
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_4;
		L_4 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(29 /* System.Int32 System.Text.Encoding::GetMaxByteCount(System.Int32) */, L_1, L_3);
		// if (maximumLength > encodedBuffer.Length)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get_encodedBuffer_1();
		NullCheck(L_5);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_004e;
		}
	}
	{
		// int encodedLength = encoding.GetByteCount(s) + 1; 
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_6 = __this->get_encoding_0();
		String_t* L_7 = ___s0;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = VirtFuncInvoker1< int32_t, String_t* >::Invoke(9 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_6, L_7);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		// if (encodedLength > encodedBuffer.Length)
		int32_t L_9 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = __this->get_encodedBuffer_1();
		NullCheck(L_10);
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_004e;
		}
	}
	{
		// encodedBuffer = new byte[roundUpPowerTwo(encodedLength)];
		int32_t L_11 = V_1;
		int32_t L_12;
		L_12 = ThreadSafeEncoding_roundUpPowerTwo_m3B6CA912A332C06497B5FE3A0D4CF6336A8816BB(__this, L_11, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_12);
		__this->set_encodedBuffer_1(L_13);
	}

IL_004e:
	{
		// int byteCount = encoding.GetBytes(s, 0, s.Length, encodedBuffer, 0);
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_14 = __this->get_encoding_0();
		String_t* L_15 = ___s0;
		String_t* L_16 = ___s0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_16, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = __this->get_encodedBuffer_1();
		NullCheck(L_14);
		int32_t L_19;
		L_19 = VirtFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(16 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_14, L_15, 0, L_17, L_18, 0);
		V_0 = L_19;
		// encodedBuffer[byteCount] = 0; 
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = __this->get_encodedBuffer_1();
		int32_t L_21 = V_0;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint8_t)0);
		// return encodedBuffer;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = __this->get_encodedBuffer_1();
		return L_22;
	}
}
// System.IntPtr FMOD.StringHelper/ThreadSafeEncoding::intptrFromStringUTF8(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ThreadSafeEncoding_intptrFromStringUTF8_m696A338AABE8077540283139A745C1187E4EF9DD (ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s == null)
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}

IL_0009:
	{
		// gcHandle = GCHandle.Alloc(byteFromStringUTF8(s), GCHandleType.Pinned);
		String_t* L_1 = ___s0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = ThreadSafeEncoding_byteFromStringUTF8_m125AE74374BC84CA626377F9CF7FDF6DF0D1E24E(__this, L_1, /*hidden argument*/NULL);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_3;
		L_3 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC((RuntimeObject *)(RuntimeObject *)L_2, 3, /*hidden argument*/NULL);
		__this->set_gcHandle_4(L_3);
		// return gcHandle.AddrOfPinnedObject();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_4 = __this->get_address_of_gcHandle_4();
		intptr_t L_5;
		L_5 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_4, /*hidden argument*/NULL);
		return (intptr_t)L_5;
	}
}
// System.String FMOD.StringHelper/ThreadSafeEncoding::stringFromNative(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThreadSafeEncoding_stringFromNative_mC8F16234AA2F887DD608463B826DB612F4998234 (ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (nativePtr == IntPtr.Zero)
		intptr_t L_0 = ___nativePtr0;
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0013:
	{
		// int nativeLen = 0;
		V_0 = 0;
		goto IL_001b;
	}

IL_0017:
	{
		// nativeLen++;
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_001b:
	{
		// while (Marshal.ReadByte(nativePtr, nativeLen) != 0)
		intptr_t L_3 = ___nativePtr0;
		int32_t L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		uint8_t L_5;
		L_5 = Marshal_ReadByte_mA0E9E8CE64BFEEA553E2ADB92201A4187F3BCFCA((intptr_t)L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0017;
		}
	}
	{
		// if (nativeLen == 0)
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_002d;
		}
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_002d:
	{
		// if (nativeLen > encodedBuffer.Length)
		int32_t L_7 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_encodedBuffer_1();
		NullCheck(L_8);
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_004a;
		}
	}
	{
		// encodedBuffer = new byte[roundUpPowerTwo(nativeLen)];
		int32_t L_9 = V_0;
		int32_t L_10;
		L_10 = ThreadSafeEncoding_roundUpPowerTwo_m3B6CA912A332C06497B5FE3A0D4CF6336A8816BB(__this, L_9, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->set_encodedBuffer_1(L_11);
	}

IL_004a:
	{
		// Marshal.Copy(nativePtr, encodedBuffer, 0, nativeLen);
		intptr_t L_12 = ___nativePtr0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = __this->get_encodedBuffer_1();
		int32_t L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m057A8067BF7212A361510EA26B24022990A07AC0((intptr_t)L_12, L_13, 0, L_14, /*hidden argument*/NULL);
		// int maximumLength = encoding.GetMaxCharCount(nativeLen);
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_15 = __this->get_encoding_0();
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17;
		L_17 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(30 /* System.Int32 System.Text.Encoding::GetMaxCharCount(System.Int32) */, L_15, L_16);
		// if (maximumLength > decodedBuffer.Length)
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_18 = __this->get_decodedBuffer_2();
		NullCheck(L_18);
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_009f;
		}
	}
	{
		// int decodedLength = encoding.GetCharCount(encodedBuffer, 0, nativeLen);
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_19 = __this->get_encoding_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = __this->get_encodedBuffer_1();
		int32_t L_21 = V_0;
		NullCheck(L_19);
		int32_t L_22;
		L_22 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(19 /* System.Int32 System.Text.Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32) */, L_19, L_20, 0, L_21);
		V_2 = L_22;
		// if (decodedLength > decodedBuffer.Length)
		int32_t L_23 = V_2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_24 = __this->get_decodedBuffer_2();
		NullCheck(L_24);
		if ((((int32_t)L_23) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_009f;
		}
	}
	{
		// decodedBuffer = new char[roundUpPowerTwo(decodedLength)];
		int32_t L_25 = V_2;
		int32_t L_26;
		L_26 = ThreadSafeEncoding_roundUpPowerTwo_m3B6CA912A332C06497B5FE3A0D4CF6336A8816BB(__this, L_25, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_27 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_26);
		__this->set_decodedBuffer_2(L_27);
	}

IL_009f:
	{
		// int charCount = encoding.GetChars(encodedBuffer, 0, nativeLen, decodedBuffer, 0);
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_28 = __this->get_encoding_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = __this->get_encodedBuffer_1();
		int32_t L_30 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_31 = __this->get_decodedBuffer_2();
		NullCheck(L_28);
		int32_t L_32;
		L_32 = VirtFuncInvoker5< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t >::Invoke(23 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_28, L_29, 0, L_30, L_31, 0);
		V_1 = L_32;
		// return new String(decodedBuffer, 0, charCount);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_33 = __this->get_decodedBuffer_2();
		int32_t L_34 = V_1;
		String_t* L_35;
		L_35 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_33, 0, L_34, /*hidden argument*/NULL);
		return L_35;
	}
}
// System.Void FMOD.StringHelper/ThreadSafeEncoding::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeEncoding_Dispose_mC0CA8555E81EAE1190070C9EC60639C375771E6A (ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t91D0D60A613B416BB5626856EE90EB0A17817EF0 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (gcHandle.IsAllocated)
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_0 = __this->get_address_of_gcHandle_4();
		bool L_1;
		L_1 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// gcHandle.Free();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_2 = __this->get_address_of_gcHandle_4();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// lock (encoders)
		IL2CPP_RUNTIME_CLASS_INIT(StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var);
		List_1_t91D0D60A613B416BB5626856EE90EB0A17817EF0 * L_3 = ((StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_StaticFields*)il2cpp_codegen_static_fields_for(StringHelper_t6ECA2959E47C57368910FCEB71728BBDC58FCFAC_il2cpp_TypeInfo_var))->get_encoders_0();
		V_0 = L_3;
		V_1 = (bool)0;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		List_1_t91D0D60A613B416BB5626856EE90EB0A17817EF0 * L_4 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_4, (bool*)(&V_1), /*hidden argument*/NULL);
		// inUse = false;
		__this->set_inUse_3((bool)0);
		// }
		IL2CPP_LEAVE(0x3B, FINALLY_0031);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_003a;
			}
		}

IL_0034:
		{
			List_1_t91D0D60A613B416BB5626856EE90EB0A17817EF0 * L_6 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		}

IL_003a:
		{
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void FMOD.StringHelper/ThreadSafeEncoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeEncoding__ctor_m91B95AB7513463D8B3040DF059B100A041D020AD (ThreadSafeEncoding_t60A88DD304C33E31AF253C304F89CDCD1978D5F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UTF8Encoding encoding = new UTF8Encoding();
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_0 = (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 *)il2cpp_codegen_object_new(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_mA3F21D41B65D155202345802A05761A4BC022888(L_0, /*hidden argument*/NULL);
		__this->set_encoding_0(L_0);
		// byte[] encodedBuffer = new byte[128];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		__this->set_encodedBuffer_1(L_1);
		// char[] decodedBuffer = new char[128];
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		__this->set_decodedBuffer_2(L_2);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void FMODUnity.StudioEventEmitter/<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_m77D09031DE88C9A1C71303B3FA0CBF77A652D1A3 (U3CU3Ec__DisplayClass36_0_t2E7737B844C58FC858C236201BAAA594F7C7E47E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean FMODUnity.StudioEventEmitter/<>c__DisplayClass36_0::<SetParameter>b__0(FMODUnity.ParamRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass36_0_U3CSetParameterU3Eb__0_m034489280740ED9B556309A2732229D4AA7AC2F9 (U3CU3Ec__DisplayClass36_0_t2E7737B844C58FC858C236201BAAA594F7C7E47E * __this, ParamRef_t6751E36E401E0FC867147A1DD315969996D15FFD * ___x0, const RuntimeMethod* method)
{
	{
		// ParamRef cachedParam = cachedParams.Find(x => x.Name == name);
		ParamRef_t6751E36E401E0FC867147A1DD315969996D15FFD * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Name_0();
		String_t* L_2 = __this->get_name_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void FMODUnity.StudioEventEmitter/<>c__DisplayClass37_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0__ctor_m18866DB9FC35576A31DE728B4B99A3152E7A54A0 (U3CU3Ec__DisplayClass37_0_t984A7E1C8D24EAE682C8C38DEBC8FF7DC8B2E465 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean FMODUnity.StudioEventEmitter/<>c__DisplayClass37_0::<SetParameter>b__0(FMODUnity.ParamRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass37_0_U3CSetParameterU3Eb__0_mED2EC630E2D60D95A0B2CA7D52C63111EFF70F31 (U3CU3Ec__DisplayClass37_0_t984A7E1C8D24EAE682C8C38DEBC8FF7DC8B2E465 * __this, ParamRef_t6751E36E401E0FC867147A1DD315969996D15FFD * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ParamRef cachedParam = cachedParams.Find(x => x.ID.Equals(id));
		ParamRef_t6751E36E401E0FC867147A1DD315969996D15FFD * L_0 = ___x0;
		NullCheck(L_0);
		PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE * L_1 = L_0->get_address_of_ID_2();
		PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  L_2 = __this->get_id_0();
		PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE  L_3 = L_2;
		RuntimeObject * L_4 = Box(PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE_il2cpp_TypeInfo_var, &L_3);
		RuntimeObject * L_5 = Box(PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_4);
		*L_1 = *(PARAMETER_ID_tA3DF765F0097003249124531BBD036AA904E5BBE *)UnBox(L_5);
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
// System.Void FMODUnity.Platform/PropertyAccessors/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE014C9FB204A8E50282B04A406C0AF5DA534A692 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * L_0 = (U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 *)il2cpp_codegen_object_new(U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m40B6542A3EAB0CC8E819EF0FAE68BBD28459836F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void FMODUnity.Platform/PropertyAccessors/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m40B6542A3EAB0CC8E819EF0FAE68BBD28459836F (U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// FMODUnity.Platform/Property`1<FMODUnity.TriStateBool> FMODUnity.Platform/PropertyAccessors/<>c::<.cctor>b__14_0(FMODUnity.Platform/PropertyStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Property_1_tB4DC4D8A4B1A7885B188EF3DFCDA5F0FC8965C97 * U3CU3Ec_U3C_cctorU3Eb__14_0_m4E0FE056D0DF81F0D4F301446496833AED3B8088 (U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * __this, PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * ___properties0, const RuntimeMethod* method)
{
	{
		// = new PropertyAccessor<TriStateBool>(properties => properties.LiveUpdate, TriStateBool.Disabled);
		PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * L_0 = ___properties0;
		NullCheck(L_0);
		PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 * L_1 = L_0->get_LiveUpdate_0();
		return L_1;
	}
}
// FMODUnity.Platform/Property`1<System.Int32> FMODUnity.Platform/PropertyAccessors/<>c::<.cctor>b__14_1(FMODUnity.Platform/PropertyStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Property_1_tB69257AE89C1BAE96A39B56ECAA943FF1F44411F * U3CU3Ec_U3C_cctorU3Eb__14_1_mAAA25F79AD860007F5330D1C24E5070971933AA4 (U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * __this, PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * ___properties0, const RuntimeMethod* method)
{
	{
		// = new PropertyAccessor<int>(properties => properties.LiveUpdatePort, 9264);
		PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * L_0 = ___properties0;
		NullCheck(L_0);
		PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * L_1 = L_0->get_LiveUpdatePort_1();
		return L_1;
	}
}
// FMODUnity.Platform/Property`1<FMODUnity.TriStateBool> FMODUnity.Platform/PropertyAccessors/<>c::<.cctor>b__14_2(FMODUnity.Platform/PropertyStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Property_1_tB4DC4D8A4B1A7885B188EF3DFCDA5F0FC8965C97 * U3CU3Ec_U3C_cctorU3Eb__14_2_m3E47B29A9146C61755C5547E3D60E5F11B4CAFD6 (U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * __this, PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * ___properties0, const RuntimeMethod* method)
{
	{
		// = new PropertyAccessor<TriStateBool>(properties => properties.Overlay, TriStateBool.Disabled);
		PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * L_0 = ___properties0;
		NullCheck(L_0);
		PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 * L_1 = L_0->get_Overlay_2();
		return L_1;
	}
}
// FMODUnity.Platform/Property`1<FMODUnity.TriStateBool> FMODUnity.Platform/PropertyAccessors/<>c::<.cctor>b__14_3(FMODUnity.Platform/PropertyStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Property_1_tB4DC4D8A4B1A7885B188EF3DFCDA5F0FC8965C97 * U3CU3Ec_U3C_cctorU3Eb__14_3_mC9777CCA1C44EAE907B386301A0CF4DECCC06270 (U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * __this, PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * ___properties0, const RuntimeMethod* method)
{
	{
		// = new PropertyAccessor<TriStateBool>(properties => properties.Logging, TriStateBool.Disabled);
		PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * L_0 = ___properties0;
		NullCheck(L_0);
		PropertyBool_tF4E6FB78E19119F767054DB0E0C02EE3E931C169 * L_1 = L_0->get_Logging_3();
		return L_1;
	}
}
// FMODUnity.Platform/Property`1<System.Int32> FMODUnity.Platform/PropertyAccessors/<>c::<.cctor>b__14_4(FMODUnity.Platform/PropertyStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Property_1_tB69257AE89C1BAE96A39B56ECAA943FF1F44411F * U3CU3Ec_U3C_cctorU3Eb__14_4_m9ABCF4B4F2B725B6E9BF6D75FF9A2D8B8FF0A963 (U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * __this, PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * ___properties0, const RuntimeMethod* method)
{
	{
		// = new PropertyAccessor<int>(properties => properties.SampleRate, 0);
		PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * L_0 = ___properties0;
		NullCheck(L_0);
		PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * L_1 = L_0->get_SampleRate_4();
		return L_1;
	}
}
// FMODUnity.Platform/Property`1<System.String> FMODUnity.Platform/PropertyAccessors/<>c::<.cctor>b__14_5(FMODUnity.Platform/PropertyStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Property_1_t4FFACE60733293ECEBB1863470178A4D5DA5EFD9 * U3CU3Ec_U3C_cctorU3Eb__14_5_m7E66F4F94CE79EBF563DB336D0684EEF466E104A (U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * __this, PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * ___properties0, const RuntimeMethod* method)
{
	{
		// = new PropertyAccessor<string>(properties => properties.BuildDirectory, "Desktop");
		PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * L_0 = ___properties0;
		NullCheck(L_0);
		PropertyString_tD68EEE1C2850E21FA13D8B6EE52BD852444904C5 * L_1 = L_0->get_BuildDirectory_5();
		return L_1;
	}
}
// FMODUnity.Platform/Property`1<FMOD.SPEAKERMODE> FMODUnity.Platform/PropertyAccessors/<>c::<.cctor>b__14_6(FMODUnity.Platform/PropertyStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Property_1_tB7992A7FE9E273F12B5AD18F27A64E5FE522A31E * U3CU3Ec_U3C_cctorU3Eb__14_6_m84479FC00F8EC3B1E7A48D5128D03DA591B86256 (U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * __this, PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * ___properties0, const RuntimeMethod* method)
{
	{
		// = new PropertyAccessor<FMOD.SPEAKERMODE>(properties => properties.SpeakerMode, FMOD.SPEAKERMODE.STEREO);
		PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * L_0 = ___properties0;
		NullCheck(L_0);
		PropertySpeakerMode_tF3E57F3B6A469063306C480AD774C57ABB010CEF * L_1 = L_0->get_SpeakerMode_6();
		return L_1;
	}
}
// FMODUnity.Platform/Property`1<System.Int32> FMODUnity.Platform/PropertyAccessors/<>c::<.cctor>b__14_7(FMODUnity.Platform/PropertyStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Property_1_tB69257AE89C1BAE96A39B56ECAA943FF1F44411F * U3CU3Ec_U3C_cctorU3Eb__14_7_m8B0C496900697695BFE6F209B8BD79C250DC2048 (U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * __this, PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * ___properties0, const RuntimeMethod* method)
{
	{
		// = new PropertyAccessor<int>(properties => properties.VirtualChannelCount, 128);
		PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * L_0 = ___properties0;
		NullCheck(L_0);
		PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * L_1 = L_0->get_VirtualChannelCount_7();
		return L_1;
	}
}
// FMODUnity.Platform/Property`1<System.Int32> FMODUnity.Platform/PropertyAccessors/<>c::<.cctor>b__14_8(FMODUnity.Platform/PropertyStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Property_1_tB69257AE89C1BAE96A39B56ECAA943FF1F44411F * U3CU3Ec_U3C_cctorU3Eb__14_8_m861E26F6400EBE971FA3DF318E348E06B886371C (U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * __this, PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * ___properties0, const RuntimeMethod* method)
{
	{
		// = new PropertyAccessor<int>(properties => properties.RealChannelCount, 32);
		PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * L_0 = ___properties0;
		NullCheck(L_0);
		PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * L_1 = L_0->get_RealChannelCount_8();
		return L_1;
	}
}
// FMODUnity.Platform/Property`1<System.Int32> FMODUnity.Platform/PropertyAccessors/<>c::<.cctor>b__14_9(FMODUnity.Platform/PropertyStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Property_1_tB69257AE89C1BAE96A39B56ECAA943FF1F44411F * U3CU3Ec_U3C_cctorU3Eb__14_9_m8573561C3E240DDF90082684F297114CA7A5424A (U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * __this, PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * ___properties0, const RuntimeMethod* method)
{
	{
		// = new PropertyAccessor<int>(properties => properties.DSPBufferLength, 0);
		PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * L_0 = ___properties0;
		NullCheck(L_0);
		PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * L_1 = L_0->get_DSPBufferLength_9();
		return L_1;
	}
}
// FMODUnity.Platform/Property`1<System.Int32> FMODUnity.Platform/PropertyAccessors/<>c::<.cctor>b__14_10(FMODUnity.Platform/PropertyStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Property_1_tB69257AE89C1BAE96A39B56ECAA943FF1F44411F * U3CU3Ec_U3C_cctorU3Eb__14_10_m8DBFA5C36184F6A8A23BF7E4D1819B3C4360E40F (U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * __this, PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * ___properties0, const RuntimeMethod* method)
{
	{
		// = new PropertyAccessor<int>(properties => properties.DSPBufferCount, 0);
		PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * L_0 = ___properties0;
		NullCheck(L_0);
		PropertyInt_tCB1AA14CEBEA3F712644B049BAAC3DD2BA9CBE4D * L_1 = L_0->get_DSPBufferCount_10();
		return L_1;
	}
}
// FMODUnity.Platform/Property`1<System.Collections.Generic.List`1<System.String>> FMODUnity.Platform/PropertyAccessors/<>c::<.cctor>b__14_11(FMODUnity.Platform/PropertyStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Property_1_tFF04740DA05A1C6E8363931B19AEED7384C75CEE * U3CU3Ec_U3C_cctorU3Eb__14_11_m1787A1CCDB2C9F44F5B998B4E3C9EEC22B9AB46E (U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * __this, PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * ___properties0, const RuntimeMethod* method)
{
	{
		// = new PropertyAccessor<List<string>>(properties => properties.Plugins, null);
		PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * L_0 = ___properties0;
		NullCheck(L_0);
		PropertyStringList_t88EB50D87DA26E8B975BEA698EF4A67DBE1830BC * L_1 = L_0->get_Plugins_11();
		return L_1;
	}
}
// FMODUnity.Platform/Property`1<System.Collections.Generic.List`1<System.String>> FMODUnity.Platform/PropertyAccessors/<>c::<.cctor>b__14_12(FMODUnity.Platform/PropertyStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Property_1_tFF04740DA05A1C6E8363931B19AEED7384C75CEE * U3CU3Ec_U3C_cctorU3Eb__14_12_mEBE2F4D7572C12932DBD15DFE12E0B36488D5EDB (U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * __this, PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * ___properties0, const RuntimeMethod* method)
{
	{
		// = new PropertyAccessor<List<string>>(properties => properties.StaticPlugins, null);
		PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * L_0 = ___properties0;
		NullCheck(L_0);
		PropertyStringList_t88EB50D87DA26E8B975BEA698EF4A67DBE1830BC * L_1 = L_0->get_StaticPlugins_12();
		return L_1;
	}
}
// FMODUnity.Platform/Property`1<FMODUnity.PlatformCallbackHandler> FMODUnity.Platform/PropertyAccessors/<>c::<.cctor>b__14_13(FMODUnity.Platform/PropertyStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Property_1_t6770127C86A531D398D7204DB7CC4E497F04FEDE * U3CU3Ec_U3C_cctorU3Eb__14_13_mA59F5F47EAAA9ABAA5547C6D92A046B183B5DD64 (U3CU3Ec_tE42C0D8DA5DC2F4D04ED62D06FB82F2677C38548 * __this, PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * ___properties0, const RuntimeMethod* method)
{
	{
		// = new PropertyAccessor<PlatformCallbackHandler>(properties => properties.CallbackHandler, null);
		PropertyStorage_t7F2B80F6F5980FAE1D5535233B905C9750264076 * L_0 = ___properties0;
		NullCheck(L_0);
		PropertyCallbackHandler_t82B0903BB420520717D537266810EE85744AC4BA * L_1 = L_0->get_CallbackHandler_13();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void System__ctor_mF18709942E8E08A25810DDE7A5626D65FDA300AD_inline (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	{
		// public System(IntPtr ptr)   { this.handle = ptr; }
		intptr_t L_0 = ___ptr0;
		__this->set_handle_0((intptr_t)L_0);
		// public System(IntPtr ptr)   { this.handle = ptr; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VCA__ctor_mCB5031A88E72F2D90BBA2CFC7620CCBC03DF9AF4_inline (VCA_t8D58F06AAB98BB0934396D34E2DFE001FCAD9805 * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	{
		// public VCA(IntPtr ptr)      { this.handle = ptr; }
		intptr_t L_0 = ___ptr0;
		__this->set_handle_0((intptr_t)L_0);
		// public VCA(IntPtr ptr)      { this.handle = ptr; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
